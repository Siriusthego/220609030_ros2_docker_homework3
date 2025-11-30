# BYM412 – Ödev 3  
## ROS 2 ve DOcker Sistem Projesi Ödevi  
**Hazırlayan:** Abdullah Emir Kireçci
**Öğrenci No:** 220609030

Bu proje, BYM412 Robotik dersi kapsamında geliştirilen üç düğümlü bir ROS 2 (Humble) sisteminin
Docker konteyneri içinde çalıştırılmasını ve servis–topic doğrulamalarının yapılmasını içerir.

---

# Projenin Amacı

Bu çalışma ile:

- ROS 2 düğümlerinin nasıl yazıldığı,
- Topic tabanlı veri akışı,
- Servis tabanlı komut üretimi,
- Docker içinde ROS workspace çalıştırma,
- Launch dosyalarıyla çoklu node yönetimi

uygulamalı olarak gerçekleştirilmiştir.

Sistem 3 düğümden oluşur

**sensor_publisher_pkg**
**data_processor_pkg**
**command_server_pkg**

Bu düğümler **my_project** adlı launch paketi ile tek komutla çalıştırılır.

---

# Proje Klasör Yapısı

```
project_root/
│
├── Dockerfile
├── entrypoint.sh
├── ssf.sh
├── SSF_HASH.txt
├── README.md
│
└── src/
	├── sensor_publisher_pkg/
	├── data_processor_pkg/
	├── command_server_pkg/
	└── my_project/ Launch paketi
```

---

# Düğümlerin Açıklaması

## sensor_publisher_pkg
- Topic: `/sensor_value`
- Mesaj türü: `std_msgs/msg/Float32`
- Görev: Her 0.1 saniyede bir sahte sensör verisi üretir.  
- Uygulama: Random float üretimi.

---

## data_processor_pkg
- Subscriber: `/sensor_value`
- Publisher: `/processed_value`
- Mesaj türü: `std_msgs/msg/Float32`
- Görev: Gelen sensör verisini işleyip yeni bir topic olarak yayınlar.  
(Örnek işlem: `processed = input * 2`)

---

## command_server_pkg
- Servis adı: `/compute_command`
- Servis türü: `command_server_pkg/srv/ComputeCommand`

### Mantık:
- `input > 10` → `"HIGH"`
- `input <= 10` → `"LOW"`

---

# Launch Dosyası (my_project)

`my_project` paketi içindeki launch dosyası üç nodeu aynı anda başlatır:


---

# Docker Kullanımı

## Docker imajı oluşturma:

```bash
docker build -t myrosapp > Konteyneri çalıştırır.
```
Bu komut ile:

 ROS 2 ortamı yüklenir
 Workspace sourcelandır
 ros2 launch my_project my_project.launch.py otomatik çalışır

## Topic Testi:

 ros2 topic list
 ros2 topic echo /processed_value

## Servis testi:

```
 ros2 service list
 ros2 service call /compute_command command_server_pkg/srv/ComputeCommand "{input: 12.5}"
```

Beklenen sonuç:
12.5 → "HIGH"
5.0 → "LOW"

## ÖNEMLİ NOT: ros2 launch çalışmıyorsa

Eğer şu hatayı görürseniz:

- Package 'my_project' not found

Bu, terminalinizin workspace’i görmediği anlamına gelir.
Her yeni terminal açtığınızda:

```
cd ~/project_root
source /opt/ros/humble/setup.bash
source install/setup.bash
```
Doğrulamak için:
ros2 pkg list | grep my_project

## SSF Doğrulaması

ssf.sh çalıştırılarak:

- SSF RAW, SSF SHA256 Hash üretilmiştir.

Oluşan dosya:
~/project_root/SSF_HASH.txt






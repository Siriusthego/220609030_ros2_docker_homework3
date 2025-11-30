# 1) Taban imaj
FROM ros:humble-ros-base

# 2) Çalışma dizini
WORKDIR /ws

# 3) Kodları /ws/src altına kopyala
COPY src/ /ws/src/
COPY launch/ /ws/launch/
COPY entrypoint.sh /ws/entrypoint.sh
COPY README.md /ws/README.md
COPY SSF_HASH.txt /ws/SSF_HASH.txt

# 4) Gerekli paketleri yükle (opsiyonel ama genelde lazım)
RUN apt-get update && apt-get install -y \
    python3-pip \
    && rm -rf /var/lib/apt/lists/*

# 5) Komutları bash ile çalıştır
SHELL ["/bin/bash", "-c"]

# 6) colcon build işlemi Docker içinde
RUN source /opt/ros/humble/setup.bash && \
    colcon build

# 7) ENTRYPOINT olarak entrypoint.sh
ENTRYPOINT ["/ws/entrypoint.sh"]



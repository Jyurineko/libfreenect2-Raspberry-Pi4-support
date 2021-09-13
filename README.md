# libfreenect2 - with OpenGLES 3.1 
 on PC should config GLES3.1 environment, I mean you can test on PC:) <br>
 code is the same. So~~
 
 on Raspberry Pi 4 you can directly use with cmake-gui :)
# Known solution to display problem
better using single one monitor directly connection, don't use vnc, it may cause many problem
# Tutorial 
 ### Here a short setup description for Debian (Buster) 32/64-bit by @busybeaver42:<br>
 sudo nano /boot/config.txt<br>
search and modify the GPU-memory:<br>
gpu_mem=64<br>

sudo nano /boot/cmdline.txt<br>
and modify to:<br>
console=serial0,115200 console=tty1 root=PARTUUID=e0e69b19-02
rootfstype=ext4 elevator=deadline fsck.repair=yes rootwait quiet splash plymouth.ignore-serial-consoles usbcore.usbfs_memory_mb=64 usbcore.autosuspend=-1

git clone https://github.com/Jyurineko/libfreenect2<br>
sudo apt install libudev-dev<br>
sudo apt install mesa-utils<br>
sudo apt update<br>
sudo apt install libgles2-mesa-dev<br>
Now similar to Linux install description from: https://github.com/OpenKinect/libfreenect2 ...<br>
sudo apt-get install libusb-1.0-0-dev<br>
sudo apt-get install libturbojpeg0-dev<br>
sudo apt-get install libglfw3-dev<br>
sudo apt-get install libopenni2-dev<br>
mkdir build && cd build<br>
cmake .. -DCMAKE_BUILD_TYPE=Release -DENABLE_CUDA=OFF -DENABLE_OPENCL=OFF -DENABLE_OPENGL_AS_ES31=ON -DENABLE_CXX11=ON -DENABLE_VAAPI=OFF<br>
make -j4<br>
sudo make install<br>
sudo ldconfig<br>
sudo cp ../platform/linux/udev/90-kinect2.rules /etc/udev/rules.d/<br>
./libfreenect2/build/bin/Protonect gl<br>

# Citation
<html>
      <head>
        https://github.com/OpenKinect/libfreenect2/issues/1084#issuecomment-917614521
        https://github.com/OpenKinect/libfreenect2
      </head>
</html>


# Acknowledgements
* To the [Libfreenect2](https://github.com/OpenKinect/libfreenect2) team for providing such an awesome work
* To [busybeaver42](https://github.com/busybeaver42) for providing so great summarized tutorial

# Docker image for Kinetic

If you are using 18.04 and you want to use ROS Kinetic with openGL aplications and intel graphics card, you can use this image.


## How to build the image

```
docker build --force-rm --build-arg UID=$(id -u) --build-arg GID=$(id -g) --tag moveo_kinetic .
```



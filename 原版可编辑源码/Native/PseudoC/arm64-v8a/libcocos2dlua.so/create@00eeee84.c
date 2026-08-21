
/* cocos2d::Camera::create() */

Camera * cocos2d::Camera::create(void)

{
  Camera *this;
  
  this = operator_new(0x4d0,(nothrow_t *)&std::nothrow);
  if (this != (Camera *)0x0) {
    Camera(this);
  }
  initDefault(this);
  Ref::autorelease((Ref *)this);
  if (this[0x495] != (Camera)0x0) {
    this[0x495] = (Camera)0x0;
    if (*(long *)(this + 0x2f8) != 0) {
      *(undefined1 *)(*(long *)(this + 0x2f8) + 0x318) = 1;
    }
  }
  return this;
}



/* cocos2d::Bundle3D::createBundle() */

Bundle3D * cocos2d::Bundle3D::createBundle(void)

{
  Bundle3D *this;
  
  this = operator_new(0x138,(nothrow_t *)&std::nothrow);
  if (this != (Bundle3D *)0x0) {
    Bundle3D(this);
  }
  return this;
}


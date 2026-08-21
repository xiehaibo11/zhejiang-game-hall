
undefined8 FUN_00912c20(undefined8 param_1)

{
  Ref *this;
  
  this = (Ref *)tolua_tousertype(param_1,1,0);
  cocos2d::Ref::release(this);
  return 0;
}


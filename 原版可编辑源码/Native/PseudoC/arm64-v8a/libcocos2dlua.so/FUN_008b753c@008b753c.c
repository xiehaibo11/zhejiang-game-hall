
undefined8 FUN_008b753c(undefined8 param_1)

{
  AutoPolygon *this;
  
  this = (AutoPolygon *)tolua_tousertype(param_1,1,0);
  if (this != (AutoPolygon *)0x0) {
    cocos2d::AutoPolygon::~AutoPolygon(this);
    operator_delete(this);
  }
  return 0;
}


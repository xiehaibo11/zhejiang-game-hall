
undefined8 FUN_008b7500(undefined8 param_1)

{
  Properties *this;
  
                    /* try { // try from 008b7500 to 009b759f has its CatchHandler @ 008b748c */
  this = (Properties *)tolua_tousertype(param_1,1,0);
  if (this != (Properties *)0x0) {
    cocos2d::Properties::~Properties(this);
    operator_delete(this);
  }
  return 0;
}


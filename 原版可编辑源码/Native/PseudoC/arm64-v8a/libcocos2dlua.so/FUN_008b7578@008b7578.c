
undefined8 FUN_008b7578(undefined8 param_1)

{
  PolygonInfo *this;
  
                    /* catch() { ... } // from try @ 008b74e8 with catch @ 008b7584 */
  this = (PolygonInfo *)tolua_tousertype(param_1,1,0);
  if (this != (PolygonInfo *)0x0) {
    cocos2d::PolygonInfo::~PolygonInfo(this);
                    /* try { // try from 008b75a0 to 009b75f7 has its CatchHandler @ 008b75a0
                       catch() { ... } // from try @ 008b75a0 with catch @ 008b75a0
                       catch() { ... } // from try @ 008b7610 with catch @ 008b75a0 */
    operator_delete(this);
  }
  return 0;
}


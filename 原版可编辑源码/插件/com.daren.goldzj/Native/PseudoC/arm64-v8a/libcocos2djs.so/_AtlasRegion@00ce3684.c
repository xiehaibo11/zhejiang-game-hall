
/* spine::AtlasRegion::~AtlasRegion() */

void __thiscall spine::AtlasRegion::~AtlasRegion(AtlasRegion *this)

{
  void *extraout_x1;
  
  ~AtlasRegion(this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}


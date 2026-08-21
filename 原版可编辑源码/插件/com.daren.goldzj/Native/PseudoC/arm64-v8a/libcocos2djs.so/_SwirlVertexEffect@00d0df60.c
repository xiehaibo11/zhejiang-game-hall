
/* spine::SwirlVertexEffect::~SwirlVertexEffect() */

void __thiscall spine::SwirlVertexEffect::~SwirlVertexEffect(SwirlVertexEffect *this)

{
  void *extraout_x1;
  
  SpineObject::~SpineObject((SpineObject *)this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}


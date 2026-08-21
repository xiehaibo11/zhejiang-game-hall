
/* spine::JitterVertexEffect::~JitterVertexEffect() */

void __thiscall spine::JitterVertexEffect::~JitterVertexEffect(JitterVertexEffect *this)

{
  void *extraout_x1;
  
  SpineObject::~SpineObject((SpineObject *)this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}


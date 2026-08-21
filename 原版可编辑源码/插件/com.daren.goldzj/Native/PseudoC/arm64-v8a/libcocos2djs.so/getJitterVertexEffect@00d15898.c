
/* spine::VertexEffectDelegate::getJitterVertexEffect() */

void __thiscall spine::VertexEffectDelegate::getJitterVertexEffect(VertexEffectDelegate *this)

{
  if (*(long *)(this + 0x10) != 0) {
    __dynamic_cast(*(long *)(this + 0x10),&VertexEffect::typeinfo,&JitterVertexEffect::typeinfo,0);
  }
  return;
}


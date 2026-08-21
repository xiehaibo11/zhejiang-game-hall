
/* spine::VertexEffectDelegate::getSwirlVertexEffect() */

void __thiscall spine::VertexEffectDelegate::getSwirlVertexEffect(VertexEffectDelegate *this)

{
  if (*(long *)(this + 0x10) != 0) {
    __dynamic_cast(*(long *)(this + 0x10),&VertexEffect::typeinfo,&SwirlVertexEffect::typeinfo,0);
  }
  return;
}


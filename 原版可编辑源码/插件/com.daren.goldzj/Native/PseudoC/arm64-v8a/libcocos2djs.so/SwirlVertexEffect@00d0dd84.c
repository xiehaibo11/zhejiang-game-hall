
/* spine::SwirlVertexEffect::SwirlVertexEffect(float, spine::Interpolation&) */

void __thiscall
spine::SwirlVertexEffect::SwirlVertexEffect
          (SwirlVertexEffect *this,float param_1,Interpolation *param_2)

{
  *(float *)(this + 0x10) = param_1;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined ***)this = &PTR__SpineObject_01c8fa50;
  *(Interpolation **)(this + 0x20) = param_2;
  return;
}


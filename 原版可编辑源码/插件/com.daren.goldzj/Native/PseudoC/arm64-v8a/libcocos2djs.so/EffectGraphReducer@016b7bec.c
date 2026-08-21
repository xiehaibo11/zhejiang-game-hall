
/* v8::internal::compiler::EffectGraphReducer::EffectGraphReducer(v8::internal::compiler::Graph*,
   std::__ndk1::function<void (v8::internal::compiler::Node*,
   v8::internal::compiler::EffectGraphReducer::Reduction*)>, v8::internal::TickCounter*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::EffectGraphReducer::EffectGraphReducer
          (EffectGraphReducer *this,Graph *param_1,long param_3,undefined8 param_4,
          undefined8 param_5)

{
  long lVar1;
  
  *(Graph **)(this + 8) = param_1;
  *this = (EffectGraphReducer)0x4;
  NodeMarkerBase::NodeMarkerBase((NodeMarkerBase *)(this + 0x10),param_1,4);
  *(undefined8 *)(this + 0x38) = param_5;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = param_5;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = param_5;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = param_5;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  lVar1 = *(long *)(param_3 + 0x20);
  if (lVar1 == 0) {
    *(undefined8 *)(this + 0xe0) = 0;
  }
  else if (param_3 == lVar1) {
    *(EffectGraphReducer **)(this + 0xe0) = this + 0xc0;
    (**(code **)(**(long **)(param_3 + 0x20) + 0x18))();
  }
  else {
    *(long *)(this + 0xe0) = lVar1;
    *(undefined8 *)(param_3 + 0x20) = 0;
  }
  *(undefined8 *)(this + 0xf0) = param_4;
  return;
}


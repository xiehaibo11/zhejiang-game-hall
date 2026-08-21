
/* dragonBones::DeformTimelineState::~DeformTimelineState() */

void __thiscall dragonBones::DeformTimelineState::~DeformTimelineState(DeformTimelineState *this)

{
  void *pvVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__DeformTimelineState_016d6610;
  SlotTimelineState::_onClear((SlotTimelineState *)this);
  pvVar1 = *(void **)(this + 0xf0);
  pvVar2 = *(void **)(this + 0x108);
  *(undefined4 *)(this + 0xc0) = 0;
  this[0xc4] = (DeformTimelineState)0x0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xe0) = *(undefined8 *)(this + 0xd8);
  *(void **)(this + 0xf8) = pvVar1;
  *(void **)(this + 0x110) = pvVar2;
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x110) = pvVar2;
    operator_delete(pvVar2);
    pvVar1 = *(void **)(this + 0xf0);
  }
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xf8) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0xd8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xe0) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(this);
  return;
}



/* v8::internal::IC::ConfigureVectorState(v8::internal::InlineCacheState,
   v8::internal::Handle<v8::internal::Object>) */

uint __thiscall v8::internal::IC::ConfigureVectorState(IC *this,undefined8 param_2,ulong *param_3)

{
  IC *pIVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = *param_3;
  if ((uVar4 & 1) == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0x41;
  }
  uVar3 = FeedbackNexus::ConfigureMegamorphic((FeedbackNexus *)(this + 0x50),bVar2);
  this[0x10] = (IC)0x1;
  pIVar1 = this + 0x58;
  if (*(IC **)(this + 0x50) != (IC *)0x0) {
    pIVar1 = *(IC **)(this + 0x50);
  }
  OnFeedbackChanged(*(undefined8 *)(this + 8),*(undefined8 *)pIVar1);
  return uVar3 & 1;
}


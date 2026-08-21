
/* v8::internal::IC::ConfigureVectorState(v8::internal::Handle<v8::internal::Name>,
   v8::internal::Handle<v8::internal::Map>, v8::internal::Handle<v8::internal::Object>) */

void __thiscall
v8::internal::IC::ConfigureVectorState
          (IC *this,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  IC *pIVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 local_30 [2];
  undefined8 local_28;
  
  local_30[0] = 1;
  uVar3 = *(uint *)(this + 0x1c);
  local_28 = param_4;
  if (((uVar3 | 1) == 7) ||
     (((uVar4 = 0, uVar3 < 0xf &&
       (uVar3 = 1 << (ulong)(uVar3 & 0x1f), uVar4 = param_2, (uVar3 & 0x6308) == 0)) &&
      (uVar4 = 0, (uVar3 & 0x402) != 0)))) {
    FeedbackNexus::ConfigureHandlerMode
              ((FeedbackNexus *)(this + 0x50),(MaybeObjectHandle *)local_30);
  }
  else {
    FeedbackNexus::ConfigureMonomorphic((FeedbackNexus *)(this + 0x50),uVar4,param_3,local_30);
  }
  pcVar1 = "LoadGlobal";
  if ((*(uint *)(this + 0x1c) | 1) != 7) {
    pcVar1 = "Monomorphic";
  }
  this[0x10] = (IC)0x1;
  pIVar2 = this + 0x58;
  if (*(IC **)(this + 0x50) != (IC *)0x0) {
    pIVar2 = *(IC **)(this + 0x50);
  }
  OnFeedbackChanged(*(undefined8 *)(this + 8),*(undefined8 *)pIVar2,param_3,pcVar1);
  return;
}



/* v8::internal::IC::UpdateMonomorphicIC(v8::internal::MaybeObjectHandle const&,
   v8::internal::Handle<v8::internal::Name>) */

void __thiscall
v8::internal::IC::UpdateMonomorphicIC(IC *this,MaybeObjectHandle *param_1,undefined8 param_3)

{
  IC *pIVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = *(uint *)(this + 0x1c);
  if ((uVar2 | 1) != 7) {
    uVar3 = 0;
    if (((0xe < uVar2) ||
        (uVar2 = 1 << (ulong)(uVar2 & 0x1f), uVar3 = param_3, (uVar2 & 0x6308) != 0)) ||
       (uVar3 = 0, (uVar2 & 0x402) == 0)) {
      FeedbackNexus::ConfigureMonomorphic
                ((FeedbackNexus *)(this + 0x50),uVar3,*(undefined8 *)(this + 0x20));
      goto LAB_014fc31c;
    }
  }
  FeedbackNexus::ConfigureHandlerMode((FeedbackNexus *)(this + 0x50),param_1);
LAB_014fc31c:
  this[0x10] = (IC)0x1;
  pIVar1 = this + 0x58;
  if (*(IC **)(this + 0x50) != (IC *)0x0) {
    pIVar1 = *(IC **)(this + 0x50);
  }
  OnFeedbackChanged(*(undefined8 *)(this + 8),*(undefined8 *)pIVar1);
  return;
}


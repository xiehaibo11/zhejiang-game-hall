
/* v8::internal::JSFunction::ClearTypeFeedbackInfo() */

void __thiscall v8::internal::JSFunction::ClearTypeFeedbackInfo(JSFunction *this)

{
  uint uVar1;
  ulong uVar2;
  Isolate *pIVar3;
  ulong local_8;
  
  ResetIfBytecodeFlushed(this);
  uVar2 = *(ulong *)this & 0xffffffff00000000;
  uVar1 = *(uint *)((uVar2 | *(uint *)(*(ulong *)this + 0xb)) + 3);
  if ((uVar1 != 0x84) &&
     (((uVar1 & 1) == 0 ||
      (1 < *(ushort *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | uVar1) - 1)) - 0x95)))) {
    pIVar3 = (Isolate *)(*(ulong *)this & 0xffffffff00000000);
    local_8 = (ulong)pIVar3 |
              (ulong)*(uint *)(((ulong)pIVar3 | (ulong)*(uint *)(*(ulong *)this + 0x13)) + 3);
    if (*(short *)(((ulong)pIVar3 | 7) + (ulong)*(uint *)(local_8 - 1)) == 0x9f) {
      uVar2 = FeedbackVector::ClearSlots((FeedbackVector *)&local_8,pIVar3);
      if ((uVar2 & 1) != 0) {
        IC::OnFeedbackChanged(pIVar3,local_8,0xffffffff,"ClearTypeFeedbackInfo");
      }
    }
  }
  return;
}


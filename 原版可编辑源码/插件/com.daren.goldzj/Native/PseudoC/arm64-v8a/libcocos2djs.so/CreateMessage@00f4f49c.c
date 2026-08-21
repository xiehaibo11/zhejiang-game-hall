
/* v8::internal::Isolate::CreateMessage(v8::internal::Handle<v8::internal::Object>,
   v8::internal::MessageLocation*) */

void __thiscall
v8::internal::Isolate::CreateMessage(Isolate *this,ulong *param_2,MessageLocation *param_3)

{
  long lVar1;
  ulong uVar2;
  MessageLocation aMStack_60 [32];
  
  if (this[0x9588] == (Isolate)0x0) {
    lVar1 = 0;
  }
  else {
    uVar2 = *param_2;
    if ((((uVar2 & 1) == 0) ||
        (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) != 0x429)) ||
       (lVar1 = GetDetailedStackTrace(this,param_2), lVar1 == 0)) {
      lVar1 = FUN_00f4d738(this,this + 0xa0,
                           (ulong)(*(uint *)(this + 0x958c) &
                                  ((int)*(uint *)(this + 0x958c) >> 0x1f ^ 0xffffffffU)) |
                           0x200000000,
                           (ulong)(*(uint *)(this + 0x9590) >> 8 ^ 0xffffffff) & 1 |
                           0x100010000000000);
    }
  }
  MessageLocation::MessageLocation(aMStack_60);
  if (((param_3 == (MessageLocation *)0x0) &&
      (uVar2 = ComputeLocationFromException(this,aMStack_60,param_2), param_3 = aMStack_60,
      (uVar2 & 1) == 0)) &&
     ((uVar2 = ComputeLocationFromStackTrace(this,aMStack_60,param_2), param_3 = aMStack_60,
      (uVar2 & 1) == 0 &&
      (uVar2 = ComputeLocation(this,aMStack_60), param_3 = aMStack_60, (uVar2 & 1) == 0)))) {
    param_3 = (MessageLocation *)(undefined1 *)0x0;
  }
  MessageHandler::MakeMessageObject(this,6,param_3,param_2,lVar1);
  return;
}


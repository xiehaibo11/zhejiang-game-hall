
/* v8::internal::ErrorUtils::Construct(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSFunction>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::FrameSkipMode,
   v8::internal::Handle<v8::internal::Object>, v8::internal::ErrorUtils::StackTraceCollection) */

long v8::internal::ErrorUtils::Construct
               (Isolate *param_1,ulong *param_2,ulong *param_3,ulong *param_4,undefined4 param_5,
               undefined8 param_6,int param_7)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = *param_3;
  if (((uVar3 & 1) == 0) ||
     (*(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) < 0xa9)) {
    param_3 = param_2;
  }
  lVar1 = JSObject::New(param_2,param_3,0);
  if (lVar1 == 0) {
    return 0;
  }
  uVar3 = *param_4;
  if ((uVar3 & 1) == 0) {
LAB_00f5e6a8:
    param_4 = (ulong *)Object::ConvertToString(param_1,param_4);
  }
  else {
    if ((int)uVar3 == *(int *)(param_1 + 0xa0)) goto LAB_00f5e6e4;
    if (0x3f < *(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)))
    goto LAB_00f5e6a8;
  }
  if (param_4 == (ulong *)0x0) {
    return 0;
  }
  lVar2 = JSObject::SetOwnPropertyIgnoreAttributes(lVar1,param_1 + 0x7f8,param_4,2);
  if (lVar2 == 0) {
    return 0;
  }
LAB_00f5e6e4:
  if (param_7 != 1) {
    if (param_7 != 0) {
      return lVar1;
    }
    lVar2 = Isolate::CaptureAndSetDetailedStackTrace(param_1,lVar1);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar2 = Isolate::CaptureAndSetSimpleStackTrace(param_1,lVar1,param_5,param_6);
  if (lVar2 == 0) {
    return 0;
  }
  return lVar1;
}


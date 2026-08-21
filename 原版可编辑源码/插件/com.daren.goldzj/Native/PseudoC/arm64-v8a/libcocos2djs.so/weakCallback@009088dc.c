
/* se::ObjectWrap::weakCallback(v8::WeakCallbackInfo<se::ObjectWrap> const&) */

void se::ObjectWrap::weakCallback(WeakCallbackInfo *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (*(ulong **)(lVar1 + 8) != (ulong *)0x0) {
    v8::V8::DisposeGlobal(*(ulong **)(lVar1 + 8));
    *(undefined8 *)(lVar1 + 8) = 0;
  }
  if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00908910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x10));
    return;
  }
  return;
}



/* v8::internal::Runtime_RegexpHasNativeCode(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_RegexpHasNativeCode(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  Isolate *pIVar3;
  ulong local_8;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar1 = FUN_015a78f4(param_1,param_2,param_3);
    return uVar1;
  }
  local_8 = *param_2;
  if (((local_8 & 1) != 0) &&
     (*(short *)((local_8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_8 - 1)) == 0x42e)) {
    uVar2 = param_2[-1];
    if (((uVar2 & 1) != 0) &&
       ((*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x43 &&
        ((*(uint *)(uVar2 + 0x17) >> 1 & 0xff) < 2)))) {
      uVar2 = JSRegExp::Code((JSRegExp *)&local_8,(int)uVar2 == *(int *)(param_3 + 0xb8));
      if ((uVar2 & 1) == 0) {
        pIVar3 = param_3 + 0xc0;
      }
      else {
        pIVar3 = param_3 + 0xb8;
        if (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) != 0x9a) {
          pIVar3 = param_3 + 0xc0;
        }
      }
      return *(undefined8 *)pIVar3;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsBoolean()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSRegExp()");
}


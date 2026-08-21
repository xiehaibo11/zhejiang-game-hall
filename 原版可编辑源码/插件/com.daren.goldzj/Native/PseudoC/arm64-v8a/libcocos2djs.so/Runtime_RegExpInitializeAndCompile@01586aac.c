
/* v8::internal::Runtime_RegExpInitializeAndCompile(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_RegExpInitializeAndCompile(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar5 = FUN_01586c08(param_1,param_2,param_3);
    return uVar5;
  }
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar5 = *param_2;
  if (((uVar5 & 1) == 0) ||
     (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x42e)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSRegExp()");
  }
  uVar5 = param_2[-1];
  if (((uVar5 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsString()");
  }
  uVar5 = param_2[-2];
  if (((uVar5 & 1) != 0) &&
     (*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0x40)) {
    lVar4 = JSRegExp::Initialize(param_2);
    pIVar1 = param_3 + 0x180;
    if (lVar4 != 0) {
      pIVar1 = (Isolate *)param_2;
    }
    uVar5 = *(ulong *)pIVar1;
    *(undefined8 *)(param_3 + 0x95a0) = uVar2;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar3) {
      *(long *)(param_3 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[2].IsString()");
}


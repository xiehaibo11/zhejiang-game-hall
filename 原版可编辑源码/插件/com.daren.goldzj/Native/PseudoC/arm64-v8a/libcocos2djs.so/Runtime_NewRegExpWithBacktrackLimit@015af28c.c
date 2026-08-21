
/* v8::internal::Runtime_NewRegExpWithBacktrackLimit(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_NewRegExpWithBacktrackLimit(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  undefined4 uVar3;
  Isolate *pIVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  double dVar9;
  char local_44 [4];
  
  if (TracingFlags::runtime_stats != 0) {
    uVar5 = FUN_015af488(param_1,param_2,param_3);
    return uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if (((uVar6 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsString()");
  }
  uVar6 = param_2[-1];
  if (((uVar6 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsString()");
  }
  uVar6 = param_2[-2];
  if ((uVar6 & 1) == 0) {
    if (-1 < (int)uVar6) {
      dVar9 = (double)(uVar6 >> 1 & 0x7fffffff);
LAB_015af380:
      local_44[0] = '\0';
      uVar3 = JSRegExp::FlagsFromString(param_3,param_2 + -1,local_44);
      if (local_44[0] == '\x01') {
        pIVar4 = (Isolate *)JSRegExp::New(param_3,param_2,uVar3,(ulong)dVar9 & 0xffffffff);
        pIVar1 = param_3 + 0x180;
        if (pIVar4 != (Isolate *)0x0) {
          pIVar1 = pIVar4;
        }
        uVar8 = *(undefined8 *)pIVar1;
        *(undefined8 *)(param_3 + 0x95a0) = uVar5;
        *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
        if (*(long *)(param_3 + 0x95a8) != lVar2) {
          *(long *)(param_3 + 0x95a8) = lVar2;
          HandleScope::DeleteExtensions(param_3);
        }
        return uVar8;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","success");
    }
  }
  else {
    uVar7 = uVar6 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar7 + *(uint *)(uVar6 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[2].IsNumber()");
    }
    if (*(short *)(uVar7 + *(uint *)(uVar6 - 1)) == 0x42) {
      dVar9 = *(double *)(uVar6 + 3) + 4503599627370496.0;
      if (((ulong)dVar9 >> 0x20 == 0x43300000) &&
         (*(double *)(uVar6 + 3) == (double)((ulong)dVar9 & 0xffffffff))) goto LAB_015af380;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[2].ToUint32(&backtrack_limit)");
}


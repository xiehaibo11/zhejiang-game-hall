
/* v8::internal::BigInt::Exponentiate(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigInt>, v8::internal::Handle<v8::internal::BigInt>) */

long * v8::internal::BigInt::Exponentiate(Factory *param_1,long *param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  
  lVar9 = *param_3;
  if ((*(uint *)(lVar9 + 3) & 1) != 0) {
    uVar5 = 0xb7;
LAB_0106c4c8:
    puVar3 = (undefined8 *)Factory::NewRangeError(param_1,uVar5,0,0,0);
    Isolate::Throw((Isolate *)param_1,*puVar3,0);
    return (long *)0x0;
  }
  if ((*(uint *)(lVar9 + 3) & 0x7ffffffe) == 0) {
    plVar2 = (long *)Factory::NewBigInt(param_1,1,0);
    *(undefined4 *)(*plVar2 + 3) = 2;
    *(undefined8 *)(*plVar2 + 7) = 1;
  }
  else {
    lVar6 = *param_2;
    if ((*(uint *)(lVar6 + 3) & 0x7ffffffe) == 0) {
      return param_2;
    }
    if (((*(uint *)(lVar6 + 3) & 0x7ffffffe) != 2) || (*(long *)(lVar6 + 7) != 1)) {
      if ((*(uint *)(lVar9 + 3) & 0x7ffffffc) == 0) {
        uVar10 = *(ulong *)(lVar9 + 7);
        if (uVar10 == 1) {
          return param_2;
        }
        if (uVar10 >> 0x1e == 0) {
          if (((*(uint *)(lVar6 + 3) & 0x7ffffffe) != 2) || (*(long *)(lVar6 + 7) != 2)) {
            uVar7 = uVar10 >> 1 & 0x7fffffff;
            plVar2 = (long *)0x0;
            if ((uVar10 & 1) != 0) {
              plVar2 = param_2;
            }
            if ((int)uVar7 == 0) {
              return plVar2;
            }
            while( true ) {
              uVar8 = uVar7;
              param_2 = (long *)Multiply(param_1,param_2,param_2);
              if (param_2 == (long *)0x0) {
                return (long *)0x0;
              }
              plVar4 = plVar2;
              if (((((uint)uVar10 >> 1 & 1) != 0) && (plVar4 = param_2, plVar2 != (long *)0x0)) &&
                 (plVar4 = (long *)Multiply(param_1,plVar2,param_2), plVar4 == (long *)0x0)) break;
              uVar11 = (int)uVar8 >> 1;
              uVar7 = (ulong)uVar11;
              plVar2 = plVar4;
              uVar10 = uVar8;
              if (uVar11 == 0) {
                return plVar4;
              }
            }
            return (long *)0x0;
          }
          uVar11 = (uint)(uVar10 >> 6) & 0x3ffffff;
          iVar1 = uVar11 + 1;
          plVar2 = (long *)Factory::NewBigInt(param_1,iVar1,0);
          *(int *)(*plVar2 + 3) = iVar1 * 2;
          if (plVar2 == (long *)0x0) {
            return (long *)0x0;
          }
          memset((void *)(*plVar2 + 7),0,(ulong)(uint)(iVar1 * 8));
          *(long *)(*plVar2 + ((ulong)(uVar11 << 3) | 7)) = 1L << (uVar10 & 0x3f);
          if ((*(uint *)(*param_2 + 3) & 1) != 0) {
            *(uint *)(*plVar2 + 3) = *(uint *)(*plVar2 + 3) & 0xfffffffe | (uint)uVar10 & 1;
          }
          lVar9 = *plVar2;
          goto LAB_0106c524;
        }
      }
      if (FLAG_correctness_fuzzer_suppressions != '\0') {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Aborting on invalid BigInt length");
      }
      uVar5 = 0xb8;
      goto LAB_0106c4c8;
    }
    if ((*(uint *)(lVar6 + 3) & 1) == 0) {
      return param_2;
    }
    if ((*(byte *)(lVar9 + 7) & 1) != 0) {
      return param_2;
    }
    if ((*(uint *)(lVar6 + 3) & 0x7ffffffe) == 0) {
      return param_2;
    }
    plVar2 = (long *)MutableBigInt::Copy(param_1,param_2);
    *(uint *)(*plVar2 + 3) = (*(uint *)(*plVar2 + 3) & 0xfffffffe | *(uint *)(*param_2 + 3) & 1) ^ 1
    ;
  }
  lVar9 = *plVar2;
LAB_0106c524:
  MutableBigInt::Canonicalize(lVar9);
  return plVar2;
}


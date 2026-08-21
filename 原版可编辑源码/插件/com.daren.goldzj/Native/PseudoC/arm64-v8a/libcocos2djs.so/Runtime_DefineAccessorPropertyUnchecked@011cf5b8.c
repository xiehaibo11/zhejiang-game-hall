
/* v8::internal::Runtime_DefineAccessorPropertyUnchecked(int, unsigned long*,
   v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_DefineAccessorPropertyUnchecked(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar5 = FUN_011cf7c8(param_1,param_2,param_3);
    return uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if (((uVar6 & 1) == 0) ||
     (*(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0xaa)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSObject()");
  }
  iVar3 = *(int *)(param_3 + 0xb0);
  if ((int)uVar6 == iVar3) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!obj->IsNull(isolate)");
  }
  uVar6 = param_2[-1];
  if (((uVar6 & 1) != 0) &&
     (*(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0x41)) {
    uVar6 = param_2[-2];
    if (((uVar6 & 1) == 0) ||
       ((((int)uVar6 != iVar3 && ((int)uVar6 != *(int *)(param_3 + 0xa0))) &&
        ((*(byte *)((uVar6 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar6 - 1)) >> 1 & 1) == 0))
       )) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsValidAccessor(isolate, getter)");
    }
    uVar6 = param_2[-3];
    if (((uVar6 & 1) != 0) &&
       ((((int)uVar6 == iVar3 || ((int)uVar6 == *(int *)(param_3 + 0xa0))) ||
        ((*(byte *)((uVar6 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar6 - 1)) >> 1 & 1) != 0))
       )) {
      if ((param_2[-4] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","args[4].IsSmi()");
      }
      if ((uint)((int)param_2[-4] >> 1) < 8) {
        lVar4 = JSObject::DefineAccessor(param_2,param_2 + -1);
        lVar1 = 0x180;
        if (lVar4 != 0) {
          lVar1 = 0xa0;
        }
        uVar7 = *(undefined8 *)(param_3 + lVar1);
        *(undefined8 *)(param_3 + 0x95a0) = uVar5;
        *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
        if (*(long *)(param_3 + 0x95a8) != lVar2) {
          *(long *)(param_3 + 0x95a8) = lVar2;
          HandleScope::DeleteExtensions(param_3);
        }
        return uVar7;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args.smi_at(4) & ~(READ_ONLY | DONT_ENUM | DONT_DELETE) == 0");
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsValidAccessor(isolate, setter)");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[1].IsName()");
}


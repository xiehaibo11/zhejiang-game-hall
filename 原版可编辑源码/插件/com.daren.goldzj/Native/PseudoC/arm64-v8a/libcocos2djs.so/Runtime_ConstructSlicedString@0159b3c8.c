
/* v8::internal::Runtime_ConstructSlicedString(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_ConstructSlicedString(int param_1,ulong *param_2,Isolate *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar7 = FUN_0159b54c(param_1,param_2,param_3);
    return uVar7;
  }
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *param_2;
  if (((uVar7 & 1) == 0) ||
     (uVar5 = uVar7 & 0xffffffff00000000 | 7, 0x3f < *(ushort *)(uVar5 + *(uint *)(uVar7 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsString()");
  }
  if ((param_2[-1] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsSmi()");
  }
  puVar6 = (uint *)(uVar7 - 1);
  if ((*(byte *)(uVar5 + *puVar6) >> 3 & 1) != 0) {
    iVar1 = (int)param_2[-1] >> 1;
    if (*(int *)(uVar7 + 7) <= iVar1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","index->value() < string->length()");
    }
    if (iVar1 != 0) {
      puVar4 = (ulong *)Factory::NewProperSubString((Factory *)param_3);
      uVar7 = *puVar4;
      puVar6 = (uint *)(uVar7 - 1);
      uVar5 = uVar7 & 0xffffffff00000000 | 7;
    }
    if ((*(ushort *)(uVar5 + *(uint *)(uVar7 - 1)) < 0x40) &&
       ((*(ushort *)(uVar5 + *puVar6) & 7) == 3)) {
      *(undefined8 *)(param_3 + 0x95a0) = uVar2;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar3) {
        *(long *)(param_3 + 0x95a8) = lVar3;
        HandleScope::DeleteExtensions(param_3);
      }
      return uVar7;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","sliced_string->IsSlicedString()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","string->IsOneByteRepresentation()");
}


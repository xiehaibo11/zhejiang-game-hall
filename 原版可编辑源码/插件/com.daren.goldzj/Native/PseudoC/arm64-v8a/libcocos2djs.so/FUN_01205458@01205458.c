
void FUN_01205458(Isolate *param_1,byte *param_2)

{
  long lVar1;
  uint uVar2;
  CanonicalHandleScope *this;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  undefined1 *local_70;
  ulong uStack_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (5 < *param_2 - 1) {
switchD_012054a8_caseD_5:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unimplemented code");
  }
  switch((uint)*param_2) {
  case 1:
    if ((long)*(int *)(param_2 + 1) + 0x40000000U >> 0x1f != 0) {
      local_60 = auStack_50;
      local_58 = 0x15;
      uVar2 = v8::internal::SNPrintF(local_60,0x15,"%d");
      local_70 = local_60;
joined_r0x01205574:
      local_60 = local_70;
      if (((int)uVar2 < 1) || ((int)local_58 <= (int)uVar2)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","len > 0 && len < value.length()");
      }
      uStack_68 = (ulong)uVar2;
      puVar3 = (ulong *)v8::internal::Factory::NewStringFromOneByte(param_1,&local_70,0);
      if (puVar3 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      goto LAB_012055d0;
    }
    this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    uVar5 = (long)*(int *)(param_2 + 1) << 1;
    break;
  case 2:
    lVar4 = *(long *)(param_2 + 1);
    if (((int)lVar4 != lVar4) || ((long)(int)lVar4 + 0x40000000U >> 0x1f != 0)) {
      local_60 = auStack_50;
      local_58 = 0x15;
      uVar2 = v8::internal::SNPrintF(local_60,0x15,"%ld");
      local_70 = local_60;
      goto joined_r0x01205574;
    }
    this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    uVar5 = (lVar4 << 0x20) >> 0x1f;
    break;
  case 3:
    dVar6 = (double)*(float *)(param_2 + 1);
    goto LAB_0120553c;
  case 4:
    dVar6 = *(double *)(param_2 + 1);
LAB_0120553c:
    puVar3 = (ulong *)v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>
                                ((Factory *)param_1,dVar6);
    goto LAB_012055d0;
  case 5:
    goto switchD_012054a8_caseD_5;
  case 6:
    puVar3 = *(ulong **)(param_2 + 1);
    goto LAB_012055d0;
  }
  if (this == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(param_1 + 0x95a0);
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar5;
  }
  else {
    puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(this,uVar5);
  }
LAB_012055d0:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar3);
  }
  return;
}


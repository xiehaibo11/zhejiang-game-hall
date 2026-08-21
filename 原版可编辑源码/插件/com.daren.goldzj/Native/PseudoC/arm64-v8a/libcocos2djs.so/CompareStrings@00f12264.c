
/* v8::internal::LiveEdit::CompareStrings(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::String>, v8::internal::Handle<v8::internal::String>,
   std::__ndk1::vector<v8::internal::SourceChangeRange,
   std::__ndk1::allocator<v8::internal::SourceChangeRange> >*) */

void v8::internal::LiveEdit::CompareStrings
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  undefined **local_108;
  undefined8 uStack_100;
  long *local_f8;
  ulong uStack_f0;
  long *local_e8;
  ulong uStack_e0;
  long *local_d8;
  long *plStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined **local_b8;
  long *plStack_b0;
  long *local_a8;
  long *plStack_a0;
  ulong local_98;
  long *plStack_90;
  ulong local_88;
  undefined8 local_80;
  int local_78;
  int local_74;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  plVar5 = (long *)String::Flatten(param_1,param_2,0);
  plVar6 = (long *)String::Flatten(param_1,param_3,0);
  plVar7 = (long *)String::CalculateLineEnds(param_1,plVar5,0);
  uVar14 = *(uint *)(*plVar5 + 7);
  uVar16 = (ulong)uVar14;
  local_e8 = (long *)String::CalculateLineEnds(param_1,plVar6,0);
  uVar8 = *(uint *)(*plVar6 + 7);
  uStack_e0 = (ulong)uVar8;
  local_b8 = &PTR_FUN_01ca46e0;
  local_80 = 0;
  iVar9 = *(int *)(*plVar7 + 3) >> 1;
  iVar1 = iVar9 + 1;
  local_108 = &PTR_FUN_01ca4728;
  iVar10 = *(int *)(*local_e8 + 3) >> 1;
  iVar2 = iVar10 + 1;
  iVar3 = iVar2;
  if (iVar9 <= iVar10) {
    iVar3 = iVar9 + 1;
  }
  local_c8 = 0;
  uStack_100 = param_1;
  local_f8 = plVar7;
  uStack_f0 = uVar16;
  local_d8 = plVar5;
  plStack_d0 = plVar6;
  local_c0 = param_4;
  plStack_b0 = plVar5;
  local_a8 = plVar6;
  plStack_a0 = plVar7;
  local_98 = uVar16;
  plStack_90 = local_e8;
  local_88 = uStack_e0;
  local_78 = iVar1;
  local_74 = iVar2;
  if (iVar3 < 1) {
LAB_00f1240c:
    iVar13 = 0;
    iVar12 = 0;
  }
  else {
    if (1 < *(uint *)(*plVar7 + 3)) {
      uVar14 = (*(int *)(*plVar7 + 7) >> 1) + 1;
    }
    if (1 < *(uint *)(*local_e8 + 3)) {
      uVar8 = (*(int *)(*local_e8 + 7) >> 1) + 1;
    }
    if (uVar14 != uVar8) goto LAB_00f1240c;
    uVar16 = FUN_00f169d4(plVar5,0,plVar6,0,uVar14);
    iVar13 = 0;
    iVar12 = 0;
    if ((uVar16 & 1) != 0) {
      iVar11 = 0;
      iVar13 = -iVar3;
      do {
        iVar12 = iVar3;
        if (iVar3 + -1 == iVar11) goto LAB_00f12414;
        iVar11 = iVar11 + 1;
        uVar16 = (*(code *)local_b8[2])(&local_b8,iVar11,iVar11);
      } while ((uVar16 & 1) != 0);
      iVar13 = -iVar11;
      iVar12 = iVar11;
    }
  }
LAB_00f12414:
  iVar3 = iVar3 - iVar12;
  if (iVar3 < 1) {
    iVar11 = 0;
    if (iVar12 == 0) goto LAB_00f124d4;
  }
  else {
    iVar15 = 0;
    do {
      uVar16 = (*(code *)local_b8[2])(&local_b8,iVar9,iVar10);
      iVar11 = iVar15;
      if ((uVar16 & 1) == 0) break;
      iVar15 = iVar15 + 1;
      iVar10 = iVar10 + -1;
      iVar9 = iVar9 + -1;
      iVar11 = iVar3;
    } while (iVar3 != iVar15);
    if (iVar11 == 0 && iVar12 == 0) goto LAB_00f124d4;
  }
  iVar1 = (iVar1 - iVar11) + iVar13;
  iVar13 = (iVar2 - iVar11) + iVar13;
  (*(code *)local_b8[5])(&local_b8,iVar12,iVar1);
  (*(code *)local_b8[6])(&local_b8,iVar12,iVar13);
  (*(code *)local_108[3])(&local_108,iVar12,iVar1);
  (*(code *)local_108[4])(&local_108,iVar12,iVar13);
LAB_00f124d4:
  FUN_00f12c6c(&local_b8,&local_108);
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


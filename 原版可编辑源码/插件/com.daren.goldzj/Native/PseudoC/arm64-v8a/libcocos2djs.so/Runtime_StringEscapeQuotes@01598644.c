
/* v8::internal::Runtime_StringEscapeQuotes(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_StringEscapeQuotes(int param_1,ulong *param_2,Isolate *param_3)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  ulong *puVar11;
  int iVar12;
  ulong uVar13;
  int *piVar14;
  char *local_a8;
  undefined8 auStack_a0 [3];
  int local_88;
  int *local_80;
  int *local_78;
  int *local_70;
  int local_64;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar13 = FUN_015989cc(param_1,param_2,param_3);
    return uVar13;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x95a0);
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar13 = *param_2;
  if (((uVar13 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsString()");
  }
  iVar5 = *(int *)(uVar13 + 7);
  uVar9 = Factory::LookupSingleCharacterStringFromCode((Factory *)param_3,0x22);
  iVar8 = String::IndexOf(param_3,param_2,uVar9,0);
  local_64 = iVar8;
  if (iVar8 != -1) {
    local_80 = operator_new(4);
    local_78 = local_80 + 1;
    *local_80 = iVar8;
    local_70 = local_78;
    while ((iVar8 + 1 < iVar5 && (local_64 = String::IndexOf(param_3,param_2,uVar9), local_64 != -1)
           )) {
      if (local_78 < local_70) {
        *local_78 = local_64;
        local_78 = local_78 + 1;
        iVar8 = local_64;
      }
      else {
        std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__emplace_back_slow_path<int&>
                  ((vector<int,std::__ndk1::allocator<int>> *)&local_80,&local_64);
        iVar8 = local_64;
      }
    }
    auStack_a0[0] = __strlen_chk("&quot;",7);
    local_a8 = "&quot;";
    lVar10 = Factory::NewStringFromOneByte(param_3,&local_a8,0);
    if (lVar10 != 0) {
      ReplacementStringBuilder::ReplacementStringBuilder
                ((ReplacementStringBuilder *)&local_a8,param_3 + 0x8850,param_2,
                 (uint)((ulong)((long)local_78 - (long)local_80) >> 1) | 1);
      piVar7 = local_78;
      if (local_80 == local_78) {
        iVar8 = -1;
      }
      else {
        piVar14 = local_80;
        iVar12 = -1;
        do {
          iVar8 = *piVar14;
          uVar2 = iVar12 + 1;
          uVar6 = iVar8 - uVar2;
          if (uVar6 != 0 && (int)uVar2 <= iVar8) {
            ReplacementStringBuilder::EnsureCapacity((ReplacementStringBuilder *)&local_a8,2);
            if ((uVar2 >> 0x13 == 0) && (uVar6 < 0x800)) {
              uVar2 = uVar6 | uVar2 * 0x800;
            }
            else {
              FixedArrayBuilder::Add
                        ((FixedArrayBuilder *)auStack_a0,
                         -(ulong)(-uVar6 >> 0x1f) & 0xfffffffe00000000 | (ulong)-uVar6 << 1);
            }
            FixedArrayBuilder::Add
                      ((FixedArrayBuilder *)auStack_a0,
                       -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1);
            iVar12 = local_88 + uVar6;
            bVar1 = local_88 <= (int)(0xffffff0 - uVar6);
            local_88 = 0x7fffffff;
            if (bVar1) {
              local_88 = iVar12;
            }
          }
          ReplacementStringBuilder::AddString((ReplacementStringBuilder *)&local_a8,lVar10);
          piVar14 = piVar14 + 1;
          iVar12 = iVar8;
        } while (piVar7 != piVar14);
      }
      if (iVar8 < iVar5 + -1) {
        uVar2 = iVar8 + 1;
        ReplacementStringBuilder::EnsureCapacity((ReplacementStringBuilder *)&local_a8,2);
        uVar6 = iVar5 - uVar2;
        if ((uVar2 >> 0x13 == 0) && (uVar6 < 0x800)) {
          uVar2 = uVar6 | uVar2 * 0x800;
        }
        else {
          FixedArrayBuilder::Add
                    ((FixedArrayBuilder *)auStack_a0,
                     -(ulong)(-uVar6 >> 0x1f) & 0xfffffffe00000000 | (ulong)-uVar6 << 1);
        }
        FixedArrayBuilder::Add
                  ((FixedArrayBuilder *)auStack_a0,
                   -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1);
        iVar5 = local_88 + uVar6;
        bVar1 = local_88 <= (int)(0xffffff0 - uVar6);
        local_88 = 0x7fffffff;
        if (bVar1) {
          local_88 = iVar5;
        }
      }
      puVar11 = (ulong *)ReplacementStringBuilder::ToString((ReplacementStringBuilder *)&local_a8);
      if (puVar11 != (ulong *)0x0) {
        uVar13 = *puVar11;
        if (local_80 != (int *)0x0) {
          local_78 = local_80;
          operator_delete(local_80);
        }
        if (param_3 == (Isolate *)0x0) {
          return uVar13;
        }
        goto LAB_01598930;
      }
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
  uVar13 = *param_2;
LAB_01598930:
  *(undefined8 *)(param_3 + 0x95a0) = uVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar13;
}


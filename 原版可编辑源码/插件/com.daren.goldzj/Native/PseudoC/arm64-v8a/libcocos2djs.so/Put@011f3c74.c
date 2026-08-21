
/* v8::internal::StringStream::Put(v8::internal::String, int, int) */

undefined4 __thiscall
v8::internal::StringStream::Put(StringStream *this,ulong param_2,uint param_3,uint param_4)

{
  ushort *puVar1;
  int iVar2;
  long lVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  int iVar11;
  uint local_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  int local_a8;
  char local_98;
  ushort *local_90;
  ushort *puStack_88;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  local_98 = '\0';
  local_90 = (ushort *)0x0;
  puStack_88 = (ushort *)0x0;
  iVar11 = *(int *)(param_2 + 7);
  uVar8 = param_3;
LAB_011f3cf4:
  local_1b4 = param_3;
  switch(*(ushort *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1)) + 7) & 0xf) {
  case 0:
    goto switchD_011f3d1c_caseD_0;
  case 1:
  case 9:
    local_a8 = 0;
    if ((int)param_2 == 0) goto switchD_011f3da0_caseD_1;
    ConsStringIterator::Initialize((ConsStringIterator *)&local_1b0,param_2,param_3);
    local_1b4 = 0;
    if ((local_a8 == 0) ||
       (uVar6 = ConsStringIterator::Continue((ConsStringIterator *)&local_1b0,(int *)&local_1b4),
       uVar8 = local_1b4, (int)uVar6 == 0)) goto switchD_011f3da0_caseD_1;
    iVar11 = *(int *)(uVar6 + 7);
    uVar9 = local_1b4;
    goto LAB_011f3d78;
  case 2:
    lVar5 = (**(code **)(**(long **)(param_2 + 0xb) + 0x30))();
    local_90 = (ushort *)(lVar5 + (long)(int)uVar8 * 2);
    goto LAB_011f3de0;
  case 3:
  case 0xb:
    uVar8 = uVar8 + (*(int *)(param_2 + 0xf) >> 1);
    goto switchD_011f3d1c_caseD_5;
  default:
    goto switchD_011f3d1c_caseD_4;
  case 5:
  case 0xd:
    goto switchD_011f3d1c_caseD_5;
  case 8:
    local_90 = (ushort *)(param_2 + (long)(int)uVar8 + 0xb);
    break;
  case 10:
    lVar5 = (**(code **)(**(long **)(param_2 + 0xb) + 0x30))();
    local_90 = (ushort *)(lVar5 + (int)uVar8);
  }
  local_98 = '\x01';
  puStack_88 = (ushort *)((long)local_90 + ((long)iVar11 - (long)(int)param_3));
  goto LAB_011f3e24;
switchD_011f3d1c_caseD_5:
  param_2 = param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0xb);
  goto LAB_011f3cf4;
LAB_011f3d78:
  switch(*(ushort *)((uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 - 1)) + 7) & 0xf) {
  case 0:
    goto switchD_011f3da0_caseD_0;
  case 1:
  case 9:
    goto switchD_011f3da0_caseD_1;
  case 2:
    lVar5 = (**(code **)(**(long **)(uVar6 + 0xb) + 0x30))();
    local_90 = (ushort *)(lVar5 + (long)(int)uVar9 * 2);
    goto LAB_011f417c;
  case 3:
  case 0xb:
    uVar9 = uVar9 + (*(int *)(uVar6 + 0xf) >> 1);
    goto switchD_011f3da0_caseD_5;
  default:
    goto switchD_011f3d1c_caseD_4;
  case 5:
  case 0xd:
    goto switchD_011f3da0_caseD_5;
  case 8:
    local_90 = (ushort *)(uVar6 + (long)(int)uVar9 + 0xb);
    break;
  case 10:
    lVar5 = (**(code **)(**(long **)(uVar6 + 0xb) + 0x30))();
    local_90 = (ushort *)(lVar5 + (int)uVar9);
  }
  local_98 = '\x01';
  puStack_88 = (ushort *)((long)local_90 + (long)(int)(iVar11 - uVar8));
  goto switchD_011f3da0_caseD_1;
switchD_011f3da0_caseD_5:
  uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0xb);
  goto LAB_011f3d78;
switchD_011f3d1c_caseD_0:
  local_90 = (ushort *)(param_2 + (long)(int)uVar8 * 2 + 0xb);
LAB_011f3de0:
  local_98 = '\0';
  puStack_88 = local_90 + (int)(iVar11 - param_3);
LAB_011f3e24:
  local_a8 = 0;
  goto switchD_011f3da0_caseD_1;
switchD_011f3ee0_caseD_0:
  local_90 = (ushort *)(uVar6 + (long)iVar11 * 2 + 0xb);
LAB_011f3f18:
  local_98 = '\0';
  puStack_88 = local_90 + iVar2;
switchD_011f3ee0_caseD_1:
  if (local_90 == puStack_88) {
LAB_011f3f5c:
    local_1b4 = 0;
    if ((local_a8 != 0) &&
       (uVar6 = ConsStringIterator::Continue((ConsStringIterator *)&local_1b0,(int *)&local_1b4),
       (int)uVar6 != 0)) {
      iVar2 = *(int *)(uVar6 + 7);
      iVar11 = 0;
      do {
        switch(*(ushort *)((uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 - 1)) + 7) & 0xf) {
        case 0:
          goto switchD_011f3fa8_caseD_0;
        case 1:
        case 9:
          goto switchD_011f3fa8_caseD_1;
        case 2:
          lVar5 = (**(code **)(**(long **)(uVar6 + 0xb) + 0x30))();
          local_90 = (ushort *)(lVar5 + (long)iVar11 * 2);
          goto LAB_011f3fe0;
        case 3:
        case 0xb:
          iVar11 = iVar11 + (*(int *)(uVar6 + 0xf) >> 1);
        case 5:
        case 0xd:
          uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0xb);
          break;
        default:
          goto switchD_011f3d1c_caseD_4;
        case 8:
          local_90 = (ushort *)(uVar6 + (long)iVar11 + 0xb);
          goto LAB_011f400c;
        case 10:
          lVar5 = (**(code **)(**(long **)(uVar6 + 0xb) + 0x30))();
          local_90 = (ushort *)(lVar5 + iVar11);
LAB_011f400c:
          local_98 = '\x01';
          puStack_88 = (ushort *)((long)local_90 + (long)iVar2);
          goto switchD_011f3fa8_caseD_1;
        }
      } while( true );
    }
  }
switchD_011f3fa8_caseD_1:
  if (local_98 == '\0') {
    puVar1 = local_90 + 1;
    uVar10 = *local_90;
    local_90 = puVar1;
    if (uVar10 < 0x7f) goto LAB_011f4054;
  }
  else {
    puVar1 = (ushort *)((long)local_90 + 1);
    uVar4 = *local_90;
    uVar10 = (ushort)(byte)uVar4;
    local_90 = puVar1;
    if ((byte)uVar4 < 0x7f) {
LAB_011f4054:
      if (0x1f < uVar10) goto LAB_011f4060;
    }
  }
  uVar10 = 0x3f;
LAB_011f4060:
  uVar8 = *(uint *)(this + 0xc);
  uVar9 = *(uint *)(this + 0x10);
  if (uVar8 - uVar9 == 1) {
    uVar7 = 0;
    goto LAB_011f4120;
  }
  if (uVar9 == uVar8 - 2) {
    local_1b4 = uVar8;
    lVar5 = (**(code **)(**(long **)this + 0x18))(*(long **)this,&local_1b4);
    uVar8 = *(uint *)(this + 0xc);
    if (local_1b4 <= uVar8) {
      *(uint *)(this + 0x10) = uVar8 - 1;
      *(undefined1 *)(*(long *)(this + 0x18) + (ulong)(uVar8 - 5)) = 0x2e;
      uVar7 = 0;
      *(undefined1 *)(*(long *)(this + 0x18) + (ulong)(*(int *)(this + 0x10) - 3)) = 0x2e;
      *(undefined1 *)(*(long *)(this + 0x18) + (ulong)(*(int *)(this + 0x10) - 2)) = 0x2e;
      *(undefined1 *)(*(long *)(this + 0x18) + (ulong)(*(int *)(this + 0x10) - 1)) = 10;
      *(undefined1 *)(*(long *)(this + 0x18) + (ulong)*(uint *)(this + 0x10)) = 0;
      goto LAB_011f4120;
    }
    uVar9 = *(uint *)(this + 0x10);
    *(uint *)(this + 0xc) = local_1b4;
    *(long *)(this + 0x18) = lVar5;
  }
  else {
    lVar5 = *(long *)(this + 0x18);
  }
  *(char *)(lVar5 + (ulong)uVar9) = (char)uVar10;
  param_3 = param_3 + 1;
  *(undefined1 *)(*(long *)(this + 0x18) + (ulong)(*(int *)(this + 0x10) + 1)) = 0;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  if (param_3 == param_4) goto LAB_011f40b4;
  goto LAB_011f3e7c;
switchD_011f3fa8_caseD_0:
  local_90 = (ushort *)(uVar6 + (long)iVar11 * 2 + 0xb);
LAB_011f3fe0:
  local_98 = '\0';
  puStack_88 = local_90 + iVar2;
  goto switchD_011f3fa8_caseD_1;
LAB_011f40b4:
  uVar7 = 1;
  goto LAB_011f4120;
switchD_011f3d1c_caseD_4:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
switchD_011f3da0_caseD_0:
  local_90 = (ushort *)(uVar6 + (long)(int)uVar9 * 2 + 0xb);
LAB_011f417c:
  local_98 = '\0';
  puStack_88 = local_90 + (int)(iVar11 - uVar8);
switchD_011f3da0_caseD_1:
  uVar7 = 1;
  if ((int)param_3 < (int)param_4) {
LAB_011f3e7c:
    if (local_90 != puStack_88) {
      if (local_90 == puStack_88) goto LAB_011f3f5c;
      goto switchD_011f3fa8_caseD_1;
    }
    local_1b4 = 0;
    if ((local_a8 != 0) &&
       (uVar6 = ConsStringIterator::Continue((ConsStringIterator *)&local_1b0,(int *)&local_1b4),
       (int)uVar6 != 0)) {
      iVar2 = *(int *)(uVar6 + 7);
      iVar11 = 0;
      do {
        switch(*(ushort *)((uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 - 1)) + 7) & 0xf) {
        case 0:
          goto switchD_011f3ee0_caseD_0;
        case 1:
        case 9:
          goto switchD_011f3ee0_caseD_1;
        case 2:
          lVar5 = (**(code **)(**(long **)(uVar6 + 0xb) + 0x30))();
          local_90 = (ushort *)(lVar5 + (long)iVar11 * 2);
          goto LAB_011f3f18;
        case 3:
        case 0xb:
          iVar11 = iVar11 + (*(int *)(uVar6 + 0xf) >> 1);
        case 5:
        case 0xd:
          uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0xb);
          break;
        default:
          goto switchD_011f3d1c_caseD_4;
        case 8:
          local_90 = (ushort *)(uVar6 + (long)iVar11 + 0xb);
          goto LAB_011f3f44;
        case 10:
          lVar5 = (**(code **)(**(long **)(uVar6 + 0xb) + 0x30))();
          local_90 = (ushort *)(lVar5 + iVar11);
LAB_011f3f44:
          local_98 = '\x01';
          puStack_88 = (ushort *)((long)local_90 + (long)iVar2);
          goto switchD_011f3ee0_caseD_1;
        }
      } while( true );
    }
    goto LAB_011f40b4;
  }
LAB_011f4120:
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


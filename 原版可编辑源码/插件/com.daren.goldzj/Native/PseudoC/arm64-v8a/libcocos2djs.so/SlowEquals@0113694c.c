
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::String::SlowEquals(v8::internal::String) */

byte __thiscall v8::internal::String::SlowEquals(String *this,ulong param_2)

{
  long lVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  uint local_2b8 [2];
  ulong local_2b0 [35];
  undefined1 local_198;
  undefined8 local_194;
  undefined8 uStack_18c;
  undefined8 uStack_184;
  undefined8 uStack_17c;
  undefined8 local_174;
  undefined8 uStack_16c;
  undefined8 uStack_164;
  undefined8 uStack_15c;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined8 uStack_144;
  undefined8 uStack_13c;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined8 uStack_124;
  undefined8 uStack_11c;
  undefined8 local_114;
  undefined8 uStack_10c;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined4 local_84;
  undefined1 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar6 = *(ulong *)this;
  iVar5 = *(int *)(uVar6 + 7);
  if (iVar5 != *(int *)(param_2 + 7)) {
LAB_01136c30:
    bVar2 = 0;
    goto LAB_01136c34;
  }
  if (iVar5 == 0) {
LAB_01136c00:
    bVar2 = 1;
  }
  else {
    uVar7 = uVar6 & 0xffffffff00000000;
    uVar8 = uVar7 | 7;
    if ((*(ushort *)(uVar8 + *(uint *)(uVar6 - 1)) < 0x40) &&
       ((*(ushort *)(uVar8 + *(uint *)(uVar6 - 1)) & 7) == 5)) {
      uVar9 = param_2 & 0xffffffff00000000 | 7;
    }
    else {
      uVar9 = param_2 & 0xffffffff00000000 | 7;
      puVar10 = (uint *)(param_2 - 1);
      if ((0x3f < *(ushort *)(uVar9 + *(uint *)(param_2 - 1))) ||
         ((*(ushort *)(uVar9 + *puVar10) & 7) != 5)) {
        if ((((*(uint *)(uVar6 + 3) & 1) != 0) || ((*(uint *)(param_2 + 3) & 1) != 0)) ||
           ((*(uint *)(uVar6 + 3) ^ *(uint *)(param_2 + 3)) < 8)) {
          local_2b8[1] = 0;
          local_2b8[0] = (uint)*(ushort *)((uVar7 | *(uint *)(uVar6 - 1)) + 7);
          local_2b0[0] = uVar6;
          sVar3 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                            (local_2b8,local_2b0,local_2b8 + 1);
          local_2b8[1] = 0;
          local_2b8[0] = (uint)*(ushort *)
                                ((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1)) + 7)
          ;
          local_2b0[0] = param_2;
          sVar4 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                            (local_2b8,local_2b0,local_2b8 + 1);
          bVar2 = 0;
          if (sVar3 == sVar4) {
            uVar6 = *(ulong *)this;
            uVar7 = uVar6 & 0xffffffff00000000 | 7;
            if ((((*(ushort *)(uVar7 + *(uint *)(uVar6 - 1)) < 0x40) &&
                 ((*(byte *)(uVar7 + *(uint *)(uVar6 - 1)) & 7) == 0)) &&
                (((*(byte *)(uVar7 + *(uint *)(uVar6 - 1)) >> 3 & 1) != 0 &&
                 ((*(ushort *)(uVar9 + *puVar10) < 0x40 && ((*(byte *)(uVar9 + *puVar10) & 7) == 0))
                 )))) && ((*(byte *)(uVar9 + *puVar10) >> 3 & 1) != 0)) {
              iVar5 = memcmp((void *)(uVar6 + 0xb),(void *)(param_2 + 0xb),(long)iVar5);
              bVar2 = iVar5 == 0;
            }
            else {
              local_2b0[0x20] = 0;
              local_2b0[0x1d] = 0;
              local_2b0[0x1c] = 0;
              local_2b0[0x1f] = 0;
              local_2b0[0x1e] = 0;
              local_2b0[0x19] = 0;
              local_2b0[0x18] = 0;
              local_2b0[0x1b] = 0;
              local_2b0[0x1a] = 0;
              local_2b0[0x15] = 0;
              local_2b0[0x14] = 0;
              local_2b0[0x17] = 0;
              local_2b0[0x16] = 0;
              local_2b0[0x11] = 0;
              local_2b0[0x10] = 0;
              local_2b0[0x13] = 0;
              local_2b0[0x12] = 0;
              local_2b0[0xd] = 0;
              local_2b0[0xc] = 0;
              local_2b0[0xf] = 0;
              local_2b0[0xe] = 0;
              local_2b0[9] = 0;
              local_2b0[8] = 0;
              local_2b0[0xb] = 0;
              local_2b0[10] = 0;
              local_2b0[5] = 0;
              local_2b0[4] = 0;
              local_2b0[7] = 0;
              local_2b0[6] = 0;
              local_2b0[1] = 0;
              local_2b0[0] = 0;
              local_2b0[3] = 0;
              local_2b0[2] = 0;
              local_198 = 1;
              uStack_18c = 0;
              local_194 = 0;
              uStack_17c = 0;
              uStack_184 = 0;
              uStack_16c = 0;
              local_174 = 0;
              uStack_15c = 0;
              uStack_164 = 0;
              uStack_14c = 0;
              local_154 = 0;
              uStack_13c = 0;
              uStack_144 = 0;
              uStack_12c = 0;
              local_134 = 0;
              uStack_11c = 0;
              uStack_124 = 0;
              uStack_10c = 0;
              local_114 = 0;
              uStack_fc = 0;
              uStack_104 = 0;
              uStack_ec = 0;
              local_f4 = 0;
              uStack_dc = 0;
              uStack_e4 = 0;
              uStack_cc = 0;
              local_d4 = 0;
              uStack_bc = 0;
              uStack_c4 = 0;
              uStack_ac = 0;
              local_b4 = 0;
              uStack_9c = 0;
              uStack_a4 = 0;
              uStack_8c = 0;
              local_94 = 0;
              local_84 = 0;
              local_70 = 1;
              local_6c = 0;
              local_68 = 0;
              bVar2 = StringComparator::Equals((StringComparator *)local_2b0,uVar6,param_2);
            }
          }
          goto LAB_01136c34;
        }
        goto LAB_01136c30;
      }
    }
    if ((*(ushort *)(uVar9 + *(uint *)(param_2 - 1)) < 0x40) &&
       ((*(ushort *)(uVar9 + *(uint *)(param_2 - 1)) & 7) == 5)) {
      param_2 = param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0xb);
    }
    if ((*(ushort *)(uVar8 + *(uint *)(uVar6 - 1)) < 0x40) &&
       ((*(ushort *)(uVar8 + *(uint *)(uVar6 - 1)) & 7) == 5)) {
      local_2b0[0] = uVar7 | *(uint *)(uVar6 + 0xb);
      if (*(uint *)(uVar6 + 0xb) == (uint)param_2) goto LAB_01136c00;
      if ((*(ushort *)((uVar7 | 7) + (ulong)*(uint *)(local_2b0[0] - 1)) < 0x20) &&
         (*(ushort *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) < 0x20))
      goto LAB_01136c30;
      this = (String *)local_2b0;
    }
    else {
      if ((uint)param_2 == (uint)uVar6) goto LAB_01136c00;
      if ((*(ushort *)(uVar8 + *(uint *)(uVar6 - 1)) < 0x20) &&
         (*(ushort *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) < 0x20))
      goto LAB_01136c30;
    }
    bVar2 = SlowEquals(this,param_2);
  }
LAB_01136c34:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2 & 1;
}



void FUN_0166c760(ulong param_1,long param_2,long param_3,BytecodeArrayAccessor *param_4,
                 undefined8 *param_5,BytecodeLivenessMap *param_6)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  int extraout_var;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  uint local_b0 [8];
  iterator aiStack_90 [56];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar4 = (uint)param_1;
  if ((uVar4 & 0xff | 1) == 0xb1) {
    if (*(int *)(param_2 + 0xc) == 1) {
      *(ulong *)(param_2 + 0x10) = *(ulong *)(param_2 + 0x10) | *(ulong *)(param_3 + 0x10);
    }
    else if (0 < *(int *)(param_2 + 0xc)) {
      lVar8 = 0;
      do {
        lVar13 = lVar8 * 8;
        lVar8 = lVar8 + 1;
        *(ulong *)(*(long *)(param_2 + 0x10) + lVar13) =
             *(ulong *)(*(long *)(param_2 + 0x10) + lVar13) |
             *(ulong *)(*(long *)(param_3 + 0x10) + lVar13);
      } while (lVar8 < *(int *)(param_2 + 0xc));
    }
    goto LAB_0166c9d8;
  }
  iVar6 = *(int *)(param_4 + 8);
  if ((uVar4 + 0x75 & 0xff) < 0x16) {
    iVar5 = v8::internal::interpreter::BytecodeArrayAccessor::GetJumpTargetOffset(param_4);
    plVar7 = (long *)v8::internal::compiler::BytecodeLivenessMap::GetLiveness(param_6,iVar5);
    lVar8 = *plVar7;
    if (*(int *)(param_2 + 0xc) == 1) {
      *(ulong *)(param_2 + 0x10) = *(ulong *)(param_2 + 0x10) | *(ulong *)(lVar8 + 0x10);
    }
    else if (0 < *(int *)(param_2 + 0xc)) {
      lVar13 = 0;
      do {
        lVar14 = lVar13 * 8;
        lVar13 = lVar13 + 1;
        *(ulong *)(*(long *)(param_2 + 0x10) + lVar14) =
             *(ulong *)(*(long *)(param_2 + 0x10) + lVar14) |
             *(ulong *)(*(long *)(lVar8 + 0x10) + lVar14);
      } while (lVar13 < *(int *)(param_2 + 0xc));
    }
  }
  else if (((uVar4 & 0xff) == 0xaf) || ((uVar4 & 0xff) == 0xa1)) {
    v8::internal::interpreter::BytecodeArrayAccessor::GetJumpTableTargetOffsets();
    v8::internal::interpreter::JumpTableTargetOffsets::begin();
    v8::internal::interpreter::JumpTableTargetOffsets::end();
    while (uVar10 = v8::internal::interpreter::JumpTableTargetOffsets::iterator::operator!=
                              (aiStack_90,(iterator *)local_b0), (uVar10 & 1) != 0) {
      v8::internal::interpreter::JumpTableTargetOffsets::iterator::operator*(aiStack_90);
      plVar7 = (long *)v8::internal::compiler::BytecodeLivenessMap::GetLiveness
                                 (param_6,extraout_var);
      lVar8 = *plVar7;
      if (*(int *)(param_2 + 0xc) == 1) {
        *(ulong *)(param_2 + 0x10) = *(ulong *)(param_2 + 0x10) | *(ulong *)(lVar8 + 0x10);
      }
      else if (0 < *(int *)(param_2 + 0xc)) {
        lVar13 = 0;
        do {
          lVar14 = lVar13 * 8;
          lVar13 = lVar13 + 1;
          *(ulong *)(*(long *)(param_2 + 0x10) + lVar14) =
               *(ulong *)(*(long *)(param_2 + 0x10) + lVar14) |
               *(ulong *)(*(long *)(lVar8 + 0x10) + lVar14);
        } while (lVar13 < *(int *)(param_2 + 0xc));
      }
      v8::internal::interpreter::JumpTableTargetOffsets::iterator::operator++(aiStack_90);
    }
  }
  if ((2 < (uVar4 + 0x76 & 0xff)) && (param_3 != 0)) {
    if (*(int *)(param_2 + 0xc) == 1) {
      *(ulong *)(param_2 + 0x10) = *(ulong *)(param_2 + 0x10) | *(ulong *)(param_3 + 0x10);
    }
    else if (0 < *(int *)(param_2 + 0xc)) {
      lVar8 = 0;
      do {
        lVar13 = lVar8 * 8;
        lVar8 = lVar8 + 1;
        *(ulong *)(*(long *)(param_2 + 0x10) + lVar13) =
             *(ulong *)(*(long *)(param_2 + 0x10) + lVar13) |
             *(ulong *)(*(long *)(param_3 + 0x10) + lVar13);
      } while (lVar8 < *(int *)(param_2 + 0xc));
    }
  }
  if (((((uVar4 & 0xff) < 0x28) && ((1L << (param_1 & 0x3f) & 0xe00fc7f800U) != 0)) ||
      ((uVar4 & 0xfc) == 0x70)) ||
     ((((uVar4 + 0x76 & 0xff) < 0x17 && (3 < (uVar4 + 0x6b & 0xff))) ||
      (((uVar4 & 0xff) == 0xa1 || ((uVar4 & 0xff) == 0xaf)))))) goto LAB_0166c9d8;
  v8::internal::HandlerTable::HandlerTable((HandlerTable *)aiStack_90,*param_5);
  iVar6 = v8::internal::HandlerTable::LookupRange
                    ((HandlerTable *)aiStack_90,iVar6,(int *)local_b0,(CatchPrediction *)0x0);
  if (iVar6 == -1) goto LAB_0166c9d8;
  puVar1 = (ulong *)(param_2 + 0x10);
  uVar4 = *(int *)(param_2 + 8) - 1;
  puVar9 = puVar1;
  if (*(int *)(param_2 + 0xc) != 1) {
    uVar2 = *(int *)(param_2 + 8) + 0x3e;
    if (-1 < (int)uVar4) {
      uVar2 = uVar4;
    }
    puVar9 = (ulong *)(*puVar1 + (long)((int)uVar2 >> 6) * 8);
  }
  uVar10 = *puVar9;
  plVar7 = (long *)v8::internal::compiler::BytecodeLivenessMap::GetLiveness(param_6,iVar6);
  lVar8 = *plVar7;
  if (*(int *)(param_2 + 0xc) == 1) {
    *puVar1 = *puVar1 | *(ulong *)(lVar8 + 0x10);
LAB_0166cb38:
    uVar12 = *puVar1;
    uVar11 = 1L << ((ulong)local_b0[0] & 0x3f);
    puVar9 = puVar1;
  }
  else {
    if (0 < *(int *)(param_2 + 0xc)) {
      lVar13 = 0;
      do {
        lVar14 = lVar13 * 8;
        lVar13 = lVar13 + 1;
        *(ulong *)(*(long *)(param_2 + 0x10) + lVar14) =
             *(ulong *)(*(long *)(param_2 + 0x10) + lVar14) |
             *(ulong *)(*(long *)(lVar8 + 0x10) + lVar14);
      } while (lVar13 < *(int *)(param_2 + 0xc));
      if (*(int *)(param_2 + 0xc) == 1) goto LAB_0166cb38;
    }
    uVar2 = local_b0[0] + 0x3f;
    if (-1 < (int)local_b0[0]) {
      uVar2 = local_b0[0];
    }
    puVar9 = (ulong *)(*(long *)(param_2 + 0x10) + (long)((int)uVar2 >> 6) * 8);
    uVar11 = *puVar9;
    uVar12 = 1L << ((ulong)local_b0[0] & 0x3f);
  }
  *puVar9 = uVar12 | uVar11;
  if ((uVar10 & 1L << ((ulong)uVar4 & 0x3f)) == 0) {
    uVar4 = *(int *)(param_2 + 8) - 1;
    if (*(int *)(param_2 + 0xc) == 1) {
      *puVar1 = *puVar1 & (1L << ((ulong)uVar4 & 0x3f) ^ 0xffffffffffffffffU);
    }
    else {
      uVar2 = *(int *)(param_2 + 8) + 0x3e;
      if (-1 < (int)uVar4) {
        uVar2 = uVar4;
      }
      uVar10 = -(ulong)((uint)((int)uVar2 >> 6) >> 0x1f) & 0xfffffff800000000 |
               (ulong)(uint)((int)uVar2 >> 6) << 3;
      *(ulong *)(*(long *)(param_2 + 0x10) + uVar10) =
           *(ulong *)(*(long *)(param_2 + 0x10) + uVar10) &
           (1L << ((ulong)uVar4 & 0x3f) ^ 0xffffffffffffffffU);
    }
  }
LAB_0166c9d8:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* v8::internal::compiler::InstructionSelector::VisitWordCompareZero(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::FlagsContinuation*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitWordCompareZero
          (InstructionSelector *this,Node *param_1,Node *param_2,FlagsContinuation *param_3)

{
  int iVar1;
  short sVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  Node *pNVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  Constant *pCVar10;
  uint uVar11;
  int iVar12;
  InstructionSequence *pIVar13;
  Node *pNVar14;
  undefined2 uVar15;
  Constant aCStack_e8 [16];
  uint local_d8;
  undefined1 local_d4;
  Node *local_d0;
  BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<unsigned_long,(v8::internal::compiler::IrOpcode::Value)24>>
  aBStack_c8 [8];
  Node *local_c0;
  int local_b8;
  char local_b4;
  long local_b0;
  uint local_a8;
  char local_a4;
  ulong local_a0;
  char local_98;
  BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
  aBStack_90 [8];
  Node *local_88;
  long local_68;
  char local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  sVar2 = *(short *)(*(long *)param_2 + 0x10);
  while ((((sVar2 == 0x14b && (uVar4 = CanCover(this,param_1,param_2), (uVar4 & 1) != 0)) &&
          (BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
           ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                           *)&local_d8,param_2), local_b4 != '\0')) && (local_b8 == 0))) {
    *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) ^ 1;
    sVar2 = *(short *)(*(long *)local_d0 + 0x10);
    local_b8 = 0;
    param_1 = param_2;
    param_2 = local_d0;
  }
  sVar2 = *(short *)(*(long *)param_2 + 0x10);
  if (sVar2 == 0x128) {
    local_d8 = (uint)local_d8._1_3_ << 8;
    local_d0 = (Node *)param_3;
    BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>>
                    *)aBStack_c8,param_2);
    if (((*(int *)local_d0 == 2) || (1 < *(int *)local_d0 - 1U)) ||
       ((local_a4 == '\0' ||
        (uVar11 = CONCAT13(POPCOUNT((char)(local_a8 >> 0x18)),
                           CONCAT12(POPCOUNT((char)(local_a8 >> 0x10)),
                                    CONCAT11(POPCOUNT((char)(local_a8 >> 8)),
                                             POPCOUNT((char)local_a8)))),
        uVar15 = NEON_uaddlv((ulong)uVar11,1), CONCAT22((short)(uVar11 >> 0x10),uVar15) != 1))))
    goto LAB_01621df4;
    local_d8 = CONCAT31(local_d8._1_3_,(char)uVar15);
    uVar5 = GetVirtualRegister(this,local_c0);
    MarkAsUsed(this,local_c0);
    pIVar13 = *(InstructionSequence **)(this + 0x10);
    uVar11 = (local_a8 & 0xaaaaaaaa) >> 1 | (local_a8 & 0x55555555) << 1;
    uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    Constant::Constant((Constant *)aBStack_90,(int)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10));
    uVar4 = InstructionSequence::AddImmediate(pIVar13,(Constant *)aBStack_90);
    uVar11 = 0xa4;
LAB_01621de8:
    uVar5 = (uVar5 & 0xffffffff) << 3;
LAB_01621f4c:
    EmitWithContinuation(this,uVar11,uVar5 | 0x5800000001,uVar4,param_3);
    goto LAB_01621f54;
  }
  if (sVar2 == 0x13b) {
    local_d8 = (uint)local_d8._1_3_ << 8;
    local_d0 = (Node *)param_3;
    BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<unsigned_long,(v8::internal::compiler::IrOpcode::Value)24>>
    ::BinopMatcher(aBStack_c8,param_2);
    if (((*(int *)local_d0 != 2) && (*(int *)local_d0 - 1U < 2)) &&
       ((local_98 != '\0' &&
        (uVar8 = CONCAT17(POPCOUNT((char)(local_a0 >> 0x38)),
                          CONCAT16(POPCOUNT((char)(local_a0 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)(local_a0 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)(local_a0 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)(local_a0 >> 0x18)),
                                                              CONCAT12(POPCOUNT((char)(local_a0 >>
                                                                                      0x10)),
                                                                       CONCAT11(POPCOUNT((char)(
                                                  local_a0 >> 8)),POPCOUNT((char)local_a0)))))))),
        uVar15 = NEON_uaddlv(uVar8,1), (int)CONCAT62((int6)((ulong)uVar8 >> 0x10),uVar15) == 1)))) {
      local_d8 = CONCAT31(local_d8._1_3_,1);
      uVar5 = GetVirtualRegister(this,local_c0);
      MarkAsUsed(this,local_c0);
      pIVar13 = *(InstructionSequence **)(this + 0x10);
      uVar4 = (local_a0 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a0 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      Constant::Constant((Constant *)aBStack_90,(int)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20));
      pCVar10 = (Constant *)aBStack_90;
LAB_01621d20:
      uVar4 = InstructionSequence::AddImmediate(pIVar13,pCVar10);
      uVar11 = 0xa5;
      goto LAB_01621de8;
    }
  }
  else if ((((sVar2 == 0x14c) &&
            (BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
             ::BinopMatcher(aBStack_90,param_2), local_60 != '\0')) && (local_68 == 0)) &&
          (*(short *)(*(long *)local_88 + 0x10) == 0x13b)) {
    local_d8 = local_d8 & 0xffffff00;
    local_d0 = (Node *)param_3;
    BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<unsigned_long,(v8::internal::compiler::IrOpcode::Value)24>>
    ::BinopMatcher(aBStack_c8,local_88);
    if (((*(int *)local_d0 != 2) && (*(int *)local_d0 - 1U < 2)) &&
       ((local_98 != '\0' &&
        (uVar8 = CONCAT17(POPCOUNT((char)(local_a0 >> 0x38)),
                          CONCAT16(POPCOUNT((char)(local_a0 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)(local_a0 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)(local_a0 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)(local_a0 >> 0x18)),
                                                              CONCAT12(POPCOUNT((char)(local_a0 >>
                                                                                      0x10)),
                                                                       CONCAT11(POPCOUNT((char)(
                                                  local_a0 >> 8)),POPCOUNT((char)local_a0)))))))),
        uVar15 = NEON_uaddlv(uVar8,1), (int)CONCAT62((int6)((ulong)uVar8 >> 0x10),uVar15) == 1)))) {
      local_d8 = CONCAT31(local_d8._1_3_,1);
      *(uint *)(param_3 + 4) = (uint)(*(int *)(param_3 + 4) == 0);
      uVar5 = GetVirtualRegister(this,local_c0);
      MarkAsUsed(this,local_c0);
      pIVar13 = *(InstructionSequence **)(this + 0x10);
      uVar4 = (local_a0 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a0 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      Constant::Constant(aCStack_e8,(int)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20));
      pCVar10 = aCStack_e8;
      goto LAB_01621d20;
    }
  }
LAB_01621df4:
  uVar4 = CanCover(this,param_1,param_2);
  if ((uVar4 & 1) == 0) {
switchD_01621e30_caseD_129:
    iVar12 = *(int *)param_3;
    if ((iVar12 == 2) || (iVar12 == 4)) {
LAB_01621ef4:
      uVar11 = iVar12 << 0xe | 0x6dU | *(int *)(param_3 + 4) << 0x11;
    }
    else {
      if (iVar12 - 1U < 2) {
        iVar1 = *(int *)(param_3 + 4);
        uVar4 = GetVirtualRegister(this,param_2);
        MarkAsUsed(this,param_2);
        local_d0 = (Node *)(long)*(int *)(*(long *)(param_3 + 0x28) + 4);
        local_d8 = 7;
        local_d4 = 0x13;
        uVar8 = InstructionSequence::AddImmediate
                          (*(InstructionSequence **)(this + 0x10),(Constant *)&local_d8);
        local_d0 = (Node *)(long)*(int *)(*(long *)(param_3 + 0x30) + 4);
        local_d8 = 7;
        local_d4 = 0x13;
        uVar9 = InstructionSequence::AddImmediate
                          (*(InstructionSequence **)(this + 0x10),(Constant *)&local_d8);
        Emit(this,iVar12 << 0xe | iVar1 << 0x11 | 0xa6,0,(uVar4 & 0xffffffff) << 3 | 0x5800000001,
             uVar8,uVar9,0,0);
        goto LAB_01621f54;
      }
      if (iVar12 != 0) goto LAB_01621ef4;
      uVar11 = 0x6d;
    }
    uVar4 = GetVirtualRegister(this,param_2);
    uVar5 = (uVar4 & 0xffffffff) << 3;
    MarkAsUsed(this,param_2);
    uVar4 = GetVirtualRegister(this,param_2);
    uVar4 = (uVar4 & 0xffffffff) << 3 | 0x5800000001;
    MarkAsUsed(this,param_2);
    goto LAB_01621f4c;
  }
  sVar2 = *(short *)(*(Operator **)param_2 + 0x10);
  switch(sVar2) {
  case 0x128:
    uVar8 = 0x6d;
    uVar9 = 3;
    goto LAB_01622098;
  case 0x129:
  case 0x12a:
  case 299:
  case 300:
  case 0x12d:
  case 0x12e:
  case 0x130:
  case 0x132:
  case 0x133:
  case 0x134:
  case 0x135:
  case 0x136:
  case 0x137:
  case 0x138:
  case 0x139:
  case 0x13a:
  case 0x13c:
  case 0x13d:
  case 0x13e:
  case 0x13f:
  case 0x140:
  case 0x141:
  case 0x142:
  case 0x143:
  case 0x144:
  case 0x145:
  case 0x146:
  case 0x147:
  case 0x148:
  case 0x149:
  case 0x14a:
  case 0x15b:
  case 0x15c:
  case 0x15d:
  case 0x15e:
  case 0x15f:
  case 0x160:
  case 0x161:
  case 0x162:
  case 0x163:
  case 0x164:
  case 0x165:
  case 0x166:
  case 0x167:
  case 0x168:
  case 0x169:
  case 0x16a:
  case 0x16b:
  case 0x16c:
  case 0x16d:
  case 0x16e:
  case 0x16f:
  case 0x170:
  case 0x171:
  case 0x172:
  case 0x173:
  case 0x174:
  case 0x175:
  case 0x176:
  case 0x177:
  case 0x178:
  case 0x179:
  case 0x17a:
  case 0x17b:
  case 0x17c:
  case 0x17d:
  case 0x17e:
  case 0x17f:
  case 0x180:
  case 0x181:
  case 0x182:
  case 0x183:
  case 0x184:
  case 0x185:
  case 0x186:
  case 0x187:
  case 0x188:
  case 0x189:
  case 0x18a:
  case 0x18b:
  case 0x18c:
  case 0x18d:
  case 0x18e:
  case 399:
  case 400:
  case 0x191:
  case 0x192:
  case 0x193:
  case 0x194:
  case 0x195:
  case 0x196:
  case 0x197:
  case 0x198:
  case 0x199:
  case 0x19a:
  case 0x19b:
  case 0x19c:
  case 0x19d:
  case 0x19e:
  case 0x19f:
  case 0x1a0:
  case 0x1a1:
  case 0x1a2:
  case 0x1a3:
  case 0x1a4:
  case 0x1a5:
  case 0x1a6:
  case 0x1a7:
  case 0x1a8:
  case 0x1a9:
  case 0x1aa:
  case 0x1ab:
  case 0x1ac:
  case 0x1ad:
  case 0x1ae:
  case 0x1af:
  case 0x1b0:
  case 0x1b1:
  case 0x1b2:
  case 0x1b3:
  case 0x1b4:
  case 0x1b5:
  case 0x1b6:
  case 0x1b7:
  case 0x1b8:
  case 0x1b9:
  case 0x1ba:
  case 0x1bb:
  case 0x1bc:
  case 0x1bd:
  case 0x1be:
  case 0x1bf:
  case 0x1c0:
  case 0x1c1:
  case 0x1c2:
  case 0x1c3:
  case 0x1c4:
  case 0x1c5:
  case 0x1c6:
  case 0x1c7:
  case 0x1c8:
  case 0x1c9:
  case 0x1ca:
  case 0x1cb:
  case 0x1cc:
  case 0x1cd:
  case 0x1ce:
  case 0x1cf:
  case 0x1d0:
  case 0x1d1:
  case 0x1d2:
  case 0x1d3:
  case 0x1d4:
  case 0x1d5:
  case 0x1d6:
  case 0x1d7:
  case 0x1d8:
  case 0x1d9:
  case 0x1da:
  case 0x1db:
  case 0x1dc:
  case 0x1dd:
  case 0x1de:
  case 0x1df:
  case 0x1e0:
  case 0x1e1:
  case 0x1e2:
  case 0x1e3:
  case 0x1e4:
  case 0x1e5:
  case 0x1e6:
  case 0x1e7:
  case 0x1e8:
  case 0x1e9:
  case 0x1ea:
  case 0x1eb:
  case 0x1ec:
  case 0x1ed:
  case 0x1ee:
  case 0x1ef:
  case 0x1f0:
  case 0x1f1:
  case 0x1f2:
  case 499:
  case 500:
  case 0x1f5:
  case 0x1f6:
  case 0x1f7:
    goto switchD_01621e30_caseD_129;
  case 0x12f:
    uVar8 = 0x6b;
    goto LAB_01622230;
  case 0x131:
    goto switchD_01621e30_caseD_131;
  case 0x13b:
    uVar8 = 0x6c;
    uVar9 = 4;
LAB_01622098:
    FUN_01622744(this,param_2,uVar8,param_3,uVar9);
    goto LAB_01621f54;
  case 0x14b:
    uVar11 = (uint)(*(int *)(param_3 + 4) == 0);
    break;
  case 0x14c:
    *(uint *)(param_3 + 4) = (uint)(*(int *)(param_3 + 4) == 0);
    BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
                    *)&local_d8,param_2);
    pNVar14 = local_d0;
    if (((((char)local_a8 != '\0') && (local_b0 == 0)) &&
        (uVar4 = CanCover(this,param_2,local_d0), (uVar4 & 1) != 0)) &&
       (*(short *)(*(long *)pNVar14 + 0x10) == 0x13b)) {
      uVar8 = 0x6c;
      uVar9 = 4;
      param_2 = pNVar14;
      goto LAB_01622098;
    }
    goto LAB_0162222c;
  case 0x14d:
    uVar11 = *(int *)(param_3 + 4) == 0 | 2;
    break;
  case 0x14e:
    uVar11 = *(int *)(param_3 + 4) == 0 | 4;
    break;
  case 0x14f:
    uVar11 = *(int *)(param_3 + 4) == 0 | 6;
    break;
  case 0x150:
    uVar11 = *(int *)(param_3 + 4) == 0 | 8;
    break;
  case 0x151:
    uVar11 = *(int *)(param_3 + 4) == 0 | 2;
    goto LAB_01622228;
  case 0x152:
    uVar11 = *(int *)(param_3 + 4) == 0 | 4;
    goto LAB_01622228;
  case 0x153:
    uVar11 = *(int *)(param_3 + 4) == 0 | 6;
    goto LAB_01622228;
  case 0x154:
    uVar11 = *(int *)(param_3 + 4) == 0 | 8;
LAB_01622228:
    *(uint *)(param_3 + 4) = uVar11;
LAB_0162222c:
    uVar8 = 0x68;
LAB_01622230:
    FUN_01622744(this,param_2,uVar8,param_3,0);
    goto LAB_01621f54;
  case 0x155:
    uVar11 = (uint)(*(int *)(param_3 + 4) == 0);
    goto LAB_0162214c;
  case 0x156:
    uVar11 = *(int *)(param_3 + 4) == 0 | 0xe;
    goto LAB_0162214c;
  case 0x157:
    uVar11 = *(int *)(param_3 + 4) == 0 | 0xc;
LAB_0162214c:
    *(uint *)(param_3 + 4) = uVar11;
    FUN_01622af8(this,param_2,param_3);
    goto LAB_01621f54;
  case 0x158:
    uVar11 = (uint)(*(int *)(param_3 + 4) == 0);
    goto LAB_01622184;
  case 0x159:
    uVar11 = *(int *)(param_3 + 4) == 0 | 0xe;
    goto LAB_01622184;
  case 0x15a:
    uVar11 = *(int *)(param_3 + 4) == 0 | 0xc;
LAB_01622184:
    *(uint *)(param_3 + 4) = uVar11;
    FUN_01622c54(this,param_2,param_3);
    goto LAB_01621f54;
  case 0x1f8:
    *(uint *)(param_3 + 4) = *(int *)(param_3 + 4) == 0 ^ 9;
    VisitStackPointerGreaterThan(this,param_2,param_3);
    goto LAB_01621f54;
  default:
    if ((sVar2 != 0x37) || (lVar6 = ProjectionIndexOf(*(Operator **)param_2), lVar6 != 1))
    goto switchD_01621e30_caseD_129;
    pNVar14 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar14 = (Node *)(*(long *)pNVar14 + 0x10);
    }
    pNVar14 = *(Node **)pNVar14;
    pNVar7 = (Node *)NodeProperties::FindProjection(pNVar14,0);
    if ((pNVar7 != (Node *)0x0) && (uVar4 = IsDefined(this,pNVar7), (uVar4 & 1) == 0))
    goto switchD_01621e30_caseD_129;
    switch(*(undefined2 *)(*(long *)pNVar14 + 0x10)) {
    case 0x130:
      iVar12 = *(int *)(param_3 + 4);
      uVar8 = 0x61;
      break;
    default:
      goto switchD_01621e30_caseD_129;
    case 0x132:
      iVar12 = *(int *)(param_3 + 4);
      uVar8 = 0x77;
      break;
    case 0x134:
      *(uint *)(param_3 + 4) = (uint)(*(int *)(param_3 + 4) != 0);
      FUN_0162320c(this,pNVar14,param_3);
      goto LAB_01621f54;
    case 0x143:
      iVar12 = *(int *)(param_3 + 4);
      uVar8 = 0x60;
      goto LAB_016222e8;
    case 0x145:
      iVar12 = *(int *)(param_3 + 4);
      uVar8 = 0x76;
LAB_016222e8:
      *(uint *)(param_3 + 4) = iVar12 == 0 | 0x14;
      FUN_01623308(this,pNVar14,uVar8,0,param_3);
      goto LAB_01621f54;
    }
    *(uint *)(param_3 + 4) = iVar12 == 0 | 0x14;
    FUN_01622dd0(this,pNVar14,uVar8,0,param_3);
    goto LAB_01621f54;
  }
  *(uint *)(param_3 + 4) = uVar11;
switchD_01621e30_caseD_131:
  FUN_01622314(this,param_2,param_3);
LAB_01621f54:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


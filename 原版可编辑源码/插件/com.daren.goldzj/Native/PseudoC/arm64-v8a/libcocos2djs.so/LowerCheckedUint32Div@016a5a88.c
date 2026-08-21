
/* v8::internal::compiler::EffectControlLinearizer::LowerCheckedUint32Div(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerCheckedUint32Div
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  GraphAssembler *this_00;
  Node *pNVar1;
  uint uVar2;
  long lVar3;
  Node *pNVar4;
  Node *pNVar5;
  Node *pNVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  uint uVar9;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pNVar5 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  pNVar1 = *(Node **)pNVar5;
  pNVar5 = *(Node **)(pNVar5 + 8);
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar4 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  if (*(short *)(*(long *)pNVar5 + 0x10) == 0x17) {
    uVar2 = *(uint *)(*(long *)pNVar5 + 0x2c);
    uVar9 = CONCAT13(POPCOUNT((char)(uVar2 >> 0x18)),
                     CONCAT12(POPCOUNT((char)(uVar2 >> 0x10)),
                              CONCAT11(POPCOUNT((char)(uVar2 >> 8)),POPCOUNT((char)uVar2))));
    uVar8 = NEON_uaddlv((ulong)uVar9,1);
    if (CONCAT22((short)(uVar9 >> 0x10),uVar8) == 1) {
      pNVar5 = (Node *)GraphAssembler::Uint32Constant(this_00,uVar2 - 1);
      uVar2 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
      uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      pNVar6 = (Node *)GraphAssembler::Uint32Constant
                                 (this_00,(uint)LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10));
      pNVar5 = (Node *)GraphAssembler::Word32And(this_00,pNVar1,pNVar5);
      uVar7 = GraphAssembler::Word32Equal(this_00,pNVar5,pNVar4);
      local_68 = 0;
      local_60 = 0xffffffff;
      GraphAssembler::DeoptimizeIfNot(this_00,0x10,&local_68,uVar7,param_2,1);
      pNVar4 = (Node *)GraphAssembler::Word32Shr(this_00,pNVar1,pNVar6);
      goto LAB_016a5c28;
    }
  }
  uVar7 = GraphAssembler::Word32Equal(this_00,pNVar5,pNVar4);
  local_68 = 0;
  local_60 = 0xffffffff;
  GraphAssembler::DeoptimizeIf(this_00,5,&local_68,uVar7,param_2,1);
  pNVar4 = (Node *)GraphAssembler::Uint32Div(this_00,pNVar1,pNVar5);
  pNVar5 = (Node *)GraphAssembler::Int32Mul(this_00,pNVar5,pNVar4);
  uVar7 = GraphAssembler::Word32Equal(this_00,pNVar1,pNVar5);
  local_68 = 0;
  local_60 = 0xffffffff;
  GraphAssembler::DeoptimizeIfNot(this_00,0x10,&local_68,uVar7,param_2,1);
LAB_016a5c28:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return pNVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


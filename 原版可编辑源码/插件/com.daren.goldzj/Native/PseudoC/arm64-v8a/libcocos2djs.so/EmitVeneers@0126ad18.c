
/* WARNING: Removing unreachable block (ram,0x0126b110) */
/* WARNING: Removing unreachable block (ram,0x0126b118) */
/* WARNING: Removing unreachable block (ram,0x0126b11c) */
/* WARNING: Removing unreachable block (ram,0x0126b1b0) */
/* WARNING: Removing unreachable block (ram,0x0126b1a0) */
/* WARNING: Removing unreachable block (ram,0x0126b1b4) */
/* v8::internal::Assembler::EmitVeneers(bool, bool, unsigned long) */

void __thiscall
v8::internal::Assembler::EmitVeneers(Assembler *this,bool param_1,bool param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  bool bVar5;
  long lVar6;
  Assembler *pAVar7;
  long *plVar8;
  __tree_node_base *p_Var9;
  Assembler *pAVar10;
  Instruction *pIVar11;
  Assembler *pAVar12;
  Label *pLVar13;
  BlockScope aBStack_a0 [64];
  
  ConstantPool::BlockScope::BlockScope(aBStack_a0,this,0);
  *(int *)(this + 0xd0) = *(int *)(this + 0xd0) + 1;
  AssemblerBase::RecordComment((AssemblerBase *)this,"[ Veneers");
  bind((Label *)this);
  if (param_2) {
    **(undefined4 **)(this + 0x20) = 0x14000000;
    lVar6 = *(long *)(this + 0x20) + 4;
    *(long *)(this + 0x20) = lVar6;
    if (*(int *)(this + 0xd8) - (int)lVar6 < 0x40) {
      GrowBuffer(this);
      lVar6 = *(long *)(this + 0x20);
    }
    if (((*(int *)(this + 0x130) <= (int)lVar6 - (int)*(undefined8 *)(this + 0x10)) &&
        (*(long *)(this + 0x128) != 0)) && (*(int *)(this + 0xd0) < 1)) {
      if (*(long *)(this + 0x128) * 4 + (long)((int)lVar6 - (int)*(undefined8 *)(this + 0x10)) +
          0x408 < (long)*(int *)(*(long *)(this + 0x118) + 0x20)) {
        *(int *)(this + 0x130) = *(int *)(*(long *)(this + 0x118) + 0x20) + -0x800;
      }
      else {
        EmitVeneers(this,false,true,0x400);
      }
    }
    ConstantPool::MaybeCheck((ConstantPool *)(this + 0x138));
  }
  Emit(this,0xd63f03e0);
  pAVar10 = *(Assembler **)(this + 0x118);
  if (this + 0x120 != pAVar10) {
    if (!param_1) goto LAB_0126aec8;
LAB_0126aebc:
    lVar6 = *(long *)(this + 0x10);
    pIVar11 = *(Instruction **)(this + 0x20);
    do {
      iVar3 = *(int *)(pAVar10 + 0x28);
      pLVar13 = *(Label **)(pAVar10 + 0x30);
      RemoveBranchFromLabelLinkChain(this,(Instruction *)(lVar6 + iVar3),pLVar13,pIVar11);
      Instruction::SetImmPCOffsetTarget
                ((Instruction *)(lVar6 + iVar3),(AssemblerOptions *)(this + 0xa0),pIVar11);
      uVar2 = *(uint *)pLVar13;
      if ((int)uVar2 < 0) {
        uVar1 = ~uVar2 + (*(int *)(this + 0x10) - *(int *)(this + 0x20));
      }
      else {
        uVar1 = 0;
        if (uVar2 != 0) {
          uVar1 = uVar2 + ~(*(int *)(this + 0x20) - *(int *)(this + 0x10));
        }
        *(uint *)pLVar13 = (*(int *)(this + 0x20) - *(int *)(this + 0x10)) + 1;
      }
      if (((int)uVar1 >> 2) + 0x2000000U >> 0x1a != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","is_int26(imm26)");
      }
      **(uint **)(this + 0x20) = uVar1 >> 2 & 0x3ffffff | 0x14000000;
      lVar6 = *(long *)(this + 0x20) + 4;
      *(long *)(this + 0x20) = lVar6;
      if (*(int *)(this + 0xd8) - (int)lVar6 < 0x40) {
        GrowBuffer(this);
        lVar6 = *(long *)(this + 0x20);
      }
      if (((*(int *)(this + 0x130) <= (int)lVar6 - (int)*(undefined8 *)(this + 0x10)) &&
          (*(long *)(this + 0x128) != 0)) && (*(int *)(this + 0xd0) < 1)) {
        if (*(long *)(this + 0x128) * 4 + (long)((int)lVar6 - (int)*(undefined8 *)(this + 0x10)) +
            0x408 < (long)*(int *)(*(long *)(this + 0x118) + 0x20)) {
          *(int *)(this + 0x130) = *(int *)(*(long *)(this + 0x118) + 0x20) + -0x800;
        }
        else {
          EmitVeneers(this,false,true,0x400);
        }
      }
      ConstantPool::MaybeCheck((ConstantPool *)(this + 0x138));
      pAVar7 = *(Assembler **)(pAVar10 + 8);
      if (*(Assembler **)(pAVar10 + 8) == (Assembler *)0x0) {
        p_Var9 = (__tree_node_base *)(pAVar10 + 0x10);
        pAVar12 = *(Assembler **)p_Var9;
        if (*(__tree_node_base **)pAVar12 != (__tree_node_base *)pAVar10) {
          do {
            lVar6 = *(long *)p_Var9;
            p_Var9 = (__tree_node_base *)(lVar6 + 0x10);
            pAVar12 = *(Assembler **)p_Var9;
          } while (*(long *)pAVar12 != lVar6);
        }
      }
      else {
        do {
          pAVar12 = pAVar7;
          pAVar7 = *(Assembler **)pAVar12;
        } while (*(Assembler **)pAVar12 != (Assembler *)0x0);
      }
      plVar4 = *(long **)(pAVar10 + 8);
      if (*(long **)(pAVar10 + 8) == (long *)0x0) {
        p_Var9 = (__tree_node_base *)(pAVar10 + 0x10);
        plVar8 = *(long **)p_Var9;
        if ((__tree_node_base *)*plVar8 != (__tree_node_base *)pAVar10) {
          do {
            lVar6 = *(long *)p_Var9;
            p_Var9 = (__tree_node_base *)(lVar6 + 0x10);
            plVar8 = *(long **)p_Var9;
          } while (*plVar8 != lVar6);
        }
      }
      else {
        do {
          plVar8 = plVar4;
          plVar4 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
      if (*(__tree_node_base **)(this + 0x118) == (__tree_node_base *)pAVar10) {
        *(long **)(this + 0x118) = plVar8;
      }
      *(long *)(this + 0x128) = *(long *)(this + 0x128) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x120),(__tree_node_base *)pAVar10);
      operator_delete(pAVar10);
      pAVar10 = pAVar12;
      while( true ) {
        if (this + 0x120 == pAVar10) goto LAB_0126b220;
        if (param_1) goto LAB_0126aebc;
LAB_0126aec8:
        pIVar11 = *(Instruction **)(this + 0x20);
        lVar6 = *(long *)(this + 0x10);
        if ((long)*(int *)(pAVar10 + 0x20) <=
            (long)(param_3 + 8 + *(long *)(this + 0x128) * 4 + (long)((int)pIVar11 - (int)lVar6)))
        break;
        pAVar7 = *(Assembler **)(pAVar10 + 8);
        if (*(Assembler **)(pAVar10 + 8) == (Assembler *)0x0) {
          pAVar7 = pAVar10 + 0x10;
          bVar5 = *(Assembler **)*(Assembler **)pAVar7 != pAVar10;
          pAVar10 = *(Assembler **)pAVar7;
          if (bVar5) {
            do {
              lVar6 = *(long *)pAVar7;
              pAVar7 = (Assembler *)(lVar6 + 0x10);
              pAVar10 = *(Assembler **)pAVar7;
            } while (*(long *)pAVar10 != lVar6);
          }
        }
        else {
          do {
            pAVar10 = pAVar7;
            pAVar7 = *(Assembler **)pAVar10;
          } while (*(Assembler **)pAVar10 != (Assembler *)0x0);
        }
      }
    } while( true );
  }
LAB_0126b220:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}


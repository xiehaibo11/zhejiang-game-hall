
/* v8::internal::compiler::CodeAssemblerVariable::~CodeAssemblerVariable() */

void __thiscall
v8::internal::compiler::CodeAssemblerVariable::~CodeAssemblerVariable(CodeAssemblerVariable *this)

{
  uint uVar1;
  long *plVar2;
  bool bVar3;
  __tree_node_base *p_Var4;
  __tree_node_base *p_Var5;
  long *plVar6;
  long lVar7;
  __tree_node_base *p_Var8;
  __tree_node_base *p_Var9;
  long lVar10;
  
  lVar7 = *(long *)(this + 8);
  p_Var8 = (__tree_node_base *)(lVar7 + 0x28);
  p_Var4 = *(__tree_node_base **)p_Var8;
  if (p_Var4 != (__tree_node_base *)0x0) {
    uVar1 = *(uint *)(*(long *)this + 0xc);
    p_Var5 = p_Var8;
    p_Var9 = p_Var4;
    do {
      bVar3 = *(uint *)(*(long *)(p_Var9 + 0x20) + 0xc) < uVar1;
      if (!bVar3) {
        p_Var5 = p_Var9;
      }
      p_Var9 = *(__tree_node_base **)(p_Var9 + (ulong)bVar3 * 8);
    } while (p_Var9 != (__tree_node_base *)0x0);
    if ((p_Var5 != p_Var8) && (*(uint *)(*(long *)(p_Var5 + 0x20) + 0xc) <= uVar1)) {
      plVar2 = *(long **)(p_Var5 + 8);
      if (*(long **)(p_Var5 + 8) == (long *)0x0) {
        p_Var8 = p_Var5 + 0x10;
        plVar6 = *(long **)p_Var8;
        if ((__tree_node_base *)*plVar6 != p_Var5) {
          do {
            lVar10 = *(long *)p_Var8;
            p_Var8 = (__tree_node_base *)(lVar10 + 0x10);
            plVar6 = *(long **)p_Var8;
          } while (*plVar6 != lVar10);
        }
      }
      else {
        do {
          plVar6 = plVar2;
          plVar2 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      if (*(__tree_node_base **)(lVar7 + 0x20) == p_Var5) {
        *(long **)(lVar7 + 0x20) = plVar6;
      }
      *(long *)(lVar7 + 0x38) = *(long *)(lVar7 + 0x38) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>(p_Var4,p_Var5);
      return;
    }
  }
  return;
}


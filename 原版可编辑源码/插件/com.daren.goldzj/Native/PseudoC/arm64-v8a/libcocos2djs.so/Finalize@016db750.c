
/* v8::internal::compiler::JSCallReducer::Finalize() */

void __thiscall v8::internal::compiler::JSCallReducer::Finalize(JSCallReducer *this)

{
  bool bVar1;
  Node *pNVar2;
  __tree_node *p_Var3;
  uint uVar4;
  long lVar5;
  Node *pNVar6;
  __tree_node *p_Var7;
  __tree_node *local_48;
  __tree_node *local_40;
  long local_38;
  
  p_Var7 = *(__tree_node **)(this + 0x38);
  local_40 = *(__tree_node **)(this + 0x40);
  local_38 = *(long *)(this + 0x48);
  local_48 = (__tree_node *)&local_40;
  if (local_38 != 0) {
    *(__tree_node **)(local_40 + 0x10) = (__tree_node *)&local_40;
    *(undefined8 *)(this + 0x40) = 0;
    *(JSCallReducer **)(this + 0x38) = this + 0x40;
    *(undefined8 *)(this + 0x48) = 0;
    local_48 = p_Var7;
    while ((__tree_node *)&local_40 != p_Var7) {
      pNVar6 = *(Node **)(p_Var7 + 0x20);
      uVar4 = (byte)pNVar6[0x17] & 0xf;
      pNVar2 = pNVar6 + 0x20;
      if (uVar4 == 0xf) {
        uVar4 = *(uint *)(*(long *)pNVar2 + 8);
        pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
      }
      if (((((int)uVar4 < 1) || (*(long *)pNVar2 != 0)) &&
          (pNVar2 = (Node *)Reduce(this,pNVar6), pNVar2 != (Node *)0x0)) && (pNVar6 != pNVar2)) {
        (**(code **)(**(long **)(this + 8) + 0x10))(*(long **)(this + 8),pNVar6,pNVar2);
      }
      p_Var3 = *(__tree_node **)(p_Var7 + 8);
      if (*(__tree_node **)(p_Var7 + 8) == (__tree_node *)0x0) {
        p_Var3 = p_Var7 + 0x10;
        bVar1 = (__tree_node *)*(__tree_node ***)*(__tree_node **)p_Var3 != p_Var7;
        p_Var7 = *(__tree_node **)p_Var3;
        if (bVar1) {
          do {
            lVar5 = *(long *)p_Var3;
            p_Var3 = (__tree_node *)(lVar5 + 0x10);
            p_Var7 = *(__tree_node **)p_Var3;
          } while (*(long *)p_Var7 != lVar5);
        }
      }
      else {
        do {
          p_Var7 = p_Var3;
          p_Var3 = *(__tree_node **)p_Var7;
        } while (*(__tree_node **)p_Var7 != (__tree_node *)0x0);
      }
    }
  }
  std::__ndk1::
  __tree<v8::internal::compiler::Node*,std::__ndk1::less<v8::internal::compiler::Node*>,std::__ndk1::allocator<v8::internal::compiler::Node*>>
  ::destroy((__tree<v8::internal::compiler::Node*,std::__ndk1::less<v8::internal::compiler::Node*>,std::__ndk1::allocator<v8::internal::compiler::Node*>>
             *)&local_48,local_40);
  return;
}



/* std::__ndk1::pair<std::__ndk1::__tree_iterator<v8::internal::compiler::HandlerRangeMatcher::Range,
   std::__ndk1::__tree_node<v8::internal::compiler::HandlerRangeMatcher::Range, void*>*, long>,
   bool> std::__ndk1::__tree<v8::internal::compiler::HandlerRangeMatcher::Range,
   std::__ndk1::less<v8::internal::compiler::HandlerRangeMatcher::Range>,
   std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range>
   >::__emplace_unique_key_args<v8::internal::compiler::HandlerRangeMatcher::Range,
   v8::internal::compiler::HandlerRangeMatcher::Range>(v8::internal::compiler::HandlerRangeMatcher::Range
   const&, v8::internal::compiler::HandlerRangeMatcher::Range&&) */

undefined1  [16] __thiscall
std::__ndk1::
__tree<v8::internal::compiler::HandlerRangeMatcher::Range,std::__ndk1::less<v8::internal::compiler::HandlerRangeMatcher::Range>,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range>>
::
__emplace_unique_key_args<v8::internal::compiler::HandlerRangeMatcher::Range,v8::internal::compiler::HandlerRangeMatcher::Range>
          (__tree<v8::internal::compiler::HandlerRangeMatcher::Range,std::__ndk1::less<v8::internal::compiler::HandlerRangeMatcher::Range>,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range>>
           *this,Range *param_1,Range *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  __tree_node_base *p_Var5;
  undefined8 uVar6;
  __tree_node_base *p_Var7;
  __tree<v8::internal::compiler::HandlerRangeMatcher::Range,std::__ndk1::less<v8::internal::compiler::HandlerRangeMatcher::Range>,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range>>
  *p_Var8;
  __tree<v8::internal::compiler::HandlerRangeMatcher::Range,std::__ndk1::less<v8::internal::compiler::HandlerRangeMatcher::Range>,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range>>
  *p_Var9;
  __tree<v8::internal::compiler::HandlerRangeMatcher::Range,std::__ndk1::less<v8::internal::compiler::HandlerRangeMatcher::Range>,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range>>
  *p_Var10;
  undefined1 auVar11 [16];
  
  p_Var8 = this + 8;
  p_Var9 = *(__tree<v8::internal::compiler::HandlerRangeMatcher::Range,std::__ndk1::less<v8::internal::compiler::HandlerRangeMatcher::Range>,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range>>
             **)p_Var8;
  if (p_Var9 == (__tree<v8::internal::compiler::HandlerRangeMatcher::Range,std::__ndk1::less<v8::internal::compiler::HandlerRangeMatcher::Range>,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range>>
                 *)0x0) {
    p_Var7 = *(__tree_node_base **)p_Var8;
    p_Var10 = p_Var8;
  }
  else {
    iVar1 = *(int *)param_1;
    iVar2 = *(int *)(param_1 + 4);
    p_Var8 = this + 8;
    do {
      while( true ) {
        p_Var10 = p_Var9;
        iVar3 = *(int *)(p_Var10 + 0x1c);
        if (iVar3 <= iVar1) break;
LAB_012ce274:
        p_Var8 = p_Var10;
        p_Var9 = *(__tree<v8::internal::compiler::HandlerRangeMatcher::Range,std::__ndk1::less<v8::internal::compiler::HandlerRangeMatcher::Range>,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range>>
                   **)p_Var10;
        if (*(__tree<v8::internal::compiler::HandlerRangeMatcher::Range,std::__ndk1::less<v8::internal::compiler::HandlerRangeMatcher::Range>,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range>>
              **)p_Var10 ==
            (__tree<v8::internal::compiler::HandlerRangeMatcher::Range,std::__ndk1::less<v8::internal::compiler::HandlerRangeMatcher::Range>,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range>>
             *)0x0) {
          p_Var7 = *(__tree_node_base **)p_Var10;
          goto joined_r0x012ce2d4;
        }
      }
      if (iVar1 == iVar3) {
        if (iVar2 < *(int *)(p_Var10 + 0x20)) goto LAB_012ce274;
        if (iVar2 <= *(int *)(p_Var10 + 0x20)) goto LAB_012ce374;
      }
      if (iVar1 <= iVar3) {
        if (iVar1 != iVar3) break;
        if (iVar2 <= *(int *)(p_Var10 + 0x20)) {
          if (*(int *)(p_Var10 + 0x20) <= iVar2) {
LAB_012ce374:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","a.end > b.end");
          }
          break;
        }
      }
      p_Var8 = p_Var10 + 8;
      p_Var9 = *(__tree<v8::internal::compiler::HandlerRangeMatcher::Range,std::__ndk1::less<v8::internal::compiler::HandlerRangeMatcher::Range>,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range>>
                 **)p_Var8;
    } while (*(__tree<v8::internal::compiler::HandlerRangeMatcher::Range,std::__ndk1::less<v8::internal::compiler::HandlerRangeMatcher::Range>,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range>>
               **)p_Var8 !=
             (__tree<v8::internal::compiler::HandlerRangeMatcher::Range,std::__ndk1::less<v8::internal::compiler::HandlerRangeMatcher::Range>,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range>>
              *)0x0);
    p_Var7 = *(__tree_node_base **)p_Var8;
  }
joined_r0x012ce2d4:
  if (p_Var7 == (__tree_node_base *)0x0) {
    p_Var7 = operator_new(0x28);
    uVar4 = *(undefined4 *)(param_2 + 8);
    uVar6 = *(undefined8 *)param_2;
    *(undefined8 *)p_Var7 = 0;
    *(undefined8 *)(p_Var7 + 8) = 0;
    *(__tree<v8::internal::compiler::HandlerRangeMatcher::Range,std::__ndk1::less<v8::internal::compiler::HandlerRangeMatcher::Range>,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range>>
      **)(p_Var7 + 0x10) = p_Var10;
    *(undefined4 *)(p_Var7 + 0x24) = uVar4;
    *(undefined8 *)(p_Var7 + 0x1c) = uVar6;
    *(__tree_node_base **)p_Var8 = p_Var7;
    p_Var5 = p_Var7;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      p_Var5 = *(__tree_node_base **)p_Var8;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),p_Var5);
    uVar6 = 1;
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  else {
    uVar6 = 0;
  }
  auVar11._8_8_ = uVar6;
  auVar11._0_8_ = p_Var7;
  return auVar11;
}


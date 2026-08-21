
/* std::__ndk1::pair<std::__ndk1::__tree_iterator<v8::base::RegionAllocator::Region*,
   std::__ndk1::__tree_node<v8::base::RegionAllocator::Region*, void*>*, long>, bool>
   std::__ndk1::__tree<v8::base::RegionAllocator::Region*,
   v8::base::RegionAllocator::SizeAddressOrder,
   std::__ndk1::allocator<v8::base::RegionAllocator::Region*>
   >::__emplace_unique_key_args<v8::base::RegionAllocator::Region*,
   v8::base::RegionAllocator::Region* const&>(v8::base::RegionAllocator::Region* const&,
   v8::base::RegionAllocator::Region* const&) */

undefined1  [16] __thiscall
std::__ndk1::
__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::SizeAddressOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
::
__emplace_unique_key_args<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::Region*const&>
          (__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::SizeAddressOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
           *this,Region **param_1,Region **param_2)

{
  undefined8 uVar1;
  __tree_node_base *p_Var2;
  Region *pRVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  __tree_node_base *p_Var7;
  __tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::SizeAddressOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
  *p_Var8;
  __tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::SizeAddressOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
  *p_Var9;
  __tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::SizeAddressOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
  *p_Var10;
  undefined1 auVar11 [16];
  
  p_Var8 = this + 8;
  p_Var9 = *(__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::SizeAddressOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
             **)p_Var8;
  p_Var10 = p_Var8;
  if (p_Var9 == (__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::SizeAddressOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
                 *)0x0) {
LAB_01475d64:
    p_Var7 = *(__tree_node_base **)p_Var8;
  }
  else {
    uVar4 = *(ulong *)(*param_1 + 8);
    p_Var8 = this + 8;
    do {
      while( true ) {
        p_Var10 = p_Var9;
        uVar5 = (*(ulong **)(p_Var10 + 0x20))[1];
        if (uVar4 == uVar5) break;
        if (uVar4 < uVar5) goto LAB_01475d30;
        if (uVar4 <= uVar5) goto LAB_01475d64;
LAB_01475d4c:
        p_Var8 = p_Var10 + 8;
        p_Var9 = *(__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::SizeAddressOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
                   **)p_Var8;
        if (*(__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::SizeAddressOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
              **)p_Var8 ==
            (__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::SizeAddressOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
             *)0x0) goto LAB_01475d64;
      }
      uVar6 = *(ulong *)*param_1;
      uVar5 = **(ulong **)(p_Var10 + 0x20);
      if (uVar5 <= uVar6) {
        if (uVar5 < uVar6) goto LAB_01475d4c;
        goto LAB_01475d64;
      }
LAB_01475d30:
      p_Var8 = p_Var10;
      p_Var9 = *(__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::SizeAddressOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
                 **)p_Var10;
    } while (*(__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::SizeAddressOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
               **)p_Var10 !=
             (__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::SizeAddressOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
              *)0x0);
    p_Var7 = *(__tree_node_base **)p_Var10;
  }
  if (p_Var7 == (__tree_node_base *)0x0) {
    p_Var7 = operator_new(0x28);
    pRVar3 = *param_2;
    *(undefined8 *)p_Var7 = 0;
    *(undefined8 *)(p_Var7 + 8) = 0;
    *(__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::SizeAddressOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
      **)(p_Var7 + 0x10) = p_Var10;
    *(Region **)(p_Var7 + 0x20) = pRVar3;
    *(__tree_node_base **)p_Var8 = p_Var7;
    p_Var2 = p_Var7;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      p_Var2 = *(__tree_node_base **)p_Var8;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),p_Var2);
    uVar1 = 1;
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  else {
    uVar1 = 0;
  }
  auVar11._8_8_ = uVar1;
  auVar11._0_8_ = p_Var7;
  return auVar11;
}


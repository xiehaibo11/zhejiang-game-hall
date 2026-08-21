
/* std::__ndk1::pair<std::__ndk1::__tree_iterator<v8::base::RegionAllocator::Region*,
   std::__ndk1::__tree_node<v8::base::RegionAllocator::Region*, void*>*, long>, bool>
   std::__ndk1::__tree<v8::base::RegionAllocator::Region*,
   v8::base::RegionAllocator::AddressEndOrder,
   std::__ndk1::allocator<v8::base::RegionAllocator::Region*>
   >::__emplace_unique_key_args<v8::base::RegionAllocator::Region*,
   v8::base::RegionAllocator::Region* const&>(v8::base::RegionAllocator::Region* const&,
   v8::base::RegionAllocator::Region* const&) */

undefined1  [16] __thiscall
std::__ndk1::
__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::AddressEndOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
::
__emplace_unique_key_args<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::Region*const&>
          (__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::AddressEndOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
           *this,Region **param_1,Region **param_2)

{
  ulong uVar1;
  ulong uVar2;
  __tree_node_base *p_Var3;
  undefined8 uVar4;
  Region *pRVar5;
  __tree_node_base *p_Var6;
  __tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::AddressEndOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
  *p_Var7;
  __tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::AddressEndOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
  *p_Var8;
  __tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::AddressEndOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
  *p_Var9;
  __tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::AddressEndOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
  *p_Var10;
  undefined1 auVar11 [16];
  
  p_Var7 = this + 8;
  p_Var8 = *(__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::AddressEndOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
             **)p_Var7;
  p_Var10 = p_Var7;
  if (p_Var8 != (__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::AddressEndOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
                 *)0x0) {
    uVar1 = *(long *)(*param_1 + 8) + *(long *)*param_1;
    p_Var7 = this + 8;
    do {
      while (p_Var9 = p_Var8, uVar2 = (*(long **)(p_Var9 + 0x20))[1] + **(long **)(p_Var9 + 0x20),
            p_Var10 = p_Var9, uVar1 < uVar2) {
        p_Var7 = p_Var9;
        p_Var8 = *(__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::AddressEndOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
                   **)p_Var9;
        if (*(__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::AddressEndOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
              **)p_Var9 ==
            (__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::AddressEndOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
             *)0x0) {
          p_Var6 = *(__tree_node_base **)p_Var9;
          goto joined_r0x01475c48;
        }
      }
      if (uVar1 <= uVar2) break;
      p_Var7 = p_Var9 + 8;
      p_Var8 = *(__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::AddressEndOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
                 **)p_Var7;
    } while (*(__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::AddressEndOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
               **)p_Var7 !=
             (__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::AddressEndOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
              *)0x0);
  }
  p_Var6 = *(__tree_node_base **)p_Var7;
  p_Var9 = p_Var7;
joined_r0x01475c48:
  if (p_Var6 == (__tree_node_base *)0x0) {
    p_Var6 = operator_new(0x28);
    pRVar5 = *param_2;
    *(undefined8 *)p_Var6 = 0;
    *(undefined8 *)(p_Var6 + 8) = 0;
    *(__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::AddressEndOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
      **)(p_Var6 + 0x10) = p_Var10;
    *(Region **)(p_Var6 + 0x20) = pRVar5;
    *(__tree_node_base **)p_Var9 = p_Var6;
    p_Var3 = p_Var6;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      p_Var3 = *(__tree_node_base **)p_Var9;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),p_Var3);
    uVar4 = 1;
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  else {
    uVar4 = 0;
  }
  auVar11._8_8_ = uVar4;
  auVar11._0_8_ = p_Var6;
  return auVar11;
}


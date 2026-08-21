
/* v8::base::RegionAllocator::~RegionAllocator() */

void __thiscall v8::base::RegionAllocator::~RegionAllocator(RegionAllocator *this)

{
  bool bVar1;
  RegionAllocator *pRVar2;
  long lVar3;
  RegionAllocator *pRVar4;
  
  pRVar4 = *(RegionAllocator **)(this + 0x38);
  while (pRVar4 != this + 0x40) {
    if (*(void **)(pRVar4 + 0x20) != (void *)0x0) {
      operator_delete(*(void **)(pRVar4 + 0x20));
    }
    pRVar2 = *(RegionAllocator **)(pRVar4 + 8);
    if (*(RegionAllocator **)(pRVar4 + 8) == (RegionAllocator *)0x0) {
      pRVar2 = pRVar4 + 0x10;
      bVar1 = *(RegionAllocator **)*(RegionAllocator **)pRVar2 != pRVar4;
      pRVar4 = *(RegionAllocator **)pRVar2;
      if (bVar1) {
        do {
          lVar3 = *(long *)pRVar2;
          pRVar2 = (RegionAllocator *)(lVar3 + 0x10);
          pRVar4 = *(RegionAllocator **)pRVar2;
        } while (*(long *)pRVar4 != lVar3);
      }
    }
    else {
      do {
        pRVar4 = pRVar2;
        pRVar2 = *(RegionAllocator **)pRVar4;
      } while (*(RegionAllocator **)pRVar4 != (RegionAllocator *)0x0);
    }
  }
  std::__ndk1::
  __tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::SizeAddressOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
  ::destroy((__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::SizeAddressOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
             *)(this + 0x50),*(__tree_node **)(this + 0x58));
  std::__ndk1::
  __tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::AddressEndOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
  ::destroy((__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::AddressEndOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
             *)(this + 0x38),*(__tree_node **)(this + 0x40));
  return;
}


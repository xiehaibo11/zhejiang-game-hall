
/* bool rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>
   >::Accept<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator,
   0u> >(rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator,
   0u>&) const */

bool __thiscall
rapidjson::
GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
Accept<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>>
          (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
           *this,Writer *param_1)

{
  ushort uVar1;
  undefined1 uVar2;
  bool bVar3;
  ulong uVar4;
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  *pGVar5;
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  *pGVar6;
  uint uVar7;
  double dVar8;
  
  uVar1 = *(ushort *)(this + 0x16);
                    /* catch() { ... } // from try @ 00923118 with catch @ 009231b0 */
                    /* catch() { ... } // from try @ 00923130 with catch @ 009231b4 */
  switch(uVar1 & 7) {
  case 0:
    Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
    ::Prefix(param_1,0);
                    /* catch() { ... } // from try @ 009230e4 with catch @ 009231e4 */
    uVar2 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
            ::WriteNull((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                         *)param_1);
    return (bool)uVar2;
  case 1:
    Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
    ::Prefix(param_1,1);
    bVar3 = false;
    break;
  case 2:
    Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
    ::Prefix(param_1,2);
    bVar3 = true;
    break;
  case 3:
    uVar4 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
            ::StartObject((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                           *)param_1);
    if ((uVar4 & 1) == 0) {
      return false;
    }
    if (*(int *)this != 0) {
      pGVar5 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)(*(long *)(this + 8) + 0x18);
      do {
        if (((byte)pGVar5[-1] >> 4 & 1) == 0) {
          pGVar6 = *(GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                     **)(pGVar5 + -0x10);
          uVar7 = *(uint *)(pGVar5 + -0x18);
        }
        else {
          pGVar6 = pGVar5 + -0x18;
          uVar7 = 0x15 - (byte)pGVar5[-3];
        }
        Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
        ::Prefix(param_1,5);
        uVar4 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                ::WriteString((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                               *)param_1,(char *)pGVar6,uVar7);
        if ((uVar4 & 1) == 0) {
          return false;
        }
        bVar3 = Accept<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>>
                          (pGVar5,param_1);
        if (!bVar3) {
          return false;
        }
        pGVar6 = pGVar5 + 0x18;
        pGVar5 = pGVar5 + 0x30;
      } while (pGVar6 != (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                          *)(*(long *)(this + 8) + (ulong)*(uint *)this * 0x30));
    }
    uVar2 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
            ::EndObject((uint)param_1);
    return (bool)uVar2;
  case 4:
    uVar4 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
            ::StartArray((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                          *)param_1);
    if ((uVar4 & 1) == 0) {
      return false;
    }
    if (*(int *)this != 0) {
      pGVar5 = *(GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                 **)(this + 8);
      do {
        bVar3 = Accept<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>>
                          (pGVar5,param_1);
        if (!bVar3) {
          return false;
        }
        pGVar5 = pGVar5 + 0x18;
      } while (pGVar5 != (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                          *)(*(long *)(this + 8) + (ulong)*(uint *)this * 0x18));
    }
                    /* try { // try from 0092340c to 00a234c3 has its CatchHandler @ 0092340c
                       catch() { ... } // from try @ 0092340c with catch @ 0092340c
                       catch() { ... } // from try @ 00923544 with catch @ 0092340c */
    uVar2 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
            ::EndArray((uint)param_1);
    return (bool)uVar2;
  case 5:
    if ((uVar1 >> 0xc & 1) == 0) {
                    /* try { // try from 00923354 to 00a2339f has its CatchHandler @ 00923354
                       catch() { ... } // from try @ 00923354 with catch @ 00923354
                       catch() { ... } // from try @ 009233a4 with catch @ 00923354 */
      uVar7 = *(uint *)this;
      this = *(GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
               **)(this + 8);
    }
    else {
      uVar7 = 0x15 - (int)(char)this[0x15];
    }
                    /* try { // try from 009233a0 to 00a233a3 has its CatchHandler @ 009233f8 */
                    /* try { // try from 009233a4 to 00a2340b has its CatchHandler @ 00923354 */
    Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
    ::Prefix(param_1,5);
    uVar2 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
            ::WriteString((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                           *)param_1,(char *)this,uVar7);
    return (bool)uVar2;
  default:
    if ((uVar1 >> 9 & 1) != 0) {
      dVar8 = *(double *)this;
      Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
      ::Prefix(param_1,6);
      uVar2 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
              ::WriteDouble((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                             *)param_1,dVar8);
      return (bool)uVar2;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      uVar2 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
              ::Int((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                     *)param_1,*(int *)this);
      return (bool)uVar2;
    }
    if ((uVar1 >> 6 & 1) != 0) {
      uVar2 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
              ::Uint((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                      *)param_1,*(uint *)this);
      return (bool)uVar2;
    }
    if ((uVar1 >> 7 & 1) == 0) {
      uVar2 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
              ::Uint64((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                        *)param_1,*(ulong *)this);
      return (bool)uVar2;
    }
    uVar2 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
            ::Int64((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                     *)param_1,*(ulong *)this);
    return (bool)uVar2;
  }
  uVar2 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
          ::WriteBool((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                       *)param_1,bVar3);
  return (bool)uVar2;
}


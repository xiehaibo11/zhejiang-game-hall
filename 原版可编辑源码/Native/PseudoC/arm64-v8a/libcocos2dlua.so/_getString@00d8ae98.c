
/* dragonBones::JSONDataParser::_getString(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, char const*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
dragonBones::JSONDataParser::_getString
          (JSONDataParser *this,GenericValue *param_1,char *param_2,basic_string *param_3)

{
  GenericValue *pGVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  GenericValue *pGVar5;
  long lVar6;
  GenericValue *pGVar7;
  long lVar8;
  GenericValue *pGVar9;
  GenericValue *pGVar10;
  GenericValue *pGVar11;
  ulong uVar12;
  double local_70;
  long local_68;
  
                    /* try { // try from 00d8aea4 to 00e8aeb7 has its CatchHandler @ 00d8b020 */
                    /* try { // try from 00d8aebc to 00e8aee3 has its CatchHandler @ 00d8b040 */
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  pGVar11 = param_1 + -1;
  pGVar5 = pGVar11;
  do {
    pGVar5 = pGVar5 + 1;
  } while (*pGVar5 != (GenericValue)0x0);
  pGVar10 = *(GenericValue **)(this + 8);
  uVar2 = *(uint *)this;
  uVar12 = (ulong)uVar2;
                    /* try { // try from 00d8aef4 to 00e8af33 has its CatchHandler @ 00d8b058 */
  pGVar7 = pGVar10 + uVar12 * 0x30;
  pGVar9 = pGVar10;
  if (uVar2 != 0) {
    lVar8 = uVar12 * 0x30;
    pGVar1 = pGVar10;
    do {
      pGVar9 = pGVar1;
      iVar4 = *(int *)pGVar9;
      if ((*(ushort *)(pGVar9 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - (char)pGVar9[0x15];
      }
      if (iVar4 == (int)((long)pGVar5 - (long)param_1)) {
        pGVar1 = *(GenericValue **)(pGVar9 + 8);
        if ((*(ushort *)(pGVar9 + 0x16) & 0x1000) != 0) {
          pGVar1 = pGVar9;
        }
        if ((pGVar1 == param_1) ||
           (iVar4 = memcmp(param_1,pGVar1,(long)pGVar5 - (long)param_1 & 0xffffffff), iVar4 == 0))
        break;
      }
      lVar8 = lVar8 + -0x30;
      pGVar1 = pGVar9 + 0x30;
      pGVar9 = pGVar7;
    } while (lVar8 != 0);
  }
  pGVar5 = pGVar11;
  if (pGVar7 == pGVar9) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(in_x8,(basic_string *)param_2);
    lVar6 = *(long *)(lVar6 + 0x28);
    goto LAB_00d8b1f8;
  }
  do {
    pGVar5 = pGVar5 + 1;
  } while (*pGVar5 != (GenericValue)0x0);
  pGVar9 = (GenericValue *)
           &rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::
            operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
            ::buffer;
  if (uVar2 == 0) {
LAB_00d8b000:
    if (pGVar10 == pGVar7) goto LAB_00d8b0ac;
    if (((byte)pGVar10[0x2f] >> 2 & 1) == 0) goto LAB_00d8b0b4;
    do {
      pGVar11 = pGVar11 + 1;
    } while (*pGVar11 != (GenericValue)0x0);
    uVar2 = *(uint *)this;
                    /* catch() { ... } // from try @ 00d8aea4 with catch @ 00d8b020 */
    pGVar10 = *(GenericValue **)(this + 8);
    pGVar5 = pGVar10;
    if (uVar2 == 0) {
LAB_00d8b19c:
      if (pGVar5 == pGVar10 + (ulong)uVar2 * 0x30) goto LAB_00d8b1c0;
      pGVar9 = pGVar5 + 0x18;
      if (((byte)pGVar5[0x2f] >> 4 & 1) == 0) goto LAB_00d8b1c8;
    }
    else {
                    /* catch() { ... } // from try @ 00d8ae4c with catch @ 00d8b030 */
      lVar8 = (ulong)uVar2 * 0x30;
                    /* catch() { ... } // from try @ 00d8aebc with catch @ 00d8b040 */
      do {
                    /* catch() { ... } // from try @ 00d8ae34 with catch @ 00d8b054 */
                    /* catch() { ... } // from try @ 00d8aef4 with catch @ 00d8b058 */
        iVar4 = *(int *)pGVar5;
        if ((*(ushort *)(pGVar5 + 0x16) & 0x1000) != 0) {
          iVar4 = 0x15 - (char)pGVar5[0x15];
        }
        if (iVar4 == (int)((long)pGVar11 - (long)param_1)) {
          pGVar7 = *(GenericValue **)(pGVar5 + 8);
          if ((*(ushort *)(pGVar5 + 0x16) & 0x1000) != 0) {
            pGVar7 = pGVar5;
          }
          if ((pGVar7 == param_1) ||
             (iVar4 = memcmp(param_1,pGVar7,(long)pGVar11 - (long)param_1 & 0xffffffff), iVar4 == 0)
             ) goto LAB_00d8b19c;
        }
        lVar8 = lVar8 + -0x30;
        pGVar5 = pGVar5 + 0x30;
      } while (lVar8 != 0);
LAB_00d8b1c0:
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
LAB_00d8b1c8:
      pGVar9 = *(GenericValue **)(pGVar9 + 8);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(in_x8,(char *)pGVar9);
  }
  else {
                    /* try { // try from 00d8afa0 to 00e8afa7 has its CatchHandler @ 00d8b14c */
    lVar8 = uVar12 * 0x30;
                    /* try { // try from 00d8afa8 to 00e8b1bb has its CatchHandler @ 00d8a86c */
    do {
      iVar4 = *(int *)pGVar10;
      if ((*(ushort *)(pGVar10 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - (char)pGVar10[0x15];
      }
      if (iVar4 == (int)((long)pGVar5 - (long)param_1)) {
        pGVar1 = *(GenericValue **)(pGVar10 + 8);
        if ((*(ushort *)(pGVar10 + 0x16) & 0x1000) != 0) {
          pGVar1 = pGVar10;
        }
        if ((pGVar1 == param_1) ||
           (iVar4 = memcmp(param_1,pGVar1,(long)pGVar5 - (long)param_1 & 0xffffffff), iVar4 == 0))
        goto LAB_00d8b000;
      }
      lVar8 = lVar8 + -0x30;
      pGVar10 = pGVar10 + 0x30;
    } while (lVar8 != 0);
LAB_00d8b0ac:
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
LAB_00d8b0b4:
    do {
      pGVar11 = pGVar11 + 1;
                    /* catch() { ... } // from try @ 00d8ae64 with catch @ 00d8b0b8 */
    } while (*pGVar11 != (GenericValue)0x0);
    uVar2 = *(uint *)this;
    pGVar10 = *(GenericValue **)(this + 8);
    pGVar5 = pGVar10;
    if (uVar2 == 0) {
LAB_00d8b13c:
                    /* catch() { ... } // from try @ 00d8abcc with catch @ 00d8b144 */
                    /* catch() { ... } // from try @ 00d8adb4 with catch @ 00d8b148 */
      if (pGVar5 == pGVar10 + (ulong)uVar2 * 0x30) goto LAB_00d8b16c;
                    /* catch() { ... } // from try @ 00d8abd4 with catch @ 00d8b14c
                       catch() { ... } // from try @ 00d8ae1c with catch @ 00d8b14c
                       catch() { ... } // from try @ 00d8afa0 with catch @ 00d8b14c */
      uVar3 = *(ushort *)(pGVar5 + 0x2e);
      if ((uVar3 >> 9 & 1) == 0) {
        if ((uVar3 >> 5 & 1) != 0) {
                    /* catch() { ... } // from try @ 00d8ad34 with catch @ 00d8b188 */
                    /* catch() { ... } // from try @ 00d8ac68 with catch @ 00d8b18c */
                    /* catch() { ... } // from try @ 00d8acbc with catch @ 00d8b190
                       catch() { ... } // from try @ 00d8ad94 with catch @ 00d8b190 */
          local_70 = (double)(long)*(int *)(pGVar5 + 0x18);
          goto LAB_00d8b1e4;
        }
        if ((uVar3 >> 6 & 1) != 0) {
          local_70 = (double)NEON_ucvtf((ulong)*(uint *)(pGVar5 + 0x18));
          goto LAB_00d8b1e4;
        }
        uVar12 = *(ulong *)(pGVar5 + 0x18);
        if ((uVar3 >> 7 & 1) != 0) {
          local_70 = (double)(long)uVar12;
          goto LAB_00d8b1e4;
        }
        goto LAB_00d8b178;
      }
      local_70 = *(double *)(pGVar5 + 0x18);
                    /* catch() { ... } // from try @ 00d8ad74 with catch @ 00d8b184 */
    }
    else {
      lVar8 = (ulong)uVar2 * 0x30;
      do {
        iVar4 = *(int *)pGVar5;
        if ((*(ushort *)(pGVar5 + 0x16) & 0x1000) != 0) {
          iVar4 = 0x15 - (char)pGVar5[0x15];
        }
        if (iVar4 == (int)((long)pGVar11 - (long)param_1)) {
          pGVar9 = *(GenericValue **)(pGVar5 + 8);
          if ((*(ushort *)(pGVar5 + 0x16) & 0x1000) != 0) {
            pGVar9 = pGVar5;
          }
          if ((pGVar9 == param_1) ||
             (iVar4 = memcmp(param_1,pGVar9,(long)pGVar11 - (long)param_1 & 0xffffffff), iVar4 == 0)
             ) goto LAB_00d8b13c;
        }
        lVar8 = lVar8 + -0x30;
        pGVar5 = pGVar5 + 0x30;
      } while (lVar8 != 0);
LAB_00d8b16c:
                    /* catch() { ... } // from try @ 00d8ab80 with catch @ 00d8b16c
                       catch() { ... } // from try @ 00d8abf4 with catch @ 00d8b16c */
      uVar12 = 0;
                    /* catch() { ... } // from try @ 00d8acb4 with catch @ 00d8b170 */
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
                    /* catch() { ... } // from try @ 00d8ab28 with catch @ 00d8b174 */
      DAT_01785a60 = 0;
LAB_00d8b178:
      local_70 = (double)uVar12;
    }
LAB_00d8b1e4:
    to_string<double>(&local_70);
  }
  lVar6 = *(long *)(lVar6 + 0x28);
LAB_00d8b1f8:
  if (lVar6 != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


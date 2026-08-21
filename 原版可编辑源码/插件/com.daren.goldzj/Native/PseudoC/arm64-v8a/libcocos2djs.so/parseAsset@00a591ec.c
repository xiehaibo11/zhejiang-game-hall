
/* cocos2d::extension::Manifest::parseAsset(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void cocos2d::extension::Manifest::parseAsset(basic_string *param_1,GenericValue *param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  int *piVar1;
  GenericValue *pGVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  uint *in_x2;
  short sVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  float fVar13;
  
  this = in_x8 + 0x18;
                    /* catch() { ... } // from try @ 00a59144 with catch @ 00a59210 */
  *(undefined8 *)(in_x8 + 0x18) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  *(undefined8 *)(in_x8 + 0x28) = 0;
  *(undefined8 *)(in_x8 + 0x20) = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)in_x8 = 0;
  if (this != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              param_2) {
                    /* catch() { ... } // from try @ 00a5915c with catch @ 00a59228 */
                    /* catch() { ... } // from try @ 00a5911c with catch @ 00a5922c */
    uVar11 = *(ulong *)(param_2 + 8);
    pGVar2 = *(GenericValue **)(param_2 + 0x10);
                    /* catch() { ... } // from try @ 00a59164 with catch @ 00a59230 */
    if (((byte)*param_2 & 1) == 0) {
      pGVar2 = param_2 + 1;
      uVar11 = (ulong)((byte)*param_2 >> 1);
    }
                    /* catch() { ... } // from try @ 00a5914c with catch @ 00a59240 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this,(char *)pGVar2,uVar11);
  }
  piVar9 = *(int **)(in_x2 + 2);
  uVar3 = *in_x2;
  uVar11 = (ulong)uVar3;
                    /* catch() { ... } // from try @ 00a59108 with catch @ 00a59258 */
  piVar10 = piVar9 + uVar11 * 0xc;
                    /* catch() { ... } // from try @ 00a590dc with catch @ 00a5925c */
  piVar8 = piVar9;
  if (uVar3 != 0) {
    lVar12 = uVar11 * 0x30;
    piVar7 = piVar9;
    do {
      iVar4 = *piVar7;
      if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar7 + 0x15);
      }
      if (iVar4 == 3) {
        piVar1 = *(int **)(piVar7 + 2);
        if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar7;
        }
        piVar8 = piVar7;
                    /* try { // try from 00a592ac to 00b592ef has its CatchHandler @ 00a592ac
                       catch() { ... } // from try @ 00a592ac with catch @ 00a592ac
                       catch() { ... } // from try @ 00a59308 with catch @ 00a592ac */
        if ((piVar1 == (int *)&DAT_018a41c1) || (iVar4 = memcmp(&DAT_018a41c1,piVar1,3), iVar4 == 0)
           ) break;
      }
      lVar12 = lVar12 + -0x30;
      piVar7 = piVar7 + 0xc;
      piVar8 = piVar10;
    } while (lVar12 != 0);
  }
  if (piVar10 == piVar8) {
LAB_00a593d8:
                    /* try { // try from 00a593dc to 00b593eb has its CatchHandler @ 00a594ec */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(in_x8,"",0);
  }
  else {
    if (uVar3 != 0) {
      lVar12 = uVar11 * 0x30;
      do {
                    /* try { // try from 00a592f0 to 00b59307 has its CatchHandler @ 00a59338 */
        iVar4 = *piVar9;
        if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
          iVar4 = 0x15 - *(char *)((long)piVar9 + 0x15);
        }
                    /* try { // try from 00a59308 to 00b5934b has its CatchHandler @ 00a592ac */
        if (iVar4 == 3) {
          piVar8 = *(int **)(piVar9 + 2);
          if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
            piVar8 = piVar9;
          }
          if ((piVar8 == (int *)&DAT_018a41c1) ||
             (iVar4 = memcmp(&DAT_018a41c1,piVar8,3), iVar4 == 0)) goto LAB_00a59340;
        }
        lVar12 = lVar12 + -0x30;
        piVar9 = piVar9 + 0xc;
                    /* catch() { ... } // from try @ 00a592f0 with catch @ 00a59338 */
      } while (lVar12 != 0);
LAB_00a593c8:
                    /* try { // try from 00a593c8 to 00b593db has its CatchHandler @ 00a59518 */
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01d38c18 = 0;
      DAT_01d38c20 = 0;
      goto LAB_00a593d8;
    }
LAB_00a59340:
    if (piVar9 == piVar10) goto LAB_00a593c8;
                    /* try { // try from 00a5934c to 00b5939b has its CatchHandler @ 00a5934c
                       catch() { ... } // from try @ 00a5934c with catch @ 00a5934c
                       catch() { ... } // from try @ 00a59454 with catch @ 00a5934c */
    if ((*(byte *)((long)piVar9 + 0x2f) >> 2 & 1) == 0) goto LAB_00a593d8;
    uVar3 = *in_x2;
    piVar8 = *(int **)(in_x2 + 2);
    piVar9 = piVar8;
    if (uVar3 == 0) {
LAB_00a59590:
      if (piVar9 == piVar8 + (ulong)uVar3 * 0xc) goto LAB_00a595b0;
      piVar8 = piVar9 + 6;
      if ((*(byte *)((long)piVar9 + 0x2f) >> 4 & 1) == 0) goto LAB_00a595c0;
    }
    else {
      lVar12 = (ulong)uVar3 * 0x30;
      do {
        iVar4 = *piVar9;
        if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
          iVar4 = 0x15 - *(char *)((long)piVar9 + 0x15);
        }
        if (iVar4 == 3) {
          piVar10 = *(int **)(piVar9 + 2);
                    /* try { // try from 00a5939c to 00b593b3 has its CatchHandler @ 00a5951c */
          if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
            piVar10 = piVar9;
          }
          if ((piVar10 == (int *)&DAT_018a41c1) ||
             (iVar4 = memcmp(&DAT_018a41c1,piVar10,3), iVar4 == 0)) goto LAB_00a59590;
        }
        lVar12 = lVar12 + -0x30;
        piVar9 = piVar9 + 0xc;
      } while (lVar12 != 0);
LAB_00a595b0:
      piVar8 = (int *)&rapidjson::
                       GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                       ::
                       operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                       ::buffer;
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01d38c18 = 0;
      DAT_01d38c20 = 0;
LAB_00a595c0:
                    /* try { // try from 00a595c0 to 00b595cf has its CatchHandler @ 00a596a4 */
      piVar8 = *(int **)(piVar8 + 2);
    }
    sVar5 = strlen((char *)piVar8);
                    /* try { // try from 00a595d0 to 00b596bf has its CatchHandler @ 00a5956c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(in_x8,(char *)piVar8,sVar5);
  }
  piVar9 = *(int **)(in_x2 + 2);
  uVar3 = *in_x2;
  uVar11 = (ulong)uVar3;
  piVar10 = piVar9 + uVar11 * 0xc;
  piVar8 = piVar9;
  if (uVar3 != 0) {
                    /* try { // try from 00a59404 to 00b5940b has its CatchHandler @ 00a594d0 */
                    /* try { // try from 00a5940c to 00b5941b has its CatchHandler @ 00a59500 */
    lVar12 = uVar11 * 0x30;
                    /* try { // try from 00a5941c to 00b59423 has its CatchHandler @ 00a594e8 */
    piVar7 = piVar9;
    do {
                    /* try { // try from 00a59424 to 00b59453 has its CatchHandler @ 00a594f0 */
      iVar4 = *piVar7;
      if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar7 + 0x15);
      }
      if (iVar4 == 4) {
        piVar1 = *(int **)(piVar7 + 2);
        if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar7;
        }
        piVar8 = piVar7;
                    /* try { // try from 00a59454 to 00b5956b has its CatchHandler @ 00a5934c */
        if ((piVar1 == (int *)0x19b9e4d) || (*piVar1 == 0x68746170)) break;
      }
      lVar12 = lVar12 + -0x30;
      piVar7 = piVar7 + 0xc;
      piVar8 = piVar10;
    } while (lVar12 != 0);
  }
  if (piVar10 != piVar8) {
    if (uVar3 == 0) {
LAB_00a594ec:
                    /* catch() { ... } // from try @ 00a593dc with catch @ 00a594ec */
                    /* catch() { ... } // from try @ 00a59424 with catch @ 00a594f0 */
      if (piVar9 != piVar10) {
        if ((*(byte *)((long)piVar9 + 0x2f) >> 2 & 1) == 0) goto LAB_00a59630;
        uVar3 = *in_x2;
                    /* catch() { ... } // from try @ 00a5940c with catch @ 00a59500 */
        piVar8 = *(int **)(in_x2 + 2);
        piVar9 = piVar8;
        if (uVar3 == 0) {
LAB_00a595e4:
          if (piVar9 == piVar8 + (ulong)uVar3 * 0xc) goto LAB_00a59604;
          piVar8 = piVar9 + 6;
          if ((*(byte *)((long)piVar9 + 0x2f) >> 4 & 1) == 0) goto LAB_00a59614;
        }
        else {
                    /* catch() { ... } // from try @ 00a593c8 with catch @ 00a59518 */
                    /* catch() { ... } // from try @ 00a5939c with catch @ 00a5951c */
          lVar12 = (ulong)uVar3 * 0x30;
          do {
            iVar4 = *piVar9;
            if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
              iVar4 = 0x15 - *(char *)((long)piVar9 + 0x15);
            }
            if (iVar4 == 4) {
              piVar10 = *(int **)(piVar9 + 2);
              if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
                piVar10 = piVar9;
              }
              if ((piVar10 == (int *)0x19b9e4d) || (*piVar10 == 0x68746170)) goto LAB_00a595e4;
            }
            lVar12 = lVar12 + -0x30;
                    /* catch() { ... } // from try @ 00a595d0 with catch @ 00a5956c */
            piVar9 = piVar9 + 0xc;
          } while (lVar12 != 0);
LAB_00a59604:
          piVar8 = (int *)&rapidjson::
                           GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                           ::
                           operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                           ::buffer;
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::
          operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
          ::buffer = 0;
          DAT_01d38c18 = 0;
          DAT_01d38c20 = 0;
LAB_00a59614:
          piVar8 = *(int **)(piVar8 + 2);
        }
        sVar5 = strlen((char *)piVar8);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(this,(char *)piVar8,sVar5);
        goto LAB_00a59630;
      }
    }
    else {
      lVar12 = uVar11 * 0x30;
      do {
        iVar4 = *piVar9;
        if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
          iVar4 = 0x15 - *(char *)((long)piVar9 + 0x15);
        }
        if (iVar4 == 4) {
          piVar8 = *(int **)(piVar9 + 2);
          if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
            piVar8 = piVar9;
          }
                    /* catch() { ... } // from try @ 00a59404 with catch @ 00a594d0 */
          if ((piVar8 == (int *)0x19b9e4d) || (*piVar8 == 0x68746170)) goto LAB_00a594ec;
        }
        lVar12 = lVar12 + -0x30;
        piVar9 = piVar9 + 0xc;
      } while (lVar12 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
LAB_00a59630:
  piVar9 = *(int **)(in_x2 + 2);
  uVar3 = *in_x2;
  uVar11 = (ulong)uVar3;
  piVar10 = piVar9 + uVar11 * 0xc;
  piVar8 = piVar9;
  if (uVar3 != 0) {
    lVar12 = uVar11 * 0x30;
    piVar7 = piVar9;
    do {
      iVar4 = *piVar7;
      if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar7 + 0x15);
      }
      if (iVar4 == 10) {
        piVar1 = *(int **)(piVar7 + 2);
        if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar7;
        }
        piVar8 = piVar7;
        if ((piVar1 == (int *)"compressed") || (iVar4 = memcmp("compressed",piVar1,10), iVar4 == 0))
        break;
      }
                    /* catch() { ... } // from try @ 00a595c0 with catch @ 00a596a4 */
      lVar12 = lVar12 + -0x30;
      piVar7 = piVar7 + 0xc;
      piVar8 = piVar10;
    } while (lVar12 != 0);
  }
  if (piVar10 == piVar8) {
LAB_00a597c0:
    in_x8[0x30] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                  0x0;
  }
  else {
    if (uVar3 != 0) {
                    /* try { // try from 00a596c0 to 00b59713 has its CatchHandler @ 00a596c0
                       catch() { ... } // from try @ 00a596c0 with catch @ 00a596c0
                       catch() { ... } // from try @ 00a59884 with catch @ 00a596c0 */
      lVar12 = uVar11 * 0x30;
      do {
        iVar4 = *piVar9;
        if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
          iVar4 = 0x15 - *(char *)((long)piVar9 + 0x15);
        }
        if (iVar4 == 10) {
          piVar8 = *(int **)(piVar9 + 2);
          if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
            piVar8 = piVar9;
          }
                    /* try { // try from 00a59714 to 00b5972b has its CatchHandler @ 00a59900 */
          if ((piVar8 == (int *)"compressed") ||
             (iVar4 = memcmp("compressed",piVar8,10), iVar4 == 0)) goto LAB_00a59728;
        }
        lVar12 = lVar12 + -0x30;
        piVar9 = piVar9 + 0xc;
      } while (lVar12 != 0);
LAB_00a597b0:
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01d38c18 = 0;
      DAT_01d38c20 = 0;
      goto LAB_00a597c0;
    }
LAB_00a59728:
    if (piVar9 == piVar10) goto LAB_00a597b0;
                    /* try { // try from 00a59734 to 00b5973f has its CatchHandler @ 00a598fc */
    if ((*(byte *)((long)piVar9 + 0x2e) >> 3 & 1) == 0) goto LAB_00a597c0;
    uVar3 = *in_x2;
    piVar8 = *(int **)(in_x2 + 2);
                    /* try { // try from 00a59740 to 00b5974b has its CatchHandler @ 00a598f8 */
    piVar9 = piVar8;
    if (uVar3 == 0) {
LAB_00a59958:
      if (piVar9 == piVar8 + (ulong)uVar3 * 0xc) goto LAB_00a59970;
                    /* try { // try from 00a59968 to 00b599bb has its CatchHandler @ 00a59968
                       catch() { ... } // from try @ 00a59968 with catch @ 00a59968
                       catch() { ... } // from try @ 00a59b48 with catch @ 00a59968 */
      sVar6 = *(short *)((long)piVar9 + 0x2e);
    }
    else {
                    /* try { // try from 00a5974c to 00b59883 has its CatchHandler @ 00a59910 */
      lVar12 = (ulong)uVar3 * 0x30;
      do {
        iVar4 = *piVar9;
        if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
          iVar4 = 0x15 - *(char *)((long)piVar9 + 0x15);
        }
        if (iVar4 == 10) {
          piVar10 = *(int **)(piVar9 + 2);
          if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
            piVar10 = piVar9;
          }
          if ((piVar10 == (int *)"compressed") ||
             (iVar4 = memcmp("compressed",piVar10,10), iVar4 == 0)) goto LAB_00a59958;
        }
        lVar12 = lVar12 + -0x30;
        piVar9 = piVar9 + 0xc;
      } while (lVar12 != 0);
LAB_00a59970:
      sVar6 = 0;
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01d38c18 = 0;
      DAT_01d38c20 = 0;
    }
    in_x8[0x30] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                  (sVar6 == 10);
  }
  piVar9 = *(int **)(in_x2 + 2);
  uVar3 = *in_x2;
  uVar11 = (ulong)uVar3;
  piVar10 = piVar9 + uVar11 * 0xc;
  piVar8 = piVar9;
  if (uVar3 != 0) {
    lVar12 = uVar11 * 0x30;
    piVar7 = piVar9;
    do {
      iVar4 = *piVar7;
      if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar7 + 0x15);
      }
      if (iVar4 == 4) {
        piVar1 = *(int **)(piVar7 + 2);
        if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar7;
        }
        piVar8 = piVar7;
        if ((piVar1 == (int *)0x19c5d26) || (*piVar1 == 0x657a6973)) break;
      }
      lVar12 = lVar12 + -0x30;
      piVar7 = piVar7 + 0xc;
      piVar8 = piVar10;
    } while (lVar12 != 0);
  }
  fVar13 = 0.0;
  if (piVar10 == piVar8) goto LAB_00a599c4;
  fVar13 = 0.0;
  if (uVar3 == 0) {
LAB_00a598c8:
    if (piVar9 == piVar10) goto LAB_00a599b4;
    if ((*(byte *)((long)piVar9 + 0x2e) >> 5 & 1) != 0) {
      uVar3 = *in_x2;
      piVar8 = *(int **)(in_x2 + 2);
      piVar9 = piVar8;
      if (uVar3 == 0) {
LAB_00a59998:
        if (piVar9 != piVar8 + (ulong)uVar3 * 0xc) {
          fVar13 = (float)piVar9[6];
          goto LAB_00a599c4;
        }
      }
      else {
                    /* catch() { ... } // from try @ 00a59740 with catch @ 00a598f8 */
        lVar12 = (ulong)uVar3 * 0x30;
                    /* catch() { ... } // from try @ 00a59734 with catch @ 00a598fc */
                    /* catch() { ... } // from try @ 00a59714 with catch @ 00a59900 */
        do {
                    /* catch() { ... } // from try @ 00a5974c with catch @ 00a59910 */
          iVar4 = *piVar9;
          if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
            iVar4 = 0x15 - *(char *)((long)piVar9 + 0x15);
          }
          if (iVar4 == 4) {
            piVar10 = *(int **)(piVar9 + 2);
            if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
              piVar10 = piVar9;
            }
            if ((piVar10 == (int *)0x19c5d26) || (*piVar10 == 0x657a6973)) goto LAB_00a59998;
          }
          lVar12 = lVar12 + -0x30;
          piVar9 = piVar9 + 0xc;
        } while (lVar12 != 0);
      }
      goto LAB_00a599b4;
    }
  }
  else {
    lVar12 = uVar11 * 0x30;
    do {
                    /* try { // try from 00a59884 to 00b59967 has its CatchHandler @ 00a596c0 */
      iVar4 = *piVar9;
      if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar9 + 0x15);
      }
      if (iVar4 == 4) {
        piVar8 = *(int **)(piVar9 + 2);
        if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
          piVar8 = piVar9;
        }
        if ((piVar8 == (int *)0x19c5d26) || (*piVar8 == 0x657a6973)) goto LAB_00a598c8;
      }
      lVar12 = lVar12 + -0x30;
      piVar9 = piVar9 + 0xc;
    } while (lVar12 != 0);
LAB_00a599b4:
                    /* try { // try from 00a599bc to 00b599d3 has its CatchHandler @ 00a59bc4 */
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
LAB_00a599c4:
  *(float *)(in_x8 + 0x34) = fVar13;
  piVar9 = *(int **)(in_x2 + 2);
  uVar3 = *in_x2;
  uVar11 = (ulong)uVar3;
  piVar10 = piVar9 + uVar11 * 0xc;
                    /* try { // try from 00a599dc to 00b599e7 has its CatchHandler @ 00a59bc0 */
  piVar8 = piVar9;
  if (uVar3 != 0) {
                    /* try { // try from 00a599e8 to 00b599f3 has its CatchHandler @ 00a59bbc */
    lVar12 = uVar11 * 0x30;
                    /* try { // try from 00a599f4 to 00b59b47 has its CatchHandler @ 00a59bd4 */
    piVar7 = piVar9;
    do {
      iVar4 = *piVar7;
      if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar7 + 0x15);
      }
      if (iVar4 == 0xd) {
        piVar1 = *(int **)(piVar7 + 2);
        if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar7;
        }
        piVar8 = piVar7;
        if ((piVar1 == (int *)"downloadState") ||
           (iVar4 = memcmp("downloadState",piVar1,0xd), iVar4 == 0)) break;
      }
      lVar12 = lVar12 + -0x30;
      piVar7 = piVar7 + 0xc;
      piVar8 = piVar10;
    } while (lVar12 != 0);
  }
  if (piVar10 != piVar8) {
    if (uVar3 == 0) {
LAB_00a59ac0:
      if (piVar9 != piVar10) {
        if ((*(byte *)((long)piVar9 + 0x2e) >> 5 & 1) != 0) {
          uVar3 = *in_x2;
          piVar8 = *(int **)(in_x2 + 2);
          piVar9 = piVar8;
          if (uVar3 == 0) {
LAB_00a59b80:
            if (piVar9 != piVar8 + (ulong)uVar3 * 0xc) {
              iVar4 = piVar9[6];
              goto LAB_00a59b5c;
            }
          }
          else {
            lVar12 = (ulong)uVar3 * 0x30;
            do {
              iVar4 = *piVar9;
              if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
                iVar4 = 0x15 - *(char *)((long)piVar9 + 0x15);
              }
              if (iVar4 == 0xd) {
                piVar10 = *(int **)(piVar9 + 2);
                if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
                  piVar10 = piVar9;
                }
                if ((piVar10 == (int *)"downloadState") ||
                   (iVar4 = memcmp("downloadState",piVar10,0xd), iVar4 == 0)) goto LAB_00a59b80;
              }
              lVar12 = lVar12 + -0x30;
              piVar9 = piVar9 + 0xc;
            } while (lVar12 != 0);
          }
          iVar4 = 0;
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::
          operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
          ::buffer = 0;
          DAT_01d38c18 = 0;
          DAT_01d38c20 = 0;
          goto LAB_00a59b5c;
        }
        goto LAB_00a59b58;
      }
    }
    else {
      lVar12 = uVar11 * 0x30;
      do {
        iVar4 = *piVar9;
        if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
          iVar4 = 0x15 - *(char *)((long)piVar9 + 0x15);
        }
        if (iVar4 == 0xd) {
          piVar8 = *(int **)(piVar9 + 2);
          if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
            piVar8 = piVar9;
          }
          if ((piVar8 == (int *)"downloadState") ||
             (iVar4 = memcmp("downloadState",piVar8,0xd), iVar4 == 0)) goto LAB_00a59ac0;
        }
        lVar12 = lVar12 + -0x30;
        piVar9 = piVar9 + 0xc;
      } while (lVar12 != 0);
    }
                    /* try { // try from 00a59b48 to 00b59c2b has its CatchHandler @ 00a59968 */
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
LAB_00a59b58:
  iVar4 = 3;
LAB_00a59b5c:
  *(int *)(in_x8 + 0x38) = iVar4;
  return;
}


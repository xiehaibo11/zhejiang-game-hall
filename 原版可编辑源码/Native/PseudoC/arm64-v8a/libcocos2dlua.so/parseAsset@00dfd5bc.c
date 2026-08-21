
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
  
                    /* try { // try from 00dfd5c0 to 00efd5c7 has its CatchHandler @ 00dfd7dc */
                    /* try { // try from 00dfd5c8 to 00efd61b has its CatchHandler @ 00dfd2c8 */
  this = in_x8 + 0x18;
  *(undefined8 *)(in_x8 + 0x18) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  *(undefined8 *)(in_x8 + 0x28) = 0;
  *(undefined8 *)(in_x8 + 0x20) = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)in_x8 = 0;
  if (this != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              param_2) {
    uVar11 = *(ulong *)(param_2 + 8);
    pGVar2 = *(GenericValue **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pGVar2 = param_2 + 1;
      uVar11 = (ulong)((byte)*param_2 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this,(char *)pGVar2,uVar11);
  }
  piVar8 = *(int **)(in_x2 + 2);
                    /* try { // try from 00dfd61c to 00efd623 has its CatchHandler @ 00dfd7d8 */
  uVar3 = *in_x2;
  uVar11 = (ulong)uVar3;
                    /* try { // try from 00dfd624 to 00efd677 has its CatchHandler @ 00dfd2c8 */
  piVar9 = piVar8 + uVar11 * 0xc;
  piVar10 = piVar8;
  if (uVar3 != 0) {
    lVar12 = uVar11 * 0x30;
    piVar7 = piVar8;
    do {
      iVar4 = *piVar7;
      if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar7 + 0x15);
      }
      if (iVar4 == 3) {
                    /* try { // try from 00dfd678 to 00efd67f has its CatchHandler @ 00dfd7d4 */
        piVar1 = *(int **)(piVar7 + 2);
                    /* try { // try from 00dfd680 to 00efd6d3 has its CatchHandler @ 00dfd2c8 */
        if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar7;
        }
        piVar10 = piVar7;
        if ((piVar1 == (int *)&DAT_013d2ad4) || (iVar4 = memcmp(&DAT_013d2ad4,piVar1,3), iVar4 == 0)
           ) break;
      }
      lVar12 = lVar12 + -0x30;
      piVar7 = piVar7 + 0xc;
      piVar10 = piVar9;
    } while (lVar12 != 0);
  }
  piVar7 = (int *)&rapidjson::
                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                   ::
                   operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                   ::buffer;
  if (piVar9 == piVar10) {
LAB_00dfd7a4:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(in_x8,"",0);
  }
  else {
    if (uVar3 != 0) {
      lVar12 = uVar11 * 0x30;
      do {
                    /* try { // try from 00dfd6d4 to 00efd6db has its CatchHandler @ 00dfd7d0 */
                    /* try { // try from 00dfd6dc to 00efd72f has its CatchHandler @ 00dfd2c8 */
        iVar4 = *piVar8;
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          iVar4 = 0x15 - *(char *)((long)piVar8 + 0x15);
        }
        if (iVar4 == 3) {
          piVar10 = *(int **)(piVar8 + 2);
          if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
            piVar10 = piVar8;
          }
          if ((piVar10 == (int *)&DAT_013d2ad4) ||
             (iVar4 = memcmp(&DAT_013d2ad4,piVar10,3), iVar4 == 0)) goto LAB_00dfd718;
        }
        lVar12 = lVar12 + -0x30;
        piVar8 = piVar8 + 0xc;
      } while (lVar12 != 0);
LAB_00dfd79c:
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
      goto LAB_00dfd7a4;
    }
LAB_00dfd718:
    if (piVar8 == piVar9) goto LAB_00dfd79c;
    if ((*(byte *)((long)piVar8 + 0x2f) >> 2 & 1) == 0) goto LAB_00dfd7a4;
    uVar3 = *in_x2;
    piVar10 = *(int **)(in_x2 + 2);
                    /* try { // try from 00dfd730 to 00efd737 has its CatchHandler @ 00dfd7cc */
    piVar8 = piVar10;
    if (uVar3 == 0) {
LAB_00dfd958:
      if (piVar8 == piVar10 + (ulong)uVar3 * 0xc) goto LAB_00dfd978;
      piVar10 = piVar8 + 6;
                    /* try { // try from 00dfd970 to 00efd97b has its CatchHandler @ 00dfda4c */
      if ((*(byte *)((long)piVar8 + 0x2f) >> 4 & 1) == 0) goto LAB_00dfd984;
    }
    else {
                    /* try { // try from 00dfd738 to 00efd78b has its CatchHandler @ 00dfd2c8 */
      lVar12 = (ulong)uVar3 * 0x30;
      do {
        iVar4 = *piVar8;
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          iVar4 = 0x15 - *(char *)((long)piVar8 + 0x15);
        }
        if (iVar4 == 3) {
          piVar9 = *(int **)(piVar8 + 2);
          if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
            piVar9 = piVar8;
          }
                    /* try { // try from 00dfd78c to 00efd793 has its CatchHandler @ 00dfd7c8 */
                    /* try { // try from 00dfd794 to 00efd817 has its CatchHandler @ 00dfd2c8 */
          if ((piVar9 == (int *)&DAT_013d2ad4) ||
             (iVar4 = memcmp(&DAT_013d2ad4,piVar9,3), iVar4 == 0)) goto LAB_00dfd958;
        }
        lVar12 = lVar12 + -0x30;
        piVar8 = piVar8 + 0xc;
      } while (lVar12 != 0);
LAB_00dfd978:
                    /* try { // try from 00dfd97c to 00efda67 has its CatchHandler @ 00dfd940 */
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
      piVar10 = piVar7;
LAB_00dfd984:
      piVar10 = *(int **)(piVar10 + 2);
    }
    sVar5 = strlen((char *)piVar10);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(in_x8,(char *)piVar10,sVar5);
  }
  piVar10 = *(int **)(in_x2 + 2);
  uVar3 = *in_x2;
  uVar11 = (ulong)uVar3;
                    /* catch() { ... } // from try @ 00dfd78c with catch @ 00dfd7c8 */
  piVar9 = piVar10 + uVar11 * 0xc;
                    /* catch() { ... } // from try @ 00dfd730 with catch @ 00dfd7cc */
                    /* catch() { ... } // from try @ 00dfd6d4 with catch @ 00dfd7d0 */
                    /* catch() { ... } // from try @ 00dfd678 with catch @ 00dfd7d4 */
  piVar8 = piVar10;
  if (uVar3 == 0) {
LAB_00dfd840:
    if (piVar9 != piVar8) {
      if (uVar3 == 0) {
LAB_00dfd8b0:
        if (piVar10 != piVar9) {
          if ((*(byte *)((long)piVar10 + 0x2f) >> 2 & 1) == 0) goto LAB_00dfd9f0;
          uVar3 = *in_x2;
                    /* try { // try from 00dfd8c4 to 00efd93f has its CatchHandler @ 00dfd818 */
          piVar10 = *(int **)(in_x2 + 2);
          piVar8 = piVar10;
          if (uVar3 == 0) {
LAB_00dfd9a8:
            if (piVar8 == piVar10 + (ulong)uVar3 * 0xc) goto LAB_00dfd9c8;
            piVar7 = piVar8 + 6;
            if ((*(byte *)((long)piVar8 + 0x2f) >> 4 & 1) == 0) goto LAB_00dfd9d4;
          }
          else {
            lVar12 = (ulong)uVar3 * 0x30;
            do {
              iVar4 = *piVar8;
              if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
                iVar4 = 0x15 - *(char *)((long)piVar8 + 0x15);
              }
              if (iVar4 == 4) {
                piVar9 = *(int **)(piVar8 + 2);
                if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
                  piVar9 = piVar8;
                }
                    /* catch() { ... } // from try @ 00dfd864 with catch @ 00dfd924 */
                if ((piVar9 == (int *)&DAT_0145a62a) || (*piVar9 == 0x68746170)) goto LAB_00dfd9a8;
              }
              lVar12 = lVar12 + -0x30;
              piVar8 = piVar8 + 0xc;
            } while (lVar12 != 0);
LAB_00dfd9c8:
            rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::
            operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
            ::buffer = 0;
            DAT_01785a58 = 0;
            DAT_01785a60 = 0;
LAB_00dfd9d4:
            piVar7 = *(int **)(piVar7 + 2);
          }
          sVar5 = strlen((char *)piVar7);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (this,(char *)piVar7,sVar5);
          goto LAB_00dfd9f0;
        }
      }
      else {
        lVar12 = uVar11 * 0x30;
        do {
          iVar4 = *piVar10;
          if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
            iVar4 = 0x15 - *(char *)((long)piVar10 + 0x15);
          }
          if (iVar4 == 4) {
            piVar8 = *(int **)(piVar10 + 2);
            if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
              piVar8 = piVar10;
            }
            if ((piVar8 == (int *)&DAT_0145a62a) || (*piVar8 == 0x68746170)) goto LAB_00dfd8b0;
          }
                    /* try { // try from 00dfd864 to 00efd8c3 has its CatchHandler @ 00dfd924 */
          lVar12 = lVar12 + -0x30;
          piVar10 = piVar10 + 0xc;
        } while (lVar12 != 0);
      }
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
                    /* try { // try from 00dfd940 to 00efd96f has its CatchHandler @ 00dfd940
                       catch() { ... } // from try @ 00dfd940 with catch @ 00dfd940
                       catch() { ... } // from try @ 00dfd97c with catch @ 00dfd940 */
    }
  }
  else {
                    /* catch() { ... } // from try @ 00dfd61c with catch @ 00dfd7d8 */
                    /* catch() { ... } // from try @ 00dfd5c0 with catch @ 00dfd7dc */
                    /* catch() { ... } // from try @ 00dfd564 with catch @ 00dfd7e0 */
                    /* catch() { ... } // from try @ 00dfd508 with catch @ 00dfd7e4 */
    lVar12 = uVar11 * 0x30;
                    /* catch() { ... } // from try @ 00dfd4ac with catch @ 00dfd7e8 */
                    /* catch() { ... } // from try @ 00dfd450 with catch @ 00dfd7ec */
                    /* catch() { ... } // from try @ 00dfd3f4 with catch @ 00dfd7f0 */
    do {
      iVar4 = *piVar8;
      if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar8 + 0x15);
      }
                    /* try { // try from 00dfd818 to 00efd863 has its CatchHandler @ 00dfd818
                       catch() { ... } // from try @ 00dfd818 with catch @ 00dfd818
                       catch() { ... } // from try @ 00dfd8c4 with catch @ 00dfd818 */
      if (iVar4 == 4) {
        piVar1 = *(int **)(piVar8 + 2);
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar8;
        }
        if ((piVar1 == (int *)&DAT_0145a62a) || (*piVar1 == 0x68746170)) goto LAB_00dfd840;
      }
                    /* catch() { ... } // from try @ 00dfd398 with catch @ 00dfd7f4 */
      lVar12 = lVar12 + -0x30;
                    /* catch() { ... } // from try @ 00dfd33c with catch @ 00dfd7f8 */
      piVar8 = piVar8 + 0xc;
                    /* catch() { ... } // from try @ 00dfd2f0 with catch @ 00dfd7fc */
    } while (lVar12 != 0);
  }
LAB_00dfd9f0:
  piVar10 = *(int **)(in_x2 + 2);
  uVar3 = *in_x2;
  uVar11 = (ulong)uVar3;
  piVar9 = piVar10 + uVar11 * 0xc;
  piVar8 = piVar10;
  if (uVar3 == 0) {
LAB_00dfda74:
    if (piVar9 == piVar8) goto LAB_00dfdb7c;
    if (uVar3 != 0) {
      lVar12 = uVar11 * 0x30;
      do {
                    /* try { // try from 00dfda9c to 00efdaf3 has its CatchHandler @ 00dfda68 */
        iVar4 = *piVar10;
        if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
          iVar4 = 0x15 - *(char *)((long)piVar10 + 0x15);
        }
        if (iVar4 == 10) {
          piVar8 = *(int **)(piVar10 + 2);
          if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
            piVar8 = piVar10;
          }
                    /* catch() { ... } // from try @ 00dfda94 with catch @ 00dfdad8 */
          if ((piVar8 == (int *)"compressed") ||
             (iVar4 = memcmp("compressed",piVar8,10), iVar4 == 0)) goto LAB_00dfdae0;
        }
        lVar12 = lVar12 + -0x30;
                    /* try { // try from 00dfda94 to 00efda9b has its CatchHandler @ 00dfdad8 */
        piVar10 = piVar10 + 0xc;
      } while (lVar12 != 0);
LAB_00dfdb64:
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
                    /* catch() { ... } // from try @ 00dfdb24 with catch @ 00dfdb68 */
      DAT_01785a60 = 0;
      goto LAB_00dfdb7c;
    }
LAB_00dfdae0:
    if (piVar10 == piVar9) goto LAB_00dfdb64;
    if ((*(byte *)((long)piVar10 + 0x2e) >> 3 & 1) == 0) goto LAB_00dfdb7c;
    uVar3 = *in_x2;
                    /* catch() { ... } // from try @ 00dfdb2c with catch @ 00dfdaf4 */
    piVar10 = *(int **)(in_x2 + 2);
    piVar8 = piVar10;
    if (uVar3 == 0) {
LAB_00dfdd10:
      if (piVar8 == piVar10 + (ulong)uVar3 * 0xc) goto LAB_00dfdd28;
      sVar6 = *(short *)((long)piVar8 + 0x2e);
    }
    else {
      lVar12 = (ulong)uVar3 * 0x30;
      do {
                    /* try { // try from 00dfdb24 to 00efdb2b has its CatchHandler @ 00dfdb68 */
                    /* try { // try from 00dfdb2c to 00efdb83 has its CatchHandler @ 00dfdaf4 */
        iVar4 = *piVar8;
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          iVar4 = 0x15 - *(char *)((long)piVar8 + 0x15);
        }
        if (iVar4 == 10) {
          piVar9 = *(int **)(piVar8 + 2);
          if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
            piVar9 = piVar8;
          }
          if ((piVar9 == (int *)"compressed") ||
             (iVar4 = memcmp("compressed",piVar9,10), iVar4 == 0)) goto LAB_00dfdd10;
        }
        lVar12 = lVar12 + -0x30;
        piVar8 = piVar8 + 0xc;
      } while (lVar12 != 0);
LAB_00dfdd28:
      sVar6 = 0;
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
    }
    in_x8[0x30] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                  (sVar6 == 10);
  }
  else {
    lVar12 = uVar11 * 0x30;
    do {
      iVar4 = *piVar8;
      if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar8 + 0x15);
      }
                    /* catch() { ... } // from try @ 00dfd970 with catch @ 00dfda4c */
      if (iVar4 == 10) {
        piVar7 = *(int **)(piVar8 + 2);
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          piVar7 = piVar8;
        }
                    /* try { // try from 00dfda68 to 00efda93 has its CatchHandler @ 00dfda68
                       catch() { ... } // from try @ 00dfda68 with catch @ 00dfda68
                       catch() { ... } // from try @ 00dfda9c with catch @ 00dfda68 */
        if ((piVar7 == (int *)"compressed") || (iVar4 = memcmp("compressed",piVar7,10), iVar4 == 0))
        goto LAB_00dfda74;
      }
      lVar12 = lVar12 + -0x30;
      piVar8 = piVar8 + 0xc;
    } while (lVar12 != 0);
LAB_00dfdb7c:
    in_x8[0x30] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                  0x0;
  }
  piVar8 = *(int **)(in_x2 + 2);
  uVar3 = *in_x2;
  uVar11 = (ulong)uVar3;
  piVar9 = piVar8 + uVar11 * 0xc;
  piVar10 = piVar8;
  if (uVar3 != 0) {
    lVar12 = uVar11 * 0x30;
    piVar7 = piVar8;
                    /* catch() { ... } // from try @ 00dfdbe4 with catch @ 00dfdbb8 */
    do {
      iVar4 = *piVar7;
                    /* try { // try from 00dfdbdc to 00efdbe3 has its CatchHandler @ 00dfdc24 */
      if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar7 + 0x15);
      }
                    /* try { // try from 00dfdbe4 to 00efdc3f has its CatchHandler @ 00dfdbb8 */
      if (iVar4 == 4) {
        piVar1 = *(int **)(piVar7 + 2);
        if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar7;
        }
        piVar10 = piVar7;
        if ((piVar1 == (int *)0x1275948) || (*piVar1 == 0x657a6973)) break;
      }
      lVar12 = lVar12 + -0x30;
      piVar7 = piVar7 + 0xc;
      piVar10 = piVar9;
    } while (lVar12 != 0);
  }
  fVar13 = 0.0;
  if (piVar9 == piVar10) goto LAB_00dfdd6c;
  fVar13 = 0.0;
  if (uVar3 == 0) {
LAB_00dfdc84:
    if (piVar8 == piVar9) goto LAB_00dfdd64;
    if ((*(byte *)((long)piVar8 + 0x2e) >> 5 & 1) != 0) {
      uVar3 = *in_x2;
      piVar10 = *(int **)(in_x2 + 2);
      piVar8 = piVar10;
      if (uVar3 == 0) {
LAB_00dfdd48:
        if (piVar8 != piVar10 + (ulong)uVar3 * 0xc) {
          fVar13 = (float)piVar8[6];
          goto LAB_00dfdd6c;
        }
      }
      else {
        lVar12 = (ulong)uVar3 * 0x30;
        do {
          iVar4 = *piVar8;
          if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
            iVar4 = 0x15 - *(char *)((long)piVar8 + 0x15);
          }
          if (iVar4 == 4) {
            piVar9 = *(int **)(piVar8 + 2);
            if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
              piVar9 = piVar8;
            }
            if ((piVar9 == (int *)0x1275948) || (*piVar9 == 0x657a6973)) goto LAB_00dfdd48;
          }
          lVar12 = lVar12 + -0x30;
          piVar8 = piVar8 + 0xc;
        } while (lVar12 != 0);
      }
      goto LAB_00dfdd64;
    }
  }
  else {
                    /* catch() { ... } // from try @ 00dfdbdc with catch @ 00dfdc24 */
    lVar12 = uVar11 * 0x30;
    do {
      iVar4 = *piVar8;
      if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar8 + 0x15);
      }
      if (iVar4 == 4) {
        piVar10 = *(int **)(piVar8 + 2);
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          piVar10 = piVar8;
        }
        if ((piVar10 == (int *)0x1275948) || (*piVar10 == 0x657a6973)) goto LAB_00dfdc84;
      }
      lVar12 = lVar12 + -0x30;
      piVar8 = piVar8 + 0xc;
    } while (lVar12 != 0);
LAB_00dfdd64:
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
  }
LAB_00dfdd6c:
  *(float *)(in_x8 + 0x34) = fVar13;
  piVar10 = *(int **)(in_x2 + 2);
  uVar3 = *in_x2;
  uVar11 = (ulong)uVar3;
  piVar9 = piVar10 + uVar11 * 0xc;
  piVar8 = piVar10;
  if (uVar3 == 0) {
LAB_00dfddf4:
    if (piVar9 != piVar8) {
      if (uVar3 == 0) {
LAB_00dfde60:
        if (piVar10 != piVar9) {
          if ((*(byte *)((long)piVar10 + 0x2e) >> 5 & 1) != 0) {
            uVar3 = *in_x2;
            piVar10 = *(int **)(in_x2 + 2);
            piVar8 = piVar10;
            if (uVar3 == 0) {
LAB_00dfdf24:
              if (piVar8 != piVar10 + (ulong)uVar3 * 0xc) {
                iVar4 = piVar8[6];
                goto LAB_00dfdf00;
              }
            }
            else {
              lVar12 = (ulong)uVar3 * 0x30;
              do {
                iVar4 = *piVar8;
                if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
                  iVar4 = 0x15 - *(char *)((long)piVar8 + 0x15);
                }
                if (iVar4 == 0xd) {
                  piVar9 = *(int **)(piVar8 + 2);
                  if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
                    piVar9 = piVar8;
                  }
                  if ((piVar9 == (int *)"downloadState") ||
                     (iVar4 = memcmp("downloadState",piVar9,0xd), iVar4 == 0)) goto LAB_00dfdf24;
                }
                lVar12 = lVar12 + -0x30;
                piVar8 = piVar8 + 0xc;
              } while (lVar12 != 0);
            }
            iVar4 = 0;
            rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::
            operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
            ::buffer = 0;
            DAT_01785a58 = 0;
            DAT_01785a60 = 0;
            goto LAB_00dfdf00;
          }
          goto LAB_00dfdefc;
        }
      }
      else {
        lVar12 = uVar11 * 0x30;
        do {
          iVar4 = *piVar10;
          if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
            iVar4 = 0x15 - *(char *)((long)piVar10 + 0x15);
          }
          if (iVar4 == 0xd) {
            piVar8 = *(int **)(piVar10 + 2);
            if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
              piVar8 = piVar10;
            }
            if ((piVar8 == (int *)"downloadState") ||
               (iVar4 = memcmp("downloadState",piVar8,0xd), iVar4 == 0)) goto LAB_00dfde60;
          }
          lVar12 = lVar12 + -0x30;
          piVar10 = piVar10 + 0xc;
        } while (lVar12 != 0);
      }
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
    }
  }
  else {
    lVar12 = uVar11 * 0x30;
    do {
      iVar4 = *piVar8;
      if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar8 + 0x15);
      }
      if (iVar4 == 0xd) {
        piVar7 = *(int **)(piVar8 + 2);
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          piVar7 = piVar8;
        }
        if ((piVar7 == (int *)"downloadState") ||
           (iVar4 = memcmp("downloadState",piVar7,0xd), iVar4 == 0)) goto LAB_00dfddf4;
      }
      lVar12 = lVar12 + -0x30;
      piVar8 = piVar8 + 0xc;
    } while (lVar12 != 0);
  }
LAB_00dfdefc:
  iVar4 = 3;
LAB_00dfdf00:
  *(int *)(in_x8 + 0x38) = iVar4;
  return;
}


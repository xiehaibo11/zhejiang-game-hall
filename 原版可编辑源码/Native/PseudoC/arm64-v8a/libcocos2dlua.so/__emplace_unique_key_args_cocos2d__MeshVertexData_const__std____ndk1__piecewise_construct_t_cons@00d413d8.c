
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<cocos2d::MeshVertexData
   const*, cocos2d::Sprite3DMaterial*>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<cocos2d::MeshVertexData const*,
   cocos2d::Sprite3DMaterial*>, std::__ndk1::__unordered_map_hasher<cocos2d::MeshVertexData const*,
   std::__ndk1::__hash_value_type<cocos2d::MeshVertexData const*, cocos2d::Sprite3DMaterial*>,
   std::__ndk1::hash<cocos2d::MeshVertexData const*>, true>,
   std::__ndk1::__unordered_map_equal<cocos2d::MeshVertexData const*,
   std::__ndk1::__hash_value_type<cocos2d::MeshVertexData const*, cocos2d::Sprite3DMaterial*>,
   std::__ndk1::equal_to<cocos2d::MeshVertexData const*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::MeshVertexData const*,
   cocos2d::Sprite3DMaterial*> > >::__emplace_unique_key_args<cocos2d::MeshVertexData const*,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<cocos2d::MeshVertexData const*&&>,
   std::__ndk1::tuple<> >(cocos2d::MeshVertexData const* const&, std::__ndk1::piecewise_construct_t
   const&, std::__ndk1::tuple<cocos2d::MeshVertexData const*&&>&&, std::__ndk1::tuple<>&&) */

MeshVertexData *
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<cocos2d::MeshVertexData_const*,cocos2d::Sprite3DMaterial*>,std::__ndk1::__unordered_map_hasher<cocos2d::MeshVertexData_const*,std::__ndk1::__hash_value_type<cocos2d::MeshVertexData_const*,cocos2d::Sprite3DMaterial*>,std::__ndk1::hash<cocos2d::MeshVertexData_const*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::MeshVertexData_const*,std::__ndk1::__hash_value_type<cocos2d::MeshVertexData_const*,cocos2d::Sprite3DMaterial*>,std::__ndk1::equal_to<cocos2d::MeshVertexData_const*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::MeshVertexData_const*,cocos2d::Sprite3DMaterial*>>>
::
__emplace_unique_key_args<cocos2d::MeshVertexData_const*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::MeshVertexData_const*&&>,std::__ndk1::tuple<>>
          (MeshVertexData **param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  MeshVertexData **ppMVar4;
  MeshVertexData *pMVar5;
  ulong uVar6;
  MeshVertexData *pMVar7;
  MeshVertexData *pMVar8;
  MeshVertexData *pMVar9;
  MeshVertexData *unaff_x24;
  undefined2 uVar10;
  
  uVar2 = *(ulong *)param_2;
  uVar6 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  pMVar8 = param_1[1];
  uVar6 = (uVar6 ^ uVar2 >> 0x20 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  pMVar9 = (MeshVertexData *)((uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297);
  if (pMVar8 != (MeshVertexData *)0x0) {
    uVar3 = CONCAT17(POPCOUNT((char)((ulong)pMVar8 >> 0x38)),
                     CONCAT16(POPCOUNT((char)((ulong)pMVar8 >> 0x30)),
                              CONCAT15(POPCOUNT((char)((ulong)pMVar8 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)((ulong)pMVar8 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)((ulong)pMVar8 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)((ulong)pMVar8 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)((ulong)
                                                  pMVar8 >> 8)),POPCOUNT((char)pMVar8))))))));
    uVar10 = NEON_uaddlv(uVar3,1);
    uVar6 = CONCAT62((int6)((ulong)uVar3 >> 0x10),uVar10) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x24 = (MeshVertexData *)((ulong)pMVar9 & (ulong)(pMVar8 + -1));
    }
    else {
      unaff_x24 = pMVar9;
      if (pMVar8 <= pMVar9) {
        uVar1 = 0;
        if (pMVar8 != (MeshVertexData *)0x0) {
          uVar1 = (ulong)pMVar9 / (ulong)pMVar8;
        }
        unaff_x24 = pMVar9 + -(uVar1 * (long)pMVar8);
      }
    }
    if (*(long **)(*param_1 + (long)unaff_x24 * 8) != (long *)0x0) {
      for (pMVar7 = (MeshVertexData *)**(long **)(*param_1 + (long)unaff_x24 * 8);
          pMVar7 != (MeshVertexData *)0x0; pMVar7 = *(MeshVertexData **)pMVar7) {
        pMVar5 = *(MeshVertexData **)(pMVar7 + 8);
        if (pMVar5 != pMVar9) {
          if (uVar6 < 2) {
            pMVar5 = (MeshVertexData *)((ulong)pMVar5 & (ulong)(pMVar8 + -1));
          }
          else if (pMVar8 <= pMVar5) {
            uVar1 = 0;
            if (pMVar8 != (MeshVertexData *)0x0) {
              uVar1 = (ulong)pMVar5 / (ulong)pMVar8;
            }
            if (pMVar5 + -(uVar1 * (long)pMVar8) == unaff_x24) goto LAB_00d4149c;
            break;
          }
          if (pMVar5 != unaff_x24) break;
        }
LAB_00d4149c:
        if (*(ulong *)(pMVar7 + 0x10) == uVar2) {
          return pMVar7;
        }
      }
    }
  }
  pMVar7 = operator_new(0x20);
  uVar3 = **(undefined8 **)param_4;
  *(undefined8 *)pMVar7 = 0;
  *(MeshVertexData **)(pMVar7 + 8) = pMVar9;
  *(undefined8 *)(pMVar7 + 0x10) = uVar3;
  *(undefined8 *)(pMVar7 + 0x18) = 0;
  if ((pMVar8 == (MeshVertexData *)0x0) ||
     (*(float *)(param_1 + 4) * (float)pMVar8 < (float)(param_1[3] + 1))) {
    uVar2 = (ulong)(pMVar8 < (MeshVertexData *)0x3 || ((ulong)pMVar8 & (ulong)(pMVar8 + -1)) != 0) |
            (long)pMVar8 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar2) {
      uVar6 = uVar2;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<cocos2d::MeshVertexData_const*,cocos2d::Sprite3DMaterial*>,std::__ndk1::__unordered_map_hasher<cocos2d::MeshVertexData_const*,std::__ndk1::__hash_value_type<cocos2d::MeshVertexData_const*,cocos2d::Sprite3DMaterial*>,std::__ndk1::hash<cocos2d::MeshVertexData_const*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::MeshVertexData_const*,std::__ndk1::__hash_value_type<cocos2d::MeshVertexData_const*,cocos2d::Sprite3DMaterial*>,std::__ndk1::equal_to<cocos2d::MeshVertexData_const*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::MeshVertexData_const*,cocos2d::Sprite3DMaterial*>>>
            *)param_1,uVar6);
    pMVar8 = param_1[1];
    if (((ulong)pMVar8 & (ulong)(pMVar8 + -1)) == 0) {
      unaff_x24 = (MeshVertexData *)((ulong)(pMVar8 + -1) & (ulong)pMVar9);
    }
    else {
      unaff_x24 = pMVar9;
      if (pMVar8 <= pMVar9) {
        uVar2 = 0;
        if (pMVar8 != (MeshVertexData *)0x0) {
          uVar2 = (ulong)pMVar9 / (ulong)pMVar8;
        }
        unaff_x24 = pMVar9 + -(uVar2 * (long)pMVar8);
      }
    }
  }
  pMVar5 = *param_1;
  pMVar9 = *(MeshVertexData **)(pMVar5 + (long)unaff_x24 * 8);
  if (pMVar9 == (MeshVertexData *)0x0) {
    ppMVar4 = param_1 + 2;
    *(MeshVertexData **)pMVar7 = *ppMVar4;
    *ppMVar4 = pMVar7;
    *(MeshVertexData ***)(pMVar5 + (long)unaff_x24 * 8) = ppMVar4;
    if (*(long *)pMVar7 == 0) goto LAB_00d415f0;
    pMVar9 = *(MeshVertexData **)(*(long *)pMVar7 + 8);
    if (((ulong)pMVar8 & (ulong)(pMVar8 + -1)) == 0) {
      pMVar9 = (MeshVertexData *)((ulong)pMVar9 & (ulong)(pMVar8 + -1));
    }
    else if (pMVar8 <= pMVar9) {
      uVar2 = 0;
      if (pMVar8 != (MeshVertexData *)0x0) {
        uVar2 = (ulong)pMVar9 / (ulong)pMVar8;
      }
      pMVar9 = pMVar9 + -(uVar2 * (long)pMVar8);
    }
    pMVar9 = *param_1 + (long)pMVar9 * 8;
  }
  else {
    *(undefined8 *)pMVar7 = *(undefined8 *)pMVar9;
  }
  *(MeshVertexData **)pMVar9 = pMVar7;
LAB_00d415f0:
  param_1[3] = param_1[3] + 1;
  return pMVar7;
}


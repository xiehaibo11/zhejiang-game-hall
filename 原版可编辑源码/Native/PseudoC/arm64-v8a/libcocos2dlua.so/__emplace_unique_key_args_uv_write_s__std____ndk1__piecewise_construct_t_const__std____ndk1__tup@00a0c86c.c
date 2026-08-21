
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<uv_write_s*,
   uv_write_s*>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<uv_write_s*, uv_write_s*>,
   std::__ndk1::__unordered_map_hasher<uv_write_s*, std::__ndk1::__hash_value_type<uv_write_s*,
   uv_write_s*>, std::__ndk1::hash<uv_write_s*>, true>,
   std::__ndk1::__unordered_map_equal<uv_write_s*, std::__ndk1::__hash_value_type<uv_write_s*,
   uv_write_s*>, std::__ndk1::equal_to<uv_write_s*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<uv_write_s*, uv_write_s*> >
   >::__emplace_unique_key_args<uv_write_s*, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<uv_write_s* const&>, std::__ndk1::tuple<> >(uv_write_s* const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<uv_write_s* const&>&&,
   std::__ndk1::tuple<>&&) */

uv_write_s *
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<uv_write_s*,uv_write_s*>,std::__ndk1::__unordered_map_hasher<uv_write_s*,std::__ndk1::__hash_value_type<uv_write_s*,uv_write_s*>,std::__ndk1::hash<uv_write_s*>,true>,std::__ndk1::__unordered_map_equal<uv_write_s*,std::__ndk1::__hash_value_type<uv_write_s*,uv_write_s*>,std::__ndk1::equal_to<uv_write_s*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<uv_write_s*,uv_write_s*>>>
::
__emplace_unique_key_args<uv_write_s*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<uv_write_s*const&>,std::__ndk1::tuple<>>
          (uv_write_s **param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uv_write_s **ppuVar4;
  uv_write_s *puVar5;
  ulong uVar6;
  uv_write_s *puVar7;
  uv_write_s *puVar8;
  uv_write_s *puVar9;
  uv_write_s *unaff_x24;
  undefined2 uVar10;
  
  uVar2 = *(ulong *)param_2;
  uVar6 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  puVar8 = param_1[1];
  uVar6 = (uVar6 ^ uVar2 >> 0x20 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  puVar9 = (uv_write_s *)((uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297);
  if (puVar8 != (uv_write_s *)0x0) {
                    /* try { // try from 00a0c8d0 to 00b0cb7f has its CatchHandler @ 00a0c8d0
                       catch() { ... } // from try @ 00a0c8d0 with catch @ 00a0c8d0
                       catch() { ... } // from try @ 00a0cc00 with catch @ 00a0c8d0 */
    uVar3 = CONCAT17(POPCOUNT((char)((ulong)puVar8 >> 0x38)),
                     CONCAT16(POPCOUNT((char)((ulong)puVar8 >> 0x30)),
                              CONCAT15(POPCOUNT((char)((ulong)puVar8 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)((ulong)puVar8 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)((ulong)puVar8 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)((ulong)puVar8 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)((ulong)
                                                  puVar8 >> 8)),POPCOUNT((char)puVar8))))))));
    uVar10 = NEON_uaddlv(uVar3,1);
    uVar6 = CONCAT62((int6)((ulong)uVar3 >> 0x10),uVar10) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x24 = (uv_write_s *)((ulong)puVar9 & (ulong)(puVar8 + -1));
    }
    else {
      unaff_x24 = puVar9;
      if (puVar8 <= puVar9) {
        uVar1 = 0;
        if (puVar8 != (uv_write_s *)0x0) {
          uVar1 = (ulong)puVar9 / (ulong)puVar8;
        }
        unaff_x24 = puVar9 + -(uVar1 * (long)puVar8);
      }
    }
    if (*(long **)(*param_1 + (long)unaff_x24 * 8) != (long *)0x0) {
      for (puVar7 = (uv_write_s *)**(long **)(*param_1 + (long)unaff_x24 * 8);
          puVar7 != (uv_write_s *)0x0; puVar7 = *(uv_write_s **)puVar7) {
        puVar5 = *(uv_write_s **)(puVar7 + 8);
        if (puVar5 != puVar9) {
          if (uVar6 < 2) {
            puVar5 = (uv_write_s *)((ulong)puVar5 & (ulong)(puVar8 + -1));
          }
          else if (puVar8 <= puVar5) {
            uVar1 = 0;
            if (puVar8 != (uv_write_s *)0x0) {
              uVar1 = (ulong)puVar5 / (ulong)puVar8;
            }
            if (puVar5 + -(uVar1 * (long)puVar8) == unaff_x24) goto LAB_00a0c930;
            break;
          }
          if (puVar5 != unaff_x24) break;
        }
LAB_00a0c930:
        if (*(ulong *)(puVar7 + 0x10) == uVar2) {
          return puVar7;
        }
      }
    }
  }
  puVar7 = operator_new(0x20);
  uVar3 = **(undefined8 **)param_4;
  *(undefined8 *)puVar7 = 0;
  *(uv_write_s **)(puVar7 + 8) = puVar9;
  *(undefined8 *)(puVar7 + 0x10) = uVar3;
  *(undefined8 *)(puVar7 + 0x18) = 0;
  if ((puVar8 == (uv_write_s *)0x0) ||
     (*(float *)(param_1 + 4) * (float)puVar8 < (float)(param_1[3] + 1))) {
    uVar2 = (ulong)(puVar8 < (uv_write_s *)0x3 || ((ulong)puVar8 & (ulong)(puVar8 + -1)) != 0) |
            (long)puVar8 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar2) {
      uVar6 = uVar2;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<uv_write_s*,uv_write_s*>,std::__ndk1::__unordered_map_hasher<uv_write_s*,std::__ndk1::__hash_value_type<uv_write_s*,uv_write_s*>,std::__ndk1::hash<uv_write_s*>,true>,std::__ndk1::__unordered_map_equal<uv_write_s*,std::__ndk1::__hash_value_type<uv_write_s*,uv_write_s*>,std::__ndk1::equal_to<uv_write_s*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<uv_write_s*,uv_write_s*>>>
            *)param_1,uVar6);
    puVar8 = param_1[1];
    if (((ulong)puVar8 & (ulong)(puVar8 + -1)) == 0) {
      unaff_x24 = (uv_write_s *)((ulong)(puVar8 + -1) & (ulong)puVar9);
    }
    else {
      unaff_x24 = puVar9;
      if (puVar8 <= puVar9) {
        uVar2 = 0;
        if (puVar8 != (uv_write_s *)0x0) {
          uVar2 = (ulong)puVar9 / (ulong)puVar8;
        }
        unaff_x24 = puVar9 + -(uVar2 * (long)puVar8);
      }
    }
  }
  puVar5 = *param_1;
  puVar9 = *(uv_write_s **)(puVar5 + (long)unaff_x24 * 8);
  if (puVar9 == (uv_write_s *)0x0) {
    ppuVar4 = param_1 + 2;
    *(uv_write_s **)puVar7 = *ppuVar4;
    *ppuVar4 = puVar7;
    *(uv_write_s ***)(puVar5 + (long)unaff_x24 * 8) = ppuVar4;
    if (*(long *)puVar7 == 0) goto LAB_00a0ca84;
    puVar9 = *(uv_write_s **)(*(long *)puVar7 + 8);
    if (((ulong)puVar8 & (ulong)(puVar8 + -1)) == 0) {
      puVar9 = (uv_write_s *)((ulong)puVar9 & (ulong)(puVar8 + -1));
    }
    else if (puVar8 <= puVar9) {
      uVar2 = 0;
      if (puVar8 != (uv_write_s *)0x0) {
        uVar2 = (ulong)puVar9 / (ulong)puVar8;
      }
      puVar9 = puVar9 + -(uVar2 * (long)puVar8);
    }
    puVar9 = *param_1 + (long)puVar9 * 8;
  }
  else {
    *(undefined8 *)puVar7 = *(undefined8 *)puVar9;
  }
  *(uv_write_s **)puVar9 = puVar7;
LAB_00a0ca84:
  param_1[3] = param_1[3] + 1;
  return puVar7;
}


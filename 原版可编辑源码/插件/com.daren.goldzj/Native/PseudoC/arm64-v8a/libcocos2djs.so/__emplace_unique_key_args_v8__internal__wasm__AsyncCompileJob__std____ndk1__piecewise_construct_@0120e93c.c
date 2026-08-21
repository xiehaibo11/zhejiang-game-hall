
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,
   std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,
   std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob> > >, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,
   std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,
   std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob> > >,
   std::__ndk1::__unordered_map_hasher<v8::internal::wasm::AsyncCompileJob*,
   std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,
   std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,
   std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob> > >,
   std::__ndk1::hash<v8::internal::wasm::AsyncCompileJob*>, true>,
   std::__ndk1::__unordered_map_equal<v8::internal::wasm::AsyncCompileJob*,
   std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,
   std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,
   std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob> > >,
   std::__ndk1::equal_to<v8::internal::wasm::AsyncCompileJob*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,
   std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,
   std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob> > > >
   >::__emplace_unique_key_args<v8::internal::wasm::AsyncCompileJob*,
   std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<v8::internal::wasm::AsyncCompileJob* const&>, std::__ndk1::tuple<>
   >(v8::internal::wasm::AsyncCompileJob* const&, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<v8::internal::wasm::AsyncCompileJob* const&>&&, std::__ndk1::tuple<>&&) */

AsyncCompileJob *
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>,std::__ndk1::__unordered_map_hasher<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>,std::__ndk1::hash<v8::internal::wasm::AsyncCompileJob*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>,std::__ndk1::equal_to<v8::internal::wasm::AsyncCompileJob*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>>>
::
__emplace_unique_key_args<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::wasm::AsyncCompileJob*const&>,std::__ndk1::tuple<>>
          (AsyncCompileJob **param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  AsyncCompileJob **ppAVar4;
  AsyncCompileJob *pAVar5;
  ulong uVar6;
  AsyncCompileJob *pAVar7;
  AsyncCompileJob *pAVar8;
  AsyncCompileJob *pAVar9;
  AsyncCompileJob *unaff_x24;
  undefined2 uVar10;
  
  uVar2 = *(ulong *)param_2;
  uVar6 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  pAVar8 = param_1[1];
  uVar6 = (uVar6 ^ uVar2 >> 0x20 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  pAVar9 = (AsyncCompileJob *)((uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297);
  if (pAVar8 != (AsyncCompileJob *)0x0) {
    uVar3 = CONCAT17(POPCOUNT((char)((ulong)pAVar8 >> 0x38)),
                     CONCAT16(POPCOUNT((char)((ulong)pAVar8 >> 0x30)),
                              CONCAT15(POPCOUNT((char)((ulong)pAVar8 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)((ulong)pAVar8 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)((ulong)pAVar8 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)((ulong)pAVar8 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)((ulong)
                                                  pAVar8 >> 8)),POPCOUNT((char)pAVar8))))))));
    uVar10 = NEON_uaddlv(uVar3,1);
    uVar6 = CONCAT62((int6)((ulong)uVar3 >> 0x10),uVar10) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x24 = (AsyncCompileJob *)((ulong)pAVar9 & (ulong)(pAVar8 + -1));
    }
    else {
      unaff_x24 = pAVar9;
      if (pAVar8 <= pAVar9) {
        uVar1 = 0;
        if (pAVar8 != (AsyncCompileJob *)0x0) {
          uVar1 = (ulong)pAVar9 / (ulong)pAVar8;
        }
        unaff_x24 = pAVar9 + -(uVar1 * (long)pAVar8);
      }
    }
    if (*(long **)(*param_1 + (long)unaff_x24 * 8) != (long *)0x0) {
      for (pAVar7 = (AsyncCompileJob *)**(long **)(*param_1 + (long)unaff_x24 * 8);
          pAVar7 != (AsyncCompileJob *)0x0; pAVar7 = *(AsyncCompileJob **)pAVar7) {
        pAVar5 = *(AsyncCompileJob **)(pAVar7 + 8);
        if (pAVar5 != pAVar9) {
          if (uVar6 < 2) {
            pAVar5 = (AsyncCompileJob *)((ulong)pAVar5 & (ulong)(pAVar8 + -1));
          }
          else if (pAVar8 <= pAVar5) {
            uVar1 = 0;
            if (pAVar8 != (AsyncCompileJob *)0x0) {
              uVar1 = (ulong)pAVar5 / (ulong)pAVar8;
            }
            if (pAVar5 + -(uVar1 * (long)pAVar8) == unaff_x24) goto LAB_0120ea00;
            break;
          }
          if (pAVar5 != unaff_x24) break;
        }
LAB_0120ea00:
        if (*(ulong *)(pAVar7 + 0x10) == uVar2) {
          return pAVar7;
        }
      }
    }
  }
  pAVar7 = operator_new(0x20);
  uVar3 = **(undefined8 **)param_4;
  *(undefined8 *)pAVar7 = 0;
  *(AsyncCompileJob **)(pAVar7 + 8) = pAVar9;
  *(undefined8 *)(pAVar7 + 0x10) = uVar3;
  *(undefined8 *)(pAVar7 + 0x18) = 0;
  if ((pAVar8 == (AsyncCompileJob *)0x0) ||
     (*(float *)(param_1 + 4) * (float)pAVar8 < (float)(param_1[3] + 1))) {
    uVar2 = (ulong)(pAVar8 < (AsyncCompileJob *)0x3 || ((ulong)pAVar8 & (ulong)(pAVar8 + -1)) != 0)
            | (long)pAVar8 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar2) {
      uVar6 = uVar2;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>,std::__ndk1::__unordered_map_hasher<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>,std::__ndk1::hash<v8::internal::wasm::AsyncCompileJob*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>,std::__ndk1::equal_to<v8::internal::wasm::AsyncCompileJob*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>>>
            *)param_1,uVar6);
    pAVar8 = param_1[1];
    if (((ulong)pAVar8 & (ulong)(pAVar8 + -1)) == 0) {
      unaff_x24 = (AsyncCompileJob *)((ulong)(pAVar8 + -1) & (ulong)pAVar9);
    }
    else {
      unaff_x24 = pAVar9;
      if (pAVar8 <= pAVar9) {
        uVar2 = 0;
        if (pAVar8 != (AsyncCompileJob *)0x0) {
          uVar2 = (ulong)pAVar9 / (ulong)pAVar8;
        }
        unaff_x24 = pAVar9 + -(uVar2 * (long)pAVar8);
      }
    }
  }
  pAVar5 = *param_1;
  pAVar9 = *(AsyncCompileJob **)(pAVar5 + (long)unaff_x24 * 8);
  if (pAVar9 == (AsyncCompileJob *)0x0) {
    ppAVar4 = param_1 + 2;
    *(AsyncCompileJob **)pAVar7 = *ppAVar4;
    *ppAVar4 = pAVar7;
    *(AsyncCompileJob ***)(pAVar5 + (long)unaff_x24 * 8) = ppAVar4;
    if (*(long *)pAVar7 == 0) goto LAB_0120eb54;
    pAVar9 = *(AsyncCompileJob **)(*(long *)pAVar7 + 8);
    if (((ulong)pAVar8 & (ulong)(pAVar8 + -1)) == 0) {
      pAVar9 = (AsyncCompileJob *)((ulong)pAVar9 & (ulong)(pAVar8 + -1));
    }
    else if (pAVar8 <= pAVar9) {
      uVar2 = 0;
      if (pAVar8 != (AsyncCompileJob *)0x0) {
        uVar2 = (ulong)pAVar9 / (ulong)pAVar8;
      }
      pAVar9 = pAVar9 + -(uVar2 * (long)pAVar8);
    }
    pAVar9 = *param_1 + (long)pAVar9 * 8;
  }
  else {
    *(undefined8 *)pAVar7 = *(undefined8 *)pAVar9;
  }
  *(AsyncCompileJob **)pAVar9 = pAVar7;
LAB_0120eb54:
  param_1[3] = param_1[3] + 1;
  return pAVar7;
}


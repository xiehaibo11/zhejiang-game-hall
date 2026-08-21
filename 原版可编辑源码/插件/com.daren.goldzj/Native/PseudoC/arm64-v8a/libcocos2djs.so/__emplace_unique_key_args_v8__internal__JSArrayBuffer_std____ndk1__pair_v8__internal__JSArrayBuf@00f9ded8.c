
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,
   std::__ndk1::shared_ptr<v8::internal::BackingStore> >, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,
   std::__ndk1::shared_ptr<v8::internal::BackingStore> >,
   std::__ndk1::__unordered_map_hasher<v8::internal::JSArrayBuffer,
   std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,
   std::__ndk1::shared_ptr<v8::internal::BackingStore> >,
   v8::internal::LocalArrayBufferTracker::Hasher, true>,
   std::__ndk1::__unordered_map_equal<v8::internal::JSArrayBuffer,
   std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,
   std::__ndk1::shared_ptr<v8::internal::BackingStore> >,
   std::__ndk1::equal_to<v8::internal::JSArrayBuffer>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,
   std::__ndk1::shared_ptr<v8::internal::BackingStore> > >
   >::__emplace_unique_key_args<v8::internal::JSArrayBuffer,
   std::__ndk1::pair<v8::internal::JSArrayBuffer const,
   std::__ndk1::shared_ptr<v8::internal::BackingStore> > >(v8::internal::JSArrayBuffer const&,
   std::__ndk1::pair<v8::internal::JSArrayBuffer const,
   std::__ndk1::shared_ptr<v8::internal::BackingStore> >&&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::__unordered_map_hasher<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,v8::internal::LocalArrayBufferTracker::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::equal_to<v8::internal::JSArrayBuffer>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>>>
::
__emplace_unique_key_args<v8::internal::JSArrayBuffer,std::__ndk1::pair<v8::internal::JSArrayBuffer_const,std::__ndk1::shared_ptr<v8::internal::BackingStore>>>
          (__hash_table<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::__unordered_map_hasher<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,v8::internal::LocalArrayBufferTracker::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::equal_to<v8::internal::JSArrayBuffer>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>>>
           *this,JSArrayBuffer *param_1,pair *param_2)

{
  ulong uVar1;
  long *plVar2;
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::__unordered_map_hasher<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,v8::internal::LocalArrayBufferTracker::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::equal_to<v8::internal::JSArrayBuffer>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>>>
  *p_Var3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x24;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar8 = *(ulong *)(this + 8);
  uVar9 = *(ulong *)param_1 >> 3;
  if (uVar8 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(uVar8 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar8 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar8 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar8 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar8 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar8 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar8 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar8))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar4 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar4 < 2) {
      unaff_x24 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x24 = uVar9;
      if (uVar8 <= uVar9) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar6 * uVar8;
      }
    }
    plVar7 = *(long **)(*(long *)this + unaff_x24 * 8);
    if (plVar7 != (long *)0x0) {
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar6 = plVar7[1];
        if (uVar6 != uVar9) {
          if (uVar4 < 2) {
            uVar6 = uVar6 & uVar8 - 1;
          }
          else if (uVar8 <= uVar6) {
            uVar1 = 0;
            if (uVar8 != 0) {
              uVar1 = uVar6 / uVar8;
            }
            if (uVar6 - uVar1 * uVar8 == unaff_x24) goto LAB_00f9df68;
            break;
          }
          if (uVar6 != unaff_x24) break;
        }
LAB_00f9df68:
        if (*(int *)(plVar7 + 2) == (int)*(ulong *)param_1) {
          return plVar7;
        }
      }
    }
  }
  plVar7 = operator_new(0x28);
  lVar5 = *(long *)param_2;
  plVar7[3] = *(long *)(param_2 + 8);
  plVar7[2] = lVar5;
  plVar7[4] = *(long *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *plVar7 = 0;
  plVar7[1] = uVar9;
  if ((uVar8 == 0) || (*(float *)(this + 0x20) * (float)uVar8 < (float)(*(long *)(this + 0x18) + 1))
     ) {
    uVar8 = (ulong)(uVar8 < 3 || (uVar8 & uVar8 - 1) != 0) | uVar8 << 1;
    uVar4 = (ulong)((float)(*(long *)(this + 0x18) + 1) / *(float *)(this + 0x20));
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    rehash(this,uVar4);
    uVar8 = *(ulong *)(this + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x24 = uVar9;
      if (uVar8 <= uVar9) {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar4 * uVar8;
      }
    }
  }
  lVar5 = *(long *)this;
  plVar2 = *(long **)(lVar5 + unaff_x24 * 8);
  if (plVar2 == (long *)0x0) {
    p_Var3 = this + 0x10;
    *plVar7 = *(long *)p_Var3;
    *(long **)p_Var3 = plVar7;
    *(__hash_table<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::__unordered_map_hasher<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,v8::internal::LocalArrayBufferTracker::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::equal_to<v8::internal::JSArrayBuffer>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>>>
      **)(lVar5 + unaff_x24 * 8) = p_Var3;
    if (*plVar7 == 0) goto LAB_00f9e0c4;
    uVar9 = *(ulong *)(*plVar7 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar9 = uVar9 & uVar8 - 1;
    }
    else if (uVar8 <= uVar9) {
      uVar4 = 0;
      if (uVar8 != 0) {
        uVar4 = uVar9 / uVar8;
      }
      uVar9 = uVar9 - uVar4 * uVar8;
    }
    plVar2 = (long *)(*(long *)this + uVar9 * 8);
  }
  else {
    *plVar7 = *plVar2;
  }
  *plVar2 = (long)plVar7;
LAB_00f9e0c4:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return plVar7;
}



/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,
   v8::internal::UnorderedStringSet*>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,
   v8::internal::UnorderedStringSet*>,
   std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::Module>,
   std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,
   v8::internal::UnorderedStringSet*>, v8::internal::ModuleHandleHash, true>,
   std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::Module>,
   std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,
   v8::internal::UnorderedStringSet*>, v8::internal::ModuleHandleEqual, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,
   v8::internal::UnorderedStringSet*> >
   >::__emplace_unique_key_args<v8::internal::Handle<v8::internal::Module>,
   std::__ndk1::pair<v8::internal::Handle<v8::internal::Module> const,
   v8::internal::UnorderedStringSet*> >(v8::internal::Handle<v8::internal::Module> const&,
   std::__ndk1::pair<v8::internal::Handle<v8::internal::Module> const,
   v8::internal::UnorderedStringSet*>&&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::Module>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,v8::internal::ModuleHandleHash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::Module>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,v8::internal::ModuleHandleEqual,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>>>
::
__emplace_unique_key_args<v8::internal::Handle<v8::internal::Module>,std::__ndk1::pair<v8::internal::Handle<v8::internal::Module>const,v8::internal::UnorderedStringSet*>>
          (__hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::Module>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,v8::internal::ModuleHandleHash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::Module>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,v8::internal::ModuleHandleEqual,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>>>
           *this,Handle *param_1,pair *param_2)

{
  ulong uVar1;
  Zone *this_00;
  long *plVar2;
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::Module>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,v8::internal::ModuleHandleHash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::Module>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,v8::internal::ModuleHandleEqual,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>>>
  *p_Var3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong unaff_x24;
  undefined2 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  uVar8 = *(ulong *)(this + 8);
  uVar4 = (long)((ulong)*(uint *)(**(long **)param_1 + 7) << 0x20) >> 0x21;
  if (uVar8 != 0) {
    uVar10 = CONCAT17(POPCOUNT((char)(uVar8 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar8 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar8 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar8 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar8 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar8 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar8 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar8))))
                                                ))));
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar5 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    if (uVar5 < 2) {
      unaff_x24 = uVar8 - 1 & uVar4;
    }
    else {
      uVar6 = 0;
      if (uVar8 != 0) {
        uVar6 = uVar4 / uVar8;
      }
      unaff_x24 = uVar4;
      if (uVar8 <= uVar4) {
        unaff_x24 = uVar4 - uVar6 * uVar8;
      }
    }
    plVar7 = *(long **)(*(long *)this + unaff_x24 * 8);
    if (plVar7 != (long *)0x0) {
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar6 = plVar7[1];
        if (uVar6 != uVar4) {
          if (uVar5 < 2) {
            uVar6 = uVar6 & uVar8 - 1;
          }
          else if (uVar8 <= uVar6) {
            uVar1 = 0;
            if (uVar8 != 0) {
              uVar1 = uVar6 / uVar8;
            }
            if (uVar6 - uVar1 * uVar8 == unaff_x24) goto LAB_0112f998;
            break;
          }
          if (uVar6 != unaff_x24) break;
        }
LAB_0112f998:
        if (*(int *)plVar7[2] == (int)**(long **)param_1) {
          return plVar7;
        }
      }
    }
  }
  this_00 = *(Zone **)(this + 0x20);
  plVar7 = *(long **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)plVar7) < 0x20) {
    plVar7 = (long *)v8::internal::Zone::NewExpand(this_00,0x20);
  }
  else {
    *(long **)(this_00 + 0x10) = plVar7 + 4;
  }
  lVar12 = *(long *)(param_2 + 8);
  lVar11 = *(long *)param_2;
  *plVar7 = 0;
  plVar7[1] = uVar4;
  plVar7[3] = lVar12;
  plVar7[2] = lVar11;
  if ((uVar8 == 0) || (*(float *)(this + 0x30) * (float)uVar8 < (float)(*(long *)(this + 0x28) + 1))
     ) {
    uVar8 = (ulong)(uVar8 < 3 || (uVar8 & uVar8 - 1) != 0) | uVar8 << 1;
    uVar5 = (ulong)((float)(*(long *)(this + 0x28) + 1) / *(float *)(this + 0x30));
    if (uVar5 <= uVar8) {
      uVar5 = uVar8;
    }
    rehash(this,uVar5);
    uVar8 = *(ulong *)(this + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar4;
    }
    else {
      unaff_x24 = uVar4;
      if (uVar8 <= uVar4) {
        uVar5 = 0;
        if (uVar8 != 0) {
          uVar5 = uVar4 / uVar8;
        }
        unaff_x24 = uVar4 - uVar5 * uVar8;
      }
    }
  }
  plVar2 = *(long **)(*(long *)this + unaff_x24 * 8);
  if (plVar2 == (long *)0x0) {
    p_Var3 = this + 0x18;
    *plVar7 = *(long *)p_Var3;
    *(long **)p_Var3 = plVar7;
    *(__hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::Module>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,v8::internal::ModuleHandleHash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::Module>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>,v8::internal::ModuleHandleEqual,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::Module>,v8::internal::UnorderedStringSet*>>>
      **)(*(long *)this + unaff_x24 * 8) = p_Var3;
    if (*plVar7 != 0) {
      uVar4 = *(ulong *)(*plVar7 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar4 = uVar4 & uVar8 - 1;
      }
      else if (uVar8 <= uVar4) {
        uVar5 = 0;
        if (uVar8 != 0) {
          uVar5 = uVar4 / uVar8;
        }
        uVar4 = uVar4 - uVar5 * uVar8;
      }
      *(long **)(*(long *)this + uVar4 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar2;
    *plVar2 = (long)plVar7;
  }
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  return plVar7;
}


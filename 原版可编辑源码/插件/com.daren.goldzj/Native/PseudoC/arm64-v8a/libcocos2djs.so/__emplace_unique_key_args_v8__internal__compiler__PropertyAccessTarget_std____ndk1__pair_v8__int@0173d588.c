
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,
   v8::internal::compiler::PropertyAccessInfo>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,
   v8::internal::compiler::PropertyAccessInfo>,
   std::__ndk1::__unordered_map_hasher<v8::internal::compiler::PropertyAccessTarget,
   std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,
   v8::internal::compiler::PropertyAccessInfo>, v8::internal::compiler::PropertyAccessTarget::Hash,
   true>, std::__ndk1::__unordered_map_equal<v8::internal::compiler::PropertyAccessTarget,
   std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,
   v8::internal::compiler::PropertyAccessInfo>, v8::internal::compiler::PropertyAccessTarget::Equal,
   true>, 
   v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,
   v8::internal::compiler::PropertyAccessInfo> >
   >::__emplace_unique_key_args<v8::internal::compiler::PropertyAccessTarget,
   std::__ndk1::pair<v8::internal::compiler::PropertyAccessTarget const,
   v8::internal::compiler::PropertyAccessInfo> >(v8::internal::compiler::PropertyAccessTarget
   const&, std::__ndk1::pair<v8::internal::compiler::PropertyAccessTarget const,
   v8::internal::compiler::PropertyAccessInfo>&&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::PropertyAccessTarget,std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,v8::internal::compiler::PropertyAccessTarget::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::PropertyAccessTarget,std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,v8::internal::compiler::PropertyAccessTarget::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>>>
::
__emplace_unique_key_args<v8::internal::compiler::PropertyAccessTarget,std::__ndk1::pair<v8::internal::compiler::PropertyAccessTarget_const,v8::internal::compiler::PropertyAccessInfo>>
          (__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::PropertyAccessTarget,std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,v8::internal::compiler::PropertyAccessTarget::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::PropertyAccessTarget,std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,v8::internal::compiler::PropertyAccessTarget::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>>>
           *this,PropertyAccessTarget *param_1,pair *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  Zone *this_00;
  long *plVar5;
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::PropertyAccessTarget,std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,v8::internal::compiler::PropertyAccessTarget::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::PropertyAccessTarget,std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,v8::internal::compiler::PropertyAccessTarget::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>>>
  *p_Var6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x25;
  undefined2 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  uVar3 = v8::base::hash_combine(**(ulong **)param_1,**(ulong **)(param_1 + 0x10));
  uVar4 = v8::base::hash_value(*(uint *)(param_1 + 0x20));
  uVar4 = v8::base::hash_combine(0,uVar4);
  uVar3 = v8::base::hash_value(uVar3);
  uVar3 = v8::base::hash_combine(uVar4,uVar3);
  uVar4 = *(ulong *)(this + 8);
  if (uVar4 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar4 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar4))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar8 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar8 < 2) {
      unaff_x25 = uVar4 - 1 & uVar3;
    }
    else {
      unaff_x25 = uVar3;
      if (uVar4 <= uVar3) {
        uVar9 = 0;
        if (uVar4 != 0) {
          uVar9 = uVar3 / uVar4;
        }
        unaff_x25 = uVar3 - uVar9 * uVar4;
      }
    }
    plVar7 = *(long **)(*(long *)this + unaff_x25 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar9 = plVar7[1];
        if (uVar9 != uVar3) {
          if (uVar8 < 2) {
            uVar9 = uVar9 & uVar4 - 1;
          }
          else if (uVar4 <= uVar9) {
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = uVar9 / uVar4;
            }
            if (uVar9 - uVar2 * uVar4 == unaff_x25) goto LAB_0173d668;
            break;
          }
          if (uVar9 != unaff_x25) break;
        }
LAB_0173d668:
        if (((plVar7[2] == *(long *)param_1) && (plVar7[4] == *(long *)(param_1 + 0x10))) &&
           ((int)plVar7[6] == *(int *)(param_1 + 0x20))) {
          return plVar7;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  this_00 = *(Zone **)(this + 0x20);
  plVar7 = *(long **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)plVar7) < 0xc0) {
    plVar7 = (long *)v8::internal::Zone::NewExpand(this_00,0xc0);
  }
  else {
    *(long **)(this_00 + 0x10) = plVar7 + 0x18;
  }
  lVar13 = *(long *)(param_2 + 8);
  lVar12 = *(long *)param_2;
  lVar15 = *(long *)(param_2 + 0x18);
  lVar14 = *(long *)(param_2 + 0x10);
  plVar7[6] = *(long *)(param_2 + 0x20);
  plVar7[3] = lVar13;
  plVar7[2] = lVar12;
  plVar7[5] = lVar15;
  plVar7[4] = lVar14;
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[10] = 0;
  *(undefined4 *)(plVar7 + 7) = uVar1;
  plVar7[0xb] = *(long *)(param_2 + 0x48);
  plVar7[8] = *(long *)(param_2 + 0x30);
  plVar7[9] = *(long *)(param_2 + 0x38);
  plVar7[10] = *(long *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  plVar7[0xc] = 0;
  plVar7[0xd] = 0;
  plVar7[0xe] = 0;
  plVar7[0xf] = *(long *)(param_2 + 0x68);
  plVar7[0xc] = *(long *)(param_2 + 0x50);
  plVar7[0xd] = *(long *)(param_2 + 0x58);
  plVar7[0xe] = *(long *)(param_2 + 0x60);
  lVar12 = *(long *)(param_2 + 0x90);
  lVar14 = *(long *)(param_2 + 0xa8);
  lVar13 = *(long *)(param_2 + 0xa0);
  lVar16 = *(long *)(param_2 + 0x78);
  lVar15 = *(long *)(param_2 + 0x70);
  lVar18 = *(long *)(param_2 + 0x88);
  lVar17 = *(long *)(param_2 + 0x80);
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  plVar7[0x15] = *(long *)(param_2 + 0x98);
  plVar7[0x14] = lVar12;
  plVar7[0x17] = lVar14;
  plVar7[0x16] = lVar13;
  plVar7[0x11] = lVar16;
  plVar7[0x10] = lVar15;
  plVar7[0x13] = lVar18;
  plVar7[0x12] = lVar17;
  *plVar7 = 0;
  plVar7[1] = uVar3;
  if ((uVar4 == 0) || (*(float *)(this + 0x30) * (float)uVar4 < (float)(*(long *)(this + 0x28) + 1))
     ) {
    uVar4 = (ulong)(uVar4 < 3 || (uVar4 & uVar4 - 1) != 0) | uVar4 << 1;
    uVar8 = (ulong)((float)(*(long *)(this + 0x28) + 1) / *(float *)(this + 0x30));
    if (uVar8 <= uVar4) {
      uVar8 = uVar4;
    }
    rehash(this,uVar8);
    uVar4 = *(ulong *)(this + 8);
    if ((uVar4 & uVar4 - 1) == 0) {
      unaff_x25 = uVar4 - 1 & uVar3;
    }
    else {
      unaff_x25 = uVar3;
      if (uVar4 <= uVar3) {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar3 / uVar4;
        }
        unaff_x25 = uVar3 - uVar8 * uVar4;
      }
    }
  }
  plVar5 = *(long **)(*(long *)this + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    p_Var6 = this + 0x18;
    *plVar7 = *(long *)p_Var6;
    *(long **)p_Var6 = plVar7;
    *(__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::PropertyAccessTarget,std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,v8::internal::compiler::PropertyAccessTarget::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::PropertyAccessTarget,std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,v8::internal::compiler::PropertyAccessTarget::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>>>
      **)(*(long *)this + unaff_x25 * 8) = p_Var6;
    if (*plVar7 != 0) {
      uVar3 = *(ulong *)(*plVar7 + 8);
      if ((uVar4 & uVar4 - 1) == 0) {
        uVar3 = uVar3 & uVar4 - 1;
      }
      else if (uVar4 <= uVar3) {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar3 / uVar4;
        }
        uVar3 = uVar3 - uVar8 * uVar4;
      }
      *(long **)(*(long *)this + uVar3 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar5;
    *plVar5 = (long)plVar7;
  }
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  return plVar7;
}


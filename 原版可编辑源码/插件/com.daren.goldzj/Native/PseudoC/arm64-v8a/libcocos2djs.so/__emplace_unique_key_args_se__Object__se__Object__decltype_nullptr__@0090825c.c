
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<se::Object*,
   void*>, void*>*>, bool> std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<se::Object*,
   void*>, std::__ndk1::__unordered_map_hasher<se::Object*,
   std::__ndk1::__hash_value_type<se::Object*, void*>, std::__ndk1::hash<se::Object*>, true>,
   std::__ndk1::__unordered_map_equal<se::Object*, std::__ndk1::__hash_value_type<se::Object*,
   void*>, std::__ndk1::equal_to<se::Object*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<se::Object*, void*> >
   >::__emplace_unique_key_args<se::Object*, se::Object*, decltype(nullptr)>(se::Object* const&,
   se::Object*&&, decltype(nullptr)&&) */

undefined1  [16]
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<se::Object*,void*>,std::__ndk1::__unordered_map_hasher<se::Object*,std::__ndk1::__hash_value_type<se::Object*,void*>,std::__ndk1::hash<se::Object*>,true>,std::__ndk1::__unordered_map_equal<se::Object*,std::__ndk1::__hash_value_type<se::Object*,void*>,std::__ndk1::equal_to<se::Object*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<se::Object*,void*>>>
::__emplace_unique_key_args<se::Object*,se::Object*,decltype(nullptr)>
          (Object **param_1,Object **param_2,_func_decltype_nullptr **param_3)

{
  undefined8 uVar1;
  Object *pOVar2;
  _func_decltype_nullptr *p_Var3;
  Object **ppOVar4;
  Object *pOVar5;
  ulong uVar6;
  ulong uVar7;
  Object *pOVar8;
  Object *pOVar9;
  Object *pOVar10;
  Object *pOVar11;
  Object *unaff_x24;
  undefined1 auVar12 [16];
  
  pOVar2 = *param_2;
  uVar7 = (((ulong)pOVar2 & 0x1fffffff) * 8 + 8 ^ (ulong)pOVar2 >> 0x20) * -0x622015f714c7d297;
  pOVar10 = param_1[1];
  uVar7 = (uVar7 ^ (ulong)pOVar2 >> 0x20 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  pOVar11 = (Object *)((uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297);
  if (pOVar10 != (Object *)0x0) {
    pOVar5 = pOVar10 + -1;
    if (((ulong)pOVar5 & (ulong)pOVar10) == 0) {
      unaff_x24 = (Object *)((ulong)pOVar11 & (ulong)pOVar5);
    }
    else {
      unaff_x24 = pOVar11;
      if (pOVar10 <= pOVar11) {
        uVar7 = 0;
        if (pOVar10 != (Object *)0x0) {
          uVar7 = (ulong)pOVar11 / (ulong)pOVar10;
        }
        unaff_x24 = pOVar11 + -(uVar7 * (long)pOVar10);
      }
    }
    pOVar9 = *(Object **)(*param_1 + (long)unaff_x24 * 8);
    if (pOVar9 != (Object *)0x0) {
      do {
        pOVar9 = *(Object **)pOVar9;
        if (pOVar9 == (Object *)0x0) goto LAB_00908348;
        pOVar8 = *(Object **)(pOVar9 + 8);
        if (pOVar8 != pOVar11) {
          if (((ulong)pOVar5 & (ulong)pOVar10) == 0) {
            pOVar8 = (Object *)((ulong)pOVar8 & (ulong)pOVar5);
          }
          else if (pOVar10 <= pOVar8) {
            uVar7 = 0;
            if (pOVar10 != (Object *)0x0) {
              uVar7 = (ulong)pOVar8 / (ulong)pOVar10;
            }
            if (pOVar8 + -(uVar7 * (long)pOVar10) == unaff_x24) goto LAB_00908334;
            goto LAB_00908348;
          }
          if (pOVar8 != unaff_x24) goto LAB_00908348;
        }
LAB_00908334:
      } while (*(Object **)(pOVar9 + 0x10) != pOVar2);
      uVar1 = 0;
      goto LAB_00908468;
    }
  }
LAB_00908348:
  pOVar9 = operator_new(0x20);
  p_Var3 = *param_3;
  *(undefined8 *)pOVar9 = 0;
  *(Object **)(pOVar9 + 8) = pOVar11;
  *(_func_decltype_nullptr **)(pOVar9 + 0x10) = p_Var3;
  *(undefined8 *)(pOVar9 + 0x18) = 0;
  if ((pOVar10 == (Object *)0x0) ||
     (*(float *)(param_1 + 4) * (float)pOVar10 < (float)(param_1[3] + 1))) {
    if (pOVar10 < (Object *)0x3) {
      uVar7 = 1;
    }
    else {
      uVar7 = (ulong)(((ulong)(pOVar10 + -1) & (ulong)pOVar10) != 0);
    }
    uVar7 = uVar7 | (long)pOVar10 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<se::Object*,void*>,std::__ndk1::__unordered_map_hasher<se::Object*,std::__ndk1::__hash_value_type<se::Object*,void*>,std::__ndk1::hash<se::Object*>,true>,std::__ndk1::__unordered_map_equal<se::Object*,std::__ndk1::__hash_value_type<se::Object*,void*>,std::__ndk1::equal_to<se::Object*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<se::Object*,void*>>>
            *)param_1,uVar6);
    pOVar10 = param_1[1];
    if (((ulong)(pOVar10 + -1) & (ulong)pOVar10) == 0) {
      unaff_x24 = (Object *)((ulong)(pOVar10 + -1) & (ulong)pOVar11);
    }
    else {
      unaff_x24 = pOVar11;
      if (pOVar10 <= pOVar11) {
        uVar7 = 0;
        if (pOVar10 != (Object *)0x0) {
          uVar7 = (ulong)pOVar11 / (ulong)pOVar10;
        }
        unaff_x24 = pOVar11 + -(uVar7 * (long)pOVar10);
      }
    }
  }
  pOVar11 = *param_1;
  pOVar2 = *(Object **)(pOVar11 + (long)unaff_x24 * 8);
  if (pOVar2 == (Object *)0x0) {
    ppOVar4 = param_1 + 2;
    *(Object **)pOVar9 = *ppOVar4;
    *ppOVar4 = pOVar9;
    *(Object ***)(pOVar11 + (long)unaff_x24 * 8) = ppOVar4;
    if (*(long *)pOVar9 != 0) {
      pOVar2 = *(Object **)(*(long *)pOVar9 + 8);
      if (((ulong)(pOVar10 + -1) & (ulong)pOVar10) == 0) {
        pOVar2 = (Object *)((ulong)pOVar2 & (ulong)(pOVar10 + -1));
      }
      else if (pOVar10 <= pOVar2) {
        uVar7 = 0;
        if (pOVar10 != (Object *)0x0) {
          uVar7 = (ulong)pOVar2 / (ulong)pOVar10;
        }
        pOVar2 = pOVar2 + -(uVar7 * (long)pOVar10);
      }
      pOVar2 = *param_1 + (long)pOVar2 * 8;
      goto LAB_00908454;
    }
  }
  else {
    *(undefined8 *)pOVar9 = *(undefined8 *)pOVar2;
LAB_00908454:
    *(Object **)pOVar2 = pOVar9;
  }
  uVar1 = 1;
  param_1[3] = param_1[3] + 1;
LAB_00908468:
  auVar12._8_8_ = uVar1;
  auVar12._0_8_ = pOVar9;
  return auVar12;
}


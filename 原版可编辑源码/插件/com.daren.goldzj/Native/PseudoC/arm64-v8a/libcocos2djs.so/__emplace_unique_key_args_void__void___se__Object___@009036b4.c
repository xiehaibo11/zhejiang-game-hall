
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<void*,
   se::Object*>, void*>*>, bool> std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<void*,
   se::Object*>, std::__ndk1::__unordered_map_hasher<void*, std::__ndk1::__hash_value_type<void*,
   se::Object*>, std::__ndk1::hash<void*>, true>, std::__ndk1::__unordered_map_equal<void*,
   std::__ndk1::__hash_value_type<void*, se::Object*>, std::__ndk1::equal_to<void*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*, se::Object*> >
   >::__emplace_unique_key_args<void*, void*&, se::Object*&>(void* const&, void*&, se::Object*&) */

undefined1  [16] __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<void*,se::Object*>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,se::Object*>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,se::Object*>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,se::Object*>>>
::__emplace_unique_key_args<void*,void*&,se::Object*&>
          (__hash_table<std::__ndk1::__hash_value_type<void*,se::Object*>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,se::Object*>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,se::Object*>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,se::Object*>>>
           *this,void **param_1,void **param_2,Object **param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  Object *pOVar4;
  long *plVar5;
  __hash_table<std::__ndk1::__hash_value_type<void*,se::Object*>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,se::Object*>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,se::Object*>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,se::Object*>>>
  *p_Var6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong unaff_x25;
  undefined1 auVar13 [16];
  
  pvVar3 = *param_1;
  uVar9 = (((ulong)pvVar3 & 0x1fffffff) * 8 + 8 ^ (ulong)pvVar3 >> 0x20) * -0x622015f714c7d297;
  uVar12 = *(ulong *)(this + 8);
  uVar9 = (uVar9 ^ (ulong)pvVar3 >> 0x20 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
  uVar9 = (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
  if (uVar12 != 0) {
    uVar7 = uVar12 - 1;
    if ((uVar7 & uVar12) == 0) {
      unaff_x25 = uVar9 & uVar7;
    }
    else {
      unaff_x25 = uVar9;
      if (uVar12 <= uVar9) {
        uVar10 = 0;
        if (uVar12 != 0) {
          uVar10 = uVar9 / uVar12;
        }
        unaff_x25 = uVar9 - uVar10 * uVar12;
      }
    }
    plVar11 = *(long **)(*(long *)this + unaff_x25 * 8);
    if (plVar11 != (long *)0x0) {
      do {
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) goto LAB_009037a8;
        uVar10 = plVar11[1];
        if (uVar10 != uVar9) {
          if ((uVar7 & uVar12) == 0) {
            uVar10 = uVar10 & uVar7;
          }
          else if (uVar12 <= uVar10) {
            uVar1 = 0;
            if (uVar12 != 0) {
              uVar1 = uVar10 / uVar12;
            }
            if (uVar10 - uVar1 * uVar12 == unaff_x25) goto LAB_00903794;
            goto LAB_009037a8;
          }
          if (uVar10 != unaff_x25) goto LAB_009037a8;
        }
LAB_00903794:
      } while ((void *)plVar11[2] != pvVar3);
      uVar2 = 0;
      goto LAB_009038d0;
    }
  }
LAB_009037a8:
  plVar11 = operator_new(0x20);
  pvVar3 = *param_2;
  plVar11[1] = uVar9;
  plVar11[2] = (long)pvVar3;
  pOVar4 = *param_3;
  *plVar11 = 0;
  plVar11[3] = (long)pOVar4;
  if ((uVar12 == 0) ||
     (*(float *)(this + 0x20) * (float)uVar12 < (float)(*(long *)(this + 0x18) + 1))) {
    if (uVar12 < 3) {
      uVar7 = 1;
    }
    else {
      uVar7 = (ulong)((uVar12 - 1 & uVar12) != 0);
    }
    uVar7 = uVar7 | uVar12 << 1;
    uVar12 = (ulong)((float)(*(long *)(this + 0x18) + 1) / *(float *)(this + 0x20));
    if (uVar12 <= uVar7) {
      uVar12 = uVar7;
    }
    rehash(this,uVar12);
    uVar12 = *(ulong *)(this + 8);
    if ((uVar12 - 1 & uVar12) == 0) {
      unaff_x25 = uVar12 - 1 & uVar9;
    }
    else {
      unaff_x25 = uVar9;
      if (uVar12 <= uVar9) {
        uVar7 = 0;
        if (uVar12 != 0) {
          uVar7 = uVar9 / uVar12;
        }
        unaff_x25 = uVar9 - uVar7 * uVar12;
      }
    }
  }
  lVar8 = *(long *)this;
  plVar5 = *(long **)(lVar8 + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    p_Var6 = this + 0x10;
    *plVar11 = *(long *)p_Var6;
    *(long **)p_Var6 = plVar11;
    *(__hash_table<std::__ndk1::__hash_value_type<void*,se::Object*>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,se::Object*>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,se::Object*>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,se::Object*>>>
      **)(lVar8 + unaff_x25 * 8) = p_Var6;
    if (*plVar11 != 0) {
      uVar9 = *(ulong *)(*plVar11 + 8);
      if ((uVar12 - 1 & uVar12) == 0) {
        uVar9 = uVar9 & uVar12 - 1;
      }
      else if (uVar12 <= uVar9) {
        uVar7 = 0;
        if (uVar12 != 0) {
          uVar7 = uVar9 / uVar12;
        }
        uVar9 = uVar9 - uVar7 * uVar12;
      }
      plVar5 = (long *)(*(long *)this + uVar9 * 8);
      goto LAB_009038bc;
    }
  }
  else {
    *plVar11 = *plVar5;
LAB_009038bc:
    *plVar5 = (long)plVar11;
  }
  uVar2 = 1;
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
LAB_009038d0:
  auVar13._8_8_ = uVar2;
  auVar13._0_8_ = plVar11;
  return auVar13;
}


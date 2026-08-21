
/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,
   int>, std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::internal::ConstantPoolKey, int>,
   void*>*, long>,
   std::__ndk1::__tree_iterator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey, int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::internal::ConstantPoolKey, int>, void*>*,
   long> > std::__ndk1::__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey, int>,
   std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,
   std::__ndk1::__value_type<v8::internal::ConstantPoolKey, int>,
   std::__ndk1::less<v8::internal::ConstantPoolKey>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey, int> >
   >::__equal_range_multi<v8::internal::ConstantPoolKey>(v8::internal::ConstantPoolKey const&) */

undefined1  [16] __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
::__equal_range_multi<v8::internal::ConstantPoolKey>
          (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
           *this,ConstantPoolKey *param_1)

{
  char cVar1;
  __tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
  _Var2;
  bool bVar3;
  __tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
  *p_Var4;
  __tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
  *p_Var5;
  char cVar6;
  __tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
  *p_Var7;
  __tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
  *p_Var8;
  __tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
  _Var9;
  undefined1 auVar10 [16];
  
  p_Var4 = this + 8;
  p_Var7 = *(__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
             **)p_Var4;
  p_Var5 = p_Var4;
  if (p_Var7 == (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                 *)0x0) goto LAB_00ee8bc8;
  cVar1 = *param_1;
  bVar3 = cVar1 == '\0';
LAB_00ee8aec:
  _Var2 = p_Var7[0x20];
  p_Var4 = p_Var7;
  if (_Var2 != (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                )0x0 && bVar3) goto LAB_00ee8ae0;
  if ((cVar1 != '\0') &&
     (_Var2 == (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                )0x0)) goto LAB_00ee8b08;
  cVar6 = param_1[0x10];
  _Var9 = p_Var7[0x30];
  if ((char)_Var9 <= cVar6) {
    if ((char)_Var9 < cVar6) {
LAB_00ee8b48:
      _Var9 = p_Var7[0x30];
      cVar6 = param_1[0x10];
LAB_00ee8b50:
      if ((char)_Var9 < cVar6) goto LAB_00ee8b08;
      if (cVar6 < (char)_Var9) {
LAB_00ee8bac:
        p_Var8 = *(__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                   **)p_Var7;
        if (p_Var8 == (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                       *)0x0) goto LAB_00ee8c70;
        _Var2 = p_Var8[0x20];
        goto joined_r0x00ee8bbc;
      }
      if (_Var2 == (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                    )0x0) {
        if (cVar1 != '\0') goto LAB_00ee8d14;
        if (*(ulong *)(param_1 + 8) <= *(ulong *)(p_Var7 + 0x28)) goto LAB_00ee8bac;
      }
      else {
        if (cVar1 != '\x01') goto LAB_00ee8d28;
        if (*(uint *)(param_1 + 8) <= *(uint *)(p_Var7 + 0x28)) goto LAB_00ee8bac;
      }
LAB_00ee8b08:
      p_Var7 = *(__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                 **)(p_Var7 + 8);
      p_Var4 = p_Var5;
      goto joined_r0x00ee8b10;
    }
    if (cVar1 == '\0') {
      if (_Var2 == (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                    )0x0) {
        if (*(ulong *)(p_Var7 + 0x28) <= *(ulong *)(param_1 + 8)) goto LAB_00ee8b50;
        goto LAB_00ee8ae0;
      }
      goto LAB_00ee8d14;
    }
    if (_Var2 != (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                  )0x1) goto LAB_00ee8d28;
    if (*(uint *)(p_Var7 + 0x28) <= *(uint *)(param_1 + 8)) goto LAB_00ee8b48;
  }
LAB_00ee8ae0:
  p_Var7 = *(__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
             **)p_Var7;
joined_r0x00ee8b10:
  p_Var5 = p_Var4;
  if (p_Var7 == (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                 *)0x0) goto LAB_00ee8bc8;
  goto LAB_00ee8aec;
joined_r0x00ee8bbc:
  if ((cVar1 == '\0') ||
     (_Var2 != (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                )0x0)) {
    if (_Var2 != (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                  )0x0 && bVar3) {
LAB_00ee8bfc:
      p_Var4 = p_Var8;
      p_Var8 = *(__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                 **)p_Var8;
    }
    else {
      if ((char)p_Var8[0x30] < cVar6) goto LAB_00ee8bd4;
      if (cVar6 < (char)p_Var8[0x30]) goto LAB_00ee8bfc;
      if (_Var2 == (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                    )0x0) {
        if (cVar1 != '\0') {
LAB_00ee8d14:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","!is_value32_");
        }
        if (*(ulong *)(param_1 + 8) <= *(ulong *)(p_Var8 + 0x28)) goto LAB_00ee8bfc;
        p_Var8 = *(__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                   **)(p_Var8 + 8);
      }
      else {
        if (cVar1 != '\x01') {
LAB_00ee8d28:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","is_value32_");
        }
        if (*(uint *)(param_1 + 8) <= *(uint *)(p_Var8 + 0x28)) goto LAB_00ee8bfc;
        p_Var8 = *(__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                   **)(p_Var8 + 8);
      }
    }
  }
  else {
LAB_00ee8bd4:
    p_Var8 = *(__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
               **)(p_Var8 + 8);
  }
  if (p_Var8 == (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                 *)0x0) goto LAB_00ee8c70;
  _Var2 = p_Var8[0x20];
  goto joined_r0x00ee8bbc;
LAB_00ee8c70:
  p_Var7 = *(__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
             **)(p_Var7 + 8);
  while (p_Var8 = p_Var7,
        p_Var8 != (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                   *)0x0) {
    while (_Var2 = p_Var8[0x20],
          _Var2 == (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                    )0x0 || !bVar3) {
      if ((cVar1 == '\0') ||
         (_Var2 != (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                    )0x0)) {
        if (cVar6 < (char)p_Var8[0x30]) break;
        if ((char)p_Var8[0x30] < cVar6) goto LAB_00ee8d04;
        if (cVar1 == '\0') {
          if (_Var2 != (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                        )0x0) goto LAB_00ee8d14;
          if (*(ulong *)(p_Var8 + 0x28) <= *(ulong *)(param_1 + 8)) goto LAB_00ee8d04;
          p_Var7 = *(__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                     **)p_Var8;
          p_Var5 = p_Var8;
        }
        else {
          if (_Var2 != (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                        )0x1) goto LAB_00ee8d28;
          if (*(uint *)(p_Var8 + 0x28) <= *(uint *)(param_1 + 8)) goto LAB_00ee8d04;
          p_Var7 = *(__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                     **)p_Var8;
          p_Var5 = p_Var8;
        }
      }
      else {
LAB_00ee8d04:
        p_Var7 = *(__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                   **)(p_Var8 + 8);
      }
      p_Var8 = p_Var7;
      if (p_Var8 == (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                     *)0x0) goto LAB_00ee8bc8;
    }
    p_Var5 = p_Var8;
    p_Var7 = *(__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
               **)p_Var8;
  }
LAB_00ee8bc8:
  auVar10._8_8_ = p_Var5;
  auVar10._0_8_ = p_Var4;
  return auVar10;
}


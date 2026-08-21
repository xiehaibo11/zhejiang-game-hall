
/* std::__ndk1::__tree_iterator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey, int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::internal::ConstantPoolKey, int>, void*>*,
   long> std::__ndk1::__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey, int>,
   std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,
   std::__ndk1::__value_type<v8::internal::ConstantPoolKey, int>,
   std::__ndk1::less<v8::internal::ConstantPoolKey>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey, int> >
   >::find<v8::internal::ConstantPoolKey>(v8::internal::ConstantPoolKey const&) */

__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
* __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
::find<v8::internal::ConstantPoolKey>
          (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
           *this,ConstantPoolKey *param_1)

{
  char cVar1;
  __tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
  _Var2;
  __tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
  *p_Var3;
  __tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
  *p_Var4;
  __tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
  *p_Var5;
  
  p_Var4 = this + 8;
  p_Var5 = *(__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
             **)p_Var4;
  if (p_Var5 == (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                 *)0x0) {
    return p_Var4;
  }
  cVar1 = *param_1;
  _Var2 = p_Var5[0x20];
  p_Var3 = p_Var4;
  do {
    if ((cVar1 == '\0') ||
       (_Var2 != (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                  )0x0)) {
      if (_Var2 == (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                    )0x0 || cVar1 != '\0') {
        if ((char)p_Var5[0x30] < (char)param_1[0x10]) goto LAB_00ee897c;
        if ((char)param_1[0x10] < (char)p_Var5[0x30]) goto LAB_00ee89a4;
        if (_Var2 == (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                      )0x0) {
          if (cVar1 != '\0') goto LAB_00ee8aa8;
          if (*(ulong *)(param_1 + 8) <= *(ulong *)(p_Var5 + 0x28)) goto LAB_00ee89a4;
          p_Var5 = *(__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                     **)(p_Var5 + 8);
        }
        else {
          if (cVar1 != '\x01') goto LAB_00ee8a94;
          if (*(uint *)(param_1 + 8) <= *(uint *)(p_Var5 + 0x28)) goto LAB_00ee89a4;
          p_Var5 = *(__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                     **)(p_Var5 + 8);
        }
      }
      else {
LAB_00ee89a4:
        p_Var3 = p_Var5;
        p_Var5 = *(__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                   **)p_Var5;
      }
    }
    else {
LAB_00ee897c:
      p_Var5 = *(__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                 **)(p_Var5 + 8);
    }
    if (p_Var5 == (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                   *)0x0) {
      if (p_Var3 == p_Var4) {
        return p_Var4;
      }
      _Var2 = p_Var3[0x20];
      if (_Var2 != (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                    )0x0 && cVar1 == '\0') {
        return p_Var4;
      }
      if ((cVar1 != '\0') &&
         (_Var2 == (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                    )0x0)) {
        return p_Var3;
      }
      if ((char)param_1[0x10] < (char)p_Var3[0x30]) {
        return p_Var4;
      }
      if ((char)p_Var3[0x30] < (char)param_1[0x10]) {
        return p_Var3;
      }
      if (cVar1 != '\0') {
        if (_Var2 == (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                      )0x1) {
          if (*(uint *)(param_1 + 8) < *(uint *)(p_Var3 + 0x28)) {
            return p_Var4;
          }
          return p_Var3;
        }
LAB_00ee8a94:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","is_value32_");
      }
      if (_Var2 == (__tree<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::__map_value_compare<v8::internal::ConstantPoolKey,std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>,std::__ndk1::less<v8::internal::ConstantPoolKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::ConstantPoolKey,int>>>
                    )0x0) {
        if (*(ulong *)(param_1 + 8) < *(ulong *)(p_Var3 + 0x28)) {
          return p_Var4;
        }
        return p_Var3;
      }
LAB_00ee8aa8:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!is_value32_");
    }
    _Var2 = p_Var5[0x20];
  } while( true );
}


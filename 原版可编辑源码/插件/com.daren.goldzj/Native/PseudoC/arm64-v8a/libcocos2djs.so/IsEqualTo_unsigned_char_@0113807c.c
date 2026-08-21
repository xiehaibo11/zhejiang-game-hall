
/* bool v8::internal::String::IsEqualTo<unsigned char>(v8::internal::Vector<unsigned char const>) */

bool v8::internal::String::IsEqualTo<unsigned_char>
               (PerThreadAssertScopeDebugOnly *param_1,byte *param_2,int param_3)

{
  ushort *puVar1;
  bool bVar2;
  int iVar3;
  ushort *__s1;
  undefined1 auVar4 [16];
  
  iVar3 = *(int *)(*(long *)param_1 + 7);
  if (iVar3 == param_3) {
    auVar4 = GetFlatContent(param_1);
    __s1 = auVar4._0_8_;
    if (auVar4._8_8_ >> 0x20 == 1) {
      iVar3 = memcmp(__s1,param_2,(long)iVar3);
    }
    else {
      if (0 < iVar3) {
        puVar1 = __s1 + iVar3;
        do {
          iVar3 = (uint)*__s1 - (uint)*param_2;
          if (iVar3 != 0) goto LAB_01138100;
          __s1 = __s1 + 1;
          param_2 = param_2 + 1;
        } while (__s1 < puVar1);
      }
      iVar3 = 0;
    }
LAB_01138100:
    bVar2 = iVar3 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


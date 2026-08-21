
/* v8::internal::String::HasOneBytePrefix(v8::internal::Vector<char const>) */

bool v8::internal::String::HasOneBytePrefix
               (PerThreadAssertScopeDebugOnly *param_1,byte *param_2,uint param_3)

{
  ushort *puVar1;
  bool bVar2;
  int iVar3;
  ushort *__s1;
  undefined1 auVar4 [16];
  
  if (*(int *)(*(long *)param_1 + 7) < (int)param_3) {
    bVar2 = false;
  }
  else {
    auVar4 = GetFlatContent(param_1);
    __s1 = auVar4._0_8_;
    if (auVar4._8_8_ >> 0x20 == 1) {
      iVar3 = memcmp(__s1,param_2,(long)(int)param_3);
    }
    else {
      if (0 < (long)((ulong)param_3 << 0x20)) {
        puVar1 = (ushort *)((long)__s1 + ((long)((ulong)param_3 << 0x20) >> 0x1f));
        do {
          iVar3 = (uint)*__s1 - (uint)*param_2;
          if (iVar3 != 0) goto LAB_011383b0;
          __s1 = __s1 + 1;
          param_2 = param_2 + 1;
        } while (__s1 < puVar1);
      }
      iVar3 = 0;
    }
LAB_011383b0:
    bVar2 = iVar3 == 0;
  }
  return bVar2;
}


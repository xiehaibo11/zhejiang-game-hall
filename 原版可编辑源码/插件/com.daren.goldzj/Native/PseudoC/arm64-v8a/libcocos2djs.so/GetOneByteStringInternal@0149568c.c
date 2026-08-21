
/* v8::internal::AstValueFactory::GetOneByteStringInternal(v8::internal::Vector<unsigned char
   const>) */

void v8::internal::AstValueFactory::GetOneByteStringInternal
               (long param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  if (((int)param_3 == 1) && (-1 < (char)*param_2)) {
    plVar3 = (long *)(param_1 + (ulong)*param_2 * 8 + 0x48);
    if (*plVar3 == 0) {
      uVar1 = StringHasher::HashSequentialString<unsigned_char>
                        (param_2,1,*(ulong *)(param_1 + 0x450));
      lVar2 = GetString(param_1,uVar1,1,param_2,param_3);
      *plVar3 = lVar2;
    }
    return;
  }
  uVar1 = StringHasher::HashSequentialString<unsigned_char>
                    (param_2,(int)param_3,*(ulong *)(param_1 + 0x450));
  GetString(param_1,uVar1,1,param_2,param_3);
  return;
}


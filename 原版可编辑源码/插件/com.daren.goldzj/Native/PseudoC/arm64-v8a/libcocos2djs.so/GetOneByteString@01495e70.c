
/* v8::internal::AstValueFactory::GetOneByteString(v8::internal::Vector<unsigned char const>) */

void v8::internal::AstValueFactory::GetOneByteString(long param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  
  if (((int)param_3 == 1) && (bVar1 = *param_2, -1 < (char)bVar1)) {
    plVar4 = (long *)(param_1 + (ulong)bVar1 * 8 + 0x48);
    if (*plVar4 == 0) {
      uVar2 = bVar1 - 0x30;
      if (uVar2 < 10) {
        uVar2 = StringHasher::MakeArrayIndexHash(uVar2,1);
      }
      else {
        uVar2 = (*(int *)(param_1 + 0x450) + (uint)bVar1) * 0x401;
        uVar2 = (uVar2 ^ uVar2 >> 6) * 9;
        uVar2 = (uVar2 ^ uVar2 >> 0xb) * 0x8001;
        uVar2 = ((int)((uVar2 & 0x1fffffff) - 1) >> 0x1f & 0x1bU | uVar2) << 3 | 6;
      }
      lVar3 = GetString(param_1,uVar2,1,param_2,param_3);
      *plVar4 = lVar3;
    }
    return;
  }
  uVar2 = StringHasher::HashSequentialString<unsigned_char>
                    (param_2,(int)param_3,*(ulong *)(param_1 + 0x450));
  GetString(param_1,uVar2,1,param_2,param_3);
  return;
}


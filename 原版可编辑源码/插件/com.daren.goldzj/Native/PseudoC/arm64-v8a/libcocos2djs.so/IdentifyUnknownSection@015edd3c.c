
/* v8::internal::wasm::ModuleDecoder::IdentifyUnknownSection(v8::internal::wasm::Decoder*, unsigned
   char const*) */

undefined8
v8::internal::wasm::ModuleDecoder::IdentifyUnknownSection(Decoder *param_1,uchar *param_2)

{
  char *__s1;
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_015ede44(param_1,1,"section name");
  if (((byte)param_1[0x30] & 1) == 0) {
    if ((byte)param_1[0x30] >> 1 != 0) {
      return 0;
    }
  }
  else if (*(long *)(param_1 + 0x38) != 0) {
    return 0;
  }
  if (*(uchar **)(param_1 + 0x10) <= param_2) {
    iVar1 = (int)((ulong)uVar2 >> 0x20);
    __s1 = (char *)(*(long *)(param_1 + 8) + (ulong)(uint)((int)uVar2 - *(int *)(param_1 + 0x20)));
    if (iVar1 == 0x10) {
      iVar1 = strncmp(__s1,"sourceMappingURL",0x10);
      if (iVar1 == 0) {
        return 0xf;
      }
      iVar1 = strncmp(__s1,"compilationHints",0x10);
      if (iVar1 == 0) {
        return 0x11;
      }
    }
    else if (iVar1 == 0xb) {
      iVar1 = strncmp(__s1,".debug_info",0xb);
      if (iVar1 == 0) {
        return 0x10;
      }
    }
    else if ((iVar1 == 4) && (iVar1 = strncmp(__s1,"name",4), iVar1 == 0)) {
      return 0xe;
    }
  }
  return 0;
}


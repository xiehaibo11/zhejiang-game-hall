
/* int v8::internal::FindFirstCharacter<unsigned char, unsigned char>(v8::internal::Vector<unsigned
   char const>, v8::internal::Vector<unsigned char const>, int) */

int v8::internal::FindFirstCharacter<unsigned_char,unsigned_char>
              (byte *param_1,int param_2,long param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  
  bVar1 = *param_1;
  while( true ) {
    pvVar3 = memchr((void *)(param_3 + param_5),(uint)bVar1,
                    (long)(((param_4 - param_2) + 1) - param_5));
    if (pvVar3 == (void *)0x0) {
      return -1;
    }
    iVar2 = (int)pvVar3 - (int)param_3;
    if (*(byte *)(param_3 + iVar2) == bVar1) break;
    param_5 = iVar2 + 1;
    if (param_4 - param_2 <= iVar2) {
      return -1;
    }
  }
  return iVar2;
}


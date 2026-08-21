
/* int v8::internal::FindFirstCharacter<unsigned char, unsigned short>(v8::internal::Vector<unsigned
   char const>, v8::internal::Vector<unsigned short const>, int) */

int v8::internal::FindFirstCharacter<unsigned_char,unsigned_short>
              (byte *param_1,int param_2,long param_3,int param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ulong uVar5;
  
  bVar1 = *param_1;
  while( true ) {
    uVar2 = ((param_4 - param_2) + 1) - param_5;
    pvVar4 = memchr((void *)(param_3 + (long)param_5 * 2),(uint)bVar1,
                    -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1);
    if (pvVar4 == (void *)0x0) {
      return -1;
    }
    uVar5 = ((ulong)pvVar4 & 0xfffffffffffffffe) - param_3;
    iVar3 = (int)(uVar5 >> 1);
    if (*(ushort *)(param_3 + ((long)(uVar5 * 0x80000000) >> 0x1f)) == (ushort)bVar1) break;
    param_5 = iVar3 + 1;
    if (param_4 - param_2 <= iVar3) {
      return -1;
    }
  }
  return iVar3;
}


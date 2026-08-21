
/* v8::internal::BoyerMooreLookahead::GetSkipTable(int, int,
   v8::internal::Handle<v8::internal::ByteArray>) */

int __thiscall
v8::internal::BoyerMooreLookahead::GetSkipTable
          (BoyerMooreLookahead *this,int param_1,int param_2,long *param_4)

{
  bool bVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong local_70 [2];
  ulong local_60;
  ulong local_58;
  
  memset((void *)(*param_4 + 7),0,(long)((ulong)*(uint *)(*param_4 + 3) << 0x20) >> 0x21);
  if (param_2 < param_1) {
LAB_015417d4:
    return (param_2 - param_1) + 1;
  }
  lVar6 = (long)param_2;
LAB_0154173c:
  puVar2 = *(ulong **)(**(long **)(this + 0x18) + lVar6 * 8);
  local_70[0] = *puVar2;
  local_70[1] = puVar2[1];
  if (local_70[0] == 0) goto LAB_0154178c;
  do {
    uVar3 = (local_70[0] & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_70[0] & 0x5555555555555555) << 1;
    uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
    uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
    uVar3 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20);
    *(undefined1 *)(uVar3 + *param_4 + 7) = 1;
    while( true ) {
      uVar4 = uVar3 >> 3 & 0x18;
      *(ulong *)((long)local_70 + uVar4) =
           *(ulong *)((long)local_70 + uVar4) & (1L << (uVar3 & 0x3f) ^ 0xffffffffffffffffU);
      if (local_70[0] != 0) break;
LAB_0154178c:
      local_60 = 0;
      local_58 = local_70[1];
      std::__ndk1::bitset<128ul>::operator>>=((bitset<128ul> *)&local_60,0x40);
      if (local_58 != 0) goto LAB_015417d0;
      if (local_60 == 0) {
        bVar1 = param_1 < lVar6;
        lVar6 = lVar6 + -1;
        if (bVar1) goto LAB_0154173c;
        goto LAB_015417d4;
      }
      uVar3 = (local_60 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_60 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      lVar5 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20);
      uVar3 = lVar5 + 0x40;
      *(undefined1 *)(lVar5 + *param_4 + 0x47) = 1;
      if (0x7f < uVar3) {
LAB_015417d0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
  } while( true );
}


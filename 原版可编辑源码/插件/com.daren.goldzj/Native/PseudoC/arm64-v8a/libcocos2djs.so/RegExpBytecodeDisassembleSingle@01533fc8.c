
/* v8::internal::RegExpBytecodeDisassembleSingle(unsigned char const*, unsigned char const*) */

void v8::internal::RegExpBytecodeDisassembleSingle(uchar *param_1,uchar *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  
  PrintF("%s",(&PTR_s_BREAK_01cc81b0)[*param_2]);
  lVar4 = 0;
  do {
    PrintF(", %02x",(ulong)param_2[lVar4]);
    lVar4 = lVar4 + 1;
  } while (lVar4 < *(int *)(&DAT_01a4af9c + (ulong)*param_2 * 4));
  PrintF(" ");
  lVar4 = 1;
  do {
    bVar1 = param_2[lVar4];
    iVar2 = isprint((uint)bVar1);
    uVar3 = 0x2e;
    if (iVar2 != 0) {
      uVar3 = (uint)bVar1;
    }
    PrintF("%c",(ulong)uVar3);
    lVar4 = lVar4 + 1;
  } while (lVar4 < *(int *)(&DAT_01a4af9c + (ulong)*param_2 * 4));
  PrintF("\n");
  return;
}



char * ASN1_tag2str(int tag)

{
  uint uVar1;
  
  uVar1 = tag & 0xfffffeff;
  if ((tag | 8U) != 0x10a) {
    uVar1 = tag;
  }
  if (0x1e < uVar1) {
    return "(unknown)";
  }
  return (&PTR_DAT_01c73490)[(int)uVar1];
}


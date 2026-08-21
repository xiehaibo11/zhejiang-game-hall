
void _spVertexAttachment_init(long param_1)

{
  uint uVar1;
  
  uVar1 = DAT_017875e0 & 0xffff;
  DAT_017875e0 = DAT_017875e0 + 1;
  *(uint *)(param_1 + 0x44) = uVar1 << 0xb;
  return;
}


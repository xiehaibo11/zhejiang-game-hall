
void WHIRLPOOL_BitUpdate(WHIRLPOOL_CTX *c,void *inp,size_t bits)

{
  size_t sVar1;
  uchar *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  
  uVar10 = c->bitoff;
  uVar9 = c->bitlen[0];
  uVar3 = -(int)bits & 7;
  uVar4 = uVar10 & 7;
  c->bitlen[0] = uVar9 + bits;
  if (((CARRY8(uVar9,bits)) && (sVar1 = c->bitlen[1] + 1, c->bitlen[1] = sVar1, sVar1 == 0)) &&
     (sVar1 = c->bitlen[2] + 1, c->bitlen[2] = sVar1, sVar1 == 0)) {
    c->bitlen[3] = c->bitlen[3] + 1;
    if (uVar3 == 0 && uVar4 == 0) goto LAB_00be5a34;
  }
  else if (uVar3 == 0 && uVar4 == 0) goto LAB_00be5a34;
  if (bits == 0) {
    return;
  }
  puVar2 = c->data;
  uVar6 = 8 - uVar4;
  if (uVar4 != uVar3) {
    do {
      uVar8 = uVar10 >> 3;
      uVar5 = (uint)*(byte *)inp << (ulong)uVar3;
      if (bits < 8) {
        if (uVar4 == 0) {
          c->data[uVar8] = (byte)uVar5;
        }
        else {
          c->data[uVar8] = (byte)((uVar5 & 0xff) >> (ulong)uVar4) | c->data[uVar8];
        }
        uVar10 = (int)bits + uVar10;
        if (uVar10 == 0x200) {
          whirlpool_block(c,puVar2,1);
          uVar10 = 0;
          uVar8 = 0;
        }
        else {
          uVar8 = uVar8 + 1;
        }
        if (uVar4 != 0) {
          c->data[uVar8] = (uchar)((uVar5 & 0xff) << (ulong)(uVar6 & 0x1f));
        }
        c->bitoff = uVar10;
        return;
      }
      bVar7 = *(byte *)((long)inp + 1) >> (ulong)(8 - uVar3 & 0x1f);
      if (uVar4 == 0) {
        c->data[uVar8] = bVar7 | (byte)uVar5;
      }
      else {
        c->data[uVar8] = (byte)(((uint)bVar7 | uVar5 & 0xff) >> (ulong)uVar4) | c->data[uVar8];
      }
      uVar10 = uVar10 + 8;
      if (uVar10 < 0x200) {
        uVar8 = uVar8 + 1;
      }
      else {
        whirlpool_block(c,puVar2,1);
        uVar8 = 0;
        uVar10 = uVar10 & 0x1ff;
      }
      if (uVar4 != 0) {
        c->data[uVar8] = (uchar)(((uint)bVar7 | uVar5 & 0xff) << (ulong)(uVar6 & 0x1f));
      }
      bits = bits - 8;
      c->bitoff = uVar10;
      inp = (byte *)((long)inp + 1);
    } while (bits != 0);
    return;
  }
  uVar3 = uVar10 >> 3;
  uVar10 = uVar10 + uVar6;
  bits = bits - uVar6;
  c->data[uVar3] = (byte)(0xff >> (ulong)uVar4) & *(byte *)inp | c->data[uVar3];
  if (uVar10 == 0x200) {
    whirlpool_block(c,puVar2,1);
    uVar10 = 0;
  }
  c->bitoff = uVar10;
  inp = (void *)((long)inp + 1);
LAB_00be5a34:
  if (bits != 0) {
    do {
      while ((uVar10 != 0 || (bits >> 9 == 0))) {
        uVar3 = 0x200 - uVar10;
        if (bits < uVar3) {
          memcpy(c->data + (uVar10 >> 3),inp,bits >> 3);
          uVar10 = uVar10 + (int)bits;
          bits = 0;
        }
        else {
          memcpy(c->data + (uVar10 >> 3),inp,(ulong)(uVar3 >> 3));
          inp = (void *)((long)inp + (ulong)(uVar3 >> 3));
          whirlpool_block(c,c->data,1);
          uVar10 = 0;
          bits = bits - uVar3;
        }
        c->bitoff = uVar10;
        if (bits == 0) {
          return;
        }
      }
      whirlpool_block(c,inp);
      uVar9 = bits >> 3;
      uVar10 = 0;
      bits = bits & 0x1ff;
      inp = (void *)((long)inp + (uVar9 & 0x1fffffffffffffc0));
    } while (bits != 0);
  }
  return;
}


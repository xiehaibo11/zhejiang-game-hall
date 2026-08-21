
void EVP_PKEY_asn1_copy(EVP_PKEY_ASN1_METHOD *dst,EVP_PKEY_ASN1_METHOD *src)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(src + 0x20);
  *(undefined8 *)(dst + 0x28) = *(undefined8 *)(src + 0x28);
  *(undefined8 *)(dst + 0x20) = uVar1;
  uVar1 = *(undefined8 *)(src + 0x30);
  *(undefined8 *)(dst + 0x38) = *(undefined8 *)(src + 0x38);
  *(undefined8 *)(dst + 0x30) = uVar1;
  uVar1 = *(undefined8 *)(src + 0x40);
  *(undefined8 *)(dst + 0x48) = *(undefined8 *)(src + 0x48);
  *(undefined8 *)(dst + 0x40) = uVar1;
  uVar1 = *(undefined8 *)(src + 0xb8);
  *(undefined8 *)(dst + 0xc0) = *(undefined8 *)(src + 0xc0);
  *(undefined8 *)(dst + 0xb8) = uVar1;
  uVar1 = *(undefined8 *)(src + 0x50);
  *(undefined8 *)(dst + 0x58) = *(undefined8 *)(src + 0x58);
  *(undefined8 *)(dst + 0x50) = uVar1;
  *(undefined8 *)(dst + 0x60) = *(undefined8 *)(src + 0x60);
  uVar1 = *(undefined8 *)(src + 0x70);
  *(undefined8 *)(dst + 0x78) = *(undefined8 *)(src + 0x78);
  *(undefined8 *)(dst + 0x70) = uVar1;
  uVar1 = *(undefined8 *)(src + 0x80);
  *(undefined8 *)(dst + 0x88) = *(undefined8 *)(src + 0x88);
  *(undefined8 *)(dst + 0x80) = uVar1;
                    /* try { // try from 00aebc48 to 00bebc57 has its CatchHandler @ 00aebeac */
  *(undefined8 *)(dst + 0x90) = *(undefined8 *)(src + 0x90);
  *(undefined8 *)(dst + 0x98) = *(undefined8 *)(src + 0x98);
  uVar1 = *(undefined8 *)(src + 0xa8);
                    /* try { // try from 00aebc58 to 00bebcb3 has its CatchHandler @ 00aebaec */
  *(undefined8 *)(dst + 0xb0) = *(undefined8 *)(src + 0xb0);
  *(undefined8 *)(dst + 0xa8) = uVar1;
  uVar1 = *(undefined8 *)(src + 200);
  *(undefined8 *)(dst + 0xd0) = *(undefined8 *)(src + 0xd0);
  *(undefined8 *)(dst + 200) = uVar1;
  return;
}


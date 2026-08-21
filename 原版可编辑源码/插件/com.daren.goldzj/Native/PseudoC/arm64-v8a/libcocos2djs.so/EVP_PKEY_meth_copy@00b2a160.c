
void EVP_PKEY_meth_copy(EVP_PKEY_METHOD *dst,EVP_PKEY_METHOD *src)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(src + 8);
  *(undefined8 *)(dst + 0x10) = *(undefined8 *)(src + 0x10);
  *(undefined8 *)(dst + 8) = uVar1;
  uVar1 = *(undefined8 *)(src + 0x18);
  *(undefined8 *)(dst + 0x20) = *(undefined8 *)(src + 0x20);
  *(undefined8 *)(dst + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(src + 0x28);
  *(undefined8 *)(dst + 0x30) = *(undefined8 *)(src + 0x30);
  *(undefined8 *)(dst + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(src + 0x38);
  *(undefined8 *)(dst + 0x40) = *(undefined8 *)(src + 0x40);
  *(undefined8 *)(dst + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(src + 0x48);
  *(undefined8 *)(dst + 0x50) = *(undefined8 *)(src + 0x50);
  *(undefined8 *)(dst + 0x48) = uVar1;
  uVar1 = *(undefined8 *)(src + 0x58);
  *(undefined8 *)(dst + 0x60) = *(undefined8 *)(src + 0x60);
  *(undefined8 *)(dst + 0x58) = uVar1;
  uVar1 = *(undefined8 *)(src + 0x68);
  *(undefined8 *)(dst + 0x70) = *(undefined8 *)(src + 0x70);
  *(undefined8 *)(dst + 0x68) = uVar1;
  uVar1 = *(undefined8 *)(src + 0x78);
  *(undefined8 *)(dst + 0x80) = *(undefined8 *)(src + 0x80);
  *(undefined8 *)(dst + 0x78) = uVar1;
  uVar1 = *(undefined8 *)(src + 0x88);
  *(undefined8 *)(dst + 0x90) = *(undefined8 *)(src + 0x90);
  *(undefined8 *)(dst + 0x88) = uVar1;
  uVar1 = *(undefined8 *)(src + 0x98);
  *(undefined8 *)(dst + 0xa0) = *(undefined8 *)(src + 0xa0);
  *(undefined8 *)(dst + 0x98) = uVar1;
  uVar1 = *(undefined8 *)(src + 0xa8);
  *(undefined8 *)(dst + 0xb0) = *(undefined8 *)(src + 0xb0);
  *(undefined8 *)(dst + 0xa8) = uVar1;
  uVar1 = *(undefined8 *)(src + 0xb8);
  *(undefined8 *)(dst + 0xc0) = *(undefined8 *)(src + 0xc0);
  *(undefined8 *)(dst + 0xb8) = uVar1;
  *(undefined8 *)(dst + 200) = *(undefined8 *)(src + 200);
  return;
}


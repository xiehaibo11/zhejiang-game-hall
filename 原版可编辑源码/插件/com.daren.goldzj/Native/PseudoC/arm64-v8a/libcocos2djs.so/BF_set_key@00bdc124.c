
void BF_set_key(BF_KEY *key,int len,uchar *data)

{
  bool bVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar *puVar4;
  uchar *puVar5;
  long lVar6;
  uint uVar7;
  uchar *puVar8;
  uint local_28 [2];
  
  memcpy(key,&DAT_018d3580,0x1048);
  if (0x47 < len) {
    len = 0x48;
  }
  lVar6 = 0;
  puVar2 = data + len;
  uVar7 = 0x243f6a88;
  puVar8 = data;
  while( true ) {
    puVar3 = puVar8 + 1;
    if (puVar2 <= puVar8 + 1) {
      puVar3 = data;
    }
    puVar4 = puVar3 + 1;
    if (puVar2 <= puVar3 + 1) {
      puVar4 = data;
    }
    puVar5 = puVar4 + 1;
    if (puVar2 <= puVar4 + 1) {
      puVar5 = data;
    }
    *(uint *)((long)key->P + lVar6) =
         CONCAT31(CONCAT21(CONCAT11(*puVar8,*puVar3),*puVar4),*puVar5) ^ uVar7;
    if (lVar6 == 0x44) break;
    uVar7 = *(uint *)((long)key->P + lVar6 + 4);
    puVar8 = puVar5 + 1;
    if (puVar2 <= puVar5 + 1) {
      puVar8 = data;
    }
    lVar6 = lVar6 + 4;
  }
  local_28[0] = 0;
  local_28[1] = 0;
  BF_encrypt(local_28,key);
  key->P[0] = local_28[0];
  key->P[1] = local_28[1];
  BF_encrypt(local_28,key);
  key->P[2] = local_28[0];
  key->P[3] = local_28[1];
  BF_encrypt(local_28,key);
  key->P[4] = local_28[0];
  key->P[5] = local_28[1];
  BF_encrypt(local_28,key);
  key->P[6] = local_28[0];
  key->P[7] = local_28[1];
  BF_encrypt(local_28,key);
  key->P[8] = local_28[0];
  key->P[9] = local_28[1];
  BF_encrypt(local_28,key);
  key->P[10] = local_28[0];
  key->P[0xb] = local_28[1];
  BF_encrypt(local_28,key);
  key->P[0xc] = local_28[0];
  key->P[0xd] = local_28[1];
  BF_encrypt(local_28,key);
  key->P[0xe] = local_28[0];
  key->P[0xf] = local_28[1];
  BF_encrypt(local_28,key);
  key->P[0x10] = local_28[0];
  key->P[0x11] = local_28[1];
  lVar6 = 0;
  do {
    BF_encrypt(local_28,key);
    key->S[lVar6] = local_28[0];
    key->S[lVar6 + 1] = local_28[1];
    bVar1 = lVar6 < 0x3fe;
    lVar6 = lVar6 + 2;
  } while (bVar1);
  return;
}


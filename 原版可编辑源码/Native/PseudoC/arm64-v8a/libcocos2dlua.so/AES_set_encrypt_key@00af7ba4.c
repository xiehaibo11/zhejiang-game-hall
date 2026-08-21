
int AES_set_encrypt_key(uchar *userKey,int bits,AES_KEY *key)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  
  iVar7 = -1;
  if ((userKey != (uchar *)0x0) && (key != (AES_KEY *)0x0)) {
    if ((bits != 0x80) && ((bits != 0x100 && (bits != 0xc0)))) {
      return -2;
    }
    iVar7 = 0xc;
    if (bits != 0xc0) {
      iVar7 = 0xe;
    }
    iVar1 = 10;
    if (bits != 0x80) {
      iVar1 = iVar7;
    }
    key->rounds = iVar1;
    uVar6 = (*(uint *)userKey & 0xff00ff00) >> 8 | (*(uint *)userKey & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    key->rd_key[0] = uVar6;
    uVar5 = (*(uint *)(userKey + 4) & 0xff00ff00) >> 8 | (*(uint *)(userKey + 4) & 0xff00ff) << 8;
    key->rd_key[1] = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar5 = (*(uint *)(userKey + 8) & 0xff00ff00) >> 8 | (*(uint *)(userKey + 8) & 0xff00ff) << 8;
    key->rd_key[2] = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar5 = (*(uint *)(userKey + 0xc) & 0xff00ff00) >> 8 |
            (*(uint *)(userKey + 0xc) & 0xff00ff) << 8;
    key->rd_key[3] = uVar5 >> 0x10 | uVar5 << 0x10;
    if (bits != 0x80) {
      uVar5 = (*(uint *)(userKey + 0x10) & 0xff00ff00) >> 8 |
              (*(uint *)(userKey + 0x10) & 0xff00ff) << 8;
      key->rd_key[4] = uVar5 >> 0x10 | uVar5 << 0x10;
      uVar5 = (*(uint *)(userKey + 0x14) & 0xff00ff00) >> 8 |
              (*(uint *)(userKey + 0x14) & 0xff00ff) << 8;
      key->rd_key[5] = uVar5 >> 0x10 | uVar5 << 0x10;
      if (bits == 0xc0) {
        lVar8 = 0;
        while( true ) {
          uVar4 = key->rd_key[5];
          uVar6 = *(uint *)(&DAT_013d6db0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) & 0xff000000 ^ uVar6
                  ^ *(uint *)(&DAT_013d71b0 + (ulong)(uVar4 >> 8 & 0xff) * 4) & 0xff0000 ^
                  *(uint *)(&DAT_013d75b0 + ((ulong)uVar4 & 0xff) * 4) & 0xff00 ^
                  (uint)(byte)(&DAT_013d79b0)[(ulong)(uVar4 >> 0x18) * 4] ^
                  *(uint *)((long)&DAT_013d7db0 + lVar8);
          uVar5 = key->rd_key[3];
          uVar2 = key->rd_key[1] ^ uVar6;
          uVar3 = key->rd_key[2] ^ uVar2;
          ((AES_KEY *)(key->rd_key + 6))->rd_key[0] = uVar6;
          key->rd_key[7] = uVar2;
          uVar5 = uVar5 ^ uVar3;
          key->rd_key[8] = uVar3;
          key->rd_key[9] = uVar5;
          if (lVar8 == 0x1c) break;
          lVar8 = lVar8 + 4;
          uVar5 = key->rd_key[4] ^ uVar5;
          key->rd_key[10] = uVar5;
          key->rd_key[0xb] = uVar4 ^ uVar5;
          key = (AES_KEY *)(key->rd_key + 6);
        }
      }
      else {
        uVar5 = (*(uint *)(userKey + 0x18) & 0xff00ff00) >> 8 |
                (*(uint *)(userKey + 0x18) & 0xff00ff) << 8;
        key->rd_key[6] = uVar5 >> 0x10 | uVar5 << 0x10;
        uVar5 = (*(uint *)(userKey + 0x1c) & 0xff00ff00) >> 8 |
                (*(uint *)(userKey + 0x1c) & 0xff00ff) << 8;
        key->rd_key[7] = uVar5 >> 0x10 | uVar5 << 0x10;
        if (bits == 0x100) {
          lVar8 = 0;
          while( true ) {
            uVar4 = key->rd_key[7];
            uVar6 = *(uint *)(&DAT_013d6db0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) & 0xff000000 ^
                    uVar6 ^ *(uint *)(&DAT_013d71b0 + (ulong)(uVar4 >> 8 & 0xff) * 4) & 0xff0000 ^
                    *(uint *)(&DAT_013d75b0 + ((ulong)uVar4 & 0xff) * 4) & 0xff00 ^
                    (uint)(byte)(&DAT_013d79b0)[(ulong)(uVar4 >> 0x18) * 4] ^
                    *(uint *)((long)&DAT_013d7db0 + lVar8);
            uVar3 = key->rd_key[3];
            uVar5 = key->rd_key[1] ^ uVar6;
            uVar2 = key->rd_key[2] ^ uVar5;
            ((AES_KEY *)(key->rd_key + 8))->rd_key[0] = uVar6;
            key->rd_key[9] = uVar5;
            uVar3 = uVar3 ^ uVar2;
            key->rd_key[10] = uVar2;
            key->rd_key[0xb] = uVar3;
            if (lVar8 == 0x18) break;
            uVar5 = *(uint *)(&DAT_013d6db0 + (ulong)(uVar3 >> 0x18) * 4) & 0xff000000 ^
                    key->rd_key[4] ^
                    *(uint *)(&DAT_013d71b0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) & 0xff0000 ^
                    *(uint *)(&DAT_013d75b0 + (ulong)(uVar3 >> 8 & 0xff) * 4) & 0xff00 ^
                    (uint)(byte)(&DAT_013d79b0)[(ulong)(uVar3 & 0xff) * 4];
            uVar2 = key->rd_key[5] ^ uVar5;
            key->rd_key[0xc] = uVar5;
            key->rd_key[0xd] = uVar2;
            lVar8 = lVar8 + 4;
            uVar2 = key->rd_key[6] ^ uVar2;
            key->rd_key[0xe] = uVar2;
            key->rd_key[0xf] = uVar4 ^ uVar2;
            key = (AES_KEY *)(key->rd_key + 8);
          }
        }
      }
    }
    else {
      lVar8 = 0;
      do {
        uVar3 = key->rd_key[3];
        uVar6 = *(uint *)(&DAT_013d6db0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) & 0xff000000 ^ uVar6 ^
                *(uint *)(&DAT_013d71b0 + (ulong)(uVar3 >> 8 & 0xff) * 4) & 0xff0000 ^
                *(uint *)(&DAT_013d75b0 + ((ulong)uVar3 & 0xff) * 4) & 0xff00 ^
                (uint)(byte)(&DAT_013d79b0)[(ulong)(uVar3 >> 0x18) * 4] ^
                *(uint *)((long)&DAT_013d7db0 + lVar8);
        uVar2 = key->rd_key[2];
        lVar8 = lVar8 + 4;
        uVar5 = key->rd_key[1] ^ uVar6;
        ((AES_KEY *)(key->rd_key + 4))->rd_key[0] = uVar6;
        key->rd_key[5] = uVar5;
        uVar2 = uVar2 ^ uVar5;
        key->rd_key[6] = uVar2;
        key->rd_key[7] = uVar3 ^ uVar2;
        key = (AES_KEY *)(key->rd_key + 4);
      } while (lVar8 != 0x28);
    }
    iVar7 = 0;
  }
  return iVar7;
}



void CAST_encrypt(uint *data,CAST_KEY *key)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = key->data[0] + data[1];
  uVar2 = -key->data[1] & 0x1f;
  uVar2 = uVar1 >> uVar2 | uVar1 << 0x20 - uVar2;
  uVar1 = -key->data[3] & 0x1f;
  uVar3 = ((*(uint *)(CAST_S_table1 + (ulong)(uVar2 & 0xff) * 4) ^
           *(uint *)(CAST_S_table0 + (ulong)(uVar2 >> 8 & 0xff) * 4)) -
          *(int *)(CAST_S_table2 + (ulong)(uVar2 >> 0x18) * 4)) +
          *(int *)(CAST_S_table3 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^ *data;
  uVar2 = key->data[2] ^ uVar3;
  uVar2 = uVar2 >> uVar1 | uVar2 << 0x20 - uVar1;
  uVar1 = -key->data[5] & 0x1f;
  uVar4 = (*(int *)(CAST_S_table0 + (ulong)(uVar2 >> 8 & 0xff) * 4) -
          *(int *)(CAST_S_table1 + (ulong)(uVar2 & 0xff) * 4)) +
          *(int *)(CAST_S_table2 + (ulong)(uVar2 >> 0x18) * 4) ^
          *(uint *)(CAST_S_table3 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^ data[1];
  uVar2 = key->data[4] - uVar4;
  uVar1 = uVar2 >> uVar1 | uVar2 << 0x20 - uVar1;
  uVar2 = -key->data[7] & 0x1f;
  uVar3 = (*(int *)(CAST_S_table1 + (ulong)(uVar1 & 0xff) * 4) +
           *(int *)(CAST_S_table0 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
          *(uint *)(CAST_S_table2 + (ulong)(uVar1 >> 0x18) * 4)) -
          *(int *)(CAST_S_table3 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^ uVar3;
  uVar1 = key->data[6] + uVar3;
  uVar2 = uVar1 >> uVar2 | uVar1 << 0x20 - uVar2;
  uVar1 = -key->data[9] & 0x1f;
  uVar4 = ((*(uint *)(CAST_S_table1 + (ulong)(uVar2 & 0xff) * 4) ^
           *(uint *)(CAST_S_table0 + (ulong)(uVar2 >> 8 & 0xff) * 4)) -
          *(int *)(CAST_S_table2 + (ulong)(uVar2 >> 0x18) * 4)) +
          *(int *)(CAST_S_table3 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^ uVar4;
  uVar2 = key->data[8] ^ uVar4;
  uVar2 = uVar2 >> uVar1 | uVar2 << 0x20 - uVar1;
  uVar1 = -key->data[0xb] & 0x1f;
  uVar3 = uVar3 ^ *(uint *)(CAST_S_table3 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          (*(int *)(CAST_S_table0 + (ulong)(uVar2 >> 8 & 0xff) * 4) -
          *(int *)(CAST_S_table1 + (ulong)(uVar2 & 0xff) * 4)) +
          *(int *)(CAST_S_table2 + (ulong)(uVar2 >> 0x18) * 4);
  uVar2 = key->data[10] - uVar3;
  uVar1 = uVar2 >> uVar1 | uVar2 << 0x20 - uVar1;
  uVar2 = -key->data[0xd] & 0x1f;
  uVar4 = (*(int *)(CAST_S_table1 + (ulong)(uVar1 & 0xff) * 4) +
           *(int *)(CAST_S_table0 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
          *(uint *)(CAST_S_table2 + (ulong)(uVar1 >> 0x18) * 4)) -
          *(int *)(CAST_S_table3 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^ uVar4;
  uVar1 = key->data[0xc] + uVar4;
  uVar2 = uVar1 >> uVar2 | uVar1 << 0x20 - uVar2;
  uVar1 = -key->data[0xf] & 0x1f;
  uVar3 = ((*(uint *)(CAST_S_table1 + (ulong)(uVar2 & 0xff) * 4) ^
           *(uint *)(CAST_S_table0 + (ulong)(uVar2 >> 8 & 0xff) * 4)) -
          *(int *)(CAST_S_table2 + (ulong)(uVar2 >> 0x18) * 4)) +
          *(int *)(CAST_S_table3 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^ uVar3;
  uVar2 = key->data[0xe] ^ uVar3;
  uVar2 = uVar2 >> uVar1 | uVar2 << 0x20 - uVar1;
  uVar1 = -key->data[0x11] & 0x1f;
  uVar4 = uVar4 ^ *(uint *)(CAST_S_table3 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          (*(int *)(CAST_S_table0 + (ulong)(uVar2 >> 8 & 0xff) * 4) -
          *(int *)(CAST_S_table1 + (ulong)(uVar2 & 0xff) * 4)) +
          *(int *)(CAST_S_table2 + (ulong)(uVar2 >> 0x18) * 4);
  uVar2 = key->data[0x10] - uVar4;
  uVar1 = uVar2 >> uVar1 | uVar2 << 0x20 - uVar1;
  uVar2 = -key->data[0x13] & 0x1f;
  uVar3 = (*(int *)(CAST_S_table1 + (ulong)(uVar1 & 0xff) * 4) +
           *(int *)(CAST_S_table0 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
          *(uint *)(CAST_S_table2 + (ulong)(uVar1 >> 0x18) * 4)) -
          *(int *)(CAST_S_table3 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^ uVar3;
  uVar1 = key->data[0x12] + uVar3;
  uVar2 = uVar1 >> uVar2 | uVar1 << 0x20 - uVar2;
  uVar1 = -key->data[0x15] & 0x1f;
  uVar4 = ((*(uint *)(CAST_S_table1 + (ulong)(uVar2 & 0xff) * 4) ^
           *(uint *)(CAST_S_table0 + (ulong)(uVar2 >> 8 & 0xff) * 4)) -
          *(int *)(CAST_S_table2 + (ulong)(uVar2 >> 0x18) * 4)) +
          *(int *)(CAST_S_table3 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^ uVar4;
  uVar2 = key->data[0x14] ^ uVar4;
  uVar2 = uVar2 >> uVar1 | uVar2 << 0x20 - uVar1;
  uVar1 = -key->data[0x17] & 0x1f;
  uVar3 = uVar3 ^ *(uint *)(CAST_S_table3 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          (*(int *)(CAST_S_table0 + (ulong)(uVar2 >> 8 & 0xff) * 4) -
          *(int *)(CAST_S_table1 + (ulong)(uVar2 & 0xff) * 4)) +
          *(int *)(CAST_S_table2 + (ulong)(uVar2 >> 0x18) * 4);
  uVar2 = key->data[0x16] - uVar3;
  uVar1 = uVar2 >> uVar1 | uVar2 << 0x20 - uVar1;
  uVar4 = (*(int *)(CAST_S_table1 + (ulong)(uVar1 & 0xff) * 4) +
           *(int *)(CAST_S_table0 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
          *(uint *)(CAST_S_table2 + (ulong)(uVar1 >> 0x18) * 4)) -
          *(int *)(CAST_S_table3 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^ uVar4;
  if (key->short_key != 0) {
    *data = uVar4;
    data[1] = uVar3;
    return;
  }
  uVar1 = key->data[0x18] + uVar4;
  uVar2 = -key->data[0x19] & 0x1f;
  uVar2 = uVar1 >> uVar2 | uVar1 << 0x20 - uVar2;
  uVar1 = -key->data[0x1b] & 0x1f;
  uVar3 = ((*(uint *)(CAST_S_table1 + (ulong)(uVar2 & 0xff) * 4) ^
           *(uint *)(CAST_S_table0 + (ulong)(uVar2 >> 8 & 0xff) * 4)) -
          *(int *)(CAST_S_table2 + (ulong)(uVar2 >> 0x18) * 4)) +
          *(int *)(CAST_S_table3 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^ uVar3;
  uVar2 = key->data[0x1a] ^ uVar3;
  uVar1 = uVar2 >> uVar1 | uVar2 << 0x20 - uVar1;
  uVar4 = uVar4 ^ *(uint *)(CAST_S_table3 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          (*(int *)(CAST_S_table0 + (ulong)(uVar1 >> 8 & 0xff) * 4) -
          *(int *)(CAST_S_table1 + (ulong)(uVar1 & 0xff) * 4)) +
          *(int *)(CAST_S_table2 + (ulong)(uVar1 >> 0x18) * 4);
  uVar1 = -key->data[0x1d] & 0x1f;
  uVar2 = key->data[0x1c] - uVar4;
  uVar1 = uVar2 >> uVar1 | uVar2 << 0x20 - uVar1;
  uVar2 = -key->data[0x1f] & 0x1f;
  uVar3 = (*(int *)(CAST_S_table1 + (ulong)(uVar1 & 0xff) * 4) +
           *(int *)(CAST_S_table0 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
          *(uint *)(CAST_S_table2 + (ulong)(uVar1 >> 0x18) * 4)) -
          *(int *)(CAST_S_table3 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^ uVar3;
  uVar1 = key->data[0x1e] + uVar3;
  uVar1 = uVar1 >> uVar2 | uVar1 << 0x20 - uVar2;
  *data = ((*(uint *)(CAST_S_table1 + (ulong)(uVar1 & 0xff) * 4) ^
           *(uint *)(CAST_S_table0 + (ulong)(uVar1 >> 8 & 0xff) * 4)) -
          *(int *)(CAST_S_table2 + (ulong)(uVar1 >> 0x18) * 4)) +
          *(int *)(CAST_S_table3 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^ uVar4;
  data[1] = uVar3;
  return;
}


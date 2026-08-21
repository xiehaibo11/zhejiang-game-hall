
void DES_decrypt3(uint *data,DES_key_schedule *ks1,DES_key_schedule *ks2,DES_key_schedule *ks3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (*data ^ data[1] >> 4) & 0xf0f0f0f;
  uVar2 = data[1] ^ uVar1 << 4;
  uVar1 = uVar1 ^ *data;
  uVar3 = uVar2 & 0xffff ^ uVar1 >> 0x10;
  uVar2 = uVar3 ^ uVar2;
  uVar1 = uVar1 ^ uVar3 << 0x10;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ba615c with catch @ 00ba61c0
                        */
  uVar3 = (uVar1 ^ uVar2 >> 2) & 0x33333333;
  uVar1 = uVar3 ^ uVar1;
  uVar2 = uVar2 ^ uVar3 << 2;
  uVar3 = (uVar2 ^ uVar1 >> 8) & 0xff00ff;
  uVar2 = uVar3 ^ uVar2;
  uVar1 = uVar1 ^ uVar3 << 8;
  uVar3 = (uVar1 ^ uVar2 >> 1) & 0x55555555;
  *data = uVar3 ^ uVar1;
  data[1] = uVar2 ^ uVar3 << 1;
  DES_encrypt2(data,ks3,0);
  DES_encrypt2(data,ks2,1);
                    /* try { // try from 00ba6218 to 00ca6247 has its CatchHandler @ 00ba6218
                       catch() { ... } // from try @ 00ba6218 with catch @ 00ba6218
                       catch() { ... } // from try @ 00ba627c with catch @ 00ba6218 */
  DES_encrypt2(data,ks1,0);
  uVar1 = (*data ^ data[1] >> 1) & 0x55555555;
  uVar3 = uVar1 ^ *data;
  uVar2 = data[1] ^ uVar1 << 1;
  uVar1 = (uVar2 ^ uVar3 >> 8) & 0xff00ff;
  uVar2 = uVar1 ^ uVar2;
  uVar3 = uVar3 ^ uVar1 << 8;
  uVar1 = (uVar3 ^ uVar2 >> 2) & 0x33333333;
                    /* try { // try from 00ba6248 to 00ca6273 has its CatchHandler @ 00ba62a8 */
  uVar2 = uVar2 ^ uVar1 << 2;
  uVar1 = uVar1 ^ uVar3;
  uVar3 = uVar2 & 0xffff ^ uVar1 >> 0x10;
  uVar2 = uVar3 ^ uVar2;
  uVar1 = uVar1 ^ uVar3 << 0x10;
  uVar3 = (uVar1 ^ uVar2 >> 4) & 0xf0f0f0f;
  *data = uVar3 ^ uVar1;
  data[1] = uVar2 ^ uVar3 << 4;
                    /* try { // try from 00ba6278 to 00ca627b has its CatchHandler @ 00ba6298 */
                    /* try { // try from 00ba627c to 00ca62bb has its CatchHandler @ 00ba6218 */
  return;
}


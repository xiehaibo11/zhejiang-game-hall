
int ASN1_INTEGER_set(ASN1_INTEGER *a,long v)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar8;
  undefined1 local_18 [8];
  undefined1 *puVar7;
  
  a->type = 2;
  if (v < 0) {
    uVar5 = -v;
    if (0xff < uVar5) {
      lVar3 = 0;
      uVar8 = uVar5;
      do {
        lVar2 = lVar3;
        uVar8 = uVar8 >> 8;
                    /* try { // try from 00b8b45c to 00c8b467 has its CatchHandler @ 00b8b6d8 */
        lVar3 = lVar2 + 1;
      } while (uVar8 != 0);
                    /* try { // try from 00b8b468 to 00c8b48b has its CatchHandler @ 00b8b3a8 */
      puVar7 = local_18 + lVar2;
      do {
        puVar6 = puVar7 + -1;
        *puVar7 = (char)uVar5;
        uVar5 = uVar5 >> 8;
        puVar7 = puVar6;
      } while (local_18 <= puVar6);
      uVar4 = a->type | 0x100;
      goto LAB_00b8b4a4;
    }
                    /* try { // try from 00b8b498 to 00c8b4bb has its CatchHandler @ 00b8b3a8 */
    local_18[0] = (undefined1)uVar5;
    uVar4 = 0x102;
  }
  else {
    if (0xff < (ulong)v) {
      lVar3 = 0;
      uVar5 = v;
      do {
        lVar2 = lVar3;
        uVar5 = uVar5 >> 8;
        lVar3 = lVar2 + 1;
      } while (uVar5 != 0);
      puVar7 = local_18 + lVar2;
      do {
        puVar6 = puVar7 + -1;
        *puVar7 = (char)v;
                    /* try { // try from 00b8b42c to 00c8b437 has its CatchHandler @ 00b8b6dc */
        v = (ulong)v >> 8;
        puVar7 = puVar6;
      } while (local_18 <= puVar6);
                    /* try { // try from 00b8b438 to 00c8b45b has its CatchHandler @ 00b8b3a8 */
      uVar4 = a->type & 0xfffffeff;
      goto LAB_00b8b4a4;
    }
                    /* try { // try from 00b8b48c to 00c8b497 has its CatchHandler @ 00b8b6d4 */
    local_18[0] = (undefined1)v;
    uVar4 = 2;
  }
  lVar3 = 1;
LAB_00b8b4a4:
  a->type = uVar4;
  iVar1 = ASN1_STRING_set(a,local_18,(int)lVar3);
  return iVar1;
}


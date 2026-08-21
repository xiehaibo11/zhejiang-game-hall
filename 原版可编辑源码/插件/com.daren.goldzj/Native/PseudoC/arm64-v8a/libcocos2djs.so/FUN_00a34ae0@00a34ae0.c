
int FUN_00a34ae0(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar6 = (undefined8 *)(param_2 + 0xd8);
  uVar7 = *puVar6;
                    /* try { // try from 00a34b0c to 00b34b17 has its CatchHandler @ 00a34d1c */
  uVar1 = *(undefined4 *)(param_2 + 0xe0);
  lVar5 = (*(code *)PTR_malloc_01d1b740)(0x4000);
  if (lVar5 == 0) {
    inflateEnd(puVar6);
    *(undefined4 *)(param_2 + 0xd4) = 0;
    iVar4 = 0x1b;
  }
  else {
    bVar2 = true;
LAB_00a34b4c:
    do {
      *(long *)(param_2 + 0xf0) = lVar5;
      *(undefined4 *)(param_2 + 0xf8) = 0x4000;
      uVar3 = inflate(puVar6,2);
      if (1 < uVar3) {
        if ((bVar2) && (uVar3 == 0xfffffffd)) {
          inflateEnd(puVar6);
          iVar4 = inflateInit2_(puVar6,0xfffffff1,"1.2.8",0x70);
          if (iVar4 == 0) {
                    /* try { // try from 00a34b40 to 00b34b47 has its CatchHandler @ 00a34d30 */
            bVar2 = false;
            *(undefined8 *)(param_2 + 0xd8) = uVar7;
            *(undefined4 *)(param_2 + 0xe0) = uVar1;
            goto LAB_00a34b4c;
          }
        }
                    /* try { // try from 00a34bf0 to 00b34c33 has its CatchHandler @ 00a34d2c */
        (*(code *)PTR_free_01d1b748)(lVar5);
LAB_00a34c2c:
        if (*(long *)(param_2 + 0x108) == 0) {
                    /* try { // try from 00a34c64 to 00b34c9f has its CatchHandler @ 00a34d70 */
          FUN_00a23020(*param_1,
                       "Error while processing content unencoding: Unknown failure within decompression software."
                      );
        }
        else {
          FUN_00a23020(*param_1,"Error while processing content unencoding: %s");
        }
        inflateEnd(puVar6);
        iVar4 = 0x3d;
LAB_00a34c7c:
        *(undefined4 *)(param_2 + 0xd4) = 0;
        return iVar4;
      }
                    /* try { // try from 00a34b6c to 00b34b93 has its CatchHandler @ 00a34d2c */
      iVar4 = 0x4000 - *(int *)(param_2 + 0xf8);
      if ((iVar4 != 0) && (*(char *)(param_2 + 0x171) == '\0')) {
        iVar4 = FUN_00a23808(param_1,1,lVar5,iVar4);
        if (iVar4 != 0) {
          (*(code *)PTR_free_01d1b748)(lVar5);
          inflateEnd(puVar6);
          goto LAB_00a34c7c;
        }
      }
      if (uVar3 == 1) {
        (*(code *)PTR_free_01d1b748)(lVar5);
        iVar4 = inflateEnd(puVar6);
        if (iVar4 == 0) {
                    /* try { // try from 00a34ca0 to 00b34dc7 has its CatchHandler @ 00a3499c */
          inflateEnd(puVar6);
          iVar4 = 0;
          goto LAB_00a34c7c;
        }
        goto LAB_00a34c2c;
      }
                    /* try { // try from 00a34ba8 to 00b34beb has its CatchHandler @ 00a34d30 */
      bVar2 = false;
    } while (*(int *)(param_2 + 0xe0) != 0);
    (*(code *)PTR_free_01d1b748)(lVar5);
    iVar4 = 0;
  }
  return iVar4;
}



int FUN_00a4b4c8(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
                    /* try { // try from 00a4b4c8 to 00b4b50f has its CatchHandler @ 00a4b478 */
  puVar6 = (undefined8 *)(param_2 + 0xd8);
  uVar7 = *puVar6;
                    /* catch() { ... } // from try @ 00a4b4c4 with catch @ 00a4b4fc */
  uVar1 = *(undefined4 *)(param_2 + 0xe0);
  lVar5 = (*(code *)PTR_malloc_017699f8)(0x4000);
                    /* try { // try from 00a4b510 to 00b4b78f has its CatchHandler @ 00a4b510
                       catch() { ... } // from try @ 00a4b510 with catch @ 00a4b510
                       catch() { ... } // from try @ 00a4b810 with catch @ 00a4b510 */
  if (lVar5 == 0) {
    inflateEnd(puVar6);
    *(undefined4 *)(param_2 + 0xd4) = 0;
    iVar4 = 0x1b;
  }
  else {
    bVar2 = true;
LAB_00a4b534:
    do {
      *(long *)(param_2 + 0xf0) = lVar5;
      *(undefined4 *)(param_2 + 0xf8) = 0x4000;
      uVar3 = inflate(puVar6,2);
      if (1 < uVar3) {
        if ((bVar2) && (uVar3 == 0xfffffffd)) {
          inflateEnd(puVar6);
          iVar4 = inflateInit2_(puVar6,0xfffffff1,"1.2.8",0x70);
          if (iVar4 == 0) {
            bVar2 = false;
            *(undefined8 *)(param_2 + 0xd8) = uVar7;
            *(undefined4 *)(param_2 + 0xe0) = uVar1;
            goto LAB_00a4b534;
          }
        }
        (*(code *)PTR_free_01769a00)(lVar5);
LAB_00a4b614:
        if (*(long *)(param_2 + 0x108) == 0) {
          FUN_00a38a08(*param_1,
                       "Error while processing content unencoding: Unknown failure within decompression software."
                      );
        }
        else {
          FUN_00a38a08(*param_1,"Error while processing content unencoding: %s");
        }
        inflateEnd(puVar6);
        iVar4 = 0x3d;
LAB_00a4b664:
        *(undefined4 *)(param_2 + 0xd4) = 0;
        return iVar4;
      }
      iVar4 = 0x4000 - *(int *)(param_2 + 0xf8);
      if ((iVar4 != 0) && (*(char *)(param_2 + 0x171) == '\0')) {
        iVar4 = FUN_00a391f0(param_1,1,lVar5,iVar4);
        if (iVar4 != 0) {
          (*(code *)PTR_free_01769a00)(lVar5);
          inflateEnd(puVar6);
          goto LAB_00a4b664;
        }
      }
      if (uVar3 == 1) {
        (*(code *)PTR_free_01769a00)(lVar5);
        iVar4 = inflateEnd(puVar6);
        if (iVar4 == 0) {
          inflateEnd(puVar6);
          iVar4 = 0;
          goto LAB_00a4b664;
        }
        goto LAB_00a4b614;
      }
      bVar2 = false;
    } while (*(int *)(param_2 + 0xe0) != 0);
    (*(code *)PTR_free_01769a00)(lVar5);
    iVar4 = 0;
  }
  return iVar4;
}


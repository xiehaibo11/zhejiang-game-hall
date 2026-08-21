
undefined4 ssl3_write_pending(long param_1,int param_2,long param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  
  if ((*(int *)(param_1 + 0x10fc) <= param_4) &&
     (((*(long *)(param_1 + 0x1108) == param_3 || ((*(byte *)(param_1 + 0x1e8) >> 1 & 1) != 0)) &&
      (*(int *)(param_1 + 0x1100) == param_2)))) {
    uVar4 = 0;
    do {
      uVar8 = uVar4;
      lVar3 = param_1 + (ulong)uVar8 * 0x20;
      iVar7 = *(int *)(lVar3 + 0x3f4);
      piVar1 = (int *)(lVar3 + 0x3f4);
      piVar2 = (int *)(lVar3 + 0x3f0);
      while ((iVar7 != 0 || (uVar4 = uVar8 + 1, *(int *)(param_1 + 0x3b4) - 1U <= uVar8))) {
        puVar6 = (undefined4 *)__errno();
        *puVar6 = 0;
        if (*(BIO **)(param_1 + 0x18) == (BIO *)0x0) {
          ERR_put_error(0x14,0x9f,0x80,"ssl/record/rec_layer_s3.c",0x399);
          iVar5 = -1;
        }
        else {
          *(undefined4 *)(param_1 + 0x28) = 2;
          iVar5 = BIO_write(*(BIO **)(param_1 + 0x18),
                            (void *)(*(long *)(lVar3 + 0x3d8) + (long)*piVar2),*piVar1);
        }
        iVar7 = *piVar1 - iVar5;
        if (iVar7 == 0) {
          *piVar1 = 0;
          *piVar2 = *piVar2 + iVar5;
          iVar7 = 0;
          if (*(uint *)(param_1 + 0x3b4) <= uVar8 + 1) {
            *(undefined4 *)(param_1 + 0x28) = 1;
            return *(undefined4 *)(param_1 + 0x1104);
          }
        }
        else {
          if (iVar5 < 1) {
            if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 3 & 1) == 0) {
              return 0xffffffff;
            }
            *piVar1 = 0;
            return 0xffffffff;
          }
          *piVar2 = *piVar2 + iVar5;
          *piVar1 = iVar7;
        }
      }
    } while( true );
  }
  ERR_put_error(0x14,0x9f,0x7f,"ssl/record/rec_layer_s3.c",0x386);
  return 0xffffffff;
}


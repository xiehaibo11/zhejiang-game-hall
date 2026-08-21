
int FUN_00b05b74(BIO *param_1,undefined1 *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  
  piVar7 = param_1->ptr;
  param_3 = param_3 + -1;
  BIO_clear_flags(param_1,0xf);
  iVar2 = piVar7[4];
  iVar6 = 0;
  do {
    if (iVar2 < 1) {
      iVar2 = BIO_read(param_1->next_bio,*(void **)(piVar7 + 2),*piVar7);
      if (iVar2 < 1) {
        BIO_copy_next_retry(param_1);
        *param_2 = 0;
        if (-1 < iVar2) {
          return iVar6;
        }
        if (0 < iVar6) {
          return iVar6;
        }
        return iVar2;
      }
      iVar4 = 0;
      piVar7[4] = iVar2;
      piVar7[5] = 0;
    }
    else {
      iVar4 = piVar7[5];
    }
    lVar3 = 0;
    if ((0 < param_3) && (0 < iVar2)) {
      lVar5 = *(long *)(piVar7 + 2);
      lVar3 = 0;
      do {
        param_2[lVar3] = *(undefined1 *)(lVar5 + iVar4 + lVar3);
        if (*(char *)(lVar5 + iVar4 + lVar3) == '\n') {
          iVar2 = piVar7[4];
          iVar4 = (int)lVar3 + 1;
          param_2 = param_2 + lVar3 + 1;
          bVar1 = true;
          goto LAB_00b05c50;
        }
        iVar2 = piVar7[4];
        lVar3 = lVar3 + 1;
      } while ((lVar3 < param_3) && (lVar3 < iVar2));
      param_2 = param_2 + lVar3;
    }
    iVar4 = (int)lVar3;
    bVar1 = false;
LAB_00b05c50:
    iVar6 = iVar4 + iVar6;
    iVar2 = iVar2 - iVar4;
    piVar7[4] = iVar2;
    piVar7[5] = piVar7[5] + iVar4;
    if ((bVar1) || (param_3 = param_3 - iVar4, param_3 == 0)) {
      *param_2 = 0;
      return iVar6;
    }
  } while( true );
}


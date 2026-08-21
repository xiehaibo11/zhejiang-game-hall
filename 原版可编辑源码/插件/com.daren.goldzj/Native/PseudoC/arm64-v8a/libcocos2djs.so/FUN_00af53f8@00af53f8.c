
int FUN_00af53f8(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  
  iVar4 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00af53e4 with catch @ 00af5418
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00af5398 with catch @ 00af541c
                        */
  if ((param_2 != (void *)0x0) && (0 < param_3)) {
    pvVar5 = param_1->ptr;
    if ((pvVar5 == (void *)0x0) || (param_1->next_bio == (bio_st *)0x0)) {
      iVar4 = 0;
    }
    else {
      BIO_clear_flags(param_1,0xf);
      iVar1 = *(int *)((long)pvVar5 + 0x20);
      iVar2 = *(int *)((long)pvVar5 + 0x24);
      iVar3 = iVar2 + iVar1;
      iVar6 = *(int *)((long)pvVar5 + 4) - iVar3;
      if (iVar6 < param_3) {
        iVar4 = 0;
        do {
          if (iVar1 != 0) {
            if (0 < iVar6) {
              memcpy((void *)(*(long *)((long)pvVar5 + 0x18) + (long)iVar3),param_2,(long)iVar6);
              iVar2 = *(int *)((long)pvVar5 + 0x24);
              param_2 = (void *)((long)param_2 + (long)iVar6);
              param_3 = param_3 - iVar6;
              iVar4 = iVar6 + iVar4;
              iVar1 = *(int *)((long)pvVar5 + 0x20) + iVar6;
              *(int *)((long)pvVar5 + 0x20) = iVar1;
            }
            do {
              iVar1 = BIO_write(param_1->next_bio,
                                (void *)(*(long *)((long)pvVar5 + 0x18) + (long)iVar2),iVar1);
              if (iVar1 < 1) goto LAB_00af555c;
              iVar2 = *(int *)((long)pvVar5 + 0x24) + iVar1;
              iVar1 = *(int *)((long)pvVar5 + 0x20) - iVar1;
              *(int *)((long)pvVar5 + 0x20) = iVar1;
              *(int *)((long)pvVar5 + 0x24) = iVar2;
            } while (iVar1 != 0);
          }
          *(undefined4 *)((long)pvVar5 + 0x24) = 0;
          while (*(int *)((long)pvVar5 + 4) <= param_3) {
            iVar1 = BIO_write(param_1->next_bio,param_2,param_3);
            if (iVar1 < 1) {
LAB_00af555c:
              BIO_copy_next_retry(param_1);
              if (-1 < iVar1) {
                return iVar4;
              }
              if (0 < iVar4) {
                return iVar4;
              }
              return iVar1;
            }
            iVar4 = iVar1 + iVar4;
            param_3 = param_3 - iVar1;
            param_2 = (void *)((long)param_2 + (long)iVar1);
            if (param_3 == 0) {
              return iVar4;
            }
          }
          iVar1 = *(int *)((long)pvVar5 + 0x20);
          iVar2 = *(int *)((long)pvVar5 + 0x24);
          iVar3 = iVar2 + iVar1;
          iVar6 = *(int *)((long)pvVar5 + 4) - iVar3;
        } while (iVar6 < param_3);
      }
      else {
        iVar4 = 0;
      }
      memcpy((void *)(*(long *)((long)pvVar5 + 0x18) + (long)iVar3),param_2,(long)param_3);
      iVar4 = iVar4 + param_3;
      *(int *)((long)pvVar5 + 0x20) = *(int *)((long)pvVar5 + 0x20) + param_3;
    }
  }
  return iVar4;
}


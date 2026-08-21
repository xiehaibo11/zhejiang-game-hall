
/* cocos2d::ZipUtils::inflateMemoryWithHint(unsigned char*, long, unsigned char**, long) */

void cocos2d::ZipUtils::inflateMemoryWithHint
               (uchar *param_1,long param_2,uchar **param_3,long param_4)

{
  long lVar1;
  int iVar2;
  uchar *__ptr;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  iVar2 = inflateMemoryWithHint(param_1,param_2,param_3,&local_30,param_4);
  __ptr = *param_3;
  if (iVar2 == 0) {
    if (__ptr != (uchar *)0x0) goto LAB_00887f34;
  }
  else if (__ptr != (uchar *)0x0) {
    free(__ptr);
    *param_3 = (uchar *)0x0;
  }
  local_30 = 0;
LAB_00887f34:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_30);
  }
  return;
}


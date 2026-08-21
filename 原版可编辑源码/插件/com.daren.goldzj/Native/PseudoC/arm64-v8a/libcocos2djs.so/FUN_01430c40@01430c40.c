
void FUN_01430c40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  int unaff_w19;
  undefined4 unaff_0000409c;
  long unaff_x20;
  long unaff_x26;
  long unaff_x29;
  
  cVar1 = *(char *)(unaff_x20 + CONCAT44(unaff_0000409c,unaff_w19) + 1);
  lVar2 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + -0x10) + 0x13) + 3);
  if (*(int *)(lVar2 + -1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    lVar2 = *(long *)(unaff_x26 + 0xa0);
  }
  *(int *)(unaff_x29 + -0x20) = unaff_w19 * 2;
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x21c8),param_3,unaff_x29,param_1,lVar2,
               *(undefined8 *)(unaff_x29 + -8),unaff_w19 * 2,lVar2,param_1,cVar1 * 2,0);
}


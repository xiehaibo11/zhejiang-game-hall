
void FUN_01216658(long param_1,void *param_2)

{
  long *unaff_x19;
  
  *unaff_x19 = *(long *)(param_1 + 0x2b8) + 0x10;
  if (param_2 != (void *)0x0) {
    if ((char)unaff_x19[0xe] != '\0') {
      btAlignedFreeInternal(param_2);
    }
    unaff_x19[0xd] = 0;
  }
  *(undefined1 *)(unaff_x19 + 0xe) = 1;
  unaff_x19[0xd] = 0;
  *(undefined8 *)((long)unaff_x19 + 0x5c) = 0;
  if ((void *)unaff_x19[9] != (void *)0x0) {
    if ((char)unaff_x19[10] != '\0') {
      btAlignedFreeInternal((void *)unaff_x19[9]);
    }
    unaff_x19[9] = 0;
  }
  *(undefined1 *)(unaff_x19 + 10) = 1;
  unaff_x19[9] = 0;
  *(undefined8 *)((long)unaff_x19 + 0x3c) = 0;
  if ((void *)unaff_x19[3] != (void *)0x0) {
    if ((char)unaff_x19[4] != '\0') {
      btAlignedFreeInternal((void *)unaff_x19[3]);
    }
    unaff_x19[3] = 0;
  }
  unaff_x19[3] = 0;
  *(undefined1 *)(unaff_x19 + 4) = 1;
  *(undefined8 *)((long)unaff_x19 + 0xc) = 0;
  return;
}



void FUN_011a6cc0(void)

{
  bool in_ZR;
  long unaff_x19;
  
  if (!in_ZR) {
    FUN_011a2d5c();
    *(undefined4 *)(unaff_x19 + 0x870) = 0xffffffff;
  }
  if (DAT_01781874 != -1) {
    FUN_011a2d5c();
    DAT_01781874 = -1;
  }
  return;
}


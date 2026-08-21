
undefined8 FUN_0109ac9c(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  long unaff_x19;
  long lVar5;
  byte *unaff_x21;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long in_stack_00000008;
  
  lVar5 = 0;
  uVar7 = 0;
  do {
                    /* try { // try from 0109acb8 to 0119ad27 has its CatchHandler @ 0109a8ec */
    bVar1 = unaff_x21[8];
    bVar2 = unaff_x21[9];
    bVar3 = unaff_x21[10];
    bVar4 = unaff_x21[0xb];
    uVar6 = (ulong)*unaff_x21 << 0x18 | (ulong)unaff_x21[1] << 0x10 | (ulong)unaff_x21[2] << 8 |
            (ulong)unaff_x21[3];
    uVar8 = (ulong)unaff_x21[4] << 0x18 | (ulong)unaff_x21[5] << 0x10 | (ulong)unaff_x21[6] << 8 |
            (ulong)unaff_x21[7];
    if (uVar8 < uVar6) {
      ft_validator_error();
    }
    if ((lVar5 != 0) && (uVar6 <= uVar7)) {
      ft_validator_error();
    }
                    /* try { // try from 0109ad28 to 0119ad33 has its CatchHandler @ 0109aedc */
    if ((*(int *)(unaff_x19 + 0x110) != 0) &&
       (*(uint *)(unaff_x19 + 0x118) <=
        ((uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4))) {
      ft_validator_error();
    }
                    /* try { // try from 0109ad50 to 0119ad53 has its CatchHandler @ 0109aed8 */
    lVar5 = lVar5 + 1;
    unaff_x21 = unaff_x21 + 0xc;
    uVar7 = uVar8;
  } while (in_stack_00000008 != lVar5);
                    /* try { // try from 0109ad70 to 0119ad77 has its CatchHandler @ 0109ae98 */
                    /* try { // try from 0109ad7c to 0119adbb has its CatchHandler @ 0109aed8 */
  return 0;
}


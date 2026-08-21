
/* WARNING: Control flow encountered bad instruction data */

void FUN_01392444(void)

{
  long in_x5;
  undefined8 in_d20;
  undefined8 in_register_00005288;
  undefined8 in_d30;
  undefined8 in_register_000053c8;
  undefined8 in_d31;
  undefined8 in_register_000053e8;
  
  *(undefined8 *)(in_x5 + -0x350) = in_d31;
  *(undefined8 *)(in_x5 + -0x348) = in_register_000053e8;
  *(undefined8 *)(in_x5 + -0x338) = in_register_00005288;
  *(undefined8 *)(in_x5 + -0x340) = in_d20;
  *(undefined8 *)(in_x5 + -0x678) = in_register_000053c8;
  *(undefined8 *)(in_x5 + -0x680) = in_d30;
  *(undefined8 *)(in_x5 + -0x668) = in_register_00005288;
  *(undefined8 *)(in_x5 + -0x670) = in_d20;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


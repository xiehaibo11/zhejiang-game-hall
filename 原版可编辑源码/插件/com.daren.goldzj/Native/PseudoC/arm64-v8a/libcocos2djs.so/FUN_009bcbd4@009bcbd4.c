
void FUN_009bcbd4(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x30);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
                    /* try { // try from 009bcbec to 00abcbf7 has its CatchHandler @ 009bcd1c */
  puVar1[1] = 0;
  *puVar1 = 0;
  return;
}


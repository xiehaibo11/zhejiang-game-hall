
void FUN_009ae000(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
                    /* try { // try from 009ae010 to 00aae023 has its CatchHandler @ 009ae61c */
  puVar1 = operator_new(0x20);
  *puVar1 = &PTR_FUN_01c6ab18;
                    /* try { // try from 009ae024 to 00aae033 has its CatchHandler @ 009ae608 */
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
                    /* try { // try from 009ae034 to 00aae03b has its CatchHandler @ 009ae630 */
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  return;
}


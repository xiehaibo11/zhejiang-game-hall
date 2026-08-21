
void FUN_010e77d0(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
                    /* try { // try from 010e77d8 to 011e77df has its CatchHandler @ 010e7894 */
  puVar2 = *(undefined8 **)(param_1 + 0x28);
                    /* try { // try from 010e77f4 to 011e77ff has its CatchHandler @ 010e7884 */
  uVar1 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x1000);
  puVar2[6] = uVar1;
  *puVar2 = uVar1;
  puVar2[1] = 0x1000;
                    /* try { // try from 010e7800 to 011e78af has its CatchHandler @ 010e7794 */
  return;
}


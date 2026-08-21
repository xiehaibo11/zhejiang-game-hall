
void png_write_sRGB(long param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 local_44 [4];
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (3 < param_2) {
    png_warning(param_1,"Invalid sRGB rendering intent specified");
  }
  local_44[0] = (char)param_2;
  if (param_1 != 0) {
                    /* try { // try from 010da540 to 011da547 has its CatchHandler @ 010da63c */
                    /* try { // try from 010da548 to 011da56b has its CatchHandler @ 010da4d8 */
    *(undefined4 *)(param_1 + 0x4e4) = 0x22;
    local_40 = 0x4247527301000000;
                    /* try { // try from 010da56c to 011da577 has its CatchHandler @ 010da63c */
    png_write_data(param_1,&local_40,8);
                    /* try { // try from 010da578 to 011da59f has its CatchHandler @ 010da4d8 */
    *(undefined4 *)(param_1 + 0x250) = 0x73524742;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,(long)&local_40 + 4,4);
                    /* try { // try from 010da5a0 to 011da5a7 has its CatchHandler @ 010da638 */
    *(undefined4 *)(param_1 + 0x4e4) = 0x42;
                    /* try { // try from 010da5a8 to 011da5c7 has its CatchHandler @ 010da4d8 */
    png_write_data(param_1,local_44,1);
    png_calculate_crc(param_1,local_44,1);
    uVar3 = local_40;
    uVar1 = *(undefined4 *)(param_1 + 0x294);
    *(undefined4 *)(param_1 + 0x4e4) = 0x82;
                    /* try { // try from 010da5c8 to 011da5cf has its CatchHandler @ 010da638 */
                    /* try { // try from 010da5d0 to 011da5ef has its CatchHandler @ 010da4d8 */
    local_40._4_4_ = SUB84(uVar3,4);
    local_40._0_4_ =
         CONCAT13((char)uVar1,
                  CONCAT12((char)((uint)uVar1 >> 8),
                           CONCAT11((char)((uint)uVar1 >> 0x10),(char)((uint)uVar1 >> 0x18))));
                    /* try { // try from 010da5f0 to 011da5fb has its CatchHandler @ 010da638 */
    png_write_data(param_1,&local_40,4);
  }
                    /* try { // try from 010da5fc to 011da63f has its CatchHandler @ 010da4d8 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_write_tEXt(long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  size_t sVar5;
  int iVar6;
  undefined1 auStack_a0 [80];
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  long local_48;
  
                    /* try { // try from 010dba48 to 011dba93 has its CatchHandler @ 010db9c4 */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010dba40 with catch @ 010dba78
                        */
  uVar4 = FUN_010da8f4(param_1,param_2,auStack_a0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010dba0c with catch @ 010dba7c
                        */
  iVar6 = (int)uVar4;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"tEXt: invalid keyword");
  }
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    sVar5 = 0;
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010dbb48 with catch @ 010dba94
                       catch(type#1 @ 00000000) { ... } // from try @ 010dbbc0 with catch @ 010dba94
                        */
    sVar5 = strlen(param_3);
    if (0x7ffffffe - iVar6 < sVar5) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"tEXt: text too long");
    }
  }
  if (param_1 != 0) {
    lVar1 = sVar5 + (uVar4 & 0xffffffff) + 1;
    *(undefined4 *)(param_1 + 0x4e4) = 0x22;
    local_50 = (undefined1)((ulong)lVar1 >> 0x18);
    local_4f = (undefined1)((ulong)lVar1 >> 0x10);
    local_4e = (undefined1)((ulong)lVar1 >> 8);
    local_4d = (undefined1)lVar1;
    iVar6 = iVar6 + 1;
    local_4c = 0x74584574;
    png_write_data(param_1,&local_50,8);
    *(undefined4 *)(param_1 + 0x250) = 0x74455874;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,&local_4c,4);
                    /* try { // try from 010dbb34 to 011dbb37 has its CatchHandler @ 010dbba0 */
    *(undefined4 *)(param_1 + 0x4e4) = 0x42;
                    /* try { // try from 010dbb3c to 011dbb47 has its CatchHandler @ 010dbba4 */
    if (iVar6 != 0) {
                    /* try { // try from 010dbb48 to 011dbbb3 has its CatchHandler @ 010dba94 */
      png_write_data(param_1,auStack_a0,iVar6);
      png_calculate_crc(param_1,auStack_a0,iVar6);
    }
    if ((sVar5 != 0) && (param_3 != (char *)0x0)) {
      png_write_data(param_1,param_3,sVar5);
      png_calculate_crc(param_1,param_3,sVar5);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x294);
    *(undefined4 *)(param_1 + 0x4e4) = 0x82;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010dbb34 with catch @ 010dbba0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010dbb3c with catch @ 010dbba4
                        */
    local_50 = (undefined1)((uint)uVar2 >> 0x18);
    local_4f = (undefined1)((uint)uVar2 >> 0x10);
                    /* try { // try from 010dbbb4 to 011dbbb7 has its CatchHandler @ 010dbbb8 */
    local_4e = (undefined1)((uint)uVar2 >> 8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010dbbb4 with catch @ 010dbbb8
                        */
    local_4d = (undefined1)uVar2;
                    /* try { // try from 010dbbbc to 011dbbbf has its CatchHandler @ 010dbbc8 */
    png_write_data(param_1,&local_50,4);
  }
                    /* try { // try from 010dbbc0 to 011dbbcb has its CatchHandler @ 010dba94 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010dbbbc with catch @ 010dbbc8
                        */
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


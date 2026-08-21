
void FUN_00fd5674(char *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar3;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
                    /* catch() { ... } // from try @ 00fd56bc with catch @ 00fd5690 */
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00fd56b4 to 010d56bb has its CatchHandler @ 00fd56f0 */
                    /* try { // try from 00fd56bc to 010d570b has its CatchHandler @ 00fd5690 */
  ppuStack_68 = &local_70;
  puStack_60 = &local_90;
  uStack_58 = 0xffffff80ffffffe0;
  local_90 = in_x4;
  uStack_88 = in_x5;
  local_80 = in_x6;
  uStack_78 = in_x7;
  local_70 = (undefined1 *)register0x00000008;
  iVar2 = vsnprintf(param_1,0xff,
                    "\n#define MAX_DIRECTIONAL_LIGHT_NUM %d \n\n#define MAX_POINT_LIGHT_NUM %d \n\n#define MAX_SPOT_LIGHT_NUM %d \n"
                    ,&local_70);
                    /* catch() { ... } // from try @ 00fd56b4 with catch @ 00fd56f0 */
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00fd5738 with catch @ 00fd570c */
  __stack_chk_fail(iVar2);
}


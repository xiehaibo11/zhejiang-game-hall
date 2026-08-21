
void FUN_009eb1d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 009eb204 to 00aeb21b has its CatchHandler @ 009eb2dc */
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009eb220 to 00aeb247 has its CatchHandler @ 009eb2d8 */
  ppuStack_68 = &local_70;
  puStack_60 = auStack_a0;
                    /* try { // try from 009eb248 to 00aeb26f has its CatchHandler @ 009eb1cc */
  uStack_58 = 0xffffff80ffffffd8;
  local_98 = param_4;
  uStack_90 = param_5;
  local_88 = param_6;
  uStack_80 = param_7;
  local_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  __vsprintf_chk(param_1,0,0x24,"%lu-%lu",&local_70);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* try { // try from 009eb270 to 00aeb283 has its CatchHandler @ 009eb2dc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


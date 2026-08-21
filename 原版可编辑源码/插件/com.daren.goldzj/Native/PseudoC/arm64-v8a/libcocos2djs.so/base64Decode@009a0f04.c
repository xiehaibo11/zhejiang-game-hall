
void base64Decode(uchar *param_1,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uchar *puVar4;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009a0f34 to 00aa0f77 has its CatchHandler @ 009a11bc */
  local_3c = 0;
  puVar4 = malloc((ulong)(((uint)(param_2 >> 2) & 0x3fffffff) * 3 + 1));
  *param_3 = puVar4;
  uVar3 = 0;
  if ((puVar4 != (uchar *)0x0) &&
     (iVar2 = cocos2d::_base64Decode(param_1,(uint)param_2,puVar4,&local_3c), uVar3 = local_3c,
     0 < iVar2)) {
    free((void *)*param_3);
    *param_3 = 0;
    local_3c = 0;
    uVar3 = 0;
  }
                    /* try { // try from 009a0f90 to 00aa0ff7 has its CatchHandler @ 009a1194 */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


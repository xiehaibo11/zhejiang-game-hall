
void gain_from_float(float param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  int local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  iVar1 = local_2c;
  if (0.0 < param_1) {
    if (param_1 < 2.0) {
      fVar4 = frexpf(param_1,&local_2c);
      iVar1 = local_2c + 6;
      if (iVar1 < 8) {
        if (-6 - local_2c < 0xd) {
          if (iVar1 < 1) {
            uVar3 = (int)(fVar4 * 16384.0) >> (-local_2c - 5U & 0x1f) & 0x1fff;
            local_2c = iVar1;
          }
          else {
            uVar3 = (int)(fVar4 * 16384.0) & 0xffffdfffU | iVar1 * 0x2000;
            local_2c = iVar1;
          }
          goto LAB_00a97ef8;
        }
        goto LAB_00a97ec4;
      }
    }
    local_2c = iVar1;
    uVar3 = 0xffff;
  }
  else {
LAB_00a97ec4:
    local_2c = iVar1;
    uVar3 = 0;
  }
LAB_00a97ef8:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* btDbvt::maxdepth(btDbvtNode const*) */

uint btDbvt::maxdepth(btDbvtNode *param_1)

{
  uint uVar1;
  uint local_14;
  
  local_14 = 0;
  uVar1 = 0;
  if (param_1 != (btDbvtNode *)0x0) {
    FUN_0123893c(param_1,1,&local_14);
    uVar1 = local_14;
  }
  return uVar1;
}


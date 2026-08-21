
undefined8 FUN_008c3d6c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  double dVar3;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isnumber(param_1,1,0,auStack_38);
  if ((iVar2 == 0) || (iVar2 = tolua_isnoobj(param_1,2,auStack_38), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'glStencilMask\'.",auStack_38);
  }
  else {
    dVar3 = (double)tolua_tonumber(0,param_1,1);
    glStencilMask((int)dVar3);
  }
                    /* try { // try from 008c3dec to 009c3e27 has its CatchHandler @ 008c3dec
                       catch() { ... } // from try @ 008c3dec with catch @ 008c3dec
                       catch() { ... } // from try @ 008c3e94 with catch @ 008c3dec
                       catch() { ... } // from try @ 008c3f04 with catch @ 008c3dec
                       catch() { ... } // from try @ 008c3f84 with catch @ 008c3dec */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


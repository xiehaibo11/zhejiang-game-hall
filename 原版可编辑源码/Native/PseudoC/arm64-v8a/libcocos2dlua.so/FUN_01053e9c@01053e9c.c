
void FUN_01053e9c(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long local_80;
  undefined1 auStack_78 [64];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar6 = *(long *)(*(long *)(param_1 + 0x220) + (ulong)*(byte *)(param_1 + 0x304) * 0x6f8 + 0x7b8);
  lVar1 = lVar6 + 0x210;
  lVar6 = lVar6 + 0x10;
  local_80 = lVar6;
  iVar3 = lws_add_http_header_status(param_1,0x191,&local_80,lVar1);
  if (iVar3 == 0) {
    uVar4 = lws_snprintf(auStack_78,0x40,"Basic realm=\"lwsws\"");
                    /* try { // try from 01053f18 to 0115410f has its CatchHandler @ 01053f18
                       catch() { ... } // from try @ 01053f18 with catch @ 01053f18
                       catch() { ... } // from try @ 01054478 with catch @ 01053f18
                       catch() { ... } // from try @ 0105476c with catch @ 01053f18 */
    iVar3 = lws_add_http_header_by_token(param_1,0x48,auStack_78,uVar4,&local_80,lVar1);
    if (((iVar3 == 0) && (iVar3 = lws_finalize_http_header(param_1,&local_80,lVar1), iVar3 == 0)) &&
       (iVar3 = lws_write(param_1,lVar6,local_80 - lVar6,0x88), -1 < iVar3)) {
      uVar5 = lws_http_transaction_completed(param_1);
      if (*(long *)(lVar2 + 0x28) == local_38) {
        return;
      }
      goto LAB_01053f98;
    }
  }
  uVar5 = 0xffffffff;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_01053f98:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


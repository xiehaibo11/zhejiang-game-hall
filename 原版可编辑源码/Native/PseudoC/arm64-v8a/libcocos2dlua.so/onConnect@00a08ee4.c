
/* universe::network::GuoPengFei::onConnect(bool) */

void __thiscall universe::network::GuoPengFei::onConnect(GuoPengFei *this,bool param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined **local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x4a0] != (GuoPengFei)0x0) {
    pcVar3 = (char *)Translated::getInstance();
    Translated::log(pcVar3,&DAT_012f8ab2);
  }
  pcVar3 = (char *)Translated::getInstance();
  Translated::log(pcVar3,"GuoPengFei onConncect %d",(ulong)*(uint *)(this + 0x45c));
  if (*(void **)(this + 0x2b8) != (void *)0x0) {
    free(*(void **)(this + 0x2b8));
    *(undefined8 *)(this + 0x2b8) = 0;
  }
  if (this[0x11] == (GuoPengFei)0x0) {
    cancelConnectTimer(this);
    if (param_1) {
      iVar2 = uv_tcp_nodelay(*(undefined8 *)(this + 0xe0),1);
      if ((iVar2 == 0) &&
         (iVar2 = uv_tcp_keepalive(*(undefined8 *)(this + 0xe0),1,0x3c), iVar2 == 0)) {
        plVar5 = *(long **)(this + 0x40);
        this[0x10] = (GuoPengFei)0x2;
        if (plVar5 != (long *)0x0) {
          local_48 = (undefined **)CONCAT71(local_48._1_7_,1);
          (**(code **)(*plVar5 + 0x30))(plVar5,&local_48);
        }
        *(undefined8 *)(this + 0x388) = 0;
        *(undefined8 *)(this + 0x380) = 0;
        BaseProxy::setDefaultAesKey(*(BaseProxy **)(this + 0x3b0));
        if (this[0x459] != (GuoPengFei)0x0) {
          local_40 = 1;
          local_48 = &PTR__Background_016a1f58;
          sendMessage<universe::network::SRS::EncryptVer>
                    (this,(EncryptVer *)&local_48,0,*(int *)(this + 0x410));
        }
        puVar6 = *(undefined8 **)(this + 0xe0);
                    /* try { // try from 00a09070 to 00b090bf has its CatchHandler @ 00a09070
                       catch() { ... } // from try @ 00a09070 with catch @ 00a09070
                       catch() { ... } // from try @ 00a090f8 with catch @ 00a09070
                       catch() { ... } // from try @ 00a0913c with catch @ 00a09070 */
        *puVar6 = this;
        iVar2 = uv_read_start(puVar6,FUN_00a092b0,FUN_00a0935c);
        if (iVar2 != 0) {
          pcVar3 = (char *)Translated::getInstance();
          uVar4 = uv_err_name(iVar2);
          Translated::log(pcVar3,"GuoPengFei read start error %s",uVar4);
        }
        goto LAB_00a08fd8;
      }
      pcVar3 = (char *)Translated::getInstance();
      uVar4 = uv_err_name(iVar2);
      Translated::log(pcVar3,"GuoPengFei config tcp failed %s",uVar4);
    }
    plVar5 = *(long **)(this + 0x40);
    this[0x10] = (GuoPengFei)0x0;
    if (plVar5 != (long *)0x0) {
      local_48 = (undefined **)((ulong)local_48 & 0xffffffffffffff00);
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_48);
    }
  }
  else {
    close(this);
  }
LAB_00a08fd8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


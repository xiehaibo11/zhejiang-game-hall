
void FUN_00a08b08(undefined8 *param_1,int param_2,addrinfo *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  char *pcVar4;
  GuoPengFei *this;
  ulong local_70 [6];
  
  lVar1 = tpidr_el0;
  local_70[5] = *(long *)(lVar1 + 0x28);
  if (param_2 == -0x7d) goto LAB_00a08c48;
  this = (GuoPengFei *)*param_1;
                    /* catch() { ... } // from try @ 00a08a38 with catch @ 00a08b3c */
  if (this == (GuoPengFei *)0x0) {
    pcVar4 = (char *)universe::Translated::getInstance();
    universe::Translated::log(pcVar4,&DAT_012f8f87);
    goto LAB_00a08c48;
  }
  if (param_2 < 0) {
    pcVar4 = (char *)universe::Translated::getInstance();
    uVar2 = uv_err_name(param_2);
    universe::Translated::log(pcVar4,"getaddrinfo callback error %s",uVar2);
    if (this[0x4a0] != (GuoPengFei)0x0) {
      pcVar4 = (char *)universe::Translated::getInstance();
      universe::Translated::log(pcVar4,"GuoPengFei: delete 3");
    }
    *(undefined8 *)(this + 0x2b0) = 0;
    if (this[0x11] == (GuoPengFei)0x0) {
      universe::network::GuoPengFei::cancelConnectTimer(this);
      plVar3 = *(long **)(this + 0x40);
      this[0x10] = (GuoPengFei)0x0;
      if (plVar3 != (long *)0x0) {
        local_70[0] = local_70[0] & 0xffffffffffffff00;
        (**(code **)(*plVar3 + 0x30))(plVar3,local_70);
      }
    }
    goto LAB_00a08c48;
  }
  if (param_3->ai_family == 10) {
    local_70[4] = 0;
    local_70[1] = 0;
    local_70[0] = 0;
    local_70[3] = 0;
    local_70[2] = 0;
    uv_ip6_name(param_3->ai_canonname,local_70,0x27);
LAB_00a08c20:
    pcVar4 = (char *)universe::Translated::getInstance();
    universe::Translated::log(pcVar4,"host address %s",local_70);
  }
  else if (param_3->ai_family == 2) {
    local_70[0] = 0;
    local_70[1] = 0;
    local_70[2] = local_70[2] & 0xffffffffffffff00;
    uv_ip4_name(param_3->ai_canonname,local_70,0x10);
    goto LAB_00a08c20;
  }
  universe::network::GuoPengFei::onResolved(this,param_3);
  uv_freeaddrinfo(param_3);
LAB_00a08c48:
  free(param_1);
  if (*(long *)(lVar1 + 0x28) == local_70[5]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


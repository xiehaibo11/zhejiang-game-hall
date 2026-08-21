
/* universe::network::GuoPengFei::onResolved(addrinfo*) */

void __thiscall universe::network::GuoPengFei::onResolved(GuoPengFei *this,addrinfo *param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x4a0] != (GuoPengFei)0x0) {
    pcVar3 = (char *)Translated::getInstance();
    Translated::log(pcVar3,"GuoPengFei: delete 3");
  }
  *(undefined8 *)(this + 0x2b0) = 0;
  if (this[0x11] != (GuoPengFei)0x0) goto LAB_00a08e14;
  if (param_1 == (addrinfo *)0x0) {
    cancelConnectTimer(this);
    plVar6 = *(long **)(this + 0x40);
    this[0x10] = (GuoPengFei)0x0;
    if (plVar6 == (long *)0x0) goto LAB_00a08e14;
    local_40[0] = 0;
    lVar9 = *plVar6;
    puVar8 = local_40;
  }
  else {
    if (*(void **)(this + 0xe0) != (void *)0x0) {
      free(*(void **)(this + 0xe0));
    }
    pvVar4 = malloc(0xf8);
    *(void **)(this + 0xe0) = pvVar4;
    uVar5 = uv_default_loop();
    iVar2 = uv_tcp_init(uVar5,*(undefined8 *)(this + 0xe0));
    if (iVar2 == 0) {
      if (*(void **)(this + 0x2b8) != (void *)0x0) {
        free(*(void **)(this + 0x2b8));
      }
      puVar7 = malloc(0x60);
      *(undefined8 **)(this + 0x2b8) = puVar7;
      *puVar7 = this;
      iVar2 = uv_tcp_connect(puVar7,*(undefined8 *)(this + 0xe0),param_1->ai_canonname,FUN_00a08e3c)
      ;
      if (iVar2 == 0) goto LAB_00a08e14;
      free(*(void **)(this + 0x2b8));
      *(undefined8 *)(this + 0x2b8) = 0;
      free(*(void **)(this + 0xe0));
      *(undefined8 *)(this + 0xe0) = 0;
      pcVar3 = (char *)Translated::getInstance();
      uVar5 = uv_err_name(iVar2);
      Translated::log(pcVar3,"TcpConnect connect failed %s",uVar5);
      cancelConnectTimer(this);
      plVar6 = *(long **)(this + 0x40);
      this[0x10] = (GuoPengFei)0x0;
      if (plVar6 == (long *)0x0) goto LAB_00a08e14;
      local_44[0] = 0;
      lVar9 = *plVar6;
      puVar8 = local_44;
    }
    else {
      pcVar3 = (char *)Translated::getInstance();
      uVar5 = uv_err_name(iVar2);
      Translated::log(pcVar3,"GuoPengFei init tcp failed %s",uVar5);
      cancelConnectTimer(this);
      free(*(void **)(this + 0xe0));
      plVar6 = *(long **)(this + 0x40);
      *(undefined8 *)(this + 0xe0) = 0;
      this[0x10] = (GuoPengFei)0x0;
      if (plVar6 == (long *)0x0) goto LAB_00a08e14;
      local_3c[0] = 0;
      lVar9 = *plVar6;
      puVar8 = local_3c;
    }
  }
  (**(code **)(lVar9 + 0x30))(plVar6,puVar8);
LAB_00a08e14:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


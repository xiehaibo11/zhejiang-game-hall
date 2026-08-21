
/* universe::network::GuoPengFei::closeServer() */

void __thiscall universe::network::GuoPengFei::closeServer(GuoPengFei *this)

{
  int iVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  
  if (this[0x4a0] != (GuoPengFei)0x0) {
    pcVar2 = (char *)Translated::getInstance();
    Translated::log(pcVar2,"GuoPengFei: delete 20");
  }
  if ((*(long *)(this + 0xe0) != 0) && (iVar1 = uv_is_active(), iVar1 != 0)) {
    if (*(long *)(this + 0x438) != 0) {
      puVar3 = *(undefined8 **)(this + 0x430);
      puVar4 = puVar3;
      if (puVar3 != (undefined8 *)0x0) {
        do {
          *(undefined8 *)puVar4[3] = 0;
          puVar4 = (undefined8 *)*puVar4;
        } while (puVar4 != (undefined8 *)0x0);
        while (puVar3 != (void *)0x0) {
          pvVar7 = (void *)*puVar3;
          operator_delete(puVar3);
          puVar3 = pvVar7;
        }
      }
      lVar5 = *(long *)(this + 0x428);
      *(undefined8 *)(this + 0x430) = 0;
      if (lVar5 != 0) {
        lVar6 = 0;
        do {
          *(undefined8 *)(*(long *)(this + 0x420) + lVar6 * 8) = 0;
          lVar6 = lVar6 + 1;
        } while (lVar5 != lVar6);
      }
      *(undefined8 *)(this + 0x438) = 0;
    }
    uv_close(*(undefined8 *)(this + 0xe0),free);
    *(undefined8 *)(this + 0xe0) = 0;
  }
  return;
}


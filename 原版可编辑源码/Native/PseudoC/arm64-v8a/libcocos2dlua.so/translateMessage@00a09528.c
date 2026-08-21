
/* universe::network::GuoPengFei::translateMessage() */

void __thiscall universe::network::GuoPengFei::translateMessage(GuoPengFei *this)

{
  GuoPengFei *pGVar1;
  char *pcVar2;
  long lVar3;
  
  if (this[0x4a0] != (GuoPengFei)0x0) {
    pcVar2 = (char *)Translated::getInstance();
    Translated::log(pcVar2,"GuoPengFei: delete 16");
  }
  pGVar1 = this + 0x380;
  (**(code **)(**(long **)(this + 0x3b0) + 8))(*(long **)(this + 0x3b0),pGVar1,this + 0x2c0);
  lVar3 = *(long *)(this + 0x388);
  if (lVar3 != 0) {
    if (*(long *)pGVar1 - lVar3 == 0) {
      *(undefined8 *)pGVar1 = 0;
      *(undefined8 *)(this + 0x388) = 0;
    }
    else {
      memmove(*(void **)(this + 0x390),(void *)((long)*(void **)(this + 0x390) + lVar3),
              *(long *)pGVar1 - lVar3);
      lVar3 = *(long *)(this + 0x388);
      *(undefined8 *)(this + 0x388) = 0;
      *(long *)(this + 0x380) = *(long *)(this + 0x380) - lVar3;
    }
  }
  return;
}


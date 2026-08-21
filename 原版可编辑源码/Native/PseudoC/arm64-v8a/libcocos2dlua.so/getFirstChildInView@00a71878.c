
/* fairygui::GComponent::getFirstChildInView() */

int __thiscall fairygui::GComponent::getFirstChildInView(GComponent *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(this + 0x1e0);
  puVar1 = *(undefined8 **)(this + 0x1e8);
  if (puVar4 != puVar1) {
    iVar3 = 0;
    do {
      uVar2 = (**(code **)(*(long *)this + 0xc0))(this,*puVar4);
      if ((uVar2 & 1) != 0) {
        return iVar3;
      }
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + 1;
                    /* catch() { ... } // from try @ 00a71828 with catch @ 00a718c0 */
    } while (puVar1 != puVar4);
  }
                    /* catch() { ... } // from try @ 00a71840 with catch @ 00a718c4 */
  return -1;
}


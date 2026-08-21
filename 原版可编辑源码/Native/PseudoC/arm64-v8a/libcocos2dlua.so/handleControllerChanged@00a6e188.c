
/* fairygui::GButton::handleControllerChanged(fairygui::GController*) */

void __thiscall fairygui::GButton::handleControllerChanged(GButton *this,GController *param_1)

{
  size_t __n;
  ulong uVar1;
  byte *__s2;
  uint uVar2;
  byte *pbVar3;
  GButton *__s1;
  ulong uVar4;
  
  GObject::handleControllerChanged((GObject *)this,param_1);
  if (*(GController **)(this + 0x2a0) != param_1) {
    return;
  }
  pbVar3 = (byte *)GController::getSelectedPageId(param_1);
  uVar1 = *(ulong *)(pbVar3 + 8);
  __s2 = *(byte **)(pbVar3 + 0x10);
  if ((*pbVar3 & 1) == 0) {
    __s2 = pbVar3 + 1;
    uVar1 = (ulong)(*pbVar3 >> 1);
  }
  if (((byte)this[0x2a8] & 1) == 0) {
    uVar4 = (ulong)((byte)this[0x2a8] >> 1);
    __s1 = this + 0x2a9;
  }
  else {
    uVar4 = *(ulong *)(this + 0x2b0);
    __s1 = *(GButton **)(this + 0x2b8);
  }
  __n = uVar1;
  if (uVar4 <= uVar1) {
    __n = uVar4;
  }
  if (((__n == 0) || (uVar2 = memcmp(__s1,__s2,__n), uVar2 == 0)) &&
     (uVar2 = (uint)(uVar1 < uVar4), uVar4 < uVar1)) {
    uVar2 = 0xffffffff;
  }
  setSelected(this,uVar2 == 0);
  return;
}



/* fairygui::GComponent::removeChildren(int, int) */

void __thiscall fairygui::GComponent::removeChildren(GComponent *this,int param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  
  if (param_2 < 0) {
    uVar1 = *(long *)(this + 0x1e8) - *(long *)(this + 0x1e0);
  }
  else {
    uVar1 = *(long *)(this + 0x1e8) - *(long *)(this + 0x1e0);
    if ((long)param_2 < (long)uVar1 >> 3) goto joined_r0x00a70c90;
  }
  param_2 = (int)(uVar1 >> 3) + -1;
joined_r0x00a70c90:
  if (param_1 <= param_2) {
    iVar2 = param_1 + -1;
    do {
      (**(code **)(*(long *)this + 0xb8))(this,param_1);
      iVar2 = iVar2 + 1;
                    /* try { // try from 00a70cb0 to 00b70ce3 has its CatchHandler @ 00a70db0 */
    } while (iVar2 < param_2);
  }
  return;
}


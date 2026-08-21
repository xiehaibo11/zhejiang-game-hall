
/* btBoxShape::getPreferredPenetrationDirection(int, btVector3&) const */

void __thiscall
btBoxShape::getPreferredPenetrationDirection(btBoxShape *this,int param_1,btVector3 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  if ((uint)param_1 < 6) {
    uVar3 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_1 << 2;
    uVar1 = *(undefined4 *)(&DAT_014a5d40 + uVar3);
    uVar2 = *(undefined4 *)(&DAT_014a5d60 + uVar3);
    *(undefined4 *)param_2 = *(undefined4 *)(&DAT_014a5d20 + uVar3);
    *(undefined4 *)(param_2 + 4) = uVar1;
    *(undefined4 *)(param_2 + 8) = uVar2;
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return;
}



/* btBoxShape::getEdge(int, btVector3&, btVector3&) const */

void __thiscall
btBoxShape::getEdge(btBoxShape *this,int param_1,btVector3 *param_2,btVector3 *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  if ((uint)param_1 < 0xc) {
    uVar2 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_1 << 2;
    uVar1 = *(undefined4 *)(&DAT_014a5d80 + uVar2);
    uVar3 = *(undefined4 *)(&DAT_014a5db0 + uVar2);
  }
  else {
    uVar1 = 0;
    uVar3 = 0;
  }
  (**(code **)(*(long *)this + 0xd8))(this,uVar1);
                    /* WARNING: Could not recover jumptable at 0x012224a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xd8))(this,uVar3,param_3);
  return;
}


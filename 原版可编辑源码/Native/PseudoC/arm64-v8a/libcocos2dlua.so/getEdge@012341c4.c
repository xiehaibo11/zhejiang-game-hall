
/* btTriangleShape::getEdge(int, btVector3&, btVector3&) const */

void __thiscall
btTriangleShape::getEdge(btTriangleShape *this,int param_1,btVector3 *param_2,btVector3 *param_3)

{
  (**(code **)(*(long *)this + 0xd8))();
                    /* WARNING: Could not recover jumptable at 0x0123422c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xd8))(this,(param_1 + 1) % 3,param_3);
  return;
}


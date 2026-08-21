
/* btIDebugDraw::drawTriangle(btVector3 const&, btVector3 const&, btVector3 const&, btVector3
   const&, float) */

void btIDebugDraw::drawTriangle
               (btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,btVector3 *param_4,
               float param_5)

{
  (**(code **)(*(long *)param_1 + 0x10))();
  (**(code **)(*(long *)param_1 + 0x10))(param_1,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x010129b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,param_4,param_2);
  return;
}



/* fairygui::GearXY::updateFromRelations(float, float) */

void __thiscall fairygui::GearXY::updateFromRelations(GearXY *this,float param_1,float param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00ab6400 to 00bb6433 has its CatchHandler @ 00ab6528 */
  if (((*(long *)(this + 0x10) != 0) && (*(long *)(this + 0x40) != 0)) &&
     (this[0x20] == (GearXY)0x0)) {
    for (plVar2 = *(long **)(this + 0x38); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
                    /* try { // try from 00ab6434 to 00bb645f has its CatchHandler @ 00ab6184 */
      cocos2d::Vec4::Vec4((Vec4 *)&local_48,*(float *)(plVar2 + 5) + param_1,
                          *(float *)((long)plVar2 + 0x2c) + param_2,*(float *)(plVar2 + 6),
                          *(float *)((long)plVar2 + 0x34));
      plVar2[6] = uStack_40;
      plVar2[5] = local_48;
      cocos2d::Vec4::~Vec4((Vec4 *)&local_48);
    }
                    /* try { // try from 00ab6460 to 00bb6473 has its CatchHandler @ 00ab6550 */
    *(ulong *)(this + 0x50) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0x50) >> 0x20) + param_2,
                  (float)*(undefined8 *)(this + 0x50) + param_1);
    (**(code **)(*(long *)this + 0x20))(this);
  }
                    /* try { // try from 00ab6478 to 00bb648b has its CatchHandler @ 00ab6564 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00ab6494 to 00bb64a7 has its CatchHandler @ 00ab6554 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


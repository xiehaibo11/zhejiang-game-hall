
/* fairygui::ScrollPane::isChildInView(fairygui::GObject*) const */

undefined8 __thiscall fairygui::ScrollPane::isChildInView(ScrollPane *this,GObject *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
                    /* try { // try from 00a940f4 to 00b94103 has its CatchHandler @ 00a9425c */
  if (*(float *)(this + 0x78) <= 0.0) {
LAB_00a9413c:
                    /* try { // try from 00a94140 to 00b94177 has its CatchHandler @ 00a93da0 */
    if (0.0 < *(float *)(this + 0x74)) {
      fVar5 = *(float *)(param_1 + 0xc0);
      fVar4 = (float)(**(code **)(**(long **)(this + 0x108) + 0xe0))();
                    /* try { // try from 00a94178 to 00b9418b has its CatchHandler @ 00a94278 */
      if ((fVar5 + fVar4 <= -*(float *)(param_1 + 200)) || (*(float *)(this + 100) <= fVar5 + fVar4)
         ) goto LAB_00a94184;
    }
    uVar2 = 1;
  }
  else {
    lVar3 = *(long *)(this + 0x108);
    fVar4 = *(float *)(param_1 + 0xc4);
                    /* try { // try from 00a94104 to 00b9411f has its CatchHandler @ 00a94258 */
    lVar1 = (**(code **)(**(long **)(lVar3 + 400) + 0x168))();
    fVar4 = fVar4 + (*(float *)(lVar1 + 4) - *(float *)(lVar3 + 0x54));
                    /* try { // try from 00a94138 to 00b9413f has its CatchHandler @ 00a94254 */
    if ((-*(float *)(param_1 + 0xcc) < fVar4) && (fVar4 < *(float *)(this + 0x68)))
    goto LAB_00a9413c;
LAB_00a94184:
    uVar2 = 0;
  }
  return uVar2;
}


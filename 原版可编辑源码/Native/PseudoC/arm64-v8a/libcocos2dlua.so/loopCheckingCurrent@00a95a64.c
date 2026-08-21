
/* fairygui::ScrollPane::loopCheckingCurrent() */

undefined8 __thiscall fairygui::ScrollPane::loopCheckingCurrent(ScrollPane *this)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(int *)(this + 0xc0) == 2) {
    if (0.0 < *(float *)(this + 0x78)) {
      fVar3 = *(float *)(this + 0x60);
      if (0.001 <= fVar3) {
        if (fVar3 < *(float *)(this + 0x78)) {
          return 0;
        }
                    /* try { // try from 00a95b4c to 00b95b5b has its CatchHandler @ 00a95dc0 */
        fVar4 = *(float *)(this + 0x70) + (float)*(int *)(*(long *)(this + 0xf8) + 0x2f0);
                    /* try { // try from 00a95b5c to 00b95b73 has its CatchHandler @ 00a95dbc */
        fVar5 = -0.5;
      }
      else {
        fVar4 = *(float *)(this + 0x70) + (float)*(int *)(*(long *)(this + 0xf8) + 0x2f0);
        fVar5 = 0.5;
      }
      *(float *)(this + 0x60) = fVar3 + fVar4 * fVar5;
      goto LAB_00a95b6c;
    }
  }
  else if ((*(int *)(this + 0xc0) == 1) && (0.0 < *(float *)(this + 0x74))) {
    fVar3 = *(float *)(this + 0x5c);
    if (0.001 <= fVar3) {
                    /* try { // try from 00a95b0c to 00b95b23 has its CatchHandler @ 00a95e38 */
      if (fVar3 < *(float *)(this + 0x74)) {
        return 0;
      }
      fVar4 = *(float *)(this + 0x6c) + (float)*(int *)(*(long *)(this + 0xf8) + 0x2f4);
      fVar5 = -0.5;
    }
    else {
      fVar4 = *(float *)(this + 0x6c) + (float)*(int *)(*(long *)(this + 0xf8) + 0x2f4);
      fVar5 = 0.5;
    }
                    /* try { // try from 00a95b30 to 00b95b47 has its CatchHandler @ 00a95dd0 */
    *(float *)(this + 0x5c) = fVar3 + fVar4 * fVar5;
LAB_00a95b6c:
    plVar2 = *(long **)(this + 0x108);
    fVar3 = *(float *)(this + 0x5c);
    fVar4 = *(float *)(this + 0x60);
                    /* try { // try from 00a95b94 to 00b95ba7 has its CatchHandler @ 00a95db8 */
    lVar1 = (**(code **)(*(long *)plVar2[0x32] + 0x168))((long *)plVar2[0x32]);
    (**(code **)(*plVar2 + 200))
              ((float)(int)-fVar3,*(float *)(lVar1 + 4) - (float)(int)-fVar4,plVar2);
    return 1;
  }
  return 0;
}



/* fairygui::ScrollPane::changeContentSizeOnScrolling(float, float, float, float) */

void __thiscall
fairygui::ScrollPane::changeContentSizeOnScrolling
          (ScrollPane *this,float param_1,float param_2,float param_3,float param_4)

{
  ScrollPane SVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
                    /* catch() { ... } // from try @ 00a94ee0 with catch @ 00a94fb0
                       catch() { ... } // from try @ 00a94f5c with catch @ 00a94fb0 */
  fVar7 = *(float *)(this + 0x5c);
  fVar5 = *(float *)(this + 0x60);
  fVar8 = *(float *)(this + 0x74);
  fVar6 = *(float *)(this + 0x78);
                    /* try { // try from 00a94fcc to 00b9501f has its CatchHandler @ 00a94fcc
                       catch() { ... } // from try @ 00a94fcc with catch @ 00a94fcc
                       catch() { ... } // from try @ 00a95094 with catch @ 00a94fcc
                       catch() { ... } // from try @ 00a950d8 with catch @ 00a94fcc */
  *(ulong *)(this + 0x6c) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x6c) >> 0x20) + param_2,
                (float)*(undefined8 *)(this + 0x6c) + param_1);
  handleSizeChanged(this);
  if (*(int *)(this + 0xd0) == 2) {
    if (param_3 != 0.0) {
      plVar4 = *(long **)(this + 0x108);
      fVar5 = (float)(**(code **)(*plVar4 + 0xe0))(plVar4);
                    /* try { // try from 00a95094 to 00b950c3 has its CatchHandler @ 00a94fcc */
      (**(code **)(*plVar4 + 0xd8))(fVar5 - param_3,plVar4);
      *(float *)(this + 0xd4) = *(float *)(this + 0xd4) - param_3;
      fVar5 = (float)(**(code **)(**(long **)(this + 0x108) + 0xe0))();
                    /* try { // try from 00a950c4 to 00b950d7 has its CatchHandler @ 00a9511c */
      *(float *)(this + 0x5c) = -fVar5;
    }
    if (param_4 != 0.0) {
      plVar4 = *(long **)(this + 0x108);
                    /* try { // try from 00a950d8 to 00b95137 has its CatchHandler @ 00a94fcc */
      lVar2 = (**(code **)(*(long *)plVar4[0x32] + 0x168))();
      fVar5 = *(float *)(lVar2 + 4);
      fVar6 = *(float *)((long)plVar4 + 0x54);
      lVar2 = (**(code **)(*(long *)plVar4[0x32] + 0x168))((long *)plVar4[0x32]);
                    /* catch() { ... } // from try @ 00a95020 with catch @ 00a9511c
                       catch() { ... } // from try @ 00a950c4 with catch @ 00a9511c */
      (**(code **)(*plVar4 + 0xe8))(*(float *)(lVar2 + 4) - ((fVar5 - fVar6) - param_4),plVar4);
      lVar2 = *(long *)(this + 0x108);
      *(float *)(this + 0xd8) = *(float *)(this + 0xd8) - param_4;
LAB_00a951fc:
      lVar3 = (**(code **)(**(long **)(lVar2 + 400) + 0x168))();
      *(float *)(this + 0x60) = -(*(float *)(lVar3 + 4) - *(float *)(lVar2 + 0x54));
    }
  }
  else if (*(int *)(this + 0xd0) == 1) {
    if (((param_1 != 0.0) && (fVar7 == fVar8)) && (*(float *)(this + 0xdc) < 0.0)) {
                    /* try { // try from 00a95020 to 00b95093 has its CatchHandler @ 00a9511c */
      *(float *)(this + 0x5c) = *(float *)(this + 0x74);
      *(float *)(this + 0xdc) = -*(float *)(this + 0x74) - *(float *)(this + 0xd4);
    }
    if (((param_2 != 0.0) && (fVar5 == fVar6)) && (*(float *)(this + 0xe0) < 0.0)) {
      *(float *)(this + 0x60) = *(float *)(this + 0x78);
      *(float *)(this + 0xe0) = -*(float *)(this + 0x78) - *(float *)(this + 0xd8);
      SVar1 = this[0x58];
      goto joined_r0x00a95070;
    }
  }
  else if (this[0xb8] == (ScrollPane)0x0) {
    if ((param_1 != 0.0) && (fVar7 == fVar8)) {
      plVar4 = *(long **)(this + 0x108);
      *(undefined4 *)(this + 0x5c) = *(undefined4 *)(this + 0x74);
      fVar7 = (float)(**(code **)(*plVar4 + 0xe0))(plVar4);
      (**(code **)(*plVar4 + 0xd8))(fVar7 - *(float *)(this + 0x5c),plVar4);
    }
                    /* try { // try from 00a952a0 to 00b952f3 has its CatchHandler @ 00a952a0
                       catch() { ... } // from try @ 00a952a0 with catch @ 00a952a0
                       catch() { ... } // from try @ 00a95368 with catch @ 00a952a0
                       catch() { ... } // from try @ 00a953ac with catch @ 00a952a0 */
    if ((param_2 != 0.0) && (fVar5 == fVar6)) {
      plVar4 = *(long **)(this + 0x108);
      *(undefined4 *)(this + 0x60) = *(undefined4 *)(this + 0x78);
      lVar2 = (**(code **)(*(long *)plVar4[0x32] + 0x168))();
      fVar5 = *(float *)(lVar2 + 4);
      fVar6 = *(float *)((long)plVar4 + 0x54);
      fVar7 = *(float *)(this + 0x60);
      lVar2 = (**(code **)(*(long *)plVar4[0x32] + 0x168))((long *)plVar4[0x32]);
                    /* try { // try from 00a952f4 to 00b95367 has its CatchHandler @ 00a953f0 */
      (**(code **)(*plVar4 + 0xe8))(*(float *)(lVar2 + 4) - ((fVar5 - fVar6) - fVar7),plVar4);
      SVar1 = this[0x58];
      goto joined_r0x00a95070;
    }
  }
  else {
    if (param_3 != 0.0) {
      plVar4 = *(long **)(this + 0x108);
      fVar5 = (float)(**(code **)(*plVar4 + 0xe0))(plVar4);
      (**(code **)(*plVar4 + 0xd8))(fVar5 - param_3,plVar4);
      *(float *)(this + 0x84) = *(float *)(this + 0x84) - param_3;
      fVar5 = (float)(**(code **)(**(long **)(this + 0x108) + 0xe0))();
      *(float *)(this + 0x5c) = -fVar5;
    }
    if (param_4 != 0.0) {
      plVar4 = *(long **)(this + 0x108);
      lVar2 = (**(code **)(*(long *)plVar4[0x32] + 0x168))();
      fVar5 = *(float *)(lVar2 + 4);
      fVar6 = *(float *)((long)plVar4 + 0x54);
      lVar2 = (**(code **)(*(long *)plVar4[0x32] + 0x168))((long *)plVar4[0x32]);
      (**(code **)(*plVar4 + 0xe8))(*(float *)(lVar2 + 4) - ((fVar5 - fVar6) - param_4),plVar4);
      lVar2 = *(long *)(this + 0x108);
      *(float *)(this + 0x88) = *(float *)(this + 0x88) - param_4;
      goto LAB_00a951fc;
    }
  }
  SVar1 = this[0x58];
joined_r0x00a95070:
  if (SVar1 != (ScrollPane)0x0) {
    updatePageController(this);
    return;
  }
  return;
}


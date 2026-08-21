
/* cocos2d::Menu::alignItemsVerticallyWithPadding(float) */

void __thiscall cocos2d::Menu::alignItemsVerticallyWithPadding(Menu *this,float param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
                    /* try { // try from 00f1b91c to 0101b91f has its CatchHandler @ 00f1bacc */
  puVar1 = *(undefined8 **)(this + 0x180);
  if (*(undefined8 **)(this + 0x178) != puVar1) {
    fVar7 = -param_1;
    puVar5 = *(undefined8 **)(this + 0x178);
    do {
                    /* try { // try from 00f1b948 to 0101b94b has its CatchHandler @ 00f1bac8 */
      lVar2 = (**(code **)(*(long *)*puVar5 + 0x168))();
      fVar8 = *(float *)(lVar2 + 4);
      puVar4 = puVar5 + 1;
      fVar6 = (float)(**(code **)(*(long *)*puVar5 + 0x68))();
                    /* try { // try from 00f1b96c to 0101b96f has its CatchHandler @ 00f1bac4 */
                    /* try { // try from 00f1b970 to 0101bebf has its CatchHandler @ 00f1b3e8 */
      fVar7 = fVar7 + fVar8 * fVar6 + param_1;
      puVar5 = puVar4;
    } while (puVar1 != puVar4);
    puVar1 = *(undefined8 **)(this + 0x180);
    if (*(undefined8 **)(this + 0x178) != puVar1) {
      fVar7 = fVar7 * 0.5;
      puVar5 = *(undefined8 **)(this + 0x178);
      do {
        plVar3 = (long *)*puVar5;
        lVar2 = (**(code **)(*plVar3 + 0x168))(plVar3);
        fVar8 = *(float *)(lVar2 + 4);
        fVar6 = (float)(**(code **)(*(long *)*puVar5 + 0x68))((long *)*puVar5);
        (**(code **)(*plVar3 + 200))(0,fVar7 + fVar8 * fVar6 * -0.5,plVar3);
        lVar2 = (**(code **)(*(long *)*puVar5 + 0x168))();
        fVar8 = *(float *)(lVar2 + 4);
        puVar4 = puVar5 + 1;
        fVar6 = (float)(**(code **)(*(long *)*puVar5 + 0x68))();
        fVar7 = fVar7 - (fVar8 * fVar6 + param_1);
        puVar5 = puVar4;
      } while (puVar1 != puVar4);
    }
  }
  return;
}


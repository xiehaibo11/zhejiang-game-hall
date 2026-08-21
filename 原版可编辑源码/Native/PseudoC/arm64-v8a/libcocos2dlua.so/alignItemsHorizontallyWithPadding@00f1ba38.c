
/* cocos2d::Menu::alignItemsHorizontallyWithPadding(float) */

void __thiscall cocos2d::Menu::alignItemsHorizontallyWithPadding(Menu *this,float param_1)

{
  undefined8 *puVar1;
  float *pfVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  puVar1 = *(undefined8 **)(this + 0x180);
  if (*(undefined8 **)(this + 0x178) != puVar1) {
    fVar7 = -param_1;
    puVar5 = *(undefined8 **)(this + 0x178);
    do {
      pfVar2 = (float *)(**(code **)(*(long *)*puVar5 + 0x168))();
      fVar8 = *pfVar2;
      puVar4 = puVar5 + 1;
      fVar6 = (float)(**(code **)(*(long *)*puVar5 + 0x58))();
      fVar7 = fVar7 + fVar8 * fVar6 + param_1;
      puVar5 = puVar4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f1b49c with catch @ 00f1ba9c
                        */
    } while (puVar1 != puVar4);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f1b494 with catch @ 00f1baa0
                        */
    puVar1 = *(undefined8 **)(this + 0x180);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f1b7a8 with catch @ 00f1baa4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f1b728 with catch @ 00f1baa8
                        */
    if (*(undefined8 **)(this + 0x178) != puVar1) {
      fVar7 = fVar7 * -0.5;
      puVar5 = *(undefined8 **)(this + 0x178);
      do {
        plVar3 = (long *)*puVar5;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f1b720 with catch @ 00f1babc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f1b714 with catch @ 00f1bac0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f1b96c with catch @ 00f1bac4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f1b948 with catch @ 00f1bac8
                        */
        pfVar2 = (float *)(**(code **)(*plVar3 + 0x168))(plVar3);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f1b91c with catch @ 00f1bacc
                        */
        fVar8 = *pfVar2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f1b57c with catch @ 00f1bad4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f1b4fc with catch @ 00f1bad8
                        */
        fVar6 = (float)(**(code **)(*(long *)*puVar5 + 0x58))((long *)*puVar5);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f1b4f4 with catch @ 00f1baec
                        */
        (**(code **)(*plVar3 + 200))(fVar7 + fVar8 * fVar6 * 0.5,0,plVar3);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f1b4e8 with catch @ 00f1bb08
                        */
        pfVar2 = (float *)(**(code **)(*(long *)*puVar5 + 0x168))();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f1b798 with catch @ 00f1bb14
                        */
        fVar8 = *pfVar2;
        puVar4 = puVar5 + 1;
        fVar6 = (float)(**(code **)(*(long *)*puVar5 + 0x58))();
        fVar7 = fVar7 + fVar8 * fVar6 + param_1;
        puVar5 = puVar4;
      } while (puVar1 != puVar4);
    }
  }
  return;
}


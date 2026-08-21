
/* cocos2d::ui::ScrollView::processAutoScrolling(float) */

void cocos2d::ui::ScrollView::processAutoScrolling(float param_1)

{
  long lVar1;
  long *in_x0;
  undefined8 *puVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_s1;
  float fVar7;
  
                    /* try { // try from 00dbc6d8 to 00ebc6db has its CatchHandler @ 00dbc7e8 */
  lVar1 = tpidr_el0;
                    /* try { // try from 00dbc6dc to 00ebc80f has its CatchHandler @ 00dbc440 */
  lVar3 = *(long *)(lVar1 + 0x28);
  fVar4 = 1.0;
  if (*(char *)((long)in_x0 + 0x839) == '\0') {
    fVar5 = (float)(**(code **)(*in_x0 + 0x7b8))();
    if ((0.0001 < ABS(fVar5)) || (0.0001 < ABS(in_s1))) {
      if ((char)in_x0[0x107] == '\0') {
        *(undefined2 *)(in_x0 + 0x107) = 0x101;
        puVar2 = (undefined8 *)(**(code **)(*(long *)in_x0[0xf7] + 0xb0))();
        *(undefined8 *)((long)in_x0 + 0x83c) = *puVar2;
        fVar4 = 0.05;
      }
    }
    else {
      *(undefined1 *)(in_x0 + 0x107) = 0;
    }
  }
  else {
    fVar4 = 0.05;
  }
  fVar4 = *(float *)((long)in_x0 + 0x834) + (1.0 / fVar4) * param_1;
  *(float *)((long)in_x0 + 0x834) = fVar4;
  fVar4 = fVar4 / *(float *)(in_x0 + 0x106);
  if (1.0 < fVar4) {
    fVar4 = 1.0;
  }
  if (*(char *)((long)in_x0 + 0x81e) != '\0') {
    fVar4 = (float)tweenfunc::quintEaseOut(fVar4);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbc60c with catch @ 00dbc7d4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbc5f0 with catch @ 00dbc7d8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbc58c with catch @ 00dbc7dc
                        */
  fVar4 = fVar4 + -1.0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbc4f8 with catch @ 00dbc7e0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbc6d8 with catch @ 00dbc7e8
                        */
  fVar7 = ABS(fVar4);
  fVar5 = (float)(**(code **)(*in_x0 + 0x7f0))();
  if (fVar5 < fVar7) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbc810 with catch @ 00dbc838
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbc624 with catch @ 00dbc83c
                        */
    if (*(char *)((long)in_x0 + 0x845) == '\0') goto LAB_00dbc848;
joined_r0x00dbc8ac:
    if (fVar5 < fVar7) goto LAB_00dbc8d8;
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbc67c with catch @ 00dbc7fc
                        */
    fVar4 = (float)in_x0[0x105];
    if (*(char *)((long)in_x0 + 0x845) != '\0') goto joined_r0x00dbc8ac;
LAB_00dbc848:
    (**(code **)(*(long *)in_x0[0xf7] + 0xb0))();
    fVar6 = (float)(**(code **)(*in_x0 + 0x7b8))();
    if ((ABS(fVar6) <= 0.0001) && (ABS(fVar4) <= 0.0001)) goto joined_r0x00dbc8ac;
  }
  *(undefined1 *)((long)in_x0 + 0x81d) = 0;
  dispatchEvent();
LAB_00dbc8d8:
  (**(code **)(*(long *)in_x0[0xf7] + 0xb0))();
  (**(code **)(*in_x0 + 0x7c0))();
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* cocos2d::ui::ScrollView::isNecessaryAutoScrollBrake() */

undefined8 cocos2d::ui::ScrollView::isNecessaryAutoScrollBrake(void)

{
  long *in_x0;
  undefined8 uVar1;
  undefined8 *puVar2;
  float fVar3;
  float in_s1;
  
                    /* try { // try from 00dbc60c to 00ebc613 has its CatchHandler @ 00dbc7d4 */
  if (*(char *)((long)in_x0 + 0x839) == '\0') {
                    /* try { // try from 00dbc624 to 00ebc627 has its CatchHandler @ 00dbc83c */
    fVar3 = (float)(**(code **)(*in_x0 + 0x7b8))(in_x0,&Vec2::ZERO);
    if ((0.0001 < ABS(fVar3)) || (0.0001 < ABS(in_s1))) {
      if ((char)in_x0[0x107] == '\0') {
                    /* try { // try from 00dbc67c to 00ebc6af has its CatchHandler @ 00dbc7fc */
        *(undefined2 *)(in_x0 + 0x107) = 0x101;
        puVar2 = (undefined8 *)(**(code **)(*(long *)in_x0[0xf7] + 0xb0))();
        uVar1 = 1;
        *(undefined8 *)((long)in_x0 + 0x83c) = *puVar2;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
      *(undefined1 *)(in_x0 + 0x107) = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


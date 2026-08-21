
/* cocos2d::DrawPrimitives::drawRect(cocos2d::Vec2, cocos2d::Vec2) */

void cocos2d::DrawPrimitives::drawRect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  local_40 = param_3;
  uStack_3c = param_2;
  local_38 = param_1;
  uStack_34 = param_2;
  drawLine((Vec2 *)&local_38,(Vec2 *)&local_40);
                    /* try { // try from 00ef7310 to 00ff732b has its CatchHandler @ 00ef7890 */
  local_40 = param_3;
  uStack_3c = param_4;
  local_38 = param_3;
  uStack_34 = param_2;
  drawLine((Vec2 *)&local_38,(Vec2 *)&local_40);
  local_40 = param_1;
  uStack_3c = param_4;
  local_38 = param_3;
  uStack_34 = param_4;
  drawLine((Vec2 *)&local_38,(Vec2 *)&local_40);
  local_40 = param_1;
  uStack_3c = param_2;
  local_38 = param_1;
  uStack_34 = param_4;
                    /* try { // try from 00ef7340 to 00ff7343 has its CatchHandler @ 00ef7860 */
  drawLine((Vec2 *)&local_38,(Vec2 *)&local_40);
                    /* try { // try from 00ef735c to 00ff7373 has its CatchHandler @ 00ef7880 */
  return;
}


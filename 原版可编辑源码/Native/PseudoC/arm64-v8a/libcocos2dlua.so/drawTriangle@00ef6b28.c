
/* cocos2d::DrawNode::drawTriangle(cocos2d::Vec2 const&, cocos2d::Vec2 const&, cocos2d::Vec2 const&,
   cocos2d::Color4F const&) */

void __thiscall
cocos2d::DrawNode::drawTriangle
          (DrawNode *this,Vec2 *param_1,Vec2 *param_2,Vec2 *param_3,Color4F *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 local_4c;
  long local_48;
  
                    /* try { // try from 00ef6b2c to 00ff6b3b has its CatchHandler @ 00ef6d2c */
                    /* try { // try from 00ef6b3c to 00ff6b43 has its CatchHandler @ 00ef6d74 */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00ef6b48 to 00ff6b4b has its CatchHandler @ 00ef6d10 */
  iVar2 = *(int *)(this + 0x310);
  if (iVar2 < *(int *)(this + 0x314) + 3) {
    iVar1 = iVar2;
    if (iVar2 < 4) {
      iVar1 = 3;
    }
    *(int *)(this + 0x310) = iVar1 + iVar2;
    pvVar4 = realloc(*(void **)(this + 0x318),(long)(iVar1 + iVar2) * 0x14);
    *(void **)(this + 0x318) = pvVar4;
  }
                    /* try { // try from 00ef6ba0 to 00ff6bb3 has its CatchHandler @ 00ef6d74 */
  Color4B::Color4B((Color4B *)&local_4c,param_4);
                    /* try { // try from 00ef6bb4 to 00ff6df3 has its CatchHandler @ 00ef6a80 */
  uVar5 = *(undefined8 *)param_2;
  uVar7 = *(undefined8 *)param_3;
  puVar6 = (undefined8 *)(*(long *)(this + 0x318) + (long)*(int *)(this + 0x314) * 0x14);
  *puVar6 = *(undefined8 *)param_1;
  *(undefined4 *)(puVar6 + 1) = local_4c;
  *(undefined8 *)((long)puVar6 + 0xc) = 0;
  *(undefined8 *)((long)puVar6 + 0x14) = uVar5;
  *(undefined4 *)((long)puVar6 + 0x1c) = local_4c;
  puVar6[4] = 0;
  puVar6[5] = uVar7;
  *(undefined4 *)(puVar6 + 6) = local_4c;
  *(undefined8 *)((long)puVar6 + 0x34) = 0;
  this[0x450] = (DrawNode)0x1;
  *(int *)(this + 0x314) = *(int *)(this + 0x314) + 3;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* cocos2d::TransitionScene::finish() */

void __thiscall cocos2d::TransitionScene::finish(TransitionScene *this)

{
  (**(code **)(**(long **)(this + 0x370) + 0x170))(*(long **)(this + 0x370),1);
  (**(code **)(**(long **)(this + 0x370) + 200))(0,0);
  (**(code **)(**(long **)(this + 0x370) + 0x80))(0x3f800000);
  (**(code **)(**(long **)(this + 0x370) + 0x180))(0);
  Node::setAdditionalTransform(*(Node **)(this + 0x370),(Mat4 *)0x0);
                    /* try { // try from 00f58668 to 0105867f has its CatchHandler @ 00f587ac */
  (**(code **)(**(long **)(this + 0x378) + 0x170))(*(long **)(this + 0x378),0);
  (**(code **)(**(long **)(this + 0x378) + 200))(0,0);
  (**(code **)(**(long **)(this + 0x378) + 0x80))(0x3f800000);
                    /* try { // try from 00f586b0 to 010586b3 has its CatchHandler @ 00f58788 */
  (**(code **)(**(long **)(this + 0x378) + 0x180))(0);
  Node::setAdditionalTransform(*(Node **)(this + 0x378),(Mat4 *)0x0);
                    /* try { // try from 00f586e4 to 010586fb has its CatchHandler @ 00f5879c */
  Node::schedule((_func_void_float *)this,0.0);
  return;
}


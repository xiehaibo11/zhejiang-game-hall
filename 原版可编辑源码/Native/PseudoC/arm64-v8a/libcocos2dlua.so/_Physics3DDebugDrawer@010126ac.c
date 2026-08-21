
/* cocos2d::Physics3DDebugDrawer::~Physics3DDebugDrawer() */

void __thiscall cocos2d::Physics3DDebugDrawer::~Physics3DDebugDrawer(Physics3DDebugDrawer *this)

{
  Physics3DDebugDrawer *pPVar1;
  
                    /* catch() { ... } // from try @ 010126ec with catch @ 010126b4 */
  *(undefined ***)this = &PTR__Physics3DDebugDrawer_01726608;
  free(*(void **)(this + 0x18));
  pPVar1 = this + 8;
  if (*(int *)pPVar1 != 0) {
                    /* try { // try from 010126e4 to 011126eb has its CatchHandler @ 01012738 */
                    /* try { // try from 010126ec to 01112753 has its CatchHandler @ 010126b4 */
    (*glDeleteVertexArraysOESEXT)(1,pPVar1);
    *(int *)pPVar1 = 0;
  }
  pPVar1 = this + 0xc;
  if (*(int *)pPVar1 != 0) {
    glDeleteBuffers(1,pPVar1);
    *(int *)pPVar1 = 0;
  }
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x30));
  return;
}


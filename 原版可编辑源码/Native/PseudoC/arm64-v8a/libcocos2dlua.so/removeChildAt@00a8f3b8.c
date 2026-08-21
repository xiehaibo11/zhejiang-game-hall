
/* fairygui::GTreeNode::removeChildAt(int) */

void __thiscall fairygui::GTreeNode::removeChildAt(GTreeNode *this,int param_1)

{
  undefined8 *__dest;
  size_t __n;
  long lVar1;
  GTreeNode *this_00;
  
  lVar1 = *(long *)(this + 0x58);
  this_00 = *(GTreeNode **)(lVar1 + (long)param_1 * 8);
                    /* try { // try from 00a8f3d8 to 00b8f473 has its CatchHandler @ 00a8f288 */
  *(undefined8 *)(this_00 + 0x30) = 0;
  if (*(long *)(this + 0x28) != 0) {
    setTree(this_00,(GTree *)0x0);
    GTree::afterRemoved(*(GTreeNode **)(this + 0x28));
    lVar1 = *(long *)(this + 0x58);
  }
  __dest = (undefined8 *)(lVar1 + (long)param_1 * 8);
  cocos2d::Ref::release((Ref *)*__dest);
  __n = *(long *)(this + 0x60) - (long)(__dest + 1);
  if (__n != 0) {
                    /* catch() { ... } // from try @ 00a8f38c with catch @ 00a8f424 */
                    /* catch() { ... } // from try @ 00a8f3a4 with catch @ 00a8f428 */
    memmove(__dest,__dest + 1,__n);
  }
  *(undefined8 **)(this + 0x60) = __dest + ((long)__n >> 3);
  return;
}


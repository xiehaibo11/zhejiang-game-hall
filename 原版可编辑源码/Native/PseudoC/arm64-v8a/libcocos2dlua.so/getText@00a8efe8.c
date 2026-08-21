
/* fairygui::GTreeNode::getText() const */

undefined1 * __thiscall fairygui::GTreeNode::getText(GTreeNode *this)

{
  undefined1 *puVar1;
  
  if (*(long **)(this + 0x38) != (long *)0x0) {
                    /* catch() { ... } // from try @ 00a8eef4 with catch @ 00a8eff4 */
                    /* WARNING: Could not recover jumptable at 0x00a8eff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined1 *)(**(code **)(**(long **)(this + 0x38) + 0x10))();
    return puVar1;
  }
  return &cocos2d::STD_STRING_EMPTY;
}


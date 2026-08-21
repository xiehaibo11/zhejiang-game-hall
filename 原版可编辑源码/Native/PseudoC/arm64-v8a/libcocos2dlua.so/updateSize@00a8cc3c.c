
/* fairygui::GBasicTextField::updateSize() */

void __thiscall fairygui::GBasicTextField::updateSize(GBasicTextField *this)

{
  long lVar1;
  Size *pSVar2;
  float local_30;
  float local_2c;
  long local_28;
  
                    /* try { // try from 00a8cc40 to 00b8ccd3 has its CatchHandler @ 00a8cc40
                       catch() { ... } // from try @ 00a8cc40 with catch @ 00a8cc40
                       catch() { ... } // from try @ 00a8ccdc with catch @ 00a8cc40 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (this[0x208] != (GBasicTextField)0x0) goto LAB_00a8ccbc;
  this[0x208] = (GBasicTextField)0x1;
  pSVar2 = (Size *)(**(code **)(**(long **)(this + 0x200) + 0x168))();
  cocos2d::Size::Size((Size *)&local_30,pSVar2);
  if (*(int *)(this + 500) == 2) {
    local_30 = *(float *)(this + 0xd0);
LAB_00a8ccac:
    GObject::setSize((GObject *)this,local_30,local_2c,false);
  }
  else if (*(int *)(this + 500) == 1) goto LAB_00a8ccac;
  this[0x208] = (GBasicTextField)0x0;
LAB_00a8ccbc:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a8ccdc to 00b8cd33 has its CatchHandler @ 00a8cc40 */
    __stack_chk_fail();
  }
                    /* try { // try from 00a8ccd4 to 00b8ccdb has its CatchHandler @ 00a8cd18 */
  return;
}


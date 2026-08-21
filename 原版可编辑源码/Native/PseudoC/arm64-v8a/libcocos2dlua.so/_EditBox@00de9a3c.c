
/* cocos2d::ui::EditBox::~EditBox() */

void __thiscall cocos2d::ui::EditBox::~EditBox(EditBox *this)

{
  EditBox EVar1;
  undefined8 *puVar2;
  
                    /* catch() { ... } // from try @ 00de95b0 with catch @ 00de9a48 */
                    /* catch() { ... } // from try @ 00de97d4 with catch @ 00de9a4c */
  *(undefined ***)this = &PTR__EditBox_016e5968;
  *(undefined ***)(this + 0x318) = &PTR__EditBox_016e6018;
  *(undefined ***)(this + 0x4f0) = &PTR__EditBox_016e6040;
  if (*(long **)(this + 0x5b8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x5b8) + 8))();
  }
  *(undefined8 *)(this + 0x5b8) = 0;
  if (*(int *)(this + 0x5cc) != 0) {
    puVar2 = (undefined8 *)ScriptEngineManager::getInstance();
    (**(code **)(*(long *)*puVar2 + 0x50))((long *)*puVar2,*(undefined4 *)(this + 0x5cc));
    *(undefined4 *)(this + 0x5cc) = 0;
  }
  if (((byte)this[0x590] & 1) == 0) {
    EVar1 = this[0x578];
  }
  else {
                    /* catch() { ... } // from try @ 00de9900 with catch @ 00de9aec */
    operator_delete(*(void **)(this + 0x5a0));
    EVar1 = this[0x578];
  }
  if (((byte)EVar1 & 1) == 0) {
    EVar1 = this[0x560];
  }
  else {
    operator_delete(*(void **)(this + 0x588));
    EVar1 = this[0x560];
  }
  if (((byte)EVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x570));
  }
  IMEDelegate::~IMEDelegate((IMEDelegate *)(this + 0x4f0));
                    /* catch() { ... } // from try @ 00de98f8 with catch @ 00de9ad8 */
                    /* catch() { ... } // from try @ 00de951c with catch @ 00de9adc */
  Widget::~Widget((Widget *)this);
  return;
}



/* fairygui::GearAnimation::init() */

void __thiscall fairygui::GearAnimation::init(GearAnimation *this)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  Value aVStack_58 [16];
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(this + 8) + 0x30))(aVStack_48,*(long **)(this + 8),4);
  uVar3 = cocos2d::Value::asBool(aVStack_48);
  (**(code **)(**(long **)(this + 8) + 0x30))(aVStack_58,*(long **)(this + 8),5);
  lVar4 = cocos2d::Value::asInt(aVStack_58);
                    /* try { // try from 00ac4d88 to 00bc4dfb has its CatchHandler @ 00ac4d88
                       catch() { ... } // from try @ 00ac4d88 with catch @ 00ac4d88
                       catch() { ... } // from try @ 00ac4e08 with catch @ 00ac4d88 */
  *(ulong *)(this + 0x48) = uVar3 & 1 | lVar4 << 0x20;
  cocos2d::Value::~Value(aVStack_58);
  cocos2d::Value::~Value(aVStack_48);
  if (*(long *)(this + 0x38) != 0) {
    puVar2 = *(void **)(this + 0x30);
    while (puVar2 != (void *)0x0) {
      pvVar6 = (void *)*puVar2;
      if ((*(byte *)(puVar2 + 2) & 1) != 0) {
        operator_delete((void *)puVar2[4]);
      }
      operator_delete(puVar2);
      puVar2 = pvVar6;
    }
    lVar4 = *(long *)(this + 0x28);
    *(undefined8 *)(this + 0x30) = 0;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x20) + lVar5 * 8) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
    }
    *(undefined8 *)(this + 0x38) = 0;
  }
                    /* try { // try from 00ac4dfc to 00bc4e07 has its CatchHandler @ 00ac4e3c */
                    /* try { // try from 00ac4e08 to 00bc4e4f has its CatchHandler @ 00ac4d88 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


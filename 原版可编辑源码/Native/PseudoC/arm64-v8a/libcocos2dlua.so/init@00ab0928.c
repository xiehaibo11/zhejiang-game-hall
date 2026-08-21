
/* fairygui::GearColor::init() */

void __thiscall fairygui::GearColor::init(GearColor *this)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  undefined2 local_70;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 local_6b;
  Value aVStack_68 [16];
  Value aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(this + 8) + 0x30))(aVStack_58,*(long **)(this + 8),2);
  uVar3 = cocos2d::Value::asUnsignedInt(aVStack_58);
  uVar4 = ToolSet::intToColor(uVar3);
  (**(code **)(**(long **)(this + 8) + 0x30))(aVStack_68,*(long **)(this + 8),3);
  uVar3 = cocos2d::Value::asUnsignedInt(aVStack_68);
  uVar5 = ToolSet::intToColor(uVar3);
  cocos2d::Color3B::Color3B((Color3B *)&local_70);
  cocos2d::Color3B::Color3B((Color3B *)((ulong)&local_70 | 3));
  uStack_6e = (undefined1)((ulong)uVar4 >> 0x10);
  local_6b = (undefined1)((ulong)uVar5 >> 0x10);
  local_70 = (undefined2)uVar4;
  uStack_6d = (undefined1)uVar5;
  uStack_6c = (undefined1)((ulong)uVar5 >> 8);
                    /* try { // try from 00ab09d0 to 00bb0a43 has its CatchHandler @ 00ab09d0
                       catch() { ... } // from try @ 00ab09d0 with catch @ 00ab09d0
                       catch() { ... } // from try @ 00ab0a50 with catch @ 00ab09d0 */
  *(short *)(this + 0x4c) = (short)((ulong)uVar5 >> 8);
  *(uint *)(this + 0x48) = CONCAT13(uStack_6d,(int3)uVar4);
  cocos2d::Value::~Value(aVStack_68);
  cocos2d::Value::~Value(aVStack_58);
  if (*(long *)(this + 0x38) != 0) {
    puVar2 = *(void **)(this + 0x30);
    while (puVar2 != (void *)0x0) {
      pvVar8 = (void *)*puVar2;
      if ((*(byte *)(puVar2 + 2) & 1) != 0) {
        operator_delete((void *)puVar2[4]);
      }
      operator_delete(puVar2);
      puVar2 = pvVar8;
    }
    lVar6 = *(long *)(this + 0x28);
    *(undefined8 *)(this + 0x30) = 0;
    if (lVar6 != 0) {
      lVar7 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x20) + lVar7 * 8) = 0;
        lVar7 = lVar7 + 1;
                    /* try { // try from 00ab0a44 to 00bb0a4f has its CatchHandler @ 00ab0ad0 */
      } while (lVar6 != lVar7);
    }
    *(undefined8 *)(this + 0x38) = 0;
  }
                    /* try { // try from 00ab0a50 to 00bb0b2f has its CatchHandler @ 00ab09d0 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


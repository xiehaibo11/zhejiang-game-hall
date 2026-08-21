
/* fairygui::TweenConfig::TweenConfig() */

void __thiscall fairygui::TweenConfig::TweenConfig(TweenConfig *this)

{
  undefined8 *puVar1;
  
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 4) = 5;
  puVar1 = operator_new(0x14);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)((long)puVar1 + 0x12) = 0;
  *(undefined2 *)(puVar1 + 2) = 0x101;
  *(undefined8 **)(this + 0x10) = puVar1;
  puVar1 = operator_new(0x14);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined2 *)(puVar1 + 2) = 0x101;
  *(undefined1 *)((long)puVar1 + 0x12) = 0;
  *(undefined8 **)(this + 0x18) = puVar1;
  return;
}


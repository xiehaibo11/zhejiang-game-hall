
/* v8::internal::CircularStructureMessageBuilder::AppendConstructorName(v8::internal::Handle<v8::internal::Object>)
    */

void __thiscall
v8::internal::CircularStructureMessageBuilder::AppendConstructorName
          (CircularStructureMessageBuilder *this,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = *(int *)(this + 0x14);
  lVar3 = **(long **)(this + 0x20);
  *(int *)(this + 0x14) = iVar1 + 1;
  if (*(int *)(this + 8) == 0) {
    *(undefined1 *)(lVar3 + iVar1 + 0xb) = 0x27;
  }
  else {
    *(undefined2 *)(lVar3 + (long)iVar1 * 2 + 0xb) = 0x27;
  }
  if (*(int *)(this + 0x14) == *(int *)(this + 0x10)) {
    IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
  }
  uVar2 = JSReceiver::GetConstructorName(param_2);
  IncrementalStringBuilder::AppendString((IncrementalStringBuilder *)this,uVar2);
  iVar1 = *(int *)(this + 0x14);
  lVar3 = **(long **)(this + 0x20);
  *(int *)(this + 0x14) = iVar1 + 1;
  if (*(int *)(this + 8) == 0) {
    *(undefined1 *)(lVar3 + iVar1 + 0xb) = 0x27;
  }
  else {
    *(undefined2 *)(lVar3 + (long)iVar1 * 2 + 0xb) = 0x27;
  }
  if (*(int *)(this + 0x14) == *(int *)(this + 0x10)) {
    IncrementalStringBuilder::Extend((IncrementalStringBuilder *)this);
    return;
  }
  return;
}



/* v8::internal::UnicodeRangeSplitter::UnicodeRangeSplitter(v8::internal::ZoneList<v8::internal::CharacterRange>*)
    */

void __thiscall
v8::internal::UnicodeRangeSplitter::UnicodeRangeSplitter
          (UnicodeRangeSplitter *this,ZoneList *param_1)

{
  long lVar1;
  
  *(UnicodeRangeSplitter **)this = this + 0x18;
  *(UnicodeRangeSplitter **)(this + 8) = this + 0x18;
  *(UnicodeRangeSplitter **)(this + 0x58) = this + 0x70;
  *(UnicodeRangeSplitter **)(this + 0x60) = this + 0x70;
  *(UnicodeRangeSplitter **)(this + 0x10) = this + 0x58;
  *(UnicodeRangeSplitter **)(this + 0xb0) = this + 200;
  *(UnicodeRangeSplitter **)(this + 0xb8) = this + 200;
  *(UnicodeRangeSplitter **)(this + 0xc0) = this + 0x108;
  *(UnicodeRangeSplitter **)(this + 0x108) = this + 0x120;
  *(UnicodeRangeSplitter **)(this + 0x110) = this + 0x120;
  *(UnicodeRangeSplitter **)(this + 0x68) = this + 0xb0;
  *(UnicodeRangeSplitter **)(this + 0x118) = this + 0x160;
  if (0 < *(int *)(param_1 + 0xc)) {
    lVar1 = 0;
    do {
      AddRange(this,*(undefined8 *)(*(long *)param_1 + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0xc));
  }
  return;
}


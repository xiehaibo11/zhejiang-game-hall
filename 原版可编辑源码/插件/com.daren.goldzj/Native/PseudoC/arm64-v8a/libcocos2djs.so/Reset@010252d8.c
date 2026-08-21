
/* v8::internal::ICStats::Reset() */

void __thiscall v8::internal::ICStats::Reset(ICStats *this)

{
  ICInfo *pIVar1;
  ICInfo *pIVar2;
  ushort local_b0 [4];
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined2 local_78;
  ushort local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_4c;
  ushort local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  pIVar2 = *(ICInfo **)(this + 0x10);
  for (pIVar1 = *(ICInfo **)(this + 8); pIVar1 != pIVar2; pIVar1 = pIVar1 + 0x80) {
    ICInfo::ICInfo((ICInfo *)local_b0,pIVar1);
    if ((local_b0[0] & 1) == 0) {
      local_b0[0] = 0;
    }
    else {
      *local_a0 = 0;
      local_a8 = 0;
    }
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0xffffffffffffffff;
    local_78 = 0;
    if ((local_70 & 1) == 0) {
      local_70 = 0;
    }
    else {
      *local_60 = 0;
      local_68 = 0;
    }
    local_58 = 0;
    local_50 = 0;
    local_4c = 0;
    if ((local_48 & 1) == 0) {
      local_48 = 0;
    }
    else {
      *local_38 = 0;
      local_40 = 0;
      if ((local_48 & 1) != 0) {
        operator_delete(local_38);
      }
    }
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if ((local_b0[0] & 1) != 0) {
      operator_delete(local_a0);
    }
  }
  *(undefined4 *)(this + 0x70) = 0;
  return;
}


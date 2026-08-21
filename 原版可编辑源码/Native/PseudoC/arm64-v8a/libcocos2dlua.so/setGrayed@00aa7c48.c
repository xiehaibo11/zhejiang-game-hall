
/* fairygui::FUILabel::setGrayed(bool) */

void __thiscall fairygui::FUILabel::setGrayed(FUILabel *this,bool param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort local_38;
  undefined1 local_36;
  ushort local_30;
  undefined1 local_2e;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (this[0x6c5] == (FUILabel)param_1) goto LAB_00aa7f24;
                    /* try { // try from 00aa7c74 to 00ba7ca3 has its CatchHandler @ 00aa8024 */
  this[0x6c5] = (FUILabel)param_1;
  if (*(int *)(this + 0x308) == 1) {
    if (this[0x6c4] != (FUILabel)0x0) {
      lVar3 = *(long *)(this + 0x6a0);
      if (param_1) {
                    /* try { // try from 00aa7cb0 to 00ba7ccb has its CatchHandler @ 00aa80a8 */
        fVar5 = (float)NEON_ucvtf((uint)*(byte *)(lVar3 + 0x1c));
        fVar6 = (float)NEON_ucvtf((uint)*(byte *)(lVar3 + 0x1d));
        fVar7 = (float)NEON_ucvtf((uint)*(byte *)(lVar3 + 0x1e));
        uVar2 = (uint)(fVar5 * 0.299 + fVar6 * 0.587 + fVar7 * 0.114);
                    /* try { // try from 00aa7cec to 00ba7d07 has its CatchHandler @ 00aa8084 */
        local_2e = (undefined1)uVar2;
        local_30 = (ushort)uVar2 & 0xff | (ushort)((uVar2 & 0xff) << 8);
      }
      else {
        local_2e = *(undefined1 *)(lVar3 + 0x1e);
        local_30 = *(ushort *)(lVar3 + 0x1c);
      }
      pcVar4 = *(code **)(*(long *)this + 0x4c0);
      goto LAB_00aa7dac;
    }
  }
  else {
    lVar3 = *(long *)(this + 0x6a0);
    if (param_1) {
      fVar5 = (float)NEON_ucvtf((uint)*(byte *)(lVar3 + 0x1c));
                    /* try { // try from 00aa7d28 to 00ba7d3f has its CatchHandler @ 00aa805c */
      fVar6 = (float)NEON_ucvtf((uint)*(byte *)(lVar3 + 0x1d));
      fVar7 = (float)NEON_ucvtf((uint)*(byte *)(lVar3 + 0x1e));
      uVar2 = (uint)(fVar5 * 0.299 + fVar6 * 0.587 + fVar7 * 0.114);
      local_36 = (undefined1)uVar2;
      local_38 = (ushort)uVar2 & 0xff | (ushort)((uVar2 & 0xff) << 8);
                    /* try { // try from 00aa7d5c to 00ba7d87 has its CatchHandler @ 00aa8058 */
    }
    else {
      local_36 = *(undefined1 *)(lVar3 + 0x1e);
      local_38 = *(ushort *)(lVar3 + 0x1c);
    }
    cocos2d::Color4B::Color4B((Color4B *)&local_30,(Color3B *)&local_38,0xff);
                    /* try { // try from 00aa7d88 to 00ba7fef has its CatchHandler @ 00aa7a4c */
    pcVar4 = *(code **)(*(long *)this + 0x598);
LAB_00aa7dac:
    (*pcVar4)(this,&local_30);
  }
  lVar3 = *(long *)(this + 0x6a0);
  uVar2 = *(uint *)(lVar3 + 0x34);
  if ((uVar2 & 1) != 0) {
    if (this[0x6c5] == (FUILabel)0x0) {
      local_36 = *(undefined1 *)(lVar3 + 0x3a);
      local_38 = *(ushort *)(lVar3 + 0x38);
    }
    else {
      fVar5 = (float)NEON_ucvtf((uint)*(byte *)(lVar3 + 0x38));
      fVar6 = (float)NEON_ucvtf((uint)*(byte *)(lVar3 + 0x39));
      fVar7 = (float)NEON_ucvtf((uint)*(byte *)(lVar3 + 0x3a));
      uVar2 = (uint)(fVar5 * 0.299 + fVar6 * 0.587 + fVar7 * 0.114);
      local_36 = (undefined1)uVar2;
      local_38 = (ushort)uVar2 & 0xff | (ushort)((uVar2 & 0xff) << 8);
    }
    cocos2d::Color4B::Color4B((Color4B *)&local_30,(Color3B *)&local_38,0xff);
    (**(code **)(*(long *)this + 0x5a8))
              (this,&local_30,*(undefined4 *)(*(long *)(this + 0x6a0) + 0x3c));
    lVar3 = *(long *)(this + 0x6a0);
    uVar2 = *(uint *)(lVar3 + 0x34);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    if (this[0x6c5] == (FUILabel)0x0) {
      local_36 = *(undefined1 *)(lVar3 + 0x42);
      local_38 = *(ushort *)(lVar3 + 0x40);
    }
    else {
      fVar5 = (float)NEON_ucvtf((uint)*(byte *)(lVar3 + 0x40));
      fVar6 = (float)NEON_ucvtf((uint)*(byte *)(lVar3 + 0x41));
      fVar7 = (float)NEON_ucvtf((uint)*(byte *)(lVar3 + 0x42));
      uVar2 = (uint)(fVar5 * 0.299 + fVar6 * 0.587 + fVar7 * 0.114);
      local_36 = (undefined1)uVar2;
      local_38 = (ushort)uVar2 & 0xff | (ushort)((uVar2 & 0xff) << 8);
    }
    cocos2d::Color4B::Color4B((Color4B *)&local_30,(Color3B *)&local_38,0xff);
    (**(code **)(*(long *)this + 0x5a0))(this,&local_30,*(long *)(this + 0x6a0) + 0x44,0);
  }
LAB_00aa7f24:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


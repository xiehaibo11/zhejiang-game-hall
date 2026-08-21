
/* cocos2d::renderer::Texture2D::update(cocos2d::renderer::Texture::Options const&) */

void __thiscall cocos2d::renderer::Texture2D::update(Texture2D *this,Options *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  Texture2D TVar3;
  ushort uVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  ushort uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_70;
  ushort local_6c;
  ushort local_6a;
  undefined2 local_68;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar8 = *(ushort *)(param_1 + 0x28);
  *(ushort *)(this + 0x24) = uVar8;
  uVar4 = *(ushort *)(param_1 + 0x2a);
  *(ushort *)(this + 0x26) = uVar4;
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  this[0x29] = *(Texture2D *)(param_1 + 0x32);
  this[0x2a] = *(Texture2D *)(param_1 + 0x33);
  this[0x2b] = *(Texture2D *)(param_1 + 0x34);
  *(undefined2 *)(this + 0x20) = *(undefined2 *)(param_1 + 0x2e);
  *(undefined2 *)(this + 0x22) = *(undefined2 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x2c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x24);
  this[0x39] = *(Texture2D *)(param_1 + 0x38);
  this[0x28] = *(Texture2D *)(param_1 + 0x2c);
  TVar3 = *(Texture2D *)(param_1 + 0x35);
  this[0x38] = TVar3;
  bVar7 = TVar3 != (Texture2D)0x0;
                    /* try { // try from 009b898c to 00ab8a6f has its CatchHandler @ 009b87e0 */
  if (1 < (ulong)(*(long *)(param_1 + 8) - *(long *)param_1 >> 4)) {
    uVar1 = (uint)uVar8;
    if (uVar8 < uVar4 || (uint)uVar8 == (uint)uVar4) {
      uVar1 = (uint)uVar4;
    }
    if (uVar1 >> (ulong)((int)((ulong)(*(long *)(param_1 + 8) - *(long *)param_1) >> 4) - 1U & 0x1f)
        != 1) {
      __android_log_print(6,"renderer",
                          " (86): texture-2d mipmap is invalid, should have a 1x1 mipmap.\n");
      uVar8 = *(ushort *)(this + 0x24);
    }
    bVar7 = false;
  }
  bVar6 = false;
  if ((uVar8 != 0) && ((uVar8 - 1 & uVar8) == 0)) {
    uVar8 = *(ushort *)(this + 0x26);
                    /* catch() { ... } // from try @ 009b8860 with catch @ 009b8a00 */
                    /* catch() { ... } // from try @ 009b8854 with catch @ 009b8a04 */
                    /* catch() { ... } // from try @ 009b8834 with catch @ 009b8a08 */
    bVar6 = (bool)(bVar7 & (uVar8 != 0 && (uVar8 - 1 & uVar8) == 0));
  }
  glActiveTexture(0x84c0);
                    /* catch() { ... } // from try @ 009b886c with catch @ 009b8a18 */
  glBindTexture(0xde1,*(undefined4 *)(this + 0xc));
  puVar2 = *(undefined8 **)param_1;
  if (puVar2 != *(undefined8 **)(param_1 + 8)) {
    local_68 = *(undefined2 *)(param_1 + 0x36);
    local_80 = 0;
    uStack_78 = 0;
    local_6c = *(ushort *)(this + 0x24);
    lVar11 = (long)*(undefined8 **)(param_1 + 8) - (long)puVar2;
    local_6a = *(ushort *)(this + 0x26);
    local_70 = 0;
    if (lVar11 != 0) {
      local_70 = 0;
      uStack_78 = puVar2[1];
      local_80 = *puVar2;
                    /* try { // try from 009b8a70 to 00ab8acf has its CatchHandler @ 009b8a70
                       catch() { ... } // from try @ 009b8a70 with catch @ 009b8a70
                       catch() { ... } // from try @ 009b8cb0 with catch @ 009b8a70 */
      uVar9 = lVar11 >> 4;
      setImage(this,(ImageOption *)&local_80);
      if (1 < uVar9) {
        uVar10 = 1;
        lVar11 = 0x10;
        do {
          local_70 = (uint)uVar10;
          local_6c = *(ushort *)(this + 0x24) >> (ulong)(local_70 & 0x1f);
          local_6a = *(ushort *)(this + 0x26) >> (ulong)(local_70 & 0x1f);
          uStack_78 = ((undefined8 *)(*(long *)param_1 + lVar11))[1];
          local_80 = *(undefined8 *)(*(long *)param_1 + lVar11);
          setImage(this,(ImageOption *)&local_80);
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 0x10;
        } while (uVar9 != uVar10);
      }
    }
  }
                    /* try { // try from 009b8ad0 to 00ab8ae7 has its CatchHandler @ 009b8d38 */
  setTexInfo(this);
  if (bVar6) {
    glHint(0x8192,0x1102);
    glGenerateMipmap(0xde1);
  }
                    /* try { // try from 009b8af0 to 00ab8afb has its CatchHandler @ 009b8d34 */
  DeviceGraphics::restoreTexture(*(DeviceGraphics **)(this + 0x10),0);
                    /* try { // try from 009b8afc to 00ab8b07 has its CatchHandler @ 009b8d30 */
                    /* try { // try from 009b8b08 to 00ab8caf has its CatchHandler @ 009b8d48 */
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


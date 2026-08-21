
/* cocos2d::Sprite::setCenterRectNormalized(cocos2d::Rect const&) */

void __thiscall cocos2d::Sprite::setCenterRectNormalized(Sprite *this,Rect *param_1)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  Rect aRStack_58 [16];
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00f3fc28 to 0103fc8f has its CatchHandler @ 00f3fb84 */
  if ((*(uint *)(this + 0x42c) | 2) == 2) {
    Rect::Rect(aRStack_48,*(float *)param_1,
               (1.0 - *(float *)(param_1 + 4)) - *(float *)(param_1 + 0xc),*(float *)(param_1 + 8),
               *(float *)(param_1 + 0xc));
                    /* catch() { ... } // from try @ 00f3fbd8 with catch @ 00f3fc64 */
    uVar2 = Rect::equals((Rect *)(this + 0x41c),aRStack_48);
                    /* catch() { ... } // from try @ 00f3fc00 with catch @ 00f3fc6c */
    if ((uVar2 & 1) == 0) {
      Rect::operator=((Rect *)(this + 0x41c),aRStack_48);
      Rect::Rect(aRStack_58,0.0,0.0,1.0,1.0);
      uVar2 = Rect::equals(aRStack_48,aRStack_58);
      if ((uVar2 & 1) == 0) {
        if (*(int *)(this + 0x42c) != 2) {
          *(undefined4 *)(this + 0x42c) = 2;
          pvVar3 = malloc(0x180);
          *(void **)(this + 0x4b0) = pvVar3;
          puVar4 = malloc(0x6c);
          *(undefined8 **)(this + 0x4b8) = puVar4;
          puVar4[1] = 0x1000500000005;
          *puVar4 = 0x1000500000004;
          puVar4[3] = 0x3000700020006;
          puVar4[2] = 0x1000600020006;
          puVar4[5] = 0x4000900050009;
          puVar4[4] = 0x4000800020007;
          puVar4[7] = 0x6000a0005000a;
          puVar4[6] = 0x6000a00050009;
          puVar4[9] = 0x9000d0008000c;
          puVar4[8] = 0x6000b0007000b;
          puVar4[0xb] = 0x9000e000a000e;
          puVar4[10] = 0x9000d0008000d;
          puVar4[0xc] = 0xb000f000a000e;
          *(undefined4 *)(puVar4 + 0xd) = 0xa000f;
        }
      }
      else {
        *(undefined4 *)(this + 0x42c) = 0;
        free(*(void **)(this + 0x4b0));
        free(*(void **)(this + 0x4b8));
        *(undefined8 *)(this + 0x4b8) = 0;
        *(undefined8 *)(this + 0x4b0) = 0;
      }
      updateStretchFactor(this);
      updatePoly(this);
      (**(code **)(*(long *)this + 0x528))(this);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


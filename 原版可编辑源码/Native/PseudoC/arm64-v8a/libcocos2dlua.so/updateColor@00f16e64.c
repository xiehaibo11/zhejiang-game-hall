
/* cocos2d::LayerGradient::updateColor() */

void __thiscall cocos2d::LayerGradient::updateColor(LayerGradient *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  Color4F local_68 [16];
  Color4F local_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar5 = *(float *)(this + 0x418);
  fVar7 = *(float *)(this + 0x41c);
  fVar2 = (float)NEON_ucvtf((uint)(byte)this[0x21a]);
  fVar3 = (float)NEON_ucvtf((uint)(byte)this[0x21b]);
  fVar4 = (float)NEON_ucvtf((uint)(byte)this[0x21c]);
  fVar10 = (float)NEON_ucvtf((uint)(byte)this[0x218]);
  fVar2 = fVar2 / 255.0;
  fVar3 = fVar3 / 255.0;
  fVar4 = fVar4 / 255.0;
  fVar10 = fVar10 / 255.0;
  fVar8 = SQRT(fVar5 * fVar5 + fVar7 * fVar7);
  *(float *)(this + 0x350) = fVar2;
  *(float *)(this + 0x354) = fVar3;
  *(float *)(this + 0x358) = fVar4;
  *(float *)(this + 0x35c) = fVar10;
  *(float *)(this + 0x360) = fVar2;
  *(float *)(this + 0x364) = fVar3;
  *(float *)(this + 0x368) = fVar4;
  *(float *)(this + 0x36c) = fVar10;
  *(float *)(this + 0x370) = fVar2;
  *(float *)(this + 0x374) = fVar3;
  *(float *)(this + 0x378) = fVar4;
  *(float *)(this + 0x37c) = fVar10;
  *(float *)(this + 0x380) = fVar2;
  *(float *)(this + 900) = fVar3;
  *(float *)(this + 0x388) = fVar4;
  *(float *)(this + 0x38c) = fVar10;
  if (fVar8 != 0.0) {
    fVar5 = fVar5 / fVar8;
    fVar7 = fVar7 / fVar8;
    if (this[0x420] != (LayerGradient)0x0) {
      fVar8 = (1.0 / (ABS(fVar5) + ABS(fVar7))) * 1.4142135;
      fVar5 = fVar5 * fVar8;
      fVar7 = fVar7 * fVar8;
    }
    fVar8 = (float)NEON_ucvtf((uint)(byte)this[0x416]);
    Color4F::Color4F(local_58,fVar2,fVar3,fVar4,(fVar10 * fVar8) / 255.0);
    fVar8 = (float)NEON_ucvtf((uint)(byte)this[0x417]);
    fVar2 = (float)NEON_ucvtf((uint)(byte)this[0x413]);
    fVar3 = (float)NEON_ucvtf((uint)(byte)this[0x414]);
    fVar4 = (float)NEON_ucvtf((uint)(byte)this[0x415]);
    Color4F::Color4F(local_68,fVar2 / 255.0,fVar3 / 255.0,fVar4 / 255.0,(fVar10 * fVar8) / 255.0);
    fVar9 = (fVar7 + fVar5 + 1.4142135) / 2.828427;
    fVar3 = (float)local_68._0_8_;
    fVar8 = (float)local_58._0_8_ - fVar3;
    fVar4 = SUB84(local_68._0_8_,4);
    fVar10 = SUB84(local_58._0_8_,4) - fVar4;
    fVar11 = (fVar7 + (1.4142135 - fVar5)) / 2.828427;
    fVar6 = ((fVar5 + 1.4142135) - fVar7) / 2.828427;
    fVar2 = ((1.4142135 - fVar5) - fVar7) / 2.828427;
    *(ulong *)(this + 0x350) = CONCAT44(fVar4 + fVar10 * fVar9,fVar3 + fVar8 * fVar9);
    *(ulong *)(this + 0x380) = CONCAT44(fVar4 + fVar10 * fVar2,fVar3 + fVar8 * fVar2);
    *(ulong *)(this + 0x360) = CONCAT44(fVar4 + fVar10 * fVar11,fVar3 + fVar8 * fVar11);
    *(ulong *)(this + 0x370) = CONCAT44(fVar4 + fVar10 * fVar6,fVar3 + fVar8 * fVar6);
    fVar5 = (float)local_68._8_8_;
    fVar3 = (float)local_58._8_8_ - fVar5;
    fVar7 = SUB84(local_68._8_8_,4);
    fVar4 = SUB84(local_58._8_8_,4) - fVar7;
    *(ulong *)(this + 0x358) = CONCAT44(fVar7 + fVar4 * fVar9,fVar5 + fVar3 * fVar9);
    *(ulong *)(this + 0x368) = CONCAT44(fVar7 + fVar4 * fVar11,fVar5 + fVar3 * fVar11);
    *(ulong *)(this + 0x378) = CONCAT44(fVar7 + fVar4 * fVar6,fVar5 + fVar3 * fVar6);
    *(ulong *)(this + 0x388) = CONCAT44(fVar7 + fVar4 * fVar2,fVar5 + fVar3 * fVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


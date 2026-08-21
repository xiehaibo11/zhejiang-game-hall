
/* void std::__ndk1::vector<cocos2d::renderer::Program::Uniform,
   std::__ndk1::allocator<cocos2d::renderer::Program::Uniform>
   >::__push_back_slow_path<cocos2d::renderer::Program::Uniform>(cocos2d::renderer::Program::Uniform&&)
    */

void __thiscall
std::__ndk1::
vector<cocos2d::renderer::Program::Uniform,std::__ndk1::allocator<cocos2d::renderer::Program::Uniform>>
::__push_back_slow_path<cocos2d::renderer::Program::Uniform>
          (vector<cocos2d::renderer::Program::Uniform,std::__ndk1::allocator<cocos2d::renderer::Program::Uniform>>
           *this,Uniform *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar4 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar11 = 0x492492492492492;
  uVar1 = lVar4 * 0x6db6db6db6db6db7 + 1;
  if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar5 = *(long *)(this + 0x10) - *(long *)this >> 3;
                    /* try { // try from 009b7c7c to 00ab7d5f has its CatchHandler @ 009b7aec */
  if ((ulong)(lVar5 * 0x6db6db6db6db6db7) < 0x249249249249249) {
    uVar6 = lVar5 * -0x2492492492492492;
    uVar11 = uVar1;
    if (uVar1 <= uVar6) {
      uVar11 = uVar6;
    }
    if (uVar11 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_009b7cac;
    }
  }
  pvVar3 = operator_new(uVar11 * 0x38);
LAB_009b7cac:
  uVar13 = *(undefined8 *)(param_1 + 8);
  uVar12 = *(undefined8 *)param_1;
  puVar7 = (undefined8 *)((long)pvVar3 + lVar4 * 8);
  puVar7[2] = *(undefined8 *)(param_1 + 0x10);
  puVar7[1] = uVar13;
  *puVar7 = uVar12;
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  uVar13 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  puVar7[6] = *(undefined8 *)(param_1 + 0x30);
  puVar7[5] = uVar12;
  puVar7[4] = uVar14;
  puVar7[3] = uVar13;
  pbVar9 = *(byte **)this;
  pbVar8 = *(byte **)(this + 8);
  puVar2 = puVar7 + 7;
  pbVar10 = pbVar9;
                    /* catch() { ... } // from try @ 009b7b6c with catch @ 009b7cf0 */
  if (pbVar8 != pbVar9) {
    do {
                    /* catch() { ... } // from try @ 009b7b60 with catch @ 009b7cf4 */
                    /* catch() { ... } // from try @ 009b7b40 with catch @ 009b7cf8 */
      uVar13 = *(undefined8 *)(pbVar8 + -0x30);
      uVar12 = *(undefined8 *)(pbVar8 + -0x38);
      puVar7[-5] = *(undefined8 *)(pbVar8 + -0x28);
      puVar7[-6] = uVar13;
      puVar7[-7] = uVar12;
      pbVar10 = pbVar8 + -0x18;
      uVar12 = *(undefined8 *)(pbVar8 + -0x20);
      uVar14 = *(undefined8 *)(pbVar8 + -8);
      uVar13 = *(undefined8 *)(pbVar8 + -0x10);
                    /* catch() { ... } // from try @ 009b7b78 with catch @ 009b7d08 */
      pbVar8[-0x30] = 0;
      pbVar8[-0x2f] = 0;
      pbVar8[-0x2e] = 0;
      pbVar8[-0x2d] = 0;
      pbVar8[-0x2c] = 0;
      pbVar8[-0x2b] = 0;
      pbVar8[-0x2a] = 0;
      pbVar8[-0x29] = 0;
      pbVar8[-0x28] = 0;
      pbVar8[-0x27] = 0;
      pbVar8[-0x26] = 0;
      pbVar8[-0x25] = 0;
      pbVar8[-0x24] = 0;
      pbVar8[-0x23] = 0;
      pbVar8[-0x22] = 0;
      pbVar8[-0x21] = 0;
      pbVar8[-0x38] = 0;
      pbVar8[-0x37] = 0;
      pbVar8[-0x36] = 0;
      pbVar8[-0x35] = 0;
      pbVar8[-0x34] = 0;
      pbVar8[-0x33] = 0;
      pbVar8[-0x32] = 0;
      pbVar8[-0x31] = 0;
      pbVar8 = pbVar8 + -0x38;
      puVar7[-3] = *(undefined8 *)pbVar10;
      puVar7[-4] = uVar12;
      puVar7[-1] = uVar14;
      puVar7[-2] = uVar13;
      puVar7 = puVar7 + -7;
    } while (pbVar9 != pbVar8);
    pbVar9 = *(byte **)(this + 8);
    pbVar10 = *(byte **)this;
  }
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar11 * 0x38);
  while (pbVar8 = pbVar9, pbVar8 != pbVar10) {
    pbVar9 = pbVar8 + -0x38;
    if ((*pbVar9 & 1) != 0) {
      operator_delete(*(void **)(pbVar8 + -0x28));
    }
  }
                    /* try { // try from 009b7d60 to 00ab7db7 has its CatchHandler @ 009b7d60
                       catch() { ... } // from try @ 009b7d60 with catch @ 009b7d60
                       catch() { ... } // from try @ 009b7f40 with catch @ 009b7d60 */
  if (pbVar10 == (byte *)0x0) {
    return;
  }
  operator_delete(pbVar10);
  return;
}


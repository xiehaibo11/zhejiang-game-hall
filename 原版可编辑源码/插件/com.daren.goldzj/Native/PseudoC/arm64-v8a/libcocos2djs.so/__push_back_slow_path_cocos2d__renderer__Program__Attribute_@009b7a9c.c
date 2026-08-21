
/* void std::__ndk1::vector<cocos2d::renderer::Program::Attribute,
   std::__ndk1::allocator<cocos2d::renderer::Program::Attribute>
   >::__push_back_slow_path<cocos2d::renderer::Program::Attribute>(cocos2d::renderer::Program::Attribute&&)
    */

void __thiscall
std::__ndk1::
vector<cocos2d::renderer::Program::Attribute,std::__ndk1::allocator<cocos2d::renderer::Program::Attribute>>
::__push_back_slow_path<cocos2d::renderer::Program::Attribute>
          (vector<cocos2d::renderer::Program::Attribute,std::__ndk1::allocator<cocos2d::renderer::Program::Attribute>>
           *this,Attribute *param_1)

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
  
  lVar4 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar11 = 0x555555555555555;
  uVar1 = lVar4 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar5 = *(long *)(this + 0x10) - *(long *)this >> 4;
                    /* try { // try from 009b7aec to 00ab7b3f has its CatchHandler @ 009b7aec
                       catch() { ... } // from try @ 009b7aec with catch @ 009b7aec
                       catch() { ... } // from try @ 009b7c7c with catch @ 009b7aec */
  if ((ulong)(lVar5 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
    uVar6 = lVar5 * 0x5555555555555556;
    uVar11 = uVar1;
    if (uVar1 <= uVar6) {
      uVar11 = uVar6;
    }
    if (uVar11 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_009b7b20;
    }
  }
  pvVar3 = operator_new(uVar11 * 0x30);
LAB_009b7b20:
  uVar13 = *(undefined8 *)(param_1 + 8);
  uVar12 = *(undefined8 *)param_1;
  puVar7 = (undefined8 *)((long)pvVar3 + lVar4 * 0x10);
  puVar7[2] = *(undefined8 *)(param_1 + 0x10);
  puVar7[1] = uVar13;
  *puVar7 = uVar12;
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  uVar12 = *(undefined8 *)(param_1 + 0x18);
                    /* try { // try from 009b7b40 to 00ab7b57 has its CatchHandler @ 009b7cf8 */
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)(puVar7 + 5) = *(undefined4 *)(param_1 + 0x28);
  puVar7[4] = uVar13;
  puVar7[3] = uVar12;
  pbVar9 = *(byte **)this;
  pbVar8 = *(byte **)(this + 8);
  puVar2 = puVar7 + 6;
                    /* try { // try from 009b7b60 to 00ab7b6b has its CatchHandler @ 009b7cf4 */
  pbVar10 = pbVar9;
  if (pbVar8 != pbVar9) {
    do {
                    /* try { // try from 009b7b6c to 00ab7b77 has its CatchHandler @ 009b7cf0 */
      uVar13 = *(undefined8 *)(pbVar8 + -0x28);
      uVar12 = *(undefined8 *)(pbVar8 + -0x30);
      puVar7[-4] = *(undefined8 *)(pbVar8 + -0x20);
      puVar7[-5] = uVar13;
      puVar7[-6] = uVar12;
                    /* try { // try from 009b7b78 to 00ab7c7b has its CatchHandler @ 009b7d08 */
      pbVar10 = pbVar8 + -8;
      uVar13 = *(undefined8 *)(pbVar8 + -0x10);
      uVar12 = *(undefined8 *)(pbVar8 + -0x18);
      pbVar8[-0x28] = 0;
      pbVar8[-0x27] = 0;
      pbVar8[-0x26] = 0;
      pbVar8[-0x25] = 0;
      pbVar8[-0x24] = 0;
      pbVar8[-0x23] = 0;
      pbVar8[-0x22] = 0;
      pbVar8[-0x21] = 0;
      pbVar8[-0x20] = 0;
      pbVar8[-0x1f] = 0;
      pbVar8[-0x1e] = 0;
      pbVar8[-0x1d] = 0;
      pbVar8[-0x1c] = 0;
      pbVar8[-0x1b] = 0;
      pbVar8[-0x1a] = 0;
      pbVar8[-0x19] = 0;
      pbVar8[-0x30] = 0;
      pbVar8[-0x2f] = 0;
      pbVar8[-0x2e] = 0;
      pbVar8[-0x2d] = 0;
      pbVar8[-0x2c] = 0;
      pbVar8[-0x2b] = 0;
      pbVar8[-0x2a] = 0;
      pbVar8[-0x29] = 0;
      pbVar8 = pbVar8 + -0x30;
      *(undefined4 *)(puVar7 + -1) = *(undefined4 *)pbVar10;
      puVar7[-2] = uVar13;
      puVar7[-3] = uVar12;
      puVar7 = puVar7 + -6;
    } while (pbVar9 != pbVar8);
    pbVar9 = *(byte **)(this + 8);
    pbVar10 = *(byte **)this;
  }
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar11 * 0x30);
  while (pbVar8 = pbVar9, pbVar8 != pbVar10) {
    pbVar9 = pbVar8 + -0x30;
    if ((*pbVar9 & 1) != 0) {
      operator_delete(*(void **)(pbVar8 + -0x20));
    }
  }
  if (pbVar10 == (byte *)0x0) {
    return;
  }
  operator_delete(pbVar10);
  return;
}



/* void std::__ndk1::vector<cocos2d::renderer::VertexFormat::Info,
   std::__ndk1::allocator<cocos2d::renderer::VertexFormat::Info>
   >::__push_back_slow_path<cocos2d::renderer::VertexFormat::Info>(cocos2d::renderer::VertexFormat::Info&&)
    */

void __thiscall
std::__ndk1::
vector<cocos2d::renderer::VertexFormat::Info,std::__ndk1::allocator<cocos2d::renderer::VertexFormat::Info>>
::__push_back_slow_path<cocos2d::renderer::VertexFormat::Info>
          (vector<cocos2d::renderer::VertexFormat::Info,std::__ndk1::allocator<cocos2d::renderer::VertexFormat::Info>>
           *this,Info *param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  Info IVar4;
  byte bVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar13 = *(long *)(this + 8) - *(long *)this >> 5;
  uVar14 = lVar13 + 1;
  if (uVar14 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar7 = *(long *)(this + 0x10) - *(long *)this;
  if ((ulong)(lVar7 >> 5) < 0x3ffffffffffffff) {
    uVar8 = lVar7 >> 4;
    if (uVar14 <= uVar8) {
      uVar14 = uVar8;
    }
    if (uVar14 == 0) {
      pvVar6 = (void *)0x0;
      goto LAB_00965b5c;
    }
    if (uVar14 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar14 = 0x7ffffffffffffff;
  }
  pvVar6 = operator_new(uVar14 << 5);
LAB_00965b5c:
  uVar16 = *(undefined8 *)(param_1 + 8);
  uVar15 = *(undefined8 *)param_1;
  puVar9 = (undefined8 *)((long)pvVar6 + lVar13 * 0x20);
  puVar9[2] = *(undefined8 *)(param_1 + 0x10);
  puVar9[1] = uVar16;
  *puVar9 = uVar15;
  IVar4 = param_1[0x1e];
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((long)puVar9 + 0x1c) = *(undefined2 *)(param_1 + 0x1c);
  *(undefined4 *)(puVar9 + 3) = uVar3;
  *(Info *)((long)puVar9 + 0x1e) = IVar4;
  pbVar12 = *(byte **)this;
  pbVar11 = *(byte **)(this + 8);
  puVar2 = puVar9 + 4;
  pbVar10 = pbVar12;
  if (pbVar11 != pbVar12) {
    pbVar10 = pbVar11 + (-0x20 - (long)pbVar12);
    puVar9 = puVar9 + -1;
    do {
      uVar16 = *(undefined8 *)(pbVar11 + -0x18);
      uVar15 = *(undefined8 *)(pbVar11 + -0x20);
      puVar9[-1] = *(undefined8 *)(pbVar11 + -0x10);
      puVar9[-2] = uVar16;
      puVar9[-3] = uVar15;
      bVar5 = pbVar11[-2];
      pbVar1 = pbVar11 + -4;
      uVar3 = *(undefined4 *)(pbVar11 + -8);
      pbVar11[-0x18] = 0;
      pbVar11[-0x17] = 0;
      pbVar11[-0x16] = 0;
      pbVar11[-0x15] = 0;
      pbVar11[-0x14] = 0;
      pbVar11[-0x13] = 0;
      pbVar11[-0x12] = 0;
      pbVar11[-0x11] = 0;
      pbVar11[-0x10] = 0;
      pbVar11[-0xf] = 0;
      pbVar11[-0xe] = 0;
      pbVar11[-0xd] = 0;
      pbVar11[-0xc] = 0;
      pbVar11[-0xb] = 0;
      pbVar11[-10] = 0;
      pbVar11[-9] = 0;
      pbVar11[-0x20] = 0;
      pbVar11[-0x1f] = 0;
      pbVar11[-0x1e] = 0;
      pbVar11[-0x1d] = 0;
      pbVar11[-0x1c] = 0;
      pbVar11[-0x1b] = 0;
      pbVar11[-0x1a] = 0;
      pbVar11[-0x19] = 0;
      pbVar11 = pbVar11 + -0x20;
      *(undefined2 *)((long)puVar9 + 4) = *(undefined2 *)pbVar1;
      *(undefined4 *)puVar9 = uVar3;
      *(byte *)((long)puVar9 + 6) = bVar5;
      puVar9 = puVar9 + -4;
    } while (pbVar12 != pbVar11);
    pbVar12 = *(byte **)(this + 8);
    puVar9 = (undefined8 *)
             ((long)pvVar6 + (lVar13 + ((ulong)pbVar10 >> 5 ^ 0xffffffffffffffff)) * 0x20);
    pbVar10 = *(byte **)this;
  }
  *(undefined8 **)this = puVar9;
  *(undefined8 **)(this + 8) = puVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar6 + uVar14 * 0x20);
  while (pbVar11 = pbVar12, pbVar11 != pbVar10) {
    pbVar12 = pbVar11 + -0x20;
    if ((*pbVar12 & 1) != 0) {
      operator_delete(*(void **)(pbVar11 + -0x10));
    }
  }
  if (pbVar10 == (byte *)0x0) {
    return;
  }
  operator_delete(pbVar10);
  return;
}


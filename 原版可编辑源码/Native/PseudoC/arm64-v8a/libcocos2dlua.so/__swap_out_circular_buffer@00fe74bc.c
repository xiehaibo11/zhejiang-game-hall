
/* std::__ndk1::vector<cocos2d::RenderQueue, std::__ndk1::allocator<cocos2d::RenderQueue>
   >::__swap_out_circular_buffer(std::__ndk1::__split_buffer<cocos2d::RenderQueue,
   std::__ndk1::allocator<cocos2d::RenderQueue>&>&) */

void __thiscall
std::__ndk1::vector<cocos2d::RenderQueue,std::__ndk1::allocator<cocos2d::RenderQueue>>::
__swap_out_circular_buffer
          (vector<cocos2d::RenderQueue,std::__ndk1::allocator<cocos2d::RenderQueue>> *this,
          __split_buffer *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar2 = *(undefined8 **)this;
  if (*(undefined8 **)(this + 8) == puVar2) {
    lVar4 = *(long *)(param_1 + 8);
  }
  else {
    lVar4 = *(long *)(param_1 + 8);
    puVar5 = *(undefined8 **)(this + 8);
    do {
      *(undefined8 *)(lVar4 + -0x80) = 0;
      *(undefined8 *)(lVar4 + -0x78) = 0;
      *(undefined8 *)(lVar4 + -0x70) = 0;
      puVar6 = puVar5 + -0x10;
      uVar3 = *puVar6;
      *(undefined8 *)(lVar4 + -0x78) = puVar5[-0xf];
      *(undefined8 *)(lVar4 + -0x80) = uVar3;
      *(undefined8 *)(lVar4 + -0x70) = puVar5[-0xe];
      *puVar6 = 0;
      puVar5[-0xf] = 0;
      puVar5[-0xe] = 0;
      *(undefined8 *)(lVar4 + -0x68) = 0;
      *(undefined8 *)(lVar4 + -0x60) = 0;
      *(undefined8 *)(lVar4 + -0x58) = 0;
      uVar3 = puVar5[-0xd];
      *(undefined8 *)(lVar4 + -0x60) = puVar5[-0xc];
      *(undefined8 *)(lVar4 + -0x68) = uVar3;
      *(undefined8 *)(lVar4 + -0x58) = puVar5[-0xb];
      puVar5[-0xd] = 0;
      puVar5[-0xc] = 0;
      puVar5[-0xb] = 0;
      *(undefined8 *)(lVar4 + -0x50) = 0;
      *(undefined8 *)(lVar4 + -0x48) = 0;
      *(undefined8 *)(lVar4 + -0x40) = 0;
      uVar3 = puVar5[-10];
      *(undefined8 *)(lVar4 + -0x48) = puVar5[-9];
      *(undefined8 *)(lVar4 + -0x50) = uVar3;
      *(undefined8 *)(lVar4 + -0x40) = puVar5[-8];
      puVar5[-10] = 0;
      puVar5[-9] = 0;
      puVar5[-8] = 0;
      *(undefined8 *)(lVar4 + -0x38) = 0;
      *(undefined8 *)(lVar4 + -0x30) = 0;
      *(undefined8 *)(lVar4 + -0x28) = 0;
      uVar3 = puVar5[-7];
      *(undefined8 *)(lVar4 + -0x30) = puVar5[-6];
      *(undefined8 *)(lVar4 + -0x38) = uVar3;
      *(undefined8 *)(lVar4 + -0x28) = puVar5[-5];
      puVar5[-7] = 0;
      puVar5[-6] = 0;
      puVar5[-5] = 0;
      *(undefined8 *)(lVar4 + -0x20) = 0;
      *(undefined8 *)(lVar4 + -0x18) = 0;
      *(undefined8 *)(lVar4 + -0x10) = 0;
      uVar3 = puVar5[-4];
      *(undefined8 *)(lVar4 + -0x18) = puVar5[-3];
      *(undefined8 *)(lVar4 + -0x20) = uVar3;
      *(undefined8 *)(lVar4 + -0x10) = puVar5[-2];
      uVar1 = *(undefined1 *)((long)puVar5 + -6);
      puVar5[-4] = 0;
      puVar5[-3] = 0;
      puVar5[-2] = 0;
      *(undefined2 *)(lVar4 + -8) = *(undefined2 *)(puVar5 + -1);
      *(undefined1 *)(lVar4 + -6) = uVar1;
      lVar4 = *(long *)(param_1 + 8) + -0x80;
      *(long *)(param_1 + 8) = lVar4;
      puVar5 = puVar6;
    } while (puVar2 != puVar6);
    puVar2 = *(undefined8 **)this;
  }
  *(long *)this = lVar4;
  *(undefined8 **)(param_1 + 8) = puVar2;
  uVar3 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  uVar3 = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 8);
  return;
}


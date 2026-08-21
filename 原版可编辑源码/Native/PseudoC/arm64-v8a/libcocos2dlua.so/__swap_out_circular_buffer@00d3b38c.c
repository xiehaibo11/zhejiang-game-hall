
/* std::__ndk1::vector<tinyobj::shape_t, std::__ndk1::allocator<tinyobj::shape_t>
   >::__swap_out_circular_buffer(std::__ndk1::__split_buffer<tinyobj::shape_t,
   std::__ndk1::allocator<tinyobj::shape_t>&>&) */

void __thiscall
std::__ndk1::vector<tinyobj::shape_t,std::__ndk1::allocator<tinyobj::shape_t>>::
__swap_out_circular_buffer
          (vector<tinyobj::shape_t,std::__ndk1::allocator<tinyobj::shape_t>> *this,
          __split_buffer *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = *(long *)this;
  lVar2 = *(long *)(this + 8);
  if (lVar2 == lVar6) {
    lVar3 = *(long *)(param_1 + 8);
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    lVar5 = 0;
    do {
      lVar1 = lVar2 + lVar5;
      uVar7 = *(undefined8 *)(lVar1 + -0x88);
      uVar4 = *(undefined8 *)(lVar1 + -0x90);
      lVar5 = lVar5 + -0x90;
      *(undefined8 *)(lVar3 + -0x80) = *(undefined8 *)(lVar1 + -0x80);
      *(undefined8 *)(lVar3 + -0x88) = uVar7;
      *(undefined8 *)(lVar3 + -0x90) = uVar4;
      *(undefined8 *)(lVar1 + -0x88) = 0;
      *(undefined8 *)(lVar1 + -0x80) = 0;
      *(undefined8 *)(lVar1 + -0x90) = 0;
      *(undefined8 *)(lVar3 + -0x78) = 0;
      *(undefined8 *)(lVar3 + -0x70) = 0;
      *(undefined8 *)(lVar3 + -0x68) = 0;
      uVar4 = *(undefined8 *)(lVar1 + -0x78);
      *(undefined8 *)(lVar3 + -0x70) = *(undefined8 *)(lVar1 + -0x70);
      *(undefined8 *)(lVar3 + -0x78) = uVar4;
      *(undefined8 *)(lVar3 + -0x68) = *(undefined8 *)(lVar1 + -0x68);
      *(undefined8 *)(lVar1 + -0x78) = 0;
      *(undefined8 *)(lVar1 + -0x70) = 0;
      *(undefined8 *)(lVar1 + -0x68) = 0;
      *(undefined8 *)(lVar3 + -0x60) = 0;
      *(undefined8 *)(lVar3 + -0x58) = 0;
      *(undefined8 *)(lVar3 + -0x50) = 0;
      uVar4 = *(undefined8 *)(lVar1 + -0x60);
      *(undefined8 *)(lVar3 + -0x58) = *(undefined8 *)(lVar1 + -0x58);
      *(undefined8 *)(lVar3 + -0x60) = uVar4;
      *(undefined8 *)(lVar3 + -0x50) = *(undefined8 *)(lVar1 + -0x50);
      *(undefined8 *)(lVar1 + -0x60) = 0;
      *(undefined8 *)(lVar1 + -0x58) = 0;
      *(undefined8 *)(lVar1 + -0x50) = 0;
      *(undefined8 *)(lVar3 + -0x48) = 0;
      *(undefined8 *)(lVar3 + -0x40) = 0;
      *(undefined8 *)(lVar3 + -0x38) = 0;
      uVar4 = *(undefined8 *)(lVar1 + -0x48);
      *(undefined8 *)(lVar3 + -0x40) = *(undefined8 *)(lVar1 + -0x40);
      *(undefined8 *)(lVar3 + -0x48) = uVar4;
      *(undefined8 *)(lVar3 + -0x38) = *(undefined8 *)(lVar1 + -0x38);
      *(undefined8 *)(lVar1 + -0x48) = 0;
      *(undefined8 *)(lVar1 + -0x40) = 0;
      *(undefined8 *)(lVar1 + -0x38) = 0;
      *(undefined8 *)(lVar3 + -0x30) = 0;
      *(undefined8 *)(lVar3 + -0x28) = 0;
      *(undefined8 *)(lVar3 + -0x20) = 0;
      uVar4 = *(undefined8 *)(lVar1 + -0x30);
      *(undefined8 *)(lVar3 + -0x28) = *(undefined8 *)(lVar1 + -0x28);
      *(undefined8 *)(lVar3 + -0x30) = uVar4;
      *(undefined8 *)(lVar3 + -0x20) = *(undefined8 *)(lVar1 + -0x20);
      *(undefined8 *)(lVar1 + -0x30) = 0;
      *(undefined8 *)(lVar1 + -0x28) = 0;
      *(undefined8 *)(lVar1 + -0x20) = 0;
      *(undefined8 *)(lVar3 + -0x18) = 0;
      *(undefined8 *)(lVar3 + -0x10) = 0;
      *(undefined8 *)(lVar3 + -8) = 0;
      uVar4 = *(undefined8 *)(lVar1 + -0x18);
      *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)(lVar1 + -0x10);
      *(undefined8 *)(lVar3 + -0x18) = uVar4;
      *(undefined8 *)(lVar3 + -8) = *(undefined8 *)(lVar1 + -8);
      *(undefined8 *)(lVar1 + -0x18) = 0;
      *(undefined8 *)(lVar1 + -0x10) = 0;
      *(undefined8 *)(lVar1 + -8) = 0;
      lVar3 = *(long *)(param_1 + 8) + -0x90;
      *(long *)(param_1 + 8) = lVar3;
    } while (lVar6 - lVar2 != lVar5);
    lVar6 = *(long *)this;
  }
  *(long *)this = lVar3;
  *(long *)(param_1 + 8) = lVar6;
  uVar4 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  uVar4 = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 8);
  return;
}


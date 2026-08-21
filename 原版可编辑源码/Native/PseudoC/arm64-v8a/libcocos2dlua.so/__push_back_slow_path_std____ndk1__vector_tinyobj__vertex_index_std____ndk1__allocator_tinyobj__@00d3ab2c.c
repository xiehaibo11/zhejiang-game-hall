
/* void std::__ndk1::vector<std::__ndk1::vector<tinyobj::vertex_index,
   std::__ndk1::allocator<tinyobj::vertex_index> >,
   std::__ndk1::allocator<std::__ndk1::vector<tinyobj::vertex_index,
   std::__ndk1::allocator<tinyobj::vertex_index> > >
   >::__push_back_slow_path<std::__ndk1::vector<tinyobj::vertex_index,
   std::__ndk1::allocator<tinyobj::vertex_index> >
   const&>(std::__ndk1::vector<tinyobj::vertex_index, std::__ndk1::allocator<tinyobj::vertex_index>
   > const&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::vector<tinyobj::vertex_index,std::__ndk1::allocator<tinyobj::vertex_index>>,std::__ndk1::allocator<std::__ndk1::vector<tinyobj::vertex_index,std::__ndk1::allocator<tinyobj::vertex_index>>>>
::
__push_back_slow_path<std::__ndk1::vector<tinyobj::vertex_index,std::__ndk1::allocator<tinyobj::vertex_index>>const&>
          (vector<std::__ndk1::vector<tinyobj::vertex_index,std::__ndk1::allocator<tinyobj::vertex_index>>,std::__ndk1::allocator<std::__ndk1::vector<tinyobj::vertex_index,std::__ndk1::allocator<tinyobj::vertex_index>>>>
           *this,vector *param_1)

{
  ulong uVar1;
  vector<tinyobj::vertex_index,std::__ndk1::allocator<tinyobj::vertex_index>> *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  vector<tinyobj::vertex_index,std::__ndk1::allocator<tinyobj::vertex_index>> *this_00;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  lVar6 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar11 = 0xaaaaaaaaaaaaaaa;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d3a848 with catch @ 00d3ab60
                        */
  uVar1 = lVar6 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar7 = *(long *)(this + 0x10) - *(long *)this >> 3;
  if ((ulong)(lVar7 * -0x5555555555555555) < 0x555555555555555) {
    uVar8 = lVar7 * 0x5555555555555556;
    uVar11 = uVar1;
    if (uVar1 <= uVar8) {
      uVar11 = uVar8;
    }
    if (uVar11 == 0) {
      pvVar5 = (void *)0x0;
      goto LAB_00d3abb8;
    }
  }
  pvVar5 = operator_new(uVar11 * 0x18);
LAB_00d3abb8:
  this_00 = (vector<tinyobj::vertex_index,std::__ndk1::allocator<tinyobj::vertex_index>> *)
            ((long)pvVar5 + lVar6 * 8);
  vector<tinyobj::vertex_index,std::__ndk1::allocator<tinyobj::vertex_index>>::vector
            (this_00,param_1);
  puVar9 = *(undefined8 **)this;
  puVar3 = *(undefined8 **)(this + 8);
  pvVar2 = this_00 + 0x18;
  puVar10 = puVar9;
  if (puVar3 != puVar9) {
    lVar6 = 0;
    do {
      *(undefined8 *)(this_00 + lVar6 + -0x18) = 0;
      *(undefined8 *)(this_00 + lVar6 + -0x10) = 0;
      *(undefined8 *)(this_00 + lVar6 + -8) = 0;
      uVar12 = *(undefined8 *)((long)puVar3 + lVar6 + -0x18);
      lVar7 = lVar6 + -0x18;
      *(undefined8 *)(this_00 + lVar6 + -0x10) = *(undefined8 *)((long)puVar3 + lVar6 + -0x10);
      *(undefined8 *)(this_00 + lVar6 + -0x18) = uVar12;
      *(undefined8 *)(this_00 + lVar6 + -8) = *(undefined8 *)((long)puVar3 + lVar6 + -8);
      *(undefined8 *)((long)puVar3 + lVar6 + -0x18) = 0;
      *(undefined8 *)((long)puVar3 + lVar6 + -0x10) = 0;
      *(undefined8 *)((long)puVar3 + lVar6 + -8) = 0;
      lVar6 = lVar7;
    } while ((long)puVar9 - (long)puVar3 != lVar7);
    puVar9 = *(undefined8 **)(this + 8);
    this_00 = this_00 + lVar7;
    puVar10 = *(undefined8 **)this;
  }
  *(vector<tinyobj::vertex_index,std::__ndk1::allocator<tinyobj::vertex_index>> **)this = this_00;
  *(vector<tinyobj::vertex_index,std::__ndk1::allocator<tinyobj::vertex_index>> **)(this + 8) =
       pvVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar11 * 0x18);
  if (puVar9 != puVar10) {
    pvVar5 = (void *)puVar9[-3];
    puVar3 = puVar9 + -3;
    while( true ) {
      puVar4 = puVar3;
      if (pvVar5 != (void *)0x0) {
        puVar9[-2] = pvVar5;
        operator_delete(pvVar5);
      }
      if (puVar10 == puVar4) break;
      pvVar5 = (void *)puVar4[-3];
      puVar3 = puVar4 + -3;
      puVar9 = puVar4;
    }
  }
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
    return;
  }
  return;
}


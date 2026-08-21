
/* void std::__ndk1::vector<tinyobj::shape_t, std::__ndk1::allocator<tinyobj::shape_t>
   >::__push_back_slow_path<tinyobj::shape_t const&>(tinyobj::shape_t const&) */

void __thiscall
std::__ndk1::vector<tinyobj::shape_t,std::__ndk1::allocator<tinyobj::shape_t>>::
__push_back_slow_path<tinyobj::shape_t_const&>
          (vector<tinyobj::shape_t,std::__ndk1::allocator<tinyobj::shape_t>> *this,shape_t *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  ulong uVar8;
  void *local_80;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_70;
  void *local_68;
  vector<tinyobj::shape_t,std::__ndk1::allocator<tinyobj::shape_t>> *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar8 = 0x1c71c71c71c71c7;
  uVar1 = lVar3 * -0x71c71c71c71c71c7 + 1;
  if (0x1c71c71c71c71c7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
                    /* try { // try from 00d3b210 to 00e3b2d3 has its CatchHandler @ 00d3b210
                       catch() { ... } // from try @ 00d3b210 with catch @ 00d3b210
                       catch() { ... } // from try @ 00d3b2e8 with catch @ 00d3b210 */
  lVar4 = *(long *)(this + 0x10) - *(long *)this >> 4;
  local_60 = this + 0x10;
  if ((ulong)(lVar4 * -0x71c71c71c71c71c7) < 0xe38e38e38e38e3) {
    uVar5 = lVar4 * 0x1c71c71c71c71c72;
    uVar8 = uVar1;
    if (uVar1 <= uVar5) {
      uVar8 = uVar5;
    }
    if (uVar8 == 0) {
      pvVar6 = (void *)0x0;
      goto LAB_00d3b270;
    }
  }
  local_68 = (void *)0x0;
  pvVar6 = operator_new(uVar8 * 0x90);
LAB_00d3b270:
  pbVar7 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           ((long)pvVar6 + lVar3 * 0x10);
  local_68 = (void *)((long)pvVar6 + uVar8 * 0x90);
  local_80 = pvVar6;
  local_78 = pbVar7;
  local_70 = pbVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            (pbVar7,(basic_string *)param_1);
  tinyobj::mesh_t::mesh_t((mesh_t *)((long)pvVar6 + lVar3 * 0x10 + 0x18),(mesh_t *)(param_1 + 0x18))
  ;
  local_70 = pbVar7 + 0x90;
  __swap_out_circular_buffer(this,(__split_buffer *)&local_80);
  pbVar7 = local_78;
  while (local_70 != pbVar7) {
    local_70 = local_70 + -0x90;
    FUN_00d2a634(local_60);
                    /* try { // try from 00d3b2d4 to 00e3b2e7 has its CatchHandler @ 00d3b32c */
  }
  if (local_80 != (void *)0x0) {
                    /* try { // try from 00d3b2e8 to 00e3b347 has its CatchHandler @ 00d3b210 */
    operator_delete(local_80);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* cocos2d::AutoPolygon::generatePolygon(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::Rect const&,
   float, float) */

void cocos2d::AutoPolygon::generatePolygon
               (basic_string *param_1,Rect *param_2,float param_3,float param_4)

{
  long lVar1;
  long *local_80 [2];
  byte local_70;
  void *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  AutoPolygon((AutoPolygon *)local_80,param_1);
  generateTriangles((AutoPolygon *)local_80,param_2,param_3,param_4);
  if (local_80[0] != (long *)0x0) {
    (**(code **)(*local_80[0] + 8))();
  }
  local_80[0] = (long *)0x0;
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


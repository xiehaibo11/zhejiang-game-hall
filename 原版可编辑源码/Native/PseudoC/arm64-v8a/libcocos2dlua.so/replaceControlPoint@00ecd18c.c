
/* cocos2d::PointArray::replaceControlPoint(cocos2d::Vec2 const&, long) */

void __thiscall
cocos2d::PointArray::replaceControlPoint(PointArray *this,Vec2 *param_1,long param_2)

{
  if ((ulong)param_2 < (ulong)(*(long *)(this + 0x38) - *(long *)(this + 0x30) >> 3)) {
    *(undefined8 *)(*(long *)(this + 0x30) + param_2 * 8) = *(undefined8 *)param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
}



/* cocos2d::renderer::Scene::getModel(unsigned int) */

undefined8 __thiscall cocos2d::renderer::Scene::getModel(Scene *this,uint param_1)

{
  if ((ulong)param_1 < (ulong)(*(long *)(this + 0x38) - *(long *)(this + 0x30) >> 3)) {
    return *(undefined8 *)(*(long *)(this + 0x30) + (ulong)param_1 * 8);
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
}


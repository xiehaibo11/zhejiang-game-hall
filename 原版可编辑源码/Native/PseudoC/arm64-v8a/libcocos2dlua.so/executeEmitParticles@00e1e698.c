
/* cocos2d::PUParticleSystem3D::executeEmitParticles(cocos2d::PUEmitter*, unsigned int, float) */

void cocos2d::PUParticleSystem3D::executeEmitParticles
               (PUEmitter *param_1,uint param_2,float param_3)

{
  int iVar1;
  long lVar2;
  PUEmitter *pPVar3;
  long lVar4;
  piecewise_construct_t *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_1 + 0x300) == 0) goto LAB_00e1e738;
  iVar1 = *(int *)((ulong)param_2 + 0x1e8);
  if (iVar1 == 2) {
    pPVar3 = param_1 + 0x3b0;
LAB_00e1e708:
    local_50 = (piecewise_construct_t *)((ulong)param_2 + 0x108);
    lVar4 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::DataPool<cocos2d::Particle3D>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::DataPool<cocos2d::Particle3D>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::DataPool<cocos2d::Particle3D>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::DataPool<cocos2d::Particle3D>>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)pPVar3,local_50,(tuple *)&DAT_01422af4,(tuple *)&local_50);
    pPVar3 = (PUEmitter *)(lVar4 + 0x28);
  }
  else {
    if (iVar1 == 1) {
      pPVar3 = param_1 + 0x3d8;
      goto LAB_00e1e708;
    }
    if (iVar1 != 0) goto LAB_00e1e738;
    pPVar3 = param_1 + 0x330;
  }
  emitParticles((DataPool *)param_1,pPVar3,param_2,param_3);
LAB_00e1e738:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


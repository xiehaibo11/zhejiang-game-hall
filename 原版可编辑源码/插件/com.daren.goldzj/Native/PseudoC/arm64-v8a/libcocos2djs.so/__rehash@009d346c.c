
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,
   cocos2d::renderer::MeshBuffer*>,
   std::__ndk1::__unordered_map_hasher<cocos2d::renderer::VertexFormat*,
   std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*, cocos2d::renderer::MeshBuffer*>,
   std::__ndk1::hash<cocos2d::renderer::VertexFormat*>, true>,
   std::__ndk1::__unordered_map_equal<cocos2d::renderer::VertexFormat*,
   std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*, cocos2d::renderer::MeshBuffer*>,
   std::__ndk1::equal_to<cocos2d::renderer::VertexFormat*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,
   cocos2d::renderer::MeshBuffer*> > >::__rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>,std::__ndk1::__unordered_map_hasher<cocos2d::renderer::VertexFormat*,std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>,std::__ndk1::hash<cocos2d::renderer::VertexFormat*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::renderer::VertexFormat*,std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>,std::__ndk1::equal_to<cocos2d::renderer::VertexFormat*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>>>
::__rehash(__hash_table<std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>,std::__ndk1::__unordered_map_hasher<cocos2d::renderer::VertexFormat*,std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>,std::__ndk1::hash<cocos2d::renderer::VertexFormat*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::renderer::VertexFormat*,std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>,std::__ndk1::equal_to<cocos2d::renderer::VertexFormat*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>>>
           *this,ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  
  if (param_1 == 0) {
    pvVar2 = *(void **)this;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009d34b8 with catch @ 009d34f8
                        */
    *(undefined8 *)this = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    *(undefined8 *)(this + 8) = 0;
  }
  else {
    if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar2 = operator_new(param_1 << 3);
    pvVar3 = *(void **)this;
    *(void **)this = pvVar2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    uVar4 = 0;
    *(ulong *)(this + 8) = param_1;
    do {
      *(undefined8 *)(*(long *)this + uVar4 * 8) = 0;
                    /* try { // try from 009d34b8 to 00ad34d7 has its CatchHandler @ 009d34f8 */
      uVar4 = uVar4 + 1;
    } while (param_1 != uVar4);
    plVar5 = *(long **)(this + 0x10);
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar6 = param_1 - 1;
      if ((uVar6 & param_1) == 0) {
        uVar4 = uVar4 & uVar6;
      }
      else if (param_1 <= uVar4) {
        uVar8 = 0;
        if (param_1 != 0) {
          uVar8 = uVar4 / param_1;
        }
        uVar4 = uVar4 - uVar8 * param_1;
      }
      *(__hash_table<std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>,std::__ndk1::__unordered_map_hasher<cocos2d::renderer::VertexFormat*,std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>,std::__ndk1::hash<cocos2d::renderer::VertexFormat*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::renderer::VertexFormat*,std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>,std::__ndk1::equal_to<cocos2d::renderer::VertexFormat*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>>>
        **)(*(long *)this + uVar4 * 8) = this + 0x10;
      plVar7 = (long *)*plVar5;
joined_r0x009d351c:
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if ((uVar6 & param_1) == 0) {
            uVar8 = uVar8 & uVar6;
            if (uVar8 != uVar4) goto LAB_009d3560;
LAB_009d3524:
            plVar10 = (long *)*plVar7;
            plVar5 = plVar7;
          }
          else {
            if (param_1 <= uVar8) {
              uVar1 = 0;
              if (param_1 != 0) {
                uVar1 = uVar8 / param_1;
              }
              uVar8 = uVar8 - uVar1 * param_1;
            }
            if (uVar8 == uVar4) goto LAB_009d3524;
LAB_009d3560:
            plVar10 = plVar7;
            if (*(long *)(*(long *)this + uVar8 * 8) == 0) goto LAB_009d35bc;
            do {
              plVar9 = plVar10;
              plVar10 = (long *)*plVar9;
              if (plVar10 == (long *)0x0) break;
            } while (plVar7[2] == plVar10[2]);
            *plVar5 = (long)plVar10;
            *plVar9 = **(long **)(*(long *)this + uVar8 * 8);
            **(undefined8 **)(*(long *)this + uVar8 * 8) = plVar7;
            plVar10 = (long *)*plVar5;
          }
          plVar7 = plVar10;
          if (plVar7 == (long *)0x0) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
LAB_009d35bc:
  *(long **)(*(long *)this + uVar8 * 8) = plVar5;
  plVar5 = plVar7;
  plVar7 = (long *)*plVar7;
  uVar4 = uVar8;
  goto joined_r0x009d351c;
}


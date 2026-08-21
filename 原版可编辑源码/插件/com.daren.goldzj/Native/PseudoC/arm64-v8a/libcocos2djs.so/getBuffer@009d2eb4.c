
/* cocos2d::renderer::ModelBatcher::getBuffer(cocos2d::renderer::VertexFormat*) */

void __thiscall cocos2d::renderer::ModelBatcher::getBuffer(ModelBatcher *this,VertexFormat *param_1)

{
  ulong uVar1;
  long lVar2;
  MeshBuffer *pMVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  MeshBuffer *local_58;
  VertexFormat *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pMVar3 = *(MeshBuffer **)(this + 0x58);
  local_50 = param_1;
  if ((pMVar3 == (MeshBuffer *)0x0) || (*(VertexFormat **)(pMVar3 + 0x10) != param_1)) {
    local_58 = (MeshBuffer *)0x0;
    uVar4 = *(ulong *)(this + 0xb8);
    if (uVar4 != 0) {
      uVar6 = (((ulong)param_1 & 0x1fffffff) * 8 + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297
      ;
      uVar5 = (uVar6 ^ (ulong)param_1 >> 0x20 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
      uVar6 = uVar4 - 1;
      uVar5 = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
      if ((uVar6 & uVar4) == 0) {
        uVar7 = uVar5 & uVar6;
      }
      else {
        uVar7 = uVar5;
        if (uVar4 <= uVar5) {
          uVar7 = 0;
          if (uVar4 != 0) {
            uVar7 = uVar5 / uVar4;
          }
          uVar7 = uVar5 - uVar7 * uVar4;
        }
      }
      plVar8 = *(long **)(*(long *)(this + 0xb0) + uVar7 * 8);
      if (plVar8 != (long *)0x0) {
        do {
          while( true ) {
            while( true ) {
              plVar8 = (long *)*plVar8;
              if (plVar8 == (long *)0x0) goto LAB_009d2fc4;
              uVar9 = plVar8[1];
              if (uVar9 != uVar5) break;
              if ((VertexFormat *)plVar8[2] == param_1) {
                local_58 = (MeshBuffer *)plVar8[3];
                pMVar3 = local_58;
                goto LAB_009d2ff8;
              }
            }
            if ((uVar6 & uVar4) == 0) break;
            if (uVar4 <= uVar9) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar9 / uVar4;
              }
              uVar9 = uVar9 - uVar1 * uVar4;
            }
            if (uVar9 != uVar7) goto LAB_009d2fc4;
          }
        } while ((uVar9 & uVar6) == uVar7);
      }
    }
LAB_009d2fc4:
    pMVar3 = operator_new(0xa8);
    MeshBuffer::MeshBuffer(pMVar3,this,param_1);
    local_58 = pMVar3;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>,std::__ndk1::__unordered_map_hasher<cocos2d::renderer::VertexFormat*,std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>,std::__ndk1::hash<cocos2d::renderer::VertexFormat*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::renderer::VertexFormat*,std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>,std::__ndk1::equal_to<cocos2d::renderer::VertexFormat*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>>>
    ::
    __emplace_unique_key_args<cocos2d::renderer::VertexFormat*,cocos2d::renderer::VertexFormat*&,cocos2d::renderer::MeshBuffer*&>
              ((__hash_table<std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>,std::__ndk1::__unordered_map_hasher<cocos2d::renderer::VertexFormat*,std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>,std::__ndk1::hash<cocos2d::renderer::VertexFormat*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::renderer::VertexFormat*,std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>,std::__ndk1::equal_to<cocos2d::renderer::VertexFormat*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::renderer::VertexFormat*,cocos2d::renderer::MeshBuffer*>>>
                *)(this + 0xb0),&local_50,&local_50,&local_58);
    pMVar3 = local_58;
  }
LAB_009d2ff8:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pMVar3);
  }
  return;
}


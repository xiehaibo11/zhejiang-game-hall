
/* cocos2d::renderer::DeviceGraphics::setUniform(unsigned long, void const*, unsigned long,
   cocos2d::renderer::UniformElementType, unsigned long) */

void __thiscall
cocos2d::renderer::DeviceGraphics::setUniform
          (DeviceGraphics *this,ulong param_1,void *param_2,size_t param_3,undefined1 param_5,
          undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong local_70 [2];
  undefined1 *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar5 = *(ulong *)(this + 0x98);
  local_70[0] = param_1;
  if (uVar5 != 0) {
    uVar6 = uVar5 - 1;
    if ((uVar6 & uVar5) == 0) {
      uVar7 = uVar6 & param_1;
    }
    else {
      uVar7 = param_1;
      if (uVar5 <= param_1) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = param_1 / uVar5;
        }
        uVar7 = param_1 - uVar7 * uVar5;
      }
    }
    plVar8 = *(long **)(*(ulong *)(this + 0x90) + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
        if (uVar9 == param_1) {
          if (plVar8[2] == param_1) {
            pvVar4 = (void *)plVar8[3];
            *(undefined1 *)(plVar8 + 6) = 1;
            if (plVar8[4] == param_3) {
              if (pvVar4 == (void *)0x0) goto LAB_009b4ddc;
            }
            else {
              if (pvVar4 != (void *)0x0) {
                free(pvVar4);
              }
LAB_009b4ddc:
              pvVar4 = malloc(param_3);
              plVar8[3] = (long)pvVar4;
              plVar8[4] = param_3;
              plVar8[5] = param_6;
            }
            memcpy(pvVar4,param_2,param_3);
            goto LAB_009b4d8c;
          }
        }
        else {
          if ((uVar6 & uVar5) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar5 <= uVar9) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar9 / uVar5;
            }
            uVar9 = uVar9 - uVar1 * uVar5;
          }
          if (uVar9 != uVar7) break;
        }
      }
    }
  }
  pvVar4 = malloc(param_3);
  memcpy(pvVar4,param_2,param_3);
  local_60 = (undefined1 *)local_70;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::DeviceGraphics::Uniform>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::DeviceGraphics::Uniform>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::DeviceGraphics::Uniform>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::DeviceGraphics::Uniform>>>
          ::
          __emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_const&>,std::__ndk1::tuple<>>
                    ((ulong *)(this + 0x90),(piecewise_construct_t *)local_70,(tuple *)&DAT_0188aea0
                     ,(tuple *)&local_60);
  *(undefined1 *)(lVar3 + 0x30) = 1;
  if (*(void **)(lVar3 + 0x18) != (void *)0x0) {
    free(*(void **)(lVar3 + 0x18));
  }
  *(void **)(lVar3 + 0x18) = pvVar4;
  *(undefined8 *)(lVar3 + 0x28) = param_6;
  *(undefined1 *)(lVar3 + 0x31) = param_5;
LAB_009b4d8c:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


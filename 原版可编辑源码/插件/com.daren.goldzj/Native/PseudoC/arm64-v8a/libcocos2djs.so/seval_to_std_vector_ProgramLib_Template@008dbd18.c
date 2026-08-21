
/* seval_to_std_vector_ProgramLib_Template(se::Value const&,
   std::__ndk1::vector<cocos2d::renderer::ProgramLib::Template,
   std::__ndk1::allocator<cocos2d::renderer::ProgramLib::Template> >*) */

void seval_to_std_vector_ProgramLib_Template(Value *param_1,vector *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  Value *pVVar3;
  Object *this;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  Value *this_00;
  undefined4 local_e8 [2];
  ulong local_e0;
  undefined8 uStack_d8;
  void *local_d0;
  ulong local_c8;
  undefined8 local_c0;
  void *pvStack_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  Value *pVStack_98;
  Value *local_90;
  undefined8 local_88;
  uint local_7c;
  Value aVStack_78 [16];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_1[8] == (Value)0x5) {
    this = (Object *)se::Value::toObject(param_1);
    local_7c = 0;
    se::Object::getArrayLength(this,&local_7c);
    std::__ndk1::
    vector<cocos2d::renderer::ProgramLib::Template,std::__ndk1::allocator<cocos2d::renderer::ProgramLib::Template>>
    ::reserve((vector<cocos2d::renderer::ProgramLib::Template,std::__ndk1::allocator<cocos2d::renderer::ProgramLib::Template>>
               *)param_2,(ulong)local_7c);
    if (local_7c != 0) {
      uVar6 = 0;
      do {
        se::Value::Value(aVStack_78);
        uVar4 = se::Object::getArrayElement(this,uVar6,aVStack_78);
        if ((uVar4 & 1) != 0) {
          local_e8[0] = 0;
          pVStack_98 = (Value *)0x0;
          local_a0 = (void *)0x0;
          local_88 = 0;
          local_90 = (Value *)0x0;
          pvStack_b8 = (void *)0x0;
          local_c0 = 0;
          uStack_a8 = 0;
          local_b0 = 0;
          uStack_d8 = 0;
          local_e0 = 0;
          local_c8 = 0;
          local_d0 = (void *)0x0;
          uVar4 = seval_to_ProgramLib_Template(aVStack_78,(Template *)local_e8);
          if ((uVar4 & 1) == 0) {
LAB_008dbe98:
            pVVar3 = pVStack_98;
            if (pVStack_98 != (Value *)0x0) {
              pVStack_98 = pVVar3;
              this_00 = local_90;
              while (this_00 != pVVar3) {
                this_00 = this_00 + -0x10;
                cocos2d::Value::~Value(this_00);
              }
              local_90 = pVVar3;
              operator_delete(pVStack_98);
            }
          }
          else {
            puVar1 = *(undefined4 **)(param_2 + 8);
            if (*(undefined4 **)(param_2 + 0x10) <= puVar1) {
              std::__ndk1::
              vector<cocos2d::renderer::ProgramLib::Template,std::__ndk1::allocator<cocos2d::renderer::ProgramLib::Template>>
              ::__push_back_slow_path<cocos2d::renderer::ProgramLib::Template>
                        ((vector<cocos2d::renderer::ProgramLib::Template,std::__ndk1::allocator<cocos2d::renderer::ProgramLib::Template>>
                          *)param_2,(Template *)local_e8);
              goto LAB_008dbe98;
            }
            *puVar1 = local_e8[0];
            *(void **)(puVar1 + 6) = local_d0;
            *(undefined8 *)(puVar1 + 4) = uStack_d8;
            *(ulong *)(puVar1 + 2) = local_e0;
            uStack_d8 = 0;
            local_d0 = (void *)0x0;
            local_e0 = 0;
            *(void **)(puVar1 + 0xc) = pvStack_b8;
            *(undefined8 *)(puVar1 + 10) = local_c0;
            *(ulong *)(puVar1 + 8) = local_c8;
            local_c0 = 0;
            pvStack_b8 = (void *)0x0;
            local_c8 = 0;
            *(void **)(puVar1 + 0x12) = local_a0;
            *(undefined8 *)(puVar1 + 0x14) = 0;
            *(undefined8 *)(puVar1 + 0x10) = uStack_a8;
            *(ulong *)(puVar1 + 0xe) = local_b0;
            uStack_a8 = 0;
            local_a0 = (void *)0x0;
            local_b0 = 0;
            *(undefined8 *)(puVar1 + 0x16) = 0;
            *(undefined8 *)(puVar1 + 0x18) = 0;
            *(Value **)(puVar1 + 0x16) = local_90;
            *(Value **)(puVar1 + 0x14) = pVStack_98;
            *(undefined8 *)(puVar1 + 0x18) = local_88;
            local_90 = (Value *)0x0;
            local_88 = 0;
            pVStack_98 = (Value *)0x0;
            *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 0x68;
          }
          if ((local_b0 & 1) != 0) {
            operator_delete(local_a0);
          }
          if ((local_c8 & 1) != 0) {
            operator_delete(pvStack_b8);
          }
          if ((local_e0 & 1) != 0) {
            operator_delete(local_d0);
          }
        }
        se::Value::~Value(aVStack_78);
        uVar6 = uVar6 + 1;
      } while (uVar6 < local_7c);
    }
    uVar5 = 1;
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                        ,0x895,"seval_to_std_vector_ProgramLib_Template");
    __android_log_print(6,"jswrapper","Convert parameter to vector of ProgramLib Template failed!");
    uVar5 = 0;
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


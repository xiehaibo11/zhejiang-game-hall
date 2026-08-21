
/* cocos2d::renderer::ForwardRenderer::init(cocos2d::renderer::DeviceGraphics*,
   std::__ndk1::vector<cocos2d::renderer::ProgramLib::Template,
   std::__ndk1::allocator<cocos2d::renderer::ProgramLib::Template> >&,
   cocos2d::renderer::Texture2D*, int, int) */

undefined8
cocos2d::renderer::ForwardRenderer::init
          (DeviceGraphics *param_1,vector *param_2,Texture2D *param_3,int param_4,int param_5)

{
  long lVar1;
  code *pcVar2;
  basic_string local_88;
  undefined4 uStack_87;
  undefined2 uStack_83;
  undefined1 uStack_81;
  undefined1 local_80;
  undefined2 uStack_7f;
  undefined1 uStack_7d;
  undefined4 uStack_7c;
  void *local_78;
  undefined **local_70;
  code *local_68;
  undefined8 uStack_60;
  DeviceGraphics *local_58;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  BaseRenderer::init((BaseRenderer *)param_1,(DeviceGraphics *)param_2,(vector *)param_3,
                     (Texture2D *)(ulong)(uint)param_4);
  local_88 = (basic_string)0xc;
  local_80 = 0;
  uStack_7f = 0;
  uStack_7d = 0;
  uStack_7c = 0;
  local_78 = (void *)0x0;
  uStack_83 = 0x6575;
  uStack_87 = 0x7161706f;
  uStack_81 = 0;
  local_70 = &PTR_FUN_01c6b3b0;
  uStack_60 = 0;
  local_68 = opaqueStage;
  local_58 = param_1;
  local_50 = &local_70;
  BaseRenderer::registerStage((BaseRenderer *)param_1,&local_88,(function *)&local_70);
  if (&local_70 == local_50) {
    pcVar2 = (code *)(*local_50)[4];
LAB_009c9ee8:
    (*pcVar2)();
  }
  else if (local_50 != (undefined ***)0x0) {
    pcVar2 = (code *)(*local_50)[5];
    goto LAB_009c9ee8;
  }
  if (((byte)local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  uStack_7c = 0;
  local_88 = (basic_string)0x14;
  local_70 = &PTR_FUN_01c6b3b0;
  uStack_7f = 0x7473;
  local_78 = (void *)0x0;
  uStack_60 = 0;
  local_68 = shadowStage;
  uStack_87 = 0x64616873;
  uStack_83 = 0x776f;
  uStack_81 = 99;
  local_80 = 0x61;
  uStack_7d = 0;
  local_58 = param_1;
  local_50 = &local_70;
  BaseRenderer::registerStage((BaseRenderer *)param_1,&local_88,(function *)&local_70);
  if (&local_70 == local_50) {
    pcVar2 = (code *)(*local_50)[4];
LAB_009c9f7c:
    (*pcVar2)();
  }
  else if (local_50 != (undefined ***)0x0) {
    pcVar2 = (code *)(*local_50)[5];
    goto LAB_009c9f7c;
  }
  if (((byte)local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  local_78 = (void *)0x0;
  local_88 = (basic_string)0x16;
  uStack_7f = 0x6e65;
  uStack_7d = 0x74;
  uStack_7c = 0;
  uStack_60 = 0;
  local_68 = transparentStage;
  uStack_87 = 0x6e617274;
  uStack_83 = 0x7073;
  uStack_81 = 0x61;
  local_80 = 0x72;
  local_70 = &PTR_FUN_01c6b458;
  local_58 = param_1;
  local_50 = &local_70;
  BaseRenderer::registerStage((BaseRenderer *)param_1,&local_88,(function *)&local_70);
  if (&local_70 == local_50) {
    pcVar2 = (code *)(*local_50)[4];
  }
  else {
    if (local_50 == (undefined ***)0x0) goto LAB_009ca020;
    pcVar2 = (code *)(*local_50)[5];
  }
  (*pcVar2)();
LAB_009ca020:
  if (((byte)local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009ca040 to 00aca0b7 has its CatchHandler @ 009c9c88 */
                    /* catch() { ... } // from try @ 009c9d08 with catch @ 009ca048 */
                    /* catch() { ... } // from try @ 009c9cfc with catch @ 009ca04c */
                    /* catch() { ... } // from try @ 009c9cdc with catch @ 009ca050 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


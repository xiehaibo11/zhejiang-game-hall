
/* cocos2d::MeshCommand::genMaterialID(unsigned int, void*, unsigned int, unsigned int,
   cocos2d::BlendFunc) */

void __thiscall
cocos2d::MeshCommand::genMaterialID
          (MeshCommand *this,undefined4 param_1,undefined8 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_6)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_28;
  
                    /* try { // try from 00fe06f4 to 010e0707 has its CatchHandler @ 00fe0760 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00fe0708 to 010e0783 has its CatchHandler @ 00fe06a4 */
  local_44 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  uStack_34 = param_4;
  local_30 = param_6;
  uVar2 = XXH32(&local_44,0x1c,0);
  *(undefined4 *)(this + 0x34) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


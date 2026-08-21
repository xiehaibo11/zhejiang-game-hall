
/* cocos2d::TrianglesCommand::generateMaterialID() */

void __thiscall cocos2d::TrianglesCommand::generateMaterialID(TrianglesCommand *this)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_2c = 0;
  local_38 = *(undefined4 *)(this + 0x1c);
  uStack_34 = (undefined4)*(undefined8 *)(this + 0x28);
  uStack_30 = (undefined4)((ulong)*(undefined8 *)(this + 0x28) >> 0x20);
  local_40 = *(undefined8 *)(this + 0x20);
  uVar2 = XXH32(&local_40,0x18,0);
  *(undefined4 *)(this + 0x18) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


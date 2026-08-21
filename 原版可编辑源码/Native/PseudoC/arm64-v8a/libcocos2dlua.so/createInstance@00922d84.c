
/* cocostudio::CustomGUIReader::createInstance() */

void __thiscall cocostudio::CustomGUIReader::createInstance(CustomGUIReader *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 local_68;
  undefined **local_60;
  undefined8 *puStack_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_68 = 0;
  lVar2 = cocos2d::LuaEngine::getInstance();
                    /* try { // try from 00922dac to 00a22dbf has its CatchHandler @ 00922e44 */
  puStack_58 = &local_68;
                    /* try { // try from 00922dc4 to 00a22df7 has its CatchHandler @ 00922e48 */
  local_60 = &PTR_FUN_0169cd90;
  local_40 = &local_60;
  (**(code **)(**(long **)(lVar2 + 8) + 0xd8))
            (*(long **)(lVar2 + 8),*(undefined4 *)(this + 0x40),0,1,&local_60);
  if (&local_60 == local_40) {
    pcVar3 = (code *)(*local_40)[4];
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_00922e0c;
                    /* try { // try from 00922df8 to 00a22e93 has its CatchHandler @ 00922cc0 */
    pcVar3 = (code *)(*local_40)[5];
  }
  (*pcVar3)();
LAB_00922e0c:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_68);
}


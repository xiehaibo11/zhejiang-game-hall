
/* cocostudio::Bone::changeDisplayByIndex(int, bool) */

void __thiscall cocostudio::Bone::changeDisplayByIndex(Bone *this,int param_1,bool param_2)

{
  DisplayManager::changeDisplayWithIndex(*(DisplayManager **)(this + 0x310),param_1,param_2);
  return;
}


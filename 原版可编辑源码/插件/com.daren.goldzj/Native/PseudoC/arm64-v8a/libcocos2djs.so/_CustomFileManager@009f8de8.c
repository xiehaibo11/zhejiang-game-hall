
/* universe::CustomFileManager::~CustomFileManager() */

void __thiscall universe::CustomFileManager::~CustomFileManager(CustomFileManager *this)

{
  CustomFileManager *pCVar1;
  code *pcVar2;
  
  pCVar1 = *(CustomFileManager **)(this + 0x40);
  *(undefined ***)this = &PTR__CustomFileManager_01c6c4f8;
  if (this + 0x20 == pCVar1) {
    pcVar2 = *(code **)(*(long *)pCVar1 + 0x20);
  }
  else {
    if (pCVar1 == (CustomFileManager *)0x0) goto LAB_009f8e34;
    pcVar2 = *(code **)(*(long *)pCVar1 + 0x28);
  }
  (*pcVar2)();
LAB_009f8e34:
  if (((byte)this[8] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x18));
  return;
}


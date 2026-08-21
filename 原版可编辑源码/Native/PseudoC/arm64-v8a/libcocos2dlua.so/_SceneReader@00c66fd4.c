
/* cocostudio::SceneReader::~SceneReader() */

void __thiscall cocostudio::SceneReader::~SceneReader(SceneReader *this)

{
  SceneReader *pSVar1;
  code *pcVar2;
  
  pSVar1 = *(SceneReader **)(this + 0x30);
  *(undefined ***)this = &PTR__SceneReader_016ca870;
  if (this + 0x10 == pSVar1) {
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x20);
  }
  else {
    if (pSVar1 == (SceneReader *)0x0) goto LAB_00c67020;
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00c67020:
  operator_delete(this);
  return;
}


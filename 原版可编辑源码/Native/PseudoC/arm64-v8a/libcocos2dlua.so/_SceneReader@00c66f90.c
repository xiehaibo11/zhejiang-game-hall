
/* cocostudio::SceneReader::~SceneReader() */

void __thiscall cocostudio::SceneReader::~SceneReader(SceneReader *this)

{
  SceneReader *pSVar1;
  
  pSVar1 = *(SceneReader **)(this + 0x30);
  *(undefined ***)this = &PTR__SceneReader_016ca870;
  if (this + 0x10 == pSVar1) {
                    /* WARNING: Could not recover jumptable at 0x00c66fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pSVar1 + 0x20))();
    return;
  }
  if (pSVar1 != (SceneReader *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c66fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pSVar1 + 0x28))();
    return;
  }
  return;
}


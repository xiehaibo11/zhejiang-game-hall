
/* cocostudio::SceneReader::getNodeByTag(int) */

Node * __thiscall cocostudio::SceneReader::getNodeByTag(SceneReader *this,int param_1)

{
  int iVar1;
  Node *pNVar2;
  
  if (*(long **)(this + 0x40) == (long *)0x0) {
    pNVar2 = (Node *)0x0;
  }
  else {
    iVar1 = (**(code **)(**(long **)(this + 0x40) + 0x2b8))();
    pNVar2 = *(Node **)(this + 0x40);
    if (iVar1 != param_1) {
      pNVar2 = (Node *)nodeByTag(this,pNVar2,param_1);
      return pNVar2;
    }
  }
  return pNVar2;
}


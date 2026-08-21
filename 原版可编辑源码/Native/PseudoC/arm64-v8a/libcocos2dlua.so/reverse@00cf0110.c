
/* cocosbuilder::CCBEaseInstant::reverse() const */

void __thiscall cocosbuilder::CCBEaseInstant::reverse(CCBEaseInstant *this)

{
  ActionInterval *pAVar1;
  
  pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x20))();
  create(pAVar1);
  return;
}


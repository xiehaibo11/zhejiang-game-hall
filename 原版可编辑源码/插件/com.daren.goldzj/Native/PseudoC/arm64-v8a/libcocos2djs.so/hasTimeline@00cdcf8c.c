
/* spine::Animation::hasTimeline(int) */

bool __thiscall spine::Animation::hasTimeline(Animation *this,int param_1)

{
  long lVar1;
  
  for (lVar1 = *(long *)(this + 0x30); (lVar1 != 0 && (*(int *)(lVar1 + 8) != param_1));
      lVar1 = *(long *)(lVar1 + 0x10)) {
  }
  return lVar1 != 0;
}


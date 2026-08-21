
/* fairygui::TweenManager::createTween() */

GTweener * fairygui::TweenManager::createTween(void)

{
  long lVar1;
  void *pvVar2;
  void *__dest;
  long lVar3;
  ulong uVar4;
  GTweener *this;
  uint uVar5;
  uint uVar6;
  
  if (_inited == '\0') {
    init();
  }
  if ((int)((ulong)(DAT_01782c00 - _tweenerPool) >> 3) < 1) {
    this = operator_new(0x1c0);
    GTweener::GTweener(this);
  }
  else {
    this = *(GTweener **)
            (_tweenerPool + ((DAT_01782c00 - _tweenerPool) * 0x20000000 + -0x100000000 >> 0x1d));
    DAT_01782c00 = DAT_01782c00 + -8;
  }
  GTweener::_init(this);
  lVar3 = (long)(int)_totalActiveTweens;
  lVar1 = lVar3 + 1;
  uVar6 = (uint)lVar1;
  _totalActiveTweens = uVar6;
  *(GTweener **)((long)_activeTweens + lVar3 * 8) = this;
  __dest = _activeTweens;
  uVar5 = _arrayLength;
  if (uVar6 == _arrayLength) {
    uVar5 = (uint)((float)(int)((float)(int)uVar6 * 0.5) + (float)(int)uVar6);
    uVar4 = -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3;
    if ((ulong)(long)(int)uVar5 >> 0x3d != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    __dest = operator_new__(uVar4);
    pvVar2 = _activeTweens;
    memcpy(__dest,_activeTweens,lVar1 * 8);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
  }
  _arrayLength = uVar5;
  _activeTweens = __dest;
  return this;
}


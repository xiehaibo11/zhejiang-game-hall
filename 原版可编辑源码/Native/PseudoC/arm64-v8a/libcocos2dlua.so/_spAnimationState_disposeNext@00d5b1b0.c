
void _spAnimationState_disposeNext(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_2 + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    _spEventQueue_dispose(*(undefined8 *)(param_1 + 0x48),lVar1);
  }
  *(undefined8 *)(param_2 + 8) = 0;
  return;
}



void _spCurveTimeline_deinit(long param_1)

{
  _spFree(*(void **)(param_1 + 8));
  _spFree(*(void **)(param_1 + 0x10));
  return;
}


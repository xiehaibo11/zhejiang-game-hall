
void _spMeshAttachment_dispose(void *param_1)

{
  _spFree(*(void **)((long)param_1 + 0x80));
  _spFree(*(void **)((long)param_1 + 0x90));
  if (*(long *)((long)param_1 + 0xc0) == 0) {
    _spVertexAttachment_deinit(param_1);
    _spFree(*(void **)((long)param_1 + 0x88));
    _spFree(*(void **)((long)param_1 + 0xa0));
    _spFree(*(void **)((long)param_1 + 0xd0));
  }
  else {
    _spAttachment_deinit(param_1);
  }
  _spFree(param_1);
  return;
}


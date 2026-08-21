
void _spPathAttachment_dispose(void *param_1)

{
  _spVertexAttachment_deinit();
  _spFree(*(void **)((long)param_1 + 0x50));
  _spFree(param_1);
  return;
}


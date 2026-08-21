
void _spVertexAttachment_deinit(long param_1)

{
  _spAttachment_deinit();
  _spFree(*(void **)(param_1 + 0x28));
  _spFree(*(void **)(param_1 + 0x38));
  return;
}


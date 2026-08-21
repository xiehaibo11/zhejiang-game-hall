
void _spBoundingBoxAttachment_dispose(void *param_1)

{
                    /* try { // try from 00d6e3f4 to 00e6e43b has its CatchHandler @ 00d6df24 */
  _spVertexAttachment_deinit();
  _spFree(param_1);
  return;
}


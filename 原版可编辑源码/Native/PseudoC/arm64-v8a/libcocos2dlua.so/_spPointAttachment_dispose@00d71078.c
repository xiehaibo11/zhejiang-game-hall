
void _spPointAttachment_dispose(void *param_1)

{
                    /* try { // try from 00d7107c to 00e71083 has its CatchHandler @ 00d7149c */
                    /* try { // try from 00d71084 to 00e7109b has its CatchHandler @ 00d71488 */
  _spVertexAttachment_deinit();
  _spFree(param_1);
  return;
}


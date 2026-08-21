
void spAtlasPage_dispose(void *param_1)

{
                    /* try { // try from 00d4dc5c to 00e4dc63 has its CatchHandler @ 00d4e00c */
  _spAtlasPage_disposeTexture();
                    /* try { // try from 00d4dc64 to 00e4ddab has its CatchHandler @ 00d4dc0c */
  _spFree(*(void **)((long)param_1 + 8));
  _spFree(param_1);
  return;
}


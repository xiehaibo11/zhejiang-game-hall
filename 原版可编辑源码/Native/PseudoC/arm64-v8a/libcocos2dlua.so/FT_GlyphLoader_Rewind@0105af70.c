
void FT_GlyphLoader_Rewind(long param_1)

{
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
                    /* try { // try from 0105af88 to 0115af8f has its CatchHandler @ 0105b044 */
  *(undefined4 *)(param_1 + 0x50) = 0;
  memcpy((void *)(param_1 + 0x60),(undefined2 *)(param_1 + 0x18),0x48);
  return;
}


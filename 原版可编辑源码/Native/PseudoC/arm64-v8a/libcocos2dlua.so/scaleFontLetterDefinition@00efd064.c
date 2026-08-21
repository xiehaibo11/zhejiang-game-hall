
/* cocos2d::FontAtlas::scaleFontLetterDefinition(float) */

void __thiscall cocos2d::FontAtlas::scaleFontLetterDefinition(FontAtlas *this,float param_1)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(this + 0x60); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    *(ulong *)((long)plVar1 + 0x24) =
         CONCAT44((float)((ulong)*(undefined8 *)((long)plVar1 + 0x24) >> 0x20) * param_1,
                  (float)*(undefined8 *)((long)plVar1 + 0x24) * param_1);
    *(ulong *)((long)plVar1 + 0x1c) =
         CONCAT44((float)((ulong)*(undefined8 *)((long)plVar1 + 0x1c) >> 0x20) * param_1,
                  (float)*(undefined8 *)((long)plVar1 + 0x1c) * param_1);
    *(int *)((long)plVar1 + 0x34) = (int)((float)*(int *)((long)plVar1 + 0x34) * param_1);
  }
  return;
}



void _FromEntry_create(undefined8 param_1)

{
  undefined8 *puVar1;
  
                    /* try { // try from 00d5ca6c to 00e5caf3 has its CatchHandler @ 00d5ca6c
                       catch() { ... } // from try @ 00d5ca6c with catch @ 00d5ca6c
                       catch() { ... } // from try @ 00d5cafc with catch @ 00d5ca6c */
  puVar1 = (undefined8 *)
           _spCalloc(1,0x18,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationStateData.c"
                     ,0x3e);
  *puVar1 = param_1;
  return;
}


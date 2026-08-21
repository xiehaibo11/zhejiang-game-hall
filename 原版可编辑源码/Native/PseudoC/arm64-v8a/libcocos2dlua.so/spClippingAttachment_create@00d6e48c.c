
long spClippingAttachment_create(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = _spCalloc(1,0x50,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/ClippingAttachment.c"
                    ,0x2b);
  _spVertexAttachment_init();
                    /* catch() { ... } // from try @ 00d6e368 with catch @ 00d6e4c0 */
                    /* catch() { ... } // from try @ 00d6e210 with catch @ 00d6e4c4 */
                    /* catch() { ... } // from try @ 00d6e0b8 with catch @ 00d6e4c8 */
                    /* catch() { ... } // from try @ 00d6e3c8 with catch @ 00d6e4cc */
                    /* catch() { ... } // from try @ 00d6e3c0 with catch @ 00d6e4d0 */
  _spAttachment_init(lVar1,param_1,6,_spClippingAttachment_dispose);
                    /* catch() { ... } // from try @ 00d6e3e8 with catch @ 00d6e4d4 */
  *(undefined8 *)(lVar1 + 0x48) = 0;
  return lVar1;
}


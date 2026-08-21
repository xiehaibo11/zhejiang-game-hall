
undefined8 spPointAttachment_create(undefined8 param_1)

{
  undefined8 uVar1;
  
                    /* try { // try from 00d710ac to 00e710bb has its CatchHandler @ 00d71484 */
                    /* try { // try from 00d710bc to 00e710cf has its CatchHandler @ 00d714cc */
  uVar1 = _spCalloc(1,0x68,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/PointAttachment.c"
                    ,0x2b);
  _spVertexAttachment_init();
                    /* try { // try from 00d710d4 to 00e710e7 has its CatchHandler @ 00d714c8 */
  _spAttachment_init(uVar1,param_1,5,_spPointAttachment_dispose);
                    /* try { // try from 00d710f0 to 00e710f7 has its CatchHandler @ 00d71480 */
  return uVar1;
}


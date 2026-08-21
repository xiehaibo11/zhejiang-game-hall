
/* cocos2d::kmGLMatrixMode(unsigned int) */

void cocos2d::kmGLMatrixMode(uint param_1)

{
  if (param_1 == 0x1702) {
    currentActiveStackType = 2;
    return;
  }
  if (param_1 != 0x1701) {
    if (param_1 == 0x1700) {
      currentActiveStackType = 0;
      return;
    }
                    /* try { // try from 00ff92cc to 010f9397 has its CatchHandler @ 00ff92cc
                       catch() { ... } // from try @ 00ff92cc with catch @ 00ff92cc
                       catch() { ... } // from try @ 00ff98a8 with catch @ 00ff92cc */
    __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                        "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/deprecated/CCDeprecated.cpp",
                        "kmGLMatrixMode",0xde);
    return;
  }
  currentActiveStackType = 1;
  return;
}


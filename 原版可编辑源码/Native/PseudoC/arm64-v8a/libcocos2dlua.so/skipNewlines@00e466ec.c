
/* cocos2d::PUScriptParser::skipNewlines(std::__ndk1::__wrap_iter<cocos2d::PUScriptToken* const*>,
   std::__ndk1::__wrap_iter<cocos2d::PUScriptToken* const*>) */

long * __thiscall
cocos2d::PUScriptParser::skipNewlines(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  
  if ((param_2 != param_3) && (*(int *)(*param_2 + 0x30) == 6)) {
    do {
      if (param_3 + -1 == param_2) {
                    /* try { // try from 00e46734 to 00f4687f has its CatchHandler @ 00e463dc */
        return param_3;
      }
      plVar1 = param_2 + 1;
      param_2 = param_2 + 1;
                    /* try { // try from 00e46728 to 00f46733 has its CatchHandler @ 00e4685c */
    } while (*(int *)(*plVar1 + 0x30) == 6);
  }
  return param_2;
}


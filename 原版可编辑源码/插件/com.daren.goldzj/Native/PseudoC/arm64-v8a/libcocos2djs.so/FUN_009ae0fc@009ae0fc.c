
long FUN_009ae0fc(long param_1,long param_2)

{
                    /* try { // try from 009ae0fc to 00aae10b has its CatchHandler @ 009ae4f0 */
  param_1 = param_1 + 8;
                    /* try { // try from 009ae110 to 00aae11b has its CatchHandler @ 009ae4e8 */
  if (*(char **)(param_2 + 8) !=
      "ZN7cocos2d7network10HttpClient18networkThreadAloneEPNS0_11HttpRequestEPNS0_12HttpResponseEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


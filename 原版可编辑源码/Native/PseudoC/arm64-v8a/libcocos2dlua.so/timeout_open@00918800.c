
undefined8 timeout_open(undefined8 param_1)

{
                    /* try { // try from 00918814 to 00a18817 has its CatchHandler @ 0091884c */
                    /* try { // try from 00918818 to 00a1885f has its CatchHandler @ 009187c8 */
  luaL_openlib(param_1,0,&PTR_s_gettime_01769398,0);
  return 0;
}


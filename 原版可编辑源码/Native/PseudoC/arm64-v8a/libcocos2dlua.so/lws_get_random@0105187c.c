
void lws_get_random(long param_1,void *param_2,int param_3)

{
                    /* try { // try from 01051888 to 0115188b has its CatchHandler @ 01053858 */
  read(*(int *)(param_1 + 0xc6c),param_2,(long)param_3);
  return;
}


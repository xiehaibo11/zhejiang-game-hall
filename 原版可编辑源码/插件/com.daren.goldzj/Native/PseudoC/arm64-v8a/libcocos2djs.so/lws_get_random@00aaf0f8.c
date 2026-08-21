
void lws_get_random(long param_1,void *param_2,int param_3)

{
  read(*(int *)(param_1 + 0xc6c),param_2,(long)param_3);
                    /* try { // try from 00aaf10c to 00baf243 has its CatchHandler @ 00aaf10c
                       catch() { ... } // from try @ 00aaf10c with catch @ 00aaf10c
                       catch() { ... } // from try @ 00aaf248 with catch @ 00aaf10c */
  return;
}


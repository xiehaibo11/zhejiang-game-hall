
void _spEventQueue_free(void *param_1)

{
                    /* try { // try from 00d5a17c to 00e5a1b3 has its CatchHandler @ 00d5a584 */
  _spFree(*(void **)((long)param_1 + 8));
  _spFree(param_1);
  return;
}


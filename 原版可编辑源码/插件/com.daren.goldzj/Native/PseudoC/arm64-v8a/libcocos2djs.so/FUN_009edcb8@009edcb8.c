
long FUN_009edcb8(long param_1,long param_2)

{
                    /* try { // try from 009edcbc to 00aedcd3 has its CatchHandler @ 009edd90 */
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) != "ZN13WebSocketImpl18onConnectionClosedEvE3$_3") {
    param_1 = 0;
  }
  return param_1;
}


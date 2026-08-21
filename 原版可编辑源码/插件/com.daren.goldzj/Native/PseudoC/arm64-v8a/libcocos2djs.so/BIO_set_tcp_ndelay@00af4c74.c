
int BIO_set_tcp_ndelay(int sock,int turn_on)

{
  int iVar1;
  int local_14;
  
  local_14 = turn_on;
  iVar1 = setsockopt(sock,6,1,&local_14,4);
                    /* try { // try from 00af4ca8 to 00bf4cb3 has its CatchHandler @ 00af4d94 */
  return (int)(iVar1 == 0);
}


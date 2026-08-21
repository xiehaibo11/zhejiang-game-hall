
stack_st_SRTP_PROTECTION_PROFILE * SSL_get_srtp_profiles(SSL *ssl)

{
  stack_st_SRTP_PROTECTION_PROFILE *psVar1;
  
  if ((ssl != (SSL *)0x0) &&
     ((psVar1 = *(stack_st_SRTP_PROTECTION_PROFILE **)&ssl[1].server,
      psVar1 != (stack_st_SRTP_PROTECTION_PROFILE *)0x0 ||
      ((ssl->mode != 0 &&
       (psVar1 = *(stack_st_SRTP_PROTECTION_PROFILE **)(ssl->mode + 0x328),
       psVar1 != (stack_st_SRTP_PROTECTION_PROFILE *)0x0)))))) {
    return psVar1;
  }
  return (stack_st_SRTP_PROTECTION_PROFILE *)0x0;
}


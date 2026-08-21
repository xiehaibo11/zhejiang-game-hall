package com.mbridge.msdk.thrid.okhttp;

public interface Dns {
    public static final com.mbridge.msdk.thrid.okhttp.Dns SYSTEM = null;


    static {
            com.mbridge.msdk.thrid.okhttp.Dns$1 r0 = new com.mbridge.msdk.thrid.okhttp.Dns$1
            r0.<init>()
            com.mbridge.msdk.thrid.okhttp.Dns.SYSTEM = r0
            return
    }

    java.util.List<java.net.InetAddress> lookup(java.lang.String r1) throws java.net.UnknownHostException;
}

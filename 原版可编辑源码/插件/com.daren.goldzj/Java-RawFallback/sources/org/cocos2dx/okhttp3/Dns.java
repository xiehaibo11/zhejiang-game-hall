package org.cocos2dx.okhttp3;

public interface Dns {
    public static final org.cocos2dx.okhttp3.Dns SYSTEM = null;


    static {
            org.cocos2dx.okhttp3.Dns$1 r0 = new org.cocos2dx.okhttp3.Dns$1
            r0.<init>()
            org.cocos2dx.okhttp3.Dns.SYSTEM = r0
            return
    }

    java.util.List<java.net.InetAddress> lookup(java.lang.String r1) throws java.net.UnknownHostException;
}

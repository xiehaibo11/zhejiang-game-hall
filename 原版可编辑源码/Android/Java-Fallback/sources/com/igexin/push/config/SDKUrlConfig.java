package com.igexin.push.config;

public class SDKUrlConfig {
    public static java.lang.String[] XFR_ADDRESS_BAK;
    private static final java.lang.Object a = null;
    private static java.lang.String[] b;
    private static java.lang.String c;
    private static java.lang.String[] d;
    private static volatile java.lang.String e;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.igexin.push.config.SDKUrlConfig.a = r0
            java.lang.String r0 = "HZ"
            com.igexin.push.config.SDKUrlConfig.c = r0
            java.lang.String r0 = "socket://sdk.open.talk.igexin.com:5224"
            java.lang.String r1 = "socket://sdk.open.talk.getui.net:5224"
            java.lang.String r2 = "socket://sdk.open.talk.gepush.com:5224"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2}
            com.igexin.push.config.SDKUrlConfig.d = r0
            java.lang.String r0 = "socket://43.231.145.10:5224"
            java.lang.String[] r0 = new java.lang.String[]{r0}
            com.igexin.push.config.SDKUrlConfig.XFR_ADDRESS_BAK = r0
            return
    }

    public SDKUrlConfig() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getCmAddress() {
            java.lang.String r0 = com.igexin.push.config.SDKUrlConfig.e
            if (r0 != 0) goto La
            java.lang.String[] r0 = com.igexin.push.config.SDKUrlConfig.d
            r1 = 0
            r0 = r0[r1]
            return r0
        La:
            java.lang.String r0 = com.igexin.push.config.SDKUrlConfig.e
            return r0
    }

    public static java.util.List<java.lang.String> getDefaultXfrList() {
            java.lang.String[] r0 = getXfrAddress()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            int r2 = r0.length
            r3 = 0
        Lb:
            if (r3 >= r2) goto L1b
            r4 = r0[r3]
            boolean r5 = r1.contains(r4)
            if (r5 != 0) goto L18
            r1.add(r4)
        L18:
            int r3 = r3 + 1
            goto Lb
        L1b:
            return r1
    }

    public static java.lang.String[] getIdcConfigUrl() {
            java.lang.String[] r0 = com.igexin.push.config.SDKUrlConfig.b
            return r0
    }

    public static java.lang.String getLocation() {
            java.lang.String r0 = com.igexin.push.config.SDKUrlConfig.c
            return r0
    }

    public static java.lang.String[] getXfrAddress() {
            java.lang.Object r0 = com.igexin.push.config.SDKUrlConfig.a
            monitor-enter(r0)
            java.lang.String[] r1 = com.igexin.push.config.SDKUrlConfig.d     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            throw r1
    }

    public static boolean hasMultipleXfr() {
            java.util.List r0 = getDefaultXfrList()
            int r0 = r0.size()
            r1 = 1
            if (r0 <= r1) goto Lc
            goto Ld
        Lc:
            r1 = 0
        Ld:
            return r1
    }

    public static void setCmAddress(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "set cm address : "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
            com.igexin.push.config.SDKUrlConfig.e = r2
            return
    }

    public static void setIdcConfigUrl(java.lang.String[] r0) {
            com.igexin.push.config.SDKUrlConfig.b = r0
            return
    }

    public static void setLocation(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto La
            com.igexin.push.core.d.d = r1
            com.igexin.push.config.SDKUrlConfig.c = r1
        La:
            return
    }

    public static void setXfrAddressIps(java.lang.String[] r1) {
            java.lang.Object r0 = com.igexin.push.config.SDKUrlConfig.a
            monitor-enter(r0)
            com.igexin.push.config.SDKUrlConfig.d = r1     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return
        L7:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            throw r1
    }
}

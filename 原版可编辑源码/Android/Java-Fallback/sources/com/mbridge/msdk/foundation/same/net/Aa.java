package com.mbridge.msdk.foundation.same.net;

public class Aa {
    private static final java.lang.String C_END = "_mv_end";
    private static final java.lang.String C_START = "mv_channel_";
    private static java.lang.String a = "";


    static {
            return
    }

    public Aa() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a() {
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.Aa.a
            return r0
    }

    public static java.lang.String b() {
            r0 = 0
            return r0
    }

    private static void b(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L47
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.t.b(r1)     // Catch: java.lang.Throwable -> Lb
            goto L10
        Lb:
            r1 = move-exception
            r1.printStackTrace()
            r1 = 0
        L10:
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L33
            java.lang.String r0 = "mv_channel_"
            boolean r0 = r1.startsWith(r0)
            if (r0 == 0) goto L33
            java.lang.String r0 = "_mv_end"
            boolean r0 = r1.endsWith(r0)
            if (r0 == 0) goto L33
            java.lang.Integer r1 = c(r1)
            if (r1 == 0) goto L33
            java.lang.String r1 = java.lang.String.valueOf(r1)
            com.mbridge.msdk.foundation.same.net.Aa.a = r1
            goto L47
        L33:
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 != 0) goto L3c
            java.lang.String r1 = ""
            com.mbridge.msdk.foundation.same.net.Aa.a = r1
            goto L47
        L3c:
            g()
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r0 = "please don't update this value"
            r1.<init>(r0)
            throw r1
        L47:
            return
    }

    private static java.lang.Integer c(java.lang.String r5) {
            r0 = 0
            if (r5 == 0) goto L32
            java.lang.String r1 = "mv_channel_"
            int r1 = r5.indexOf(r1)
            java.lang.String r2 = "_mv_end"
            int r2 = r5.indexOf(r2)
            r3 = -1
            if (r1 == r3) goto L32
            if (r2 == r3) goto L32
            if (r2 <= r1) goto L32
            int r1 = r1 + 11
            java.lang.String r5 = r5.substring(r1, r2)
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L2a
            int r1 = r5.intValue()     // Catch: java.lang.Throwable -> L28
            if (r1 <= 0) goto L27
            return r5
        L27:
            return r0
        L28:
            r0 = move-exception
            goto L2e
        L2a:
            r5 = move-exception
            r4 = r0
            r0 = r5
            r5 = r4
        L2e:
            r0.printStackTrace()
            r0 = r5
        L32:
            return r0
    }

    private static void g() {
            android.os.Handler r0 = new android.os.Handler
            r0.<init>()
            com.mbridge.msdk.foundation.same.net.Aa$1 r1 = new com.mbridge.msdk.foundation.same.net.Aa$1
            r1.<init>()
            r2 = 500(0x1f4, double:2.47E-321)
            r0.postDelayed(r1, r2)
            return
    }
}

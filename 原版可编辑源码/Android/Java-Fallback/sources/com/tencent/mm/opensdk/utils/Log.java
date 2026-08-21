package com.tencent.mm.opensdk.utils;

public class Log {
    private static com.tencent.mm.opensdk.utils.ILog logImpl;

    public Log() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void d(java.lang.String r1, java.lang.String r2) {
            com.tencent.mm.opensdk.utils.ILog r0 = com.tencent.mm.opensdk.utils.Log.logImpl
            if (r0 != 0) goto L8
            android.util.Log.d(r1, r2)
            goto Lb
        L8:
            r0.d(r1, r2)
        Lb:
            return
    }

    public static void e(java.lang.String r1, java.lang.String r2) {
            com.tencent.mm.opensdk.utils.ILog r0 = com.tencent.mm.opensdk.utils.Log.logImpl
            if (r0 != 0) goto L8
            android.util.Log.e(r1, r2)
            goto Lb
        L8:
            r0.e(r1, r2)
        Lb:
            return
    }

    public static void i(java.lang.String r1, java.lang.String r2) {
            com.tencent.mm.opensdk.utils.ILog r0 = com.tencent.mm.opensdk.utils.Log.logImpl
            if (r0 != 0) goto L8
            android.util.Log.i(r1, r2)
            goto Lb
        L8:
            r0.i(r1, r2)
        Lb:
            return
    }

    public static void setLogImpl(com.tencent.mm.opensdk.utils.ILog r0) {
            com.tencent.mm.opensdk.utils.Log.logImpl = r0
            return
    }

    public static void v(java.lang.String r1, java.lang.String r2) {
            com.tencent.mm.opensdk.utils.ILog r0 = com.tencent.mm.opensdk.utils.Log.logImpl
            if (r0 != 0) goto L8
            android.util.Log.v(r1, r2)
            goto Lb
        L8:
            r0.v(r1, r2)
        Lb:
            return
    }

    public static void w(java.lang.String r1, java.lang.String r2) {
            com.tencent.mm.opensdk.utils.ILog r0 = com.tencent.mm.opensdk.utils.Log.logImpl
            if (r0 != 0) goto L8
            android.util.Log.w(r1, r2)
            goto Lb
        L8:
            r0.w(r1, r2)
        Lb:
            return
    }
}

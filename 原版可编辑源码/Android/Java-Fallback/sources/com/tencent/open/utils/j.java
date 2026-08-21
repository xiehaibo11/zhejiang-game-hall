package com.tencent.open.utils;

public class j {
    private static com.tencent.open.utils.j a;
    private volatile java.lang.ref.WeakReference<android.content.SharedPreferences> b;

    static {
            return
    }

    public j() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.b = r0
            return
    }

    public static synchronized com.tencent.open.utils.j a() {
            java.lang.Class<com.tencent.open.utils.j> r0 = com.tencent.open.utils.j.class
            monitor-enter(r0)
            com.tencent.open.utils.j r1 = com.tencent.open.utils.j.a     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.tencent.open.utils.j r1 = new com.tencent.open.utils.j     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.tencent.open.utils.j.a = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.tencent.open.utils.j r1 = com.tencent.open.utils.j.a     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public java.lang.String a(android.content.Context r5, java.lang.String r6) {
            r4 = this;
            java.lang.String r0 = "openSDK_LOG.ServerSetting"
            java.lang.ref.WeakReference<android.content.SharedPreferences> r1 = r4.b
            if (r1 == 0) goto Le
            java.lang.ref.WeakReference<android.content.SharedPreferences> r1 = r4.b
            java.lang.Object r1 = r1.get()
            if (r1 != 0) goto L1c
        Le:
            r1 = 0
            java.lang.String r2 = "ServerPrefs"
            android.content.SharedPreferences r5 = r5.getSharedPreferences(r2, r1)
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
            r1.<init>(r5)
            r4.b = r1
        L1c:
            java.net.URL r5 = new java.net.URL     // Catch: java.lang.Exception -> L88
            r5.<init>(r6)     // Catch: java.lang.Exception -> L88
            java.lang.String r5 = r5.getHost()     // Catch: java.lang.Exception -> L88
            if (r5 != 0) goto L3c
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L88
            r5.<init>()     // Catch: java.lang.Exception -> L88
            java.lang.String r1 = "Get host error. url="
            r5.append(r1)     // Catch: java.lang.Exception -> L88
            r5.append(r6)     // Catch: java.lang.Exception -> L88
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L88
            com.tencent.open.log.SLog.e(r0, r5)     // Catch: java.lang.Exception -> L88
            return r6
        L3c:
            java.lang.ref.WeakReference<android.content.SharedPreferences> r1 = r4.b     // Catch: java.lang.Exception -> L88
            java.lang.Object r1 = r1.get()     // Catch: java.lang.Exception -> L88
            android.content.SharedPreferences r1 = (android.content.SharedPreferences) r1     // Catch: java.lang.Exception -> L88
            r2 = 0
            java.lang.String r1 = r1.getString(r5, r2)     // Catch: java.lang.Exception -> L88
            if (r1 == 0) goto L6b
            boolean r2 = r5.equals(r1)     // Catch: java.lang.Exception -> L88
            if (r2 == 0) goto L52
            goto L6b
        L52:
            java.lang.String r6 = r6.replace(r5, r1)     // Catch: java.lang.Exception -> L88
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L88
            r5.<init>()     // Catch: java.lang.Exception -> L88
            java.lang.String r1 = "return environment url : "
            r5.append(r1)     // Catch: java.lang.Exception -> L88
            r5.append(r6)     // Catch: java.lang.Exception -> L88
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L88
            com.tencent.open.log.SLog.v(r0, r5)     // Catch: java.lang.Exception -> L88
            return r6
        L6b:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L88
            r2.<init>()     // Catch: java.lang.Exception -> L88
            java.lang.String r3 = "host="
            r2.append(r3)     // Catch: java.lang.Exception -> L88
            r2.append(r5)     // Catch: java.lang.Exception -> L88
            java.lang.String r5 = ", envHost="
            r2.append(r5)     // Catch: java.lang.Exception -> L88
            r2.append(r1)     // Catch: java.lang.Exception -> L88
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Exception -> L88
            com.tencent.open.log.SLog.v(r0, r5)     // Catch: java.lang.Exception -> L88
            return r6
        L88:
            r5 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getEnvUrl url="
            r1.append(r2)
            r1.append(r6)
            java.lang.String r2 = "error.: "
            r1.append(r2)
            java.lang.String r5 = r5.getMessage()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            com.tencent.open.log.SLog.e(r0, r5)
            return r6
    }
}

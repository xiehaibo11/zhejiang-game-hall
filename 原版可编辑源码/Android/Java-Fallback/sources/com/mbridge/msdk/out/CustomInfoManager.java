package com.mbridge.msdk.out;

public class CustomInfoManager implements com.mbridge.msdk.system.NoProGuard {
    private static com.mbridge.msdk.out.CustomInfoManager INSTANCE = null;
    private static java.lang.String TAG = "CustomInfoManager";
    public static final int TYPE_BID = 6;
    public static final int TYPE_BIDLOAD = 7;
    public static final int TYPE_LOAD = 8;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> infoMap;

    static {
            return
    }

    private CustomInfoManager() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.infoMap = r0
            return
    }

    private java.lang.String getCustomInfoByUnitId(java.lang.String r3, int r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 != 0) goto L52
            r0 = 6
            if (r4 == r0) goto L38
            r0 = 7
            if (r4 == r0) goto L1d
            r0 = 8
            if (r4 == r0) goto L13
            goto L52
        L13:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r4 = r2.infoMap
            java.lang.Object r3 = r4.get(r3)
            r1 = r3
            java.lang.String r1 = (java.lang.String) r1
            goto L52
        L1d:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r4 = r2.infoMap
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = "_bidload"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.Object r3 = r4.get(r3)
            r1 = r3
            java.lang.String r1 = (java.lang.String) r1
            goto L52
        L38:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r4 = r2.infoMap
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = "_bid"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.Object r3 = r4.get(r3)
            r1 = r3
            java.lang.String r1 = (java.lang.String) r1
        L52:
            return r1
    }

    public static synchronized com.mbridge.msdk.out.CustomInfoManager getInstance() {
            java.lang.Class<com.mbridge.msdk.out.CustomInfoManager> r0 = com.mbridge.msdk.out.CustomInfoManager.class
            monitor-enter(r0)
            com.mbridge.msdk.out.CustomInfoManager r1 = com.mbridge.msdk.out.CustomInfoManager.INSTANCE     // Catch: java.lang.Throwable -> L1c
            if (r1 != 0) goto L18
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L1c
            com.mbridge.msdk.out.CustomInfoManager r1 = com.mbridge.msdk.out.CustomInfoManager.INSTANCE     // Catch: java.lang.Throwable -> L15
            if (r1 != 0) goto L13
            com.mbridge.msdk.out.CustomInfoManager r1 = new com.mbridge.msdk.out.CustomInfoManager     // Catch: java.lang.Throwable -> L15
            r1.<init>()     // Catch: java.lang.Throwable -> L15
            com.mbridge.msdk.out.CustomInfoManager.INSTANCE = r1     // Catch: java.lang.Throwable -> L15
        L13:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            goto L18
        L15:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            throw r1     // Catch: java.lang.Throwable -> L1c
        L18:
            com.mbridge.msdk.out.CustomInfoManager r1 = com.mbridge.msdk.out.CustomInfoManager.INSTANCE     // Catch: java.lang.Throwable -> L1c
            monitor-exit(r0)
            return r1
        L1c:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public java.lang.String getCustomInfoByUnitId(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 == 0) goto L10
            return r1
        L10:
            android.net.Uri r6 = android.net.Uri.parse(r6)     // Catch: java.lang.Throwable -> L75
            if (r6 == 0) goto L7d
            java.lang.String r0 = r6.getHost()     // Catch: java.lang.Throwable -> L75
            java.lang.String r6 = r6.getPath()     // Catch: java.lang.Throwable -> L75
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L75
            java.lang.String r3 = "hb"
            if (r2 != 0) goto L40
            boolean r2 = r0.contains(r3)     // Catch: java.lang.Throwable -> L75
            if (r2 == 0) goto L40
            boolean r2 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L75
            if (r2 != 0) goto L40
            java.lang.String r2 = "bid"
            boolean r2 = r6.contains(r2)     // Catch: java.lang.Throwable -> L75
            if (r2 == 0) goto L40
            r6 = 6
            java.lang.String r5 = r4.getCustomInfoByUnitId(r5, r6)     // Catch: java.lang.Throwable -> L75
            return r5
        L40:
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L75
            if (r2 != 0) goto L60
            boolean r0 = r0.contains(r3)     // Catch: java.lang.Throwable -> L75
            if (r0 == 0) goto L60
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L75
            if (r0 != 0) goto L60
            java.lang.String r0 = "load"
            boolean r0 = r6.contains(r0)     // Catch: java.lang.Throwable -> L75
            if (r0 == 0) goto L60
            r6 = 7
            java.lang.String r5 = r4.getCustomInfoByUnitId(r5, r6)     // Catch: java.lang.Throwable -> L75
            return r5
        L60:
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L75
            if (r0 != 0) goto L7d
            java.lang.String r0 = "v3"
            boolean r6 = r6.contains(r0)     // Catch: java.lang.Throwable -> L75
            if (r6 == 0) goto L7d
            r6 = 8
            java.lang.String r5 = r4.getCustomInfoByUnitId(r5, r6)     // Catch: java.lang.Throwable -> L75
            return r5
        L75:
            r5 = move-exception
            java.lang.String r6 = com.mbridge.msdk.out.CustomInfoManager.TAG
            java.lang.String r0 = "Exception"
            com.mbridge.msdk.foundation.tools.z.c(r6, r0, r5)
        L7d:
            return r1
    }

    public void setCustomInfo(java.lang.String r2, int r3, java.lang.String r4) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L4a
            if (r4 == 0) goto L4a
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.t.a(r4)
            r0 = 6
            if (r3 == r0) goto L34
            r0 = 7
            if (r3 == r0) goto L1d
            r0 = 8
            if (r3 == r0) goto L17
            goto L4a
        L17:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r3 = r1.infoMap
            r3.put(r2, r4)
            goto L4a
        L1d:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r3 = r1.infoMap
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = "_bidload"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r3.put(r2, r4)
            goto L4a
        L34:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r3 = r1.infoMap
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = "_bid"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r3.put(r2, r4)
        L4a:
            return
    }
}

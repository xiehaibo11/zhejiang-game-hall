package com.tkay.core.common.l;

public class q {
    private static final int a = 1;
    private static final int b = 2;
    private static final int c = 3;
    private static volatile com.tkay.core.common.l.q e;
    private final android.util.SparseBooleanArray d;

    public q() {
            r2 = this;
            r2.<init>()
            android.util.SparseBooleanArray r0 = new android.util.SparseBooleanArray
            r1 = 3
            r0.<init>(r1)
            r2.d = r0
            return
    }

    public static com.tkay.core.common.l.q a() {
            com.tkay.core.common.l.q r0 = com.tkay.core.common.l.q.e
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.l.q> r0 = com.tkay.core.common.l.q.class
            monitor-enter(r0)
            com.tkay.core.common.l.q r1 = com.tkay.core.common.l.q.e     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.l.q r1 = new com.tkay.core.common.l.q     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.l.q.e = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.core.common.l.q r0 = com.tkay.core.common.l.q.e
            return r0
    }

    public final synchronized boolean a(android.content.Context r5) {
            r4 = this;
            monitor-enter(r4)
            android.util.SparseBooleanArray r0 = r4.d     // Catch: java.lang.Throwable -> L45
            r1 = 1
            int r0 = r0.indexOfKey(r1)     // Catch: java.lang.Throwable -> L45
            if (r0 < 0) goto L12
            android.util.SparseBooleanArray r5 = r4.d     // Catch: java.lang.Throwable -> L45
            boolean r5 = r5.get(r1)     // Catch: java.lang.Throwable -> L45
            monitor-exit(r4)
            return r5
        L12:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L45
            r2 = 16
            r3 = 0
            if (r0 >= r2) goto L20
            android.util.SparseBooleanArray r5 = r4.d     // Catch: java.lang.Throwable -> L45
            r5.put(r1, r3)     // Catch: java.lang.Throwable -> L45
            monitor-exit(r4)
            return r3
        L20:
            com.tkay.core.common.l.o r0 = new com.tkay.core.common.l.o     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L45
            r0.<init>(r5)     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L45
            java.lang.String r5 = "com.huawei.hwid"
            com.tkay.core.common.l.o$a r5 = r0.a(r5)     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L45
            java.lang.String r2 = "com.huawei.hwid"
            java.lang.String r0 = r0.b(r2)     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L45
            com.tkay.core.common.l.o$a r2 = com.tkay.core.common.l.o.a.a     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L45
            if (r5 != r2) goto L3e
            java.lang.String r5 = "B92825C2BD5D6D6D1E7F39EECD17843B7D9016F611136B75441BC6F4D3F00F05"
            boolean r5 = r5.equalsIgnoreCase(r0)     // Catch: java.lang.Exception -> L3e java.lang.Throwable -> L45
            if (r5 == 0) goto L3e
            r3 = r1
        L3e:
            android.util.SparseBooleanArray r5 = r4.d     // Catch: java.lang.Throwable -> L45
            r5.put(r1, r3)     // Catch: java.lang.Throwable -> L45
            monitor-exit(r4)
            return r3
        L45:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public final synchronized boolean b() {
            r3 = this;
            monitor-enter(r3)
            android.util.SparseBooleanArray r0 = r3.d     // Catch: java.lang.Throwable -> L20
            r1 = 3
            int r0 = r0.indexOfKey(r1)     // Catch: java.lang.Throwable -> L20
            if (r0 < 0) goto L12
            android.util.SparseBooleanArray r0 = r3.d     // Catch: java.lang.Throwable -> L20
            boolean r0 = r0.get(r1)     // Catch: java.lang.Throwable -> L20
            monitor-exit(r3)
            return r0
        L12:
            r0 = 0
            java.lang.String r2 = "com.tencent.mm.opensdk.openapi.WXAPIFactory"
            java.lang.Class.forName(r2)     // Catch: java.lang.Exception -> L19 java.lang.Throwable -> L20
            r0 = 1
        L19:
            android.util.SparseBooleanArray r2 = r3.d     // Catch: java.lang.Throwable -> L20
            r2.put(r1, r0)     // Catch: java.lang.Throwable -> L20
            monitor-exit(r3)
            return r0
        L20:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    public final synchronized boolean b(android.content.Context r5) {
            r4 = this;
            monitor-enter(r4)
            android.util.SparseBooleanArray r0 = r4.d     // Catch: java.lang.Throwable -> L38
            r1 = 2
            int r0 = r0.indexOfKey(r1)     // Catch: java.lang.Throwable -> L38
            if (r0 < 0) goto L12
            android.util.SparseBooleanArray r5 = r4.d     // Catch: java.lang.Throwable -> L38
            boolean r5 = r5.get(r1)     // Catch: java.lang.Throwable -> L38
            monitor-exit(r4)
            return r5
        L12:
            r0 = 0
            android.content.Intent r2 = new android.content.Intent     // Catch: java.lang.Exception -> L31 java.lang.Throwable -> L38
            java.lang.String r3 = "com.google.android.gms.ads.identifier.service.START"
            r2.<init>(r3)     // Catch: java.lang.Exception -> L31 java.lang.Throwable -> L38
            java.lang.String r3 = "com.google.android.gms"
            r2.setPackage(r3)     // Catch: java.lang.Exception -> L31 java.lang.Throwable -> L38
            android.content.pm.PackageManager r5 = r5.getPackageManager()     // Catch: java.lang.Exception -> L31 java.lang.Throwable -> L38
            java.util.List r5 = r5.queryIntentServices(r2, r0)     // Catch: java.lang.Exception -> L31 java.lang.Throwable -> L38
            if (r5 == 0) goto L31
            int r5 = r5.size()     // Catch: java.lang.Exception -> L31 java.lang.Throwable -> L38
            if (r5 <= 0) goto L31
            r5 = 1
            r0 = r5
        L31:
            android.util.SparseBooleanArray r5 = r4.d     // Catch: java.lang.Throwable -> L38
            r5.put(r1, r0)     // Catch: java.lang.Throwable -> L38
            monitor-exit(r4)
            return r0
        L38:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }
}

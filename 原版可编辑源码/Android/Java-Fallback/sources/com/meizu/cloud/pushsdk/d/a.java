package com.meizu.cloud.pushsdk.d;

public class a {
    private static com.meizu.cloud.pushsdk.d.e.a a;
    private static android.content.BroadcastReceiver b;


    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.meizu.cloud.pushsdk.d.e.a a(android.content.Context r2, com.meizu.cloud.pushsdk.c.c.a r3, com.meizu.cloud.pushsdk.d.b.f r4) {
            com.meizu.cloud.pushsdk.d.e.a r0 = com.meizu.cloud.pushsdk.d.a.a
            if (r0 != 0) goto L1e
            java.lang.Class<com.meizu.cloud.pushsdk.d.a> r0 = com.meizu.cloud.pushsdk.d.a.class
            monitor-enter(r0)
            com.meizu.cloud.pushsdk.d.e.a r1 = com.meizu.cloud.pushsdk.d.a.a     // Catch: java.lang.Throwable -> L1b
            if (r1 != 0) goto L19
            com.meizu.cloud.pushsdk.d.b.a r3 = b(r2, r3, r4)     // Catch: java.lang.Throwable -> L1b
            r4 = 0
            com.meizu.cloud.pushsdk.d.e.a r3 = a(r3, r4, r2)     // Catch: java.lang.Throwable -> L1b
            com.meizu.cloud.pushsdk.d.a.a = r3     // Catch: java.lang.Throwable -> L1b
            a(r2, r3)     // Catch: java.lang.Throwable -> L1b
        L19:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            goto L1e
        L1b:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            throw r2
        L1e:
            com.meizu.cloud.pushsdk.d.e.a r2 = com.meizu.cloud.pushsdk.d.a.a
            return r2
    }

    public static com.meizu.cloud.pushsdk.d.e.a a(android.content.Context r3, boolean r4) {
            com.meizu.cloud.pushsdk.d.e.a r0 = com.meizu.cloud.pushsdk.d.a.a
            if (r0 != 0) goto L1b
            java.lang.Class<com.meizu.cloud.pushsdk.d.a> r0 = com.meizu.cloud.pushsdk.d.a.class
            monitor-enter(r0)
            com.meizu.cloud.pushsdk.d.e.a r1 = com.meizu.cloud.pushsdk.d.a.a     // Catch: java.lang.Throwable -> L18
            if (r1 != 0) goto L16
            r1 = 0
            com.meizu.cloud.pushsdk.d.b.a r2 = b(r3, r1, r1)     // Catch: java.lang.Throwable -> L18
            com.meizu.cloud.pushsdk.d.e.a r1 = a(r2, r1, r3)     // Catch: java.lang.Throwable -> L18
            com.meizu.cloud.pushsdk.d.a.a = r1     // Catch: java.lang.Throwable -> L18
        L16:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            goto L1b
        L18:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            throw r3
        L1b:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "can upload subject "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PushAndroidTracker"
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r0)
            if (r4 == 0) goto L3c
            com.meizu.cloud.pushsdk.d.e.c r3 = a(r3)
            com.meizu.cloud.pushsdk.d.e.a r4 = com.meizu.cloud.pushsdk.d.a.a
            r4.a(r3)
        L3c:
            com.meizu.cloud.pushsdk.d.e.a r3 = com.meizu.cloud.pushsdk.d.a.a
            return r3
    }

    private static com.meizu.cloud.pushsdk.d.e.a a(com.meizu.cloud.pushsdk.d.b.a r8, com.meizu.cloud.pushsdk.d.e.c r9, android.content.Context r10) {
            com.meizu.cloud.pushsdk.d.e.a.a r0 = new com.meizu.cloud.pushsdk.d.e.a.a
            com.meizu.cloud.pushsdk.d.e.a$a r7 = new com.meizu.cloud.pushsdk.d.e.a$a
            java.lang.String r4 = r10.getPackageCodePath()
            java.lang.Class<com.meizu.cloud.pushsdk.d.e.a.a> r6 = com.meizu.cloud.pushsdk.d.e.a.a.class
            java.lang.String r3 = "PushAndroidTracker"
            r1 = r7
            r2 = r8
            r5 = r10
            r1.<init>(r2, r3, r4, r5, r6)
            com.meizu.cloud.pushsdk.d.f.b r8 = com.meizu.cloud.pushsdk.d.f.b.d
            com.meizu.cloud.pushsdk.d.e.a$a r8 = r7.a(r8)
            r10 = 0
            java.lang.Boolean r10 = java.lang.Boolean.valueOf(r10)
            com.meizu.cloud.pushsdk.d.e.a$a r8 = r8.a(r10)
            com.meizu.cloud.pushsdk.d.e.a$a r8 = r8.a(r9)
            r9 = 4
            com.meizu.cloud.pushsdk.d.e.a$a r8 = r8.a(r9)
            r0.<init>(r8)
            return r0
    }

    private static com.meizu.cloud.pushsdk.d.e.c a(android.content.Context r1) {
            com.meizu.cloud.pushsdk.d.e.c$a r0 = new com.meizu.cloud.pushsdk.d.e.c$a
            r0.<init>()
            com.meizu.cloud.pushsdk.d.e.c$a r1 = r0.a(r1)
            com.meizu.cloud.pushsdk.d.e.c r1 = r1.a()
            return r1
    }

    private static java.lang.String a() {
            boolean r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.isOverseas()
            if (r0 == 0) goto L9
            java.lang.String r0 = "push-statics.in.meizu.com"
            goto Lb
        L9:
            java.lang.String r0 = "push-statics.meizu.com"
        Lb:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "current statics domain is "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "QuickTracker"
            com.meizu.cloud.pushinternal.DebugLogger.e(r2, r1)
            return r0
    }

    private static void a(android.content.Context r1, com.meizu.cloud.pushsdk.d.e.a r2) {
            android.content.BroadcastReceiver r0 = com.meizu.cloud.pushsdk.d.a.b
            if (r0 == 0) goto L5
            return
        L5:
            com.meizu.cloud.pushsdk.d.a$1 r0 = new com.meizu.cloud.pushsdk.d.a$1
            r0.<init>(r2)
            com.meizu.cloud.pushsdk.d.a.b = r0
            android.content.IntentFilter r2 = new android.content.IntentFilter
            java.lang.String r0 = "android.net.conn.CONNECTIVITY_CHANGE"
            r2.<init>(r0)
            android.content.BroadcastReceiver r0 = com.meizu.cloud.pushsdk.d.a.b
            r1.registerReceiver(r0, r2)
            return
    }

    private static com.meizu.cloud.pushsdk.d.b.a b(android.content.Context r4, com.meizu.cloud.pushsdk.c.c.a r5, com.meizu.cloud.pushsdk.d.b.f r6) {
            com.meizu.cloud.pushsdk.d.b.a.a r0 = new com.meizu.cloud.pushsdk.d.b.a.a
            com.meizu.cloud.pushsdk.d.b.a$a r1 = new com.meizu.cloud.pushsdk.d.b.a$a
            java.lang.String r2 = a()
            java.lang.Class<com.meizu.cloud.pushsdk.d.b.a.a> r3 = com.meizu.cloud.pushsdk.d.b.a.a.class
            r1.<init>(r2, r4, r3)
            com.meizu.cloud.pushsdk.d.b.a$a r4 = r1.a(r6)
            com.meizu.cloud.pushsdk.d.b.a$a r4 = r4.a(r5)
            r5 = 1
            com.meizu.cloud.pushsdk.d.b.a$a r4 = r4.a(r5)
            com.meizu.cloud.pushsdk.d.b.b r5 = com.meizu.cloud.pushsdk.d.b.b.b
            com.meizu.cloud.pushsdk.d.b.a$a r4 = r4.a(r5)
            com.meizu.cloud.pushsdk.d.b.b r5 = com.meizu.cloud.pushsdk.d.b.b.b
            int r5 = r5.a()
            com.meizu.cloud.pushsdk.d.b.a$a r4 = r4.b(r5)
            r5 = 2
            com.meizu.cloud.pushsdk.d.b.a$a r4 = r4.c(r5)
            r0.<init>(r4)
            return r0
    }
}

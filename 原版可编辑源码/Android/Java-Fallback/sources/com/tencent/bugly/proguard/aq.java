package com.tencent.bugly.proguard;

public final class aq extends android.content.BroadcastReceiver {
    private static com.tencent.bugly.proguard.aq d;
    private android.content.IntentFilter a;
    private android.content.Context b;
    private java.lang.String c;
    private boolean e;


    static {
            return
    }

    public aq() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.e = r0
            android.content.IntentFilter r0 = new android.content.IntentFilter
            r0.<init>()
            r1.a = r0
            return
    }

    static android.content.IntentFilter a(com.tencent.bugly.proguard.aq r0) {
            android.content.IntentFilter r0 = r0.a
            return r0
    }

    public static synchronized com.tencent.bugly.proguard.aq a() {
            java.lang.Class<com.tencent.bugly.proguard.aq> r0 = com.tencent.bugly.proguard.aq.class
            monitor-enter(r0)
            com.tencent.bugly.proguard.aq r1 = com.tencent.bugly.proguard.aq.d     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.tencent.bugly.proguard.aq r1 = new com.tencent.bugly.proguard.aq     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.tencent.bugly.proguard.aq.d = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.tencent.bugly.proguard.aq r1 = com.tencent.bugly.proguard.aq.d     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private synchronized boolean a(android.content.Context r8, android.content.Intent r9) {
            r7 = this;
            monitor-enter(r7)
            r0 = 0
            if (r8 == 0) goto Lb1
            if (r9 == 0) goto Lb1
            java.lang.String r9 = r9.getAction()     // Catch: java.lang.Throwable -> Lae
            java.lang.String r1 = "android.net.conn.CONNECTIVITY_CHANGE"
            boolean r9 = r9.equals(r1)     // Catch: java.lang.Throwable -> Lae
            if (r9 != 0) goto L14
            goto Lb1
        L14:
            boolean r9 = r7.e     // Catch: java.lang.Throwable -> Lae
            r1 = 1
            if (r9 == 0) goto L1d
            r7.e = r0     // Catch: java.lang.Throwable -> Lae
            monitor-exit(r7)
            return r1
        L1d:
            android.content.Context r9 = r7.b     // Catch: java.lang.Throwable -> Lae
            java.lang.String r9 = com.tencent.bugly.proguard.ab.c(r9)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r2 = "is Connect BC "
            java.lang.String r3 = java.lang.String.valueOf(r9)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r2 = r2.concat(r3)     // Catch: java.lang.Throwable -> Lae
            java.lang.Object[] r3 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> Lae
            com.tencent.bugly.proguard.al.c(r2, r3)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r2 = "network %s changed to %s"
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> Lae
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lae
            r4.<init>()     // Catch: java.lang.Throwable -> Lae
            java.lang.String r5 = r7.c     // Catch: java.lang.Throwable -> Lae
            r4.append(r5)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> Lae
            r3[r0] = r4     // Catch: java.lang.Throwable -> Lae
            java.lang.String r4 = java.lang.String.valueOf(r9)     // Catch: java.lang.Throwable -> Lae
            r3[r1] = r4     // Catch: java.lang.Throwable -> Lae
            com.tencent.bugly.proguard.al.a(r2, r3)     // Catch: java.lang.Throwable -> Lae
            if (r9 != 0) goto L57
            r8 = 0
            r7.c = r8     // Catch: java.lang.Throwable -> Lae
            monitor-exit(r7)
            return r1
        L57:
            java.lang.String r2 = r7.c     // Catch: java.lang.Throwable -> Lae
            r7.c = r9     // Catch: java.lang.Throwable -> Lae
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lae
            com.tencent.bugly.proguard.ac r5 = com.tencent.bugly.proguard.ac.a()     // Catch: java.lang.Throwable -> Lae
            com.tencent.bugly.proguard.ai r6 = com.tencent.bugly.proguard.ai.a()     // Catch: java.lang.Throwable -> Lae
            com.tencent.bugly.proguard.aa r8 = com.tencent.bugly.proguard.aa.a(r8)     // Catch: java.lang.Throwable -> Lae
            if (r5 == 0) goto La5
            if (r6 == 0) goto La5
            if (r8 != 0) goto L72
            goto La5
        L72:
            boolean r8 = r9.equals(r2)     // Catch: java.lang.Throwable -> Lae
            if (r8 != 0) goto La3
            int r8 = com.tencent.bugly.proguard.at.a     // Catch: java.lang.Throwable -> Lae
            long r8 = r6.a(r8)     // Catch: java.lang.Throwable -> Lae
            long r3 = r3 - r8
            r8 = 30000(0x7530, double:1.4822E-319)
            int r2 = (r3 > r8 ? 1 : (r3 == r8 ? 0 : -1))
            if (r2 <= 0) goto La3
            java.lang.String r8 = "try to upload crash on network changed."
            java.lang.Object[] r9 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> Lae
            com.tencent.bugly.proguard.al.a(r8, r9)     // Catch: java.lang.Throwable -> Lae
            com.tencent.bugly.proguard.at r8 = com.tencent.bugly.proguard.at.a()     // Catch: java.lang.Throwable -> Lae
            if (r8 == 0) goto L97
            r2 = 0
            r8.a(r2)     // Catch: java.lang.Throwable -> Lae
        L97:
            java.lang.String r8 = "try to upload userinfo on network changed."
            java.lang.Object[] r9 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> Lae
            com.tencent.bugly.proguard.al.a(r8, r9)     // Catch: java.lang.Throwable -> Lae
            com.tencent.bugly.proguard.r r8 = com.tencent.bugly.proguard.s.b     // Catch: java.lang.Throwable -> Lae
            r8.b()     // Catch: java.lang.Throwable -> Lae
        La3:
            monitor-exit(r7)
            return r1
        La5:
            java.lang.String r8 = "not inited BC not work"
            java.lang.Object[] r9 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> Lae
            com.tencent.bugly.proguard.al.d(r8, r9)     // Catch: java.lang.Throwable -> Lae
            monitor-exit(r7)
            return r1
        Lae:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
        Lb1:
            monitor-exit(r7)
            return r0
    }

    static android.content.Context b(com.tencent.bugly.proguard.aq r0) {
            android.content.Context r0 = r0.b
            return r0
    }

    static com.tencent.bugly.proguard.aq b() {
            com.tencent.bugly.proguard.aq r0 = com.tencent.bugly.proguard.aq.d
            return r0
    }

    public final synchronized void a(android.content.Context r1) {
            r0 = this;
            monitor-enter(r0)
            r0.b = r1     // Catch: java.lang.Throwable -> Ld
            com.tencent.bugly.proguard.aq$1 r1 = new com.tencent.bugly.proguard.aq$1     // Catch: java.lang.Throwable -> Ld
            r1.<init>(r0, r0)     // Catch: java.lang.Throwable -> Ld
            com.tencent.bugly.proguard.ap.a(r1)     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r0)
            return
        Ld:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public final synchronized void a(java.lang.String r4) {
            r3 = this;
            monitor-enter(r3)
            android.content.IntentFilter r0 = r3.a     // Catch: java.lang.Throwable -> L1b
            boolean r0 = r0.hasAction(r4)     // Catch: java.lang.Throwable -> L1b
            if (r0 != 0) goto Le
            android.content.IntentFilter r0 = r3.a     // Catch: java.lang.Throwable -> L1b
            r0.addAction(r4)     // Catch: java.lang.Throwable -> L1b
        Le:
            java.lang.String r0 = "add action %s"
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L1b
            r2 = 0
            r1[r2] = r4     // Catch: java.lang.Throwable -> L1b
            com.tencent.bugly.proguard.al.c(r0, r1)     // Catch: java.lang.Throwable -> L1b
            monitor-exit(r3)
            return
        L1b:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public final synchronized void b(android.content.Context r4) {
            r3 = this;
            monitor-enter(r3)
            java.lang.Class r0 = r3.getClass()     // Catch: java.lang.Throwable -> L14 java.lang.Throwable -> L16
            java.lang.String r1 = "Unregister broadcast receiver of Bugly."
            r2 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L14 java.lang.Throwable -> L16
            com.tencent.bugly.proguard.al.a(r0, r1, r2)     // Catch: java.lang.Throwable -> L14 java.lang.Throwable -> L16
            r4.unregisterReceiver(r3)     // Catch: java.lang.Throwable -> L14 java.lang.Throwable -> L16
            r3.b = r4     // Catch: java.lang.Throwable -> L14 java.lang.Throwable -> L16
            monitor-exit(r3)
            return
        L14:
            r4 = move-exception
            goto L22
        L16:
            r4 = move-exception
            boolean r0 = com.tencent.bugly.proguard.al.a(r4)     // Catch: java.lang.Throwable -> L14
            if (r0 != 0) goto L20
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L14
        L20:
            monitor-exit(r3)
            return
        L22:
            monitor-exit(r3)
            throw r4
    }

    @Override
    public final void onReceive(android.content.Context r1, android.content.Intent r2) {
            r0 = this;
            r0.a(r1, r2)     // Catch: java.lang.Throwable -> L4
            return
        L4:
            r1 = move-exception
            boolean r2 = com.tencent.bugly.proguard.al.a(r1)
            if (r2 != 0) goto Le
            r1.printStackTrace()
        Le:
            return
    }
}

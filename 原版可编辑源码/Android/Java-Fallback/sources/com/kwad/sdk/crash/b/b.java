package com.kwad.sdk.crash.b;

public final class b {
    private java.util.Set<java.lang.String> aAb;
    private java.util.Set<java.lang.String> aAc;

    public b() {
            r1 = this;
            r1.<init>()
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.aAb = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.aAc = r0
            return
    }

    public final synchronized java.lang.String[] EE() {
            r2 = this;
            monitor-enter(r2)
            java.util.Set<java.lang.String> r0 = r2.aAc     // Catch: java.lang.Throwable -> L13
            java.util.Set<java.lang.String> r1 = r2.aAc     // Catch: java.lang.Throwable -> L13
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L13
            java.lang.String[] r1 = new java.lang.String[r1]     // Catch: java.lang.Throwable -> L13
            java.lang.Object[] r0 = r0.toArray(r1)     // Catch: java.lang.Throwable -> L13
            java.lang.String[] r0 = (java.lang.String[]) r0     // Catch: java.lang.Throwable -> L13
            monitor-exit(r2)
            return r0
        L13:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public final synchronized java.lang.String[] EQ() {
            r2 = this;
            monitor-enter(r2)
            java.util.Set<java.lang.String> r0 = r2.aAb     // Catch: java.lang.Throwable -> L13
            java.util.Set<java.lang.String> r1 = r2.aAb     // Catch: java.lang.Throwable -> L13
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L13
            java.lang.String[] r1 = new java.lang.String[r1]     // Catch: java.lang.Throwable -> L13
            java.lang.Object[] r0 = r0.toArray(r1)     // Catch: java.lang.Throwable -> L13
            java.lang.String[] r0 = (java.lang.String[]) r0     // Catch: java.lang.Throwable -> L13
            monitor-exit(r2)
            return r0
        L13:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public final synchronized void a(java.lang.String[] r6, java.lang.String[] r7) {
            r5 = this;
            monitor-enter(r5)
            r0 = 0
            if (r6 == 0) goto L1d
            int r1 = r6.length     // Catch: java.lang.Throwable -> L1b
            if (r1 <= 0) goto L1d
            int r1 = r6.length     // Catch: java.lang.Throwable -> L1b
            r2 = r0
        L9:
            if (r2 >= r1) goto L1d
            r3 = r6[r2]     // Catch: java.lang.Throwable -> L1b
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L1b
            if (r4 != 0) goto L18
            java.util.Set<java.lang.String> r4 = r5.aAb     // Catch: java.lang.Throwable -> L1b
            r4.add(r3)     // Catch: java.lang.Throwable -> L1b
        L18:
            int r2 = r2 + 1
            goto L9
        L1b:
            r6 = move-exception
            goto L35
        L1d:
            if (r7 == 0) goto L37
            int r6 = r7.length     // Catch: java.lang.Throwable -> L1b
            if (r6 <= 0) goto L37
            int r6 = r7.length     // Catch: java.lang.Throwable -> L1b
        L23:
            if (r0 >= r6) goto L37
            r1 = r7[r0]     // Catch: java.lang.Throwable -> L1b
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L1b
            if (r2 != 0) goto L32
            java.util.Set<java.lang.String> r2 = r5.aAc     // Catch: java.lang.Throwable -> L1b
            r2.add(r1)     // Catch: java.lang.Throwable -> L1b
        L32:
            int r0 = r0 + 1
            goto L23
        L35:
            monitor-exit(r5)
            throw r6
        L37:
            monitor-exit(r5)
            return
    }
}

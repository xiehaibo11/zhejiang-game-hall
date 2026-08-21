package com.xiaomi.mipush.sdk;

public class af {
    private static volatile com.xiaomi.mipush.sdk.af a;
    private android.content.Context a;
    private java.util.List<com.xiaomi.mipush.sdk.x> a;

    static {
            return
    }

    private af(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.a = r0
            android.content.Context r0 = r2.getApplicationContext()
            r1.a = r0
            if (r0 != 0) goto L14
            r1.a = r2
        L14:
            return
    }

    public static com.xiaomi.mipush.sdk.af a(android.content.Context r2) {
            com.xiaomi.mipush.sdk.af r0 = com.xiaomi.mipush.sdk.af.a
            if (r0 != 0) goto L17
            java.lang.Class<com.xiaomi.mipush.sdk.af> r0 = com.xiaomi.mipush.sdk.af.class
            monitor-enter(r0)
            com.xiaomi.mipush.sdk.af r1 = com.xiaomi.mipush.sdk.af.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.xiaomi.mipush.sdk.af r1 = new com.xiaomi.mipush.sdk.af     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.xiaomi.mipush.sdk.af.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.xiaomi.mipush.sdk.af r2 = com.xiaomi.mipush.sdk.af.a
            return r2
    }

    public int a(java.lang.String r5) {
            r4 = this;
            java.util.List<com.xiaomi.mipush.sdk.x> r0 = r4.a
            monitor-enter(r0)
            com.xiaomi.mipush.sdk.x r1 = new com.xiaomi.mipush.sdk.x     // Catch: java.lang.Throwable -> L31
            r1.<init>()     // Catch: java.lang.Throwable -> L31
            r1.a = r5     // Catch: java.lang.Throwable -> L31
            java.util.List<com.xiaomi.mipush.sdk.x> r5 = r4.a     // Catch: java.lang.Throwable -> L31
            boolean r5 = r5.contains(r1)     // Catch: java.lang.Throwable -> L31
            if (r5 == 0) goto L2e
            java.util.List<com.xiaomi.mipush.sdk.x> r5 = r4.a     // Catch: java.lang.Throwable -> L31
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L31
        L18:
            boolean r2 = r5.hasNext()     // Catch: java.lang.Throwable -> L31
            if (r2 == 0) goto L2e
            java.lang.Object r2 = r5.next()     // Catch: java.lang.Throwable -> L31
            com.xiaomi.mipush.sdk.x r2 = (com.xiaomi.mipush.sdk.x) r2     // Catch: java.lang.Throwable -> L31
            boolean r3 = r2.equals(r1)     // Catch: java.lang.Throwable -> L31
            if (r3 == 0) goto L18
            int r5 = r2.a     // Catch: java.lang.Throwable -> L31
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L31
            return r5
        L2e:
            r5 = 0
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L31
            return r5
        L31:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L31
            throw r5
    }

    public synchronized java.lang.String a(com.xiaomi.mipush.sdk.au r4) {
            r3 = this;
            monitor-enter(r3)
            android.content.Context r0 = r3.a     // Catch: java.lang.Throwable -> L16
            java.lang.String r1 = "mipush_extra"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)     // Catch: java.lang.Throwable -> L16
            java.lang.String r4 = r4.name()     // Catch: java.lang.Throwable -> L16
            java.lang.String r1 = ""
            java.lang.String r4 = r0.getString(r4, r1)     // Catch: java.lang.Throwable -> L16
            monitor-exit(r3)
            return r4
        L16:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public synchronized void a(com.xiaomi.mipush.sdk.au r4, java.lang.String r5) {
            r3 = this;
            monitor-enter(r3)
            android.content.Context r0 = r3.a     // Catch: java.lang.Throwable -> L1b
            java.lang.String r1 = "mipush_extra"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)     // Catch: java.lang.Throwable -> L1b
            java.lang.String r4 = r4.name()     // Catch: java.lang.Throwable -> L1b
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Throwable -> L1b
            android.content.SharedPreferences$Editor r4 = r0.putString(r4, r5)     // Catch: java.lang.Throwable -> L1b
            r4.commit()     // Catch: java.lang.Throwable -> L1b
            monitor-exit(r3)
            return
        L1b:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public void a(java.lang.String r4) {
            r3 = this;
            java.util.List<com.xiaomi.mipush.sdk.x> r0 = r3.a
            monitor-enter(r0)
            com.xiaomi.mipush.sdk.x r1 = new com.xiaomi.mipush.sdk.x     // Catch: java.lang.Throwable -> L21
            r1.<init>()     // Catch: java.lang.Throwable -> L21
            r2 = 0
            r1.a = r2     // Catch: java.lang.Throwable -> L21
            r1.a = r4     // Catch: java.lang.Throwable -> L21
            java.util.List<com.xiaomi.mipush.sdk.x> r4 = r3.a     // Catch: java.lang.Throwable -> L21
            boolean r4 = r4.contains(r1)     // Catch: java.lang.Throwable -> L21
            if (r4 == 0) goto L1a
            java.util.List<com.xiaomi.mipush.sdk.x> r4 = r3.a     // Catch: java.lang.Throwable -> L21
            r4.remove(r1)     // Catch: java.lang.Throwable -> L21
        L1a:
            java.util.List<com.xiaomi.mipush.sdk.x> r4 = r3.a     // Catch: java.lang.Throwable -> L21
            r4.add(r1)     // Catch: java.lang.Throwable -> L21
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L21
            return
        L21:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L21
            throw r4
    }

    public boolean a(java.lang.String r3) {
            r2 = this;
            java.util.List<com.xiaomi.mipush.sdk.x> r0 = r2.a
            monitor-enter(r0)
            com.xiaomi.mipush.sdk.x r1 = new com.xiaomi.mipush.sdk.x     // Catch: java.lang.Throwable -> L18
            r1.<init>()     // Catch: java.lang.Throwable -> L18
            r1.a = r3     // Catch: java.lang.Throwable -> L18
            java.util.List<com.xiaomi.mipush.sdk.x> r3 = r2.a     // Catch: java.lang.Throwable -> L18
            boolean r3 = r3.contains(r1)     // Catch: java.lang.Throwable -> L18
            if (r3 == 0) goto L15
            r3 = 1
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            return r3
        L15:
            r3 = 0
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            return r3
        L18:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            throw r3
    }

    public void b(java.lang.String r5) {
            r4 = this;
            java.util.List<com.xiaomi.mipush.sdk.x> r0 = r4.a
            monitor-enter(r0)
            com.xiaomi.mipush.sdk.x r1 = new com.xiaomi.mipush.sdk.x     // Catch: java.lang.Throwable -> L3d
            r1.<init>()     // Catch: java.lang.Throwable -> L3d
            r1.a = r5     // Catch: java.lang.Throwable -> L3d
            java.util.List<com.xiaomi.mipush.sdk.x> r5 = r4.a     // Catch: java.lang.Throwable -> L3d
            boolean r5 = r5.contains(r1)     // Catch: java.lang.Throwable -> L3d
            if (r5 == 0) goto L2b
            java.util.List<com.xiaomi.mipush.sdk.x> r5 = r4.a     // Catch: java.lang.Throwable -> L3d
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L3d
        L18:
            boolean r2 = r5.hasNext()     // Catch: java.lang.Throwable -> L3d
            if (r2 == 0) goto L2b
            java.lang.Object r2 = r5.next()     // Catch: java.lang.Throwable -> L3d
            com.xiaomi.mipush.sdk.x r2 = (com.xiaomi.mipush.sdk.x) r2     // Catch: java.lang.Throwable -> L3d
            boolean r3 = r1.equals(r2)     // Catch: java.lang.Throwable -> L3d
            if (r3 == 0) goto L18
            r1 = r2
        L2b:
            int r5 = r1.a     // Catch: java.lang.Throwable -> L3d
            int r5 = r5 + 1
            r1.a = r5     // Catch: java.lang.Throwable -> L3d
            java.util.List<com.xiaomi.mipush.sdk.x> r5 = r4.a     // Catch: java.lang.Throwable -> L3d
            r5.remove(r1)     // Catch: java.lang.Throwable -> L3d
            java.util.List<com.xiaomi.mipush.sdk.x> r5 = r4.a     // Catch: java.lang.Throwable -> L3d
            r5.add(r1)     // Catch: java.lang.Throwable -> L3d
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3d
            return
        L3d:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3d
            throw r5
    }

    public void c(java.lang.String r3) {
            r2 = this;
            java.util.List<com.xiaomi.mipush.sdk.x> r0 = r2.a
            monitor-enter(r0)
            com.xiaomi.mipush.sdk.x r1 = new com.xiaomi.mipush.sdk.x     // Catch: java.lang.Throwable -> L19
            r1.<init>()     // Catch: java.lang.Throwable -> L19
            r1.a = r3     // Catch: java.lang.Throwable -> L19
            java.util.List<com.xiaomi.mipush.sdk.x> r3 = r2.a     // Catch: java.lang.Throwable -> L19
            boolean r3 = r3.contains(r1)     // Catch: java.lang.Throwable -> L19
            if (r3 == 0) goto L17
            java.util.List<com.xiaomi.mipush.sdk.x> r3 = r2.a     // Catch: java.lang.Throwable -> L19
            r3.remove(r1)     // Catch: java.lang.Throwable -> L19
        L17:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            return
        L19:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            throw r3
    }
}

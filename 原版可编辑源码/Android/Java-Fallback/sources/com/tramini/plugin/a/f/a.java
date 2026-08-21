package com.tramini.plugin.a.f;

public class a {
    public static final java.lang.String a = null;
    public static final int b = 0;
    public static final int c = 1;
    public static final int d = 3;
    private static com.tramini.plugin.a.f.a e;

    final class 1 implements java.lang.Runnable {
        final java.lang.String a;
        final org.json.JSONObject b;
        final org.json.JSONObject c;
        final int d;
        final com.tramini.plugin.a.f.a e;


        1(com.tramini.plugin.a.f.a r1, java.lang.String r2, org.json.JSONObject r3, org.json.JSONObject r4, int r5) {
                r0 = this;
                r0.e = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.d = r5
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r5 = this;
                com.tramini.plugin.a.d.e r0 = new com.tramini.plugin.a.d.e
                com.tramini.plugin.a.a.c r1 = com.tramini.plugin.a.a.c.a()
                android.content.Context r1 = r1.b()
                java.lang.String r2 = r5.a
                org.json.JSONObject r3 = r5.b
                org.json.JSONObject r4 = r5.c
                r0.<init>(r1, r2, r3, r4)
                int r1 = r5.d
                com.tramini.plugin.a.f.a$1$1 r2 = new com.tramini.plugin.a.f.a$1$1
                r2.<init>(r5)
                r0.a(r1, r2)
                return
        }
    }

    static {
            java.lang.Class<com.tramini.plugin.a.f.a> r0 = com.tramini.plugin.a.f.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.tramini.plugin.a.f.a.a = r0
            return
    }

    private a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tramini.plugin.a.f.a a() {
            com.tramini.plugin.a.f.a r0 = com.tramini.plugin.a.f.a.e
            if (r0 != 0) goto Lb
            com.tramini.plugin.a.f.a r0 = new com.tramini.plugin.a.f.a
            r0.<init>()
            com.tramini.plugin.a.f.a.e = r0
        Lb:
            com.tramini.plugin.a.f.a r0 = com.tramini.plugin.a.f.a.e
            return r0
    }

    private synchronized void a(int r10, java.lang.String r11, org.json.JSONObject r12, org.json.JSONObject r13) {
            r9 = this;
            monitor-enter(r9)
            com.tramini.plugin.a.a.c r0 = com.tramini.plugin.a.a.c.a()     // Catch: java.lang.Throwable -> L4f
            android.content.Context r0 = r0.b()     // Catch: java.lang.Throwable -> L4f
            com.tramini.plugin.b.b r0 = com.tramini.plugin.b.b.a(r0)     // Catch: java.lang.Throwable -> L4f
            com.tramini.plugin.b.a r0 = r0.b()     // Catch: java.lang.Throwable -> L4f
            if (r0 != 0) goto L15
            monitor-exit(r9)
            return
        L15:
            java.util.concurrent.ConcurrentHashMap r0 = r0.e()     // Catch: java.lang.Throwable -> L4f
            java.lang.Object r0 = r0.get(r11)     // Catch: java.lang.Throwable -> L4f
            com.tramini.plugin.a.c.c r0 = (com.tramini.plugin.a.c.c) r0     // Catch: java.lang.Throwable -> L4f
            r1 = 5000(0x1388, float:7.006E-42)
            if (r0 == 0) goto L3a
            int r1 = r0.b     // Catch: java.lang.Throwable -> L4f
            int r0 = r0.c     // Catch: java.lang.Throwable -> L4f
            if (r1 != 0) goto L2d
            if (r0 != 0) goto L2d
            r1 = 0
            goto L3a
        L2d:
            if (r1 == r0) goto L3a
            java.util.Random r2 = new java.util.Random     // Catch: java.lang.Throwable -> L4f
            r2.<init>()     // Catch: java.lang.Throwable -> L4f
            int r0 = r0 - r1
            int r0 = r2.nextInt(r0)     // Catch: java.lang.Throwable -> L4f
            int r1 = r1 + r0
        L3a:
            com.tramini.plugin.a.a.c r0 = com.tramini.plugin.a.a.c.a()     // Catch: java.lang.Throwable -> L4f
            com.tramini.plugin.a.f.a$1 r8 = new com.tramini.plugin.a.f.a$1     // Catch: java.lang.Throwable -> L4f
            r2 = r8
            r3 = r9
            r4 = r11
            r5 = r12
            r6 = r13
            r7 = r10
            r2.<init>(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L4f
            long r10 = (long) r1     // Catch: java.lang.Throwable -> L4f
            r0.a(r8, r10)     // Catch: java.lang.Throwable -> L4f
            monitor-exit(r9)
            return
        L4f:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
    }

    private void a(int r9, java.lang.String r10, org.json.JSONObject r11, org.json.JSONObject r12, int r13) {
            r8 = this;
            com.tramini.plugin.a.a.c r0 = com.tramini.plugin.a.a.c.a()
            com.tramini.plugin.a.f.a$1 r7 = new com.tramini.plugin.a.f.a$1
            r1 = r7
            r2 = r8
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r9
            r1.<init>(r2, r3, r4, r5, r6)
            long r9 = (long) r13
            r0.a(r7, r9)
            return
    }

    public final void a(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "type"
            r2 = 14
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L12
            java.lang.String r1 = "setting_id"
            r0.put(r1, r5)     // Catch: org.json.JSONException -> L12
            goto L16
        L12:
            r5 = move-exception
            r5.printStackTrace()
        L16:
            r5 = 0
            r1 = 0
            r3.a(r5, r4, r1, r0)
            return
    }

    public final void a(java.lang.String r4, java.lang.String r5, org.json.JSONObject r6, org.json.JSONObject r7) {
            r3 = this;
            java.lang.String r0 = "sdk_time"
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L15
            r7.put(r0, r1)     // Catch: java.lang.Throwable -> L15
            java.lang.String r0 = "type"
            r1 = 17
            r7.put(r0, r1)     // Catch: java.lang.Throwable -> L15
            java.lang.String r0 = "setting_id"
            r7.put(r0, r5)     // Catch: java.lang.Throwable -> L15
        L15:
            r5 = 3
            r3.a(r5, r4, r6, r7)
            return
    }

    public final synchronized void a(java.lang.String r2, org.json.JSONObject r3, org.json.JSONObject r4) {
            r1 = this;
            monitor-enter(r1)
            r0 = 1
            r1.a(r0, r2, r3, r4)     // Catch: java.lang.Throwable -> L7
            monitor-exit(r1)
            return
        L7:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }
}

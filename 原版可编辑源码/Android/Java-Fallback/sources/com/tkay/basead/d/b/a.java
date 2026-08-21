package com.tkay.basead.d.b;

public class a {
    private static volatile com.tkay.basead.d.b.a c;
    java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> a;
    private android.content.Context b;

    final class 1 implements com.tkay.core.common.h.k {
        final com.tkay.core.common.f.i a;
        final com.tkay.basead.d.b.a.a b;
        final com.tkay.basead.d.b.a c;

        1(com.tkay.basead.d.b.a r1, com.tkay.core.common.f.i r2, com.tkay.basead.d.b.a.a r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public final void onLoadCanceled(int r4) {
                r3 = this;
                com.tkay.basead.d.b.a$a r4 = r3.b
                if (r4 == 0) goto L10
                r0 = 0
                java.lang.String r1 = "30001"
                java.lang.String r2 = "Cancel Request."
                com.tkay.basead.c.e r1 = com.tkay.basead.c.f.a(r1, r2)
                r4.a(r0, r1)
            L10:
                return
        }

        @Override
        public final void onLoadError(int r2, java.lang.String r3, com.tkay.core.api.AdError r4) {
                r1 = this;
                com.tkay.basead.d.b.a$a r2 = r1.b
                if (r2 == 0) goto Le
                r4 = 0
                java.lang.String r0 = "30001"
                com.tkay.basead.c.e r3 = com.tkay.basead.c.f.a(r0, r3)
                r2.a(r4, r3)
            Le:
                return
        }

        @Override
        public final void onLoadFinish(int r6, java.lang.Object r7) {
                r5 = this;
                r6 = 0
                org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1a
                java.lang.String r1 = r7.toString()     // Catch: java.lang.Exception -> L1a
                r0.<init>(r1)     // Catch: java.lang.Exception -> L1a
                java.lang.String r1 = "sdk_updatetime"
                long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L1b
                r0.put(r1, r2)     // Catch: java.lang.Exception -> L1b
                com.tkay.core.common.f.i r1 = r5.a     // Catch: java.lang.Exception -> L1b
                com.tkay.core.common.f.y r1 = com.tkay.basead.d.b.b.a(r1, r0)     // Catch: java.lang.Exception -> L1b
                goto L1c
            L1a:
                r0 = r6
            L1b:
                r1 = r6
            L1c:
                java.lang.String r2 = "30001"
                if (r1 == 0) goto Lee
                com.tkay.basead.d.c.b.a(r1)
                int r7 = r1.b()
                r3 = 1
                if (r7 != r3) goto L69
                com.tkay.basead.d.b.a r7 = r5.c
                android.content.Context r7 = com.tkay.basead.d.b.a.a(r7)
                android.content.Context r7 = r7.getApplicationContext()
                java.lang.String r3 = r1.B()
                boolean r7 = com.tkay.basead.a.b.a(r7, r3)
                if (r7 == 0) goto L69
                com.tkay.basead.d.c.c r7 = com.tkay.basead.d.c.c.a()
                com.tkay.basead.d.b.a r0 = r5.c
                android.content.Context r0 = com.tkay.basead.d.b.a.a(r0)
                com.tkay.core.common.f.i r3 = r5.a
                java.lang.String r3 = r3.b
                com.tkay.core.common.f.i r4 = r5.a
                java.lang.String r4 = r4.c
                java.lang.String r3 = com.tkay.basead.d.c.c.a(r3, r4)
                com.tkay.core.common.f.i r4 = r5.a
                com.tkay.core.common.f.j r4 = r4.m
                r7.a(r0, r3, r1, r4)
                com.tkay.basead.d.b.a$a r7 = r5.b
                if (r7 == 0) goto L68
                java.lang.String r0 = "Application installed."
                com.tkay.basead.c.e r0 = com.tkay.basead.c.f.a(r2, r0)
                r7.a(r6, r0)
            L68:
                return
            L69:
                int r7 = r1.b()
                r3 = 2
                if (r7 != r3) goto Laf
                com.tkay.basead.d.b.a r7 = r5.c
                android.content.Context r7 = com.tkay.basead.d.b.a.a(r7)
                android.content.Context r7 = r7.getApplicationContext()
                java.lang.String r3 = r1.B()
                boolean r7 = com.tkay.basead.a.b.a(r7, r3)
                if (r7 != 0) goto Laf
                com.tkay.basead.d.c.c r7 = com.tkay.basead.d.c.c.a()
                com.tkay.basead.d.b.a r0 = r5.c
                android.content.Context r0 = com.tkay.basead.d.b.a.a(r0)
                com.tkay.core.common.f.i r3 = r5.a
                java.lang.String r3 = r3.b
                com.tkay.core.common.f.i r4 = r5.a
                java.lang.String r4 = r4.c
                java.lang.String r3 = com.tkay.basead.d.c.c.a(r3, r4)
                com.tkay.core.common.f.i r4 = r5.a
                com.tkay.core.common.f.j r4 = r4.m
                r7.a(r0, r3, r1, r4)
                com.tkay.basead.d.b.a$a r7 = r5.b
                if (r7 == 0) goto Lae
                java.lang.String r0 = "Application not installed yet."
                com.tkay.basead.c.e r0 = com.tkay.basead.c.f.a(r2, r0)
                r7.a(r6, r0)
            Lae:
                return
            Laf:
                com.tkay.core.common.f.i r6 = r5.a
                com.tkay.basead.d.c.a.a(r6, r1)
                r6 = 10
                com.tkay.basead.c.i r7 = new com.tkay.basead.c.i
                com.tkay.core.common.f.i r2 = r5.a
                java.lang.String r2 = r2.d
                java.lang.String r3 = ""
                r7.<init>(r2, r3)
                com.tkay.basead.a.b.a(r6, r1, r7)
                com.tkay.core.basead.b.a()
                com.tkay.basead.d.b.a r6 = r5.c
                android.content.Context r6 = com.tkay.basead.d.b.a.a(r6)
                com.tkay.core.basead.b.a()
                com.tkay.core.common.f.i r7 = r5.a
                java.lang.String r7 = com.tkay.core.basead.b.a(r7)
                java.lang.String r0 = r0.toString()
                com.tkay.core.basead.b.a(r6, r7, r0)
                com.tkay.basead.d.b.a$a r6 = r5.b
                if (r6 == 0) goto Le4
                r6.a()
            Le4:
                com.tkay.basead.d.b.a r6 = r5.c
                com.tkay.core.common.f.i r7 = r5.a
                com.tkay.basead.d.b.a$a r0 = r5.b
                com.tkay.basead.d.b.a.a(r6, r1, r7, r0)
                return
            Lee:
                com.tkay.basead.d.b.a$a r0 = r5.b
                if (r0 == 0) goto L102
                if (r7 == 0) goto Lf9
                java.lang.String r7 = r7.toString()
                goto Lfb
            Lf9:
                java.lang.String r7 = "No Ad Return."
            Lfb:
                com.tkay.basead.c.e r7 = com.tkay.basead.c.f.a(r2, r7)
                r0.a(r6, r7)
            L102:
                return
        }

        @Override
        public final void onLoadStart(int r1) {
                r0 = this;
                return
        }
    }


    public interface a {
        void a();

        void a(com.tkay.core.common.f.y r1);

        void a(com.tkay.core.common.f.y r1, com.tkay.basead.c.e r2);
    }

    private a(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            android.content.Context r2 = r2.getApplicationContext()
            r1.b = r2
            java.util.concurrent.ConcurrentHashMap r2 = new java.util.concurrent.ConcurrentHashMap
            r0 = 3
            r2.<init>(r0)
            r1.a = r2
            return
    }

    static android.content.Context a(com.tkay.basead.d.b.a r0) {
            android.content.Context r0 = r0.b
            return r0
    }

    public static com.tkay.basead.d.b.a a(android.content.Context r2) {
            com.tkay.basead.d.b.a r0 = com.tkay.basead.d.b.a.c
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.basead.d.b.a> r0 = com.tkay.basead.d.b.a.class
            monitor-enter(r0)
            com.tkay.basead.d.b.a r1 = com.tkay.basead.d.b.a.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.basead.d.b.a r1 = new com.tkay.basead.d.b.a     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tkay.basead.d.b.a.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tkay.basead.d.b.a r2 = com.tkay.basead.d.b.a.c
            return r2
    }

    static void a(com.tkay.basead.d.b.a r0, com.tkay.core.common.f.y r1, com.tkay.core.common.f.i r2, com.tkay.basead.d.b.a.a r3) {
            r0.a(r1, r2, r3)
            return
    }

    private void a(com.tkay.core.common.f.y r3, com.tkay.core.common.f.i r4, com.tkay.basead.d.b.a.a r5) {
            r2 = this;
            com.tkay.basead.a.f.a()
            java.lang.String r0 = r4.b
            com.tkay.basead.d.b.a$2 r1 = new com.tkay.basead.d.b.a$2
            r1.<init>(r2, r4, r5, r3)
            com.tkay.basead.a.f.a(r0, r3, r4, r1)
            return
    }

    private void b(com.tkay.core.common.f.i r10, java.lang.String r11, com.tkay.basead.d.b.a.a r12) {
            r9 = this;
            com.tkay.core.common.f.y r0 = r9.a(r10)     // Catch: java.lang.Throwable -> L5
            goto L6
        L5:
            r0 = 0
        L6:
            if (r0 == 0) goto L18
            boolean r1 = r0.N()
            if (r1 == 0) goto Lf
            goto L18
        Lf:
            if (r12 == 0) goto L14
            r12.a()
        L14:
            r9.a(r0, r10, r12)
            return
        L18:
            com.tkay.core.common.f.j r0 = r10.m
            java.lang.String r0 = r0.r()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 0
            if (r0 != 0) goto L44
            com.tkay.core.common.f.j r0 = r10.m     // Catch: java.lang.Throwable -> L40
            java.lang.String r0 = r0.r()     // Catch: java.lang.Throwable -> L40
            java.lang.String r2 = "x"
            java.lang.String[] r0 = r0.split(r2)     // Catch: java.lang.Throwable -> L40
            r2 = r0[r1]     // Catch: java.lang.Throwable -> L40
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Throwable -> L40
            r3 = 1
            r0 = r0[r3]     // Catch: java.lang.Throwable -> L41
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Throwable -> L41
            r6 = r0
            goto L42
        L40:
            r2 = r1
        L41:
            r6 = r1
        L42:
            r5 = r2
            goto L46
        L44:
            r5 = r1
            r6 = r5
        L46:
            com.tkay.basead.d.c.c r0 = com.tkay.basead.d.c.c.a()
            android.content.Context r2 = r9.b
            java.lang.String r3 = r10.b
            java.lang.String r4 = r10.c
            java.lang.String r3 = com.tkay.basead.d.c.c.a(r3, r4)
            java.lang.String[] r7 = r0.a(r2, r3)
            com.tkay.basead.g.d r0 = new com.tkay.basead.g.d
            r3 = r0
            r4 = r10
            r8 = r11
            r3.<init>(r4, r5, r6, r7, r8)
            com.tkay.basead.d.b.a$1 r11 = new com.tkay.basead.d.b.a$1
            r11.<init>(r9, r10, r12)
            r0.a(r1, r11)
            return
    }

    public final com.tkay.core.common.f.y a(com.tkay.core.common.f.i r4) {
            r3 = this;
            com.tkay.core.basead.b.a()
            java.lang.String r0 = com.tkay.core.basead.b.a(r4)
            com.tkay.core.basead.b.a()
            android.content.Context r1 = r3.b
            java.lang.String r0 = com.tkay.core.basead.b.a(r1, r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            if (r1 == 0) goto L18
            return r2
        L18:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L21
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L21
            com.tkay.core.common.f.y r2 = com.tkay.basead.d.b.b.a(r4, r1)     // Catch: java.lang.Throwable -> L21
        L21:
            if (r2 == 0) goto L29
            com.tkay.basead.d.c.b.a(r2)
            com.tkay.basead.d.c.a.a(r4, r2)
        L29:
            return r2
    }

    public final void a(com.tkay.core.common.f.i r10, java.lang.String r11, com.tkay.basead.d.b.a.a r12) {
            r9 = this;
            com.tkay.core.basead.b.a()
            java.lang.String r0 = com.tkay.core.basead.b.a(r10)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r1 = r9.a
            boolean r1 = r1.contains(r0)
            r2 = 0
            if (r1 == 0) goto L2a
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r1 = r9.a
            java.lang.Object r1 = r1.get(r0)
            java.lang.Boolean r1 = (java.lang.Boolean) r1
            boolean r1 = r1.booleanValue()
            if (r1 == 0) goto L2a
            java.lang.String r10 = "20005"
            java.lang.String r11 = "Offer data is loading."
            com.tkay.basead.c.e r10 = com.tkay.basead.c.f.a(r10, r11)
            r12.a(r2, r10)
            return
        L2a:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r1 = r9.a
            java.lang.Boolean r3 = java.lang.Boolean.TRUE
            r1.put(r0, r3)
            com.tkay.core.common.f.y r2 = r9.a(r10)     // Catch: java.lang.Throwable -> L35
        L35:
            if (r2 == 0) goto L45
            boolean r0 = r2.N()
            if (r0 == 0) goto L3e
            goto L45
        L3e:
            r12.a()
            r9.a(r2, r10, r12)
            return
        L45:
            com.tkay.core.common.f.j r0 = r10.m
            java.lang.String r0 = r0.r()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 0
            if (r0 != 0) goto L71
            com.tkay.core.common.f.j r0 = r10.m     // Catch: java.lang.Throwable -> L6d
            java.lang.String r0 = r0.r()     // Catch: java.lang.Throwable -> L6d
            java.lang.String r2 = "x"
            java.lang.String[] r0 = r0.split(r2)     // Catch: java.lang.Throwable -> L6d
            r2 = r0[r1]     // Catch: java.lang.Throwable -> L6d
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Throwable -> L6d
            r3 = 1
            r0 = r0[r3]     // Catch: java.lang.Throwable -> L6e
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Throwable -> L6e
            r6 = r0
            goto L6f
        L6d:
            r2 = r1
        L6e:
            r6 = r1
        L6f:
            r5 = r2
            goto L73
        L71:
            r5 = r1
            r6 = r5
        L73:
            com.tkay.basead.d.c.c r0 = com.tkay.basead.d.c.c.a()
            android.content.Context r2 = r9.b
            java.lang.String r3 = r10.b
            java.lang.String r4 = r10.c
            java.lang.String r3 = com.tkay.basead.d.c.c.a(r3, r4)
            java.lang.String[] r7 = r0.a(r2, r3)
            com.tkay.basead.g.d r0 = new com.tkay.basead.g.d
            r3 = r0
            r4 = r10
            r8 = r11
            r3.<init>(r4, r5, r6, r7, r8)
            com.tkay.basead.d.b.a$1 r11 = new com.tkay.basead.d.b.a$1
            r11.<init>(r9, r10, r12)
            r0.a(r1, r11)
            return
    }
}

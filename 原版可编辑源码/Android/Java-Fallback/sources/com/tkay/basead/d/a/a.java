package com.tkay.basead.d.a;

public class a {
    private static volatile com.tkay.basead.d.a.a d;
    java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> a;
    java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.a.g> b;
    private android.content.Context c;


    final class 2 implements com.tkay.core.common.h.k {
        final com.tkay.core.common.f.i a;
        final com.tkay.basead.d.a.a.a b;
        final com.tkay.basead.d.a.a c;

        2(com.tkay.basead.d.a.a r1, com.tkay.core.common.f.i r2, com.tkay.basead.d.a.a.a r3) {
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
                com.tkay.basead.d.a.a$a r4 = r3.b
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
                com.tkay.basead.d.a.a$a r2 = r1.b
                if (r2 == 0) goto Le
                r4 = 0
                java.lang.String r0 = "30001"
                com.tkay.basead.c.e r3 = com.tkay.basead.c.f.a(r0, r3)
                r2.a(r4, r3)
            Le:
                return
        }

        @Override
        public final void onLoadFinish(int r9, java.lang.Object r10) {
                r8 = this;
                r9 = 0
                org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L17
                java.lang.String r1 = r10.toString()     // Catch: java.lang.Exception -> L17
                r0.<init>(r1)     // Catch: java.lang.Exception -> L17
                com.tkay.core.common.f.i r1 = r8.a     // Catch: java.lang.Exception -> L17
                java.lang.String r1 = r1.a     // Catch: java.lang.Exception -> L17
                com.tkay.core.common.f.i r2 = r8.a     // Catch: java.lang.Exception -> L17
                int r2 = r2.f     // Catch: java.lang.Exception -> L17
                com.tkay.core.common.f.f r0 = com.tkay.core.common.a.c.a(r1, r0, r2)     // Catch: java.lang.Exception -> L17
                goto L18
            L17:
                r0 = r9
            L18:
                if (r0 == 0) goto Laf
                com.tkay.basead.d.c.b.a(r0)
                com.tkay.core.common.f.i r9 = r8.a
                com.tkay.basead.d.c.a.a(r9, r0)
                com.tkay.core.common.f.i r9 = r8.a
                com.tkay.basead.d.c.d.a(r9, r0)
                com.tkay.core.common.f.i r9 = r8.a
                int r9 = r9.f
                r1 = 67
                if (r9 != r1) goto L59
                com.tkay.basead.d.a.a r9 = r8.c
                android.content.Context r9 = com.tkay.basead.d.a.a.a(r9)
                com.tkay.core.common.d.c r9 = com.tkay.core.common.d.c.a(r9)
                java.lang.String r1 = r0.p()
                long r2 = r0.P()
                r9.a(r1, r2)
                com.tkay.basead.d.a.a r9 = r8.c
                android.content.Context r9 = com.tkay.basead.d.a.a.a(r9)
                com.tkay.core.common.d.a r9 = com.tkay.core.common.d.b.a(r9)
                java.lang.String r1 = r0.q()
                long r2 = r0.P()
                r9.a(r1, r2)
            L59:
                r9 = 10
                com.tkay.basead.c.i r1 = new com.tkay.basead.c.i
                com.tkay.core.common.f.i r2 = r8.a
                java.lang.String r2 = r2.d
                java.lang.String r3 = ""
                r1.<init>(r2, r3)
                com.tkay.basead.a.b.a(r9, r0, r1)
                com.tkay.core.common.a.a.a()
                com.tkay.basead.d.a.a r9 = r8.c
                android.content.Context r9 = com.tkay.basead.d.a.a.a(r9)
                java.lang.String r1 = r0.b()
                com.tkay.core.common.a.a.c(r9, r1)
                com.tkay.core.common.a.a r2 = com.tkay.core.common.a.a.a()
                com.tkay.basead.d.a.a r9 = r8.c
                android.content.Context r3 = com.tkay.basead.d.a.a.a(r9)
                com.tkay.core.common.f.i r9 = r8.a
                int r4 = r9.f
                com.tkay.core.common.f.i r9 = r8.a
                java.lang.String r5 = r9.c
                com.tkay.core.common.f.i r9 = r8.a
                java.lang.String r6 = r9.a
                java.lang.String r7 = r10.toString()
                r2.a(r3, r4, r5, r6, r7)
                com.tkay.basead.d.a.a r9 = r8.c
                com.tkay.core.common.f.i r10 = r8.a
                com.tkay.expressad.foundation.d.d r9 = com.tkay.basead.d.a.a.a(r9, r0, r10)
                com.tkay.basead.d.a.a$a r10 = r8.b
                if (r10 == 0) goto La5
                r10.a(r0)
            La5:
                com.tkay.basead.d.a.a r10 = r8.c
                com.tkay.core.common.f.i r1 = r8.a
                com.tkay.basead.d.a.a$a r2 = r8.b
                com.tkay.basead.d.a.a.a(r10, r0, r1, r9, r2)
                return
            Laf:
                com.tkay.basead.d.a.a$a r0 = r8.b
                if (r0 == 0) goto Lc5
                if (r10 == 0) goto Lba
                java.lang.String r10 = r10.toString()
                goto Lbc
            Lba:
                java.lang.String r10 = "No Ad Return."
            Lbc:
                java.lang.String r1 = "30001"
                com.tkay.basead.c.e r10 = com.tkay.basead.c.f.a(r1, r10)
                r0.a(r9, r10)
            Lc5:
                return
        }

        @Override
        public final void onLoadStart(int r1) {
                r0 = this;
                return
        }
    }



    public interface a {
        void a(com.tkay.core.common.f.f r1);

        void a(com.tkay.core.common.f.f r1, com.tkay.basead.c.e r2);

        void a(com.tkay.core.common.f.f r1, com.tkay.core.common.a.g r2);
    }

    private a(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            android.content.Context r2 = r2.getApplicationContext()
            r1.c = r2
            java.util.concurrent.ConcurrentHashMap r2 = new java.util.concurrent.ConcurrentHashMap
            r0 = 3
            r2.<init>(r0)
            r1.a = r2
            java.util.concurrent.ConcurrentHashMap r2 = new java.util.concurrent.ConcurrentHashMap
            r0 = 2
            r2.<init>(r0)
            r1.b = r2
            return
    }

    static android.content.Context a(com.tkay.basead.d.a.a r0) {
            android.content.Context r0 = r0.c
            return r0
    }

    public static com.tkay.basead.d.a.a a(android.content.Context r2) {
            com.tkay.basead.d.a.a r0 = com.tkay.basead.d.a.a.d
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.basead.d.a.a> r0 = com.tkay.basead.d.a.a.class
            monitor-enter(r0)
            com.tkay.basead.d.a.a r1 = com.tkay.basead.d.a.a.d     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.basead.d.a.a r1 = new com.tkay.basead.d.a.a     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tkay.basead.d.a.a.d = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tkay.basead.d.a.a r2 = com.tkay.basead.d.a.a.d
            return r2
    }

    static com.tkay.expressad.foundation.d.d a(com.tkay.basead.d.a.a r0, com.tkay.core.common.f.f r1, com.tkay.core.common.f.i r2) {
            com.tkay.expressad.foundation.d.d r0 = r0.a(r1, r2)
            return r0
    }

    private synchronized com.tkay.expressad.foundation.d.d a(com.tkay.core.common.f.f r4, com.tkay.core.common.f.i r5) {
            r3 = this;
            monitor-enter(r3)
            java.lang.String r0 = r4.a()     // Catch: java.lang.Throwable -> L2a
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L2a
            if (r0 == 0) goto Le
            r4 = 0
            monitor-exit(r3)
            return r4
        Le:
            java.lang.String r0 = r4.a()     // Catch: java.lang.Throwable -> L2a
            com.tkay.expressad.foundation.d.d r0 = com.tkay.expressad.foundation.d.d.a(r0)     // Catch: java.lang.Throwable -> L2a
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r1 = r0.J     // Catch: java.lang.Throwable -> L2a
            r2 = 0
            java.lang.Object r2 = r1.get(r2)     // Catch: java.lang.Throwable -> L2a
            com.tkay.expressad.foundation.d.c r2 = (com.tkay.expressad.foundation.d.c) r2     // Catch: java.lang.Throwable -> L2a
            com.tkay.basead.d.a.b.a(r4, r2)     // Catch: java.lang.Throwable -> L2a
            com.tkay.basead.d.a.b.a(r4, r1)     // Catch: java.lang.Throwable -> L2a
            com.tkay.basead.d.a.b.a(r5, r1)     // Catch: java.lang.Throwable -> L2a
            monitor-exit(r3)
            return r0
        L2a:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    static void a(com.tkay.basead.d.a.a r0, com.tkay.core.common.f.f r1, com.tkay.core.common.f.i r2, com.tkay.expressad.foundation.d.d r3, com.tkay.basead.d.a.a.a r4) {
            r0.a(r1, r2, r3, r4)
            return
    }

    static void a(com.tkay.basead.d.a.a r5, com.tkay.core.common.f.i r6, com.tkay.basead.d.a.a.a r7) {
            com.tkay.core.common.f.f r0 = r5.a(r6)     // Catch: java.lang.Throwable -> L5
            goto L6
        L5:
            r0 = 0
        L6:
            if (r0 != 0) goto L17
            com.tkay.basead.g.a r0 = new com.tkay.basead.g.a
            r0.<init>(r6)
            r1 = 0
            com.tkay.basead.d.a.a$2 r2 = new com.tkay.basead.d.a.a$2
            r2.<init>(r5, r6, r7)
            r0.a(r1, r2)
            return
        L17:
            com.tkay.core.common.a.a.a()
            android.content.Context r1 = r5.c
            java.lang.String r2 = r0.b()
            boolean r1 = com.tkay.core.common.a.a.d(r1, r2)
            if (r1 != 0) goto L40
            r1 = 10
            com.tkay.basead.c.i r2 = new com.tkay.basead.c.i
            java.lang.String r3 = r6.d
            java.lang.String r4 = ""
            r2.<init>(r3, r4)
            com.tkay.basead.a.b.a(r1, r0, r2)
            com.tkay.core.common.a.a.a()
            android.content.Context r1 = r5.c
            java.lang.String r2 = r0.b()
            com.tkay.core.common.a.a.c(r1, r2)
        L40:
            com.tkay.expressad.foundation.d.d r1 = r5.a(r0, r6)
            if (r7 == 0) goto L49
            r7.a(r0)
        L49:
            r5.a(r0, r6, r1, r7)
            return
    }

    private void a(com.tkay.core.common.f.f r3, com.tkay.core.common.f.i r4, com.tkay.expressad.foundation.d.d r5, com.tkay.basead.d.a.a.a r6) {
            r2 = this;
            java.lang.String r0 = r3.a()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L17
            com.tkay.basead.d.a.b r0 = com.tkay.basead.d.a.b.a()
            com.tkay.basead.d.a.a$3 r1 = new com.tkay.basead.d.a.a$3
            r1.<init>(r2, r4, r6, r3)
            r0.a(r3, r4, r5, r1)
            return
        L17:
            com.tkay.basead.a.f.a()
            java.lang.String r5 = r4.b
            com.tkay.basead.d.a.a$4 r0 = new com.tkay.basead.d.a.a$4
            r0.<init>(r2, r4, r6, r3)
            com.tkay.basead.a.f.a(r5, r3, r4, r0)
            return
    }

    private void b(com.tkay.core.common.f.i r6, com.tkay.basead.d.a.a.a r7) {
            r5 = this;
            com.tkay.core.common.f.f r0 = r5.a(r6)     // Catch: java.lang.Throwable -> L5
            goto L6
        L5:
            r0 = 0
        L6:
            if (r0 != 0) goto L17
            com.tkay.basead.g.a r0 = new com.tkay.basead.g.a
            r0.<init>(r6)
            r1 = 0
            com.tkay.basead.d.a.a$2 r2 = new com.tkay.basead.d.a.a$2
            r2.<init>(r5, r6, r7)
            r0.a(r1, r2)
            return
        L17:
            com.tkay.core.common.a.a.a()
            android.content.Context r1 = r5.c
            java.lang.String r2 = r0.b()
            boolean r1 = com.tkay.core.common.a.a.d(r1, r2)
            if (r1 != 0) goto L40
            r1 = 10
            com.tkay.basead.c.i r2 = new com.tkay.basead.c.i
            java.lang.String r3 = r6.d
            java.lang.String r4 = ""
            r2.<init>(r3, r4)
            com.tkay.basead.a.b.a(r1, r0, r2)
            com.tkay.core.common.a.a.a()
            android.content.Context r1 = r5.c
            java.lang.String r2 = r0.b()
            com.tkay.core.common.a.a.c(r1, r2)
        L40:
            com.tkay.expressad.foundation.d.d r1 = r5.a(r0, r6)
            if (r7 == 0) goto L49
            r7.a(r0)
        L49:
            r5.a(r0, r6, r1, r7)
            return
    }

    public final com.tkay.core.common.f.f a(com.tkay.core.common.f.i r5) {
            r4 = this;
            com.tkay.core.common.a.a r0 = com.tkay.core.common.a.a.a()
            android.content.Context r1 = r4.c
            java.lang.String r2 = r5.a
            java.lang.String r0 = r0.a(r1, r2)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            if (r1 == 0) goto L14
            return r2
        L14:
            java.lang.String r1 = r5.a     // Catch: java.lang.Throwable -> L21
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L21
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L21
            int r0 = r5.f     // Catch: java.lang.Throwable -> L21
            com.tkay.core.common.f.f r2 = com.tkay.core.common.a.c.a(r1, r3, r0)     // Catch: java.lang.Throwable -> L21
        L21:
            if (r2 == 0) goto L2c
            com.tkay.basead.d.c.b.a(r2)
            com.tkay.basead.d.c.a.a(r5, r2)
            com.tkay.basead.d.c.d.a(r5, r2)
        L2c:
            return r2
    }

    public final void a(com.tkay.core.common.f.i r4, com.tkay.basead.d.a.a.a r5) {
            r3 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = r3.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r4.b
            r1.append(r2)
            java.lang.String r2 = r4.a
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L49
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = r3.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r4.b
            r1.append(r2)
            java.lang.String r2 = r4.a
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.Object r0 = r0.get(r1)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L49
            r4 = 0
            java.lang.String r0 = "20005"
            java.lang.String r1 = "Offer data is loading."
            com.tkay.basead.c.e r0 = com.tkay.basead.c.f.a(r0, r1)
            r5.a(r4, r0)
            return
        L49:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = r3.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r4.b
            r1.append(r2)
            java.lang.String r2 = r4.a
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.Boolean r2 = java.lang.Boolean.TRUE
            r0.put(r1, r2)
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.basead.d.a.a$1 r1 = new com.tkay.basead.d.a.a$1
            r1.<init>(r3, r4, r5)
            r0.b(r1)
            return
    }
}

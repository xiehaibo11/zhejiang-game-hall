package com.tkay.expressad.videocommon.b;

public final class j {
    private static java.util.Map<java.lang.String, java.lang.Boolean> b;
    private java.util.Map<java.lang.String, java.lang.Boolean> a;
    private java.util.Map<java.lang.String, java.lang.Boolean> c;
    private java.util.Map<java.lang.String, java.lang.Boolean> d;
    private java.util.Map<java.lang.String, java.lang.Boolean> e;

    static class 1 {
    }

    private static final class a {
        public static com.tkay.expressad.videocommon.b.j a;

        static {
                com.tkay.expressad.videocommon.b.j r0 = new com.tkay.expressad.videocommon.b.j
                r1 = 0
                r0.<init>(r1)
                com.tkay.expressad.videocommon.b.j.a.a = r0
                return
        }

        private a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.tkay.expressad.videocommon.b.j.b = r0
            return
    }

    private j() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.a = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.c = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.d = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.e = r0
            return
    }

    j(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tkay.expressad.videocommon.b.j a() {
            com.tkay.expressad.videocommon.b.j r0 = com.tkay.expressad.videocommon.b.j.a.a
            return r0
    }

    private void a(com.tkay.expressad.foundation.d.c r1) {
            r0 = this;
            if (r1 == 0) goto Lc
            r0.b(r1)
            java.lang.String r1 = r1.aZ()
            r0.e(r1)
        Lc:
            return
    }

    private static boolean a(com.tkay.expressad.foundation.d.c.c r5) {
            r0 = 1
            if (r5 != 0) goto L4
            return r0
        L4:
            java.util.List r5 = r5.f()
            if (r5 == 0) goto L53
            java.util.Iterator r5 = r5.iterator()
        Le:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L53
            java.lang.Object r1 = r5.next()
            com.tkay.expressad.foundation.d.c$c$a r1 = (com.tkay.expressad.foundation.d.c.c.a) r1
            if (r1 == 0) goto Le
            java.util.List<java.lang.String> r2 = r1.b
            if (r2 == 0) goto Le
            java.util.List<java.lang.String> r1 = r1.b
            java.util.Iterator r1 = r1.iterator()
        L26:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto Le
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            java.util.Map<java.lang.String, java.lang.Boolean> r3 = com.tkay.expressad.videocommon.b.j.b
            boolean r3 = a(r3, r2)
            if (r3 == 0) goto L3c
        L3a:
            r3 = r0
            goto L4f
        L3c:
            com.tkay.expressad.foundation.b.b r4 = com.tkay.expressad.foundation.b.b.b()
            android.content.Context r4 = r4.d()
            com.tkay.expressad.foundation.g.d.b r4 = com.tkay.expressad.foundation.g.d.b.a(r4)
            boolean r2 = r4.b(r2)
            if (r2 == 0) goto L4f
            goto L3a
        L4f:
            if (r3 != 0) goto L26
            r5 = 0
            return r5
        L53:
            return r0
    }

    private static boolean a(java.util.Map<java.lang.String, java.lang.Boolean> r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L8
            r1 = 1
            return r1
        L8:
            if (r1 == 0) goto L21
            boolean r0 = r1.containsKey(r2)
            if (r0 == 0) goto L1b
            java.lang.Object r1 = r1.get(r2)
            java.lang.Boolean r1 = (java.lang.Boolean) r1
            boolean r1 = r1.booleanValue()
            return r1
        L1b:
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
            r1.put(r2, r0)
            goto L2b
        L21:
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
            r1.put(r2, r0)
        L2b:
            r1 = 0
            return r1
    }

    private boolean a(boolean r2, java.lang.String r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r1.c
            boolean r0 = a(r0, r3)
            if (r0 == 0) goto L9
            return r0
        L9:
            if (r2 == 0) goto L22
            com.tkay.expressad.videocommon.b.g r2 = com.tkay.expressad.videocommon.b.g.a()
            java.lang.String r2 = r2.c(r3)
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L22
            java.util.Map<java.lang.String, java.lang.Boolean> r2 = r1.c
            java.lang.Boolean r0 = java.lang.Boolean.TRUE
            r2.put(r3, r0)
            r2 = 1
            return r2
        L22:
            return r0
    }

    private void b(com.tkay.expressad.foundation.d.c r4) {
            r3 = this;
            if (r4 == 0) goto L50
            java.lang.String r0 = r4.S()
            java.util.Map<java.lang.String, java.lang.Boolean> r1 = r3.a
            if (r1 == 0) goto L17
            boolean r1 = r1.containsKey(r0)
            if (r1 != 0) goto L17
            java.util.Map<java.lang.String, java.lang.Boolean> r1 = r3.a
            java.lang.Boolean r2 = java.lang.Boolean.FALSE
            r1.put(r0, r2)
        L17:
            java.lang.String r0 = r4.I()
            java.util.Map<java.lang.String, java.lang.Boolean> r1 = r3.c
            if (r1 == 0) goto L2c
            boolean r1 = r1.containsKey(r0)
            if (r1 != 0) goto L2c
            java.util.Map<java.lang.String, java.lang.Boolean> r1 = r3.c
            java.lang.Boolean r2 = java.lang.Boolean.FALSE
            r1.put(r0, r2)
        L2c:
            com.tkay.expressad.foundation.d.c$c r4 = r4.M()
            if (r4 == 0) goto L50
            java.util.List r4 = r4.f()
            if (r4 == 0) goto L50
            java.util.Iterator r4 = r4.iterator()
        L3c:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L50
            java.lang.Object r0 = r4.next()
            com.tkay.expressad.foundation.d.c$c$a r0 = (com.tkay.expressad.foundation.d.c.c.a) r0
            if (r0 == 0) goto L3c
            java.util.List<java.lang.String> r0 = r0.b
            b(r0)
            goto L3c
        L50:
            return
    }

    private static void b(java.util.List<java.lang.String> r3) {
            if (r3 == 0) goto L43
            int r0 = r3.size()
            if (r0 != 0) goto L9
            goto L43
        L9:
            java.util.Iterator r3 = r3.iterator()
        Ld:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L43
            java.lang.Object r0 = r3.next()
            java.lang.String r0 = (java.lang.String) r0
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto Ld
            java.util.Map<java.lang.String, java.lang.Boolean> r1 = com.tkay.expressad.videocommon.b.j.b
            if (r1 == 0) goto Ld
            boolean r1 = r1.containsKey(r0)
            if (r1 != 0) goto Ld
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()
            android.content.Context r1 = r1.d()
            com.tkay.expressad.foundation.g.d.b r1 = com.tkay.expressad.foundation.g.d.b.a(r1)
            boolean r1 = r1.b(r0)
            java.util.Map<java.lang.String, java.lang.Boolean> r2 = com.tkay.expressad.videocommon.b.j.b
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            r2.put(r0, r1)
            goto Ld
        L43:
            return
    }

    public static void c(java.lang.String r2) {
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = com.tkay.expressad.videocommon.b.j.b
            if (r0 != 0) goto Lb
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.tkay.expressad.videocommon.b.j.b = r0
        Lb:
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = com.tkay.expressad.videocommon.b.j.b
            java.lang.Boolean r1 = java.lang.Boolean.TRUE
            r0.put(r2, r1)
            return
    }

    private void e(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r2.d
            if (r0 != 0) goto Lb
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.d = r0
        Lb:
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r2.d
            java.lang.Boolean r1 = java.lang.Boolean.FALSE
            r0.put(r3, r1)
            return
    }

    private void f(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r1.e
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto Ld
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r1.e
            r0.remove(r2)
        Ld:
            return
    }

    private static boolean g(java.lang.String r3) {
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = com.tkay.expressad.videocommon.b.j.b
            boolean r0 = a(r0, r3)
            r1 = 1
            if (r0 == 0) goto La
            return r1
        La:
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()
            android.content.Context r2 = r2.d()
            com.tkay.expressad.foundation.g.d.b r2 = com.tkay.expressad.foundation.g.d.b.a(r2)
            boolean r3 = r2.b(r3)
            if (r3 == 0) goto L1d
            return r1
        L1d:
            return r0
    }

    private static boolean h(java.lang.String r2) {
            java.lang.String r2 = com.tkay.expressad.foundation.h.m.d(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.tkay.expressad.foundation.g.c.c r1 = com.tkay.expressad.foundation.g.c.c.d
            java.lang.String r1 = com.tkay.expressad.foundation.g.c.f.b(r1)
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            r2 = 0
            boolean r1 = r0.exists()     // Catch: java.lang.Throwable -> L38
            if (r1 == 0) goto L40
            boolean r1 = r0.isFile()     // Catch: java.lang.Throwable -> L38
            if (r1 == 0) goto L40
            boolean r0 = r0.canRead()     // Catch: java.lang.Throwable -> L38
            if (r0 == 0) goto L40
            r2 = 1
            goto L40
        L38:
            r0 = move-exception
            boolean r1 = com.tkay.expressad.b.a
            if (r1 == 0) goto L40
            r0.printStackTrace()
        L40:
            return r2
    }

    public final void a(java.lang.String r2, boolean r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r1.a
            if (r0 != 0) goto Lb
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.a = r0
        Lb:
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r1.a
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            r0.put(r2, r3)
            return
    }

    public final void a(java.util.List<com.tkay.expressad.foundation.d.c> r2) {
            r1 = this;
            if (r2 == 0) goto L26
            int r0 = r2.size()
            if (r0 != 0) goto L9
            goto L26
        L9:
            java.util.Iterator r2 = r2.iterator()
        Ld:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L26
            java.lang.Object r0 = r2.next()
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0
            if (r0 == 0) goto Ld
            r1.b(r0)
            java.lang.String r0 = r0.aZ()
            r1.e(r0)
            goto Ld
        L26:
            return
    }

    public final boolean a(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r1.a
            if (r0 == 0) goto L1f
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1f
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r1.a
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L1f
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r1.a
            java.lang.Object r2 = r0.get(r2)
            java.lang.Boolean r2 = (java.lang.Boolean) r2
            boolean r2 = r2.booleanValue()
            return r2
        L1f:
            r2 = 0
            return r2
    }

    public final void b(java.lang.String r2, boolean r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r1.c
            if (r0 != 0) goto Lb
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.c = r0
        Lb:
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r1.c
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            r0.put(r2, r3)
            return
    }

    public final boolean b(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r1.c
            if (r0 == 0) goto L1f
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1f
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r1.c
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L1f
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r1.c
            java.lang.Object r2 = r0.get(r2)
            java.lang.Boolean r2 = (java.lang.Boolean) r2
            boolean r2 = r2.booleanValue()
            return r2
        L1f:
            r2 = 0
            return r2
    }

    public final void c(java.lang.String r2, boolean r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r1.e
            if (r0 != 0) goto Lb
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.e = r0
        Lb:
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r1.e
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            r0.put(r2, r3)
            return
    }

    public final boolean d(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r2.e
            boolean r0 = r0.containsKey(r3)
            if (r0 == 0) goto L1d
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r2.e
            java.lang.Object r3 = r0.get(r3)
            java.lang.Boolean r3 = (java.lang.Boolean) r3
            boolean r3 = r3.booleanValue()
            return r3
        L1d:
            return r1
    }
}

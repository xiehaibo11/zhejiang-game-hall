package com.tkay.core.common;

public final class p {
    public static final java.lang.String b = "Y29tLnhpYW9taS5tYXJrZXQuRE1fUEFHRV9PUEVORUQ=";
    public static final java.lang.String c = "Y29tLnhpYW9taS5tYXJrZXQuRE1fUEFHRV9DTE9TRUQ=";
    public static final java.lang.String d = "Y29tLnhpYW9taS5tYXJrZXQuRElSRUNUX01BSUxfU1RBVFVT";
    public static final java.lang.String e = "Y29udGVudDovL2NvbS54aWFvbWkubWFya2V0LnByb3ZpZGVyLkRpcmVjdE1haWxQcm92aWRlcg==";
    private static final java.lang.String f = "code";
    private static final java.lang.String g = "packageName";
    private static volatile java.lang.String j;
    private static volatile com.tkay.core.common.p n;
    android.content.BroadcastReceiver a;
    private java.util.concurrent.CopyOnWriteArrayList<com.tkay.core.common.f.h> h;
    private final java.util.concurrent.atomic.AtomicBoolean i;
    private volatile java.lang.Boolean k;
    private com.tkay.core.common.f.h l;
    private android.content.Context m;


    final class 2 extends android.content.BroadcastReceiver {
        final com.tkay.core.common.p a;

        2(com.tkay.core.common.p r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        private com.tkay.core.common.f.h a(java.lang.String r4) {
                r3 = this;
                com.tkay.core.common.p r0 = r3.a
                com.tkay.core.common.f.h r0 = com.tkay.core.common.p.c(r0)
                if (r0 == 0) goto L1f
                com.tkay.core.common.p r0 = r3.a
                com.tkay.core.common.f.h r0 = com.tkay.core.common.p.c(r0)
                java.lang.String r0 = r0.B()
                boolean r0 = android.text.TextUtils.equals(r0, r4)
                if (r0 == 0) goto L1f
                com.tkay.core.common.p r4 = r3.a
                com.tkay.core.common.f.h r4 = com.tkay.core.common.p.c(r4)
                return r4
            L1f:
                com.tkay.core.common.p r0 = r3.a
                java.util.concurrent.CopyOnWriteArrayList r0 = com.tkay.core.common.p.d(r0)
                if (r0 == 0) goto L56
                com.tkay.core.common.p r0 = r3.a
                java.util.concurrent.CopyOnWriteArrayList r0 = com.tkay.core.common.p.d(r0)
                int r0 = r0.size()
                if (r0 <= 0) goto L56
                com.tkay.core.common.p r0 = r3.a
                java.util.concurrent.CopyOnWriteArrayList r0 = com.tkay.core.common.p.d(r0)
                java.util.Iterator r0 = r0.iterator()
            L3d:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L56
                java.lang.Object r1 = r0.next()
                com.tkay.core.common.f.h r1 = (com.tkay.core.common.f.h) r1
                if (r1 == 0) goto L3d
                java.lang.String r2 = r1.B()
                boolean r2 = android.text.TextUtils.equals(r2, r4)
                if (r2 == 0) goto L3d
                return r1
            L56:
                r4 = 0
                return r4
        }

        @Override
        public final void onReceive(android.content.Context r11, android.content.Intent r12) {
                r10 = this;
                java.lang.String r11 = r12.getAction()
                boolean r0 = android.text.TextUtils.isEmpty(r11)
                if (r0 == 0) goto Lb
                return
            Lb:
                java.lang.String r0 = "Y29tLnhpYW9taS5tYXJrZXQuRE1fUEFHRV9PUEVORUQ="
                java.lang.String r0 = com.tkay.core.common.l.c.b(r0)
                boolean r0 = r11.equals(r0)
                if (r0 != 0) goto Lc6
                java.lang.String r0 = "Y29tLnhpYW9taS5tYXJrZXQuRE1fUEFHRV9DTE9TRUQ="
                java.lang.String r0 = com.tkay.core.common.l.c.b(r0)
                boolean r0 = r11.equals(r0)
                if (r0 != 0) goto Lc6
                java.lang.String r0 = "Y29tLnhpYW9taS5tYXJrZXQuRElSRUNUX01BSUxfU1RBVFVT"
                java.lang.String r0 = com.tkay.core.common.l.c.b(r0)
                boolean r11 = r11.equals(r0)
                if (r11 == 0) goto Lc6
                android.os.Bundle r11 = r12.getExtras()
                if (r11 != 0) goto L36
                return
            L36:
                r12 = -1
                java.lang.String r0 = "code"
                int r4 = r11.getInt(r0, r12)
                java.lang.String r0 = "packageName"
                java.lang.String r1 = ""
                java.lang.String r11 = r11.getString(r0, r1)
                if (r4 == r12) goto Lc6
                boolean r12 = android.text.TextUtils.isEmpty(r11)
                if (r12 == 0) goto L4f
                goto Lc6
            L4f:
                com.tkay.core.common.p r12 = r10.a
                com.tkay.core.common.f.h r12 = com.tkay.core.common.p.c(r12)
                if (r12 == 0) goto L6e
                com.tkay.core.common.p r12 = r10.a
                com.tkay.core.common.f.h r12 = com.tkay.core.common.p.c(r12)
                java.lang.String r12 = r12.B()
                boolean r12 = android.text.TextUtils.equals(r12, r11)
                if (r12 == 0) goto L6e
                com.tkay.core.common.p r11 = r10.a
                com.tkay.core.common.f.h r11 = com.tkay.core.common.p.c(r11)
                goto La7
            L6e:
                com.tkay.core.common.p r12 = r10.a
                java.util.concurrent.CopyOnWriteArrayList r12 = com.tkay.core.common.p.d(r12)
                if (r12 == 0) goto La6
                com.tkay.core.common.p r12 = r10.a
                java.util.concurrent.CopyOnWriteArrayList r12 = com.tkay.core.common.p.d(r12)
                int r12 = r12.size()
                if (r12 <= 0) goto La6
                com.tkay.core.common.p r12 = r10.a
                java.util.concurrent.CopyOnWriteArrayList r12 = com.tkay.core.common.p.d(r12)
                java.util.Iterator r12 = r12.iterator()
            L8c:
                boolean r0 = r12.hasNext()
                if (r0 == 0) goto La6
                java.lang.Object r0 = r12.next()
                com.tkay.core.common.f.h r0 = (com.tkay.core.common.f.h) r0
                if (r0 == 0) goto L8c
                java.lang.String r1 = r0.B()
                boolean r1 = android.text.TextUtils.equals(r1, r11)
                if (r1 == 0) goto L8c
                r11 = r0
                goto La7
            La6:
                r11 = 0
            La7:
                if (r11 != 0) goto Laa
                return
            Laa:
                r12 = 4
                if (r4 != r12) goto Lb2
                com.tkay.core.common.p r12 = r10.a
                r12.b(r11)
            Lb2:
                java.lang.String r1 = r11.j()
                java.lang.String r2 = r11.p()
                r6 = 0
                r8 = 0
                java.lang.String r3 = ""
                java.lang.String r5 = ""
                com.tkay.core.common.k.c.a(r1, r2, r3, r4, r5, r6, r8)
            Lc6:
                return
        }
    }

    private p() {
            r2 = this;
            r2.<init>()
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r2.h = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            r2.i = r0
            return
    }

    public static com.tkay.core.common.p a() {
            com.tkay.core.common.p r0 = com.tkay.core.common.p.n
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.p> r0 = com.tkay.core.common.p.class
            monitor-enter(r0)
            com.tkay.core.common.p r1 = com.tkay.core.common.p.n     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.p r1 = new com.tkay.core.common.p     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.p.n = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.core.common.p r0 = com.tkay.core.common.p.n
            return r0
    }

    static java.lang.Boolean a(com.tkay.core.common.p r0, java.lang.Boolean r1) {
            r0.k = r1
            return r1
    }

    static java.util.concurrent.atomic.AtomicBoolean a(com.tkay.core.common.p r0) {
            java.util.concurrent.atomic.AtomicBoolean r0 = r0.i
            return r0
    }

    public static java.lang.String b() {
            java.lang.String r0 = ""
            java.lang.String r1 = com.tkay.core.common.p.j     // Catch: java.lang.Throwable -> L15
            if (r1 != 0) goto L7
            return r0
        L7:
            java.lang.String r1 = "[%s]"
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L15
            r3 = 0
            java.lang.String r4 = com.tkay.core.common.p.j     // Catch: java.lang.Throwable -> L15
            r2[r3] = r4     // Catch: java.lang.Throwable -> L15
            java.lang.String r0 = java.lang.String.format(r1, r2)     // Catch: java.lang.Throwable -> L15
        L15:
            return r0
    }

    private void b(android.content.Context r3) {
            r2 = this;
            android.content.BroadcastReceiver r0 = r2.a
            if (r0 == 0) goto L17
            if (r3 == 0) goto L17
            r1 = 0
            r3.unregisterReceiver(r0)     // Catch: java.lang.Throwable -> La
        La:
            r2.l = r1
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.core.common.f.h> r3 = r2.h
            r3.clear()
            r2.h = r1
            r2.a = r1
            r2.m = r1
        L17:
            return
    }

    static void b(com.tkay.core.common.p r2) {
            java.lang.Boolean r0 = r2.k
            if (r0 == 0) goto L3e
            java.lang.Boolean r0 = r2.k
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L3e
            android.content.Context r0 = r2.m
            if (r0 == 0) goto L3e
            com.tkay.core.common.p$2 r0 = new com.tkay.core.common.p$2     // Catch: java.lang.Throwable -> L3e
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L3e
            r2.a = r0     // Catch: java.lang.Throwable -> L3e
            android.content.IntentFilter r0 = new android.content.IntentFilter     // Catch: java.lang.Throwable -> L3e
            r0.<init>()     // Catch: java.lang.Throwable -> L3e
            java.lang.String r1 = "Y29tLnhpYW9taS5tYXJrZXQuRE1fUEFHRV9PUEVORUQ="
            java.lang.String r1 = com.tkay.core.common.l.c.b(r1)     // Catch: java.lang.Throwable -> L3e
            r0.addAction(r1)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r1 = "Y29tLnhpYW9taS5tYXJrZXQuRE1fUEFHRV9DTE9TRUQ="
            java.lang.String r1 = com.tkay.core.common.l.c.b(r1)     // Catch: java.lang.Throwable -> L3e
            r0.addAction(r1)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r1 = "Y29tLnhpYW9taS5tYXJrZXQuRElSRUNUX01BSUxfU1RBVFVT"
            java.lang.String r1 = com.tkay.core.common.l.c.b(r1)     // Catch: java.lang.Throwable -> L3e
            r0.addAction(r1)     // Catch: java.lang.Throwable -> L3e
            android.content.Context r1 = r2.m     // Catch: java.lang.Throwable -> L3e
            android.content.BroadcastReceiver r2 = r2.a     // Catch: java.lang.Throwable -> L3e
            r1.registerReceiver(r2, r0)     // Catch: java.lang.Throwable -> L3e
        L3e:
            return
    }

    static com.tkay.core.common.f.h c(com.tkay.core.common.p r0) {
            com.tkay.core.common.f.h r0 = r0.l
            return r0
    }

    static java.lang.Boolean d() {
            java.lang.Boolean r0 = g()
            return r0
    }

    static java.util.concurrent.CopyOnWriteArrayList d(com.tkay.core.common.p r0) {
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.core.common.f.h> r0 = r0.h
            return r0
    }

    private com.tkay.core.common.f.h e() {
            r1 = this;
            com.tkay.core.common.f.h r0 = r1.l
            return r0
    }

    private void f() {
            r3 = this;
            java.lang.Boolean r0 = r3.k
            if (r0 == 0) goto L3e
            java.lang.Boolean r0 = r3.k
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L3e
            android.content.Context r0 = r3.m
            if (r0 == 0) goto L3e
            com.tkay.core.common.p$2 r0 = new com.tkay.core.common.p$2     // Catch: java.lang.Throwable -> L3e
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L3e
            r3.a = r0     // Catch: java.lang.Throwable -> L3e
            android.content.IntentFilter r0 = new android.content.IntentFilter     // Catch: java.lang.Throwable -> L3e
            r0.<init>()     // Catch: java.lang.Throwable -> L3e
            java.lang.String r1 = "Y29tLnhpYW9taS5tYXJrZXQuRE1fUEFHRV9PUEVORUQ="
            java.lang.String r1 = com.tkay.core.common.l.c.b(r1)     // Catch: java.lang.Throwable -> L3e
            r0.addAction(r1)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r1 = "Y29tLnhpYW9taS5tYXJrZXQuRE1fUEFHRV9DTE9TRUQ="
            java.lang.String r1 = com.tkay.core.common.l.c.b(r1)     // Catch: java.lang.Throwable -> L3e
            r0.addAction(r1)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r1 = "Y29tLnhpYW9taS5tYXJrZXQuRElSRUNUX01BSUxfU1RBVFVT"
            java.lang.String r1 = com.tkay.core.common.l.c.b(r1)     // Catch: java.lang.Throwable -> L3e
            r0.addAction(r1)     // Catch: java.lang.Throwable -> L3e
            android.content.Context r1 = r3.m     // Catch: java.lang.Throwable -> L3e
            android.content.BroadcastReceiver r2 = r3.a     // Catch: java.lang.Throwable -> L3e
            r1.registerReceiver(r2, r0)     // Catch: java.lang.Throwable -> L3e
        L3e:
            return
    }

    private static java.lang.Boolean g() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            r1 = 0
            if (r0 == 0) goto L71
            android.content.ContentResolver r2 = r0.getContentResolver()
            if (r2 == 0) goto L71
            android.content.ContentResolver r3 = r0.getContentResolver()     // Catch: java.lang.Throwable -> L28
            java.lang.String r0 = "Y29udGVudDovL2NvbS54aWFvbWkubWFya2V0LnByb3ZpZGVyLkRpcmVjdE1haWxQcm92aWRlcg=="
            java.lang.String r0 = com.tkay.core.common.l.c.b(r0)     // Catch: java.lang.Throwable -> L28
            android.net.Uri r4 = android.net.Uri.parse(r0)     // Catch: java.lang.Throwable -> L28
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            android.database.Cursor r0 = r3.query(r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L28
            goto L29
        L28:
            r0 = r1
        L29:
            if (r0 == 0) goto L71
        L2b:
            boolean r2 = r0.moveToNext()
            if (r2 == 0) goto L6e
            java.lang.String r2 = "support"
            int r2 = r0.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L61
            java.lang.String r2 = r0.getString(r2)     // Catch: java.lang.Throwable -> L61
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L61
            if (r3 != 0) goto L61
            java.lang.String r3 = "null"
            boolean r3 = r2.equalsIgnoreCase(r3)     // Catch: java.lang.Throwable -> L61
            if (r3 != 0) goto L61
            java.lang.String r3 = "false"
            boolean r3 = r2.equalsIgnoreCase(r3)     // Catch: java.lang.Throwable -> L61
            if (r3 != 0) goto L59
            java.lang.String r3 = "true"
            boolean r3 = r2.equalsIgnoreCase(r3)     // Catch: java.lang.Throwable -> L61
            if (r3 == 0) goto L61
        L59:
            boolean r2 = java.lang.Boolean.parseBoolean(r2)     // Catch: java.lang.Throwable -> L61
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r2)     // Catch: java.lang.Throwable -> L61
        L61:
            java.lang.String r2 = "detailStyle"
            int r2 = r0.getColumnIndex(r2)     // Catch: java.lang.Exception -> L2b
            java.lang.String r2 = r0.getString(r2)     // Catch: java.lang.Exception -> L2b
            com.tkay.core.common.p.j = r2     // Catch: java.lang.Exception -> L2b
            goto L2b
        L6e:
            r0.close()     // Catch: java.lang.Throwable -> L71
        L71:
            return r1
    }

    public final void a(android.content.Context r2) {
            r1 = this;
            r1.m = r2
            com.tkay.core.common.l.b.a r2 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.p$1 r0 = new com.tkay.core.common.p$1
            r0.<init>(r1)
            r2.a(r0)
            return
    }

    public final void a(com.tkay.core.common.f.h r2) {
            r1 = this;
            java.lang.Boolean r0 = r1.k
            if (r0 == 0) goto L15
            if (r2 == 0) goto L15
            java.lang.Boolean r0 = r1.k
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L15
            r1.l = r2
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.core.common.f.h> r0 = r1.h
            r0.add(r2)
        L15:
            return
    }

    public final void b(com.tkay.core.common.f.h r2) {
            r1 = this;
            java.lang.Boolean r0 = r1.k
            if (r0 == 0) goto L16
            if (r2 == 0) goto L16
            java.lang.Boolean r0 = r1.k
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L16
            r0 = 0
            r1.l = r0
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.core.common.f.h> r0 = r1.h     // Catch: java.lang.Exception -> L16
            r0.remove(r2)     // Catch: java.lang.Exception -> L16
        L16:
            return
    }

    public final int c() {
            r1 = this;
            java.lang.Boolean r0 = r1.k
            if (r0 == 0) goto L10
            java.lang.Boolean r0 = r1.k
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto Le
            r0 = 1
            goto L11
        Le:
            r0 = 0
            goto L11
        L10:
            r0 = -1
        L11:
            return r0
    }
}

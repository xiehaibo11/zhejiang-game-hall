package com.tramini.plugin.a;

public class b extends android.content.BroadcastReceiver {
    public static final java.lang.String a = null;
    public static final java.lang.String b = "tramini";

    final class 1 implements com.tramini.plugin.a.g.a.a {
        final int a;
        final java.lang.String b;
        final com.tramini.plugin.b.a c;
        final java.lang.String d;
        final java.lang.String e;
        final com.tramini.plugin.a.b f;


        1(com.tramini.plugin.a.b r1, int r2, java.lang.String r3, com.tramini.plugin.b.a r4, java.lang.String r5, java.lang.String r6) {
                r0 = this;
                r0.f = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.d = r5
                r0.e = r6
                r0.<init>()
                return
        }

        @Override
        public final void a(com.tramini.plugin.a.c.a r3) {
                r2 = this;
                if (r3 != 0) goto L11
                int r0 = r2.a
                r1 = 18
                if (r0 == r1) goto L11
                r1 = 19
                if (r0 == r1) goto L11
                r1 = 20
                if (r0 == r1) goto L11
                return
            L11:
                com.tramini.plugin.a.a.c.a()
                com.tramini.plugin.a.b$1$1 r0 = new com.tramini.plugin.a.b$1$1
                r0.<init>(r2, r3)
                com.tramini.plugin.a.a.c.a(r0)
                return
        }
    }

    static {
            java.lang.Class<com.tramini.plugin.a.b> r0 = com.tramini.plugin.a.b.class
            java.lang.String r0 = r0.getSimpleName()
            com.tramini.plugin.a.b.a = r0
            return
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    private void a(android.content.Intent r11, com.tramini.plugin.b.a r12) {
            r10 = this;
            java.lang.String r0 = r12.f()
            java.lang.String r7 = r11.getStringExtra(r0)
            java.lang.String r0 = r12.g()
            java.lang.String r4 = r11.getStringExtra(r0)
            java.lang.String r0 = r12.h()
            r11.getStringExtra(r0)
            java.lang.String r0 = r12.i()
            java.lang.String r0 = r11.getStringExtra(r0)
            java.lang.String r1 = r12.j()
            java.lang.String r8 = r11.getStringExtra(r1)
            java.lang.String r1 = r12.k()
            java.lang.String r9 = r11.getStringExtra(r1)
            java.lang.String r1 = r12.l()
            r2 = 0
            int r3 = r11.getIntExtra(r1, r2)
            com.tramini.plugin.a.b$1 r11 = new com.tramini.plugin.a.b$1
            r1 = r11
            r2 = r10
            r5 = r12
            r6 = r0
            r1.<init>(r2, r3, r4, r5, r6, r7)
            com.tramini.plugin.a.g.a.a(r12, r0, r9, r8, r11)
            return
    }

    @Override
    public void onReceive(android.content.Context r11, android.content.Intent r12) {
            r10 = this;
            r12.getAction()
            com.tramini.plugin.b.b r0 = com.tramini.plugin.b.b.a(r11)
            com.tramini.plugin.b.a r0 = r0.b()
            if (r0 != 0) goto Le
            return
        Le:
            com.tramini.plugin.a.g.b r1 = com.tramini.plugin.a.g.b.a()
            r1.a(r0)
            boolean r11 = com.tramini.plugin.a.g.h.a(r11)
            if (r11 == 0) goto L22
            int r11 = r0.m()
            if (r11 != 0) goto L22
            return
        L22:
            java.util.List r11 = r0.d()
            if (r11 == 0) goto L7e
            int r1 = r11.size()
            if (r1 > 0) goto L2f
            goto L7e
        L2f:
            java.lang.String r1 = r12.getAction()
            boolean r11 = r11.contains(r1)
            if (r11 != 0) goto L3a
            return
        L3a:
            java.lang.String r11 = r0.f()     // Catch: java.lang.Throwable -> L7e
            java.lang.String r7 = r12.getStringExtra(r11)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r11 = r0.g()     // Catch: java.lang.Throwable -> L7e
            java.lang.String r4 = r12.getStringExtra(r11)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r11 = r0.h()     // Catch: java.lang.Throwable -> L7e
            r12.getStringExtra(r11)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r11 = r0.i()     // Catch: java.lang.Throwable -> L7e
            java.lang.String r11 = r12.getStringExtra(r11)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r1 = r0.j()     // Catch: java.lang.Throwable -> L7e
            java.lang.String r8 = r12.getStringExtra(r1)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r1 = r0.k()     // Catch: java.lang.Throwable -> L7e
            java.lang.String r9 = r12.getStringExtra(r1)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r1 = r0.l()     // Catch: java.lang.Throwable -> L7e
            r2 = 0
            int r3 = r12.getIntExtra(r1, r2)     // Catch: java.lang.Throwable -> L7e
            com.tramini.plugin.a.b$1 r12 = new com.tramini.plugin.a.b$1     // Catch: java.lang.Throwable -> L7e
            r1 = r12
            r2 = r10
            r5 = r0
            r6 = r11
            r1.<init>(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L7e
            com.tramini.plugin.a.g.a.a(r0, r11, r9, r8, r12)     // Catch: java.lang.Throwable -> L7e
        L7e:
            return
    }
}

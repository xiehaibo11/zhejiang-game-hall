package com.mbridge.msdk.foundation.same.net.d;

public final class b {
    private com.mbridge.msdk.foundation.same.net.j a;
    private int b;
    private java.util.LinkedList<com.mbridge.msdk.foundation.same.net.d.b.a> c;

    static class 1 {
    }

    public class a {
        final com.mbridge.msdk.foundation.same.net.d.b a;
        private java.lang.String b;
        private java.io.File c;
        private com.mbridge.msdk.foundation.same.net.e<java.lang.Void> d;
        private com.mbridge.msdk.foundation.same.net.d.a e;
        private int f;


        private a(com.mbridge.msdk.foundation.same.net.d.b r1, java.io.File r2, java.lang.String r3, com.mbridge.msdk.foundation.same.net.e<java.lang.Void> r4) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.c = r2
                r0.d = r4
                r0.b = r3
                return
        }

        a(com.mbridge.msdk.foundation.same.net.d.b r1, java.io.File r2, java.lang.String r3, com.mbridge.msdk.foundation.same.net.e r4, com.mbridge.msdk.foundation.same.net.d.b.1 r5) {
                r0 = this;
                r0.<init>(r1, r2, r3, r4)
                return
        }

        static int a(com.mbridge.msdk.foundation.same.net.d.b.a r0, int r1) {
                r0.f = r1
                return r1
        }

        static boolean a(com.mbridge.msdk.foundation.same.net.d.b.a r4) {
                int r0 = r4.f
                r1 = 1
                if (r0 == 0) goto L7
                r1 = 0
                goto L29
            L7:
                com.mbridge.msdk.foundation.same.net.d.b r0 = r4.a
                java.io.File r0 = r4.c
                java.lang.String r2 = r4.b
                com.mbridge.msdk.foundation.same.net.d.a r3 = new com.mbridge.msdk.foundation.same.net.d.a
                r3.<init>(r0, r2)
                r4.e = r3
                com.mbridge.msdk.foundation.same.net.d.b$a$1 r0 = new com.mbridge.msdk.foundation.same.net.d.b$a$1
                r0.<init>(r4)
                r3.a(r0)
                r4.f = r1
                com.mbridge.msdk.foundation.same.net.d.b r0 = r4.a
                com.mbridge.msdk.foundation.same.net.j r0 = com.mbridge.msdk.foundation.same.net.d.b.a(r0)
                com.mbridge.msdk.foundation.same.net.d.a r4 = r4.e
                r0.a(r4)
            L29:
                return r1
        }

        static com.mbridge.msdk.foundation.same.net.e b(com.mbridge.msdk.foundation.same.net.d.b.a r0) {
                com.mbridge.msdk.foundation.same.net.e<java.lang.Void> r0 = r0.d
                return r0
        }

        public final boolean a() {
                r2 = this;
                int r0 = r2.f
                r1 = 1
                if (r0 != r1) goto L6
                goto L7
            L6:
                r1 = 0
            L7:
                return r1
        }
    }

    public b(com.mbridge.msdk.foundation.same.net.j r2, int r3) {
            r1 = this;
            r1.<init>()
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r1.c = r0
            r1.a = r2
            r1.b = r3
            return
    }

    static com.mbridge.msdk.foundation.same.net.j a(com.mbridge.msdk.foundation.same.net.d.b r0) {
            com.mbridge.msdk.foundation.same.net.j r0 = r0.a
            return r0
    }

    private void a() {
            r3 = this;
            monitor-enter(r3)
            r0 = 0
            java.util.LinkedList<com.mbridge.msdk.foundation.same.net.d.b$a> r1 = r3.c     // Catch: java.lang.Throwable -> L45
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L45
        L8:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L45
            if (r2 == 0) goto L1d
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L45
            com.mbridge.msdk.foundation.same.net.d.b$a r2 = (com.mbridge.msdk.foundation.same.net.d.b.a) r2     // Catch: java.lang.Throwable -> L45
            boolean r2 = r2.a()     // Catch: java.lang.Throwable -> L45
            if (r2 == 0) goto L8
            int r0 = r0 + 1
            goto L8
        L1d:
            int r1 = r3.b     // Catch: java.lang.Throwable -> L45
            if (r0 < r1) goto L23
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L45
            return
        L23:
            java.util.LinkedList<com.mbridge.msdk.foundation.same.net.d.b$a> r1 = r3.c     // Catch: java.lang.Throwable -> L45
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L45
        L29:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L45
            if (r2 == 0) goto L43
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L45
            com.mbridge.msdk.foundation.same.net.d.b$a r2 = (com.mbridge.msdk.foundation.same.net.d.b.a) r2     // Catch: java.lang.Throwable -> L45
            boolean r2 = com.mbridge.msdk.foundation.same.net.d.b.a.a(r2)     // Catch: java.lang.Throwable -> L45
            if (r2 == 0) goto L29
            int r0 = r0 + 1
            int r2 = r3.b     // Catch: java.lang.Throwable -> L45
            if (r0 != r2) goto L29
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L45
            return
        L43:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L45
            return
        L45:
            r0 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L45
            throw r0
    }

    static void a(com.mbridge.msdk.foundation.same.net.d.b r1, com.mbridge.msdk.foundation.same.net.d.b.a r2) {
            monitor-enter(r1)
            java.util.LinkedList<com.mbridge.msdk.foundation.same.net.d.b$a> r0 = r1.c     // Catch: java.lang.Throwable -> Lb
            r0.remove(r2)     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Lb
            r1.a()
            return
        Lb:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Lb
            throw r2
    }

    public final com.mbridge.msdk.foundation.same.net.d.b.a a(java.io.File r8, java.lang.String r9, com.mbridge.msdk.foundation.same.net.e<java.lang.Void> r10) {
            r7 = this;
            com.mbridge.msdk.foundation.same.net.d.b$a r6 = new com.mbridge.msdk.foundation.same.net.d.b$a
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            monitor-enter(r7)
            java.util.LinkedList<com.mbridge.msdk.foundation.same.net.d.b$a> r8 = r7.c     // Catch: java.lang.Throwable -> L16
            r8.add(r6)     // Catch: java.lang.Throwable -> L16
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L16
            r7.a()
            return r6
        L16:
            r8 = move-exception
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L16
            throw r8
    }
}

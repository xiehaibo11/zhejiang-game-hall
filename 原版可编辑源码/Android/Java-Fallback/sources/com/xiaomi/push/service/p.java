package com.xiaomi.push.service;

public class p {
    private static long a;
    private static long b;
    private static long c;
    private final com.xiaomi.push.service.p.a a;
    private final com.xiaomi.push.service.p.c a;

    final class a {
        private final com.xiaomi.push.service.p.c a;

        a(com.xiaomi.push.service.p.c r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        protected void finalize() {
                r3 = this;
                com.xiaomi.push.service.p$c r0 = r3.a     // Catch: java.lang.Throwable -> L16
                monitor-enter(r0)     // Catch: java.lang.Throwable -> L16
                com.xiaomi.push.service.p$c r1 = r3.a     // Catch: java.lang.Throwable -> L13
                r2 = 1
                com.xiaomi.push.service.p.c.a(r1, r2)     // Catch: java.lang.Throwable -> L13
                com.xiaomi.push.service.p$c r1 = r3.a     // Catch: java.lang.Throwable -> L13
                r1.notify()     // Catch: java.lang.Throwable -> L13
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
                super.finalize()
                return
            L13:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
                throw r1     // Catch: java.lang.Throwable -> L16
            L16:
                r0 = move-exception
                super.finalize()
                throw r0
        }
    }

    public abstract class b implements java.lang.Runnable {
        protected int a;

        public b(int r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }
    }

    final class c extends java.lang.Thread {
        private volatile long a;
        private com.xiaomi.push.service.p.c.a a;
        private volatile boolean a;
        private long b;
        private boolean b;
        private boolean c;

        final class a {
            private int a;
            private com.xiaomi.push.service.p.d[] a;
            private int b;
            private int c;

            private a() {
                    r1 = this;
                    r1.<init>()
                    r0 = 256(0x100, float:3.59E-43)
                    r1.a = r0
                    com.xiaomi.push.service.p$d[] r0 = new com.xiaomi.push.service.p.d[r0]
                    r1.a = r0
                    r0 = 0
                    r1.b = r0
                    r1.c = r0
                    return
            }

            a(com.xiaomi.push.service.q r1) {
                    r0 = this;
                    r0.<init>()
                    return
            }

            static int a(com.xiaomi.push.service.p.c.a r0, com.xiaomi.push.service.p.d r1) {
                    int r0 = r0.a(r1)
                    return r0
            }

            private int a(com.xiaomi.push.service.p.d r4) {
                    r3 = this;
                    r0 = 0
                L1:
                    com.xiaomi.push.service.p$d[] r1 = r3.a
                    int r2 = r1.length
                    if (r0 >= r2) goto Le
                    r1 = r1[r0]
                    if (r1 != r4) goto Lb
                    return r0
                Lb:
                    int r0 = r0 + 1
                    goto L1
                Le:
                    r4 = -1
                    return r4
            }

            private void b(com.xiaomi.push.service.p.d r5) {
                    r4 = this;
                    com.xiaomi.push.service.p$b r0 = r5.a
                    int r0 = r0.a
                    r1 = 8
                    if (r0 != r1) goto L2d
                    com.xiaomi.push.service.p$b r0 = r5.a
                    com.xiaomi.push.service.XMPushService$d r0 = (com.xiaomi.push.service.XMPushService.d) r0
                    com.xiaomi.push.fl r1 = r0.a()
                    com.xiaomi.push.service.ao r1 = r1.a
                    if (r1 == 0) goto L5f
                    com.xiaomi.push.fl r1 = r0.a()
                    com.xiaomi.push.service.ao r1 = r1.a
                    long r2 = java.lang.System.currentTimeMillis()
                    r1.b = r2
                    com.xiaomi.push.fl r0 = r0.a()
                    com.xiaomi.push.service.ao r0 = r0.a
                    int r5 = r4.a(r5)
                    r0.b = r5
                    goto L5f
                L2d:
                    com.xiaomi.push.service.p$b r0 = r5.a
                    int r0 = r0.a
                    r1 = 15
                    if (r0 != r1) goto L5f
                    com.xiaomi.push.service.p$b r0 = r5.a
                    com.xiaomi.push.service.XMPushService$i r0 = (com.xiaomi.push.service.XMPushService.i) r0
                    android.content.Intent r0 = r0.a()
                    if (r0 == 0) goto L5f
                    java.lang.String r1 = "ext_chid"
                    java.lang.String r1 = r0.getStringExtra(r1)
                    java.lang.String r2 = "10"
                    boolean r1 = r2.equals(r1)
                    if (r1 == 0) goto L5f
                    long r1 = java.lang.System.currentTimeMillis()
                    java.lang.String r3 = "enqueue"
                    r0.putExtra(r3, r1)
                    int r5 = r4.a(r5)
                    java.lang.String r1 = "num"
                    r0.putExtra(r1, r5)
                L5f:
                    return
            }

            private void c() {
                    r7 = this;
                    int r0 = r7.b
                    int r0 = r0 + (-1)
                    int r1 = r0 + (-1)
                    int r1 = r1 / 2
                L8:
                    com.xiaomi.push.service.p$d[] r2 = r7.a
                    r2 = r2[r0]
                    long r2 = r2.a
                    com.xiaomi.push.service.p$d[] r4 = r7.a
                    r4 = r4[r1]
                    long r4 = r4.a
                    int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
                    if (r2 >= 0) goto L2a
                    com.xiaomi.push.service.p$d[] r2 = r7.a
                    r3 = r2[r0]
                    r4 = r2[r1]
                    r2[r0] = r4
                    r2[r1] = r3
                    int r0 = r1 + (-1)
                    int r0 = r0 / 2
                    r6 = r1
                    r1 = r0
                    r0 = r6
                    goto L8
                L2a:
                    return
            }

            private void c(int r9) {
                    r8 = this;
                    int r0 = r9 * 2
                    int r0 = r0 + 1
                L4:
                    int r1 = r8.b
                    if (r0 >= r1) goto L42
                    if (r1 <= 0) goto L42
                    int r2 = r0 + 1
                    if (r2 >= r1) goto L1f
                    com.xiaomi.push.service.p$d[] r1 = r8.a
                    r1 = r1[r2]
                    long r3 = r1.a
                    com.xiaomi.push.service.p$d[] r1 = r8.a
                    r1 = r1[r0]
                    long r5 = r1.a
                    int r1 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
                    if (r1 >= 0) goto L1f
                    r0 = r2
                L1f:
                    com.xiaomi.push.service.p$d[] r1 = r8.a
                    r1 = r1[r9]
                    long r1 = r1.a
                    com.xiaomi.push.service.p$d[] r3 = r8.a
                    r3 = r3[r0]
                    long r3 = r3.a
                    int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
                    if (r1 >= 0) goto L30
                    goto L42
                L30:
                    com.xiaomi.push.service.p$d[] r1 = r8.a
                    r2 = r1[r9]
                    r3 = r1[r0]
                    r1[r9] = r3
                    r1[r0] = r2
                    int r9 = r0 * 2
                    int r9 = r9 + 1
                    r7 = r0
                    r0 = r9
                    r9 = r7
                    goto L4
                L42:
                    return
            }

            public com.xiaomi.push.service.p.d a() {
                    r2 = this;
                    com.xiaomi.push.service.p$d[] r0 = r2.a
                    r1 = 0
                    r0 = r0[r1]
                    return r0
            }

            public void a() {
                    r1 = this;
                    int r0 = r1.a
                    com.xiaomi.push.service.p$d[] r0 = new com.xiaomi.push.service.p.d[r0]
                    r1.a = r0
                    r0 = 0
                    r1.b = r0
                    return
            }

            public void a(int r3) {
                    r2 = this;
                    r0 = 0
                L1:
                    int r1 = r2.b
                    if (r0 >= r1) goto L17
                    com.xiaomi.push.service.p$d[] r1 = r2.a
                    r1 = r1[r0]
                    int r1 = r1.a
                    if (r1 != r3) goto L14
                    com.xiaomi.push.service.p$d[] r1 = r2.a
                    r1 = r1[r0]
                    r1.a()
                L14:
                    int r0 = r0 + 1
                    goto L1
                L17:
                    r2.b()
                    return
            }

            public void a(int r2, com.xiaomi.push.service.p.b r3) {
                    r1 = this;
                    r2 = 0
                L1:
                    int r0 = r1.b
                    if (r2 >= r0) goto L17
                    com.xiaomi.push.service.p$d[] r0 = r1.a
                    r0 = r0[r2]
                    com.xiaomi.push.service.p$b r0 = r0.a
                    if (r0 != r3) goto L14
                    com.xiaomi.push.service.p$d[] r0 = r1.a
                    r0 = r0[r2]
                    r0.a()
                L14:
                    int r2 = r2 + 1
                    goto L1
                L17:
                    r1.b()
                    return
            }

            public void a(com.xiaomi.push.service.p.d r5) {
                    r4 = this;
                    com.xiaomi.push.service.p$d[] r0 = r4.a
                    int r1 = r0.length
                    int r2 = r4.b
                    if (r1 != r2) goto L11
                    int r1 = r2 * 2
                    com.xiaomi.push.service.p$d[] r1 = new com.xiaomi.push.service.p.d[r1]
                    r3 = 0
                    java.lang.System.arraycopy(r0, r3, r1, r3, r2)
                    r4.a = r1
                L11:
                    com.xiaomi.push.service.p$d[] r0 = r4.a
                    int r1 = r4.b
                    int r2 = r1 + 1
                    r4.b = r2
                    r0[r1] = r5
                    r4.c()
                    r4.b(r5)
                    return
            }

            public boolean a() {
                    r1 = this;
                    int r0 = r1.b
                    if (r0 != 0) goto L6
                    r0 = 1
                    goto L7
                L6:
                    r0 = 0
                L7:
                    return r0
            }

            public boolean a(int r4) {
                    r3 = this;
                    r0 = 0
                    r1 = r0
                L2:
                    int r2 = r3.b
                    if (r1 >= r2) goto L13
                    com.xiaomi.push.service.p$d[] r2 = r3.a
                    r2 = r2[r1]
                    int r2 = r2.a
                    if (r2 != r4) goto L10
                    r4 = 1
                    return r4
                L10:
                    int r1 = r1 + 1
                    goto L2
                L13:
                    return r0
            }

            public void b() {
                    r2 = this;
                    r0 = 0
                L1:
                    int r1 = r2.b
                    if (r0 >= r1) goto L1b
                    com.xiaomi.push.service.p$d[] r1 = r2.a
                    r1 = r1[r0]
                    boolean r1 = r1.a
                    if (r1 == 0) goto L18
                    int r1 = r2.c
                    int r1 = r1 + 1
                    r2.c = r1
                    r2.b(r0)
                    int r0 = r0 + (-1)
                L18:
                    int r0 = r0 + 1
                    goto L1
                L1b:
                    return
            }

            public void b(int r4) {
                    r3 = this;
                    if (r4 < 0) goto L16
                    int r0 = r3.b
                    if (r4 >= r0) goto L16
                    com.xiaomi.push.service.p$d[] r1 = r3.a
                    int r0 = r0 + (-1)
                    r3.b = r0
                    r2 = r1[r0]
                    r1[r4] = r2
                    r2 = 0
                    r1[r0] = r2
                    r3.c(r4)
                L16:
                    return
            }
        }

        c(java.lang.String r3, boolean r4) {
                r2 = this;
                r2.<init>()
                r0 = 0
                r2.a = r0
                r0 = 0
                r2.a = r0
                r0 = 50
                r2.b = r0
                com.xiaomi.push.service.p$c$a r0 = new com.xiaomi.push.service.p$c$a
                r1 = 0
                r0.<init>(r1)
                r2.a = r0
                r2.setName(r3)
                r2.setDaemon(r4)
                r2.start()
                return
        }

        static com.xiaomi.push.service.p.c.a a(com.xiaomi.push.service.p.c r0) {
                com.xiaomi.push.service.p$c$a r0 = r0.a
                return r0
        }

        static void a(com.xiaomi.push.service.p.c r0, com.xiaomi.push.service.p.d r1) {
                r0.a(r1)
                return
        }

        private void a(com.xiaomi.push.service.p.d r2) {
                r1 = this;
                com.xiaomi.push.service.p$c$a r0 = r1.a
                r0.a(r2)
                r1.notify()
                return
        }

        static boolean a(com.xiaomi.push.service.p.c r0) {
                boolean r0 = r0.b
                return r0
        }

        static boolean a(com.xiaomi.push.service.p.c r0, boolean r1) {
                r0.c = r1
                return r1
        }

        public synchronized void a() {
                r1 = this;
                monitor-enter(r1)
                r0 = 1
                r1.b = r0     // Catch: java.lang.Throwable -> Le
                com.xiaomi.push.service.p$c$a r0 = r1.a     // Catch: java.lang.Throwable -> Le
                r0.a()     // Catch: java.lang.Throwable -> Le
                r1.notify()     // Catch: java.lang.Throwable -> Le
                monitor-exit(r1)
                return
            Le:
                r0 = move-exception
                monitor-exit(r1)
                throw r0
        }

        public boolean a() {
                r4 = this;
                boolean r0 = r4.a
                if (r0 == 0) goto L14
                long r0 = android.os.SystemClock.uptimeMillis()
                long r2 = r4.a
                long r0 = r0 - r2
                r2 = 600000(0x927c0, double:2.964394E-318)
                int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r0 <= 0) goto L14
                r0 = 1
                goto L15
            L14:
                r0 = 0
            L15:
                return r0
        }

        @Override
        public void run() {
                r10 = this;
            L0:
                monitor-enter(r10)
                boolean r0 = r10.b     // Catch: java.lang.Throwable -> Lb3
                if (r0 == 0) goto L7
                monitor-exit(r10)     // Catch: java.lang.Throwable -> Lb3
                return
            L7:
                com.xiaomi.push.service.p$c$a r0 = r10.a     // Catch: java.lang.Throwable -> Lb3
                boolean r0 = r0.a()     // Catch: java.lang.Throwable -> Lb3
                if (r0 == 0) goto L1a
                boolean r0 = r10.c     // Catch: java.lang.Throwable -> Lb3
                if (r0 == 0) goto L15
                monitor-exit(r10)     // Catch: java.lang.Throwable -> Lb3
                return
            L15:
                r10.wait()     // Catch: java.lang.InterruptedException -> L18 java.lang.Throwable -> Lb3
            L18:
                monitor-exit(r10)     // Catch: java.lang.Throwable -> Lb3
                goto L0
            L1a:
                long r0 = com.xiaomi.push.service.p.a()     // Catch: java.lang.Throwable -> Lb3
                com.xiaomi.push.service.p$c$a r2 = r10.a     // Catch: java.lang.Throwable -> Lb3
                com.xiaomi.push.service.p$d r2 = r2.a()     // Catch: java.lang.Throwable -> Lb3
                java.lang.Object r3 = r2.a     // Catch: java.lang.Throwable -> Lb3
                monitor-enter(r3)     // Catch: java.lang.Throwable -> Lb3
                boolean r4 = r2.a     // Catch: java.lang.Throwable -> Lb0
                r5 = 0
                if (r4 == 0) goto L33
                com.xiaomi.push.service.p$c$a r0 = r10.a     // Catch: java.lang.Throwable -> Lb0
                r0.b(r5)     // Catch: java.lang.Throwable -> Lb0
                monitor-exit(r3)     // Catch: java.lang.Throwable -> Lb0
                goto L18
            L33:
                long r6 = r2.a     // Catch: java.lang.Throwable -> Lb0
                long r6 = r6 - r0
                monitor-exit(r3)     // Catch: java.lang.Throwable -> Lb0
                r0 = 0
                int r3 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
                r8 = 50
                if (r3 <= 0) goto L58
                long r0 = r10.b     // Catch: java.lang.Throwable -> Lb3
                int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
                if (r0 <= 0) goto L47
                long r6 = r10.b     // Catch: java.lang.Throwable -> Lb3
            L47:
                long r0 = r10.b     // Catch: java.lang.Throwable -> Lb3
                long r0 = r0 + r8
                r10.b = r0     // Catch: java.lang.Throwable -> Lb3
                r2 = 500(0x1f4, double:2.47E-321)
                int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r0 <= 0) goto L54
                r10.b = r2     // Catch: java.lang.Throwable -> Lb3
            L54:
                r10.wait(r6)     // Catch: java.lang.InterruptedException -> L18 java.lang.Throwable -> Lb3
                goto L18
            L58:
                r10.b = r8     // Catch: java.lang.Throwable -> Lb3
                java.lang.Object r3 = r2.a     // Catch: java.lang.Throwable -> Lb3
                monitor-enter(r3)     // Catch: java.lang.Throwable -> Lb3
                com.xiaomi.push.service.p$c$a r4 = r10.a     // Catch: java.lang.Throwable -> Lad
                com.xiaomi.push.service.p$d r4 = r4.a()     // Catch: java.lang.Throwable -> Lad
                long r6 = r4.a     // Catch: java.lang.Throwable -> Lad
                long r8 = r2.a     // Catch: java.lang.Throwable -> Lad
                int r4 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
                if (r4 == 0) goto L72
                com.xiaomi.push.service.p$c$a r4 = r10.a     // Catch: java.lang.Throwable -> Lad
                int r4 = com.xiaomi.push.service.p.c.a.a(r4, r2)     // Catch: java.lang.Throwable -> Lad
                goto L73
            L72:
                r4 = r5
            L73:
                boolean r6 = r2.a     // Catch: java.lang.Throwable -> Lad
                if (r6 == 0) goto L84
                com.xiaomi.push.service.p$c$a r0 = r10.a     // Catch: java.lang.Throwable -> Lad
                com.xiaomi.push.service.p$c$a r1 = r10.a     // Catch: java.lang.Throwable -> Lad
                int r1 = com.xiaomi.push.service.p.c.a.a(r1, r2)     // Catch: java.lang.Throwable -> Lad
                r0.b(r1)     // Catch: java.lang.Throwable -> Lad
                monitor-exit(r3)     // Catch: java.lang.Throwable -> Lad
                goto L18
            L84:
                long r6 = r2.a     // Catch: java.lang.Throwable -> Lad
                r2.a(r6)     // Catch: java.lang.Throwable -> Lad
                com.xiaomi.push.service.p$c$a r6 = r10.a     // Catch: java.lang.Throwable -> Lad
                r6.b(r4)     // Catch: java.lang.Throwable -> Lad
                r2.a = r0     // Catch: java.lang.Throwable -> Lad
                monitor-exit(r3)     // Catch: java.lang.Throwable -> Lad
                monitor-exit(r10)     // Catch: java.lang.Throwable -> Lb3
                r0 = 1
                long r3 = android.os.SystemClock.uptimeMillis()     // Catch: java.lang.Throwable -> La4
                r10.a = r3     // Catch: java.lang.Throwable -> La4
                r10.a = r0     // Catch: java.lang.Throwable -> La4
                com.xiaomi.push.service.p$b r1 = r2.a     // Catch: java.lang.Throwable -> La4
                r1.run()     // Catch: java.lang.Throwable -> La4
                r10.a = r5     // Catch: java.lang.Throwable -> La4
                goto L0
            La4:
                r1 = move-exception
                monitor-enter(r10)
                r10.b = r0     // Catch: java.lang.Throwable -> Laa
                monitor-exit(r10)     // Catch: java.lang.Throwable -> Laa
                throw r1
            Laa:
                r0 = move-exception
                monitor-exit(r10)     // Catch: java.lang.Throwable -> Laa
                throw r0
            Lad:
                r0 = move-exception
                monitor-exit(r3)     // Catch: java.lang.Throwable -> Lad
                throw r0     // Catch: java.lang.Throwable -> Lb3
            Lb0:
                r0 = move-exception
                monitor-exit(r3)     // Catch: java.lang.Throwable -> Lb0
                throw r0     // Catch: java.lang.Throwable -> Lb3
            Lb3:
                r0 = move-exception
                monitor-exit(r10)     // Catch: java.lang.Throwable -> Lb3
                throw r0
        }
    }

    class d {
        int a;
        long a;
        com.xiaomi.push.service.p.b a;
        final java.lang.Object a;
        boolean a;
        private long b;

        d() {
                r1 = this;
                r1.<init>()
                java.lang.Object r0 = new java.lang.Object
                r0.<init>()
                r1.a = r0
                return
        }

        void a(long r2) {
                r1 = this;
                java.lang.Object r0 = r1.a
                monitor-enter(r0)
                r1.b = r2     // Catch: java.lang.Throwable -> L7
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
                return
            L7:
                r2 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
                throw r2
        }

        public boolean a() {
                r7 = this;
                java.lang.Object r0 = r7.a
                monitor-enter(r0)
                boolean r1 = r7.a     // Catch: java.lang.Throwable -> L17
                r2 = 1
                if (r1 != 0) goto L12
                long r3 = r7.a     // Catch: java.lang.Throwable -> L17
                r5 = 0
                int r1 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
                if (r1 <= 0) goto L12
                r1 = r2
                goto L13
            L12:
                r1 = 0
            L13:
                r7.a = r2     // Catch: java.lang.Throwable -> L17
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
                return r1
            L17:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
                throw r1
        }
    }

    static {
            long r0 = android.os.SystemClock.elapsedRealtime()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto Le
            long r2 = android.os.SystemClock.elapsedRealtime()
        Le:
            com.xiaomi.push.service.p.a = r2
            com.xiaomi.push.service.p.b = r2
            return
    }

    public p() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public p(java.lang.String r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public p(java.lang.String r2, boolean r3) {
            r1 = this;
            r1.<init>()
            if (r2 == 0) goto L16
            com.xiaomi.push.service.p$c r0 = new com.xiaomi.push.service.p$c
            r0.<init>(r2, r3)
            r1.a = r0
            com.xiaomi.push.service.p$a r2 = new com.xiaomi.push.service.p$a
            com.xiaomi.push.service.p$c r3 = r1.a
            r2.<init>(r3)
            r1.a = r2
            return
        L16:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r3 = "name == null"
            r2.<init>(r3)
            throw r2
    }

    public p(boolean r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Timer-"
            r0.append(r1)
            long r1 = b()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0, r4)
            return
    }

    static synchronized long a() {
            java.lang.Class<com.xiaomi.push.service.p> r0 = com.xiaomi.push.service.p.class
            monitor-enter(r0)
            long r1 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L1c
            long r3 = com.xiaomi.push.service.p.b     // Catch: java.lang.Throwable -> L1c
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 <= 0) goto L16
            long r3 = com.xiaomi.push.service.p.a     // Catch: java.lang.Throwable -> L1c
            long r5 = com.xiaomi.push.service.p.b     // Catch: java.lang.Throwable -> L1c
            long r5 = r1 - r5
            long r3 = r3 + r5
            com.xiaomi.push.service.p.a = r3     // Catch: java.lang.Throwable -> L1c
        L16:
            com.xiaomi.push.service.p.b = r1     // Catch: java.lang.Throwable -> L1c
            long r1 = com.xiaomi.push.service.p.a     // Catch: java.lang.Throwable -> L1c
            monitor-exit(r0)
            return r1
        L1c:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private static synchronized long b() {
            java.lang.Class<com.xiaomi.push.service.p> r0 = com.xiaomi.push.service.p.class
            monitor-enter(r0)
            long r1 = com.xiaomi.push.service.p.c     // Catch: java.lang.Throwable -> Lc
            r3 = 1
            long r3 = r3 + r1
            com.xiaomi.push.service.p.c = r3     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r0)
            return r1
        Lc:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private void b(com.xiaomi.push.service.p.b r4, long r5) {
            r3 = this;
            com.xiaomi.push.service.p$c r0 = r3.a
            monitor-enter(r0)
            com.xiaomi.push.service.p$c r1 = r3.a     // Catch: java.lang.Throwable -> L49
            boolean r1 = com.xiaomi.push.service.p.c.a(r1)     // Catch: java.lang.Throwable -> L49
            if (r1 != 0) goto L41
            long r1 = a()     // Catch: java.lang.Throwable -> L49
            long r5 = r5 + r1
            r1 = 0
            int r1 = (r5 > r1 ? 1 : (r5 == r1 ? 0 : -1))
            if (r1 < 0) goto L2a
            com.xiaomi.push.service.p$d r1 = new com.xiaomi.push.service.p$d     // Catch: java.lang.Throwable -> L49
            r1.<init>()     // Catch: java.lang.Throwable -> L49
            int r2 = r4.a     // Catch: java.lang.Throwable -> L49
            r1.a = r2     // Catch: java.lang.Throwable -> L49
            r1.a = r4     // Catch: java.lang.Throwable -> L49
            r1.a = r5     // Catch: java.lang.Throwable -> L49
            com.xiaomi.push.service.p$c r4 = r3.a     // Catch: java.lang.Throwable -> L49
            com.xiaomi.push.service.p.c.a(r4, r1)     // Catch: java.lang.Throwable -> L49
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L49
            return
        L2a:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L49
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L49
            r1.<init>()     // Catch: java.lang.Throwable -> L49
            java.lang.String r2 = "Illegal delay to start the TimerTask: "
            r1.append(r2)     // Catch: java.lang.Throwable -> L49
            r1.append(r5)     // Catch: java.lang.Throwable -> L49
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L49
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L49
            throw r4     // Catch: java.lang.Throwable -> L49
        L41:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L49
            java.lang.String r5 = "Timer was canceled"
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L49
            throw r4     // Catch: java.lang.Throwable -> L49
        L49:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L49
            throw r4
    }

    public void a() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "quit. finalizer:"
            r0.append(r1)
            com.xiaomi.push.service.p$a r1 = r2.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            com.xiaomi.push.service.p$c r0 = r2.a
            r0.a()
            return
    }

    public void a(int r3) {
            r2 = this;
            com.xiaomi.push.service.p$c r0 = r2.a
            monitor-enter(r0)
            com.xiaomi.push.service.p$c r1 = r2.a     // Catch: java.lang.Throwable -> Le
            com.xiaomi.push.service.p$c$a r1 = com.xiaomi.push.service.p.c.a(r1)     // Catch: java.lang.Throwable -> Le
            r1.a(r3)     // Catch: java.lang.Throwable -> Le
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le
            return
        Le:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le
            throw r3
    }

    public void a(int r3, com.xiaomi.push.service.p.b r4) {
            r2 = this;
            com.xiaomi.push.service.p$c r0 = r2.a
            monitor-enter(r0)
            com.xiaomi.push.service.p$c r1 = r2.a     // Catch: java.lang.Throwable -> Le
            com.xiaomi.push.service.p$c$a r1 = com.xiaomi.push.service.p.c.a(r1)     // Catch: java.lang.Throwable -> Le
            r1.a(r3, r4)     // Catch: java.lang.Throwable -> Le
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le
            return
        Le:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le
            throw r3
    }

    public void a(com.xiaomi.push.service.p.b r3) {
            r2 = this;
            int r0 = com.xiaomi.channel.commonutils.logger.b.a()
            r1 = 1
            if (r0 >= r1) goto L1d
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            com.xiaomi.push.service.p$c r1 = r2.a
            if (r0 != r1) goto L10
            goto L1d
        L10:
            java.lang.String r3 = "run job outside job job thread"
            com.xiaomi.channel.commonutils.logger.b.d(r3)
            java.util.concurrent.RejectedExecutionException r3 = new java.util.concurrent.RejectedExecutionException
            java.lang.String r0 = "Run job outside job thread"
            r3.<init>(r0)
            throw r3
        L1d:
            r3.run()
            return
    }

    public void a(com.xiaomi.push.service.p.b r3, long r4) {
            r2 = this;
            r0 = 0
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 < 0) goto La
            r2.b(r3, r4)
            return
        La:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "delay < 0: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            throw r3
    }

    public boolean a() {
            r1 = this;
            com.xiaomi.push.service.p$c r0 = r1.a
            boolean r0 = r0.a()
            return r0
    }

    public boolean a(int r3) {
            r2 = this;
            com.xiaomi.push.service.p$c r0 = r2.a
            monitor-enter(r0)
            com.xiaomi.push.service.p$c r1 = r2.a     // Catch: java.lang.Throwable -> Lf
            com.xiaomi.push.service.p$c$a r1 = com.xiaomi.push.service.p.c.a(r1)     // Catch: java.lang.Throwable -> Lf
            boolean r3 = r1.a(r3)     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lf
            return r3
        Lf:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lf
            throw r3
    }

    public void b() {
            r2 = this;
            com.xiaomi.push.service.p$c r0 = r2.a
            monitor-enter(r0)
            com.xiaomi.push.service.p$c r1 = r2.a     // Catch: java.lang.Throwable -> Le
            com.xiaomi.push.service.p$c$a r1 = com.xiaomi.push.service.p.c.a(r1)     // Catch: java.lang.Throwable -> Le
            r1.a()     // Catch: java.lang.Throwable -> Le
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le
            return
        Le:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le
            throw r1
    }
}

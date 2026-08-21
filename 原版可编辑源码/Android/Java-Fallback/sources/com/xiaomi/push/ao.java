package com.xiaomi.push;

public class ao {
    private int a;
    private android.os.Handler a;
    private com.xiaomi.push.ao.a a;
    private volatile com.xiaomi.push.ao.b a;
    private volatile boolean a;
    private final boolean b;

    class a extends java.lang.Thread {
        final com.xiaomi.push.ao a;
        private final java.util.concurrent.LinkedBlockingQueue<com.xiaomi.push.ao.b> a;

        public a(com.xiaomi.push.ao r1) {
                r0 = this;
                r0.a = r1
                java.lang.String r1 = "PackageProcessor"
                r0.<init>(r1)
                java.util.concurrent.LinkedBlockingQueue r1 = new java.util.concurrent.LinkedBlockingQueue
                r1.<init>()
                r0.a = r1
                return
        }

        private void a(int r3, com.xiaomi.push.ao.b r4) {
                r2 = this;
                com.xiaomi.push.ao r0 = r2.a     // Catch: java.lang.Exception -> L14
                android.os.Handler r0 = com.xiaomi.push.ao.a(r0)     // Catch: java.lang.Exception -> L14
                com.xiaomi.push.ao r1 = r2.a     // Catch: java.lang.Exception -> L14
                android.os.Handler r1 = com.xiaomi.push.ao.a(r1)     // Catch: java.lang.Exception -> L14
                android.os.Message r3 = r1.obtainMessage(r3, r4)     // Catch: java.lang.Exception -> L14
                r0.sendMessage(r3)     // Catch: java.lang.Exception -> L14
                goto L18
            L14:
                r3 = move-exception
                com.xiaomi.channel.commonutils.logger.b.a(r3)
            L18:
                return
        }

        public void a(com.xiaomi.push.ao.b r2) {
                r1 = this;
                java.util.concurrent.LinkedBlockingQueue<com.xiaomi.push.ao$b> r0 = r1.a     // Catch: java.lang.Exception -> L6
                r0.add(r2)     // Catch: java.lang.Exception -> L6
                goto La
            L6:
                r2 = move-exception
                r2.printStackTrace()
            La:
                return
        }

        @Override
        public void run() {
                r4 = this;
                com.xiaomi.push.ao r0 = r4.a
                int r0 = com.xiaomi.push.ao.a(r0)
                if (r0 <= 0) goto L10
                com.xiaomi.push.ao r0 = r4.a
                int r0 = com.xiaomi.push.ao.a(r0)
                long r0 = (long) r0
                goto L15
            L10:
                r0 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            L15:
                com.xiaomi.push.ao r2 = r4.a
                boolean r2 = com.xiaomi.push.ao.a(r2)
                if (r2 != 0) goto L4d
                java.util.concurrent.LinkedBlockingQueue<com.xiaomi.push.ao$b> r2 = r4.a     // Catch: java.lang.InterruptedException -> L48
                java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.InterruptedException -> L48
                java.lang.Object r2 = r2.poll(r0, r3)     // Catch: java.lang.InterruptedException -> L48
                com.xiaomi.push.ao$b r2 = (com.xiaomi.push.ao.b) r2     // Catch: java.lang.InterruptedException -> L48
                com.xiaomi.push.ao r3 = r4.a     // Catch: java.lang.InterruptedException -> L48
                com.xiaomi.push.ao.a(r3, r2)     // Catch: java.lang.InterruptedException -> L48
                if (r2 == 0) goto L3a
                r3 = 0
                r4.a(r3, r2)     // Catch: java.lang.InterruptedException -> L48
                r2.b()     // Catch: java.lang.InterruptedException -> L48
                r3 = 1
                r4.a(r3, r2)     // Catch: java.lang.InterruptedException -> L48
                goto L15
            L3a:
                com.xiaomi.push.ao r2 = r4.a     // Catch: java.lang.InterruptedException -> L48
                int r2 = com.xiaomi.push.ao.a(r2)     // Catch: java.lang.InterruptedException -> L48
                if (r2 <= 0) goto L15
                com.xiaomi.push.ao r2 = r4.a     // Catch: java.lang.InterruptedException -> L48
                com.xiaomi.push.ao.a(r2)     // Catch: java.lang.InterruptedException -> L48
                goto L15
            L48:
                r2 = move-exception
                com.xiaomi.channel.commonutils.logger.b.a(r2)
                goto L15
            L4d:
                return
        }
    }

    public abstract class b {
        public b() {
                r0 = this;
                r0.<init>()
                return
        }

        public void a() {
                r0 = this;
                return
        }

        public abstract void b();

        public void c() {
                r0 = this;
                return
        }
    }

    public ao() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public ao(boolean r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public ao(boolean r3, int r4) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.a = r0
            r0 = 0
            r2.a = r0
            r2.a = r0
            com.xiaomi.push.ap r0 = new com.xiaomi.push.ap
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r2, r1)
            r2.a = r0
            r2.b = r3
            r2.a = r4
            return
    }

    static int a(com.xiaomi.push.ao r0) {
            int r0 = r0.a
            return r0
    }

    static android.os.Handler a(com.xiaomi.push.ao r0) {
            android.os.Handler r0 = r0.a
            return r0
    }

    static com.xiaomi.push.ao.b a(com.xiaomi.push.ao r0, com.xiaomi.push.ao.b r1) {
            r0.a = r1
            return r1
    }

    private synchronized void a() {
            r1 = this;
            monitor-enter(r1)
            r0 = 0
            r1.a = r0     // Catch: java.lang.Throwable -> L9
            r0 = 1
            r1.a = r0     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)
            return
        L9:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    static void a(com.xiaomi.push.ao r0) {
            r0.a()
            return
    }

    static boolean a(com.xiaomi.push.ao r0) {
            boolean r0 = r0.a
            return r0
    }

    public synchronized void a(com.xiaomi.push.ao.b r3) {
            r2 = this;
            monitor-enter(r2)
            com.xiaomi.push.ao$a r0 = r2.a     // Catch: java.lang.Throwable -> L20
            if (r0 != 0) goto L19
            com.xiaomi.push.ao$a r0 = new com.xiaomi.push.ao$a     // Catch: java.lang.Throwable -> L20
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L20
            r2.a = r0     // Catch: java.lang.Throwable -> L20
            boolean r1 = r2.b     // Catch: java.lang.Throwable -> L20
            r0.setDaemon(r1)     // Catch: java.lang.Throwable -> L20
            r0 = 0
            r2.a = r0     // Catch: java.lang.Throwable -> L20
            com.xiaomi.push.ao$a r0 = r2.a     // Catch: java.lang.Throwable -> L20
            r0.start()     // Catch: java.lang.Throwable -> L20
        L19:
            com.xiaomi.push.ao$a r0 = r2.a     // Catch: java.lang.Throwable -> L20
            r0.a(r3)     // Catch: java.lang.Throwable -> L20
            monitor-exit(r2)
            return
        L20:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public void a(com.xiaomi.push.ao.b r3, long r4) {
            r2 = this;
            android.os.Handler r0 = r2.a
            com.xiaomi.push.aq r1 = new com.xiaomi.push.aq
            r1.<init>(r2, r3)
            r0.postDelayed(r1, r4)
            return
    }
}

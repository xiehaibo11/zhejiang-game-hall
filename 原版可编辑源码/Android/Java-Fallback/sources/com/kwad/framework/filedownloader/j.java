package com.kwad.framework.filedownloader;

public final class j {
    static int abd = 10;
    static int abe = 5;
    private final java.util.concurrent.Executor aaZ;
    private final java.util.concurrent.LinkedBlockingQueue<com.kwad.framework.filedownloader.t> aba;
    private final java.lang.Object abb;
    private final java.util.ArrayList<com.kwad.framework.filedownloader.t> abc;
    private final android.os.Handler handler;


    static final class a {
        private static final com.kwad.framework.filedownloader.j abh = null;

        static {
                com.kwad.framework.filedownloader.j r0 = new com.kwad.framework.filedownloader.j
                r1 = 0
                r0.<init>(r1)
                com.kwad.framework.filedownloader.j.a.abh = r0
                return
        }

        static com.kwad.framework.filedownloader.j tH() {
                com.kwad.framework.filedownloader.j r0 = com.kwad.framework.filedownloader.j.a.abh
                return r0
        }
    }

    static class b implements android.os.Handler.Callback {
        private b() {
                r0 = this;
                r0.<init>()
                return
        }

        b(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        private static void a(java.util.ArrayList<com.kwad.framework.filedownloader.t> r2) {
                java.util.Iterator r0 = r2.iterator()
            L4:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L14
                java.lang.Object r1 = r0.next()
                com.kwad.framework.filedownloader.t r1 = (com.kwad.framework.filedownloader.t) r1
                r1.tJ()
                goto L4
            L14:
                r2.clear()
                return
        }

        @Override
        public final boolean handleMessage(android.os.Message r4) {
                r3 = this;
                int r0 = r4.what
                r1 = 1
                if (r0 != r1) goto Ld
                java.lang.Object r4 = r4.obj
                com.kwad.framework.filedownloader.t r4 = (com.kwad.framework.filedownloader.t) r4
                r4.tJ()
                goto L20
            Ld:
                int r0 = r4.what
                r2 = 2
                if (r0 != r2) goto L20
                java.lang.Object r4 = r4.obj
                java.util.ArrayList r4 = (java.util.ArrayList) r4
                a(r4)
                com.kwad.framework.filedownloader.j r4 = com.kwad.framework.filedownloader.j.tF()
                com.kwad.framework.filedownloader.j.a(r4)
            L20:
                return r1
        }
    }

    static {
            return
    }

    private j() {
            r4 = this;
            r4.<init>()
            r0 = 5
            java.lang.String r1 = "BlockCompleted"
            java.util.concurrent.ThreadPoolExecutor r0 = com.kwad.framework.filedownloader.f.b.j(r0, r1)
            r4.aaZ = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r4.abb = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r4.abc = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            com.kwad.framework.filedownloader.j$b r2 = new com.kwad.framework.filedownloader.j$b
            r3 = 0
            r2.<init>(r3)
            r0.<init>(r1, r2)
            r4.handler = r0
            java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
            r0.<init>()
            r4.aba = r0
            return
    }

    j(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static void a(com.kwad.framework.filedownloader.j r0) {
            r0.push()
            return
    }

    private void a(com.kwad.framework.filedownloader.t r3, boolean r4) {
            r2 = this;
            boolean r4 = r3.tK()
            if (r4 == 0) goto La
            r3.tJ()
            return
        La:
            boolean r4 = r3.tL()
            if (r4 == 0) goto L1b
            java.util.concurrent.Executor r4 = r2.aaZ
            com.kwad.framework.filedownloader.j$1 r0 = new com.kwad.framework.filedownloader.j$1
            r0.<init>(r2, r3)
            r4.execute(r0)
            return
        L1b:
            boolean r4 = tG()
            if (r4 != 0) goto L54
            java.util.concurrent.LinkedBlockingQueue<com.kwad.framework.filedownloader.t> r4 = r2.aba
            boolean r4 = r4.isEmpty()
            if (r4 != 0) goto L54
            java.lang.Object r4 = r2.abb
            monitor-enter(r4)
            java.util.concurrent.LinkedBlockingQueue<com.kwad.framework.filedownloader.t> r0 = r2.aba     // Catch: java.lang.Throwable -> L51
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L51
            if (r0 != 0) goto L4a
            java.util.concurrent.LinkedBlockingQueue<com.kwad.framework.filedownloader.t> r0 = r2.aba     // Catch: java.lang.Throwable -> L51
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L51
        L3a:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L51
            if (r1 == 0) goto L4a
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L51
            com.kwad.framework.filedownloader.t r1 = (com.kwad.framework.filedownloader.t) r1     // Catch: java.lang.Throwable -> L51
            r2.b(r1)     // Catch: java.lang.Throwable -> L51
            goto L3a
        L4a:
            java.util.concurrent.LinkedBlockingQueue<com.kwad.framework.filedownloader.t> r0 = r2.aba     // Catch: java.lang.Throwable -> L51
            r0.clear()     // Catch: java.lang.Throwable -> L51
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L51
            goto L54
        L51:
            r3 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L51
            throw r3
        L54:
            boolean r4 = tG()
            if (r4 != 0) goto L5e
            r2.b(r3)
            return
        L5e:
            r2.c(r3)
            return
    }

    private void b(com.kwad.framework.filedownloader.t r3) {
            r2 = this;
            android.os.Handler r0 = r2.handler
            r1 = 1
            android.os.Message r3 = r0.obtainMessage(r1, r3)
            r0.sendMessage(r3)
            return
    }

    private void c(com.kwad.framework.filedownloader.t r3) {
            r2 = this;
            java.lang.Object r0 = r2.abb
            monitor-enter(r0)
            java.util.concurrent.LinkedBlockingQueue<com.kwad.framework.filedownloader.t> r1 = r2.aba     // Catch: java.lang.Throwable -> Ld
            r1.offer(r3)     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
            r2.push()
            return
        Ld:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
            throw r3
    }

    private void push() {
            r6 = this;
            java.lang.Object r0 = r6.abb
            monitor-enter(r0)
            java.util.ArrayList<com.kwad.framework.filedownloader.t> r1 = r6.abc     // Catch: java.lang.Throwable -> L54
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> L54
            if (r1 != 0) goto Ld
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L54
            return
        Ld:
            java.util.concurrent.LinkedBlockingQueue<com.kwad.framework.filedownloader.t> r1 = r6.aba     // Catch: java.lang.Throwable -> L54
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> L54
            if (r1 == 0) goto L17
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L54
            return
        L17:
            boolean r1 = tG()     // Catch: java.lang.Throwable -> L54
            r2 = 0
            if (r1 != 0) goto L26
            java.util.concurrent.LinkedBlockingQueue<com.kwad.framework.filedownloader.t> r1 = r6.aba     // Catch: java.lang.Throwable -> L54
            java.util.ArrayList<com.kwad.framework.filedownloader.t> r3 = r6.abc     // Catch: java.lang.Throwable -> L54
            r1.drainTo(r3)     // Catch: java.lang.Throwable -> L54
            goto L45
        L26:
            int r1 = com.kwad.framework.filedownloader.j.abd     // Catch: java.lang.Throwable -> L54
            java.util.concurrent.LinkedBlockingQueue<com.kwad.framework.filedownloader.t> r3 = r6.aba     // Catch: java.lang.Throwable -> L54
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L54
            int r4 = com.kwad.framework.filedownloader.j.abe     // Catch: java.lang.Throwable -> L54
            int r3 = java.lang.Math.min(r3, r4)     // Catch: java.lang.Throwable -> L54
        L34:
            if (r2 >= r3) goto L44
            java.util.ArrayList<com.kwad.framework.filedownloader.t> r4 = r6.abc     // Catch: java.lang.Throwable -> L54
            java.util.concurrent.LinkedBlockingQueue<com.kwad.framework.filedownloader.t> r5 = r6.aba     // Catch: java.lang.Throwable -> L54
            java.lang.Object r5 = r5.remove()     // Catch: java.lang.Throwable -> L54
            r4.add(r5)     // Catch: java.lang.Throwable -> L54
            int r2 = r2 + 1
            goto L34
        L44:
            r2 = r1
        L45:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L54
            android.os.Handler r0 = r6.handler
            r1 = 2
            java.util.ArrayList<com.kwad.framework.filedownloader.t> r3 = r6.abc
            android.os.Message r1 = r0.obtainMessage(r1, r3)
            long r2 = (long) r2
            r0.sendMessageDelayed(r1, r2)
            return
        L54:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L54
            throw r1
    }

    public static com.kwad.framework.filedownloader.j tF() {
            com.kwad.framework.filedownloader.j r0 = com.kwad.framework.filedownloader.j.a.tH()
            return r0
    }

    private static boolean tG() {
            int r0 = com.kwad.framework.filedownloader.j.abd
            if (r0 <= 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    final void a(com.kwad.framework.filedownloader.t r2) {
            r1 = this;
            r0 = 0
            r1.a(r2, r0)
            return
    }
}

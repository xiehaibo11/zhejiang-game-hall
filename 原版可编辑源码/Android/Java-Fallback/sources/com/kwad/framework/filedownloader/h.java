package com.kwad.framework.filedownloader;

public final class h {
    private final java.util.ArrayList<com.kwad.framework.filedownloader.a.a> aaX;

    static final class a {
        private static final com.kwad.framework.filedownloader.h aaY = null;

        static {
                com.kwad.framework.filedownloader.h r0 = new com.kwad.framework.filedownloader.h
                r1 = 0
                r0.<init>(r1)
                com.kwad.framework.filedownloader.h.a.aaY = r0
                return
        }

        static com.kwad.framework.filedownloader.h tE() {
                com.kwad.framework.filedownloader.h r0 = com.kwad.framework.filedownloader.h.a.aaY
                return r0
        }
    }

    private h() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.aaX = r0
            return
    }

    h(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.framework.filedownloader.h tD() {
            com.kwad.framework.filedownloader.h r0 = com.kwad.framework.filedownloader.h.a.tE()
            return r0
    }

    final boolean a(com.kwad.framework.filedownloader.a.a r2) {
            r1 = this;
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r0 = r1.aaX
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L13
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r0 = r1.aaX
            boolean r2 = r0.contains(r2)
            if (r2 != 0) goto L11
            goto L13
        L11:
            r2 = 0
            return r2
        L13:
            r2 = 1
            return r2
    }

    public final boolean a(com.kwad.framework.filedownloader.a.a r8, com.kwad.framework.filedownloader.message.MessageSnapshot r9) {
            r7 = this;
            byte r0 = r9.sX()
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r1 = r7.aaX
            monitor-enter(r1)
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r2 = r7.aaX     // Catch: java.lang.Throwable -> L74
            boolean r2 = r2.remove(r8)     // Catch: java.lang.Throwable -> L74
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L74
            boolean r1 = com.kwad.framework.filedownloader.f.d.aeI
            r3 = 1
            r4 = 0
            r5 = 2
            if (r1 == 0) goto L39
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r1 = r7.aaX
            int r1 = r1.size()
            if (r1 != 0) goto L39
            r1 = 3
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r1[r4] = r8
            java.lang.Byte r6 = java.lang.Byte.valueOf(r0)
            r1[r3] = r6
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r6 = r7.aaX
            int r6 = r6.size()
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            r1[r5] = r6
            java.lang.String r6 = "remove %s left %d %d"
            com.kwad.framework.filedownloader.f.d.e(r7, r6, r1)
        L39:
            if (r2 == 0) goto L64
            com.kwad.framework.filedownloader.x$a r8 = r8.tg()
            com.kwad.framework.filedownloader.t r8 = r8.tv()
            r1 = -4
            if (r0 == r1) goto L60
            r1 = -3
            if (r0 == r1) goto L58
            r1 = -2
            if (r0 == r1) goto L54
            r1 = -1
            if (r0 == r1) goto L50
            goto L73
        L50:
            r8.m(r9)
            goto L73
        L54:
            r8.n(r9)
            goto L73
        L58:
            com.kwad.framework.filedownloader.message.MessageSnapshot r9 = com.kwad.framework.filedownloader.message.f.t(r9)
            r8.j(r9)
            goto L73
        L60:
            r8.l(r9)
            goto L73
        L64:
            java.lang.Object[] r9 = new java.lang.Object[r5]
            r9[r4] = r8
            java.lang.Byte r8 = java.lang.Byte.valueOf(r0)
            r9[r3] = r8
            java.lang.String r8 = "remove error, not exist: %s %d"
            com.kwad.framework.filedownloader.f.d.a(r7, r8, r9)
        L73:
            return r2
        L74:
            r8 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L74
            throw r8
    }

    final int aU(int r5) {
            r4 = this;
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r0 = r4.aaX
            monitor-enter(r0)
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r1 = r4.aaX     // Catch: java.lang.Throwable -> L21
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L21
            r2 = 0
        La:
            boolean r3 = r1.hasNext()     // Catch: java.lang.Throwable -> L21
            if (r3 == 0) goto L1f
            java.lang.Object r3 = r1.next()     // Catch: java.lang.Throwable -> L21
            com.kwad.framework.filedownloader.a$a r3 = (com.kwad.framework.filedownloader.a.a) r3     // Catch: java.lang.Throwable -> L21
            boolean r3 = r3.aT(r5)     // Catch: java.lang.Throwable -> L21
            if (r3 == 0) goto La
            int r2 = r2 + 1
            goto La
        L1f:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L21
            return r2
        L21:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L21
            throw r5
    }

    final java.util.List<com.kwad.framework.filedownloader.a.a> aV(int r7) {
            r6 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r1 = r6.aaX
            monitor-enter(r1)
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r2 = r6.aaX     // Catch: java.lang.Throwable -> L3a
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L3a
        Le:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L3a
            if (r3 == 0) goto L38
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L3a
            com.kwad.framework.filedownloader.a$a r3 = (com.kwad.framework.filedownloader.a.a) r3     // Catch: java.lang.Throwable -> L3a
            boolean r4 = r3.aT(r7)     // Catch: java.lang.Throwable -> L3a
            if (r4 == 0) goto Le
            boolean r4 = r3.isOver()     // Catch: java.lang.Throwable -> L3a
            if (r4 != 0) goto Le
            com.kwad.framework.filedownloader.a r4 = r3.tf()     // Catch: java.lang.Throwable -> L3a
            byte r4 = r4.sX()     // Catch: java.lang.Throwable -> L3a
            if (r4 == 0) goto Le
            r5 = 10
            if (r4 == r5) goto Le
            r0.add(r3)     // Catch: java.lang.Throwable -> L3a
            goto Le
        L38:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L3a
            return r0
        L3a:
            r7 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L3a
            throw r7
    }

    final java.util.List<com.kwad.framework.filedownloader.a.a> aW(int r6) {
            r5 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r1 = r5.aaX
            monitor-enter(r1)
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r2 = r5.aaX     // Catch: java.lang.Throwable -> L2c
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L2c
        Le:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L2c
            if (r3 == 0) goto L2a
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L2c
            com.kwad.framework.filedownloader.a$a r3 = (com.kwad.framework.filedownloader.a.a) r3     // Catch: java.lang.Throwable -> L2c
            boolean r4 = r3.aT(r6)     // Catch: java.lang.Throwable -> L2c
            if (r4 == 0) goto Le
            boolean r4 = r3.isOver()     // Catch: java.lang.Throwable -> L2c
            if (r4 != 0) goto Le
            r0.add(r3)     // Catch: java.lang.Throwable -> L2c
            goto Le
        L2a:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L2c
            return r0
        L2c:
            r6 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L2c
            throw r6
    }

    final void b(com.kwad.framework.filedownloader.a.a r2) {
            r1 = this;
            com.kwad.framework.filedownloader.a r0 = r2.tf()
            boolean r0 = r0.sQ()
            if (r0 != 0) goto Ld
            r2.ti()
        Ld:
            com.kwad.framework.filedownloader.x$a r0 = r2.tg()
            com.kwad.framework.filedownloader.t r0 = r0.tv()
            boolean r0 = r0.tI()
            if (r0 == 0) goto L1e
            r1.c(r2)
        L1e:
            return
    }

    final void c(com.kwad.framework.filedownloader.a.a r6) {
            r5 = this;
            boolean r0 = r6.tj()
            if (r0 == 0) goto L7
            return
        L7:
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r0 = r5.aaX
            monitor-enter(r0)
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r1 = r5.aaX     // Catch: java.lang.Throwable -> L51
            boolean r1 = r1.contains(r6)     // Catch: java.lang.Throwable -> L51
            r2 = 0
            r3 = 1
            if (r1 == 0) goto L1e
            java.lang.String r1 = "already has %s"
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L51
            r3[r2] = r6     // Catch: java.lang.Throwable -> L51
            com.kwad.framework.filedownloader.f.d.d(r5, r1, r3)     // Catch: java.lang.Throwable -> L51
            goto L4f
        L1e:
            r6.tk()     // Catch: java.lang.Throwable -> L51
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r1 = r5.aaX     // Catch: java.lang.Throwable -> L51
            r1.add(r6)     // Catch: java.lang.Throwable -> L51
            boolean r1 = com.kwad.framework.filedownloader.f.d.aeI     // Catch: java.lang.Throwable -> L51
            if (r1 == 0) goto L4f
            java.lang.String r1 = "add list in all %s %d %d"
            r4 = 3
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L51
            r4[r2] = r6     // Catch: java.lang.Throwable -> L51
            com.kwad.framework.filedownloader.a r6 = r6.tf()     // Catch: java.lang.Throwable -> L51
            byte r6 = r6.sX()     // Catch: java.lang.Throwable -> L51
            java.lang.Byte r6 = java.lang.Byte.valueOf(r6)     // Catch: java.lang.Throwable -> L51
            r4[r3] = r6     // Catch: java.lang.Throwable -> L51
            r6 = 2
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r2 = r5.aaX     // Catch: java.lang.Throwable -> L51
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L51
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L51
            r4[r6] = r2     // Catch: java.lang.Throwable -> L51
            com.kwad.framework.filedownloader.f.d.e(r5, r1, r4)     // Catch: java.lang.Throwable -> L51
        L4f:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L51
            return
        L51:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L51
            throw r6
    }

    final void l(java.util.List<com.kwad.framework.filedownloader.a.a> r5) {
            r4 = this;
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r0 = r4.aaX
            monitor-enter(r0)
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r1 = r4.aaX     // Catch: java.lang.Throwable -> L26
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L26
        L9:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L26
            if (r2 == 0) goto L1f
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L26
            com.kwad.framework.filedownloader.a$a r2 = (com.kwad.framework.filedownloader.a.a) r2     // Catch: java.lang.Throwable -> L26
            boolean r3 = r5.contains(r2)     // Catch: java.lang.Throwable -> L26
            if (r3 != 0) goto L9
            r5.add(r2)     // Catch: java.lang.Throwable -> L26
            goto L9
        L1f:
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r5 = r4.aaX     // Catch: java.lang.Throwable -> L26
            r5.clear()     // Catch: java.lang.Throwable -> L26
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L26
            return
        L26:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L26
            throw r5
    }

    final int size() {
            r1 = this;
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r0 = r1.aaX
            int r0 = r0.size()
            return r0
    }
}

package com.tkay.expressad.exoplayer.k;

public final class v {
    private final java.lang.Object a;
    private final java.util.PriorityQueue<java.lang.Integer> b;
    private int c;

    public static class a extends java.io.IOException {
        public a(int r3, int r4) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "Priority too low [priority="
                r0.<init>(r1)
                r0.append(r3)
                java.lang.String r3 = ", highest="
                r0.append(r3)
                r0.append(r4)
                java.lang.String r3 = "]"
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                r2.<init>(r3)
                return
        }
    }

    public v() {
            r3 = this;
            r3.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r3.a = r0
            java.util.PriorityQueue r0 = new java.util.PriorityQueue
            java.util.Comparator r1 = java.util.Collections.reverseOrder()
            r2 = 10
            r0.<init>(r2, r1)
            r3.b = r0
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            r3.c = r0
            return
    }

    private boolean b(int r3) {
            r2 = this;
            java.lang.Object r0 = r2.a
            monitor-enter(r0)
            int r1 = r2.c     // Catch: java.lang.Throwable -> Lc
            if (r1 != r3) goto L9
            r3 = 1
            goto La
        L9:
            r3 = 0
        La:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
            return r3
        Lc:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public final void a() {
            r4 = this;
            java.lang.Object r0 = r4.a
            monitor-enter(r0)
            java.util.PriorityQueue<java.lang.Integer> r1 = r4.b     // Catch: java.lang.Throwable -> L17
            r2 = 0
            java.lang.Integer r3 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L17
            r1.add(r3)     // Catch: java.lang.Throwable -> L17
            int r1 = r4.c     // Catch: java.lang.Throwable -> L17
            int r1 = java.lang.Math.max(r1, r2)     // Catch: java.lang.Throwable -> L17
            r4.c = r1     // Catch: java.lang.Throwable -> L17
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            return
        L17:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public final void a(int r4) {
            r3 = this;
            java.lang.Object r0 = r3.a
            monitor-enter(r0)
            int r1 = r3.c     // Catch: java.lang.Throwable -> L11
            if (r1 != r4) goto L9
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
            return
        L9:
            com.tkay.expressad.exoplayer.k.v$a r1 = new com.tkay.expressad.exoplayer.k.v$a     // Catch: java.lang.Throwable -> L11
            int r2 = r3.c     // Catch: java.lang.Throwable -> L11
            r1.<init>(r4, r2)     // Catch: java.lang.Throwable -> L11
            throw r1     // Catch: java.lang.Throwable -> L11
        L11:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    public final void b() {
            r2 = this;
            java.lang.Object r0 = r2.a
            monitor-enter(r0)
        L3:
            int r1 = r2.c     // Catch: java.lang.Throwable -> Lf
            if (r1 == 0) goto Ld
            java.lang.Object r1 = r2.a     // Catch: java.lang.Throwable -> Lf
            r1.wait()     // Catch: java.lang.Throwable -> Lf
            goto L3
        Ld:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lf
            return
        Lf:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public final void c() {
            r3 = this;
            java.lang.Object r0 = r3.a
            monitor-enter(r0)
            java.util.PriorityQueue<java.lang.Integer> r1 = r3.b     // Catch: java.lang.Throwable -> L2d
            r2 = 0
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L2d
            r1.remove(r2)     // Catch: java.lang.Throwable -> L2d
            java.util.PriorityQueue<java.lang.Integer> r1 = r3.b     // Catch: java.lang.Throwable -> L2d
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> L2d
            if (r1 == 0) goto L18
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            goto L24
        L18:
            java.util.PriorityQueue<java.lang.Integer> r1 = r3.b     // Catch: java.lang.Throwable -> L2d
            java.lang.Object r1 = r1.peek()     // Catch: java.lang.Throwable -> L2d
            java.lang.Integer r1 = (java.lang.Integer) r1     // Catch: java.lang.Throwable -> L2d
            int r1 = r1.intValue()     // Catch: java.lang.Throwable -> L2d
        L24:
            r3.c = r1     // Catch: java.lang.Throwable -> L2d
            java.lang.Object r1 = r3.a     // Catch: java.lang.Throwable -> L2d
            r1.notifyAll()     // Catch: java.lang.Throwable -> L2d
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2d
            return
        L2d:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }
}

package com.xiaomi.push;

public class bl {
    private java.util.LinkedList<com.xiaomi.push.bl.a> a;

    public class a {
        private static final com.xiaomi.push.bl a = null;
        public int a;
        public java.lang.Object a;
        public java.lang.String a;

        static {
                com.xiaomi.push.bl r0 = new com.xiaomi.push.bl
                r0.<init>()
                com.xiaomi.push.bl.a.a = r0
                return
        }

        a(int r1, java.lang.Object r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.a = r2
                return
        }

        static com.xiaomi.push.bl a() {
                com.xiaomi.push.bl r0 = com.xiaomi.push.bl.a.a
                return r0
        }
    }

    public bl() {
            r1 = this;
            r1.<init>()
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r1.a = r0
            return
    }

    public static com.xiaomi.push.bl a() {
            com.xiaomi.push.bl r0 = com.xiaomi.push.bl.a.a()
            return r0
    }

    private void a() {
            r2 = this;
            java.util.LinkedList<com.xiaomi.push.bl$a> r0 = r2.a
            int r0 = r0.size()
            r1 = 100
            if (r0 <= r1) goto Lf
            java.util.LinkedList<com.xiaomi.push.bl$a> r0 = r2.a
            r0.removeFirst()
        Lf:
            return
    }

    public synchronized int a() {
            r1 = this;
            monitor-enter(r1)
            java.util.LinkedList<com.xiaomi.push.bl$a> r0 = r1.a     // Catch: java.lang.Throwable -> L9
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)
            return r0
        L9:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized java.util.LinkedList<com.xiaomi.push.bl.a> a() {
            r2 = this;
            monitor-enter(r2)
            java.util.LinkedList<com.xiaomi.push.bl$a> r0 = r2.a     // Catch: java.lang.Throwable -> Lc
            java.util.LinkedList r1 = new java.util.LinkedList     // Catch: java.lang.Throwable -> Lc
            r1.<init>()     // Catch: java.lang.Throwable -> Lc
            r2.a = r1     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r2)
            return r0
        Lc:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public synchronized void a(java.lang.Object r4) {
            r3 = this;
            monitor-enter(r3)
            java.util.LinkedList<com.xiaomi.push.bl$a> r0 = r3.a     // Catch: java.lang.Throwable -> L11
            com.xiaomi.push.bl$a r1 = new com.xiaomi.push.bl$a     // Catch: java.lang.Throwable -> L11
            r2 = 0
            r1.<init>(r2, r4)     // Catch: java.lang.Throwable -> L11
            r0.add(r1)     // Catch: java.lang.Throwable -> L11
            r3.a()     // Catch: java.lang.Throwable -> L11
            monitor-exit(r3)
            return
        L11:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }
}

package com.xiaomi.push;

public abstract class fw {
    private static final java.util.concurrent.atomic.AtomicInteger a = null;
    public static boolean a;
    protected int a;
    protected long a;
    protected com.xiaomi.push.fx a;
    protected com.xiaomi.push.gi a;
    protected com.xiaomi.push.service.XMPushService a;
    protected java.lang.String a;
    private final java.util.Collection<com.xiaomi.push.fz> a;
    private java.util.LinkedList<android.util.Pair<java.lang.Integer, java.lang.Long>> a;
    protected final java.util.Map<com.xiaomi.push.gb, com.xiaomi.push.fw.a> a;
    protected final int b;
    protected volatile long b;
    protected java.lang.String b;
    protected final java.util.Map<com.xiaomi.push.gb, com.xiaomi.push.fw.a> b;
    private int c;
    protected volatile long c;
    protected long d;
    private long e;

    public class a {
        private com.xiaomi.push.gb a;
        private com.xiaomi.push.gj a;

        public a(com.xiaomi.push.gb r1, com.xiaomi.push.gj r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.a = r2
                return
        }

        public void a(com.xiaomi.push.fl r2) {
                r1 = this;
                com.xiaomi.push.gb r0 = r1.a
                r0.a(r2)
                return
        }

        public void a(com.xiaomi.push.gn r2) {
                r1 = this;
                com.xiaomi.push.gj r0 = r1.a
                if (r0 == 0) goto La
                boolean r0 = r0.a(r2)
                if (r0 == 0) goto Lf
            La:
                com.xiaomi.push.gb r0 = r1.a
                r0.a(r2)
            Lf:
                return
        }
    }

    static {
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r1 = 0
            r0.<init>(r1)
            com.xiaomi.push.fw.a = r0
            com.xiaomi.push.fw.a = r1
            java.lang.String r0 = "smack.debugEnabled"
            boolean r0 = java.lang.Boolean.getBoolean(r0)     // Catch: java.lang.Exception -> L12
            com.xiaomi.push.fw.a = r0     // Catch: java.lang.Exception -> L12
        L12:
            com.xiaomi.push.gc.a()
            return
    }

    protected fw(com.xiaomi.push.service.XMPushService r4, com.xiaomi.push.fx r5) {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.a = r0
            r0 = -1
            r3.a = r0
            r0 = 0
            r3.b = r0
            r3.c = r0
            java.util.LinkedList r2 = new java.util.LinkedList
            r2.<init>()
            r3.a = r2
            java.util.concurrent.CopyOnWriteArrayList r2 = new java.util.concurrent.CopyOnWriteArrayList
            r2.<init>()
            r3.a = r2
            java.util.concurrent.ConcurrentHashMap r2 = new java.util.concurrent.ConcurrentHashMap
            r2.<init>()
            r3.a = r2
            java.util.concurrent.ConcurrentHashMap r2 = new java.util.concurrent.ConcurrentHashMap
            r2.<init>()
            r3.b = r2
            r2 = 0
            r3.a = r2
            java.lang.String r2 = ""
            r3.a = r2
            r3.b = r2
            r2 = 2
            r3.c = r2
            java.util.concurrent.atomic.AtomicInteger r2 = com.xiaomi.push.fw.a
            int r2 = r2.getAndIncrement()
            r3.b = r2
            r3.e = r0
            r3.d = r0
            r3.a = r5
            r3.a = r4
            r3.b()
            return
    }

    private java.lang.String a(int r2) {
            r1 = this;
            r0 = 1
            if (r2 != r0) goto L6
            java.lang.String r2 = "connected"
            return r2
        L6:
            if (r2 != 0) goto Lb
            java.lang.String r2 = "connecting"
            return r2
        Lb:
            r0 = 2
            if (r2 != r0) goto L11
            java.lang.String r2 = "disconnected"
            return r2
        L11:
            java.lang.String r2 = "unknown"
            return r2
    }

    private void a(int r6) {
            r5 = this;
            java.util.LinkedList<android.util.Pair<java.lang.Integer, java.lang.Long>> r0 = r5.a
            monitor-enter(r0)
            r1 = 1
            if (r6 != r1) goto Lc
            java.util.LinkedList<android.util.Pair<java.lang.Integer, java.lang.Long>> r6 = r5.a     // Catch: java.lang.Throwable -> L33
            r6.clear()     // Catch: java.lang.Throwable -> L33
            goto L31
        Lc:
            java.util.LinkedList<android.util.Pair<java.lang.Integer, java.lang.Long>> r1 = r5.a     // Catch: java.lang.Throwable -> L33
            android.util.Pair r2 = new android.util.Pair     // Catch: java.lang.Throwable -> L33
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L33
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L33
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L33
            r2.<init>(r6, r3)     // Catch: java.lang.Throwable -> L33
            r1.add(r2)     // Catch: java.lang.Throwable -> L33
            java.util.LinkedList<android.util.Pair<java.lang.Integer, java.lang.Long>> r6 = r5.a     // Catch: java.lang.Throwable -> L33
            int r6 = r6.size()     // Catch: java.lang.Throwable -> L33
            r1 = 6
            if (r6 <= r1) goto L31
            java.util.LinkedList<android.util.Pair<java.lang.Integer, java.lang.Long>> r6 = r5.a     // Catch: java.lang.Throwable -> L33
            r1 = 0
            r6.remove(r1)     // Catch: java.lang.Throwable -> L33
        L31:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L33
            return
        L33:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L33
            throw r6
    }

    public int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public long a() {
            r2 = this;
            long r0 = r2.c
            return r0
    }

    public com.xiaomi.push.fx a() {
            r1 = this;
            com.xiaomi.push.fx r0 = r1.a
            return r0
    }

    public java.lang.String a() {
            r1 = this;
            com.xiaomi.push.fx r0 = r1.a
            java.lang.String r0 = r0.c()
            return r0
    }

    protected java.util.Map<com.xiaomi.push.gb, com.xiaomi.push.fw.a> a() {
            r1 = this;
            java.util.Map<com.xiaomi.push.gb, com.xiaomi.push.fw$a> r0 = r1.a
            return r0
    }

    public void a(int r6, int r7, java.lang.Exception r8) {
            r5 = this;
            int r0 = r5.c
            r1 = 2
            r2 = 1
            if (r6 == r0) goto L25
            r3 = 3
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r4 = 0
            java.lang.String r0 = r5.a(r0)
            r3[r4] = r0
            java.lang.String r0 = r5.a(r6)
            r3[r2] = r0
            java.lang.String r0 = com.xiaomi.push.service.bk.a(r7)
            r3[r1] = r0
            java.lang.String r0 = "update the connection status. %1$s -> %2$s : %3$s "
            java.lang.String r0 = java.lang.String.format(r0, r3)
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L25:
            com.xiaomi.push.service.XMPushService r0 = r5.a
            boolean r0 = com.xiaomi.push.bj.b(r0)
            if (r0 == 0) goto L30
            r5.a(r6)
        L30:
            r0 = 10
            if (r6 != r2) goto L5a
            com.xiaomi.push.service.XMPushService r7 = r5.a
            r7.a(r0)
            int r7 = r5.c
            if (r7 == 0) goto L42
            java.lang.String r7 = "try set connected while not connecting."
            com.xiaomi.channel.commonutils.logger.b.a(r7)
        L42:
            r5.c = r6
            java.util.Collection<com.xiaomi.push.fz> r6 = r5.a
            java.util.Iterator r6 = r6.iterator()
        L4a:
            boolean r7 = r6.hasNext()
            if (r7 == 0) goto Lc3
            java.lang.Object r7 = r6.next()
            com.xiaomi.push.fz r7 = (com.xiaomi.push.fz) r7
            r7.b(r5)
            goto L4a
        L5a:
            if (r6 != 0) goto L7d
            int r7 = r5.c
            if (r7 == r1) goto L65
            java.lang.String r7 = "try set connecting while not disconnected."
            com.xiaomi.channel.commonutils.logger.b.a(r7)
        L65:
            r5.c = r6
            java.util.Collection<com.xiaomi.push.fz> r6 = r5.a
            java.util.Iterator r6 = r6.iterator()
        L6d:
            boolean r7 = r6.hasNext()
            if (r7 == 0) goto Lc3
            java.lang.Object r7 = r6.next()
            com.xiaomi.push.fz r7 = (com.xiaomi.push.fz) r7
            r7.a(r5)
            goto L6d
        L7d:
            if (r6 != r1) goto Lc3
            com.xiaomi.push.service.XMPushService r1 = r5.a
            r1.a(r0)
            int r0 = r5.c
            if (r0 != 0) goto La9
            java.util.Collection<com.xiaomi.push.fz> r7 = r5.a
            java.util.Iterator r7 = r7.iterator()
        L8e:
            boolean r0 = r7.hasNext()
            if (r0 == 0) goto Lc1
            java.lang.Object r0 = r7.next()
            com.xiaomi.push.fz r0 = (com.xiaomi.push.fz) r0
            if (r8 != 0) goto La4
            java.util.concurrent.CancellationException r1 = new java.util.concurrent.CancellationException
            java.lang.String r2 = "disconnect while connecting"
            r1.<init>(r2)
            goto La5
        La4:
            r1 = r8
        La5:
            r0.a(r5, r1)
            goto L8e
        La9:
            if (r0 != r2) goto Lc1
            java.util.Collection<com.xiaomi.push.fz> r0 = r5.a
            java.util.Iterator r0 = r0.iterator()
        Lb1:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto Lc1
            java.lang.Object r1 = r0.next()
            com.xiaomi.push.fz r1 = (com.xiaomi.push.fz) r1
            r1.a(r5, r7, r8)
            goto Lb1
        Lc1:
            r5.c = r6
        Lc3:
            return
    }

    public void a(com.xiaomi.push.fz r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.util.Collection<com.xiaomi.push.fz> r0 = r1.a
            boolean r0 = r0.contains(r2)
            if (r0 != 0) goto L10
            java.util.Collection<com.xiaomi.push.fz> r0 = r1.a
            r0.add(r2)
        L10:
            return
    }

    public void a(com.xiaomi.push.gb r2, com.xiaomi.push.gj r3) {
            r1 = this;
            if (r2 == 0) goto Ld
            com.xiaomi.push.fw$a r0 = new com.xiaomi.push.fw$a
            r0.<init>(r2, r3)
            java.util.Map<com.xiaomi.push.gb, com.xiaomi.push.fw$a> r3 = r1.a
            r3.put(r2, r0)
            return
        Ld:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r3 = "Packet listener is null."
            r2.<init>(r3)
            throw r2
    }

    public abstract void a(com.xiaomi.push.gn r1);

    public abstract void a(com.xiaomi.push.service.bg.b r1);

    public synchronized void a(java.lang.String r5) {
            r4 = this;
            monitor-enter(r4)
            int r0 = r4.c     // Catch: java.lang.Throwable -> L33
            if (r0 != 0) goto L2c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L33
            r0.<init>()     // Catch: java.lang.Throwable -> L33
            java.lang.String r1 = "setChallenge hash = "
            r0.append(r1)     // Catch: java.lang.Throwable -> L33
            java.lang.String r1 = com.xiaomi.push.bo.a(r5)     // Catch: java.lang.Throwable -> L33
            r2 = 8
            r3 = 0
            java.lang.String r1 = r1.substring(r3, r2)     // Catch: java.lang.Throwable -> L33
            r0.append(r1)     // Catch: java.lang.Throwable -> L33
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L33
            com.xiaomi.channel.commonutils.logger.b.a(r0)     // Catch: java.lang.Throwable -> L33
            r4.a = r5     // Catch: java.lang.Throwable -> L33
            r5 = 1
            r0 = 0
            r4.a(r5, r3, r0)     // Catch: java.lang.Throwable -> L33
            goto L31
        L2c:
            java.lang.String r5 = "ignore setChallenge because connection was disconnected"
            com.xiaomi.channel.commonutils.logger.b.a(r5)     // Catch: java.lang.Throwable -> L33
        L31:
            monitor-exit(r4)
            return
        L33:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public abstract void a(java.lang.String r1, java.lang.String r2);

    public abstract void a(com.xiaomi.push.fl[] r1);

    public boolean a() {
            r1 = this;
            r0 = 0
            return r0
    }

    public synchronized boolean a(long r3) {
            r2 = this;
            monitor-enter(r2)
            long r0 = r2.e     // Catch: java.lang.Throwable -> Lc
            int r3 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r3 < 0) goto L9
            r3 = 1
            goto La
        L9:
            r3 = 0
        La:
            monitor-exit(r2)
            return r3
        Lc:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public int b() {
            r1 = this;
            int r0 = r1.c
            return r0
    }

    public java.lang.String b() {
            r1 = this;
            com.xiaomi.push.fx r0 = r1.a
            java.lang.String r0 = r0.b()
            return r0
    }

    protected void b() {
            r6 = this;
            com.xiaomi.push.fx r0 = r6.a
            boolean r0 = r0.a()
            if (r0 == 0) goto L56
            com.xiaomi.push.gi r0 = r6.a
            if (r0 != 0) goto L56
            r0 = 0
            java.lang.String r1 = "smack.debuggerClass"
            java.lang.String r1 = java.lang.System.getProperty(r1)     // Catch: java.lang.Throwable -> L14
            goto L15
        L14:
            r1 = r0
        L15:
            if (r1 == 0) goto L20
            java.lang.Class r0 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L1c
            goto L20
        L1c:
            r1 = move-exception
            r1.printStackTrace()
        L20:
            if (r0 != 0) goto L2a
            com.xiaomi.push.fu r0 = new com.xiaomi.push.fu
            r0.<init>(r6)
            r6.a = r0
            goto L56
        L2a:
            r1 = 3
            java.lang.Class[] r1 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L4d
            java.lang.Class<com.xiaomi.push.fw> r2 = com.xiaomi.push.fw.class
            r3 = 0
            r1[r3] = r2     // Catch: java.lang.Exception -> L4d
            java.lang.Class<java.io.Writer> r2 = java.io.Writer.class
            r4 = 1
            r1[r4] = r2     // Catch: java.lang.Exception -> L4d
            r2 = 2
            java.lang.Class<java.io.Reader> r5 = java.io.Reader.class
            r1[r2] = r5     // Catch: java.lang.Exception -> L4d
            java.lang.reflect.Constructor r0 = r0.getConstructor(r1)     // Catch: java.lang.Exception -> L4d
            java.lang.Object[] r1 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L4d
            r1[r3] = r6     // Catch: java.lang.Exception -> L4d
            java.lang.Object r0 = r0.newInstance(r1)     // Catch: java.lang.Exception -> L4d
            com.xiaomi.push.gi r0 = (com.xiaomi.push.gi) r0     // Catch: java.lang.Exception -> L4d
            r6.a = r0     // Catch: java.lang.Exception -> L4d
            goto L56
        L4d:
            r0 = move-exception
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "Can't initialize the configured debugger!"
            r1.<init>(r2, r0)
            throw r1
        L56:
            return
    }

    public abstract void b(int r1, java.lang.Exception r2);

    public abstract void b(com.xiaomi.push.fl r1);

    public void b(com.xiaomi.push.fz r2) {
            r1 = this;
            java.util.Collection<com.xiaomi.push.fz> r0 = r1.a
            r0.remove(r2)
            return
    }

    public void b(com.xiaomi.push.gb r2, com.xiaomi.push.gj r3) {
            r1 = this;
            if (r2 == 0) goto Ld
            com.xiaomi.push.fw$a r0 = new com.xiaomi.push.fw$a
            r0.<init>(r2, r3)
            java.util.Map<com.xiaomi.push.gb, com.xiaomi.push.fw$a> r3 = r1.b
            r3.put(r2, r0)
            return
        Ld:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r3 = "Packet listener is null."
            r2.<init>(r3)
            throw r2
    }

    public abstract void b(boolean r1);

    public boolean b() {
            r1 = this;
            int r0 = r1.c
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public synchronized void c() {
            r2 = this;
            monitor-enter(r2)
            long r0 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L9
            r2.e = r0     // Catch: java.lang.Throwable -> L9
            monitor-exit(r2)
            return
        L9:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public boolean c() {
            r2 = this;
            int r0 = r2.c
            r1 = 1
            if (r0 != r1) goto L6
            goto L7
        L6:
            r1 = 0
        L7:
            return r1
    }

    public void d() {
            r2 = this;
            java.util.LinkedList<android.util.Pair<java.lang.Integer, java.lang.Long>> r0 = r2.a
            monitor-enter(r0)
            java.util.LinkedList<android.util.Pair<java.lang.Integer, java.lang.Long>> r1 = r2.a     // Catch: java.lang.Throwable -> La
            r1.clear()     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            return
        La:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            throw r1
    }
}

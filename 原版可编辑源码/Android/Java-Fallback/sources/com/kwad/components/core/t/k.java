package com.kwad.components.core.t;

public class k {
    private static final java.lang.String Rp = null;
    private static volatile com.kwad.components.core.t.k Rq;
    public static final java.lang.String TAG = null;
    private boolean Rr;
    private com.kwad.sdk.core.config.item.o.a Rs;

    static {
            java.lang.Class<com.kwad.components.core.t.k> r0 = com.kwad.components.core.t.k.class
            java.lang.String r1 = r0.getSimpleName()
            com.kwad.components.core.t.k.TAG = r1
            java.lang.String r0 = r0.getName()
            com.kwad.components.core.t.k.Rp = r0
            return
    }

    private k() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.Rr = r0
            return
    }

    private static void B(long r4) {
            java.lang.String r0 = com.kwad.components.core.t.k.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "checkBySuper end:"
            r1.<init>(r2)
            long r2 = android.os.SystemClock.elapsedRealtime()
            long r2 = r2 - r4
            r1.append(r2)
            java.lang.String r4 = r1.toString()
            com.kwad.sdk.core.e.c.d(r0, r4)
            return
    }

    private static boolean a(java.util.List<java.lang.String> r6, java.lang.Class r7) {
            r0 = 0
            r1 = r0
        L2:
            if (r7 == 0) goto L34
            java.lang.String r2 = r7.getName()
            java.lang.String r3 = "java.lang.Object"
            boolean r2 = android.text.TextUtils.equals(r2, r3)
            if (r2 != 0) goto L34
            java.util.Iterator r2 = r6.iterator()
        L14:
            boolean r3 = r2.hasNext()
            r4 = 1
            if (r3 == 0) goto L2c
            java.lang.Object r3 = r2.next()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.String r5 = r7.getName()
            boolean r3 = r5.contains(r3)
            if (r3 == 0) goto L14
            return r4
        L2c:
            java.lang.Class r7 = r7.getSuperclass()
            int r1 = r1 + r4
            r2 = 4
            if (r1 < r2) goto L2
        L34:
            return r0
    }

    private boolean a(java.util.List<java.lang.String> r7, java.util.List<java.lang.String> r8) {
            r6 = this;
            r0 = 0
            if (r7 == 0) goto L3d
            int r1 = r7.size()
            if (r1 > 0) goto La
            goto L3d
        La:
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            java.lang.StackTraceElement[] r1 = r1.getStackTrace()
            int r2 = r1.length
        L13:
            if (r0 >= r2) goto L38
            r3 = r1[r0]
            java.lang.String r3 = r3.getClassName()
            if (r3 == 0) goto L35
            java.util.Iterator r4 = r7.iterator()
        L21:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L35
            java.lang.Object r5 = r4.next()
            java.lang.String r5 = (java.lang.String) r5
            boolean r5 = r3.contains(r5)
            if (r5 == 0) goto L21
            r7 = 1
            return r7
        L35:
            int r0 = r0 + 1
            goto L13
        L38:
            boolean r7 = r6.a(r8, r1)
            return r7
        L3d:
            return r0
    }

    private boolean a(java.util.List<java.lang.String> r10, java.lang.StackTraceElement[] r11) {
            r9 = this;
            java.lang.String r0 = "$"
            r1 = 0
            if (r10 == 0) goto L74
            boolean r2 = r10.isEmpty()
            if (r2 == 0) goto Lc
            goto L74
        Lc:
            long r2 = android.os.SystemClock.elapsedRealtime()
            java.lang.String r4 = com.kwad.components.core.t.k.TAG
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r6 = "checkBySuper begin:"
            r5.<init>(r6)
            r5.append(r2)
            java.lang.String r5 = r5.toString()
            com.kwad.sdk.core.e.c.d(r4, r5)
            int r4 = r11.length
            r5 = r1
        L25:
            if (r5 >= r4) goto L71
            r6 = r11[r5]
            java.lang.String r6 = r6.getClassName()
            if (r6 == 0) goto L6e
            boolean r7 = ax(r6)
            if (r7 == 0) goto L6e
            boolean r7 = ay(r6)
            if (r7 == 0) goto L6e
            r7 = 1
            java.lang.Class r8 = java.lang.Class.forName(r6)     // Catch: java.lang.Throwable -> L4e
            java.lang.Class r8 = r8.getSuperclass()     // Catch: java.lang.Throwable -> L4e
            boolean r8 = a(r10, r8)     // Catch: java.lang.Throwable -> L4e
            if (r8 == 0) goto L4e
            B(r2)     // Catch: java.lang.Throwable -> L4e
            return r7
        L4e:
            boolean r8 = r6.contains(r0)     // Catch: java.lang.Throwable -> L6e
            if (r8 == 0) goto L6e
            int r8 = r6.lastIndexOf(r0)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r6 = r6.substring(r1, r8)     // Catch: java.lang.Throwable -> L6e
            java.lang.Class r6 = java.lang.Class.forName(r6)     // Catch: java.lang.Throwable -> L6e
            java.lang.Class r6 = r6.getSuperclass()     // Catch: java.lang.Throwable -> L6e
            boolean r6 = a(r10, r6)     // Catch: java.lang.Throwable -> L6e
            if (r6 == 0) goto L6e
            B(r2)     // Catch: java.lang.Throwable -> L6e
            return r7
        L6e:
            int r5 = r5 + 1
            goto L25
        L71:
            B(r2)
        L74:
            return r1
    }

    private static boolean ax(java.lang.String r1) {
            java.lang.String r0 = "android"
            boolean r0 = r1.startsWith(r0)
            if (r0 != 0) goto L32
            java.lang.String r0 = "java"
            boolean r0 = r1.startsWith(r0)
            if (r0 != 0) goto L32
            java.lang.String r0 = "dalvik"
            boolean r0 = r1.startsWith(r0)
            if (r0 != 0) goto L32
            java.lang.String r0 = "com.android"
            boolean r0 = r1.startsWith(r0)
            if (r0 != 0) goto L32
            java.lang.String r0 = com.kwad.components.core.t.k.Rp
            boolean r0 = r1.contains(r0)
            if (r0 != 0) goto L32
            java.lang.String r0 = "androidx"
            boolean r1 = r1.startsWith(r0)
            if (r1 == 0) goto L32
            r1 = 1
            return r1
        L32:
            r1 = 0
            return r1
    }

    private static boolean ay(java.lang.String r1) {
            java.lang.String r0 = "com.kwad"
            boolean r1 = r1.startsWith(r0)
            if (r1 != 0) goto La
            r1 = 1
            return r1
        La:
            r1 = 0
            return r1
    }

    private static boolean az(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Throwable -> L10
            if (r2 == 0) goto L10
            r2 = 1
            return r2
        L10:
            return r1
    }

    public static com.kwad.components.core.t.k qo() {
            com.kwad.components.core.t.k r0 = com.kwad.components.core.t.k.Rq
            if (r0 != 0) goto L17
            java.lang.Class<com.kwad.components.core.t.k> r0 = com.kwad.components.core.t.k.class
            monitor-enter(r0)
            com.kwad.components.core.t.k r1 = com.kwad.components.core.t.k.Rq     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.components.core.t.k r1 = new com.kwad.components.core.t.k     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.kwad.components.core.t.k.Rq = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.kwad.components.core.t.k r0 = com.kwad.components.core.t.k.Rq
            return r0
    }

    private void qq() {
            r4 = this;
            com.kwad.sdk.core.config.item.o$a r0 = r4.Rs
            if (r0 != 0) goto L5
            return
        L5:
            boolean r1 = r4.Rr
            if (r1 != 0) goto L2e
            java.util.List<java.lang.String> r0 = r0.amN
            int r0 = r0.size()
            if (r0 <= 0) goto L2e
            com.kwad.sdk.core.config.item.o$a r0 = r4.Rs
            java.util.List<java.lang.String> r0 = r0.amN
            java.util.Iterator r0 = r0.iterator()
        L19:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2e
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            boolean r1 = az(r1)
            r4.Rr = r1
            if (r1 != 0) goto L2e
            goto L19
        L2e:
            boolean r0 = r4.Rr
            if (r0 != 0) goto L33
            return
        L33:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.kwad.sdk.core.config.item.o$a r1 = r4.Rs
            java.util.Map<java.lang.Integer, java.lang.String> r1 = r1.amK
            int r1 = r1.size()
            if (r1 <= 0) goto L6e
            com.kwad.sdk.core.config.item.o$a r1 = r4.Rs
            java.util.Map<java.lang.Integer, java.lang.String> r1 = r1.amK
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        L4e:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L6e
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getValue()
            java.lang.String r3 = (java.lang.String) r3
            boolean r3 = az(r3)
            if (r3 == 0) goto L4e
            java.lang.Object r2 = r2.getKey()
            r0.add(r2)
            goto L4e
        L6e:
            com.kwad.sdk.core.config.item.o$a r1 = r4.Rs
            java.util.List<java.lang.String> r1 = r1.amL
            com.kwad.sdk.core.config.item.o$a r2 = r4.Rs
            java.util.List<java.lang.String> r2 = r2.amM
            boolean r1 = r4.a(r1, r2)
            com.kwad.components.core.o.a r2 = com.kwad.components.core.o.a.pA()
            r2.a(r1, r0)
            return
    }

    public final boolean a(com.kwad.sdk.internal.api.SceneImpl r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = r2.Rr
            if (r0 == 0) goto L11
            com.kwad.sdk.core.config.item.o$a r0 = r2.Rs
            java.util.List<java.lang.String> r0 = r0.amL
            com.kwad.sdk.core.config.item.o$a r1 = r2.Rs
            java.util.List<java.lang.String> r1 = r1.amM
            boolean r0 = r2.a(r0, r1)
            goto L12
        L11:
            r0 = 0
        L12:
            com.kwad.components.core.o.a r1 = com.kwad.components.core.o.a.pA()
            r1.a(r3, r0, r4)
            return r0
    }

    public final void init() {
            r1 = this;
            com.kwad.sdk.core.config.item.o r0 = com.kwad.sdk.core.config.c.akS
            java.lang.Object r0 = com.kwad.sdk.core.config.d.b(r0)
            com.kwad.sdk.core.config.item.o$a r0 = (com.kwad.sdk.core.config.item.o.a) r0
            r1.Rs = r0
            if (r0 == 0) goto Lf
            r1.qq()
        Lf:
            return
    }

    public final int qp() {
            r1 = this;
            com.kwad.sdk.core.config.item.o$a r0 = r1.Rs
            if (r0 == 0) goto L7
            int r0 = r0.amO
            return r0
        L7:
            r0 = 0
            return r0
    }
}

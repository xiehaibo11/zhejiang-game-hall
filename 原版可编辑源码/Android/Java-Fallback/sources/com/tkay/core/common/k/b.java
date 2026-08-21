package com.tkay.core.common.k;

public class b {
    private static volatile com.tkay.core.common.k.b b;
    private final java.lang.String a;
    private int c;
    private int d;
    private long e;
    private java.lang.String f;
    private java.lang.String g;
    private android.content.Context h;
    private java.io.File i;
    private java.util.concurrent.atomic.AtomicInteger j;
    private boolean k;
    private java.lang.String l;
    private com.tkay.core.common.h.k m;
    private com.tkay.core.common.h.a.c.a n;
    private java.lang.Object o;




    private b() {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "Agent"
            r2.a = r0
            r0 = 5
            r2.c = r0
            r0 = 10
            r2.d = r0
            r0 = 1800000(0x1b7740, double:8.89318E-318)
            r2.e = r0
            java.lang.String r0 = ""
            r2.f = r0
            r2.g = r0
            r1 = 0
            r2.k = r1
            r2.l = r0
            com.tkay.core.common.k.b$1 r0 = new com.tkay.core.common.k.b$1
            r0.<init>(r2)
            r2.m = r0
            com.tkay.core.common.k.b$2 r0 = new com.tkay.core.common.k.b$2
            r0.<init>(r2)
            r2.n = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r2.o = r0
            return
    }

    static android.content.Context a(com.tkay.core.common.k.b r0) {
            android.content.Context r0 = r0.h
            return r0
    }

    public static com.tkay.core.common.k.b a() {
            com.tkay.core.common.k.b r0 = com.tkay.core.common.k.b.b
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.k.b> r0 = com.tkay.core.common.k.b.class
            monitor-enter(r0)
            com.tkay.core.common.k.b r1 = com.tkay.core.common.k.b.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.k.b r1 = new com.tkay.core.common.k.b     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.k.b.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.core.common.k.b r0 = com.tkay.core.common.k.b.b
            return r0
    }

    private synchronized void a(int r7) {
            r6 = this;
            monitor-enter(r6)
            r0 = 0
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L70 java.lang.Error -> L7a java.lang.Throwable -> L84 java.lang.Exception -> L98
            java.lang.String r2 = r6.g     // Catch: java.lang.Throwable -> L70 java.lang.Error -> L7a java.lang.Throwable -> L84 java.lang.Exception -> L98
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L70 java.lang.Error -> L7a java.lang.Throwable -> L84 java.lang.Exception -> L98
            boolean r2 = r1.exists()     // Catch: java.lang.Throwable -> L70 java.lang.Error -> L7a java.lang.Throwable -> L84 java.lang.Exception -> L98
            if (r2 != 0) goto L12
            r1.createNewFile()     // Catch: java.lang.Throwable -> L70 java.lang.Error -> L7a java.lang.Throwable -> L84 java.lang.Exception -> L98
        L12:
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L70 java.lang.Error -> L7a java.lang.Throwable -> L84 java.lang.Exception -> L98
            java.io.FileReader r3 = new java.io.FileReader     // Catch: java.lang.Throwable -> L70 java.lang.Error -> L7a java.lang.Throwable -> L84 java.lang.Exception -> L98
            java.io.File r4 = r6.i     // Catch: java.lang.Throwable -> L70 java.lang.Error -> L7a java.lang.Throwable -> L84 java.lang.Exception -> L98
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L70 java.lang.Error -> L7a java.lang.Throwable -> L84 java.lang.Exception -> L98
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L70 java.lang.Error -> L7a java.lang.Throwable -> L84 java.lang.Exception -> L98
            java.io.FileWriter r0 = new java.io.FileWriter     // Catch: java.lang.Throwable -> L68 java.lang.Error -> L6a java.lang.Throwable -> L6c java.lang.Exception -> L6e
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L68 java.lang.Error -> L6a java.lang.Throwable -> L6c java.lang.Exception -> L6e
            r3 = 0
            r4 = r3
        L25:
            java.lang.String r5 = r2.readLine()     // Catch: java.lang.Throwable -> L68 java.lang.Error -> L6a java.lang.Throwable -> L6c java.lang.Exception -> L6e
            if (r5 == 0) goto L38
            int r4 = r4 + 1
            if (r4 <= r7) goto L25
            r0.append(r5)     // Catch: java.lang.Throwable -> L68 java.lang.Error -> L6a java.lang.Throwable -> L6c java.lang.Exception -> L6e
            java.lang.String r5 = "\n"
            r0.append(r5)     // Catch: java.lang.Throwable -> L68 java.lang.Error -> L6a java.lang.Throwable -> L6c java.lang.Exception -> L6e
            goto L25
        L38:
            r0.flush()     // Catch: java.lang.Throwable -> L68 java.lang.Error -> L6a java.lang.Throwable -> L6c java.lang.Exception -> L6e
            r0.close()     // Catch: java.lang.Throwable -> L68 java.lang.Error -> L6a java.lang.Throwable -> L6c java.lang.Exception -> L6e
            r2.close()     // Catch: java.lang.Throwable -> L68 java.lang.Error -> L6a java.lang.Throwable -> L6c java.lang.Exception -> L6e
            java.util.concurrent.atomic.AtomicInteger r0 = r6.j     // Catch: java.lang.Throwable -> L68 java.lang.Error -> L6a java.lang.Throwable -> L6c java.lang.Exception -> L6e
            java.util.concurrent.atomic.AtomicInteger r4 = r6.j     // Catch: java.lang.Throwable -> L68 java.lang.Error -> L6a java.lang.Throwable -> L6c java.lang.Exception -> L6e
            int r4 = r4.get()     // Catch: java.lang.Throwable -> L68 java.lang.Error -> L6a java.lang.Throwable -> L6c java.lang.Exception -> L6e
            int r4 = r4 - r7
            if (r4 >= 0) goto L4d
            goto L54
        L4d:
            java.util.concurrent.atomic.AtomicInteger r3 = r6.j     // Catch: java.lang.Throwable -> L68 java.lang.Error -> L6a java.lang.Throwable -> L6c java.lang.Exception -> L6e
            int r3 = r3.get()     // Catch: java.lang.Throwable -> L68 java.lang.Error -> L6a java.lang.Throwable -> L6c java.lang.Exception -> L6e
            int r3 = r3 - r7
        L54:
            r0.set(r3)     // Catch: java.lang.Throwable -> L68 java.lang.Error -> L6a java.lang.Throwable -> L6c java.lang.Exception -> L6e
            java.io.File r7 = r6.i     // Catch: java.lang.Throwable -> L68 java.lang.Error -> L6a java.lang.Throwable -> L6c java.lang.Exception -> L6e
            r7.delete()     // Catch: java.lang.Throwable -> L68 java.lang.Error -> L6a java.lang.Throwable -> L6c java.lang.Exception -> L6e
            java.io.File r7 = r6.i     // Catch: java.lang.Throwable -> L68 java.lang.Error -> L6a java.lang.Throwable -> L6c java.lang.Exception -> L6e
            r1.renameTo(r7)     // Catch: java.lang.Throwable -> L68 java.lang.Error -> L6a java.lang.Throwable -> L6c java.lang.Exception -> L6e
            r2.close()     // Catch: java.io.IOException -> L66 java.lang.Throwable -> L9e
            monitor-exit(r6)
            return
        L66:
            monitor-exit(r6)
            return
        L68:
            r0 = r2
            goto L70
        L6a:
            r0 = r2
            goto L7a
        L6c:
            r0 = r2
            goto L84
        L6e:
            r0 = r2
            goto L98
        L70:
            if (r0 == 0) goto L78
            r0.close()     // Catch: java.io.IOException -> L76 java.lang.Throwable -> L9e
            goto L78
        L76:
            monitor-exit(r6)
            return
        L78:
            monitor-exit(r6)
            return
        L7a:
            if (r0 == 0) goto L82
            r0.close()     // Catch: java.io.IOException -> L80 java.lang.Throwable -> L9e
            goto L82
        L80:
            monitor-exit(r6)
            return
        L82:
            monitor-exit(r6)
            return
        L84:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> L91
            if (r0 == 0) goto L8f
            r0.close()     // Catch: java.io.IOException -> L8d java.lang.Throwable -> L9e
            goto L8f
        L8d:
            monitor-exit(r6)
            return
        L8f:
            monitor-exit(r6)
            return
        L91:
            r7 = move-exception
            if (r0 == 0) goto L97
            r0.close()     // Catch: java.io.IOException -> L97 java.lang.Throwable -> L9e
        L97:
            throw r7     // Catch: java.lang.Throwable -> L9e
        L98:
            if (r0 == 0) goto La3
            r0.close()     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La1
            goto La3
        L9e:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
        La1:
            monitor-exit(r6)
            return
        La3:
            monitor-exit(r6)
            return
    }

    static void a(com.tkay.core.common.k.b r0, int r1) {
            r0.a(r1)
            return
    }

    private synchronized void a(boolean r6) {
            r5 = this;
            monitor-enter(r5)
            android.content.Context r0 = r5.h     // Catch: java.lang.Throwable -> Lce
            if (r0 != 0) goto L7
            monitor-exit(r5)
            return
        L7:
            boolean r0 = r5.k     // Catch: java.lang.Throwable -> Lce
            if (r0 != 0) goto Lcc
            if (r6 != 0) goto L1b
            java.util.concurrent.atomic.AtomicInteger r6 = r5.j     // Catch: java.lang.Throwable -> Lce
            if (r6 == 0) goto Lcc
            java.util.concurrent.atomic.AtomicInteger r6 = r5.j     // Catch: java.lang.Throwable -> Lce
            int r6 = r6.get()     // Catch: java.lang.Throwable -> Lce
            int r0 = r5.c     // Catch: java.lang.Throwable -> Lce
            if (r6 < r0) goto Lcc
        L1b:
            r6 = 1
            r5.k = r6     // Catch: java.lang.Throwable -> Lce
            r0 = 0
            r1 = 0
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L9e java.lang.Throwable -> Laa java.lang.Exception -> Lb9
            java.io.FileReader r3 = new java.io.FileReader     // Catch: java.lang.Throwable -> L9e java.lang.Throwable -> Laa java.lang.Exception -> Lb9
            java.io.File r4 = r5.i     // Catch: java.lang.Throwable -> L9e java.lang.Throwable -> Laa java.lang.Exception -> Lb9
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L9e java.lang.Throwable -> Laa java.lang.Exception -> Lb9
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L9e java.lang.Throwable -> Laa java.lang.Exception -> Lb9
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
            r0.<init>()     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
            r3 = r1
        L32:
            int r4 = r5.d     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
            if (r3 >= r4) goto L42
            java.lang.String r4 = r2.readLine()     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
            if (r4 == 0) goto L42
            r0.add(r4)     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
            int r3 = r3 + 1
            goto L32
        L42:
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
            android.content.Context r3 = r3.f()     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
            com.tkay.core.c.b r3 = com.tkay.core.c.b.a(r3)     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
            java.lang.String r4 = r4.o()     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
            com.tkay.core.c.a r3 = r3.b(r4)     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
            if (r3 == 0) goto L85
            int r4 = r3.u()     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
            if (r4 == r6) goto L73
            com.tkay.core.common.h.b r6 = new com.tkay.core.common.h.b     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
            android.content.Context r4 = r5.h     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
            int r3 = r3.u()     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
            r6.<init>(r4, r3, r0)     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
            com.tkay.core.common.h.k r0 = r5.m     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
            r6.a(r1, r0)     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
            goto L91
        L73:
            com.tkay.core.common.h.a.a r4 = new com.tkay.core.common.h.a.a     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
            r4.<init>(r0)     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
            java.lang.String r0 = r3.t()     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
            r4.a(r6, r0)     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
            com.tkay.core.common.h.a.c$a r6 = r5.n     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
            r4.a(r6)     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
            goto L91
        L85:
            com.tkay.core.common.h.b r6 = new com.tkay.core.common.h.b     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
            android.content.Context r3 = r5.h     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
            r6.<init>(r3, r1, r0)     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
            com.tkay.core.common.h.k r0 = r5.m     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
            r6.a(r1, r0)     // Catch: java.lang.Throwable -> L98 java.lang.Throwable -> L9a java.lang.Exception -> L9c
        L91:
            r2.close()     // Catch: java.lang.Exception -> L96 java.lang.Throwable -> Lce
            monitor-exit(r5)
            return
        L96:
            monitor-exit(r5)
            return
        L98:
            r0 = r2
            goto L9e
        L9a:
            r0 = r2
            goto Laa
        L9c:
            r0 = r2
            goto Lb9
        L9e:
            r5.k = r1     // Catch: java.lang.Throwable -> Lc5
            if (r0 == 0) goto La8
            r0.close()     // Catch: java.lang.Exception -> La6 java.lang.Throwable -> Lce
            goto La8
        La6:
            monitor-exit(r5)
            return
        La8:
            monitor-exit(r5)
            return
        Laa:
            r5.k = r1     // Catch: java.lang.Throwable -> Lc5
            java.lang.System.gc()     // Catch: java.lang.Throwable -> Lc5
            if (r0 == 0) goto Lb7
            r0.close()     // Catch: java.lang.Exception -> Lb5 java.lang.Throwable -> Lce
            goto Lb7
        Lb5:
            monitor-exit(r5)
            return
        Lb7:
            monitor-exit(r5)
            return
        Lb9:
            r5.k = r1     // Catch: java.lang.Throwable -> Lc5
            if (r0 == 0) goto Lc3
            r0.close()     // Catch: java.lang.Exception -> Lc1 java.lang.Throwable -> Lce
            goto Lc3
        Lc1:
            monitor-exit(r5)
            return
        Lc3:
            monitor-exit(r5)
            return
        Lc5:
            r6 = move-exception
            if (r0 == 0) goto Lcb
            r0.close()     // Catch: java.lang.Exception -> Lcb java.lang.Throwable -> Lce
        Lcb:
            throw r6     // Catch: java.lang.Throwable -> Lce
        Lcc:
            monitor-exit(r5)
            return
        Lce:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    static boolean a(com.tkay.core.common.k.b r0, boolean r1) {
            r0.k = r1
            return r1
    }

    static long b(com.tkay.core.common.k.b r2) {
            long r0 = r2.e
            return r0
    }

    static java.util.concurrent.atomic.AtomicInteger c(com.tkay.core.common.k.b r0) {
            java.util.concurrent.atomic.AtomicInteger r0 = r0.j
            return r0
    }

    static int d(com.tkay.core.common.k.b r0) {
            int r0 = r0.c
            return r0
    }

    static boolean e(com.tkay.core.common.k.b r0) {
            boolean r0 = r0.k
            return r0
    }

    static java.io.File f(com.tkay.core.common.k.b r0) {
            java.io.File r0 = r0.i
            return r0
    }

    static int g(com.tkay.core.common.k.b r0) {
            int r0 = r0.d
            return r0
    }

    static com.tkay.core.common.h.a.c.a h(com.tkay.core.common.k.b r0) {
            com.tkay.core.common.h.a.c$a r0 = r0.n
            return r0
    }

    static com.tkay.core.common.h.k i(com.tkay.core.common.k.b r0) {
            com.tkay.core.common.h.k r0 = r0.m
            return r0
    }

    public final void a(android.content.Context r8) {
            r7 = this;
            java.lang.Object r0 = r7.o
            monitor-enter(r0)
            android.content.Context r1 = r7.h     // Catch: java.lang.Throwable -> L176
            if (r1 != 0) goto L174
            if (r8 != 0) goto Lb
            goto L174
        Lb:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L176
            java.lang.String r1 = r1.o()     // Catch: java.lang.Throwable -> L176
            r7.l = r1     // Catch: java.lang.Throwable -> L176
            android.content.Context r8 = r8.getApplicationContext()     // Catch: java.lang.Throwable -> L176
            r7.h = r8     // Catch: java.lang.Throwable -> L176
            r8 = 0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            r1.<init>()     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            android.content.Context r2 = r7.h     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            java.io.File r2 = r2.getFilesDir()     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            java.lang.String r2 = r2.getAbsolutePath()     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            r1.append(r2)     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            java.lang.String r2 = java.io.File.separator     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            r1.append(r2)     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            java.lang.String r2 = "log"
            r1.append(r2)     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            java.lang.String r2 = java.io.File.separator     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            r1.append(r2)     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            java.lang.String r2 = "tkay_agent_log"
            r1.append(r2)     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            r7.f = r1     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            r1.<init>()     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            android.content.Context r2 = r7.h     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            java.io.File r2 = r2.getFilesDir()     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            java.lang.String r2 = r2.getAbsolutePath()     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            r1.append(r2)     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            java.lang.String r2 = java.io.File.separator     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            r1.append(r2)     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            java.lang.String r2 = "log"
            r1.append(r2)     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            java.lang.String r2 = java.io.File.separator     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            r1.append(r2)     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            java.lang.String r2 = "tkay_temp_log"
            r1.append(r2)     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            r7.g = r1     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            java.io.File r1 = r7.i     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            if (r1 != 0) goto La9
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            java.lang.String r2 = r7.f     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            r7.i = r1     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            java.io.File r1 = r1.getParentFile()     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            boolean r1 = r1.exists()     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            if (r1 != 0) goto L9c
            java.io.File r1 = r7.i     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            java.io.File r1 = r1.getParentFile()     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            r1.mkdirs()     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
        L9c:
            java.io.File r1 = r7.i     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            boolean r1 = r1.exists()     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            if (r1 != 0) goto La9
            java.io.File r1 = r7.i     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
            r1.createNewFile()     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Exception -> L168
        La9:
            r1 = 0
            java.io.LineNumberReader r2 = new java.io.LineNumberReader     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Lf2
            java.io.FileReader r3 = new java.io.FileReader     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Lf2
            java.io.File r4 = r7.i     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Lf2
            r3.<init>(r4)     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Lf2
            r2.<init>(r3)     // Catch: java.lang.Throwable -> Le8 java.lang.Exception -> Lf2
            r3 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r2.skip(r3)     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Le6
            int r1 = r2.getLineNumber()     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Le6
            java.util.concurrent.atomic.AtomicInteger r3 = r7.j     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Le6
            if (r3 != 0) goto Lcd
            java.util.concurrent.atomic.AtomicInteger r3 = new java.util.concurrent.atomic.AtomicInteger     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Le6
            r3.<init>(r1)     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Le6
            r7.j = r3     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Le6
        Lcd:
            r2.close()     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Le6
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Le6
            java.lang.String r3 = "init file log count:"
            r1.<init>(r3)     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Le6
            java.util.concurrent.atomic.AtomicInteger r3 = r7.j     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Le6
            int r3 = r3.get()     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Le6
            r1.append(r3)     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Le6
            r2.close()     // Catch: java.io.IOException -> Lf7 java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Throwable -> L14f java.lang.Exception -> L168
            goto Lf7
        Le4:
            r1 = move-exception
            goto Lec
        Le6:
            r1 = r2
            goto Lf2
        Le8:
            r2 = move-exception
            r6 = r2
            r2 = r1
            r1 = r6
        Lec:
            if (r2 == 0) goto Lf1
            r2.close()     // Catch: java.io.IOException -> Lf1 java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Throwable -> L14f java.lang.Exception -> L168
        Lf1:
            throw r1     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Throwable -> L14f java.lang.Exception -> L168
        Lf2:
            if (r1 == 0) goto Lf7
            r1.close()     // Catch: java.io.IOException -> Lf7 java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Throwable -> L14f java.lang.Exception -> L168
        Lf7:
            java.util.concurrent.atomic.AtomicInteger r1 = r7.j     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Throwable -> L14f java.lang.Exception -> L168
            if (r1 != 0) goto L102
            java.util.concurrent.atomic.AtomicInteger r1 = new java.util.concurrent.atomic.AtomicInteger     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Throwable -> L14f java.lang.Exception -> L168
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Throwable -> L14f java.lang.Exception -> L168
            r7.j = r1     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Throwable -> L14f java.lang.Exception -> L168
        L102:
            android.content.Context r1 = r7.h     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Throwable -> L14f java.lang.Exception -> L168
            com.tkay.core.c.b r1 = com.tkay.core.c.b.a(r1)     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Throwable -> L14f java.lang.Exception -> L168
            java.lang.String r2 = r7.l     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Throwable -> L14f java.lang.Exception -> L168
            com.tkay.core.c.a r1 = r1.b(r2)     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Throwable -> L14f java.lang.Exception -> L168
            int r2 = r1.ad()     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Throwable -> L14f java.lang.Exception -> L168
            if (r2 == 0) goto L119
            int r2 = r1.ad()     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Throwable -> L14f java.lang.Exception -> L168
            goto L11b
        L119:
            int r2 = r7.c     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Throwable -> L14f java.lang.Exception -> L168
        L11b:
            r7.c = r2     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Throwable -> L14f java.lang.Exception -> L168
            int r2 = r2 * 2
            r7.d = r2     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Throwable -> L14f java.lang.Exception -> L168
            long r2 = r1.af()     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Throwable -> L14f java.lang.Exception -> L168
            r4 = 0
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 == 0) goto L130
            long r1 = r1.af()     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Throwable -> L14f java.lang.Exception -> L168
            goto L132
        L130:
            long r1 = r7.e     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Throwable -> L14f java.lang.Exception -> L168
        L132:
            r7.e = r1     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Throwable -> L14f java.lang.Exception -> L168
            r7.b()     // Catch: java.lang.Throwable -> L143 java.lang.Error -> L145 java.lang.Throwable -> L14f java.lang.Throwable -> L14f java.lang.Exception -> L168
            java.util.concurrent.atomic.AtomicInteger r1 = r7.j     // Catch: java.lang.Throwable -> L176
            if (r1 != 0) goto L172
            java.util.concurrent.atomic.AtomicInteger r1 = new java.util.concurrent.atomic.AtomicInteger     // Catch: java.lang.Throwable -> L176
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L176
        L140:
            r7.j = r1     // Catch: java.lang.Throwable -> L176
            goto L172
        L143:
            r1 = move-exception
            goto L15c
        L145:
            java.util.concurrent.atomic.AtomicInteger r1 = r7.j     // Catch: java.lang.Throwable -> L176
            if (r1 != 0) goto L172
            java.util.concurrent.atomic.AtomicInteger r1 = new java.util.concurrent.atomic.AtomicInteger     // Catch: java.lang.Throwable -> L176
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L176
            goto L140
        L14f:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> L143
            java.util.concurrent.atomic.AtomicInteger r1 = r7.j     // Catch: java.lang.Throwable -> L176
            if (r1 != 0) goto L172
            java.util.concurrent.atomic.AtomicInteger r1 = new java.util.concurrent.atomic.AtomicInteger     // Catch: java.lang.Throwable -> L176
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L176
            goto L140
        L15c:
            java.util.concurrent.atomic.AtomicInteger r2 = r7.j     // Catch: java.lang.Throwable -> L176
            if (r2 != 0) goto L167
            java.util.concurrent.atomic.AtomicInteger r2 = new java.util.concurrent.atomic.AtomicInteger     // Catch: java.lang.Throwable -> L176
            r2.<init>(r8)     // Catch: java.lang.Throwable -> L176
            r7.j = r2     // Catch: java.lang.Throwable -> L176
        L167:
            throw r1     // Catch: java.lang.Throwable -> L176
        L168:
            java.util.concurrent.atomic.AtomicInteger r1 = r7.j     // Catch: java.lang.Throwable -> L176
            if (r1 != 0) goto L172
            java.util.concurrent.atomic.AtomicInteger r1 = new java.util.concurrent.atomic.AtomicInteger     // Catch: java.lang.Throwable -> L176
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L176
            goto L140
        L172:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L176
            return
        L174:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L176
            return
        L176:
            r8 = move-exception
            monitor-exit(r0)
            throw r8
    }

    protected final synchronized void a(com.tkay.core.common.f.g r5, boolean r6) {
            r4 = this;
            monitor-enter(r4)
            java.io.File r0 = r4.i     // Catch: java.lang.Throwable -> L86
            if (r0 == 0) goto L9
            java.util.concurrent.atomic.AtomicInteger r0 = r4.j     // Catch: java.lang.Throwable -> L86
            if (r0 != 0) goto L14
        L9:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L86
            android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> L86
            r4.a(r0)     // Catch: java.lang.Throwable -> L86
        L14:
            android.content.Context r0 = r4.h     // Catch: java.lang.Throwable -> L86
            com.tkay.core.c.b r0 = com.tkay.core.c.b.a(r0)     // Catch: java.lang.Throwable -> L86
            java.lang.String r1 = r4.l     // Catch: java.lang.Throwable -> L86
            com.tkay.core.c.a r0 = r0.b(r1)     // Catch: java.lang.Throwable -> L86
            int r1 = r0.ad()     // Catch: java.lang.Throwable -> L86
            if (r1 == 0) goto L2b
            int r1 = r0.ad()     // Catch: java.lang.Throwable -> L86
            goto L2d
        L2b:
            int r1 = r4.c     // Catch: java.lang.Throwable -> L86
        L2d:
            r4.c = r1     // Catch: java.lang.Throwable -> L86
            int r1 = r1 * 2
            r4.d = r1     // Catch: java.lang.Throwable -> L86
            long r0 = r0.af()     // Catch: java.lang.Throwable -> L86
            r4.e = r0     // Catch: java.lang.Throwable -> L86
            r0 = 0
            org.json.JSONObject r5 = r5.a()     // Catch: java.lang.Throwable -> L6a java.lang.Error -> L6c java.lang.Throwable -> L72 java.lang.Exception -> L7e
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L6a java.lang.Error -> L6c java.lang.Throwable -> L72 java.lang.Exception -> L7e
            java.io.FileWriter r1 = new java.io.FileWriter     // Catch: java.lang.Throwable -> L6a java.lang.Error -> L6c java.lang.Throwable -> L72 java.lang.Exception -> L7e
            java.io.File r2 = r4.i     // Catch: java.lang.Throwable -> L6a java.lang.Error -> L6c java.lang.Throwable -> L72 java.lang.Exception -> L7e
            r3 = 1
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L6a java.lang.Error -> L6c java.lang.Throwable -> L72 java.lang.Exception -> L7e
            r1.append(r5)     // Catch: java.lang.Throwable -> L61 java.lang.Error -> L64 java.lang.Throwable -> L66 java.lang.Exception -> L68
            java.lang.String r5 = "\n"
            r1.append(r5)     // Catch: java.lang.Throwable -> L61 java.lang.Error -> L64 java.lang.Throwable -> L66 java.lang.Exception -> L68
            r1.flush()     // Catch: java.lang.Throwable -> L61 java.lang.Error -> L64 java.lang.Throwable -> L66 java.lang.Exception -> L68
            r1.close()     // Catch: java.lang.Throwable -> L61 java.lang.Error -> L64 java.lang.Throwable -> L66 java.lang.Exception -> L68
            java.util.concurrent.atomic.AtomicInteger r5 = r4.j     // Catch: java.lang.Throwable -> L61 java.lang.Error -> L64 java.lang.Throwable -> L66 java.lang.Exception -> L68
            r5.incrementAndGet()     // Catch: java.lang.Throwable -> L61 java.lang.Error -> L64 java.lang.Throwable -> L66 java.lang.Exception -> L68
            r1.close()     // Catch: java.io.IOException -> L81 java.lang.Throwable -> L86
            goto L81
        L61:
            r5 = move-exception
            r0 = r1
            goto L78
        L64:
            r0 = r1
            goto L6c
        L66:
            r0 = r1
            goto L72
        L68:
            r0 = r1
            goto L7e
        L6a:
            r5 = move-exception
            goto L78
        L6c:
            if (r0 == 0) goto L81
        L6e:
            r0.close()     // Catch: java.io.IOException -> L81 java.lang.Throwable -> L86
            goto L81
        L72:
            java.lang.System.gc()     // Catch: java.lang.Throwable -> L6a
            if (r0 == 0) goto L81
            goto L6e
        L78:
            if (r0 == 0) goto L7d
            r0.close()     // Catch: java.io.IOException -> L7d java.lang.Throwable -> L86
        L7d:
            throw r5     // Catch: java.lang.Throwable -> L86
        L7e:
            if (r0 == 0) goto L81
            goto L6e
        L81:
            r4.a(r6)     // Catch: java.lang.Throwable -> L86
            monitor-exit(r4)
            return
        L86:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public final void b() {
            r2 = this;
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.k.b$3 r1 = new com.tkay.core.common.k.b$3
            r1.<init>(r2)
            r0.a(r1)
            return
    }
}

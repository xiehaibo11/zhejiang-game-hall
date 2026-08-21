package com.tkay.core.common;

import com.tkay.core.common.f.p;

public abstract class o<T extends com.tkay.core.common.f.p> {
    final java.lang.String a;
    java.util.ArrayList<T> b;
    protected android.os.CountDownTimer c;
    java.lang.String d;
    protected android.content.Context e;

    final class 1 implements java.lang.Runnable {
        final com.tkay.core.c.a a;
        final com.tkay.core.common.o b;


        1(com.tkay.core.common.o r1, com.tkay.core.c.a r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r8 = this;
                com.tkay.core.common.o r0 = r8.b
                com.tkay.core.common.o$1$1 r7 = new com.tkay.core.common.o$1$1
                com.tkay.core.c.a r1 = r8.a
                long r3 = r1.aa()
                com.tkay.core.c.a r1 = r8.a
                long r5 = r1.aa()
                r1 = r7
                r2 = r8
                r1.<init>(r2, r3, r5)
                r0.c = r7
                com.tkay.core.common.o r0 = r8.b
                android.os.CountDownTimer r0 = r0.c
                r0.start()
                return
        }
    }


    protected o(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.lang.Class r0 = r1.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r1.a = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.b = r0
            android.content.Context r2 = r2.getApplicationContext()
            r1.e = r2
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            java.lang.String r2 = r2.o()
            r1.d = r2
            return
    }

    static void a(com.tkay.core.common.o r1) {
            r0 = 1
            r1.a(r0)
            return
    }

    private synchronized void a(boolean r4) {
            r3 = this;
            monitor-enter(r3)
            if (r4 == 0) goto L1c
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L6b
            r4.<init>()     // Catch: java.lang.Throwable -> L6b
            java.util.ArrayList<T extends com.tkay.core.common.f.p> r0 = r3.b     // Catch: java.lang.Throwable -> L6b
            r4.addAll(r0)     // Catch: java.lang.Throwable -> L6b
            int r0 = r4.size()     // Catch: java.lang.Throwable -> L6b
            if (r0 <= 0) goto L16
            r3.a(r4)     // Catch: java.lang.Throwable -> L6b
        L16:
            java.util.ArrayList<T extends com.tkay.core.common.f.p> r4 = r3.b     // Catch: java.lang.Throwable -> L6b
            r4.clear()     // Catch: java.lang.Throwable -> L6b
            goto L5d
        L1c:
            android.content.Context r4 = r3.e     // Catch: java.lang.Throwable -> L6b
            com.tkay.core.c.b r4 = com.tkay.core.c.b.a(r4)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r0 = r3.d     // Catch: java.lang.Throwable -> L6b
            com.tkay.core.c.a r4 = r4.b(r0)     // Catch: java.lang.Throwable -> L6b
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L6b
            r0.<init>()     // Catch: java.lang.Throwable -> L6b
            java.util.ArrayList<T extends com.tkay.core.common.f.p> r1 = r3.b     // Catch: java.lang.Throwable -> L6b
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L6b
            int r2 = r4.Y()     // Catch: java.lang.Throwable -> L6b
            if (r1 < r2) goto L5d
            int r4 = r4.Y()     // Catch: java.lang.Throwable -> L6b
            int r4 = r4 + (-1)
        L3f:
            if (r4 < 0) goto L54
            java.util.ArrayList<T extends com.tkay.core.common.f.p> r1 = r3.b     // Catch: java.lang.Throwable -> L6b
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Throwable -> L6b
            com.tkay.core.common.f.p r1 = (com.tkay.core.common.f.p) r1     // Catch: java.lang.Throwable -> L6b
            r0.add(r1)     // Catch: java.lang.Throwable -> L6b
            java.util.ArrayList<T extends com.tkay.core.common.f.p> r1 = r3.b     // Catch: java.lang.Throwable -> L6b
            r1.remove(r4)     // Catch: java.lang.Throwable -> L6b
            int r4 = r4 + (-1)
            goto L3f
        L54:
            int r4 = r0.size()     // Catch: java.lang.Throwable -> L6b
            if (r4 <= 0) goto L5d
            r3.a(r0)     // Catch: java.lang.Throwable -> L6b
        L5d:
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L6b
            com.tkay.core.common.o$2 r0 = new com.tkay.core.common.o$2     // Catch: java.lang.Throwable -> L6b
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L6b
            r4.a(r0)     // Catch: java.lang.Throwable -> L6b
            monitor-exit(r3)
            return
        L6b:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public final synchronized void a(T r7, boolean r8) {
            r6 = this;
            monitor-enter(r6)
            r0 = 1
            if (r8 == 0) goto Le
            java.util.ArrayList<T extends com.tkay.core.common.f.p> r8 = r6.b     // Catch: java.lang.Throwable -> L44
            r8.add(r7)     // Catch: java.lang.Throwable -> L44
            r6.a(r0)     // Catch: java.lang.Throwable -> L44
            monitor-exit(r6)
            return
        Le:
            android.content.Context r8 = r6.e     // Catch: java.lang.Throwable -> L44
            com.tkay.core.c.b r8 = com.tkay.core.c.b.a(r8)     // Catch: java.lang.Throwable -> L44
            java.lang.String r1 = r6.d     // Catch: java.lang.Throwable -> L44
            com.tkay.core.c.a r8 = r8.b(r1)     // Catch: java.lang.Throwable -> L44
            r1 = 0
            java.util.ArrayList<T extends com.tkay.core.common.f.p> r2 = r6.b     // Catch: java.lang.Throwable -> L44
            boolean r2 = r2.isEmpty()     // Catch: java.lang.Throwable -> L44
            if (r2 == 0) goto L39
            long r2 = r8.aa()     // Catch: java.lang.Throwable -> L44
            r4 = 0
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L3a
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L44
            com.tkay.core.common.o$1 r2 = new com.tkay.core.common.o$1     // Catch: java.lang.Throwable -> L44
            r2.<init>(r6, r8)     // Catch: java.lang.Throwable -> L44
            r0.a(r2)     // Catch: java.lang.Throwable -> L44
        L39:
            r0 = r1
        L3a:
            java.util.ArrayList<T extends com.tkay.core.common.f.p> r8 = r6.b     // Catch: java.lang.Throwable -> L44
            r8.add(r7)     // Catch: java.lang.Throwable -> L44
            r6.a(r0)     // Catch: java.lang.Throwable -> L44
            monitor-exit(r6)
            return
        L44:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    protected abstract void a(java.util.List<T> r1);
}

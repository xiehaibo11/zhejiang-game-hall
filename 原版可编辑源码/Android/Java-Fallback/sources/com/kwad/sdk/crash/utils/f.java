package com.kwad.sdk.crash.utils;

public final class f {

    static abstract class a {
        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        a(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        abstract java.lang.Object Fm();

        abstract void println(java.lang.Object r1);
    }

    static class b extends com.kwad.sdk.crash.utils.f.a {
        private final java.io.PrintWriter aBR;

        b(java.io.PrintWriter r2) {
                r1 = this;
                r0 = 0
                r1.<init>(r0)
                r1.aBR = r2
                return
        }

        @Override
        final java.lang.Object Fm() {
                r1 = this;
                java.io.PrintWriter r0 = r1.aBR
                return r0
        }

        @Override
        final void println(java.lang.Object r2) {
                r1 = this;
                java.io.PrintWriter r0 = r1.aBR
                r0.println(r2)
                return
        }
    }

    private static void a(java.lang.Throwable r9, com.kwad.sdk.crash.utils.f.a r10) {
            java.util.IdentityHashMap r0 = new java.util.IdentityHashMap
            r0.<init>()
            java.util.Set r0 = java.util.Collections.newSetFromMap(r0)
            r0.add(r9)
            java.lang.Object r1 = r10.Fm()
            monitor-enter(r1)
            r10.println(r9)     // Catch: java.lang.Throwable -> L5b
            java.lang.StackTraceElement[] r2 = r9.getStackTrace()     // Catch: java.lang.Throwable -> L5b
            int r3 = r2.length     // Catch: java.lang.Throwable -> L5b
            r4 = 0
            r5 = r4
        L1b:
            if (r5 >= r3) goto L33
            r6 = r2[r5]     // Catch: java.lang.Throwable -> L5b
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5b
            java.lang.String r8 = "\tat "
            r7.<init>(r8)     // Catch: java.lang.Throwable -> L5b
            r7.append(r6)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r6 = r7.toString()     // Catch: java.lang.Throwable -> L5b
            r10.println(r6)     // Catch: java.lang.Throwable -> L5b
            int r5 = r5 + 1
            goto L1b
        L33:
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L5b
            r3 = 19
            if (r2 < r3) goto L4c
            java.lang.Throwable[] r2 = r9.getSuppressed()     // Catch: java.lang.Throwable -> L5b
            int r3 = r2.length     // Catch: java.lang.Throwable -> L5b
        L3e:
            if (r4 >= r3) goto L4c
            r5 = r2[r4]     // Catch: java.lang.Throwable -> L5b
            java.lang.String r6 = "Suppressed: "
            java.lang.String r7 = "\t"
            a(r5, r10, r6, r7, r0)     // Catch: java.lang.Throwable -> L5b
            int r4 = r4 + 1
            goto L3e
        L4c:
            java.lang.Throwable r9 = r9.getCause()     // Catch: java.lang.Throwable -> L5b
            if (r9 == 0) goto L59
            java.lang.String r2 = "Caused by: "
            java.lang.String r3 = ""
            a(r9, r10, r2, r3, r0)     // Catch: java.lang.Throwable -> L5b
        L59:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L5b
            return
        L5b:
            r9 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L5b
            throw r9
    }

    private static void a(java.lang.Throwable r6, com.kwad.sdk.crash.utils.f.a r7, java.lang.String r8, java.lang.String r9, java.util.Set<java.lang.Throwable> r10) {
        L0:
            boolean r0 = r10.contains(r6)
            if (r0 == 0) goto L1d
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r9 = "\t[CIRCULAR REFERENCE:"
            r8.<init>(r9)
            r8.append(r6)
            java.lang.String r6 = "]"
            r8.append(r6)
            java.lang.String r6 = r8.toString()
            r7.println(r6)
            return
        L1d:
            r10.add(r6)
            java.lang.StackTraceElement[] r0 = r6.getStackTrace()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r9)
            r1.append(r8)
            r1.append(r6)
            java.lang.String r8 = r1.toString()
            r7.println(r8)
            int r8 = r0.length
            r1 = 0
            r2 = r1
        L3c:
            if (r2 >= r8) goto L5a
            r3 = r0[r2]
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r9)
            java.lang.String r5 = "\tat "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            r7.println(r3)
            int r2 = r2 + 1
            goto L3c
        L5a:
            int r8 = android.os.Build.VERSION.SDK_INT
            r0 = 19
            if (r8 < r0) goto L82
            java.lang.Throwable[] r8 = r6.getSuppressed()
            int r0 = r8.length
        L65:
            if (r1 >= r0) goto L82
            r2 = r8[r1]
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r9)
            java.lang.String r4 = "\t"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "Suppressed: "
            a(r2, r7, r4, r3, r10)
            int r1 = r1 + 1
            goto L65
        L82:
            java.lang.Throwable r6 = r6.getCause()
            if (r6 == 0) goto L8c
            java.lang.String r8 = "Caused by: "
            goto L0
        L8c:
            return
    }

    public static void a(java.lang.Throwable r1, java.io.PrintWriter r2) {
            com.kwad.sdk.crash.utils.f$b r0 = new com.kwad.sdk.crash.utils.f$b
            r0.<init>(r2)
            a(r1, r0)
            return
    }
}

package com.kwad.sdk.crash.b;

public final class a {
    private static boolean B(java.util.List<java.lang.StackTraceElement[]> r1) {
            java.util.Iterator r1 = r1.iterator()
        L4:
            boolean r0 = r1.hasNext()
            if (r0 == 0) goto L18
            java.lang.Object r0 = r1.next()
            java.lang.StackTraceElement[] r0 = (java.lang.StackTraceElement[]) r0
            boolean r0 = a(r0)
            if (r0 == 0) goto L4
            r1 = 1
            return r1
        L18:
            r1 = 0
            return r1
    }

    private static boolean a(java.lang.StackTraceElement[] r6) {
            r0 = 0
            if (r6 == 0) goto L43
            int r1 = r6.length
            if (r1 != 0) goto L7
            goto L43
        L7:
            com.kwad.sdk.crash.e r1 = com.kwad.sdk.crash.e.EC()
            java.lang.String[] r1 = r1.ED()
            if (r1 == 0) goto L41
            int r2 = r1.length
            if (r2 != 0) goto L15
            goto L41
        L15:
            int r2 = r1.length
            r3 = r0
            r4 = r3
        L18:
            if (r3 >= r2) goto L25
            r4 = r1[r3]
            boolean r4 = a(r6, r4)
            if (r4 != 0) goto L25
            int r3 = r3 + 1
            goto L18
        L25:
            if (r4 == 0) goto L3f
            com.kwad.sdk.crash.e r1 = com.kwad.sdk.crash.e.EC()
            java.lang.String[] r1 = r1.EE()
            int r2 = r1.length
            r3 = r0
        L31:
            if (r3 >= r2) goto L3f
            r5 = r1[r3]
            boolean r5 = b(r6, r5)
            if (r5 == 0) goto L3c
            goto L40
        L3c:
            int r3 = r3 + 1
            goto L31
        L3f:
            r0 = r4
        L40:
            return r0
        L41:
            r6 = 1
            return r6
        L43:
            return r0
    }

    private static boolean a(java.lang.StackTraceElement[] r5, java.lang.String r6) {
            int r0 = r5.length
            r1 = 0
            r2 = r1
        L3:
            if (r2 >= r0) goto L37
            r3 = r5[r2]
            java.lang.String r3 = r3.getClassName()
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L34
            boolean r4 = r3.contains(r6)
            if (r4 == 0) goto L34
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r0 = "CrashFilter filterTags element className="
            r5.<init>(r0)
            r5.append(r3)
            java.lang.String r0 = " filter tag="
            r5.append(r0)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            java.lang.String r6 = "ExceptionCollector"
            com.kwad.sdk.core.e.c.d(r6, r5)
            r5 = 1
            return r5
        L34:
            int r2 = r2 + 1
            goto L3
        L37:
            return r1
    }

    private static boolean b(java.lang.StackTraceElement[] r5, java.lang.String r6) {
            int r0 = r5.length
            r1 = 0
            r2 = r1
        L3:
            if (r2 >= r0) goto L37
            r3 = r5[r2]
            java.lang.String r3 = r3.getClassName()
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L34
            boolean r4 = r3.contains(r6)
            if (r4 == 0) goto L34
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r0 = "CrashFilter excludeTags element className="
            r5.<init>(r0)
            r5.append(r3)
            java.lang.String r0 = " exclude tag="
            r5.append(r0)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            java.lang.String r6 = "ExceptionCollector"
            com.kwad.sdk.core.e.c.d(r6, r5)
            r5 = 1
            return r5
        L34:
            int r2 = r2 + 1
            goto L3
        L37:
            return r1
    }

    public static boolean m(java.lang.Throwable r4) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r1 = 5
            r0.<init>(r1)
            r2 = 0
        L7:
            if (r2 >= r1) goto L19
            java.lang.StackTraceElement[] r3 = r4.getStackTrace()
            r0.add(r3)
            java.lang.Throwable r4 = r4.getCause()
            if (r4 == 0) goto L19
            int r2 = r2 + 1
            goto L7
        L19:
            boolean r4 = B(r0)
            return r4
    }
}

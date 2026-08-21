package com.kwad.sdk.utils;

public final class ao {
    private static void a(java.lang.RuntimeException r0) {
            com.kwad.sdk.core.e.c.printStackTrace(r0)
            return
    }

    public static java.lang.String au(java.lang.String r3, java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L1c
            java.lang.NullPointerException r0 = new java.lang.NullPointerException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Argument cannot be null "
            r1.<init>(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            a(r0)
        L1c:
            return r3
    }

    public static void checkArgument(boolean r2, java.lang.Object r3) {
            if (r2 != 0) goto L18
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Expression cannot be false "
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.<init>(r3)
            a(r2)
        L18:
            return
    }

    public static <T> T checkNotNull(T r1) {
            java.lang.String r0 = ""
            java.lang.Object r1 = h(r1, r0)
            return r1
    }

    public static void e(java.lang.Object... r2) {
            r0 = 0
        L1:
            r1 = 2
            if (r0 >= r1) goto Lc
            r1 = r2[r0]
            checkNotNull(r1)
            int r0 = r0 + 1
            goto L1
        Lc:
            return
    }

    public static java.lang.String fE(java.lang.String r1) {
            java.lang.String r0 = ""
            java.lang.String r1 = au(r1, r0)
            return r1
    }

    public static <T> T h(T r3, java.lang.String r4) {
            if (r3 != 0) goto L18
            java.lang.NullPointerException r0 = new java.lang.NullPointerException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Argument cannot be null "
            r1.<init>(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            a(r0)
        L18:
            return r3
    }
}

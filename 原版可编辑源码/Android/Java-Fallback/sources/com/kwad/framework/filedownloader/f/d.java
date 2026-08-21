package com.kwad.framework.filedownloader.f;

public final class d {
    public static boolean aeI;

    static {
            return
    }

    private static void a(int r1, java.lang.Object r2, java.lang.String r3, java.lang.Object... r4) {
            r0 = 0
            a(r1, r2, r0, r3, r4)
            return
    }

    private static void a(int r1, java.lang.Object r2, java.lang.Throwable r3, java.lang.String r4, java.lang.Object... r5) {
            r0 = 5
            if (r1 < r0) goto L5
            r0 = 1
            goto L6
        L5:
            r0 = 0
        L6:
            if (r0 != 0) goto Ld
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            if (r0 != 0) goto Ld
            return
        Ld:
            java.lang.String r2 = f(r2)
            java.lang.String r4 = com.kwad.framework.filedownloader.f.f.b(r4, r5)
            android.util.Log.println(r1, r2, r4)
            if (r3 == 0) goto L1d
            r3.printStackTrace()
        L1d:
            return
    }

    public static void a(java.lang.Object r1, java.lang.String r2, java.lang.Object... r3) {
            r0 = 6
            a(r0, r1, r2, r3)
            return
    }

    public static void a(java.lang.Object r1, java.lang.Throwable r2, java.lang.String r3, java.lang.Object... r4) {
            r0 = 6
            a(r0, r1, r2, r3, r4)
            return
    }

    public static void b(java.lang.Object r1, java.lang.String r2, java.lang.Object... r3) {
            r0 = 4
            a(r0, r1, r2, r3)
            return
    }

    public static void c(java.lang.Object r1, java.lang.String r2, java.lang.Object... r3) {
            r0 = 3
            a(r0, r1, r2, r3)
            return
    }

    public static void d(java.lang.Object r1, java.lang.String r2, java.lang.Object... r3) {
            r0 = 5
            a(r0, r1, r2, r3)
            return
    }

    public static void e(java.lang.Object r1, java.lang.String r2, java.lang.Object... r3) {
            r0 = 2
            a(r0, r1, r2, r3)
            return
    }

    private static java.lang.String f(java.lang.Object r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "FileDownloader."
            r0.<init>(r1)
            boolean r1 = r2 instanceof java.lang.Class
            if (r1 == 0) goto Le
            java.lang.Class r2 = (java.lang.Class) r2
            goto L12
        Le:
            java.lang.Class r2 = r2.getClass()
        L12:
            java.lang.String r2 = r2.getSimpleName()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }
}

package com.tkay.expressad.exoplayer.j.a;

final class j {
    private static final java.lang.String a = "exo_";
    private static final java.lang.String b = "exo_redir";
    private static final java.lang.String c = "exo_len";

    private j() {
            r0 = this;
            r0.<init>()
            return
    }

    public static long a(com.tkay.expressad.exoplayer.j.a.i r2) {
            java.lang.String r0 = "exo_len"
            long r0 = r2.a(r0)
            return r0
    }

    private static void a(com.tkay.expressad.exoplayer.j.a.k r1) {
            java.lang.String r0 = "exo_len"
            r1.a(r0)
            return
    }

    public static void a(com.tkay.expressad.exoplayer.j.a.k r1, long r2) {
            java.lang.String r0 = "exo_len"
            r1.a(r0, r2)
            return
    }

    public static void a(com.tkay.expressad.exoplayer.j.a.k r1, android.net.Uri r2) {
            java.lang.String r2 = r2.toString()
            java.lang.String r0 = "exo_redir"
            r1.a(r0, r2)
            return
    }

    private static android.net.Uri b(com.tkay.expressad.exoplayer.j.a.i r3) {
            r0 = 0
            r1 = r0
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = "exo_redir"
            java.lang.String r3 = r3.a(r2, r1)
            if (r3 != 0) goto Ld
            return r0
        Ld:
            android.net.Uri r3 = android.net.Uri.parse(r3)
            return r3
    }

    private static void b(com.tkay.expressad.exoplayer.j.a.k r1) {
            java.lang.String r0 = "exo_redir"
            r1.a(r0)
            return
    }
}

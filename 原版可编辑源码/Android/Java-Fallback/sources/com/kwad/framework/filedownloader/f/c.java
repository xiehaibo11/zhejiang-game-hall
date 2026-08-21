package com.kwad.framework.filedownloader.f;

public final class c {
    private static android.content.Context aeH;

    public interface a {
        int H(long r1);
    }

    public interface b {
        com.kwad.framework.filedownloader.a.b aZ(java.lang.String r1);
    }

    public interface c {
        com.kwad.framework.filedownloader.b.a vN();
    }

    public interface d {
        int f(java.lang.String r1, java.lang.String r2, boolean r3);

        int g(java.lang.String r1, java.lang.String r2, boolean r3);
    }

    public interface e {
        com.kwad.framework.filedownloader.e.a c(java.io.File r1);
    }

    public static boolean a(int r2, long r3, java.lang.String r5, java.lang.String r6, com.kwad.framework.filedownloader.y r7) {
            if (r6 == 0) goto L1c
            if (r5 == 0) goto L1c
            int r7 = r7.l(r5, r2)
            if (r7 == 0) goto L1c
            com.kwad.framework.filedownloader.message.e r0 = com.kwad.framework.filedownloader.message.e.vg()
            com.kwad.framework.filedownloader.exception.PathConflictException r1 = new com.kwad.framework.filedownloader.exception.PathConflictException
            r1.<init>(r7, r5, r6)
            com.kwad.framework.filedownloader.message.MessageSnapshot r2 = com.kwad.framework.filedownloader.message.f.a(r2, r3, r1)
            r0.s(r2)
            r2 = 1
            return r2
        L1c:
            r2 = 0
            return r2
    }

    public static boolean a(int r6, com.kwad.framework.filedownloader.d.c r7, com.kwad.framework.filedownloader.y r8, boolean r9) {
            boolean r8 = r8.a(r7)
            if (r8 == 0) goto L1d
            com.kwad.framework.filedownloader.message.e r8 = com.kwad.framework.filedownloader.message.e.vg()
            long r1 = r7.vm()
            long r3 = r7.getTotal()
            r0 = r6
            r5 = r9
            com.kwad.framework.filedownloader.message.MessageSnapshot r6 = com.kwad.framework.filedownloader.message.f.a(r0, r1, r3, r5)
            r8.s(r6)
            r6 = 1
            return r6
        L1d:
            r6 = 0
            return r6
    }

    public static boolean a(int r1, java.lang.String r2, boolean r3, boolean r4) {
            r0 = 0
            if (r3 == 0) goto L4
            return r0
        L4:
            if (r2 == 0) goto L1e
            java.io.File r3 = new java.io.File
            r3.<init>(r2)
            boolean r2 = r3.exists()
            if (r2 == 0) goto L1e
            com.kwad.framework.filedownloader.message.e r2 = com.kwad.framework.filedownloader.message.e.vg()
            com.kwad.framework.filedownloader.message.MessageSnapshot r1 = com.kwad.framework.filedownloader.message.f.a(r1, r3, r4)
            r2.s(r1)
            r1 = 1
            return r1
        L1e:
            return r0
    }

    public static void ap(android.content.Context r0) {
            com.kwad.framework.filedownloader.f.c.aeH = r0
            return
    }

    public static android.content.Context vM() {
            android.content.Context r0 = com.kwad.framework.filedownloader.f.c.aeH
            return r0
    }
}

package com.kwad.framework.filedownloader.message;

public final class e {
    private volatile com.kwad.framework.filedownloader.message.g adO;
    private volatile com.kwad.framework.filedownloader.message.e.b adP;

    public static final class a {
        private static final com.kwad.framework.filedownloader.message.e adQ = null;

        static {
                com.kwad.framework.filedownloader.message.e r0 = new com.kwad.framework.filedownloader.message.e
                r0.<init>()
                com.kwad.framework.filedownloader.message.e.a.adQ = r0
                return
        }

        static com.kwad.framework.filedownloader.message.e vh() {
                com.kwad.framework.filedownloader.message.e r0 = com.kwad.framework.filedownloader.message.e.a.adQ
                return r0
        }
    }

    public interface b {
        void r(com.kwad.framework.filedownloader.message.MessageSnapshot r1);
    }

    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.framework.filedownloader.message.e vg() {
            com.kwad.framework.filedownloader.message.e r0 = com.kwad.framework.filedownloader.message.e.a.vh()
            return r0
    }

    public final void a(com.kwad.framework.filedownloader.message.e.b r3) {
            r2 = this;
            r2.adP = r3
            if (r3 != 0) goto L8
            r3 = 0
            r2.adO = r3
            return
        L8:
            com.kwad.framework.filedownloader.message.g r0 = new com.kwad.framework.filedownloader.message.g
            r1 = 5
            r0.<init>(r1, r3)
            r2.adO = r0
            return
    }

    public final void s(com.kwad.framework.filedownloader.message.MessageSnapshot r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.kwad.framework.filedownloader.message.b
            if (r0 == 0) goto Le
            com.kwad.framework.filedownloader.message.e$b r0 = r1.adP
            if (r0 == 0) goto L17
            com.kwad.framework.filedownloader.message.e$b r0 = r1.adP
            r0.r(r2)
            return
        Le:
            com.kwad.framework.filedownloader.message.g r0 = r1.adO
            if (r0 == 0) goto L17
            com.kwad.framework.filedownloader.message.g r0 = r1.adO
            r0.u(r2)
        L17:
            return
    }
}

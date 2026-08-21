package com.kwad.framework.filedownloader.a;

public final class c implements com.kwad.framework.filedownloader.a.b {
    protected java.net.URLConnection abF;

    public static class a {
        private java.net.Proxy abG;
        private java.lang.Integer abH;
        private java.lang.Integer abI;

        static java.net.Proxy a(com.kwad.framework.filedownloader.a.c.a r0) {
                java.net.Proxy r0 = r0.abG
                return r0
        }

        static java.lang.Integer b(com.kwad.framework.filedownloader.a.c.a r0) {
                java.lang.Integer r0 = r0.abH
                return r0
        }

        static java.lang.Integer c(com.kwad.framework.filedownloader.a.c.a r0) {
                java.lang.Integer r0 = r0.abI
                return r0
        }
    }

    public static class b implements com.kwad.framework.filedownloader.f.c.b {
        private final com.kwad.framework.filedownloader.a.c.a abJ;

        public b() {
                r1 = this;
                r0 = 0
                r1.<init>(r0)
                return
        }

        private b(com.kwad.framework.filedownloader.a.c.a r1) {
                r0 = this;
                r0.<init>()
                r1 = 0
                r0.abJ = r1
                return
        }

        @Override
        public final com.kwad.framework.filedownloader.a.b aZ(java.lang.String r3) {
                r2 = this;
                com.kwad.framework.filedownloader.a.c r0 = new com.kwad.framework.filedownloader.a.c
                com.kwad.framework.filedownloader.a.c$a r1 = r2.abJ
                r0.<init>(r3, r1)
                return r0
        }
    }

    public c(java.lang.String r2, com.kwad.framework.filedownloader.a.c.a r3) {
            r1 = this;
            java.net.URL r0 = new java.net.URL
            r0.<init>(r2)
            r1.<init>(r0, r3)
            return
    }

    private c(java.net.URL r2, com.kwad.framework.filedownloader.a.c.a r3) {
            r1 = this;
            r1.<init>()
            if (r3 == 0) goto L14
            java.net.Proxy r0 = com.kwad.framework.filedownloader.a.c.a.a(r3)
            if (r0 == 0) goto L14
            java.net.Proxy r0 = com.kwad.framework.filedownloader.a.c.a.a(r3)
            java.net.URLConnection r2 = r2.openConnection(r0)
            goto L18
        L14:
            java.net.URLConnection r2 = r2.openConnection()
        L18:
            r1.abF = r2
            java.net.URLConnection r2 = r1.abF     // Catch: java.lang.Throwable -> L1f
            com.kwad.sdk.api.core.TLSConnectionUtils.wrapHttpURLConnection(r2)     // Catch: java.lang.Throwable -> L1f
        L1f:
            if (r3 == 0) goto L47
            java.lang.Integer r2 = com.kwad.framework.filedownloader.a.c.a.b(r3)
            if (r2 == 0) goto L34
            java.net.URLConnection r2 = r1.abF
            java.lang.Integer r0 = com.kwad.framework.filedownloader.a.c.a.b(r3)
            int r0 = r0.intValue()
            r2.setReadTimeout(r0)
        L34:
            java.lang.Integer r2 = com.kwad.framework.filedownloader.a.c.a.c(r3)
            if (r2 == 0) goto L47
            java.net.URLConnection r2 = r1.abF
            java.lang.Integer r3 = com.kwad.framework.filedownloader.a.c.a.c(r3)
            int r3 = r3.intValue()
            r2.setConnectTimeout(r3)
        L47:
            return
    }

    @Override
    public final java.lang.String aY(java.lang.String r2) {
            r1 = this;
            java.net.URLConnection r0 = r1.abF
            java.lang.String r2 = r0.getHeaderField(r2)
            return r2
    }

    @Override
    public final void addHeader(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.net.URLConnection r0 = r1.abF
            r0.addRequestProperty(r2, r3)
            return
    }

    @Override
    public final void execute() {
            r1 = this;
            java.net.URLConnection r0 = r1.abF
            r0.connect()
            return
    }

    @Override
    public final java.io.InputStream getInputStream() {
            r2 = this;
            java.net.URLConnection r0 = r2.abF
            java.io.InputStream r0 = r0.getInputStream()
            java.lang.Class<com.kwad.sdk.service.a.h> r1 = com.kwad.sdk.service.a.h.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
            com.kwad.sdk.service.a.h r1 = (com.kwad.sdk.service.a.h) r1
            java.io.InputStream r0 = r1.wrapInputStream(r0)
            return r0
    }

    @Override
    public final int getResponseCode() {
            r2 = this;
            java.net.URLConnection r0 = r2.abF
            boolean r1 = r0 instanceof java.net.HttpURLConnection
            if (r1 == 0) goto L14
            java.net.HttpURLConnection r0 = (java.net.HttpURLConnection) r0     // Catch: java.lang.Throwable -> Ld
            int r0 = r0.getResponseCode()     // Catch: java.lang.Throwable -> Ld
            return r0
        Ld:
            r0 = move-exception
            java.io.IOException r1 = new java.io.IOException
            r1.<init>(r0)
            throw r1
        L14:
            r0 = 0
            return r0
    }

    @Override
    public final java.util.Map<java.lang.String, java.util.List<java.lang.String>> ue() {
            r1 = this;
            java.net.URLConnection r0 = r1.abF
            java.util.Map r0 = r0.getRequestProperties()
            return r0
    }

    @Override
    public final java.util.Map<java.lang.String, java.util.List<java.lang.String>> uf() {
            r1 = this;
            java.net.URLConnection r0 = r1.abF
            java.util.Map r0 = r0.getHeaderFields()
            return r0
    }

    @Override
    public final void ug() {
            r0 = this;
            return
    }
}

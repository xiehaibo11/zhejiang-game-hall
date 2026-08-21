package com.kwad.framework.filedownloader.download;

public final class ConnectTask {
    final int acc;
    final com.kwad.framework.filedownloader.d.b acd;
    private com.kwad.framework.filedownloader.download.a ace;
    private java.lang.String acf;
    private java.util.Map<java.lang.String, java.util.List<java.lang.String>> acg;
    private java.util.List<java.lang.String> ach;
    final java.lang.String url;

    class Reconnect extends java.lang.Throwable {
        private static final long serialVersionUID = 2940866805654257562L;
        final com.kwad.framework.filedownloader.download.ConnectTask this$0;

        Reconnect(com.kwad.framework.filedownloader.download.ConnectTask r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }
    }

    static class a {
        private com.kwad.framework.filedownloader.d.b acd;
        private java.lang.String acf;
        private java.lang.Integer aci;
        private com.kwad.framework.filedownloader.download.a acj;
        private java.lang.String url;

        a() {
                r0 = this;
                r0.<init>()
                return
        }

        public final com.kwad.framework.filedownloader.download.ConnectTask.a a(com.kwad.framework.filedownloader.d.b r1) {
                r0 = this;
                r0.acd = r1
                return r0
        }

        public final com.kwad.framework.filedownloader.download.ConnectTask.a a(com.kwad.framework.filedownloader.download.a r1) {
                r0 = this;
                r0.acj = r1
                return r0
        }

        public final com.kwad.framework.filedownloader.download.ConnectTask.a ba(java.lang.String r1) {
                r0 = this;
                r0.url = r1
                return r0
        }

        public final com.kwad.framework.filedownloader.download.ConnectTask.a bb(java.lang.String r1) {
                r0 = this;
                r0.acf = r1
                return r0
        }

        public final com.kwad.framework.filedownloader.download.ConnectTask.a bn(int r1) {
                r0 = this;
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                r0.aci = r1
                return r0
        }

        final com.kwad.framework.filedownloader.download.ConnectTask uo() {
                r9 = this;
                java.lang.Integer r0 = r9.aci
                if (r0 == 0) goto L1e
                com.kwad.framework.filedownloader.download.a r2 = r9.acj
                if (r2 == 0) goto L1e
                java.lang.String r1 = r9.url
                if (r1 == 0) goto L1e
                com.kwad.framework.filedownloader.download.ConnectTask r8 = new com.kwad.framework.filedownloader.download.ConnectTask
                int r3 = r0.intValue()
                java.lang.String r4 = r9.url
                java.lang.String r5 = r9.acf
                com.kwad.framework.filedownloader.d.b r6 = r9.acd
                r7 = 0
                r1 = r8
                r1.<init>(r2, r3, r4, r5, r6, r7)
                return r8
            L1e:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                r0.<init>()
                throw r0
        }
    }

    private ConnectTask(com.kwad.framework.filedownloader.download.a r1, int r2, java.lang.String r3, java.lang.String r4, com.kwad.framework.filedownloader.d.b r5) {
            r0 = this;
            r0.<init>()
            r0.acc = r2
            r0.url = r3
            r0.acf = r4
            r0.acd = r5
            r0.ace = r1
            return
    }

    ConnectTask(com.kwad.framework.filedownloader.download.a r1, int r2, java.lang.String r3, java.lang.String r4, com.kwad.framework.filedownloader.d.b r5, byte r6) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    private void a(com.kwad.framework.filedownloader.a.b r5) {
            r4 = this;
            com.kwad.framework.filedownloader.d.b r0 = r4.acd
            if (r0 == 0) goto L58
            java.util.HashMap r0 = r0.vl()
            if (r0 == 0) goto L58
            boolean r1 = com.kwad.framework.filedownloader.f.d.aeI
            if (r1 == 0) goto L22
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            int r3 = r4.acc
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            r2 = 1
            r1[r2] = r0
            java.lang.String r2 = "%d add outside header: %s"
            com.kwad.framework.filedownloader.f.d.e(r4, r2, r1)
        L22:
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L2a:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L58
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r1 = r1.getValue()
            java.util.List r1 = (java.util.List) r1
            if (r1 == 0) goto L2a
            java.util.Iterator r1 = r1.iterator()
        L48:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto L2a
            java.lang.Object r3 = r1.next()
            java.lang.String r3 = (java.lang.String) r3
            r5.addHeader(r2, r3)
            goto L48
        L58:
            return
    }

    private void b(com.kwad.framework.filedownloader.a.b r6) {
            r5 = this;
            java.lang.String r0 = r5.acf
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lf
            java.lang.String r0 = r5.acf
            java.lang.String r1 = "If-Match"
            r6.addHeader(r1, r0)
        Lf:
            com.kwad.framework.filedownloader.download.a r0 = r5.ace
            long r0 = r0.acm
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = 1
            r2 = 0
            if (r0 != 0) goto L2e
            java.lang.Object[] r0 = new java.lang.Object[r1]
            com.kwad.framework.filedownloader.download.a r1 = r5.ace
            long r3 = r1.acl
            java.lang.Long r1 = java.lang.Long.valueOf(r3)
            r0[r2] = r1
            java.lang.String r1 = "bytes=%d-"
            java.lang.String r0 = com.kwad.framework.filedownloader.f.f.b(r1, r0)
            goto L4b
        L2e:
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.kwad.framework.filedownloader.download.a r3 = r5.ace
            long r3 = r3.acl
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r0[r2] = r3
            com.kwad.framework.filedownloader.download.a r2 = r5.ace
            long r2 = r2.acm
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            r0[r1] = r2
            java.lang.String r1 = "bytes=%d-%d"
            java.lang.String r0 = com.kwad.framework.filedownloader.f.f.b(r1, r0)
        L4b:
            java.lang.String r1 = "Range"
            r6.addHeader(r1, r0)
            return
    }

    private void c(com.kwad.framework.filedownloader.a.b r3) {
            r2 = this;
            com.kwad.framework.filedownloader.d.b r0 = r2.acd
            java.lang.String r1 = "User-Agent"
            if (r0 == 0) goto L10
            java.util.HashMap r0 = r0.vl()
            java.lang.Object r0 = r0.get(r1)
            if (r0 != 0) goto L17
        L10:
            java.lang.String r0 = com.kwad.framework.filedownloader.f.f.vU()
            r3.addHeader(r1, r0)
        L17:
            return
    }

    public final java.util.Map<java.lang.String, java.util.List<java.lang.String>> getRequestHeader() {
            r1 = this;
            java.util.Map<java.lang.String, java.util.List<java.lang.String>> r0 = r1.acg
            return r0
    }

    final com.kwad.framework.filedownloader.a.b uk() {
            r4 = this;
            com.kwad.framework.filedownloader.download.b r0 = com.kwad.framework.filedownloader.download.b.up()
            java.lang.String r1 = r4.url
            com.kwad.framework.filedownloader.a.b r0 = r0.bc(r1)
            r4.a(r0)
            r4.b(r0)
            r4.c(r0)
            java.util.Map r1 = r0.ue()
            r4.acg = r1
            boolean r1 = com.kwad.framework.filedownloader.f.d.aeI
            if (r1 == 0) goto L33
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            int r3 = r4.acc
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            r2 = 1
            java.util.Map<java.lang.String, java.util.List<java.lang.String>> r3 = r4.acg
            r1[r2] = r3
            java.lang.String r2 = "%s request header %s"
            com.kwad.framework.filedownloader.f.d.c(r4, r2, r1)
        L33:
            r0.execute()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r4.ach = r1
            java.util.Map<java.lang.String, java.util.List<java.lang.String>> r2 = r4.acg
            com.kwad.framework.filedownloader.a.b r0 = com.kwad.framework.filedownloader.a.d.a(r2, r0, r1)
            return r0
    }

    final boolean ul() {
            r4 = this;
            com.kwad.framework.filedownloader.download.a r0 = r4.ace
            long r0 = r0.acl
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    final java.lang.String um() {
            r2 = this;
            java.util.List<java.lang.String> r0 = r2.ach
            if (r0 == 0) goto L19
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L19
            java.util.List<java.lang.String> r0 = r2.ach
            int r1 = r0.size()
            int r1 = r1 + (-1)
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
        L19:
            r0 = 0
            return r0
    }

    public final com.kwad.framework.filedownloader.download.a un() {
            r1 = this;
            com.kwad.framework.filedownloader.download.a r0 = r1.ace
            return r0
    }
}

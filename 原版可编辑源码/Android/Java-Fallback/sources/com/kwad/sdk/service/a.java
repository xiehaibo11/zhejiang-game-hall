package com.kwad.sdk.service;

public class a extends com.kwad.sdk.l.a {
    private com.kwad.sdk.c aHu;
    private final java.util.Map<java.lang.String, java.lang.Integer> aHv;
    private android.app.Service aHw;
    private final com.kwad.sdk.service.a.a aHx;

    static class a extends android.os.Handler {
        final java.lang.ref.WeakReference<com.kwad.sdk.service.a> aHy;

        public a(com.kwad.sdk.service.a r2) {
                r1 = this;
                r1.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r2)
                r1.aHy = r0
                return
        }

        @Override
        public final void handleMessage(android.os.Message r5) {
                r4 = this;
                java.lang.ref.WeakReference<com.kwad.sdk.service.a> r0 = r4.aHy
                java.lang.Object r0 = r0.get()
                com.kwad.sdk.service.a r0 = (com.kwad.sdk.service.a) r0
                if (r0 != 0) goto Lb
                return
            Lb:
                int r5 = r5.what
                r1 = 1
                if (r5 == r1) goto L11
                goto L2e
            L11:
                com.kwad.sdk.c r5 = com.kwad.sdk.service.a.a(r0)
                if (r5 == 0) goto L29
                com.kwad.sdk.c r5 = com.kwad.sdk.service.a.a(r0)
                boolean r5 = r5.wV()
                if (r5 == 0) goto L29
                android.app.Service r5 = com.kwad.sdk.service.a.b(r0)
                r5.stopSelf()
                return
            L29:
                r2 = 30000(0x7530, double:1.4822E-319)
                r4.sendEmptyMessageDelayed(r1, r2)
            L2e:
                return
        }
    }

    public a() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.aHv = r0
            com.kwad.sdk.service.a$a r0 = new com.kwad.sdk.service.a$a
            r0.<init>(r1)
            r1.aHx = r0
            return
    }

    static com.kwad.sdk.c a(com.kwad.sdk.service.a r0) {
            com.kwad.sdk.c r0 = r0.aHu
            return r0
    }

    static android.app.Service b(com.kwad.sdk.service.a r0) {
            android.app.Service r0 = r0.aHw
            return r0
    }

    private void h(android.content.Intent r5) {
            r4 = this;
            if (r5 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "download_service_type_tag"
            r1 = 0
            int r0 = r5.getIntExtra(r0, r1)     // Catch: java.lang.Exception -> L5b
            java.lang.String r1 = "download_service_id_tag"
            java.lang.String r1 = r5.getStringExtra(r1)     // Catch: java.lang.Exception -> L5b
            java.lang.String r2 = "download_service_args_tag"
            java.io.Serializable r5 = r5.getSerializableExtra(r2)     // Catch: java.lang.Exception -> L5b
            com.kwad.sdk.DownloadTask$DownloadRequest r5 = (com.kwad.sdk.DownloadTask.DownloadRequest) r5     // Catch: java.lang.Exception -> L5b
            java.util.Map<java.lang.String, java.lang.Integer> r2 = r4.aHv     // Catch: java.lang.Exception -> L5b
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Exception -> L5b
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.lang.Exception -> L5b
            r3 = 1
            if (r0 == r3) goto L4b
            r5 = 2
            if (r0 == r5) goto L41
            r5 = 3
            if (r0 == r5) goto L37
            r5 = 4
            if (r0 == r5) goto L2d
            goto L36
        L2d:
            com.kwad.sdk.c r5 = r4.aHu     // Catch: java.lang.Exception -> L5b
            int r0 = r2.intValue()     // Catch: java.lang.Exception -> L5b
            r5.cancel(r0)     // Catch: java.lang.Exception -> L5b
        L36:
            return
        L37:
            com.kwad.sdk.c r5 = r4.aHu     // Catch: java.lang.Exception -> L5b
            int r0 = r2.intValue()     // Catch: java.lang.Exception -> L5b
            r5.resume(r0)     // Catch: java.lang.Exception -> L5b
            goto L5b
        L41:
            com.kwad.sdk.c r5 = r4.aHu     // Catch: java.lang.Exception -> L5b
            int r0 = r2.intValue()     // Catch: java.lang.Exception -> L5b
            r5.pause(r0)     // Catch: java.lang.Exception -> L5b
            goto L5b
        L4b:
            com.kwad.sdk.c r0 = r4.aHu     // Catch: java.lang.Exception -> L5b
            r2 = 0
            int r5 = r0.a(r5, r2)     // Catch: java.lang.Exception -> L5b
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r4.aHv     // Catch: java.lang.Exception -> L5b
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> L5b
            r0.put(r1, r5)     // Catch: java.lang.Exception -> L5b
        L5b:
            return
    }

    public static void register() {
            java.lang.Class<com.kwad.sdk.api.proxy.app.DownloadService> r0 = com.kwad.sdk.api.proxy.app.DownloadService.class
            java.lang.Class<com.kwad.sdk.service.a> r1 = com.kwad.sdk.service.a.class
            com.kwad.sdk.service.b.a(r0, r1)
            return
    }

    @Override
    public void onCreate(android.app.Service r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            r3.aHw = r4
            com.kwad.sdk.c r4 = com.kwad.sdk.c.wP()
            r3.aHu = r4
            com.kwad.sdk.service.a$a r4 = r3.aHx
            r0 = 1
            r1 = 30000(0x7530, double:1.4822E-319)
            r4.sendEmptyMessageDelayed(r0, r1)
            return
    }

    @Override
    public int onStartCommand(android.app.Service r1, android.content.Intent r2, int r3, int r4) {
            r0 = this;
            r0.h(r2)
            int r1 = super.onStartCommand(r1, r2, r3, r4)
            return r1
    }
}

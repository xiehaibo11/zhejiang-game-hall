package com.tkay.china.common.service;

public class ApkDownloadService extends android.app.Service {
    public static final java.lang.String a = "extra_unique_id";
    private static final java.lang.String b = null;
    private java.util.Map<java.lang.String, com.tkay.china.common.a.d> c;


    public class a extends android.os.Binder implements com.tkay.china.common.service.a {
        final com.tkay.china.common.service.ApkDownloadService a;

        public a(com.tkay.china.common.service.ApkDownloadService r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void a(java.lang.String r2) {
                r1 = this;
                com.tkay.china.common.service.ApkDownloadService r0 = r1.a
                com.tkay.china.common.service.ApkDownloadService.a(r0, r2)
                return
        }

        @Override
        public final boolean a() {
                r1 = this;
                com.tkay.china.common.service.ApkDownloadService r0 = r1.a
                java.util.Map r0 = com.tkay.china.common.service.ApkDownloadService.a(r0)
                int r0 = r0.size()
                if (r0 != 0) goto Le
                r0 = 1
                return r0
            Le:
                r0 = 0
                return r0
        }

        @Override
        public final void b(java.lang.String r2) {
                r1 = this;
                com.tkay.china.common.service.ApkDownloadService r0 = r1.a
                java.util.Map r0 = com.tkay.china.common.service.ApkDownloadService.a(r0)
                java.lang.Object r0 = r0.get(r2)
                com.tkay.china.common.a.d r0 = (com.tkay.china.common.a.d) r0
                if (r0 == 0) goto L1a
                r0.b()
                com.tkay.china.common.service.ApkDownloadService r0 = r1.a
                java.util.Map r0 = com.tkay.china.common.service.ApkDownloadService.a(r0)
                r0.remove(r2)
            L1a:
                return
        }

        @Override
        public final void c(java.lang.String r2) {
                r1 = this;
                com.tkay.china.common.service.ApkDownloadService r0 = r1.a
                java.util.Map r0 = com.tkay.china.common.service.ApkDownloadService.a(r0)
                java.lang.Object r0 = r0.get(r2)
                com.tkay.china.common.a.d r0 = (com.tkay.china.common.a.d) r0
                if (r0 == 0) goto L1a
                r0.a()
                com.tkay.china.common.service.ApkDownloadService r0 = r1.a
                java.util.Map r0 = com.tkay.china.common.service.ApkDownloadService.a(r0)
                r0.remove(r2)
            L1a:
                return
        }
    }

    static {
            java.lang.Class<com.tkay.china.common.service.ApkDownloadService> r0 = com.tkay.china.common.service.ApkDownloadService.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.china.common.service.ApkDownloadService.b = r0
            return
    }

    public ApkDownloadService() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.c = r0
            return
    }

    static java.util.Map a(com.tkay.china.common.service.ApkDownloadService r0) {
            java.util.Map<java.lang.String, com.tkay.china.common.a.d> r0 = r0.c
            return r0
    }

    static void a(com.tkay.china.common.service.ApkDownloadService r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    private void a(java.lang.String r3) {
            r2 = this;
            android.content.Context r0 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L2c
            com.tkay.china.common.a r0 = com.tkay.china.common.a.a(r0)     // Catch: java.lang.Throwable -> L2c
            java.util.Map r0 = r0.f()     // Catch: java.lang.Throwable -> L2c
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Throwable -> L2c
            com.tkay.china.common.a.e r0 = (com.tkay.china.common.a.e) r0     // Catch: java.lang.Throwable -> L2c
            if (r0 != 0) goto L15
            return
        L15:
            com.tkay.china.common.a.d r1 = new com.tkay.china.common.a.d     // Catch: java.lang.Throwable -> L2c
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L2c
            com.tkay.china.common.service.ApkDownloadService$1 r0 = new com.tkay.china.common.service.ApkDownloadService$1     // Catch: java.lang.Throwable -> L2c
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L2c
            r1.a(r0)     // Catch: java.lang.Throwable -> L2c
            java.util.Map<java.lang.String, com.tkay.china.common.a.d> r0 = r2.c     // Catch: java.lang.Throwable -> L2c
            if (r0 == 0) goto L2b
            java.util.Map<java.lang.String, com.tkay.china.common.a.d> r0 = r2.c     // Catch: java.lang.Throwable -> L2c
            r0.put(r3, r1)     // Catch: java.lang.Throwable -> L2c
        L2b:
            return
        L2c:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    @Override
    public android.os.IBinder onBind(android.content.Intent r2) {
            r1 = this;
            if (r2 == 0) goto Lb
            java.lang.String r0 = "extra_unique_id"
            java.lang.String r2 = r2.getStringExtra(r0)
            r1.a(r2)
        Lb:
            com.tkay.china.common.service.ApkDownloadService$a r2 = new com.tkay.china.common.service.ApkDownloadService$a
            r2.<init>(r1)
            return r2
    }

    @Override
    public void onCreate() {
            r0 = this;
            super.onCreate()
            return
    }

    @Override
    public void onDestroy() {
            r0 = this;
            super.onDestroy()
            return
    }

    @Override
    public void onTaskRemoved(android.content.Intent r2) {
            r1 = this;
            android.content.Context r0 = r1.getApplicationContext()
            com.tkay.china.common.b.a r0 = com.tkay.china.common.b.a.a(r0)
            r0.a()
            super.onTaskRemoved(r2)
            return
    }

    @Override
    public boolean onUnbind(android.content.Intent r1) {
            r0 = this;
            boolean r1 = super.onUnbind(r1)
            return r1
    }
}

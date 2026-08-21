package com.sigmob.sdk.base.services;

public class e implements com.sigmob.sdk.base.services.j.a {
    private static final android.location.LocationListener a = null;
    private static android.location.LocationManager b;
    private static java.lang.String c;
    private com.sigmob.sdk.base.services.k d;


    static {
            com.sigmob.sdk.base.services.e$1 r0 = new com.sigmob.sdk.base.services.e$1
            r0.<init>()
            com.sigmob.sdk.base.services.e.a = r0
            java.lang.String r0 = "network"
            com.sigmob.sdk.base.services.e.c = r0
            return
    }

    e() {
            r4 = this;
            r4.<init>()
            com.sigmob.sdk.base.services.k r0 = com.sigmob.sdk.base.services.k.b
            r4.d = r0
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            if (r0 != 0) goto Le
            return
        Le:
            android.location.LocationManager r0 = a()
            if (r0 == 0) goto L31
            android.location.Criteria r1 = new android.location.Criteria
            r1.<init>()
            r2 = 2
            r1.setAccuracy(r2)
            r2 = 0
            r1.setAltitudeRequired(r2)
            r1.setBearingRequired(r2)
            r1.setCostAllowed(r2)
            r3 = 1
            r1.setPowerRequirement(r3)
            java.lang.String r0 = r0.getBestProvider(r1, r2)
            com.sigmob.sdk.base.services.e.c = r0
        L31:
            return
    }

    static android.location.LocationManager a() {
            android.location.LocationManager r0 = com.sigmob.sdk.base.services.e.b
            if (r0 != 0) goto L1a
            java.lang.Class<com.sigmob.sdk.base.services.e> r0 = com.sigmob.sdk.base.services.e.class
            monitor-enter(r0)
            android.location.LocationManager r1 = com.sigmob.sdk.base.services.e.b     // Catch: java.lang.Throwable -> L17
            if (r1 != 0) goto L15
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()     // Catch: java.lang.Throwable -> L17
            android.location.LocationManager r1 = r1.getLocationManager()     // Catch: java.lang.Throwable -> L17
            com.sigmob.sdk.base.services.e.b = r1     // Catch: java.lang.Throwable -> L17
        L15:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            goto L1a
        L17:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            throw r1
        L1a:
            android.location.LocationManager r0 = com.sigmob.sdk.base.services.e.b
            return r0
    }

    private void f() {
            r2 = this;
            android.location.LocationManager r0 = com.sigmob.sdk.base.services.e.b     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto Lb
            android.location.LocationManager r0 = com.sigmob.sdk.base.services.e.b     // Catch: java.lang.Throwable -> Lf
            android.location.LocationListener r1 = com.sigmob.sdk.base.services.e.a     // Catch: java.lang.Throwable -> Lf
            r0.removeUpdates(r1)     // Catch: java.lang.Throwable -> Lf
        Lb:
            r0 = 0
            com.sigmob.sdk.base.services.e.b = r0     // Catch: java.lang.Throwable -> Lf
            goto L17
        Lf:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L17:
            return
    }

    private void g() {
            r6 = this;
            android.location.LocationManager r0 = a()     // Catch: java.lang.Throwable -> L27
            if (r0 == 0) goto L2f
            java.lang.String r1 = com.sigmob.sdk.base.services.e.c     // Catch: java.lang.Throwable -> L27
            if (r1 == 0) goto L2f
            java.lang.String r1 = com.sigmob.sdk.base.services.e.c     // Catch: java.lang.Throwable -> L27
            boolean r1 = r0.isProviderEnabled(r1)     // Catch: java.lang.Throwable -> L27
            if (r1 == 0) goto L2f
            java.lang.String r1 = "private :use_location "
            com.czhj.sdk.logger.SigmobLog.d(r1)     // Catch: java.lang.Throwable -> L27
            java.lang.String r1 = com.sigmob.sdk.base.services.e.c     // Catch: java.lang.Throwable -> L27
            r2 = 10000(0x2710, double:4.9407E-320)
            r4 = 1092616192(0x41200000, float:10.0)
            android.location.LocationListener r5 = com.sigmob.sdk.base.services.e.a     // Catch: java.lang.Throwable -> L27
            r0.requestLocationUpdates(r1, r2, r4, r5)     // Catch: java.lang.Throwable -> L27
            com.sigmob.sdk.base.services.k r0 = com.sigmob.sdk.base.services.k.a     // Catch: java.lang.Throwable -> L27
            r6.d = r0     // Catch: java.lang.Throwable -> L27
            goto L2f
        L27:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L2f:
            return
    }

    @Override
    public boolean b() {
            r2 = this;
            com.sigmob.sdk.base.services.k r0 = r2.d
            com.sigmob.sdk.base.services.k r1 = com.sigmob.sdk.base.services.k.a
            if (r0 == r1) goto Lb
            r2.g()
            r0 = 1
            return r0
        Lb:
            r0 = 0
            return r0
    }

    @Override
    public com.sigmob.sdk.base.services.k c() {
            r1 = this;
            com.sigmob.sdk.base.services.k r0 = r1.d
            return r0
    }

    @Override
    public void d() {
            r2 = this;
            com.sigmob.sdk.base.services.k r0 = r2.d
            com.sigmob.sdk.base.services.k r1 = com.sigmob.sdk.base.services.k.a
            if (r0 != r1) goto Ld
            r2.f()
            com.sigmob.sdk.base.services.k r0 = com.sigmob.sdk.base.services.k.b
            r2.d = r0
        Ld:
            return
    }

    @Override
    public java.lang.Error e() {
            r1 = this;
            r0 = 0
            return r0
    }
}

package com.kwad.components.ad.splashscreen.c;

public final class o extends com.kwad.components.ad.splashscreen.c.e {
    private com.kwad.sdk.core.download.a.a DE;


    public o() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String U(android.content.Context r4) {
            r0 = 0
            android.content.pm.PackageManager r1 = r4.getPackageManager()     // Catch: java.lang.Exception -> L1e
            java.lang.String r2 = r4.getPackageName()     // Catch: java.lang.Exception -> L1e
            r3 = 0
            android.content.pm.PackageInfo r1 = r1.getPackageInfo(r2, r3)     // Catch: java.lang.Exception -> L1e
            if (r1 != 0) goto L11
            return r0
        L11:
            android.content.pm.ApplicationInfo r1 = r1.applicationInfo     // Catch: java.lang.Exception -> L1e
            int r1 = r1.labelRes     // Catch: java.lang.Exception -> L1e
            android.content.res.Resources r4 = r4.getResources()     // Catch: java.lang.Exception -> L1e
            java.lang.String r4 = r4.getString(r1)     // Catch: java.lang.Exception -> L1e
            return r4
        L1e:
            r4 = move-exception
            r4.printStackTrace()
            return r0
    }

    static java.lang.String V(android.content.Context r0) {
            java.lang.String r0 = U(r0)
            return r0
    }

    static android.content.Context a(com.kwad.components.ad.splashscreen.c.o r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.splashscreen.c.o$1 r0 = new com.kwad.components.ad.splashscreen.c.o$1
            r0.<init>(r2)
            r2.DE = r0
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            com.kwad.sdk.core.download.a.a r1 = r2.DE
            r0.b(r1)
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            com.kwad.sdk.core.download.a.a r0 = r2.DE
            if (r0 == 0) goto Ld
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            com.kwad.sdk.core.download.a.a r1 = r2.DE
            r0.c(r1)
        Ld:
            return
    }
}

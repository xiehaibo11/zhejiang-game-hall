package com.kwad.sdk.utils;

public final class at {
    private static boolean IV() {
            java.lang.Boolean r0 = com.kwad.framework.a.a.ml
            boolean r0 = r0.booleanValue()
            r1 = 0
            if (r0 != 0) goto La
            return r1
        La:
            java.lang.Class<com.kwad.sdk.components.DevelopMangerComponents> r0 = com.kwad.sdk.components.DevelopMangerComponents.class
            com.kwad.sdk.components.c.f(r0)
            return r1
    }

    public static boolean IW() {
            boolean r0 = IV()
            r1 = 1
            if (r0 == 0) goto L8
            return r1
        L8:
            r0 = 0
            com.kwad.sdk.api.SdkConfig r2 = com.kwad.sdk.service.ServiceProvider.HE()     // Catch: java.lang.Throwable -> L1a
            if (r2 == 0) goto L1a
            com.kwad.sdk.api.KsCustomController r2 = r2.ksCustomController     // Catch: java.lang.Throwable -> L1a
            if (r2 == 0) goto L1a
            boolean r2 = r2.canReadLocation()     // Catch: java.lang.Throwable -> L1a
            if (r2 != 0) goto L1a
            return r1
        L1a:
            return r0
    }

    public static android.location.Location IX() {
            com.kwad.sdk.api.SdkConfig r0 = com.kwad.sdk.service.ServiceProvider.HE()     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto Lf
            com.kwad.sdk.api.KsCustomController r0 = r0.ksCustomController     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto Lf
            android.location.Location r0 = r0.getLocation()     // Catch: java.lang.Throwable -> Lf
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public static boolean IY() {
            boolean r0 = IV()
            r1 = 1
            if (r0 == 0) goto L8
            return r1
        L8:
            r0 = 0
            com.kwad.sdk.api.SdkConfig r2 = com.kwad.sdk.service.ServiceProvider.HE()     // Catch: java.lang.Throwable -> L1a
            if (r2 == 0) goto L1a
            com.kwad.sdk.api.KsCustomController r2 = r2.ksCustomController     // Catch: java.lang.Throwable -> L1a
            if (r2 == 0) goto L1a
            boolean r2 = r2.canUsePhoneState()     // Catch: java.lang.Throwable -> L1a
            if (r2 != 0) goto L1a
            return r1
        L1a:
            return r0
    }

    public static java.lang.String IZ() {
            com.kwad.sdk.api.SdkConfig r0 = com.kwad.sdk.service.ServiceProvider.HE()     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto Lf
            com.kwad.sdk.api.KsCustomController r0 = r0.ksCustomController     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto Lf
            java.lang.String r0 = r0.getImei()     // Catch: java.lang.Throwable -> Lf
            return r0
        Lf:
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String[] Ja() {
            com.kwad.sdk.api.SdkConfig r0 = com.kwad.sdk.service.ServiceProvider.HE()     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto Lf
            com.kwad.sdk.api.KsCustomController r0 = r0.ksCustomController     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto Lf
            java.lang.String[] r0 = r0.getImeis()     // Catch: java.lang.Throwable -> Lf
            return r0
        Lf:
            java.lang.String r0 = ""
            java.lang.String[] r0 = new java.lang.String[]{r0, r0}
            return r0
    }

    public static java.lang.String Jb() {
            com.kwad.sdk.api.SdkConfig r0 = com.kwad.sdk.service.ServiceProvider.HE()     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto Lf
            com.kwad.sdk.api.KsCustomController r0 = r0.ksCustomController     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto Lf
            java.lang.String r0 = r0.getAndroidId()     // Catch: java.lang.Throwable -> Lf
            return r0
        Lf:
            java.lang.String r0 = ""
            return r0
    }

    public static boolean Jc() {
            boolean r0 = IV()
            r1 = 1
            if (r0 == 0) goto L8
            return r1
        L8:
            r0 = 0
            com.kwad.sdk.api.SdkConfig r2 = com.kwad.sdk.service.ServiceProvider.HE()     // Catch: java.lang.Throwable -> L1a
            if (r2 == 0) goto L1a
            com.kwad.sdk.api.KsCustomController r2 = r2.ksCustomController     // Catch: java.lang.Throwable -> L1a
            if (r2 == 0) goto L1a
            boolean r2 = r2.canUseMacAddress()     // Catch: java.lang.Throwable -> L1a
            if (r2 != 0) goto L1a
            return r1
        L1a:
            return r0
    }

    public static java.lang.String Jd() {
            com.kwad.sdk.api.SdkConfig r0 = com.kwad.sdk.service.ServiceProvider.HE()     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto Lf
            com.kwad.sdk.api.KsCustomController r0 = r0.ksCustomController     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto Lf
            java.lang.String r0 = r0.getMacAddress()     // Catch: java.lang.Throwable -> Lf
            return r0
        Lf:
            java.lang.String r0 = ""
            return r0
    }

    public static boolean Je() {
            boolean r0 = IV()
            r1 = 1
            if (r0 == 0) goto L8
            return r1
        L8:
            r0 = 0
            com.kwad.sdk.api.SdkConfig r2 = com.kwad.sdk.service.ServiceProvider.HE()     // Catch: java.lang.Throwable -> L1a
            if (r2 == 0) goto L1a
            com.kwad.sdk.api.KsCustomController r2 = r2.ksCustomController     // Catch: java.lang.Throwable -> L1a
            if (r2 == 0) goto L1a
            boolean r2 = r2.canUseOaid()     // Catch: java.lang.Throwable -> L1a
            if (r2 != 0) goto L1a
            return r1
        L1a:
            return r0
    }

    public static java.lang.String Jf() {
            com.kwad.sdk.api.SdkConfig r0 = com.kwad.sdk.service.ServiceProvider.HE()     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto Lf
            com.kwad.sdk.api.KsCustomController r0 = r0.ksCustomController     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto Lf
            java.lang.String r0 = r0.getOaid()     // Catch: java.lang.Throwable -> Lf
            return r0
        Lf:
            java.lang.String r0 = ""
            return r0
    }

    public static boolean Jg() {
            boolean r0 = IV()
            r1 = 1
            if (r0 == 0) goto L8
            return r1
        L8:
            r0 = 0
            com.kwad.sdk.api.SdkConfig r2 = com.kwad.sdk.service.ServiceProvider.HE()     // Catch: java.lang.Throwable -> L1a
            if (r2 == 0) goto L1a
            com.kwad.sdk.api.KsCustomController r2 = r2.ksCustomController     // Catch: java.lang.Throwable -> L1a
            if (r2 == 0) goto L1a
            boolean r2 = r2.canUseNetworkState()     // Catch: java.lang.Throwable -> L1a
            if (r2 != 0) goto L1a
            return r1
        L1a:
            return r0
    }

    public static boolean Jh() {
            boolean r0 = IV()
            r1 = 1
            if (r0 == 0) goto L8
            return r1
        L8:
            r0 = 0
            com.kwad.sdk.api.SdkConfig r2 = com.kwad.sdk.service.ServiceProvider.HE()     // Catch: java.lang.Throwable -> L1a
            if (r2 == 0) goto L1a
            com.kwad.sdk.api.KsCustomController r2 = r2.ksCustomController     // Catch: java.lang.Throwable -> L1a
            if (r2 == 0) goto L1a
            boolean r2 = r2.canUseStoragePermission()     // Catch: java.lang.Throwable -> L1a
            if (r2 != 0) goto L1a
            return r1
        L1a:
            return r0
    }

    public static boolean Ji() {
            boolean r0 = IV()
            r1 = 1
            if (r0 == 0) goto L8
            return r1
        L8:
            r0 = 0
            com.kwad.sdk.api.SdkConfig r2 = com.kwad.sdk.service.ServiceProvider.HE()     // Catch: java.lang.Throwable -> L1a
            if (r2 == 0) goto L1a
            com.kwad.sdk.api.KsCustomController r2 = r2.ksCustomController     // Catch: java.lang.Throwable -> L1a
            if (r2 == 0) goto L1a
            boolean r2 = r2.canReadInstalledPackages()     // Catch: java.lang.Throwable -> L1a
            if (r2 != 0) goto L1a
            return r1
        L1a:
            return r0
    }

    public static java.util.List<java.lang.String> Jj() {
            com.kwad.sdk.api.SdkConfig r0 = com.kwad.sdk.service.ServiceProvider.HE()     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto Lf
            com.kwad.sdk.api.KsCustomController r0 = r0.ksCustomController     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto Lf
            java.util.List r0 = r0.getInstalledPackages()     // Catch: java.lang.Throwable -> Lf
            return r0
        Lf:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            return r0
    }
}

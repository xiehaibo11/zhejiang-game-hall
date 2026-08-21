package com.kwad.sdk.crash.online.monitor.block;

public class BlockInjector {
    private static volatile boolean aAJ;
    private static volatile boolean aAK;



    public BlockInjector() {
            r0 = this;
            r0.<init>()
            return
    }

    static void E(java.lang.String r0) {
            onError(r0)
            return
    }

    private static java.lang.String a(com.kwad.sdk.crash.online.monitor.a.b r2) {
            if (r2 == 0) goto Ld
            java.lang.String r0 = r2.aBd
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Ld
            java.lang.String r2 = r2.aBd
            goto Lf
        Ld:
            java.lang.String r2 = "b25SZXBvcnRJc3N1ZQ=="
        Lf:
            java.lang.String r0 = new java.lang.String
            com.kwad.sdk.core.a.c$a r1 = com.kwad.sdk.core.a.c.AL()
            byte[] r2 = r1.decode(r2)
            r0.<init>(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r1 = "report methodName:"
            r2.<init>(r1)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.String r1 = "perfMonitor.Injector"
            com.kwad.sdk.core.e.c.d(r1, r2)
            return r0
    }

    private static java.lang.String b(com.kwad.sdk.crash.online.monitor.a.b r2) {
            if (r2 == 0) goto Ld
            java.lang.String r0 = r2.aBc
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Ld
            java.lang.String r2 = r2.aBc
            goto Lf
        Ld:
            java.lang.String r2 = "Y29tLnRlbmNlbnQubWF0cml4LnBsdWdpbi5QbHVnaW5MaXN0ZW5lcg=="
        Lf:
            java.lang.String r0 = new java.lang.String
            com.kwad.sdk.core.a.c$a r1 = com.kwad.sdk.core.a.c.AL()
            byte[] r2 = r1.decode(r2)
            r0.<init>(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r1 = "ListenerName:"
            r2.<init>(r1)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.String r1 = "perfMonitor.Injector"
            com.kwad.sdk.core.e.c.d(r1, r2)
            return r0
    }

    public static void b(com.kwad.sdk.crash.online.monitor.a.a r2) {
            boolean r0 = com.kwad.sdk.crash.online.monitor.block.BlockInjector.aAJ
            if (r0 == 0) goto L5
            return
        L5:
            com.kwad.sdk.crash.online.monitor.a.b r2 = c(r2)     // Catch: java.lang.Exception -> L1d
            java.lang.String r0 = b(r2)     // Catch: java.lang.Exception -> L1d
            java.lang.String r2 = a(r2)     // Catch: java.lang.Exception -> L1d
            com.kwad.sdk.crash.online.monitor.block.BlockInjector$1 r1 = new com.kwad.sdk.crash.online.monitor.block.BlockInjector$1     // Catch: java.lang.Exception -> L1d
            r1.<init>()     // Catch: java.lang.Exception -> L1d
            com.kwad.sdk.ranger.RangerInjector.a(r0, r2, r1)     // Catch: java.lang.Exception -> L1d
            r2 = 1
            com.kwad.sdk.crash.online.monitor.block.BlockInjector.aAJ = r2     // Catch: java.lang.Exception -> L1d
            return
        L1d:
            r2 = move-exception
            java.lang.String r2 = android.util.Log.getStackTraceString(r2)
            onError(r2)
            return
    }

    private static com.kwad.sdk.crash.online.monitor.a.b c(com.kwad.sdk.crash.online.monitor.a.a r3) {
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
            if (r0 == 0) goto Lf
            java.lang.String r0 = r0.getAppId()
            goto L11
        Lf:
            java.lang.String r0 = ""
        L11:
            r1 = 0
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L1c
            com.kwad.sdk.crash.online.monitor.a.b r1 = r3.eK(r0)
        L1c:
            return r1
    }

    private static void onError(java.lang.String r1) {
            com.kwad.sdk.crash.online.monitor.block.e.eJ(r1)
            java.lang.String r0 = "perfMonitor.Injector"
            com.kwad.sdk.core.e.c.w(r0, r1)
            return
    }

    public static void tryProxyOtherOutput(com.kwad.sdk.crash.online.monitor.a.a r5) {
            java.lang.String r0 = "perfMonitor.Injector"
            boolean r1 = com.kwad.sdk.crash.online.monitor.block.BlockInjector.aAK
            if (r1 == 0) goto L7
            return
        L7:
            com.kwad.sdk.crash.online.monitor.a.b r5 = c(r5)     // Catch: java.lang.Throwable -> L3b
            if (r5 != 0) goto Le
            return
        Le:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3b
            java.lang.String r2 = "featureConfig:"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L3b
            org.json.JSONObject r2 = r5.toJson()     // Catch: java.lang.Throwable -> L3b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L3b
            r1.append(r2)     // Catch: java.lang.Throwable -> L3b
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L3b
            com.kwad.sdk.core.e.c.d(r0, r1)     // Catch: java.lang.Throwable -> L3b
            java.lang.String r1 = r5.aBe     // Catch: java.lang.Throwable -> L3b
            java.lang.String r2 = r5.aBf     // Catch: java.lang.Throwable -> L3b
            java.lang.String r3 = r5.aBg     // Catch: java.lang.Throwable -> L3b
            java.lang.String r5 = r5.aBh     // Catch: java.lang.Throwable -> L3b
            com.kwad.sdk.crash.online.monitor.block.BlockInjector$2 r4 = new com.kwad.sdk.crash.online.monitor.block.BlockInjector$2     // Catch: java.lang.Throwable -> L3b
            r4.<init>()     // Catch: java.lang.Throwable -> L3b
            com.kwad.sdk.ranger.RangerInjector.tryProxyOtherOutput(r1, r2, r3, r5, r4)     // Catch: java.lang.Throwable -> L3b
            r5 = 1
            com.kwad.sdk.crash.online.monitor.block.BlockInjector.aAK = r5     // Catch: java.lang.Throwable -> L3b
            return
        L3b:
            r5 = move-exception
            java.lang.String r5 = android.util.Log.getStackTraceString(r5)
            com.kwad.sdk.core.e.c.w(r0, r5)
            return
    }
}

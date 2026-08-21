package com.kwad.sdk.crash.online.monitor;

public final class a {
    private static volatile boolean hasInit;


    static {
            return
    }

    private static com.kwad.sdk.crash.online.monitor.a.c EV() {
            com.kwad.sdk.crash.online.monitor.a.c r0 = new com.kwad.sdk.crash.online.monitor.a.c
            r0.<init>()
            com.kwad.sdk.crash.online.monitor.a.a r1 = new com.kwad.sdk.crash.online.monitor.a.a
            r1.<init>()
            r0.aBi = r1
            com.kwad.sdk.crash.online.monitor.a.a r1 = r0.aBi
            r2 = 5
            r1.aAZ = r2
            return r0
    }

    static boolean access$000() {
            boolean r0 = com.kwad.sdk.crash.online.monitor.a.hasInit
            return r0
    }

    static boolean access$002(boolean r0) {
            r0 = 1
            com.kwad.sdk.crash.online.monitor.a.hasInit = r0
            return r0
    }

    public static void dG(java.lang.String r1) {
            com.kwad.sdk.crash.online.monitor.a$1 r0 = new com.kwad.sdk.crash.online.monitor.a$1
            r0.<init>(r1)
            com.kwad.sdk.utils.g.execute(r0)
            return
    }

    public static com.kwad.sdk.crash.online.monitor.a.c ez(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto Lb
            com.kwad.sdk.crash.online.monitor.a.c r1 = EV()
            return r1
        Lb:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L19
            r0.<init>(r1)     // Catch: java.lang.Exception -> L19
            com.kwad.sdk.crash.online.monitor.a.c r1 = new com.kwad.sdk.crash.online.monitor.a.c     // Catch: java.lang.Exception -> L19
            r1.<init>()     // Catch: java.lang.Exception -> L19
            r1.parseJson(r0)     // Catch: java.lang.Exception -> L19
            return r1
        L19:
            r1 = move-exception
            java.lang.String r0 = "perfMonitor.MonitorManager"
            com.kwad.sdk.core.e.c.w(r0, r1)
            com.kwad.sdk.crash.online.monitor.a.c r1 = EV()
            return r1
    }
}

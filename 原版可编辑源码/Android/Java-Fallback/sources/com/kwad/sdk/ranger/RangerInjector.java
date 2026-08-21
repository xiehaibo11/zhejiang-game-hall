package com.kwad.sdk.ranger;

public class RangerInjector {



    public interface a {
        void eD(java.lang.String r1);
    }

    public interface b {
        void a(java.lang.String r1, long r2, long r4, java.lang.String r6, java.lang.String r7);

        void onError(java.lang.String r1);
    }

    public RangerInjector() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String E(org.json.JSONObject r1) {
            java.lang.String r0 = "threadStack"
            java.lang.String r1 = r1.optString(r0)     // Catch: java.lang.Exception -> L7
            goto L9
        L7:
            java.lang.String r1 = ""
        L9:
            return r1
    }

    private static long F(org.json.JSONObject r2) {
            java.lang.String r0 = "cost"
            long r0 = r2.optLong(r0)     // Catch: java.lang.Exception -> L7
            goto L9
        L7:
            r0 = 0
        L9:
            return r0
    }

    private static long G(org.json.JSONObject r2) {
            java.lang.String r0 = "time"
            long r0 = r2.optLong(r0)     // Catch: java.lang.Exception -> L7
            goto L9
        L7:
            r0 = 0
        L9:
            return r0
    }

    private static java.lang.String H(org.json.JSONObject r1) {
            java.lang.String r0 = "scene"
            java.lang.String r1 = r1.optString(r0)     // Catch: java.lang.Exception -> L7
            goto L9
        L7:
            java.lang.String r1 = ""
        L9:
            return r1
    }

    private static java.lang.String I(org.json.JSONObject r1) {
            java.lang.String r0 = "process"
            java.lang.String r1 = r1.optString(r0)     // Catch: java.lang.Exception -> L7
            goto L9
        L7:
            java.lang.String r1 = ""
        L9:
            return r1
    }

    static java.lang.String J(org.json.JSONObject r0) {
            java.lang.String r0 = E(r0)
            return r0
    }

    static long K(org.json.JSONObject r2) {
            long r0 = F(r2)
            return r0
    }

    static long L(org.json.JSONObject r2) {
            long r0 = G(r2)
            return r0
    }

    static java.lang.String M(org.json.JSONObject r0) {
            java.lang.String r0 = H(r0)
            return r0
    }

    static java.lang.String N(org.json.JSONObject r0) {
            java.lang.String r0 = I(r0)
            return r0
    }

    public static void a(java.lang.String r6, java.lang.String r7, com.kwad.sdk.ranger.RangerInjector.b r8) {
            java.lang.String r0 = "pluginListener"
            com.tencent.matrix.Matrix r1 = com.tencent.matrix.Matrix.with()     // Catch: java.lang.Exception -> L46
            java.lang.Class<com.tencent.matrix.trace.TracePlugin> r2 = com.tencent.matrix.trace.TracePlugin.class
            com.tencent.matrix.plugin.Plugin r1 = r1.getPluginByClass(r2)     // Catch: java.lang.Exception -> L46
            com.tencent.matrix.trace.TracePlugin r1 = (com.tencent.matrix.trace.TracePlugin) r1     // Catch: java.lang.Exception -> L46
            if (r1 != 0) goto L16
            java.lang.String r6 = "getPluginByClass is null"
            r8.onError(r6)     // Catch: java.lang.Exception -> L46
            return
        L16:
            java.lang.Object r2 = com.kwad.sdk.utils.s.f(r1, r0)     // Catch: java.lang.Exception -> L46
            com.tencent.matrix.plugin.PluginListener r2 = (com.tencent.matrix.plugin.PluginListener) r2     // Catch: java.lang.Exception -> L46
            if (r2 == 0) goto L45
            java.lang.Class r6 = java.lang.Class.forName(r6)     // Catch: java.lang.Exception -> L3d
            java.lang.Class r3 = r1.getClass()     // Catch: java.lang.Exception -> L3d
            java.lang.ClassLoader r3 = r3.getClassLoader()     // Catch: java.lang.Exception -> L3d
            r4 = 1
            java.lang.Class[] r4 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> L3d
            r5 = 0
            r4[r5] = r6     // Catch: java.lang.Exception -> L3d
            com.kwad.sdk.ranger.RangerInjector$1 r6 = new com.kwad.sdk.ranger.RangerInjector$1     // Catch: java.lang.Exception -> L3d
            r6.<init>(r7, r8, r2)     // Catch: java.lang.Exception -> L3d
            java.lang.Object r6 = java.lang.reflect.Proxy.newProxyInstance(r3, r4, r6)     // Catch: java.lang.Exception -> L3d
            com.kwad.sdk.utils.s.a(r1, r0, r6)     // Catch: java.lang.Exception -> L3d
            goto L4e
        L3d:
            r6 = move-exception
            java.lang.String r6 = android.util.Log.getStackTraceString(r6)     // Catch: java.lang.Exception -> L46
            r8.onError(r6)     // Catch: java.lang.Exception -> L46
        L45:
            return
        L46:
            r6 = move-exception
            java.lang.String r6 = android.util.Log.getStackTraceString(r6)
            r8.onError(r6)
        L4e:
            return
    }

    public static void tryProxyOtherOutput(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, com.kwad.sdk.ranger.RangerInjector.a r6) {
            java.lang.Object r0 = com.kwad.sdk.utils.s.an(r2, r3)     // Catch: java.lang.Throwable -> L23
            com.bytedance.apm.common.utility.Logger$ILogWritter r0 = (com.bytedance.apm.common.utility.Logger.ILogWritter) r0     // Catch: java.lang.Throwable -> L23
            if (r0 != 0) goto L9
            return
        L9:
            java.lang.Object r4 = com.kwad.sdk.utils.s.an(r2, r4)     // Catch: java.lang.Throwable -> L23
            java.lang.Integer r4 = (java.lang.Integer) r4     // Catch: java.lang.Throwable -> L23
            r1 = 4
            if (r4 == 0) goto L16
            int r1 = r4.intValue()     // Catch: java.lang.Throwable -> L23
        L16:
            com.kwad.sdk.ranger.RangerInjector$2 r4 = new com.kwad.sdk.ranger.RangerInjector$2     // Catch: java.lang.Throwable -> L23
            r4.<init>(r1, r0, r5, r6)     // Catch: java.lang.Throwable -> L23
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Throwable -> L23
            com.kwad.sdk.utils.s.a(r2, r3, r4)     // Catch: java.lang.Throwable -> L23
            return
        L23:
            r2 = move-exception
            java.lang.String r2 = android.util.Log.getStackTraceString(r2)
            java.lang.String r3 = "perfMonitor.RangerInjector"
            com.kwad.sdk.core.e.c.w(r3, r2)
            return
    }
}

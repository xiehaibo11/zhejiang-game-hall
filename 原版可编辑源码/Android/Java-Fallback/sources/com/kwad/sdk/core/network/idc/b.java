package com.kwad.sdk.core.network.idc;

public final class b {
    public static void a(android.content.Context r2, com.kwad.sdk.core.network.idc.a.a r3) {
            if (r3 != 0) goto L5
            java.lang.String r3 = ""
            goto Ld
        L5:
            org.json.JSONObject r3 = r3.toJson()
            java.lang.String r3 = r3.toString()
        Ld:
            java.lang.String r0 = "ksadsdk_idc"
            java.lang.String r1 = "idc_data"
            com.kwad.sdk.utils.y.a(r2, r0, r1, r3)
            return
    }

    public static void a(android.content.Context r2, java.util.Map<java.lang.String, java.lang.String> r3) {
            if (r3 == 0) goto L12
            boolean r0 = r3.isEmpty()
            if (r0 != 0) goto L12
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>(r3)
            java.lang.String r3 = r0.toString()
            goto L14
        L12:
            java.lang.String r3 = ""
        L14:
            java.lang.String r0 = "ksadsdk_idc"
            java.lang.String r1 = "idc_current"
            com.kwad.sdk.utils.y.a(r2, r0, r1, r3)
            return
    }

    public static com.kwad.sdk.core.network.idc.a.a aX(android.content.Context r1) {
            java.lang.String r0 = "ksad_idc.json"
            java.lang.String r1 = com.kwad.sdk.crash.utils.h.F(r1, r0)     // Catch: java.io.IOException -> Lb
            com.kwad.sdk.core.network.idc.a.a r1 = com.kwad.sdk.core.network.idc.a.a.de(r1)     // Catch: java.io.IOException -> Lb
            return r1
        Lb:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r1)
            com.kwad.sdk.core.network.idc.a.a r1 = new com.kwad.sdk.core.network.idc.a.a
            r1.<init>()
            return r1
    }

    public static com.kwad.sdk.core.network.idc.a.a aY(android.content.Context r3) {
            java.lang.String r0 = "ksadsdk_idc"
            java.lang.String r1 = "idc_data"
            java.lang.String r2 = ""
            java.lang.String r3 = com.kwad.sdk.utils.y.b(r3, r0, r1, r2)
            com.kwad.sdk.core.network.idc.a.a r3 = com.kwad.sdk.core.network.idc.a.a.de(r3)
            return r3
    }

    public static java.util.Map<java.lang.String, java.lang.String> aZ(android.content.Context r3) {
            java.lang.String r0 = "ksadsdk_idc"
            java.lang.String r1 = "idc_current"
            java.lang.String r2 = ""
            java.lang.String r3 = com.kwad.sdk.utils.y.b(r3, r0, r1, r2)
            java.util.Map r3 = com.kwad.sdk.utils.t.parseJSON2MapString(r3)
            return r3
    }
}

package com.kwad.sdk.core.b.a;

public final class bc implements com.kwad.sdk.core.d<com.kwad.sdk.crash.online.monitor.a.a> {
    public bc() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.crash.online.monitor.a.a r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L3
            return
        L3:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r5.aAT = r0
            java.lang.String r0 = "systemFilterList"
            org.json.JSONArray r0 = r6.optJSONArray(r0)
            r1 = 0
            if (r0 == 0) goto L28
            r2 = r1
        L14:
            int r3 = r0.length()
            if (r2 >= r3) goto L28
            java.util.List<java.lang.String> r3 = r5.aAT
            java.lang.Object r4 = r0.opt(r2)
            java.lang.String r4 = (java.lang.String) r4
            r3.add(r4)
            int r2 = r2 + 1
            goto L14
        L28:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r5.aAU = r0
            java.lang.String r0 = "sdkFilterList"
            org.json.JSONArray r0 = r6.optJSONArray(r0)
            if (r0 == 0) goto L4c
            r2 = r1
        L38:
            int r3 = r0.length()
            if (r2 >= r3) goto L4c
            java.util.List<java.lang.String> r3 = r5.aAU
            java.lang.Object r4 = r0.opt(r2)
            java.lang.String r4 = (java.lang.String) r4
            r3.add(r4)
            int r2 = r2 + 1
            goto L38
        L4c:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r5.aAV = r0
            java.lang.String r0 = "matrixPrinterNameList"
            org.json.JSONArray r0 = r6.optJSONArray(r0)
            if (r0 == 0) goto L70
            r2 = r1
        L5c:
            int r3 = r0.length()
            if (r2 >= r3) goto L70
            java.util.List<java.lang.String> r3 = r5.aAV
            java.lang.Object r4 = r0.opt(r2)
            java.lang.String r4 = (java.lang.String) r4
            r3.add(r4)
            int r2 = r2 + 1
            goto L5c
        L70:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r5.aAW = r0
            java.lang.String r0 = "commonPrinterNameList"
            org.json.JSONArray r0 = r6.optJSONArray(r0)
            if (r0 == 0) goto L94
            r2 = r1
        L80:
            int r3 = r0.length()
            if (r2 >= r3) goto L94
            java.util.List<java.lang.String> r3 = r5.aAW
            java.lang.Object r4 = r0.opt(r2)
            java.lang.String r4 = (java.lang.String) r4
            r3.add(r4)
            int r2 = r2 + 1
            goto L80
        L94:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r5.aAX = r0
            java.lang.String r0 = "featureConfigList"
            org.json.JSONArray r0 = r6.optJSONArray(r0)
            if (r0 == 0) goto Lbd
        La3:
            int r2 = r0.length()
            if (r1 >= r2) goto Lbd
            com.kwad.sdk.crash.online.monitor.a.b r2 = new com.kwad.sdk.crash.online.monitor.a.b
            r2.<init>()
            org.json.JSONObject r3 = r0.optJSONObject(r1)
            r2.parseJson(r3)
            java.util.List<com.kwad.sdk.crash.online.monitor.a.b> r3 = r5.aAX
            r3.add(r2)
            int r1 = r1 + 1
            goto La3
        Lbd:
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "5"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "afterFilterSystemCheckNum"
            int r0 = r6.optInt(r1, r0)
            r5.aAZ = r0
            java.lang.Integer r0 = new java.lang.Integer
            java.lang.String r1 = "10"
            r0.<init>(r1)
            int r0 = r0.intValue()
            java.lang.String r1 = "batchNum"
            int r0 = r6.optInt(r1, r0)
            r5.aBa = r0
            java.lang.Double r0 = new java.lang.Double
            java.lang.String r1 = "0.01"
            r0.<init>(r1)
            double r0 = r0.doubleValue()
            java.lang.String r2 = "ratio"
            double r0 = r6.optDouble(r2, r0)
            r5.aqQ = r0
            java.lang.String r0 = "monitorSwitch"
            int r6 = r6.optInt(r0)
            r5.aBb = r6
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.crash.online.monitor.a.a r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            java.util.List<java.lang.String> r0 = r3.aAT
            java.lang.String r1 = "systemFilterList"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
            java.util.List<java.lang.String> r0 = r3.aAU
            java.lang.String r1 = "sdkFilterList"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
            java.util.List<java.lang.String> r0 = r3.aAV
            java.lang.String r1 = "matrixPrinterNameList"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
            java.util.List<java.lang.String> r0 = r3.aAW
            java.lang.String r1 = "commonPrinterNameList"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
            java.util.List<com.kwad.sdk.crash.online.monitor.a.b> r0 = r3.aAX
            java.lang.String r1 = "featureConfigList"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
            int r0 = r3.aAZ
            java.lang.String r1 = "afterFilterSystemCheckNum"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
            int r0 = r3.aBa
            java.lang.String r1 = "batchNum"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
            double r0 = r3.aqQ
            java.lang.String r2 = "ratio"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
            int r0 = r3.aBb
            if (r0 == 0) goto L4a
            int r3 = r3.aBb
            java.lang.String r0 = "monitorSwitch"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
        L4a:
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.crash.online.monitor.a.a r1 = (com.kwad.sdk.crash.online.monitor.a.a) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.crash.online.monitor.a.a r1 = (com.kwad.sdk.crash.online.monitor.a.a) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}

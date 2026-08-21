package com.kwad.sdk.core.b.a;

public final class fw implements com.kwad.sdk.core.d<com.kwad.sdk.core.network.k> {
    public fw() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.network.k r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "request_prepare_cost"
            long r0 = r4.optLong(r0)
            r3.apj = r0
            java.lang.String r0 = "request_add_params_cost"
            long r0 = r4.optLong(r0)
            r3.apk = r0
            java.lang.String r0 = "request_create_cost"
            long r0 = r4.optLong(r0)
            r3.apl = r0
            java.lang.String r0 = "keep_alive"
            int r0 = r4.optInt(r0)
            r3.apm = r0
            java.lang.String r0 = "dns_start"
            long r0 = r4.optLong(r0)
            r3.apn = r0
            java.lang.String r0 = "dns_cost"
            long r0 = r4.optLong(r0)
            r3.apo = r0
            java.lang.String r0 = "connect_establish_start"
            long r0 = r4.optLong(r0)
            r3.app = r0
            java.lang.String r0 = "connect_establish_cost"
            long r0 = r4.optLong(r0)
            r3.apq = r0
            java.lang.String r0 = "request_start"
            long r0 = r4.optLong(r0)
            r3.apr = r0
            java.lang.String r0 = "request_cost"
            long r0 = r4.optLong(r0)
            r3.aps = r0
            java.lang.String r0 = "request_size"
            long r0 = r4.optLong(r0)
            r3.apt = r0
            java.lang.String r0 = "response_start"
            long r0 = r4.optLong(r0)
            r3.apu = r0
            java.lang.String r0 = "response_cost"
            long r0 = r4.optLong(r0)
            r3.apv = r0
            java.lang.String r0 = "response_parse_cost"
            long r0 = r4.optLong(r0)
            r3.apw = r0
            java.lang.String r0 = "response_size"
            long r0 = r4.optLong(r0)
            r3.apx = r0
            java.lang.String r0 = "waiting_response_cost"
            long r0 = r4.optLong(r0)
            r3.apy = r0
            java.lang.String r0 = "total_cost"
            long r0 = r4.optLong(r0)
            r3.apz = r0
            java.lang.String r0 = "proxy_used"
            int r0 = r4.optInt(r0)
            r3.apA = r0
            java.lang.String r0 = "request_id"
            java.lang.String r0 = r4.optString(r0)
            r3.apB = r0
            java.lang.String r0 = r3.apB
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto La5
            r3.apB = r2
        La5:
            java.lang.String r0 = "has_data_v2"
            int r0 = r4.optInt(r0)
            r3.apC = r0
            java.lang.String r0 = "result"
            int r0 = r4.optInt(r0)
            r3.result = r0
            java.lang.String r0 = "response_done_cost"
            long r0 = r4.optLong(r0)
            r3.apD = r0
            java.lang.String r0 = "host_ip"
            java.lang.String r0 = r4.optString(r0)
            r3.apE = r0
            java.lang.String r0 = r3.apE
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto Lcd
            r3.apE = r2
        Lcd:
            java.lang.String r0 = "ip_type"
            int r0 = r4.optInt(r0)
            r3.apF = r0
            java.lang.String r0 = "recommend_ping_time"
            int r0 = r4.optInt(r0)
            r3.apG = r0
            java.lang.String r0 = "backup_ping_time"
            int r0 = r4.optInt(r0)
            r3.apH = r0
            java.lang.String r0 = "other_ping_time"
            int r4 = r4.optInt(r0)
            r3.apI = r4
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.network.k r6, org.json.JSONObject r7) {
            if (r7 != 0) goto L7
            org.json.JSONObject r7 = new org.json.JSONObject
            r7.<init>()
        L7:
            long r0 = r6.apj
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L16
            long r0 = r6.apj
            java.lang.String r4 = "request_prepare_cost"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L16:
            long r0 = r6.apk
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L23
            long r0 = r6.apk
            java.lang.String r4 = "request_add_params_cost"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L23:
            long r0 = r6.apl
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L30
            long r0 = r6.apl
            java.lang.String r4 = "request_create_cost"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L30:
            int r0 = r6.apm
            if (r0 == 0) goto L3b
            int r0 = r6.apm
            java.lang.String r1 = "keep_alive"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L3b:
            long r0 = r6.apn
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L48
            long r0 = r6.apn
            java.lang.String r4 = "dns_start"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L48:
            long r0 = r6.apo
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L55
            long r0 = r6.apo
            java.lang.String r4 = "dns_cost"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L55:
            long r0 = r6.app
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L62
            long r0 = r6.app
            java.lang.String r4 = "connect_establish_start"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L62:
            long r0 = r6.apq
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L6f
            long r0 = r6.apq
            java.lang.String r4 = "connect_establish_cost"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L6f:
            long r0 = r6.apr
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L7c
            long r0 = r6.apr
            java.lang.String r4 = "request_start"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L7c:
            long r0 = r6.aps
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L89
            long r0 = r6.aps
            java.lang.String r4 = "request_cost"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L89:
            long r0 = r6.apt
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L96
            long r0 = r6.apt
            java.lang.String r4 = "request_size"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L96:
            long r0 = r6.apu
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto La3
            long r0 = r6.apu
            java.lang.String r4 = "response_start"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        La3:
            long r0 = r6.apv
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Lb0
            long r0 = r6.apv
            java.lang.String r4 = "response_cost"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        Lb0:
            long r0 = r6.apw
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Lbd
            long r0 = r6.apw
            java.lang.String r4 = "response_parse_cost"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        Lbd:
            long r0 = r6.apx
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Lca
            long r0 = r6.apx
            java.lang.String r4 = "response_size"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        Lca:
            long r0 = r6.apy
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Ld7
            long r0 = r6.apy
            java.lang.String r4 = "waiting_response_cost"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        Ld7:
            long r0 = r6.apz
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Le4
            long r0 = r6.apz
            java.lang.String r4 = "total_cost"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        Le4:
            int r0 = r6.apA
            if (r0 == 0) goto Lef
            int r0 = r6.apA
            java.lang.String r1 = "proxy_used"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        Lef:
            java.lang.String r0 = r6.apB
            java.lang.String r1 = ""
            if (r0 == 0) goto L104
            java.lang.String r0 = r6.apB
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L104
            java.lang.String r0 = r6.apB
            java.lang.String r4 = "request_id"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L104:
            int r0 = r6.apC
            if (r0 == 0) goto L10f
            int r0 = r6.apC
            java.lang.String r4 = "has_data_v2"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L10f:
            int r0 = r6.result
            if (r0 == 0) goto L11a
            int r0 = r6.result
            java.lang.String r4 = "result"
            com.kwad.sdk.utils.t.putValue(r7, r4, r0)
        L11a:
            long r4 = r6.apD
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 == 0) goto L127
            long r2 = r6.apD
            java.lang.String r0 = "response_done_cost"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L127:
            java.lang.String r0 = r6.apE
            if (r0 == 0) goto L13a
            java.lang.String r0 = r6.apE
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L13a
            java.lang.String r0 = r6.apE
            java.lang.String r1 = "host_ip"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L13a:
            int r0 = r6.apF
            if (r0 == 0) goto L145
            int r0 = r6.apF
            java.lang.String r1 = "ip_type"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L145:
            int r0 = r6.apG
            if (r0 == 0) goto L150
            int r0 = r6.apG
            java.lang.String r1 = "recommend_ping_time"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L150:
            int r0 = r6.apH
            if (r0 == 0) goto L15b
            int r0 = r6.apH
            java.lang.String r1 = "backup_ping_time"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L15b:
            int r0 = r6.apI
            if (r0 == 0) goto L166
            int r6 = r6.apI
            java.lang.String r0 = "other_ping_time"
            com.kwad.sdk.utils.t.putValue(r7, r0, r6)
        L166:
            return r7
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.network.k r1 = (com.kwad.sdk.core.network.k) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.network.k r1 = (com.kwad.sdk.core.network.k) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}

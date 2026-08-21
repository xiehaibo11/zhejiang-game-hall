package com.tkay.core.common.i;

public final class d implements com.tkay.core.common.g.c {


    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.String a(long r0, long r2, com.tkay.core.common.f.d r4, com.tkay.core.api.TYBaseAdAdapter r5) {
            java.lang.String r0 = b(r0, r2, r4, r5)
            return r0
    }

    private static java.lang.String b(long r5, long r7, com.tkay.core.common.f.d r9, com.tkay.core.api.TYBaseAdAdapter r10) {
            java.lang.String r0 = ""
            java.util.Map r1 = r10.getNetworkInfoMap()     // Catch: java.lang.Throwable -> L12
            if (r1 == 0) goto L12
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L12
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L12
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L12
            goto L13
        L12:
            r1 = r0
        L13:
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L97
            r2.<init>()     // Catch: java.lang.Throwable -> L97
            java.lang.String r3 = "pl_id"
            java.lang.String r4 = r9.W()     // Catch: java.lang.Throwable -> L97
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L97
            java.lang.String r3 = "req_id"
            java.lang.String r4 = r9.X()     // Catch: java.lang.Throwable -> L97
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L97
            java.lang.String r3 = "show_id"
            java.lang.String r4 = r9.l()     // Catch: java.lang.Throwable -> L97
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L97
            java.lang.String r3 = "unit_id"
            java.lang.String r4 = r9.x()     // Catch: java.lang.Throwable -> L97
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L97
            java.lang.String r3 = "nw_firm_id"
            int r4 = r9.H()     // Catch: java.lang.Throwable -> L97
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L97
            java.lang.String r3 = "scenario_id"
            java.lang.String r4 = r9.C     // Catch: java.lang.Throwable -> L97
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L97
            java.lang.String r3 = "rv_start_ts"
            r2.put(r3, r5)     // Catch: java.lang.Throwable -> L97
            java.lang.String r3 = "r_callback_ts"
            r2.put(r3, r7)     // Catch: java.lang.Throwable -> L97
            java.lang.String r3 = "rv_play_dur"
            long r7 = r7 - r5
            r2.put(r3, r7)     // Catch: java.lang.Throwable -> L97
            java.lang.String r5 = "tp_bid_id"
            java.lang.String r6 = r9.e()     // Catch: java.lang.Throwable -> L97
            r2.put(r5, r6)     // Catch: java.lang.Throwable -> L97
            java.lang.String r5 = "extra_info"
            r2.put(r5, r1)     // Catch: java.lang.Throwable -> L97
            java.lang.String r5 = "user_id"
            java.lang.String r6 = r10.getUserId()     // Catch: java.lang.Throwable -> L97
            r2.put(r5, r6)     // Catch: java.lang.Throwable -> L97
            java.lang.String r5 = "extra_data"
            java.lang.String r6 = r10.getUserCustomData()     // Catch: java.lang.Throwable -> L97
            r2.put(r5, r6)     // Catch: java.lang.Throwable -> L97
            java.lang.String r5 = "curr_ts"
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L97
            r2.put(r5, r6)     // Catch: java.lang.Throwable -> L97
            java.lang.String r5 = "ilrd"
            com.tkay.core.common.b.i r6 = com.tkay.core.common.b.i.a(r9, r10)     // Catch: java.lang.Throwable -> L97
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L97
            r2.put(r5, r6)     // Catch: java.lang.Throwable -> L97
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Throwable -> L97
            return r5
        L97:
            return r0
    }

    @Override
    public final void a(long r11, long r13, com.tkay.core.api.TYBaseAdAdapter r15, com.tkay.core.common.f.d r16) {
            r10 = this;
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.i.d$1 r9 = new com.tkay.core.common.i.d$1
            r1 = r9
            r2 = r10
            r3 = r15
            r4 = r13
            r6 = r16
            r7 = r11
            r1.<init>(r2, r3, r4, r6, r7)
            r0.a(r9)
            return
    }
}

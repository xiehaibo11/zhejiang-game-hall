package com.tkay.network.adx;

public class AdxBidRequestInfo extends com.tkay.core.api.TYBidRequestInfo {
    org.json.JSONObject a;

    public AdxBidRequestInfo(android.content.Context r4, java.lang.String r5) {
            r3 = this;
            r3.<init>()
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            r3.a = r0
            java.lang.String r1 = "tpl_ver"
            r2 = 1
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L58
            com.tkay.core.c.e r4 = com.tkay.core.c.e.a(r4)     // Catch: java.lang.Throwable -> L58
            com.tkay.core.c.d r4 = r4.b(r5)     // Catch: java.lang.Throwable -> L58
            if (r4 == 0) goto L58
            int r5 = r4.av()     // Catch: java.lang.Throwable -> L58
            if (r5 <= 0) goto L39
            com.tkay.core.common.a.b r0 = com.tkay.core.common.a.b.a()     // Catch: java.lang.Throwable -> L58
            java.util.List r5 = r0.a(r5)     // Catch: java.lang.Throwable -> L58
            int r0 = r5.size()     // Catch: java.lang.Throwable -> L58
            if (r0 <= 0) goto L39
            org.json.JSONObject r0 = r3.a     // Catch: java.lang.Throwable -> L58
            java.lang.String r1 = "exclude_ids"
            org.json.JSONObject r5 = a(r5)     // Catch: java.lang.Throwable -> L58
            r0.put(r1, r5)     // Catch: java.lang.Throwable -> L58
        L39:
            int r4 = r4.au()     // Catch: java.lang.Throwable -> L58
            if (r4 <= 0) goto L58
            com.tkay.core.common.a.b r5 = com.tkay.core.common.a.b.a()     // Catch: java.lang.Throwable -> L58
            java.util.List r4 = r5.b(r4)     // Catch: java.lang.Throwable -> L58
            int r5 = r4.size()     // Catch: java.lang.Throwable -> L58
            if (r5 <= 0) goto L58
            org.json.JSONObject r5 = r3.a     // Catch: java.lang.Throwable -> L58
            java.lang.String r0 = "install_ids"
            org.json.JSONObject r4 = a(r4)     // Catch: java.lang.Throwable -> L58
            r5.put(r0, r4)     // Catch: java.lang.Throwable -> L58
        L58:
            return
    }

    private static org.json.JSONObject a(java.util.List<com.tkay.core.common.a.d> r5) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> L63
            r1.<init>()     // Catch: java.lang.Throwable -> L63
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L63
        Le:
            boolean r2 = r5.hasNext()     // Catch: java.lang.Throwable -> L63
            if (r2 == 0) goto L3a
            java.lang.Object r2 = r5.next()     // Catch: java.lang.Throwable -> L63
            com.tkay.core.common.a.d r2 = (com.tkay.core.common.a.d) r2     // Catch: java.lang.Throwable -> L63
            java.lang.String r3 = r2.a()     // Catch: java.lang.Throwable -> L63
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> L63
            java.util.List r3 = (java.util.List) r3     // Catch: java.lang.Throwable -> L63
            if (r3 != 0) goto L32
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L63
            r3.<init>()     // Catch: java.lang.Throwable -> L63
            java.lang.String r4 = r2.a()     // Catch: java.lang.Throwable -> L63
            r1.put(r4, r3)     // Catch: java.lang.Throwable -> L63
        L32:
            java.lang.String r2 = r2.b()     // Catch: java.lang.Throwable -> L63
            r3.add(r2)     // Catch: java.lang.Throwable -> L63
            goto Le
        L3a:
            java.util.Set r5 = r1.entrySet()     // Catch: java.lang.Throwable -> L63
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L63
        L42:
            boolean r1 = r5.hasNext()     // Catch: java.lang.Throwable -> L63
            if (r1 == 0) goto L63
            java.lang.Object r1 = r5.next()     // Catch: java.lang.Throwable -> L63
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Throwable -> L63
            java.lang.Object r2 = r1.getKey()     // Catch: java.lang.Throwable -> L63
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L63
            org.json.JSONArray r3 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L63
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Throwable -> L63
            java.util.Collection r1 = (java.util.Collection) r1     // Catch: java.lang.Throwable -> L63
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L63
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L63
            goto L42
        L63:
            return r0
    }

    public void fillAdAcceptType() {
            r4 = this;
            org.json.JSONObject r0 = r4.a     // Catch: java.lang.Throwable -> L12
            if (r0 == 0) goto L12
            org.json.JSONObject r0 = r4.a     // Catch: java.lang.Throwable -> L12
            java.lang.String r1 = "adp_accept_type"
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L12
            java.lang.String r3 = "[1]"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L12
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L12
        L12:
            return
    }

    public void fillBannerData(java.util.Map<java.lang.String, java.lang.Object> r4) {
            r3 = this;
            java.lang.String r0 = "size"
            java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Throwable -> L40
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L40
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L40
            if (r0 != 0) goto L40
            java.lang.String r0 = "x"
            java.lang.String[] r4 = r4.split(r0)     // Catch: java.lang.Throwable -> L40
            r0 = 0
            r0 = r4[r0]     // Catch: java.lang.Throwable -> L40
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Throwable -> L40
            r1 = 1
            r4 = r4[r1]     // Catch: java.lang.Throwable -> L40
            int r4 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.Throwable -> L40
            org.json.JSONObject r1 = r3.a     // Catch: java.lang.Throwable -> L40
            java.lang.String r2 = "ad_width"
            r1.put(r2, r0)     // Catch: java.lang.Throwable -> L40
            org.json.JSONObject r0 = r3.a     // Catch: java.lang.Throwable -> L40
            java.lang.String r1 = "ad_height"
            r0.put(r1, r4)     // Catch: java.lang.Throwable -> L40
            org.json.JSONObject r4 = r3.a     // Catch: java.lang.Throwable -> L40
            java.lang.String r0 = "adp_accept_type"
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L40
            java.lang.String r2 = "[1]"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L40
            r4.put(r0, r1)     // Catch: java.lang.Throwable -> L40
        L40:
            return
    }

    public void fillInterstitial(java.util.Map<java.lang.String, java.lang.Object> r5) {
            r4 = this;
            java.lang.String r0 = "1"
            java.lang.String r1 = "unit_type"
            boolean r2 = r5.containsKey(r1)     // Catch: java.lang.Throwable -> L2c
            if (r2 == 0) goto L2c
            java.lang.String r2 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r1)     // Catch: java.lang.Throwable -> L2c
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L2c
            if (r3 != 0) goto L1d
            org.json.JSONObject r3 = r4.a     // Catch: java.lang.Throwable -> L2c
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Throwable -> L2c
            r3.put(r1, r2)     // Catch: java.lang.Throwable -> L2c
        L1d:
            java.lang.String r1 = "inter_type"
            java.lang.String r5 = com.tkay.core.api.TYInitMediation.getStringFromMap(r5, r1, r0)     // Catch: java.lang.Throwable -> L2c
            boolean r5 = android.text.TextUtils.equals(r5, r0)     // Catch: java.lang.Throwable -> L2c
            if (r5 == 0) goto L2c
            r4.fillAdAcceptType()     // Catch: java.lang.Throwable -> L2c
        L2c:
            return
    }

    public void fillSplashData() {
            r3 = this;
            org.json.JSONObject r0 = r3.a     // Catch: java.lang.Throwable -> Lb
            java.lang.String r1 = "get_offer"
            r2 = 2
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lb
            r3.fillAdAcceptType()     // Catch: java.lang.Throwable -> Lb
        Lb:
            return
    }

    @Override
    public org.json.JSONObject toRequestJSONObject() {
            r1 = this;
            org.json.JSONObject r0 = r1.a
            return r0
    }
}

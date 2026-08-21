package com.tkay.network.mintegral;

public class MintegralBidRequestInfo extends com.tkay.core.api.TYBidRequestInfo {
    java.lang.String a;
    org.json.JSONObject b;

    public MintegralBidRequestInfo(android.content.Context r3, java.util.Map<java.lang.String, java.lang.Object> r4, java.lang.String r5) {
            r2 = this;
            r2.<init>()
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            r2.b = r0
            java.lang.String r0 = "appid"
            java.lang.Object r0 = r4.get(r0)     // Catch: java.lang.Throwable -> L42
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L42
            java.lang.String r1 = "unitid"
            java.lang.Object r4 = r4.get(r1)     // Catch: java.lang.Throwable -> L42
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L42
            java.lang.String r3 = com.mbridge.msdk.mbbid.out.BidManager.getBuyerUid(r3)     // Catch: java.lang.Throwable -> L42
            r2.a = r3     // Catch: java.lang.Throwable -> L42
            org.json.JSONObject r3 = r2.b     // Catch: java.lang.Throwable -> L42
            java.lang.String r1 = "app_id"
            r3.put(r1, r0)     // Catch: java.lang.Throwable -> L42
            org.json.JSONObject r3 = r2.b     // Catch: java.lang.Throwable -> L42
            java.lang.String r0 = "unit_id"
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> L42
            org.json.JSONObject r3 = r2.b     // Catch: java.lang.Throwable -> L42
            java.lang.String r4 = "buyeruid"
            java.lang.String r0 = r2.a     // Catch: java.lang.Throwable -> L42
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> L42
            org.json.JSONObject r3 = r2.b     // Catch: java.lang.Throwable -> L42
            java.lang.String r4 = "display_manager_ver"
            r3.put(r4, r5)     // Catch: java.lang.Throwable -> L42
        L42:
            return
    }

    public void fillBannerData(java.util.Map<java.lang.String, java.lang.Object> r4) {
            r3 = this;
            java.lang.String r0 = "size"
            java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Throwable -> L36
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L36
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L36
            if (r0 != 0) goto L36
            java.lang.String r0 = "x"
            java.lang.String[] r4 = r4.split(r0)     // Catch: java.lang.Throwable -> L36
            int r0 = r4.length     // Catch: java.lang.Throwable -> L36
            r1 = 2
            if (r0 != r1) goto L36
            org.json.JSONObject r0 = r3.b     // Catch: java.lang.Throwable -> L36
            java.lang.String r1 = "ad_width"
            r2 = 0
            r2 = r4[r2]     // Catch: java.lang.Throwable -> L36
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Throwable -> L36
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L36
            org.json.JSONObject r0 = r3.b     // Catch: java.lang.Throwable -> L36
            java.lang.String r1 = "ad_height"
            r2 = 1
            r4 = r4[r2]     // Catch: java.lang.Throwable -> L36
            int r4 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.Throwable -> L36
            r0.put(r1, r4)     // Catch: java.lang.Throwable -> L36
        L36:
            return
    }

    public void fillNativeExpressData(java.util.Map<java.lang.String, java.lang.Object> r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r3 = this;
            java.lang.String r0 = "unit_type"
            java.lang.String r1 = ""
            boolean r2 = r4.containsKey(r0)     // Catch: java.lang.Throwable -> L52
            if (r2 == 0) goto L12
            java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Throwable -> L52
            java.lang.String r1 = r4.toString()     // Catch: java.lang.Throwable -> L52
        L12:
            java.lang.String r4 = "1"
            boolean r4 = android.text.TextUtils.equals(r1, r4)     // Catch: java.lang.Throwable -> L52
            if (r4 == 0) goto L51
            r4 = 0
            java.lang.String r0 = "key_width"
            java.lang.Object r0 = r5.get(r0)     // Catch: java.lang.Throwable -> L3a
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L3a
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Throwable -> L3a
            java.lang.String r1 = "key_height"
            java.lang.Object r5 = r5.get(r1)     // Catch: java.lang.Throwable -> L38
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L38
            int r4 = java.lang.Integer.parseInt(r5)     // Catch: java.lang.Throwable -> L38
            goto L3f
        L38:
            r5 = move-exception
            goto L3c
        L3a:
            r5 = move-exception
            r0 = r4
        L3c:
            r5.printStackTrace()     // Catch: java.lang.Throwable -> L52
        L3f:
            if (r0 <= 0) goto L51
            if (r4 <= 0) goto L51
            org.json.JSONObject r5 = r3.b     // Catch: java.lang.Throwable -> L52
            java.lang.String r1 = "ad_width"
            r5.put(r1, r0)     // Catch: java.lang.Throwable -> L52
            org.json.JSONObject r5 = r3.b     // Catch: java.lang.Throwable -> L52
            java.lang.String r0 = "ad_height"
            r5.put(r0, r4)     // Catch: java.lang.Throwable -> L52
        L51:
            return
        L52:
            r4 = move-exception
            r4.printStackTrace()
            return
    }

    public boolean isValid() {
            r1 = this;
            java.lang.String r0 = r1.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto La
            r0 = 1
            return r0
        La:
            r0 = 0
            return r0
    }

    @Override
    public org.json.JSONObject toRequestJSONObject() {
            r1 = this;
            org.json.JSONObject r0 = r1.b
            return r0
    }
}

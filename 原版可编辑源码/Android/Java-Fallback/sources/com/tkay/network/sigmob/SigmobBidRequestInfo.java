package com.tkay.network.sigmob;

public class SigmobBidRequestInfo extends com.tkay.core.api.TYBidRequestInfo {
    java.lang.String a;
    org.json.JSONObject b;

    SigmobBidRequestInfo(java.util.Map<java.lang.String, java.lang.Object> r7) {
            r6 = this;
            java.lang.String r0 = "app_key"
            java.lang.String r1 = "app_id"
            r6.<init>()
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            r6.b = r2
            java.lang.Object r2 = r7.get(r1)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L5b
            java.lang.Object r3 = r7.get(r0)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L5b
            java.lang.String r4 = "placement_id"
            java.lang.Object r7 = r7.get(r4)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L5b
            com.sigmob.windad.WindAds r4 = com.sigmob.windad.WindAds.sharedAds()     // Catch: java.lang.Throwable -> L5b
            java.lang.String r4 = r4.getSDKToken()     // Catch: java.lang.Throwable -> L5b
            r6.a = r4     // Catch: java.lang.Throwable -> L5b
            org.json.JSONObject r4 = r6.b     // Catch: java.lang.Throwable -> L5b
            java.lang.String r5 = "unit_id"
            r4.put(r5, r7)     // Catch: java.lang.Throwable -> L5b
            org.json.JSONObject r7 = r6.b     // Catch: java.lang.Throwable -> L5b
            r7.put(r1, r2)     // Catch: java.lang.Throwable -> L5b
            org.json.JSONObject r7 = r6.b     // Catch: java.lang.Throwable -> L5b
            r7.put(r0, r3)     // Catch: java.lang.Throwable -> L5b
            org.json.JSONObject r7 = r6.b     // Catch: java.lang.Throwable -> L5b
            java.lang.String r0 = "display_manager_ver"
            com.tkay.network.sigmob.SigmobTYInitManager r1 = com.tkay.network.sigmob.SigmobTYInitManager.getInstance()     // Catch: java.lang.Throwable -> L5b
            java.lang.String r1 = r1.getNetworkVersion()     // Catch: java.lang.Throwable -> L5b
            r7.put(r0, r1)     // Catch: java.lang.Throwable -> L5b
            org.json.JSONObject r7 = r6.b     // Catch: java.lang.Throwable -> L5b
            java.lang.String r0 = "buyeruid"
            java.lang.String r1 = r6.a     // Catch: java.lang.Throwable -> L5b
            r7.put(r0, r1)     // Catch: java.lang.Throwable -> L5b
        L5b:
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

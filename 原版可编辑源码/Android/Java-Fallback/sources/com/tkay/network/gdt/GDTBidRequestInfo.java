package com.tkay.network.gdt;

public class GDTBidRequestInfo extends com.tkay.core.api.TYBidRequestInfo {
    java.lang.String a;
    org.json.JSONObject b;

    GDTBidRequestInfo(java.util.Map<java.lang.String, java.lang.Object> r6) {
            r5 = this;
            java.lang.String r0 = "unit_id"
            java.lang.String r1 = "app_id"
            r5.<init>()
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            r5.b = r2
            java.lang.Object r2 = r6.get(r1)     // Catch: java.lang.Throwable -> L55
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L55
            java.lang.Object r3 = r6.get(r0)     // Catch: java.lang.Throwable -> L55
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L55
            java.util.HashMap r4 = new java.util.HashMap     // Catch: java.lang.Throwable -> L55
            r4.<init>()     // Catch: java.lang.Throwable -> L55
            com.tkay.network.gdt.GDTTYInitManager.getInstance()     // Catch: java.lang.Throwable -> L55
            com.tkay.network.gdt.GDTTYInitManager.a(r4, r6)     // Catch: java.lang.Throwable -> L55
            com.qq.e.comm.managers.IGDTAdManager r6 = com.qq.e.comm.managers.GDTAdSdk.getGDTAdManger()     // Catch: java.lang.Throwable -> L55
            java.lang.String r6 = r6.getBuyerId(r4)     // Catch: java.lang.Throwable -> L55
            r5.a = r6     // Catch: java.lang.Throwable -> L55
            org.json.JSONObject r6 = r5.b     // Catch: java.lang.Throwable -> L55
            r6.put(r1, r2)     // Catch: java.lang.Throwable -> L55
            org.json.JSONObject r6 = r5.b     // Catch: java.lang.Throwable -> L55
            r6.put(r0, r3)     // Catch: java.lang.Throwable -> L55
            org.json.JSONObject r6 = r5.b     // Catch: java.lang.Throwable -> L55
            java.lang.String r0 = "buyeruid"
            java.lang.String r1 = r5.a     // Catch: java.lang.Throwable -> L55
            r6.put(r0, r1)     // Catch: java.lang.Throwable -> L55
            org.json.JSONObject r6 = r5.b     // Catch: java.lang.Throwable -> L55
            java.lang.String r0 = "sdk_info"
            com.qq.e.comm.managers.IGDTAdManager r1 = com.qq.e.comm.managers.GDTAdSdk.getGDTAdManger()     // Catch: java.lang.Throwable -> L55
            java.lang.String r1 = r1.getSDKInfo(r3)     // Catch: java.lang.Throwable -> L55
            r6.put(r0, r1)     // Catch: java.lang.Throwable -> L55
        L55:
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

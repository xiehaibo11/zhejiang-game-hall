package com.tkay.network.ks;

public class KSBidRequestInfo extends com.tkay.core.api.TYBidRequestInfo {
    java.lang.String a;
    org.json.JSONObject b;
    int c;
    java.lang.String d;
    java.lang.String e;

    KSBidRequestInfo(java.util.Map<java.lang.String, java.lang.Object> r11, java.util.Map<java.lang.String, java.lang.Object> r12) {
            r10 = this;
            java.lang.String r0 = "key_height"
            java.lang.String r1 = "key_width"
            java.lang.String r2 = "user_custom_data"
            java.lang.String r3 = "{network_placement_id}"
            java.lang.String r4 = "user_id"
            java.lang.String r5 = "orientation"
            java.lang.String r6 = "account_id"
            r10.<init>()
            org.json.JSONObject r7 = new org.json.JSONObject
            r7.<init>()
            r10.b = r7
            java.lang.Object r7 = r11.get(r6)     // Catch: java.lang.Throwable -> L125
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> L125
            java.lang.String r8 = "position_id"
            java.lang.Object r8 = r11.get(r8)     // Catch: java.lang.Throwable -> L125
            java.lang.String r8 = (java.lang.String) r8     // Catch: java.lang.Throwable -> L125
            boolean r9 = r11.containsKey(r5)     // Catch: java.lang.Throwable -> L125
            if (r9 == 0) goto L3a
            java.lang.Object r11 = r11.get(r5)     // Catch: java.lang.Throwable -> L125
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> L125
            int r11 = java.lang.Integer.parseInt(r11)     // Catch: java.lang.Throwable -> L125
            r10.c = r11     // Catch: java.lang.Throwable -> L125
        L3a:
            if (r12 == 0) goto L60
            java.lang.Object r11 = r12.get(r4)     // Catch: java.lang.Throwable -> L125
            java.lang.String r5 = ""
            if (r11 == 0) goto L4d
            java.lang.Object r11 = r12.get(r4)     // Catch: java.lang.Throwable -> L125
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> L125
            goto L4e
        L4d:
            r11 = r5
        L4e:
            r10.d = r11     // Catch: java.lang.Throwable -> L125
            java.lang.Object r11 = r12.get(r2)     // Catch: java.lang.Throwable -> L125
            if (r11 == 0) goto L5e
            java.lang.Object r11 = r12.get(r2)     // Catch: java.lang.Throwable -> L125
            java.lang.String r5 = r11.toString()     // Catch: java.lang.Throwable -> L125
        L5e:
            r10.e = r5     // Catch: java.lang.Throwable -> L125
        L60:
            java.lang.String r11 = r10.e     // Catch: java.lang.Throwable -> L125
            boolean r11 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> L125
            if (r11 != 0) goto L7c
            java.lang.String r11 = r10.e     // Catch: java.lang.Throwable -> L125
            boolean r11 = r11.contains(r3)     // Catch: java.lang.Throwable -> L125
            if (r11 == 0) goto L7c
            java.lang.String r11 = r10.e     // Catch: java.lang.Throwable -> L125
            java.lang.String r2 = java.lang.String.valueOf(r8)     // Catch: java.lang.Throwable -> L125
            java.lang.String r11 = r11.replace(r3, r2)     // Catch: java.lang.Throwable -> L125
            r10.e = r11     // Catch: java.lang.Throwable -> L125
        L7c:
            java.util.HashMap r11 = new java.util.HashMap     // Catch: java.lang.Throwable -> L125
            r11.<init>()     // Catch: java.lang.Throwable -> L125
            java.lang.String r2 = r10.d     // Catch: java.lang.Throwable -> L125
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L125
            if (r2 != 0) goto L90
            java.lang.String r2 = "thirdUserId"
            java.lang.String r3 = r10.d     // Catch: java.lang.Throwable -> L125
            r11.put(r2, r3)     // Catch: java.lang.Throwable -> L125
        L90:
            java.lang.String r2 = r10.e     // Catch: java.lang.Throwable -> L125
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L125
            if (r2 != 0) goto L9f
            java.lang.String r2 = "extraData"
            java.lang.String r3 = r10.e     // Catch: java.lang.Throwable -> L125
            r11.put(r2, r3)     // Catch: java.lang.Throwable -> L125
        L9f:
            long r2 = java.lang.Long.parseLong(r8)     // Catch: java.lang.Throwable -> L125
            com.kwad.sdk.api.KsScene$Builder r4 = new com.kwad.sdk.api.KsScene$Builder     // Catch: java.lang.Throwable -> L125
            r4.<init>(r2)     // Catch: java.lang.Throwable -> L125
            r2 = 1
            com.kwad.sdk.api.KsScene$Builder r3 = r4.adNum(r2)     // Catch: java.lang.Throwable -> L125
            int r4 = r10.c     // Catch: java.lang.Throwable -> L125
            r5 = 2
            if (r4 != r5) goto Lb3
            r2 = r5
        Lb3:
            com.kwad.sdk.api.KsScene$Builder r2 = r3.screenOrientation(r2)     // Catch: java.lang.Throwable -> L125
            boolean r3 = r11.isEmpty()     // Catch: java.lang.Throwable -> L125
            if (r3 != 0) goto Lc1
            com.kwad.sdk.api.KsScene$Builder r2 = r2.rewardCallbackExtraData(r11)     // Catch: java.lang.Throwable -> L125
        Lc1:
            boolean r11 = r12.containsKey(r1)     // Catch: java.lang.Throwable -> L125
            r3 = 0
            if (r11 == 0) goto Lcd
            java.lang.Object r11 = r12.get(r1)     // Catch: java.lang.Throwable -> L125
            goto Lce
        Lcd:
            r11 = r3
        Lce:
            boolean r1 = r12.containsKey(r0)     // Catch: java.lang.Throwable -> L125
            if (r1 == 0) goto Ld8
            java.lang.Object r3 = r12.get(r0)     // Catch: java.lang.Throwable -> L125
        Ld8:
            if (r11 == 0) goto Led
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> Le9
            double r11 = java.lang.Double.parseDouble(r11)     // Catch: java.lang.Throwable -> Le9
            int r11 = (int) r11     // Catch: java.lang.Throwable -> Le9
            if (r11 <= 0) goto Led
            r2.width(r11)     // Catch: java.lang.Throwable -> Le9
            goto Led
        Le9:
            r11 = move-exception
            r11.printStackTrace()     // Catch: java.lang.Throwable -> L125
        Led:
            if (r3 == 0) goto L102
            java.lang.String r11 = r3.toString()     // Catch: java.lang.Throwable -> Lfe
            double r11 = java.lang.Double.parseDouble(r11)     // Catch: java.lang.Throwable -> Lfe
            int r11 = (int) r11     // Catch: java.lang.Throwable -> Lfe
            if (r11 <= 0) goto L102
            r2.height(r11)     // Catch: java.lang.Throwable -> Lfe
            goto L102
        Lfe:
            r11 = move-exception
            r11.printStackTrace()     // Catch: java.lang.Throwable -> L125
        L102:
            com.kwad.sdk.api.KsLoadManager r11 = com.kwad.sdk.api.KsAdSDK.getLoadManager()     // Catch: java.lang.Throwable -> L125
            com.kwad.sdk.api.KsScene r12 = r2.build()     // Catch: java.lang.Throwable -> L125
            java.lang.String r11 = r11.getBidRequestTokenV2(r12)     // Catch: java.lang.Throwable -> L125
            r10.a = r11     // Catch: java.lang.Throwable -> L125
            org.json.JSONObject r11 = r10.b     // Catch: java.lang.Throwable -> L125
            r11.put(r6, r7)     // Catch: java.lang.Throwable -> L125
            org.json.JSONObject r11 = r10.b     // Catch: java.lang.Throwable -> L125
            java.lang.String r12 = "unit_id"
            r11.put(r12, r8)     // Catch: java.lang.Throwable -> L125
            org.json.JSONObject r11 = r10.b     // Catch: java.lang.Throwable -> L125
            java.lang.String r12 = "bid_token"
            java.lang.String r0 = r10.a     // Catch: java.lang.Throwable -> L125
            r11.put(r12, r0)     // Catch: java.lang.Throwable -> L125
        L125:
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

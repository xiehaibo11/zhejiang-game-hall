package com.tkay.network.toutiao;

public class TTTYCustomAdSlotBuilder extends com.bykv.vk.openvk.VfSlot.Builder {
    private final java.lang.String a;

    private TTTYCustomAdSlotBuilder() {
            r1 = this;
            r1.<init>()
            java.lang.Class r0 = r1.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r1.a = r0
            return
    }

    public TTTYCustomAdSlotBuilder(java.lang.String r5, java.util.Map<java.lang.String, java.lang.Object> r6, java.util.Map<java.lang.String, java.lang.Object> r7) {
            r4 = this;
            java.lang.String r0 = "tkay_content"
            java.lang.String r1 = "tkay_adload_seq"
            r4.<init>()
            java.lang.Class r2 = r4.getClass()
            java.lang.String r2 = r2.getSimpleName()
            r4.a = r2
            r4.setCodeId(r5)
            boolean r5 = r6.containsKey(r1)     // Catch: java.lang.Throwable -> L3c
            if (r5 == 0) goto L3c
            java.lang.Object r5 = r6.get(r1)     // Catch: java.lang.Throwable -> L3c
            java.lang.Integer r5 = (java.lang.Integer) r5     // Catch: java.lang.Throwable -> L3c
            int r5 = r5.intValue()     // Catch: java.lang.Throwable -> L3c
            boolean r1 = com.tkay.core.api.TYSDK.isNetworkLogDebug()     // Catch: java.lang.Throwable -> L3c
            if (r1 == 0) goto L39
            java.lang.String r1 = r4.a     // Catch: java.lang.Throwable -> L3c
            java.lang.String r2 = "adLoadSeq: "
            java.lang.String r3 = java.lang.String.valueOf(r5)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r2 = r2.concat(r3)     // Catch: java.lang.Throwable -> L3c
            android.util.Log.i(r1, r2)     // Catch: java.lang.Throwable -> L3c
        L39:
            r4.setAdloadSeq(r5)     // Catch: java.lang.Throwable -> L3c
        L3c:
            boolean r5 = r6.containsKey(r0)     // Catch: java.lang.Throwable -> L73
            if (r5 == 0) goto L73
            java.lang.Object r5 = r6.get(r0)     // Catch: java.lang.Throwable -> L73
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L73
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L73
            r6.<init>(r5)     // Catch: java.lang.Throwable -> L73
            java.lang.String r5 = "slot_id"
            java.lang.String r0 = ""
            java.lang.String r5 = r6.optString(r5, r0)     // Catch: java.lang.Throwable -> L73
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L73
            if (r6 != 0) goto L73
            boolean r6 = com.tkay.core.api.TYSDK.isNetworkLogDebug()     // Catch: java.lang.Throwable -> L73
            if (r6 == 0) goto L70
            java.lang.String r6 = r4.a     // Catch: java.lang.Throwable -> L73
            java.lang.String r0 = "primeRit: "
            java.lang.String r1 = java.lang.String.valueOf(r5)     // Catch: java.lang.Throwable -> L73
            java.lang.String r0 = r0.concat(r1)     // Catch: java.lang.Throwable -> L73
            android.util.Log.i(r6, r0)     // Catch: java.lang.Throwable -> L73
        L70:
            r4.setPrimeRit(r5)     // Catch: java.lang.Throwable -> L73
        L73:
            if (r7 == 0) goto L8a
            java.lang.String r5 = "tt_ad_load_type"
            boolean r6 = r7.containsKey(r5)
            if (r6 == 0) goto L8a
            java.lang.Object r5 = r7.get(r5)
            boolean r6 = r5 instanceof com.bykv.vk.openvk.TTAdLoadType
            if (r6 == 0) goto L8a
            com.bykv.vk.openvk.TTAdLoadType r5 = (com.bykv.vk.openvk.TTAdLoadType) r5
            r4.setAdLoadType(r5)
        L8a:
            return
    }
}

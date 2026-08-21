package com.bykv.vk.openvk.api.plugin;

public class pp {
    private long df;
    private java.util.Map<java.lang.String, java.lang.Long> pt;
    private long q;
    private java.lang.String rg;

    private pp(java.lang.String r2, long r3) {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.pt = r0
            r1.rg = r2
            r1.df = r3
            r1.q = r3
            return
    }

    public static com.bykv.vk.openvk.api.plugin.pp rg(java.lang.String r3) {
            com.bykv.vk.openvk.api.plugin.pp r0 = new com.bykv.vk.openvk.api.plugin.pp
            long r1 = android.os.SystemClock.elapsedRealtime()
            r0.<init>(r3, r1)
            return r0
    }

    public long df(java.lang.String r5) {
            r4 = this;
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r2 = r4.q
            long r0 = r0 - r2
            long r2 = android.os.SystemClock.elapsedRealtime()
            r4.q = r2
            java.util.Map<java.lang.String, java.lang.Long> r2 = r4.pt
            java.lang.Long r3 = java.lang.Long.valueOf(r0)
            r2.put(r5, r3)
            return r0
    }

    public long rg() {
            r5 = this;
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r2 = r5.df
            long r0 = r0 - r2
            java.util.Map<java.lang.String, java.lang.Long> r2 = r5.pt
            java.lang.String r3 = r5.rg
            java.lang.Long r4 = java.lang.Long.valueOf(r0)
            r2.put(r3, r4)
            return r0
    }

    public void rg(org.json.JSONObject r6, long r7) {
            r5 = this;
            if (r6 != 0) goto L3
            return
        L3:
            java.util.Map<java.lang.String, java.lang.Long> r0 = r5.pt
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        Ld:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L37
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r1 = r1.getValue()
            java.lang.Long r1 = (java.lang.Long) r1
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto Ld
            long r3 = r1.longValue()
            int r3 = (r3 > r7 ? 1 : (r3 == r7 ? 0 : -1))
            if (r3 <= 0) goto Ld
            r6.put(r2, r1)     // Catch: org.json.JSONException -> Ld
            goto Ld
        L37:
            return
    }
}

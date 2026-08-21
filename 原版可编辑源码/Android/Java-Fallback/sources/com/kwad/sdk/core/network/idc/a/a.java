package com.kwad.sdk.core.network.idc.a;

public final class a implements com.kwad.sdk.core.b {
    private final java.util.Map<java.lang.String, java.util.List<java.lang.String>> apY;

    public a() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.apY = r0
            return
    }

    private java.util.Map<java.lang.String, java.util.List<java.lang.String>> Br() {
            r1 = this;
            java.util.Map<java.lang.String, java.util.List<java.lang.String>> r0 = r1.apY
            return r0
    }

    public static com.kwad.sdk.core.network.idc.a.a de(java.lang.String r2) {
            com.kwad.sdk.core.network.idc.a.a r0 = new com.kwad.sdk.core.network.idc.a.a
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> Le
            r1.<init>(r2)     // Catch: org.json.JSONException -> Le
            r0.parseJson(r1)     // Catch: org.json.JSONException -> Le
            goto L12
        Le:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
        L12:
            return r0
    }

    public final java.util.Set<java.lang.String> Bs() {
            r1 = this;
            java.util.Map<java.lang.String, java.util.List<java.lang.String>> r0 = r1.apY
            java.util.Set r0 = r0.keySet()
            return r0
    }

    public final void b(com.kwad.sdk.core.network.idc.a.a r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.util.List<java.lang.String>> r0 = r1.apY
            r0.clear()
            if (r2 == 0) goto L10
            java.util.Map<java.lang.String, java.util.List<java.lang.String>> r0 = r1.apY
            java.util.Map r2 = r2.Br()
            r0.putAll(r2)
        L10:
            return
    }

    public final java.util.List<java.lang.String> dd(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.util.List<java.lang.String>> r0 = r1.apY
            java.lang.Object r2 = r0.get(r2)
            java.util.List r2 = (java.util.List) r2
            if (r2 != 0) goto Le
            java.util.List r2 = java.util.Collections.emptyList()
        Le:
            return r2
    }

    public final boolean isEmpty() {
            r1 = this;
            java.util.Map<java.lang.String, java.util.List<java.lang.String>> r0 = r1.apY
            boolean r0 = r0.isEmpty()
            return r0
    }

    @Override
    public final void parseJson(org.json.JSONObject r5) {
            r4 = this;
            if (r5 != 0) goto L3
            return
        L3:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Iterator r1 = r5.keys()
        Lc:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L2a
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto Lc
            org.json.JSONArray r3 = r5.optJSONArray(r2)
            java.util.List r3 = com.kwad.sdk.utils.t.h(r3)
            r0.put(r2, r3)
            goto Lc
        L2a:
            java.util.Map<java.lang.String, java.util.List<java.lang.String>> r5 = r4.apY
            r5.clear()
            java.util.Map<java.lang.String, java.util.List<java.lang.String>> r5 = r4.apY
            r5.putAll(r0)
            return
    }

    @Override
    public final org.json.JSONObject toJson() {
            r5 = this;
            java.util.Map<java.lang.String, java.util.List<java.lang.String>> r0 = r5.apY
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            java.util.Set r2 = r0.keySet()
            java.util.Iterator r2 = r2.iterator()
        Lf:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L29
            java.lang.Object r3 = r2.next()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object r4 = r0.get(r3)
            java.util.List r4 = (java.util.List) r4
            org.json.JSONArray r4 = com.kwad.sdk.utils.t.I(r4)
            com.kwad.sdk.utils.t.putValue(r1, r3, r4)
            goto Lf
        L29:
            return r1
    }
}

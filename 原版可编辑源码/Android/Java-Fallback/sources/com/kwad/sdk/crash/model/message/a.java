package com.kwad.sdk.crash.model.message;

public final class a {
    private org.json.JSONObject aAu;

    public a() {
            r1 = this;
            r1.<init>()
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            r1.aAu = r0
            return
    }

    private void put(java.lang.String r2, java.lang.Object r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.aAu     // Catch: java.lang.Throwable -> L6
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L6
            return
        L6:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
            return
    }

    public final void ey(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = com.kwad.sdk.crash.d.azU
            r1.put(r0, r2)
            return
    }

    public final void putInt(java.lang.String r1, int r2) {
            r0 = this;
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0.put(r1, r2)
            return
    }

    public final void putString(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L13
            int r0 = r4.length()
            r1 = 100
            if (r0 <= r1) goto Lf
            goto L13
        Lf:
            r2.put(r3, r4)
            return
        L13:
            java.lang.String r3 = "ExceptionCollector"
            java.lang.String r4 = "string value to long ,max is 100"
            com.kwad.sdk.core.e.c.d(r3, r4)
            return
    }

    public final java.lang.String toString() {
            r1 = this;
            org.json.JSONObject r0 = r1.aAu
            java.lang.String r0 = r0.toString()
            return r0
    }
}

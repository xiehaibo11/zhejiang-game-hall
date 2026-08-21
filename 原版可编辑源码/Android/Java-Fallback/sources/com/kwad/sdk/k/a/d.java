package com.kwad.sdk.k.a;

public final class d extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b {
    public int aGo;
    public int aGp;
    public int aGq;
    public int aGr;
    public int aGs;
    public int aGt;
    public int aGu;

    public d(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.aGo = r0
            r2.aGp = r0
            r2.aGq = r0
            r2.aGr = r0
            r2.aGs = r0
            r2.aGt = r0
            r2.aGu = r0
            if (r3 == 0) goto L24
            android.content.ContentResolver r3 = r3.getContentResolver()
            java.lang.String r1 = "adb_enabled"
            int r3 = android.provider.Settings.Secure.getInt(r3, r1, r0)
            if (r3 <= 0) goto L21
            r0 = 1
        L21:
            r2.bA(r0)
        L24:
            return
    }

    private void a(com.kwad.sdk.k.a.d r2, org.json.JSONObject r3) {
            r1 = this;
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "isRoot"
            int r0 = r3.optInt(r0)
            r2.aGo = r0
            java.lang.String r0 = "isXPosed"
            int r0 = r3.optInt(r0)
            r2.aGp = r0
            java.lang.String r0 = "isFrameworkHooked"
            int r0 = r3.optInt(r0)
            r2.aGq = r0
            java.lang.String r0 = "isVirtual"
            int r0 = r3.optInt(r0)
            r2.aGr = r0
            java.lang.String r0 = "isAdbEnabled"
            int r0 = r3.optInt(r0)
            r2.aGs = r0
            java.lang.String r0 = "isEmulator"
            int r0 = r3.optInt(r0)
            r2.aGt = r0
            java.lang.String r0 = "isGroupControl"
            int r0 = r3.optInt(r0)
            r2.aGu = r0
            super.afterParseJson(r3)
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.k.a.d r2, org.json.JSONObject r3) {
            int r0 = r2.aGo
            java.lang.String r1 = "isRoot"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            int r0 = r2.aGp
            java.lang.String r1 = "isXPosed"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            int r0 = r2.aGq
            java.lang.String r1 = "isFrameworkHooked"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            int r0 = r2.aGr
            java.lang.String r1 = "isVirtual"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            int r0 = r2.aGs
            java.lang.String r1 = "isAdbEnabled"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            int r0 = r2.aGt
            java.lang.String r1 = "isEmulator"
            com.kwad.sdk.utils.t.putValue(r3, r1, r0)
            int r2 = r2.aGu
            java.lang.String r0 = "isGroupControl"
            com.kwad.sdk.utils.t.putValue(r3, r0, r2)
            return r3
    }

    private void bA(boolean r1) {
            r0 = this;
            int r1 = bD(r1)
            r0.aGs = r1
            return
    }

    private static int bD(boolean r0) {
            if (r0 == 0) goto L4
            r0 = 1
            return r0
        L4:
            r0 = 2
            return r0
    }

    public final void bB(boolean r1) {
            r0 = this;
            int r1 = bD(r1)
            r0.aGt = r1
            return
    }

    public final void bC(boolean r1) {
            r0 = this;
            int r1 = bD(r1)
            r0.aGu = r1
            return
    }

    public final void bx(boolean r1) {
            r0 = this;
            int r1 = bD(r1)
            r0.aGo = r1
            return
    }

    public final void by(boolean r1) {
            r0 = this;
            int r1 = bD(r1)
            r0.aGp = r1
            return
    }

    public final void bz(boolean r1) {
            r0 = this;
            int r1 = bD(r1)
            r0.aGq = r1
            return
    }

    @Override
    public final void parseJson(org.json.JSONObject r1) {
            r0 = this;
            r0.a(r0, r1)
            r0.afterParseJson(r1)
            return
    }

    @Override
    public final org.json.JSONObject toJson() {
            r1 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r0 = b(r1, r0)
            r1.afterToJson(r0)
            return r0
    }
}

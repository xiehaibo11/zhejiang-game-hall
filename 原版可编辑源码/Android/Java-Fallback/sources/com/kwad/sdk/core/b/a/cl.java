package com.kwad.sdk.core.b.a;

public final class cl implements com.kwad.sdk.core.d<com.kwad.sdk.core.request.model.b> {
    public cl() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.request.model.b r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "imei"
            java.lang.String r0 = r4.optString(r0)
            r3.amD = r0
            java.lang.String r0 = r3.amD
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r3.amD = r2
        L15:
            java.lang.String r0 = "imei1"
            java.lang.String r0 = r4.optString(r0)
            r3.atM = r0
            java.lang.String r0 = r3.atM
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            r3.atM = r2
        L25:
            java.lang.String r0 = "imei2"
            java.lang.String r0 = r4.optString(r0)
            r3.atN = r0
            java.lang.String r0 = r3.atN
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L35
            r3.atN = r2
        L35:
            java.lang.String r0 = "meid"
            java.lang.String r0 = r4.optString(r0)
            r3.atO = r0
            java.lang.String r0 = r3.atO
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L45
            r3.atO = r2
        L45:
            java.lang.String r0 = "oaid"
            java.lang.String r0 = r4.optString(r0)
            r3.amE = r0
            java.lang.String r0 = r3.amE
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L55
            r3.amE = r2
        L55:
            java.lang.String r0 = "appMkt"
            java.lang.String r0 = r4.optString(r0)
            r3.atP = r0
            java.lang.String r0 = r3.atP
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L65
            r3.atP = r2
        L65:
            java.lang.String r0 = "appMktParam"
            java.lang.String r0 = r4.optString(r0)
            r3.atQ = r0
            java.lang.String r0 = r3.atQ
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L75
            r3.atQ = r2
        L75:
            java.lang.String r0 = "romName"
            java.lang.String r0 = r4.optString(r0)
            r3.Qb = r0
            java.lang.String r0 = r3.Qb
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L85
            r3.Qb = r2
        L85:
            java.lang.String r0 = "osType"
            int r0 = r4.optInt(r0)
            r3.Up = r0
            java.lang.String r0 = "osApi"
            int r0 = r4.optInt(r0)
            r3.Ur = r0
            java.lang.String r0 = "osVersion"
            java.lang.String r0 = r4.optString(r0)
            r3.atR = r0
            java.lang.String r0 = r3.atR
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto La5
            r3.atR = r2
        La5:
            java.lang.String r0 = "language"
            java.lang.String r0 = r4.optString(r0)
            r3.Us = r0
            java.lang.String r0 = r3.Us
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto Lb5
            r3.Us = r2
        Lb5:
            java.lang.String r0 = "screenWidth"
            int r0 = r4.optInt(r0)
            r3.Uu = r0
            java.lang.String r0 = "screenHeight"
            int r0 = r4.optInt(r0)
            r3.Uv = r0
            java.lang.String r0 = "deviceWidth"
            int r0 = r4.optInt(r0)
            r3.atS = r0
            java.lang.String r0 = "deviceHeight"
            int r0 = r4.optInt(r0)
            r3.atT = r0
            java.lang.String r0 = "androidId"
            java.lang.String r0 = r4.optString(r0)
            r3.atU = r0
            java.lang.String r0 = r3.atU
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto Le5
            r3.atU = r2
        Le5:
            java.lang.String r0 = "deviceId"
            java.lang.String r0 = r4.optString(r0)
            r3.atV = r0
            java.lang.String r0 = r3.atV
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto Lf5
            r3.atV = r2
        Lf5:
            java.lang.String r0 = "deviceVendor"
            java.lang.String r0 = r4.optString(r0)
            r3.atW = r0
            java.lang.String r0 = r3.atW
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L105
            r3.atW = r2
        L105:
            java.lang.String r0 = "platform"
            int r0 = r4.optInt(r0)
            r3.atX = r0
            java.lang.String r0 = "deviceModel"
            java.lang.String r0 = r4.optString(r0)
            r3.atY = r0
            java.lang.String r0 = r3.atY
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L11d
            r3.atY = r2
        L11d:
            java.lang.String r0 = "deviceBrand"
            java.lang.String r0 = r4.optString(r0)
            r3.Uo = r0
            java.lang.String r0 = r3.Uo
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L12d
            r3.Uo = r2
        L12d:
            java.lang.String r0 = "deviceSig"
            java.lang.String r0 = r4.optString(r0)
            r3.atZ = r0
            java.lang.String r0 = r3.atZ
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L13d
            r3.atZ = r2
        L13d:
            java.lang.String r0 = "eGid"
            java.lang.String r0 = r4.optString(r0)
            r3.aua = r0
            java.lang.String r0 = r3.aua
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L14d
            r3.aua = r2
        L14d:
            java.lang.String r0 = "appPackageName"
            org.json.JSONArray r0 = r4.optJSONArray(r0)
            r3.aub = r0
            java.lang.String r0 = "arch"
            java.lang.String r0 = r4.optString(r0)
            r3.auc = r0
            java.lang.String r0 = r3.auc
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L165
            r3.auc = r2
        L165:
            java.lang.String r0 = "screenDirection"
            int r0 = r4.optInt(r0)
            r3.aud = r0
            java.lang.String r0 = "kwaiVersionName"
            java.lang.String r0 = r4.optString(r0)
            r3.aue = r0
            java.lang.String r0 = r3.aue
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L17d
            r3.aue = r2
        L17d:
            java.lang.String r0 = "kwaiNebulaVersionName"
            java.lang.String r0 = r4.optString(r0)
            r3.auf = r0
            java.lang.String r0 = r3.auf
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L18d
            r3.auf = r2
        L18d:
            java.lang.String r0 = "wechatVersionName"
            java.lang.String r0 = r4.optString(r0)
            r3.aug = r0
            java.lang.String r0 = r3.aug
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L19d
            r3.aug = r2
        L19d:
            java.lang.String r0 = "sourceFlag"
            long r0 = r4.optLong(r0)
            r3.auh = r0
            java.lang.String r0 = "systemBootTime"
            java.lang.String r0 = r4.optString(r0)
            r3.aui = r0
            java.lang.String r0 = r3.aui
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L1b5
            r3.aui = r2
        L1b5:
            java.lang.String r0 = "systemUpdateTime"
            java.lang.String r4 = r4.optString(r0)
            r3.auj = r4
            java.lang.String r4 = r3.auj
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r4 != r0) goto L1c5
            r3.auj = r2
        L1c5:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.request.model.b r6, org.json.JSONObject r7) {
            if (r7 != 0) goto L7
            org.json.JSONObject r7 = new org.json.JSONObject
            r7.<init>()
        L7:
            java.lang.String r0 = r6.amD
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r6.amD
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r6.amD
            java.lang.String r2 = "imei"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L1c:
            java.lang.String r0 = r6.atM
            if (r0 == 0) goto L2f
            java.lang.String r0 = r6.atM
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r6.atM
            java.lang.String r2 = "imei1"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L2f:
            java.lang.String r0 = r6.atN
            if (r0 == 0) goto L42
            java.lang.String r0 = r6.atN
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L42
            java.lang.String r0 = r6.atN
            java.lang.String r2 = "imei2"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L42:
            java.lang.String r0 = r6.atO
            if (r0 == 0) goto L55
            java.lang.String r0 = r6.atO
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L55
            java.lang.String r0 = r6.atO
            java.lang.String r2 = "meid"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L55:
            java.lang.String r0 = r6.amE
            if (r0 == 0) goto L68
            java.lang.String r0 = r6.amE
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L68
            java.lang.String r0 = r6.amE
            java.lang.String r2 = "oaid"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L68:
            java.lang.String r0 = r6.atP
            if (r0 == 0) goto L7b
            java.lang.String r0 = r6.atP
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L7b
            java.lang.String r0 = r6.atP
            java.lang.String r2 = "appMkt"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L7b:
            java.lang.String r0 = r6.atQ
            if (r0 == 0) goto L8e
            java.lang.String r0 = r6.atQ
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L8e
            java.lang.String r0 = r6.atQ
            java.lang.String r2 = "appMktParam"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L8e:
            java.lang.String r0 = r6.Qb
            if (r0 == 0) goto La1
            java.lang.String r0 = r6.Qb
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto La1
            java.lang.String r0 = r6.Qb
            java.lang.String r2 = "romName"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        La1:
            int r0 = r6.Up
            if (r0 == 0) goto Lac
            int r0 = r6.Up
            java.lang.String r2 = "osType"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Lac:
            int r0 = r6.Ur
            if (r0 == 0) goto Lb7
            int r0 = r6.Ur
            java.lang.String r2 = "osApi"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Lb7:
            java.lang.String r0 = r6.atR
            if (r0 == 0) goto Lca
            java.lang.String r0 = r6.atR
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Lca
            java.lang.String r0 = r6.atR
            java.lang.String r2 = "osVersion"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Lca:
            java.lang.String r0 = r6.Us
            if (r0 == 0) goto Ldd
            java.lang.String r0 = r6.Us
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Ldd
            java.lang.String r0 = r6.Us
            java.lang.String r2 = "language"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Ldd:
            int r0 = r6.Uu
            if (r0 == 0) goto Le8
            int r0 = r6.Uu
            java.lang.String r2 = "screenWidth"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Le8:
            int r0 = r6.Uv
            if (r0 == 0) goto Lf3
            int r0 = r6.Uv
            java.lang.String r2 = "screenHeight"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Lf3:
            int r0 = r6.atS
            if (r0 == 0) goto Lfe
            int r0 = r6.atS
            java.lang.String r2 = "deviceWidth"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Lfe:
            int r0 = r6.atT
            if (r0 == 0) goto L109
            int r0 = r6.atT
            java.lang.String r2 = "deviceHeight"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L109:
            java.lang.String r0 = r6.atU
            if (r0 == 0) goto L11c
            java.lang.String r0 = r6.atU
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L11c
            java.lang.String r0 = r6.atU
            java.lang.String r2 = "androidId"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L11c:
            java.lang.String r0 = r6.atV
            if (r0 == 0) goto L12f
            java.lang.String r0 = r6.atV
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L12f
            java.lang.String r0 = r6.atV
            java.lang.String r2 = "deviceId"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L12f:
            java.lang.String r0 = r6.atW
            if (r0 == 0) goto L142
            java.lang.String r0 = r6.atW
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L142
            java.lang.String r0 = r6.atW
            java.lang.String r2 = "deviceVendor"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L142:
            int r0 = r6.atX
            if (r0 == 0) goto L14d
            int r0 = r6.atX
            java.lang.String r2 = "platform"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L14d:
            java.lang.String r0 = r6.atY
            if (r0 == 0) goto L160
            java.lang.String r0 = r6.atY
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L160
            java.lang.String r0 = r6.atY
            java.lang.String r2 = "deviceModel"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L160:
            java.lang.String r0 = r6.Uo
            if (r0 == 0) goto L173
            java.lang.String r0 = r6.Uo
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L173
            java.lang.String r0 = r6.Uo
            java.lang.String r2 = "deviceBrand"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L173:
            java.lang.String r0 = r6.atZ
            if (r0 == 0) goto L186
            java.lang.String r0 = r6.atZ
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L186
            java.lang.String r0 = r6.atZ
            java.lang.String r2 = "deviceSig"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L186:
            java.lang.String r0 = r6.aua
            if (r0 == 0) goto L199
            java.lang.String r0 = r6.aua
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L199
            java.lang.String r0 = r6.aua
            java.lang.String r2 = "eGid"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L199:
            org.json.JSONArray r0 = r6.aub
            java.lang.String r2 = "appPackageName"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
            java.lang.String r0 = r6.auc
            if (r0 == 0) goto L1b3
            java.lang.String r0 = r6.auc
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1b3
            java.lang.String r0 = r6.auc
            java.lang.String r2 = "arch"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L1b3:
            int r0 = r6.aud
            if (r0 == 0) goto L1be
            int r0 = r6.aud
            java.lang.String r2 = "screenDirection"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L1be:
            java.lang.String r0 = r6.aue
            if (r0 == 0) goto L1d1
            java.lang.String r0 = r6.aue
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1d1
            java.lang.String r0 = r6.aue
            java.lang.String r2 = "kwaiVersionName"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L1d1:
            java.lang.String r0 = r6.auf
            if (r0 == 0) goto L1e4
            java.lang.String r0 = r6.auf
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1e4
            java.lang.String r0 = r6.auf
            java.lang.String r2 = "kwaiNebulaVersionName"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L1e4:
            java.lang.String r0 = r6.aug
            if (r0 == 0) goto L1f7
            java.lang.String r0 = r6.aug
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1f7
            java.lang.String r0 = r6.aug
            java.lang.String r2 = "wechatVersionName"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L1f7:
            long r2 = r6.auh
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L206
            long r2 = r6.auh
            java.lang.String r0 = "sourceFlag"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L206:
            java.lang.String r0 = r6.aui
            if (r0 == 0) goto L219
            java.lang.String r0 = r6.aui
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L219
            java.lang.String r0 = r6.aui
            java.lang.String r2 = "systemBootTime"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L219:
            java.lang.String r0 = r6.auj
            if (r0 == 0) goto L22c
            java.lang.String r0 = r6.auj
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L22c
            java.lang.String r6 = r6.auj
            java.lang.String r0 = "systemUpdateTime"
            com.kwad.sdk.utils.t.putValue(r7, r0, r6)
        L22c:
            return r7
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.request.model.b r1 = (com.kwad.sdk.core.request.model.b) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.request.model.b r1 = (com.kwad.sdk.core.request.model.b) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}

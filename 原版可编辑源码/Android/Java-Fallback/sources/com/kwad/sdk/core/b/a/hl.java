package com.kwad.sdk.core.b.a;

public final class hl implements com.kwad.sdk.core.d<com.kwad.sdk.internal.api.SceneImpl> {
    public hl() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.internal.api.SceneImpl r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            com.kwad.sdk.core.scene.URLPackage r0 = new com.kwad.sdk.core.scene.URLPackage
            r0.<init>()
            r3.urlPackage = r0
            com.kwad.sdk.core.scene.URLPackage r0 = r3.urlPackage
            java.lang.String r1 = "urlPackage"
            org.json.JSONObject r1 = r4.optJSONObject(r1)
            r0.parseJson(r1)
            java.lang.String r0 = "posId"
            long r0 = r4.optLong(r0)
            r3.posId = r0
            java.lang.String r0 = "entryScene"
            long r0 = r4.optLong(r0)
            r3.entryScene = r0
            java.lang.String r0 = "adNum"
            int r0 = r4.optInt(r0)
            r3.adNum = r0
            java.lang.String r0 = "action"
            int r0 = r4.optInt(r0)
            r3.action = r0
            java.lang.String r0 = "width"
            int r0 = r4.optInt(r0)
            r3.width = r0
            java.lang.String r0 = "height"
            int r0 = r4.optInt(r0)
            r3.height = r0
            java.lang.String r0 = "adStyle"
            int r0 = r4.optInt(r0)
            r3.adStyle = r0
            java.lang.String r0 = "screenOrientation"
            int r0 = r4.optInt(r0)
            r3.screenOrientation = r0
            com.kwad.sdk.internal.api.NativeAdExtraDataImpl r0 = new com.kwad.sdk.internal.api.NativeAdExtraDataImpl
            r0.<init>()
            r3.nativeAdExtraData = r0
            com.kwad.sdk.internal.api.NativeAdExtraDataImpl r0 = r3.nativeAdExtraData
            java.lang.String r1 = "nativeAdExtraData"
            org.json.JSONObject r1 = r4.optJSONObject(r1)
            r0.parseJson(r1)
            java.lang.String r0 = "backUrl"
            java.lang.String r0 = r4.optString(r0)
            r3.backUrl = r0
            java.lang.String r0 = r3.backUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L79
            r3.backUrl = r2
        L79:
            java.lang.String r0 = "bidResponse"
            java.lang.String r0 = r4.optString(r0)
            r3.bidResponse = r0
            java.lang.String r0 = r3.bidResponse
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L89
            r3.bidResponse = r2
        L89:
            java.lang.String r0 = "bidResponseV2"
            java.lang.String r4 = r4.optString(r0)
            r3.bidResponseV2 = r4
            java.lang.String r4 = r3.bidResponseV2
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r4 != r0) goto L99
            r3.bidResponseV2 = r2
        L99:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.internal.api.SceneImpl r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L7
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
        L7:
            com.kwad.sdk.core.scene.URLPackage r0 = r5.urlPackage
            java.lang.String r1 = "urlPackage"
            com.kwad.sdk.utils.t.a(r6, r1, r0)
            long r0 = r5.posId
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L1d
            long r0 = r5.posId
            java.lang.String r4 = "posId"
            com.kwad.sdk.utils.t.putValue(r6, r4, r0)
        L1d:
            long r0 = r5.entryScene
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L2a
            long r0 = r5.entryScene
            java.lang.String r2 = "entryScene"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        L2a:
            int r0 = r5.adNum
            if (r0 == 0) goto L35
            int r0 = r5.adNum
            java.lang.String r1 = "adNum"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L35:
            int r0 = r5.action
            if (r0 == 0) goto L40
            int r0 = r5.action
            java.lang.String r1 = "action"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L40:
            int r0 = r5.width
            if (r0 == 0) goto L4b
            int r0 = r5.width
            java.lang.String r1 = "width"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L4b:
            int r0 = r5.height
            if (r0 == 0) goto L56
            int r0 = r5.height
            java.lang.String r1 = "height"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L56:
            int r0 = r5.adStyle
            if (r0 == 0) goto L61
            int r0 = r5.adStyle
            java.lang.String r1 = "adStyle"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L61:
            int r0 = r5.screenOrientation
            if (r0 == 0) goto L6c
            int r0 = r5.screenOrientation
            java.lang.String r1 = "screenOrientation"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L6c:
            com.kwad.sdk.internal.api.NativeAdExtraDataImpl r0 = r5.nativeAdExtraData
            java.lang.String r1 = "nativeAdExtraData"
            com.kwad.sdk.utils.t.a(r6, r1, r0)
            java.lang.String r0 = r5.backUrl
            java.lang.String r1 = ""
            if (r0 == 0) goto L88
            java.lang.String r0 = r5.backUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L88
            java.lang.String r0 = r5.backUrl
            java.lang.String r2 = "backUrl"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        L88:
            java.lang.String r0 = r5.bidResponse
            if (r0 == 0) goto L9b
            java.lang.String r0 = r5.bidResponse
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L9b
            java.lang.String r0 = r5.bidResponse
            java.lang.String r2 = "bidResponse"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        L9b:
            java.lang.String r0 = r5.bidResponseV2
            if (r0 == 0) goto Lae
            java.lang.String r0 = r5.bidResponseV2
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Lae
            java.lang.String r5 = r5.bidResponseV2
            java.lang.String r0 = "bidResponseV2"
            com.kwad.sdk.utils.t.putValue(r6, r0, r5)
        Lae:
            return r6
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.internal.api.SceneImpl r1 = (com.kwad.sdk.internal.api.SceneImpl) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.internal.api.SceneImpl r1 = (com.kwad.sdk.internal.api.SceneImpl) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}

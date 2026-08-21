package com.kwad.sdk.core.request.model;

public final class a implements com.kwad.sdk.core.b {
    private static org.json.JSONObject atI;
    private java.lang.String appId;
    private java.lang.String atJ;
    private java.lang.String name;
    private java.lang.String packageName;
    private java.lang.String version;

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean C(org.json.JSONObject r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "appId"
            java.lang.String r1 = r3.optString(r1)
            java.lang.String r2 = "name"
            java.lang.String r3 = r3.optString(r2)
            boolean r2 = android.text.TextUtils.isEmpty(r3)
            if (r2 != 0) goto L43
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L1d
            goto L43
        L1d:
            java.lang.Class<com.kwad.sdk.service.a.e> r2 = com.kwad.sdk.service.a.e.class
            java.lang.Object r2 = com.kwad.sdk.service.ServiceProvider.get(r2)
            com.kwad.sdk.service.a.e r2 = (com.kwad.sdk.service.a.e) r2
            java.lang.String r2 = r2.getAppId()
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L43
            java.lang.Class<com.kwad.sdk.service.a.e> r1 = com.kwad.sdk.service.a.e.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
            com.kwad.sdk.service.a.e r1 = (com.kwad.sdk.service.a.e) r1
            java.lang.String r1 = r1.getAppName()
            boolean r3 = r3.equals(r1)
            if (r3 == 0) goto L43
            r3 = 1
            return r3
        L43:
            return r0
    }

    public static org.json.JSONObject Cr() {
            org.json.JSONObject r0 = com.kwad.sdk.core.request.model.a.atI
            boolean r0 = C(r0)
            if (r0 != 0) goto L12
            com.kwad.sdk.core.request.model.a r0 = Cs()
            org.json.JSONObject r0 = r0.toJson()
            com.kwad.sdk.core.request.model.a.atI = r0
        L12:
            org.json.JSONObject r0 = com.kwad.sdk.core.request.model.a.atI
            return r0
    }

    private static com.kwad.sdk.core.request.model.a Cs() {
            com.kwad.sdk.core.request.model.a r0 = new com.kwad.sdk.core.request.model.a
            r0.<init>()
            java.lang.Class<com.kwad.sdk.service.a.e> r1 = com.kwad.sdk.service.a.e.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
            com.kwad.sdk.service.a.e r1 = (com.kwad.sdk.service.a.e) r1
            java.lang.String r2 = r1.getAppId()
            r0.appId = r2
            java.lang.String r2 = r1.getAppName()
            r0.name = r2
            android.content.Context r1 = r1.getContext()
            if (r1 == 0) goto L2b
            java.lang.String r2 = r1.getPackageName()
            r0.packageName = r2
            java.lang.String r2 = com.kwad.sdk.utils.k.bQ(r1)
            r0.version = r2
        L2b:
            java.lang.String r1 = com.kwad.sdk.utils.e.bG(r1)
            r0.atJ = r1
            java.lang.String r1 = com.kwad.sdk.utils.bf.getAppId()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L41
            java.lang.String r1 = com.kwad.sdk.utils.bf.getAppId()
            r0.appId = r1
        L41:
            java.lang.String r1 = com.kwad.sdk.utils.bf.getPackageName()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L51
            java.lang.String r1 = com.kwad.sdk.utils.bf.getPackageName()
            r0.packageName = r1
        L51:
            return r0
    }

    @Override
    public final void parseJson(org.json.JSONObject r1) {
            r0 = this;
            return
    }

    @Override
    public final org.json.JSONObject toJson() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = r3.appId
            java.lang.String r2 = "appId"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r3.name
            java.lang.String r2 = "name"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r3.packageName
            java.lang.String r2 = "packageName"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r3.version
            java.lang.String r2 = "version"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r3.atJ
            java.lang.String r2 = "sha1"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            return r0
    }
}

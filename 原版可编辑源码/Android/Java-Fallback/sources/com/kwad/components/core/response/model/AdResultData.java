package com.kwad.components.core.response.model;

public class AdResultData extends com.kwad.sdk.core.network.BaseResultData implements com.kwad.sdk.core.b {
    private static final java.lang.String TAG = "AdResultData";
    private static final long serialVersionUID = -818939163644825380L;
    private java.util.List<com.kwad.sdk.core.response.model.AdTemplate> mAdTemplateList;
    protected java.lang.String mOriginalJson;
    private java.util.Map<java.lang.Long, com.kwad.sdk.internal.api.SceneImpl> mRequestAdSceneMap;
    public com.kwad.sdk.core.response.model.PageInfo pageInfo;
    public java.lang.String pcursor;

    public AdResultData() {
            r1 = this;
            r1.<init>()
            com.kwad.sdk.core.response.model.PageInfo r0 = new com.kwad.sdk.core.response.model.PageInfo
            r0.<init>()
            r1.pageInfo = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.mAdTemplateList = r0
            return
    }

    public AdResultData(com.kwad.sdk.core.network.BaseResultData r1, com.kwad.sdk.internal.api.SceneImpl r2, java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r3) {
            r0 = this;
            r0.<init>(r2)
            org.json.JSONObject r1 = r1.baseToJson()
            super.parseJson(r1)
            if (r3 == 0) goto L13
            java.util.List r1 = r0.getAdTemplateList()
            r1.addAll(r3)
        L13:
            return
    }

    public AdResultData(com.kwad.sdk.internal.api.SceneImpl r4) {
            r3 = this;
            r3.<init>()
            com.kwad.sdk.core.response.model.PageInfo r0 = new com.kwad.sdk.core.response.model.PageInfo
            r0.<init>()
            r3.pageInfo = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r3.mAdTemplateList = r0
            if (r4 == 0) goto L26
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 1
            r0.<init>(r1)
            r3.mRequestAdSceneMap = r0
            long r1 = r4.getPosId()
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r0.put(r1, r4)
        L26:
            return
    }

    public AdResultData(java.util.List<com.kwad.sdk.internal.api.SceneImpl> r2) {
            r1 = this;
            r1.<init>()
            com.kwad.sdk.core.response.model.PageInfo r0 = new com.kwad.sdk.core.response.model.PageInfo
            r0.<init>()
            r1.pageInfo = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.mAdTemplateList = r0
            r1.setRequestAdSceneList(r2)
            return
    }

    public static com.kwad.components.core.response.model.AdResultData createFromResponseJson(java.lang.String r2, com.kwad.sdk.internal.api.SceneImpl r3) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>(r2)
            com.kwad.components.core.response.model.AdResultData r1 = new com.kwad.components.core.response.model.AdResultData
            r1.<init>(r3)
            r1.parseJson(r0)
            r1.mOriginalJson = r2
            return r1
    }

    public com.kwad.components.core.response.model.AdResultData clone() {
            r3 = this;
            com.kwad.components.core.response.model.AdResultData r0 = new com.kwad.components.core.response.model.AdResultData
            r0.<init>()
            org.json.JSONObject r1 = r3.toJson()
            java.lang.String r1 = r1.toString()
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L16
            r2.<init>(r1)     // Catch: org.json.JSONException -> L16
            r0.parseJson(r2)     // Catch: org.json.JSONException -> L16
            return r0
        L16:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r1)
            return r0
    }

    public java.lang.Object clone() {
            r1 = this;
            com.kwad.components.core.response.model.AdResultData r0 = r1.clone()
            return r0
    }

    public com.kwad.sdk.internal.api.SceneImpl getAdScene(long r3) {
            r2 = this;
            java.util.Map<java.lang.Long, com.kwad.sdk.internal.api.SceneImpl> r0 = r2.mRequestAdSceneMap
            if (r0 == 0) goto Lf
            java.lang.Long r1 = java.lang.Long.valueOf(r3)
            java.lang.Object r0 = r0.get(r1)
            com.kwad.sdk.internal.api.SceneImpl r0 = (com.kwad.sdk.internal.api.SceneImpl) r0
            goto L10
        Lf:
            r0 = 0
        L10:
            if (r0 != 0) goto L17
            com.kwad.sdk.internal.api.SceneImpl r0 = new com.kwad.sdk.internal.api.SceneImpl
            r0.<init>(r3)
        L17:
            return r0
    }

    public java.util.List<com.kwad.sdk.core.response.model.AdTemplate> getAdTemplateList() {
            r1 = this;
            java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r0 = r1.mAdTemplateList
            return r0
    }

    public com.kwad.sdk.internal.api.SceneImpl getDefaultAdScene() {
            r2 = this;
            long r0 = r2.getPosId()
            com.kwad.sdk.internal.api.SceneImpl r0 = r2.getAdScene(r0)
            return r0
    }

    public com.kwad.sdk.core.response.model.AdTemplate getFirstAdTemplate() {
            r2 = this;
            java.util.List r0 = r2.getAdTemplateList()
            if (r0 == 0) goto L15
            int r1 = r0.size()
            if (r1 != 0) goto Ld
            goto L15
        Ld:
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.kwad.sdk.core.response.model.AdTemplate r0 = (com.kwad.sdk.core.response.model.AdTemplate) r0
            return r0
        L15:
            r0 = 0
            return r0
    }

    public long getPosId() {
            r2 = this;
            java.util.List r0 = r2.getProceedTemplateList()
            int r1 = r0.size()
            if (r1 != 0) goto Ld
            r0 = 0
            return r0
        Ld:
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.kwad.sdk.core.response.model.AdTemplate r0 = (com.kwad.sdk.core.response.model.AdTemplate) r0
            long r0 = r0.posId
            return r0
    }

    public java.util.List<com.kwad.sdk.core.response.model.AdTemplate> getProceedTemplateList() {
            r5 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.List r1 = r5.getAdTemplateList()
            if (r1 != 0) goto Lc
            return r0
        Lc:
            int r2 = r1.size()
            r3 = 0
        L11:
            if (r3 >= r2) goto L1f
            java.lang.Object r4 = r1.get(r3)
            com.kwad.sdk.core.response.model.AdTemplate r4 = (com.kwad.sdk.core.response.model.AdTemplate) r4
            r0.add(r4)
            int r3 = r3 + 1
            goto L11
        L1f:
            return r0
    }

    public java.lang.String getResponseJson() {
            r3 = this;
            java.lang.String r0 = r3.mOriginalJson
            if (r0 == 0) goto L5
            return r0
        L5:
            org.json.JSONObject r0 = super.toJson()
            java.lang.String r1 = r3.pcursor
            java.lang.String r2 = "pcursor"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            com.kwad.sdk.core.response.model.PageInfo r1 = r3.pageInfo
            java.lang.String r2 = "pageInfo"
            com.kwad.sdk.utils.t.a(r0, r2, r1)
            java.util.List r1 = r3.getAdTemplateList()
            org.json.JSONArray r1 = com.kwad.sdk.utils.t.I(r1)
            java.lang.String r1 = r1.toString()
            java.lang.String r1 = com.kwad.sdk.core.a.d.cQ(r1)
            java.lang.String r2 = "impAdInfo"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public boolean isAdResultDataEmpty() {
            r5 = this;
            java.util.List r0 = r5.getAdTemplateList()
            boolean r1 = r0.isEmpty()
            r2 = 1
            java.lang.String r3 = "AdResultData"
            if (r1 == 0) goto L13
            java.lang.String r0 = "adTemplateList is empty"
        Lf:
            com.kwad.sdk.core.e.c.w(r3, r0)
            return r2
        L13:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r4 = "adTemplateList size = "
            r1.<init>(r4)
            int r4 = r0.size()
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            com.kwad.sdk.core.e.c.d(r3, r1)
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.kwad.sdk.core.response.model.AdTemplate r0 = (com.kwad.sdk.core.response.model.AdTemplate) r0
            java.util.List<com.kwad.sdk.core.response.model.AdInfo> r0 = r0.adInfoList
            boolean r4 = r0.isEmpty()
            if (r4 == 0) goto L3a
            java.lang.String r0 = "adInfoList is empty"
            goto Lf
        L3a:
            java.lang.Object r0 = r0.get(r1)
            com.kwad.sdk.core.response.model.AdInfo r0 = (com.kwad.sdk.core.response.model.AdInfo) r0
            if (r0 != 0) goto L45
            java.lang.String r0 = "adInfo is null"
            goto Lf
        L45:
            return r1
    }

    public boolean isBidding() {
            r3 = this;
            java.util.List r0 = r3.getProceedTemplateList()
            int r1 = r0.size()
            r2 = 0
            if (r1 != 0) goto Lc
            return r2
        Lc:
            java.lang.Object r0 = r0.get(r2)
            com.kwad.sdk.core.response.model.AdTemplate r0 = (com.kwad.sdk.core.response.model.AdTemplate) r0
            int r0 = com.kwad.sdk.core.response.b.d.cv(r0)
            if (r0 <= 0) goto L1a
            r0 = 1
            return r0
        L1a:
            return r2
    }

    @Override
    public boolean isDataEmpty() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void parseJson(org.json.JSONObject r7) {
            r6 = this;
            java.lang.String r0 = "json bug"
            super.parseJson(r7)
            if (r7 != 0) goto L8
            return
        L8:
            java.lang.String r1 = "pcursor"
            java.lang.String r1 = r7.optString(r1)     // Catch: java.lang.Exception -> L8d
            r6.pcursor = r1     // Catch: java.lang.Exception -> L8d
            java.lang.String r1 = "pageInfo"
            java.lang.String r1 = r7.optString(r1)     // Catch: java.lang.Exception -> L2b
            boolean r2 = com.kwad.sdk.utils.bc.isNullString(r1)     // Catch: java.lang.Exception -> L2b
            if (r2 != 0) goto L36
            java.lang.String r1 = com.kwad.sdk.core.a.d.getResponseData(r1)     // Catch: java.lang.Exception -> L2b
            com.kwad.sdk.core.response.model.PageInfo r2 = r6.pageInfo     // Catch: java.lang.Exception -> L2b
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2b
            r3.<init>(r1)     // Catch: java.lang.Exception -> L2b
            r2.parseJson(r3)     // Catch: java.lang.Exception -> L2b
            goto L36
        L2b:
            r1 = move-exception
            java.lang.String r2 = r1.toString()     // Catch: java.lang.Exception -> L8d
            com.kwad.sdk.core.e.c.d(r0, r2)     // Catch: java.lang.Exception -> L8d
            com.kwad.sdk.core.e.c.printStackTrace(r1)     // Catch: java.lang.Exception -> L8d
        L36:
            java.lang.String r1 = "impAdInfo"
            java.lang.String r7 = r7.optString(r1)     // Catch: java.lang.Exception -> L8d
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> L8d
            if (r1 != 0) goto L8c
            java.lang.String r7 = com.kwad.sdk.core.a.d.getResponseData(r7)     // Catch: java.lang.Exception -> L8d
            boolean r1 = com.kwad.sdk.utils.bc.isNullString(r7)     // Catch: java.lang.Exception -> L8d
            if (r1 != 0) goto L8c
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: org.json.JSONException -> L88 java.lang.Exception -> L8d
            r1.<init>(r7)     // Catch: org.json.JSONException -> L88 java.lang.Exception -> L8d
            int r7 = r1.length()     // Catch: org.json.JSONException -> L88 java.lang.Exception -> L8d
            if (r7 <= 0) goto L98
            r7 = 0
        L58:
            int r2 = r1.length()     // Catch: org.json.JSONException -> L88 java.lang.Exception -> L8d
            if (r7 >= r2) goto L98
            org.json.JSONObject r2 = r1.optJSONObject(r7)     // Catch: org.json.JSONException -> L88 java.lang.Exception -> L8d
            if (r2 == 0) goto L85
            com.kwad.sdk.core.response.model.AdTemplate r3 = new com.kwad.sdk.core.response.model.AdTemplate     // Catch: org.json.JSONException -> L88 java.lang.Exception -> L8d
            r3.<init>()     // Catch: org.json.JSONException -> L88 java.lang.Exception -> L8d
            r3.parseJson(r2)     // Catch: org.json.JSONException -> L88 java.lang.Exception -> L8d
            long r4 = r6.llsid     // Catch: org.json.JSONException -> L88 java.lang.Exception -> L8d
            r3.llsid = r4     // Catch: org.json.JSONException -> L88 java.lang.Exception -> L8d
            java.lang.String r2 = r6.extra     // Catch: org.json.JSONException -> L88 java.lang.Exception -> L8d
            r3.extra = r2     // Catch: org.json.JSONException -> L88 java.lang.Exception -> L8d
            long r4 = r3.posId     // Catch: org.json.JSONException -> L88 java.lang.Exception -> L8d
            com.kwad.sdk.internal.api.SceneImpl r2 = r6.getAdScene(r4)     // Catch: org.json.JSONException -> L88 java.lang.Exception -> L8d
            r3.mAdScene = r2     // Catch: org.json.JSONException -> L88 java.lang.Exception -> L8d
            com.kwad.sdk.core.response.model.PageInfo r2 = r6.pageInfo     // Catch: org.json.JSONException -> L88 java.lang.Exception -> L8d
            r3.mPageInfo = r2     // Catch: org.json.JSONException -> L88 java.lang.Exception -> L8d
            java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r2 = r6.mAdTemplateList     // Catch: org.json.JSONException -> L88 java.lang.Exception -> L8d
            r2.add(r3)     // Catch: org.json.JSONException -> L88 java.lang.Exception -> L8d
        L85:
            int r7 = r7 + 1
            goto L58
        L88:
            r7 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r7)     // Catch: java.lang.Exception -> L8d
        L8c:
            return
        L8d:
            r7 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r7)
            java.lang.String r7 = r7.toString()
            com.kwad.sdk.core.e.c.d(r0, r7)
        L98:
            return
    }

    public void setAdTemplateList(java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r1) {
            r0 = this;
            r0.mAdTemplateList = r1
            return
    }

    public void setRequestAdSceneList(java.util.List<com.kwad.sdk.internal.api.SceneImpl> r5) {
            r4 = this;
            if (r5 == 0) goto L2b
            java.util.HashMap r0 = new java.util.HashMap
            int r1 = r5.size()
            r0.<init>(r1)
            r4.mRequestAdSceneMap = r0
            java.util.Iterator r5 = r5.iterator()
        L11:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto L2b
            java.lang.Object r0 = r5.next()
            com.kwad.sdk.internal.api.SceneImpl r0 = (com.kwad.sdk.internal.api.SceneImpl) r0
            java.util.Map<java.lang.Long, com.kwad.sdk.internal.api.SceneImpl> r1 = r4.mRequestAdSceneMap
            long r2 = r0.getPosId()
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            r1.put(r2, r0)
            goto L11
        L2b:
            return
    }

    @Override
    public org.json.JSONObject toJson() {
            r3 = this;
            org.json.JSONObject r0 = super.toJson()
            java.lang.String r1 = r3.pcursor
            java.lang.String r2 = "pcursor"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            com.kwad.sdk.core.response.model.PageInfo r1 = r3.pageInfo
            java.lang.String r2 = "pageInfo"
            com.kwad.sdk.utils.t.a(r0, r2, r1)
            java.util.List r1 = r3.getAdTemplateList()
            java.lang.String r2 = "impAdInfo"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            return r0
    }
}

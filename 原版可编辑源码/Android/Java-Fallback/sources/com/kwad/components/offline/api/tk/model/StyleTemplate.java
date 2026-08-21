package com.kwad.components.offline.api.tk.model;

public class StyleTemplate extends com.kwad.components.offline.api.core.model.BaseOfflineCompoJsonParse<com.kwad.components.offline.api.tk.model.StyleTemplate> implements java.io.Serializable {
    private static final long serialVersionUID = -6279192768068169498L;
    public java.lang.String jsStr;
    public java.lang.String templateId;
    public java.lang.String templateMd5;
    public java.lang.String templateUrl;
    public java.lang.String templateVersion;
    public int templateVersionCode;
    public int tkSouce;

    public StyleTemplate() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getTKConfigFileName() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.templateId
            r0.append(r1)
            java.lang.String r1 = "."
            r0.append(r1)
            int r1 = r2.templateVersionCode
            r0.append(r1)
            java.lang.String r1 = ".json"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public java.lang.String getTKJsFileName() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.templateId
            r0.append(r1)
            r1 = 46
            r0.append(r1)
            int r1 = r2.templateVersionCode
            r0.append(r1)
            java.lang.String r1 = ".js"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public java.lang.String getTemplateKey() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.templateId
            r0.append(r1)
            int r1 = r2.templateVersionCode
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void parseJson(com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.offline.api.tk.model.StyleTemplate r1 = (com.kwad.components.offline.api.tk.model.StyleTemplate) r1
            r0.parseJson(r1, r2)
            return
    }

    public void parseJson(com.kwad.components.offline.api.tk.model.StyleTemplate r4, org.json.JSONObject r5) {
            r3 = this;
            if (r5 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "templateId"
            java.lang.String r1 = r5.optString(r0)
            r4.templateId = r1
            java.lang.Object r0 = r5.opt(r0)
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L17
            r4.templateId = r2
        L17:
            java.lang.String r0 = "templateUrl"
            java.lang.String r1 = r5.optString(r0)
            r4.templateUrl = r1
            java.lang.Object r0 = r5.opt(r0)
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L29
            r4.templateUrl = r2
        L29:
            java.lang.String r0 = "templateVersion"
            java.lang.String r1 = r5.optString(r0)
            r4.templateVersion = r1
            java.lang.Object r0 = r5.opt(r0)
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L3b
            r4.templateVersion = r2
        L3b:
            java.lang.String r0 = "templateVersionCode"
            int r0 = r5.optInt(r0)
            r4.templateVersionCode = r0
            java.lang.String r0 = "templateMd5"
            java.lang.String r1 = r5.optString(r0)
            r4.templateMd5 = r1
            java.lang.Object r5 = r5.opt(r0)
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r5 != r0) goto L55
            r4.templateMd5 = r2
        L55:
            return
    }

    @Override
    public org.json.JSONObject toJson(com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse r1) {
            r0 = this;
            com.kwad.components.offline.api.tk.model.StyleTemplate r1 = (com.kwad.components.offline.api.tk.model.StyleTemplate) r1
            org.json.JSONObject r1 = r0.toJson(r1)
            return r1
    }

    @Override
    public org.json.JSONObject toJson(com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.offline.api.tk.model.StyleTemplate r1 = (com.kwad.components.offline.api.tk.model.StyleTemplate) r1
            org.json.JSONObject r1 = r0.toJson(r1, r2)
            return r1
    }

    public org.json.JSONObject toJson(com.kwad.components.offline.api.tk.model.StyleTemplate r2) {
            r1 = this;
            r0 = 0
            org.json.JSONObject r2 = r1.toJson(r2, r0)
            return r2
    }

    public org.json.JSONObject toJson(com.kwad.components.offline.api.tk.model.StyleTemplate r4, org.json.JSONObject r5) {
            r3 = this;
            if (r5 != 0) goto L7
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
        L7:
            java.lang.String r0 = r4.templateId
            java.lang.String r1 = ""
            if (r0 == 0) goto L1a
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1a
            java.lang.String r0 = r4.templateId
            java.lang.String r2 = "templateId"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L1a:
            java.lang.String r0 = r4.templateUrl
            if (r0 == 0) goto L2b
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2b
            java.lang.String r0 = r4.templateUrl
            java.lang.String r2 = "templateUrl"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L2b:
            java.lang.String r0 = r4.templateVersion
            if (r0 == 0) goto L3c
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L3c
            java.lang.String r0 = r4.templateVersion
            java.lang.String r2 = "templateVersion"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L3c:
            int r0 = r4.templateVersionCode
            if (r0 == 0) goto L45
            java.lang.String r2 = "templateVersionCode"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L45:
            java.lang.String r0 = r4.templateMd5
            if (r0 == 0) goto L56
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L56
            java.lang.String r4 = r4.templateMd5
            java.lang.String r0 = "templateMd5"
            com.kwad.sdk.utils.t.putValue(r5, r0, r4)
        L56:
            return r5
    }
}

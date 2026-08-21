package com.kwad.sdk.core.scene;

public class EntryPackage extends com.kwad.sdk.core.scene.URLPackage {
    private static final long serialVersionUID = 8251709184937662571L;
    public java.lang.String entryId;
    public java.lang.String entryPageSource;

    public EntryPackage() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "unknown"
            r1.entryPageSource = r0
            return
    }

    public EntryPackage(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            java.lang.String r1 = "unknown"
            r0.entryPageSource = r1
            return
    }

    @Override
    public void parseJson(org.json.JSONObject r2) {
            r1 = this;
            super.parseJson(r2)
            if (r2 != 0) goto L6
            return
        L6:
            java.lang.String r0 = "entryPageSource"
            java.lang.String r0 = r2.optString(r0)
            r1.entryPageSource = r0
            java.lang.String r0 = "entryId"
            java.lang.String r2 = r2.optString(r0)
            r1.entryId = r2
            return
    }

    @Override
    public org.json.JSONObject toJson() {
            r3 = this;
            org.json.JSONObject r0 = super.toJson()
            java.lang.String r1 = r3.entryPageSource
            java.lang.String r2 = "entryPageSource"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r3.entryId
            java.lang.String r2 = "entryId"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            return r0
    }
}

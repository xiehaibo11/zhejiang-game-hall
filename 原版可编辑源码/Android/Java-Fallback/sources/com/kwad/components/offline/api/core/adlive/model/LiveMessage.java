package com.kwad.components.offline.api.core.adlive.model;

public class LiveMessage extends com.kwad.components.offline.api.core.model.BaseOfflineCompoJsonParse<com.kwad.components.offline.api.core.adlive.model.LiveMessage> implements java.io.Serializable {
    private static final long serialVersionUID = 2264410572624564928L;
    public java.lang.String content;
    public long mSortRank;
    public java.lang.String userName;

    public LiveMessage() {
            r0 = this;
            r0.<init>()
            return
    }

    public boolean isInValid() {
            r1 = this;
            java.lang.String r0 = r1.userName
            boolean r0 = com.kwad.components.offline.api.core.utils.LiveStringUtil.isNullString(r0)
            if (r0 != 0) goto L13
            java.lang.String r0 = r1.content
            boolean r0 = com.kwad.components.offline.api.core.utils.LiveStringUtil.isNullString(r0)
            if (r0 == 0) goto L11
            goto L13
        L11:
            r0 = 0
            return r0
        L13:
            r0 = 1
            return r0
    }

    public void parseJson(com.kwad.components.offline.api.core.adlive.model.LiveMessage r4, org.json.JSONObject r5) {
            r3 = this;
            if (r5 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "userName"
            java.lang.String r1 = r5.optString(r0)
            r4.userName = r1
            java.lang.Object r0 = r5.opt(r0)
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L17
            r4.userName = r2
        L17:
            java.lang.String r0 = "content"
            java.lang.String r1 = r5.optString(r0)
            r4.content = r1
            java.lang.Object r0 = r5.opt(r0)
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L29
            r4.content = r2
        L29:
            java.lang.String r0 = "sortRank"
            int r5 = r5.optInt(r0)
            long r0 = (long) r5
            r4.mSortRank = r0
            return
    }

    @Override
    public void parseJson(com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.offline.api.core.adlive.model.LiveMessage r1 = (com.kwad.components.offline.api.core.adlive.model.LiveMessage) r1
            r0.parseJson(r1, r2)
            return
    }

    public org.json.JSONObject toJson(com.kwad.components.offline.api.core.adlive.model.LiveMessage r2) {
            r1 = this;
            r0 = 0
            org.json.JSONObject r2 = r1.toJson(r2, r0)
            return r2
    }

    public org.json.JSONObject toJson(com.kwad.components.offline.api.core.adlive.model.LiveMessage r5, org.json.JSONObject r6) {
            r4 = this;
            if (r6 != 0) goto L7
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
        L7:
            java.lang.String r0 = r5.userName
            java.lang.String r1 = ""
            if (r0 == 0) goto L1a
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1a
            java.lang.String r0 = r5.userName
            java.lang.String r2 = "userName"
            com.kwad.sdk.utils.t.putValue(r6, r2, r0)
        L1a:
            java.lang.String r0 = r5.content
            if (r0 == 0) goto L2b
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2b
            java.lang.String r0 = r5.content
            java.lang.String r1 = "content"
            com.kwad.sdk.utils.t.putValue(r6, r1, r0)
        L2b:
            long r0 = r5.mSortRank
            r2 = 0
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 == 0) goto L38
            java.lang.String r5 = "sortRank"
            com.kwad.sdk.utils.t.putValue(r6, r5, r0)
        L38:
            return r6
    }

    @Override
    public org.json.JSONObject toJson(com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse r1) {
            r0 = this;
            com.kwad.components.offline.api.core.adlive.model.LiveMessage r1 = (com.kwad.components.offline.api.core.adlive.model.LiveMessage) r1
            org.json.JSONObject r1 = r0.toJson(r1)
            return r1
    }

    @Override
    public org.json.JSONObject toJson(com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.offline.api.core.adlive.model.LiveMessage r1 = (com.kwad.components.offline.api.core.adlive.model.LiveMessage) r1
            org.json.JSONObject r1 = r0.toJson(r1, r2)
            return r1
    }
}

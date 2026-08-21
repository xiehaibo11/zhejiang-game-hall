package com.kwad.components.offline.api.core.adlive.model;

public class KSAdLiveRoomItemInfo extends com.kwad.components.offline.api.core.model.BaseOfflineCompoJsonParse<com.kwad.components.offline.api.core.adlive.model.KSAdLiveRoomItemInfo> implements java.io.Serializable {
    private static final long serialVersionUID = -6149616231567033413L;
    public java.lang.String imageUrl;
    public java.lang.String itemId;
    public java.lang.String price;
    public java.lang.String title;

    public KSAdLiveRoomItemInfo() {
            r0 = this;
            r0.<init>()
            return
    }

    public void parseJson(com.kwad.components.offline.api.core.adlive.model.KSAdLiveRoomItemInfo r4, org.json.JSONObject r5) {
            r3 = this;
            if (r5 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "itemId"
            java.lang.String r1 = r5.optString(r0)
            r4.itemId = r1
            java.lang.Object r0 = r5.opt(r0)
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L17
            r4.itemId = r2
        L17:
            java.lang.String r0 = "imageUrl"
            java.lang.String r1 = r5.optString(r0)
            r4.imageUrl = r1
            java.lang.Object r0 = r5.opt(r0)
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L29
            r4.imageUrl = r2
        L29:
            java.lang.String r0 = "title"
            java.lang.String r1 = r5.optString(r0)
            r4.title = r1
            java.lang.Object r0 = r5.opt(r0)
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L3b
            r4.title = r2
        L3b:
            java.lang.String r0 = "templateVersion"
            java.lang.String r0 = r5.optString(r0)
            r4.price = r0
            java.lang.String r0 = "price"
            java.lang.Object r5 = r5.opt(r0)
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r5 != r0) goto L4f
            r4.price = r2
        L4f:
            return
    }

    @Override
    public void parseJson(com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.offline.api.core.adlive.model.KSAdLiveRoomItemInfo r1 = (com.kwad.components.offline.api.core.adlive.model.KSAdLiveRoomItemInfo) r1
            r0.parseJson(r1, r2)
            return
    }

    public org.json.JSONObject toJson(com.kwad.components.offline.api.core.adlive.model.KSAdLiveRoomItemInfo r2) {
            r1 = this;
            r0 = 0
            org.json.JSONObject r2 = r1.toJson(r2, r0)
            return r2
    }

    public org.json.JSONObject toJson(com.kwad.components.offline.api.core.adlive.model.KSAdLiveRoomItemInfo r4, org.json.JSONObject r5) {
            r3 = this;
            if (r5 != 0) goto L7
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
        L7:
            java.lang.String r0 = r4.itemId
            java.lang.String r1 = ""
            if (r0 == 0) goto L1a
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1a
            java.lang.String r0 = r4.itemId
            java.lang.String r2 = "itemId"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L1a:
            java.lang.String r0 = r4.imageUrl
            if (r0 == 0) goto L2b
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2b
            java.lang.String r0 = r4.imageUrl
            java.lang.String r2 = "imageUrl"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L2b:
            java.lang.String r0 = r4.title
            if (r0 == 0) goto L3c
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L3c
            java.lang.String r0 = r4.title
            java.lang.String r2 = "title"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L3c:
            java.lang.String r0 = r4.price
            if (r0 == 0) goto L4d
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L4d
            java.lang.String r4 = r4.price
            java.lang.String r0 = "price"
            com.kwad.sdk.utils.t.putValue(r5, r0, r4)
        L4d:
            return r5
    }

    @Override
    public org.json.JSONObject toJson(com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse r1) {
            r0 = this;
            com.kwad.components.offline.api.core.adlive.model.KSAdLiveRoomItemInfo r1 = (com.kwad.components.offline.api.core.adlive.model.KSAdLiveRoomItemInfo) r1
            org.json.JSONObject r1 = r0.toJson(r1)
            return r1
    }

    @Override
    public org.json.JSONObject toJson(com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.offline.api.core.adlive.model.KSAdLiveRoomItemInfo r1 = (com.kwad.components.offline.api.core.adlive.model.KSAdLiveRoomItemInfo) r1
            org.json.JSONObject r1 = r0.toJson(r1, r2)
            return r1
    }
}

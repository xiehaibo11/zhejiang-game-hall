package com.kwad.components.offline.api.core.adlive.model;

public class KSAdLiveShopInfo extends com.kwad.components.offline.api.core.model.BaseOfflineCompoJsonParse<com.kwad.components.offline.api.core.adlive.model.KSAdLiveShopInfo> implements java.io.Serializable {
    private static final long serialVersionUID = -7139399767269744574L;
    public int changeType;
    public com.kwad.components.offline.api.core.adlive.model.KSAdLiveRoomItemInfo itemInfo;
    public int shopCardType;

    public KSAdLiveShopInfo() {
            r0 = this;
            r0.<init>()
            return
    }

    public void parseJson(com.kwad.components.offline.api.core.adlive.model.KSAdLiveShopInfo r2, org.json.JSONObject r3) {
            r1 = this;
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "shopCardType"
            int r0 = r3.optInt(r0)
            r2.shopCardType = r0
            java.lang.String r0 = "changeType"
            int r0 = r3.optInt(r0)
            r2.changeType = r0
            com.kwad.components.offline.api.core.adlive.model.KSAdLiveRoomItemInfo r0 = new com.kwad.components.offline.api.core.adlive.model.KSAdLiveRoomItemInfo
            r0.<init>()
            r2.itemInfo = r0
            java.lang.String r2 = "itemInfo"
            org.json.JSONObject r2 = r3.optJSONObject(r2)
            r0.parseJson(r2)
            return
    }

    @Override
    public void parseJson(com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.offline.api.core.adlive.model.KSAdLiveShopInfo r1 = (com.kwad.components.offline.api.core.adlive.model.KSAdLiveShopInfo) r1
            r0.parseJson(r1, r2)
            return
    }

    public org.json.JSONObject toJson(com.kwad.components.offline.api.core.adlive.model.KSAdLiveShopInfo r2) {
            r1 = this;
            r0 = 0
            org.json.JSONObject r2 = r1.toJson(r2, r0)
            return r2
    }

    public org.json.JSONObject toJson(com.kwad.components.offline.api.core.adlive.model.KSAdLiveShopInfo r3, org.json.JSONObject r4) {
            r2 = this;
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            com.kwad.components.offline.api.core.adlive.model.KSAdLiveRoomItemInfo r0 = r3.itemInfo
            java.lang.String r1 = "itemInfo"
            com.kwad.components.offline.api.core.utils.JsonHelper.putValue(r4, r1, r0)
            int r0 = r3.shopCardType
            if (r0 == 0) goto L17
            java.lang.String r1 = "shopCardType"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L17:
            int r3 = r3.changeType
            if (r3 == 0) goto L20
            java.lang.String r0 = "changeType"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
        L20:
            return r4
    }

    @Override
    public org.json.JSONObject toJson(com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse r1) {
            r0 = this;
            com.kwad.components.offline.api.core.adlive.model.KSAdLiveShopInfo r1 = (com.kwad.components.offline.api.core.adlive.model.KSAdLiveShopInfo) r1
            org.json.JSONObject r1 = r0.toJson(r1)
            return r1
    }

    @Override
    public org.json.JSONObject toJson(com.kwad.components.offline.api.core.model.IOfflineCompoJsonParse r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.offline.api.core.adlive.model.KSAdLiveShopInfo r1 = (com.kwad.components.offline.api.core.adlive.model.KSAdLiveShopInfo) r1
            org.json.JSONObject r1 = r0.toJson(r1, r2)
            return r1
    }
}

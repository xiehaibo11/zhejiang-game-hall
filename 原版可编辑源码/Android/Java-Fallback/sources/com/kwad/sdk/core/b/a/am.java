package com.kwad.sdk.core.b.a;

public final class am implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdInfo.AdvertiserInfo> {
    public am() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdInfo.AdvertiserInfo r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "userId"
            long r0 = r4.optLong(r0)
            r3.userId = r0
            java.lang.String r0 = "userName"
            java.lang.String r0 = r4.optString(r0)
            r3.userName = r0
            java.lang.String r0 = r3.userName
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L1d
            r3.userName = r2
        L1d:
            java.lang.String r0 = "rawUserName"
            java.lang.String r0 = r4.optString(r0)
            r3.rawUserName = r0
            java.lang.String r0 = r3.rawUserName
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L2d
            r3.rawUserName = r2
        L2d:
            java.lang.String r0 = "userGender"
            java.lang.String r0 = r4.optString(r0)
            r3.userGender = r0
            java.lang.String r0 = r3.userGender
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L3d
            r3.userGender = r2
        L3d:
            java.lang.String r0 = "portraitUrl"
            java.lang.String r0 = r4.optString(r0)
            r3.portraitUrl = r0
            java.lang.String r0 = r3.portraitUrl
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L4d
            r3.portraitUrl = r2
        L4d:
            java.lang.String r0 = "adAuthorText"
            java.lang.String r0 = r4.optString(r0)
            r3.adAuthorText = r0
            java.lang.String r0 = r3.adAuthorText
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L5d
            r3.adAuthorText = r2
        L5d:
            java.lang.String r0 = "authorIconGuide"
            java.lang.String r0 = r4.optString(r0)
            r3.authorIconGuide = r0
            java.lang.String r0 = r3.authorIconGuide
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L6d
            r3.authorIconGuide = r2
        L6d:
            java.lang.String r0 = "followed"
            boolean r0 = r4.optBoolean(r0)
            r3.followed = r0
            java.lang.String r0 = "fansCount"
            int r0 = r4.optInt(r0)
            r3.fansCount = r0
            java.lang.String r0 = "brief"
            java.lang.String r4 = r4.optString(r0)
            r3.brief = r4
            java.lang.String r4 = r3.brief
            java.lang.Object r0 = org.json.JSONObject.NULL
            if (r4 != r0) goto L8d
            r3.brief = r2
        L8d:
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdInfo.AdvertiserInfo r4, org.json.JSONObject r5) {
            if (r5 != 0) goto L7
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
        L7:
            long r0 = r4.userId
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L16
            long r0 = r4.userId
            java.lang.String r2 = "userId"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L16:
            java.lang.String r0 = r4.userName
            java.lang.String r1 = ""
            if (r0 == 0) goto L2b
            java.lang.String r0 = r4.userName
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2b
            java.lang.String r0 = r4.userName
            java.lang.String r2 = "userName"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L2b:
            java.lang.String r0 = r4.rawUserName
            if (r0 == 0) goto L3e
            java.lang.String r0 = r4.rawUserName
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L3e
            java.lang.String r0 = r4.rawUserName
            java.lang.String r2 = "rawUserName"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L3e:
            java.lang.String r0 = r4.userGender
            if (r0 == 0) goto L51
            java.lang.String r0 = r4.userGender
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L51
            java.lang.String r0 = r4.userGender
            java.lang.String r2 = "userGender"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L51:
            java.lang.String r0 = r4.portraitUrl
            if (r0 == 0) goto L64
            java.lang.String r0 = r4.portraitUrl
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L64
            java.lang.String r0 = r4.portraitUrl
            java.lang.String r2 = "portraitUrl"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L64:
            java.lang.String r0 = r4.adAuthorText
            if (r0 == 0) goto L77
            java.lang.String r0 = r4.adAuthorText
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L77
            java.lang.String r0 = r4.adAuthorText
            java.lang.String r2 = "adAuthorText"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L77:
            java.lang.String r0 = r4.authorIconGuide
            if (r0 == 0) goto L8a
            java.lang.String r0 = r4.authorIconGuide
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L8a
            java.lang.String r0 = r4.authorIconGuide
            java.lang.String r2 = "authorIconGuide"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L8a:
            boolean r0 = r4.followed
            if (r0 == 0) goto L95
            boolean r0 = r4.followed
            java.lang.String r2 = "followed"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        L95:
            int r0 = r4.fansCount
            if (r0 == 0) goto La0
            int r0 = r4.fansCount
            java.lang.String r2 = "fansCount"
            com.kwad.sdk.utils.t.putValue(r5, r2, r0)
        La0:
            java.lang.String r0 = r4.brief
            if (r0 == 0) goto Lb3
            java.lang.String r0 = r4.brief
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Lb3
            java.lang.String r4 = r4.brief
            java.lang.String r0 = "brief"
            com.kwad.sdk.utils.t.putValue(r5, r0, r4)
        Lb3:
            return r5
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$AdvertiserInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.AdvertiserInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdInfo$AdvertiserInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.AdvertiserInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}

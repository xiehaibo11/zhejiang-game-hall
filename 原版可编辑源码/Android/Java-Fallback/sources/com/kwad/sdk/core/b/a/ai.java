package com.kwad.sdk.core.b.a;

public final class ai implements com.kwad.sdk.core.d<com.kwad.sdk.core.response.model.AdTemplate> {
    public ai() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdTemplate r5, org.json.JSONObject r6) {
            if (r6 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "mOriginJString"
            java.lang.String r0 = r6.optString(r0)
            r5.mOriginJString = r0
            java.lang.String r0 = r5.mOriginJString
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r5.mOriginJString = r2
        L15:
            java.lang.String r0 = "posId"
            long r0 = r6.optLong(r0)
            r5.posId = r0
            java.lang.String r0 = "adStyle"
            int r0 = r6.optInt(r0)
            r5.adStyle = r0
            java.lang.String r0 = "type"
            int r0 = r6.optInt(r0)
            r5.type = r0
            java.lang.String r0 = "contentType"
            int r0 = r6.optInt(r0)
            r5.contentType = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r5.adInfoList = r0
            java.lang.String r0 = "adInfo"
            org.json.JSONArray r0 = r6.optJSONArray(r0)
            if (r0 == 0) goto L5f
            r1 = 0
        L45:
            int r3 = r0.length()
            if (r1 >= r3) goto L5f
            com.kwad.sdk.core.response.model.AdInfo r3 = new com.kwad.sdk.core.response.model.AdInfo
            r3.<init>()
            org.json.JSONObject r4 = r0.optJSONObject(r1)
            r3.parseJson(r4)
            java.util.List<com.kwad.sdk.core.response.model.AdInfo> r4 = r5.adInfoList
            r4.add(r3)
            int r1 = r1 + 1
            goto L45
        L5f:
            java.lang.String r0 = "impAdExtra"
            java.lang.String r0 = r6.optString(r0)
            r5.impAdExtra = r0
            java.lang.String r0 = r5.impAdExtra
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L6f
            r5.impAdExtra = r2
        L6f:
            java.lang.String r0 = "llsid"
            long r0 = r6.optLong(r0)
            r5.llsid = r0
            java.lang.String r0 = "mIsFromContent"
            boolean r0 = r6.optBoolean(r0)
            r5.mIsFromContent = r0
            java.lang.String r0 = "extra"
            java.lang.String r0 = r6.optString(r0)
            r5.extra = r0
            java.lang.String r0 = r5.extra
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L8f
            r5.extra = r2
        L8f:
            java.lang.String r0 = "mUniqueId"
            java.lang.String r0 = r6.optString(r0)
            r5.mUniqueId = r0
            java.lang.String r0 = r5.mUniqueId
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L9f
            r5.mUniqueId = r2
        L9f:
            java.lang.String r0 = "mBidEcpm"
            long r0 = r6.optLong(r0)
            r5.mBidEcpm = r0
            com.kwad.sdk.internal.api.SceneImpl r0 = new com.kwad.sdk.internal.api.SceneImpl
            r0.<init>()
            r5.mAdScene = r0
            com.kwad.sdk.internal.api.SceneImpl r0 = r5.mAdScene
            java.lang.String r1 = "mAdScene"
            org.json.JSONObject r1 = r6.optJSONObject(r1)
            r0.parseJson(r1)
            java.lang.String r0 = "realShowType"
            int r0 = r6.optInt(r0)
            r5.realShowType = r0
            java.lang.String r0 = "mInitVoiceStatus"
            int r0 = r6.optInt(r0)
            r5.mInitVoiceStatus = r0
            java.lang.String r0 = "mMediaPlayerType"
            int r0 = r6.optInt(r0)
            r5.mMediaPlayerType = r0
            com.kwad.sdk.core.response.model.VideoPlayerStatus r0 = new com.kwad.sdk.core.response.model.VideoPlayerStatus
            r0.<init>()
            r5.mVideoPlayerStatus = r0
            com.kwad.sdk.core.response.model.VideoPlayerStatus r0 = r5.mVideoPlayerStatus
            java.lang.String r1 = "mVideoPlayerStatus"
            org.json.JSONObject r1 = r6.optJSONObject(r1)
            r0.parseJson(r1)
            java.lang.Long r0 = new java.lang.Long
            java.lang.String r1 = "-1"
            r0.<init>(r1)
            long r2 = r0.longValue()
            java.lang.String r0 = "mOutClickTimeParam"
            long r2 = r6.optLong(r0, r2)
            r5.mOutClickTimeParam = r2
            java.lang.Long r0 = new java.lang.Long
            r0.<init>(r1)
            long r0 = r0.longValue()
            java.lang.String r2 = "mVisibleTimeParam"
            long r0 = r6.optLong(r2, r0)
            r5.mVisibleTimeParam = r0
            java.lang.String r0 = "mIsLeftSlipStatus"
            int r0 = r6.optInt(r0)
            r5.mIsLeftSlipStatus = r0
            java.lang.String r0 = "mPhotoResponseType"
            int r0 = r6.optInt(r0)
            r5.mPhotoResponseType = r0
            com.kwad.sdk.core.response.model.PageInfo r0 = new com.kwad.sdk.core.response.model.PageInfo
            r0.<init>()
            r5.mPageInfo = r0
            com.kwad.sdk.core.response.model.PageInfo r0 = r5.mPageInfo
            java.lang.String r1 = "mPageInfo"
            org.json.JSONObject r1 = r6.optJSONObject(r1)
            r0.parseJson(r1)
            java.lang.Boolean r0 = new java.lang.Boolean
            java.lang.String r1 = "false"
            r0.<init>(r1)
            boolean r0 = r0.booleanValue()
            java.lang.String r2 = "mIsForceJumpLandingPage"
            boolean r0 = r6.optBoolean(r2, r0)
            r5.mIsForceJumpLandingPage = r0
            java.lang.String r0 = "mIsAudioEnable"
            boolean r0 = r6.optBoolean(r0)
            r5.mIsAudioEnable = r0
            java.lang.String r0 = "mRewardVerifyCalled"
            boolean r0 = r6.optBoolean(r0)
            r5.mRewardVerifyCalled = r0
            java.lang.String r0 = "isWebViewDownload"
            boolean r0 = r6.optBoolean(r0)
            r5.isWebViewDownload = r0
            java.lang.String r0 = "watched"
            boolean r0 = r6.optBoolean(r0)
            r5.watched = r0
            java.lang.String r0 = "converted"
            boolean r0 = r6.optBoolean(r0)
            r5.converted = r0
            java.lang.Boolean r0 = new java.lang.Boolean
            r0.<init>(r1)
            boolean r0 = r0.booleanValue()
            java.lang.String r1 = "fromCache"
            boolean r0 = r6.optBoolean(r1, r0)
            r5.fromCache = r0
            java.lang.String r0 = "loadDataTime"
            long r0 = r6.optLong(r0)
            r5.loadDataTime = r0
            java.lang.String r0 = "showStartTime"
            long r0 = r6.optLong(r0)
            r5.showStartTime = r0
            java.lang.String r0 = "notNetworkRequest"
            boolean r0 = r6.optBoolean(r0)
            r5.notNetworkRequest = r0
            java.lang.String r0 = "downloadDuration"
            long r0 = r6.optLong(r0)
            r5.downloadDuration = r0
            java.lang.String r0 = "adLoadTotalTime"
            long r0 = r6.optLong(r0)
            r5.adLoadTotalTime = r0
            java.lang.String r0 = "adShowStartTimeStamp"
            long r0 = r6.optLong(r0)
            r5.adShowStartTimeStamp = r0
            com.kwad.sdk.core.response.model.AdStatusInfo r0 = new com.kwad.sdk.core.response.model.AdStatusInfo
            r0.<init>()
            r5.mAdStatusInfo = r0
            com.kwad.sdk.core.response.model.AdStatusInfo r5 = r5.mAdStatusInfo
            java.lang.String r0 = "mAdStatusInfo"
            org.json.JSONObject r6 = r6.optJSONObject(r0)
            r5.parseJson(r6)
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.response.model.AdTemplate r6, org.json.JSONObject r7) {
            if (r7 != 0) goto L7
            org.json.JSONObject r7 = new org.json.JSONObject
            r7.<init>()
        L7:
            java.lang.String r0 = r6.mOriginJString
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r6.mOriginJString
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r6.mOriginJString
            java.lang.String r2 = "mOriginJString"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L1c:
            long r2 = r6.posId
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L2b
            long r2 = r6.posId
            java.lang.String r0 = "posId"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L2b:
            int r0 = r6.adStyle
            if (r0 == 0) goto L36
            int r0 = r6.adStyle
            java.lang.String r2 = "adStyle"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L36:
            int r0 = r6.type
            if (r0 == 0) goto L41
            int r0 = r6.type
            java.lang.String r2 = "type"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L41:
            int r0 = r6.contentType
            if (r0 == 0) goto L4c
            int r0 = r6.contentType
            java.lang.String r2 = "contentType"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L4c:
            java.util.List<com.kwad.sdk.core.response.model.AdInfo> r0 = r6.adInfoList
            java.lang.String r2 = "adInfo"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
            java.lang.String r0 = r6.impAdExtra
            if (r0 == 0) goto L66
            java.lang.String r0 = r6.impAdExtra
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L66
            java.lang.String r0 = r6.impAdExtra
            java.lang.String r2 = "impAdExtra"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L66:
            long r2 = r6.llsid
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L73
            long r2 = r6.llsid
            java.lang.String r0 = "llsid"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L73:
            boolean r0 = r6.mIsFromContent
            if (r0 == 0) goto L7e
            boolean r0 = r6.mIsFromContent
            java.lang.String r2 = "mIsFromContent"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L7e:
            java.lang.String r0 = r6.extra
            if (r0 == 0) goto L91
            java.lang.String r0 = r6.extra
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L91
            java.lang.String r0 = r6.extra
            java.lang.String r2 = "extra"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L91:
            java.lang.String r0 = r6.mUniqueId
            if (r0 == 0) goto La4
            java.lang.String r0 = r6.mUniqueId
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto La4
            java.lang.String r0 = r6.mUniqueId
            java.lang.String r1 = "mUniqueId"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        La4:
            long r0 = r6.mBidEcpm
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 == 0) goto Lb1
            long r0 = r6.mBidEcpm
            java.lang.String r2 = "mBidEcpm"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Lb1:
            com.kwad.sdk.internal.api.SceneImpl r0 = r6.mAdScene
            java.lang.String r1 = "mAdScene"
            com.kwad.sdk.utils.t.a(r7, r1, r0)
            int r0 = r6.realShowType
            if (r0 == 0) goto Lc3
            int r0 = r6.realShowType
            java.lang.String r1 = "realShowType"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        Lc3:
            int r0 = r6.mInitVoiceStatus
            if (r0 == 0) goto Lce
            int r0 = r6.mInitVoiceStatus
            java.lang.String r1 = "mInitVoiceStatus"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        Lce:
            int r0 = r6.mMediaPlayerType
            if (r0 == 0) goto Ld9
            int r0 = r6.mMediaPlayerType
            java.lang.String r1 = "mMediaPlayerType"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        Ld9:
            com.kwad.sdk.core.response.model.VideoPlayerStatus r0 = r6.mVideoPlayerStatus
            java.lang.String r1 = "mVideoPlayerStatus"
            com.kwad.sdk.utils.t.a(r7, r1, r0)
            long r0 = r6.mOutClickTimeParam
            java.lang.String r2 = "mOutClickTimeParam"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
            long r0 = r6.mVisibleTimeParam
            java.lang.String r2 = "mVisibleTimeParam"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
            int r0 = r6.mIsLeftSlipStatus
            if (r0 == 0) goto Lf9
            int r0 = r6.mIsLeftSlipStatus
            java.lang.String r1 = "mIsLeftSlipStatus"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        Lf9:
            int r0 = r6.mPhotoResponseType
            if (r0 == 0) goto L104
            int r0 = r6.mPhotoResponseType
            java.lang.String r1 = "mPhotoResponseType"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L104:
            com.kwad.sdk.core.response.model.PageInfo r0 = r6.mPageInfo
            java.lang.String r1 = "mPageInfo"
            com.kwad.sdk.utils.t.a(r7, r1, r0)
            boolean r0 = r6.mIsForceJumpLandingPage
            java.lang.String r1 = "mIsForceJumpLandingPage"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
            boolean r0 = r6.mIsAudioEnable
            if (r0 == 0) goto L11d
            boolean r0 = r6.mIsAudioEnable
            java.lang.String r1 = "mIsAudioEnable"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L11d:
            boolean r0 = r6.mRewardVerifyCalled
            if (r0 == 0) goto L128
            boolean r0 = r6.mRewardVerifyCalled
            java.lang.String r1 = "mRewardVerifyCalled"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L128:
            boolean r0 = r6.isWebViewDownload
            if (r0 == 0) goto L133
            boolean r0 = r6.isWebViewDownload
            java.lang.String r1 = "isWebViewDownload"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L133:
            boolean r0 = r6.watched
            if (r0 == 0) goto L13e
            boolean r0 = r6.watched
            java.lang.String r1 = "watched"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L13e:
            boolean r0 = r6.converted
            if (r0 == 0) goto L149
            boolean r0 = r6.converted
            java.lang.String r1 = "converted"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L149:
            boolean r0 = r6.fromCache
            java.lang.String r1 = "fromCache"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
            long r0 = r6.loadDataTime
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 == 0) goto L15d
            long r0 = r6.loadDataTime
            java.lang.String r2 = "loadDataTime"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L15d:
            long r0 = r6.showStartTime
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 == 0) goto L16a
            long r0 = r6.showStartTime
            java.lang.String r2 = "showStartTime"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L16a:
            boolean r0 = r6.notNetworkRequest
            if (r0 == 0) goto L175
            boolean r0 = r6.notNetworkRequest
            java.lang.String r1 = "notNetworkRequest"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L175:
            long r0 = r6.downloadDuration
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 == 0) goto L182
            long r0 = r6.downloadDuration
            java.lang.String r2 = "downloadDuration"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L182:
            long r0 = r6.adLoadTotalTime
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 == 0) goto L18f
            long r0 = r6.adLoadTotalTime
            java.lang.String r2 = "adLoadTotalTime"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L18f:
            long r0 = r6.adShowStartTimeStamp
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 == 0) goto L19c
            long r0 = r6.adShowStartTimeStamp
            java.lang.String r2 = "adShowStartTimeStamp"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L19c:
            com.kwad.sdk.core.response.model.AdStatusInfo r6 = r6.mAdStatusInfo
            java.lang.String r0 = "mAdStatusInfo"
            com.kwad.sdk.utils.t.a(r7, r0, r6)
            return r7
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdTemplate r1 = (com.kwad.sdk.core.response.model.AdTemplate) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.response.model.AdTemplate r1 = (com.kwad.sdk.core.response.model.AdTemplate) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}

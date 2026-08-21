package com.kwad.sdk.core.b.a;

import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdStatusInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.response.model.PageInfo;
import com.kwad.sdk.core.response.model.VideoPlayerStatus;
import com.kwad.sdk.internal.api.SceneImpl;
import com.qihoo360.replugin.RePlugin;
import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONObject;

public final class ai implements com.kwad.sdk.core.d<AdTemplate> {
    private static void a(AdTemplate adTemplate, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        adTemplate.mOriginJString = jSONObject.optString("mOriginJString");
        if (adTemplate.mOriginJString == JSONObject.NULL) {
            adTemplate.mOriginJString = "";
        }
        adTemplate.posId = jSONObject.optLong("posId");
        adTemplate.adStyle = jSONObject.optInt("adStyle");
        adTemplate.type = jSONObject.optInt("type");
        adTemplate.contentType = jSONObject.optInt("contentType");
        adTemplate.adInfoList = new ArrayList();
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("adInfo");
        if (jSONArrayOptJSONArray != null) {
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                AdInfo adInfo = new AdInfo();
                adInfo.parseJson(jSONArrayOptJSONArray.optJSONObject(i));
                adTemplate.adInfoList.add(adInfo);
            }
        }
        adTemplate.impAdExtra = jSONObject.optString("impAdExtra");
        if (adTemplate.impAdExtra == JSONObject.NULL) {
            adTemplate.impAdExtra = "";
        }
        adTemplate.llsid = jSONObject.optLong("llsid");
        adTemplate.mIsFromContent = jSONObject.optBoolean("mIsFromContent");
        adTemplate.extra = jSONObject.optString("extra");
        if (adTemplate.extra == JSONObject.NULL) {
            adTemplate.extra = "";
        }
        adTemplate.mUniqueId = jSONObject.optString("mUniqueId");
        if (adTemplate.mUniqueId == JSONObject.NULL) {
            adTemplate.mUniqueId = "";
        }
        adTemplate.mBidEcpm = jSONObject.optLong("mBidEcpm");
        adTemplate.mAdScene = new SceneImpl();
        adTemplate.mAdScene.parseJson(jSONObject.optJSONObject("mAdScene"));
        adTemplate.realShowType = jSONObject.optInt("realShowType");
        adTemplate.mInitVoiceStatus = jSONObject.optInt("mInitVoiceStatus");
        adTemplate.mMediaPlayerType = jSONObject.optInt("mMediaPlayerType");
        adTemplate.mVideoPlayerStatus = new VideoPlayerStatus();
        adTemplate.mVideoPlayerStatus.parseJson(jSONObject.optJSONObject("mVideoPlayerStatus"));
        adTemplate.mOutClickTimeParam = jSONObject.optLong("mOutClickTimeParam", new Long(RePlugin.PROCESS_UI).longValue());
        adTemplate.mVisibleTimeParam = jSONObject.optLong("mVisibleTimeParam", new Long(RePlugin.PROCESS_UI).longValue());
        adTemplate.mIsLeftSlipStatus = jSONObject.optInt("mIsLeftSlipStatus");
        adTemplate.mPhotoResponseType = jSONObject.optInt("mPhotoResponseType");
        adTemplate.mPageInfo = new PageInfo();
        adTemplate.mPageInfo.parseJson(jSONObject.optJSONObject("mPageInfo"));
        adTemplate.mIsForceJumpLandingPage = jSONObject.optBoolean("mIsForceJumpLandingPage", new Boolean("false").booleanValue());
        adTemplate.mIsAudioEnable = jSONObject.optBoolean("mIsAudioEnable");
        adTemplate.mRewardVerifyCalled = jSONObject.optBoolean("mRewardVerifyCalled");
        adTemplate.isWebViewDownload = jSONObject.optBoolean("isWebViewDownload");
        adTemplate.watched = jSONObject.optBoolean("watched");
        adTemplate.converted = jSONObject.optBoolean("converted");
        adTemplate.fromCache = jSONObject.optBoolean("fromCache", new Boolean("false").booleanValue());
        adTemplate.loadDataTime = jSONObject.optLong("loadDataTime");
        adTemplate.showStartTime = jSONObject.optLong("showStartTime");
        adTemplate.notNetworkRequest = jSONObject.optBoolean("notNetworkRequest");
        adTemplate.downloadDuration = jSONObject.optLong("downloadDuration");
        adTemplate.adLoadTotalTime = jSONObject.optLong("adLoadTotalTime");
        adTemplate.adShowStartTimeStamp = jSONObject.optLong("adShowStartTimeStamp");
        adTemplate.mAdStatusInfo = new AdStatusInfo();
        adTemplate.mAdStatusInfo.parseJson(jSONObject.optJSONObject("mAdStatusInfo"));
    }

    private static JSONObject b(AdTemplate adTemplate, JSONObject jSONObject) {
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        if (adTemplate.mOriginJString != null && !adTemplate.mOriginJString.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "mOriginJString", adTemplate.mOriginJString);
        }
        if (adTemplate.posId != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "posId", adTemplate.posId);
        }
        if (adTemplate.adStyle != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "adStyle", adTemplate.adStyle);
        }
        if (adTemplate.type != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "type", adTemplate.type);
        }
        if (adTemplate.contentType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "contentType", adTemplate.contentType);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "adInfo", adTemplate.adInfoList);
        if (adTemplate.impAdExtra != null && !adTemplate.impAdExtra.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "impAdExtra", adTemplate.impAdExtra);
        }
        if (adTemplate.llsid != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "llsid", adTemplate.llsid);
        }
        if (adTemplate.mIsFromContent) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "mIsFromContent", adTemplate.mIsFromContent);
        }
        if (adTemplate.extra != null && !adTemplate.extra.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "extra", adTemplate.extra);
        }
        if (adTemplate.mUniqueId != null && !adTemplate.mUniqueId.equals("")) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "mUniqueId", adTemplate.mUniqueId);
        }
        if (adTemplate.mBidEcpm != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "mBidEcpm", adTemplate.mBidEcpm);
        }
        com.kwad.sdk.utils.t.a(jSONObject, "mAdScene", adTemplate.mAdScene);
        if (adTemplate.realShowType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "realShowType", adTemplate.realShowType);
        }
        if (adTemplate.mInitVoiceStatus != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "mInitVoiceStatus", adTemplate.mInitVoiceStatus);
        }
        if (adTemplate.mMediaPlayerType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "mMediaPlayerType", adTemplate.mMediaPlayerType);
        }
        com.kwad.sdk.utils.t.a(jSONObject, "mVideoPlayerStatus", adTemplate.mVideoPlayerStatus);
        com.kwad.sdk.utils.t.putValue(jSONObject, "mOutClickTimeParam", adTemplate.mOutClickTimeParam);
        com.kwad.sdk.utils.t.putValue(jSONObject, "mVisibleTimeParam", adTemplate.mVisibleTimeParam);
        if (adTemplate.mIsLeftSlipStatus != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "mIsLeftSlipStatus", adTemplate.mIsLeftSlipStatus);
        }
        if (adTemplate.mPhotoResponseType != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "mPhotoResponseType", adTemplate.mPhotoResponseType);
        }
        com.kwad.sdk.utils.t.a(jSONObject, "mPageInfo", adTemplate.mPageInfo);
        com.kwad.sdk.utils.t.putValue(jSONObject, "mIsForceJumpLandingPage", adTemplate.mIsForceJumpLandingPage);
        if (adTemplate.mIsAudioEnable) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "mIsAudioEnable", adTemplate.mIsAudioEnable);
        }
        if (adTemplate.mRewardVerifyCalled) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "mRewardVerifyCalled", adTemplate.mRewardVerifyCalled);
        }
        if (adTemplate.isWebViewDownload) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "isWebViewDownload", adTemplate.isWebViewDownload);
        }
        if (adTemplate.watched) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "watched", adTemplate.watched);
        }
        if (adTemplate.converted) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "converted", adTemplate.converted);
        }
        com.kwad.sdk.utils.t.putValue(jSONObject, "fromCache", adTemplate.fromCache);
        if (adTemplate.loadDataTime != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "loadDataTime", adTemplate.loadDataTime);
        }
        if (adTemplate.showStartTime != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "showStartTime", adTemplate.showStartTime);
        }
        if (adTemplate.notNetworkRequest) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "notNetworkRequest", adTemplate.notNetworkRequest);
        }
        if (adTemplate.downloadDuration != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "downloadDuration", adTemplate.downloadDuration);
        }
        if (adTemplate.adLoadTotalTime != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "adLoadTotalTime", adTemplate.adLoadTotalTime);
        }
        if (adTemplate.adShowStartTimeStamp != 0) {
            com.kwad.sdk.utils.t.putValue(jSONObject, "adShowStartTimeStamp", adTemplate.adShowStartTimeStamp);
        }
        com.kwad.sdk.utils.t.a(jSONObject, "mAdStatusInfo", adTemplate.mAdStatusInfo);
        return jSONObject;
    }

    @Override
    public final void a(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        a((AdTemplate) bVar, jSONObject);
    }

    @Override
    public final JSONObject b(com.kwad.sdk.core.b bVar, JSONObject jSONObject) {
        return b((AdTemplate) bVar, jSONObject);
    }
}

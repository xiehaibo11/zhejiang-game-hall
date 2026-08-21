package com.kwad.components.ad.reward.model;

import android.content.Intent;
import android.text.TextUtils;
import com.kwad.components.ad.reward.KSRewardVideoActivityProxy;
import com.kwad.sdk.api.KsVideoPlayConfig;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.t;
import java.io.File;
import java.io.Serializable;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class c {
    private AdInfo mAdInfo;
    private AdTemplate mAdTemplate;
    private JSONObject mReportExtData;
    public int mScreenOrientation;
    private KsVideoPlayConfig mVideoPlayConfig;
    private int rewardType = 1;

    public static c a(Intent intent) {
        Serializable serializableExtra = intent.getSerializableExtra("key_video_play_config");
        if (!(serializableExtra instanceof KsVideoPlayConfig)) {
            com.kwad.sdk.core.e.c.e("RewardActivityModel", "data is not instanceof VideoPlayConfigImpl:" + serializableExtra);
            return null;
        }
        KsVideoPlayConfig ksVideoPlayConfig = (KsVideoPlayConfig) serializableExtra;
        int intExtra = intent.getIntExtra(KSRewardVideoActivityProxy.KEY_REWARD_TYPE, 1);
        String stringExtra = intent.getStringExtra("key_template_json");
        try {
            AdTemplate adTemplate = new AdTemplate();
            adTemplate.parseJson(new JSONObject(stringExtra));
            return a(adTemplate, intExtra, ksVideoPlayConfig);
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
            return null;
        }
    }

    private static c a(AdTemplate adTemplate, int i, KsVideoPlayConfig ksVideoPlayConfig) {
        File fileBR;
        c cVar = new c();
        AdInfo adInfoCg = d.cg(adTemplate);
        String strF = com.kwad.sdk.core.response.b.a.F(adInfoCg);
        if (com.kwad.sdk.core.config.d.zz() < 0 && ((fileBR = com.kwad.sdk.core.diskcache.b.a.Au().bR(strF)) == null || !fileBR.exists())) {
            return null;
        }
        boolean zIsShowLandscape = ksVideoPlayConfig.isShowLandscape();
        adTemplate.mInitVoiceStatus = ksVideoPlayConfig.isVideoSoundEnable() ? 2 : 1;
        if (!TextUtils.isEmpty(ksVideoPlayConfig.getShowScene())) {
            JSONObject jSONObject = new JSONObject();
            t.putValue(jSONObject, "ext_showscene", ksVideoPlayConfig.getShowScene());
            cVar.mReportExtData = jSONObject;
        }
        cVar.mVideoPlayConfig = ksVideoPlayConfig;
        cVar.mAdTemplate = adTemplate;
        cVar.mAdInfo = adInfoCg;
        cVar.mScreenOrientation = zIsShowLandscape ? 1 : 0;
        cVar.rewardType = i;
        return cVar;
    }

    public final AdInfo bB() {
        return this.mAdInfo;
    }

    public final boolean bC() {
        return d.ct(this.mAdTemplate);
    }

    public final AdTemplate getAdTemplate() {
        return this.mAdTemplate;
    }

    public final int getScreenOrientation() {
        return this.mScreenOrientation;
    }

    public final boolean hr() {
        return d.f(getAdTemplate(), com.kwad.components.ad.reward.a.b.k(bB()));
    }

    public final boolean hs() {
        return d.s(getAdTemplate());
    }

    public final KsVideoPlayConfig ht() {
        return this.mVideoPlayConfig;
    }

    public final int hu() {
        return this.rewardType;
    }

    public final JSONObject hv() {
        return this.mReportExtData;
    }
}

package com.kwad.sdk.core.request.model;

import com.kwad.sdk.internal.api.SceneImpl;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.t;
import java.io.Serializable;
import java.util.List;
import org.json.JSONObject;

public class StatusInfo extends com.kwad.sdk.core.response.a.a {
    public SplashAdInfo aut;
    public NativeAdRequestInfo auu;
    public int aur = ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).isPersonalRecommend() ? 1 : 0;
    public int aus = ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).isProgrammaticRecommend() ? 1 : 0;
    public List<f> auv = com.kwad.sdk.core.d.a.AY();

    public static final class NativeAdRequestInfo extends com.kwad.sdk.core.response.a.a implements Serializable {
        private static final long serialVersionUID = -7917397487136276024L;
        public NativeAdStyleControl nativeAdStyleControl;

        public static NativeAdRequestInfo create(SceneImpl sceneImpl) {
            NativeAdRequestInfo nativeAdRequestInfo = new NativeAdRequestInfo();
            nativeAdRequestInfo.nativeAdStyleControl = com.kwad.sdk.utils.b.d(sceneImpl);
            return nativeAdRequestInfo;
        }
    }

    public static final class NativeAdStyleControl extends com.kwad.sdk.core.response.a.a implements Serializable {
        private static final long serialVersionUID = -6047032783829467891L;
        public boolean enableShake;

        @Override
        public final void afterToJson(JSONObject jSONObject) {
            super.afterToJson(jSONObject);
            t.putValue(jSONObject, "enableShake", this.enableShake);
        }
    }

    public static final class SplashAdInfo extends com.kwad.sdk.core.response.a.a implements Serializable {
        private static final long serialVersionUID = 7910709346852904072L;
        public int dailyShowCount;
        public SplashStyleControl splashStyleControl;

        public static SplashAdInfo create(SceneImpl sceneImpl) {
            SplashAdInfo splashAdInfo = new SplashAdInfo();
            splashAdInfo.dailyShowCount = com.kwad.sdk.utils.b.HF();
            splashAdInfo.splashStyleControl = com.kwad.sdk.utils.b.c(sceneImpl);
            return splashAdInfo;
        }
    }

    public static final class SplashStyleControl extends com.kwad.sdk.core.response.a.a implements Serializable {
        private static final long serialVersionUID = -6510852657198503314L;
        public boolean disableRotate;
        public boolean disableShake;
        public boolean disableSlide;
    }

    private StatusInfo(SceneImpl sceneImpl) {
        this.auu = NativeAdRequestInfo.create(sceneImpl);
        this.aut = SplashAdInfo.create(sceneImpl);
    }

    public static StatusInfo b(SceneImpl sceneImpl) {
        return new StatusInfo(sceneImpl);
    }
}

package com.kwad.sdk.core.request.model;

public class StatusInfo extends com.kwad.sdk.core.response.a.a {
    public int aur;
    public int aus;
    public com.kwad.sdk.core.request.model.StatusInfo.SplashAdInfo aut;
    public com.kwad.sdk.core.request.model.StatusInfo.NativeAdRequestInfo auu;
    public java.util.List<com.kwad.sdk.core.request.model.f> auv;

    public static final class NativeAdRequestInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = -7917397487136276024L;
        public com.kwad.sdk.core.request.model.StatusInfo.NativeAdStyleControl nativeAdStyleControl;

        public NativeAdRequestInfo() {
                r0 = this;
                r0.<init>()
                return
        }

        public static com.kwad.sdk.core.request.model.StatusInfo.NativeAdRequestInfo create(com.kwad.sdk.internal.api.SceneImpl r1) {
                com.kwad.sdk.core.request.model.StatusInfo$NativeAdRequestInfo r0 = new com.kwad.sdk.core.request.model.StatusInfo$NativeAdRequestInfo
                r0.<init>()
                com.kwad.sdk.core.request.model.StatusInfo$NativeAdStyleControl r1 = com.kwad.sdk.utils.b.d(r1)
                r0.nativeAdStyleControl = r1
                return r0
        }
    }

    public static final class NativeAdStyleControl extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = -6047032783829467891L;
        public boolean enableShake;

        public NativeAdStyleControl() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final void afterToJson(org.json.JSONObject r3) {
                r2 = this;
                super.afterToJson(r3)
                boolean r0 = r2.enableShake
                java.lang.String r1 = "enableShake"
                com.kwad.sdk.utils.t.putValue(r3, r1, r0)
                return
        }
    }

    public static final class SplashAdInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = 7910709346852904072L;
        public int dailyShowCount;
        public com.kwad.sdk.core.request.model.StatusInfo.SplashStyleControl splashStyleControl;

        public SplashAdInfo() {
                r0 = this;
                r0.<init>()
                return
        }

        public static com.kwad.sdk.core.request.model.StatusInfo.SplashAdInfo create(com.kwad.sdk.internal.api.SceneImpl r2) {
                com.kwad.sdk.core.request.model.StatusInfo$SplashAdInfo r0 = new com.kwad.sdk.core.request.model.StatusInfo$SplashAdInfo
                r0.<init>()
                int r1 = com.kwad.sdk.utils.b.HF()
                r0.dailyShowCount = r1
                com.kwad.sdk.core.request.model.StatusInfo$SplashStyleControl r2 = com.kwad.sdk.utils.b.c(r2)
                r0.splashStyleControl = r2
                return r0
        }
    }

    public static final class SplashStyleControl extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = -6510852657198503314L;
        public boolean disableRotate;
        public boolean disableShake;
        public boolean disableSlide;

        public SplashStyleControl() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    private StatusInfo(com.kwad.sdk.internal.api.SceneImpl r2) {
            r1 = this;
            r1.<init>()
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            boolean r0 = r0.isPersonalRecommend()
            r1.aur = r0
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            boolean r0 = r0.isProgrammaticRecommend()
            r1.aus = r0
            java.util.List r0 = com.kwad.sdk.core.d.a.AY()
            r1.auv = r0
            com.kwad.sdk.core.request.model.StatusInfo$NativeAdRequestInfo r0 = com.kwad.sdk.core.request.model.StatusInfo.NativeAdRequestInfo.create(r2)
            r1.auu = r0
            com.kwad.sdk.core.request.model.StatusInfo$SplashAdInfo r2 = com.kwad.sdk.core.request.model.StatusInfo.SplashAdInfo.create(r2)
            r1.aut = r2
            return
    }

    public static com.kwad.sdk.core.request.model.StatusInfo b(com.kwad.sdk.internal.api.SceneImpl r1) {
            com.kwad.sdk.core.request.model.StatusInfo r0 = new com.kwad.sdk.core.request.model.StatusInfo
            r0.<init>(r1)
            return r0
    }
}

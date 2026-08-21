package com.kwad.sdk.api;

@com.kwad.sdk.api.core.KsAdSdkApi
public class KsAdSDK {
    private static android.content.Context mOriginalAppContext;
    private static java.lang.String sAppTag;
    public static final java.util.concurrent.atomic.AtomicBoolean sHasInit = null;
    private static final java.util.concurrent.atomic.AtomicBoolean sHasRest = null;
    private static com.kwad.sdk.api.core.IKsAdSDK sSdk;


    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface KsThemeModeType {
        public static final int NIGHT = 1;
        public static final int NORMAL = 0;
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface SdkType {
        public static final int AD = 1;
        public static final int CAR = 5;
        public static final int CT = 2;
        public static final int CT_PURE = 4;
        public static final int EC = 3;
    }

    static {
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            com.kwad.sdk.api.KsAdSDK.sHasInit = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r0.<init>(r1)
            com.kwad.sdk.api.KsAdSDK.sHasRest = r0
            return
    }

    public KsAdSDK() {
            r0 = this;
            r0.<init>()
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public static void deleteCache() {
            com.kwad.sdk.api.core.IKsAdSDK r0 = com.kwad.sdk.api.KsAdSDK.sSdk
            if (r0 == 0) goto L7
            r0.deleteCache()
        L7:
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public static java.lang.String getAppId() {
            com.kwad.sdk.api.core.IKsAdSDK r0 = com.kwad.sdk.api.KsAdSDK.sSdk
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getAppId()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public static java.lang.String getAppName() {
            com.kwad.sdk.api.core.IKsAdSDK r0 = com.kwad.sdk.api.KsAdSDK.sSdk
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getAppName()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public static android.content.Context getContext() {
            android.content.Context r0 = com.kwad.sdk.api.KsAdSDK.mOriginalAppContext
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public static java.lang.String getDid() {
            com.kwad.sdk.api.core.IKsAdSDK r0 = com.kwad.sdk.api.KsAdSDK.sSdk
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getDid()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public static synchronized com.kwad.sdk.api.KsLoadManager getLoadManager() {
            java.lang.Class<com.kwad.sdk.api.KsAdSDK> r0 = com.kwad.sdk.api.KsAdSDK.class
            monitor-enter(r0)
            com.kwad.sdk.api.core.IKsAdSDK r1 = com.kwad.sdk.api.KsAdSDK.sSdk     // Catch: java.lang.Throwable -> L25
            if (r1 == 0) goto L17
            java.util.concurrent.atomic.AtomicBoolean r1 = com.kwad.sdk.api.KsAdSDK.sHasInit     // Catch: java.lang.Throwable -> L25
            boolean r1 = r1.get()     // Catch: java.lang.Throwable -> L25
            if (r1 == 0) goto L17
            com.kwad.sdk.api.core.IKsAdSDK r1 = com.kwad.sdk.api.KsAdSDK.sSdk     // Catch: java.lang.Throwable -> L25
            com.kwad.sdk.api.KsLoadManager r1 = r1.getAdManager()     // Catch: java.lang.Throwable -> L25
            monitor-exit(r0)
            return r1
        L17:
            java.lang.String r1 = "KsAdSDK"
            java.lang.String r2 = "please init sdk before getLoadManager"
            android.util.Log.e(r1, r2)     // Catch: java.lang.Throwable -> L25
            com.kwad.sdk.api.b r1 = new com.kwad.sdk.api.b     // Catch: java.lang.Throwable -> L25
            r1.<init>()     // Catch: java.lang.Throwable -> L25
            monitor-exit(r0)
            return r1
        L25:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public static int getSDKType() {
            r0 = 1
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public static java.lang.String getSDKVersion() {
            java.lang.String r0 = "3.3.42"
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public static java.lang.String getSDKVersion(int r1) {
            r0 = 1
            if (r1 == r0) goto L6
            java.lang.String r1 = ""
            return r1
        L6:
            java.lang.String r1 = "3.3.42"
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public static synchronized boolean init(android.content.Context r6, com.kwad.sdk.api.SdkConfig r7) {
            java.lang.Class<com.kwad.sdk.api.KsAdSDK> r0 = com.kwad.sdk.api.KsAdSDK.class
            monitor-enter(r0)
            r1 = 0
            if (r6 == 0) goto L83
            if (r7 != 0) goto La
            goto L83
        La:
            com.kwad.sdk.api.KsAdSDK.mOriginalAppContext = r6     // Catch: java.lang.Throwable -> L91
            android.content.Context r2 = com.kwad.sdk.api.loader.c.aw(r6)     // Catch: java.lang.Throwable -> L7d
            if (r2 != 0) goto L1e
            java.lang.RuntimeException r2 = new java.lang.RuntimeException     // Catch: java.lang.Throwable -> L7d
            java.lang.String r3 = "wrappApp Exception"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L7d
            revertDynamic(r2, r6, r7)     // Catch: java.lang.Throwable -> L7d
            monitor-exit(r0)
            return r1
        L1e:
            com.kwad.sdk.api.loader.Loader r6 = com.kwad.sdk.api.loader.Loader.get()     // Catch: java.lang.Throwable -> L78
            java.lang.ClassLoader r3 = r0.getClassLoader()     // Catch: java.lang.Throwable -> L78
            com.kwad.sdk.api.core.IKsAdSDK r6 = r6.init(r2, r3)     // Catch: java.lang.Throwable -> L78
            com.kwad.sdk.api.KsAdSDK.sSdk = r6     // Catch: java.lang.Throwable -> L78
            java.lang.String r3 = "3.3.42"
            r6.setApiVersion(r3)     // Catch: java.lang.Throwable -> L91
            com.kwad.sdk.api.core.IKsAdSDK r6 = com.kwad.sdk.api.KsAdSDK.sSdk     // Catch: java.lang.Throwable -> L91
            r3 = 3034200(0x2e4c58, float:4.25182E-39)
            r6.setApiVersionCode(r3)     // Catch: java.lang.Throwable -> L91
            com.kwad.sdk.api.core.IKsAdSDK r6 = com.kwad.sdk.api.KsAdSDK.sSdk     // Catch: java.lang.Throwable -> L91
            long r3 = com.kwad.sdk.api.proxy.app.AdSdkFileProvider.sLaunchTime     // Catch: java.lang.Throwable -> L91
            r6.setLaunchTime(r3)     // Catch: java.lang.Throwable -> L91
            android.content.Context r6 = com.kwad.sdk.api.loader.Wrapper.wrapContextIfNeed(r2)     // Catch: java.lang.Throwable -> L72
            if (r6 != 0) goto L52
            java.lang.RuntimeException r6 = new java.lang.RuntimeException     // Catch: java.lang.Throwable -> L72
            java.lang.String r3 = "wrapContextIfNeed Exception"
            r6.<init>(r3)     // Catch: java.lang.Throwable -> L72
            revertDynamic(r6, r2, r7)     // Catch: java.lang.Throwable -> L72
            monitor-exit(r0)
            return r1
        L52:
            com.kwad.sdk.api.core.IKsAdSDK r3 = com.kwad.sdk.api.KsAdSDK.sSdk     // Catch: java.lang.Throwable -> L72
            r3.init(r6, r7)     // Catch: java.lang.Throwable -> L72
            com.kwad.sdk.api.core.IKsAdSDK r6 = com.kwad.sdk.api.KsAdSDK.sSdk     // Catch: java.lang.Throwable -> L72
            java.lang.String r3 = com.kwad.sdk.api.KsAdSDK.sAppTag     // Catch: java.lang.Throwable -> L72
            r6.setAppTag(r3)     // Catch: java.lang.Throwable -> L72
            com.kwad.sdk.api.core.IKsAdSDK r6 = com.kwad.sdk.api.KsAdSDK.sSdk     // Catch: java.lang.Throwable -> L91
            com.kwad.sdk.api.loader.u.a(r2, r6)     // Catch: java.lang.Throwable -> L91
            java.util.concurrent.atomic.AtomicBoolean r6 = com.kwad.sdk.api.KsAdSDK.sHasInit     // Catch: java.lang.Throwable -> L91
            r1 = 1
            r6.set(r1)     // Catch: java.lang.Throwable -> L91
            com.kwad.sdk.api.KsAdSDK$1 r6 = new com.kwad.sdk.api.KsAdSDK$1     // Catch: java.lang.Throwable -> L91
            r6.<init>(r2, r7)     // Catch: java.lang.Throwable -> L91
            com.kwad.sdk.api.a.a.submit(r6)     // Catch: java.lang.Throwable -> L91
            goto L91
        L72:
            r6 = move-exception
            revertDynamic(r6, r2, r7)     // Catch: java.lang.Throwable -> L91
            monitor-exit(r0)
            return r1
        L78:
            r6 = move-exception
            r5 = r2
            r2 = r6
            r6 = r5
            goto L7e
        L7d:
            r2 = move-exception
        L7e:
            revertDynamic(r2, r6, r7)     // Catch: java.lang.Throwable -> L91
            monitor-exit(r0)
            return r1
        L83:
            if (r7 == 0) goto L9c
            com.kwad.sdk.api.KsInitCallback r6 = r7.ksInitCallback     // Catch: java.lang.Throwable -> L91
            if (r6 == 0) goto L9c
            com.kwad.sdk.api.KsInitCallback r6 = r7.ksInitCallback     // Catch: java.lang.Throwable -> L91
            java.lang.String r7 = "context or config is null"
            r6.onFail(r1, r7)     // Catch: java.lang.Throwable -> L91
            goto L9c
        L91:
            java.util.concurrent.atomic.AtomicBoolean r6 = com.kwad.sdk.api.KsAdSDK.sHasInit     // Catch: java.lang.Throwable -> L99
            boolean r6 = r6.get()     // Catch: java.lang.Throwable -> L99
            monitor-exit(r0)
            return r6
        L99:
            r6 = move-exception
            monitor-exit(r0)
            throw r6
        L9c:
            monitor-exit(r0)
            return r1
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public static boolean isDebugLogEnable() {
            com.kwad.sdk.api.core.IKsAdSDK r0 = com.kwad.sdk.api.KsAdSDK.sSdk
            if (r0 == 0) goto L9
            boolean r0 = r0.isDebugLogEnable()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public static void pauseCurrentPlayer() {
            com.kwad.sdk.api.core.IKsAdSDK r0 = com.kwad.sdk.api.KsAdSDK.sSdk
            if (r0 == 0) goto L7
            r0.pauseCurrentPlayer()
        L7:
            return
    }

    public static void re(java.lang.Object r1) {
            com.kwad.sdk.api.core.IKsAdSDK r0 = com.kwad.sdk.api.KsAdSDK.sSdk
            if (r0 == 0) goto L7
            r0.re(r1)
        L7:
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public static void resumeCurrentPlayer() {
            com.kwad.sdk.api.core.IKsAdSDK r0 = com.kwad.sdk.api.KsAdSDK.sSdk
            if (r0 == 0) goto L7
            r0.resumeCurrentPlayer()
        L7:
            return
    }

    private static void revertDynamic(java.lang.Throwable r2, android.content.Context r3, com.kwad.sdk.api.SdkConfig r4) {
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.sdk.api.KsAdSDK.sHasRest
            boolean r0 = r0.get()
            if (r0 == 0) goto L9
            return
        L9:
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.sdk.api.KsAdSDK.sHasRest
            r1 = 1
            r0.set(r1)
            com.kwad.sdk.api.loader.u.aE(r3)
            com.kwad.sdk.api.loader.Loader r0 = com.kwad.sdk.api.loader.Loader.get()
            r0.rest()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "init appId after reset:"
            r0.<init>(r1)
            java.lang.String r1 = r4.appId
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KSAdSDK"
            android.util.Log.d(r1, r0)
            init(r3, r4)
            com.kwad.sdk.api.core.IKsAdSDK r3 = com.kwad.sdk.api.KsAdSDK.sSdk
            if (r3 == 0) goto L42
            java.util.concurrent.atomic.AtomicBoolean r3 = com.kwad.sdk.api.KsAdSDK.sHasInit
            boolean r3 = r3.get()
            if (r3 == 0) goto L42
            com.kwad.sdk.api.core.IKsAdSDK r3 = com.kwad.sdk.api.KsAdSDK.sSdk
            r3.re(r2)
        L42:
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public static void setAdxEnable(boolean r1) {
            com.kwad.sdk.api.core.IKsAdSDK r0 = com.kwad.sdk.api.KsAdSDK.sSdk
            if (r0 == 0) goto L7
            r0.setAdxEnable(r1)
        L7:
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public static void setAppTag(java.lang.String r1) {
            com.kwad.sdk.api.core.IKsAdSDK r0 = com.kwad.sdk.api.KsAdSDK.sSdk
            if (r0 == 0) goto L8
            r0.setAppTag(r1)
            return
        L8:
            com.kwad.sdk.api.KsAdSDK.sAppTag = r1
            return
    }

    public static void setLoadingLottieAnimation(boolean r1, int r2) {
            com.kwad.sdk.api.core.IKsAdSDK r0 = com.kwad.sdk.api.KsAdSDK.sSdk
            if (r0 == 0) goto L7
            r0.setLoadingLottieAnimation(r1, r2)
        L7:
            return
    }

    public static void setLoadingLottieAnimationColor(boolean r1, int r2) {
            com.kwad.sdk.api.core.IKsAdSDK r0 = com.kwad.sdk.api.KsAdSDK.sSdk
            if (r0 == 0) goto L7
            r0.setLoadingLottieAnimationColor(r1, r2)
        L7:
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public static void setPersonalRecommend(boolean r1) {
            com.kwad.sdk.api.core.IKsAdSDK r0 = com.kwad.sdk.api.KsAdSDK.sSdk
            if (r0 == 0) goto L7
            r0.setPersonalRecommend(r1)
        L7:
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public static void setProgrammaticRecommend(boolean r1) {
            com.kwad.sdk.api.core.IKsAdSDK r0 = com.kwad.sdk.api.KsAdSDK.sSdk
            if (r0 == 0) goto L7
            r0.setProgrammaticRecommend(r1)
        L7:
            return
    }

    public static void setThemeMode(int r1) {
            com.kwad.sdk.api.core.IKsAdSDK r0 = com.kwad.sdk.api.KsAdSDK.sSdk
            if (r0 == 0) goto L7
            r0.setThemeMode(r1)
        L7:
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public static void unInit() {
            com.kwad.sdk.api.core.IKsAdSDK r0 = com.kwad.sdk.api.KsAdSDK.sSdk
            if (r0 == 0) goto L7
            r0.unInit()
        L7:
            r0 = 0
            com.kwad.sdk.api.KsAdSDK.sSdk = r0
            return
    }
}

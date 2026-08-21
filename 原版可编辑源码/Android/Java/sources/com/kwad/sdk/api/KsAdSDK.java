package com.kwad.sdk.api;

import android.content.Context;
import android.util.Log;
import com.kwad.components.offline.api.BuildConfig;
import com.kwad.sdk.api.core.IKsAdSDK;
import com.kwad.sdk.api.core.KsAdSdkApi;
import com.kwad.sdk.api.loader.Loader;
import com.kwad.sdk.api.loader.Wrapper;
import com.kwad.sdk.api.loader.t;
import com.kwad.sdk.api.loader.u;
import com.kwad.sdk.api.proxy.app.AdSdkFileProvider;
import com.tkay.core.common.c.d;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.util.concurrent.atomic.AtomicBoolean;

@KsAdSdkApi
public class KsAdSDK {
    private static Context mOriginalAppContext;
    private static String sAppTag;
    public static final AtomicBoolean sHasInit = new AtomicBoolean(false);
    private static final AtomicBoolean sHasRest = new AtomicBoolean(false);
    private static IKsAdSDK sSdk;

    @Retention(RetentionPolicy.SOURCE)
    public @interface KsThemeModeType {
        public static final int NIGHT = 1;
        public static final int NORMAL = 0;
    }

    @Retention(RetentionPolicy.SOURCE)
    public @interface SdkType {
        public static final int AD = 1;
        public static final int CAR = 5;
        public static final int CT = 2;
        public static final int CT_PURE = 4;
        public static final int EC = 3;
    }

    @KsAdSdkApi
    public static void deleteCache() {
        IKsAdSDK iKsAdSDK = sSdk;
        if (iKsAdSDK != null) {
            iKsAdSDK.deleteCache();
        }
    }

    @KsAdSdkApi
    public static String getAppId() {
        IKsAdSDK iKsAdSDK = sSdk;
        if (iKsAdSDK != null) {
            return iKsAdSDK.getAppId();
        }
        return null;
    }

    @KsAdSdkApi
    public static String getAppName() {
        IKsAdSDK iKsAdSDK = sSdk;
        if (iKsAdSDK != null) {
            return iKsAdSDK.getAppName();
        }
        return null;
    }

    @KsAdSdkApi
    public static Context getContext() {
        return mOriginalAppContext;
    }

    @KsAdSdkApi
    public static String getDid() {
        IKsAdSDK iKsAdSDK = sSdk;
        if (iKsAdSDK != null) {
            return iKsAdSDK.getDid();
        }
        return null;
    }

    @KsAdSdkApi
    public static synchronized KsLoadManager getLoadManager() {
        if (sSdk != null && sHasInit.get()) {
            return sSdk.getAdManager();
        }
        Log.e("KsAdSDK", "please init sdk before getLoadManager");
        return new b();
    }

    @KsAdSdkApi
    public static int getSDKType() {
        return 1;
    }

    @KsAdSdkApi
    public static String getSDKVersion() {
        return BuildConfig.VERSION_NAME;
    }

    @KsAdSdkApi
    public static String getSDKVersion(int i) {
        return i != 1 ? "" : BuildConfig.VERSION_NAME;
    }

    @KsAdSdkApi
    public static synchronized boolean init(Context context, final SdkConfig sdkConfig) {
        try {
            if (context == null || sdkConfig == null) {
                if (sdkConfig != null && sdkConfig.ksInitCallback != null) {
                    sdkConfig.ksInitCallback.onFail(0, "context or config is null");
                }
                return false;
            }
            mOriginalAppContext = context;
            try {
                final Context contextAw = com.kwad.sdk.api.loader.c.aw(context);
                if (contextAw == null) {
                    revertDynamic(new RuntimeException("wrappApp Exception"), context, sdkConfig);
                    return false;
                }
                try {
                    IKsAdSDK iKsAdSDKInit = Loader.get().init(contextAw, KsAdSDK.class.getClassLoader());
                    sSdk = iKsAdSDKInit;
                    iKsAdSDKInit.setApiVersion(BuildConfig.VERSION_NAME);
                    sSdk.setApiVersionCode(BuildConfig.VERSION_CODE);
                    sSdk.setLaunchTime(AdSdkFileProvider.sLaunchTime);
                    try {
                        Context contextWrapContextIfNeed = Wrapper.wrapContextIfNeed(contextAw);
                        if (contextWrapContextIfNeed == null) {
                            revertDynamic(new RuntimeException("wrapContextIfNeed Exception"), contextAw, sdkConfig);
                            return false;
                        }
                        sSdk.init(contextWrapContextIfNeed, sdkConfig);
                        sSdk.setAppTag(sAppTag);
                        u.a(contextAw, sSdk);
                        sHasInit.set(true);
                        com.kwad.sdk.api.a.a.submit(new Runnable() {
                            @Override
                            public final void run() {
                                t.c(contextAw, d.a.a, sdkConfig.toJson());
                            }
                        });
                    } catch (Throwable th) {
                        revertDynamic(th, contextAw, sdkConfig);
                        return false;
                    }
                } catch (Throwable th2) {
                    th = th2;
                    context = contextAw;
                    revertDynamic(th, context, sdkConfig);
                    return false;
                }
            } catch (Throwable th3) {
                th = th3;
            }
        } catch (Throwable unused) {
        }
        return sHasInit.get();
    }

    @KsAdSdkApi
    public static boolean isDebugLogEnable() {
        IKsAdSDK iKsAdSDK = sSdk;
        if (iKsAdSDK != null) {
            return iKsAdSDK.isDebugLogEnable();
        }
        return false;
    }

    @KsAdSdkApi
    public static void pauseCurrentPlayer() {
        IKsAdSDK iKsAdSDK = sSdk;
        if (iKsAdSDK != null) {
            iKsAdSDK.pauseCurrentPlayer();
        }
    }

    public static void re(Object obj) {
        IKsAdSDK iKsAdSDK = sSdk;
        if (iKsAdSDK != null) {
            iKsAdSDK.re(obj);
        }
    }

    @KsAdSdkApi
    public static void resumeCurrentPlayer() {
        IKsAdSDK iKsAdSDK = sSdk;
        if (iKsAdSDK != null) {
            iKsAdSDK.resumeCurrentPlayer();
        }
    }

    private static void revertDynamic(Throwable th, Context context, SdkConfig sdkConfig) {
        if (sHasRest.get()) {
            return;
        }
        sHasRest.set(true);
        u.aE(context);
        Loader.get().rest();
        Log.d("KSAdSDK", "init appId after reset:" + sdkConfig.appId);
        init(context, sdkConfig);
        if (sSdk == null || !sHasInit.get()) {
            return;
        }
        sSdk.re(th);
    }

    @KsAdSdkApi
    public static void setAdxEnable(boolean z) {
        IKsAdSDK iKsAdSDK = sSdk;
        if (iKsAdSDK != null) {
            iKsAdSDK.setAdxEnable(z);
        }
    }

    @KsAdSdkApi
    public static void setAppTag(String str) {
        IKsAdSDK iKsAdSDK = sSdk;
        if (iKsAdSDK != null) {
            iKsAdSDK.setAppTag(str);
        } else {
            sAppTag = str;
        }
    }

    public static void setLoadingLottieAnimation(boolean z, int i) {
        IKsAdSDK iKsAdSDK = sSdk;
        if (iKsAdSDK != null) {
            iKsAdSDK.setLoadingLottieAnimation(z, i);
        }
    }

    public static void setLoadingLottieAnimationColor(boolean z, int i) {
        IKsAdSDK iKsAdSDK = sSdk;
        if (iKsAdSDK != null) {
            iKsAdSDK.setLoadingLottieAnimationColor(z, i);
        }
    }

    @KsAdSdkApi
    public static void setPersonalRecommend(boolean z) {
        IKsAdSDK iKsAdSDK = sSdk;
        if (iKsAdSDK != null) {
            iKsAdSDK.setPersonalRecommend(z);
        }
    }

    @KsAdSdkApi
    public static void setProgrammaticRecommend(boolean z) {
        IKsAdSDK iKsAdSDK = sSdk;
        if (iKsAdSDK != null) {
            iKsAdSDK.setProgrammaticRecommend(z);
        }
    }

    public static void setThemeMode(int i) {
        IKsAdSDK iKsAdSDK = sSdk;
        if (iKsAdSDK != null) {
            iKsAdSDK.setThemeMode(i);
        }
    }

    @KsAdSdkApi
    public static void unInit() {
        IKsAdSDK iKsAdSDK = sSdk;
        if (iKsAdSDK != null) {
            iKsAdSDK.unInit();
        }
        sSdk = null;
    }
}

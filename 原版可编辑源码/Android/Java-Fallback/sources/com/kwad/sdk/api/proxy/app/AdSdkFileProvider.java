package com.kwad.sdk.api.proxy.app;

public class AdSdkFileProvider extends android.support.v4.content.FileProvider {
    public static long sLaunchTime;

    public AdSdkFileProvider() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean onCreate() {
            r2 = this;
            long r0 = java.lang.System.currentTimeMillis()
            com.kwad.sdk.api.proxy.app.AdSdkFileProvider.sLaunchTime = r0
            com.kwad.sdk.api.core.KSLifecycleObserver r0 = com.kwad.sdk.api.core.KSLifecycleObserver.getInstance()     // Catch: java.lang.Throwable -> L15
            android.content.Context r1 = r2.getContext()     // Catch: java.lang.Throwable -> L15
            android.content.Context r1 = r1.getApplicationContext()     // Catch: java.lang.Throwable -> L15
            r0.init(r1)     // Catch: java.lang.Throwable -> L15
        L15:
            boolean r0 = super.onCreate()
            return r0
    }
}

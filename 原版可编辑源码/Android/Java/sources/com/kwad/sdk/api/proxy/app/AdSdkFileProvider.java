package com.kwad.sdk.api.proxy.app;

import android.support.v4.content.FileProvider;
import com.kwad.sdk.api.core.KSLifecycleObserver;

public class AdSdkFileProvider extends FileProvider {
    public static long sLaunchTime;

    @Override
    public boolean onCreate() {
        sLaunchTime = System.currentTimeMillis();
        try {
            KSLifecycleObserver.getInstance().init(getContext().getApplicationContext());
        } catch (Throwable unused) {
        }
        return super.onCreate();
    }
}

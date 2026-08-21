package com.kwad.sdk.api.proxy.app;

import android.support.v4.content.FileProvider;
import com.kwad.sdk.api.core.KSLifecycleObserver;

/* JADX INFO: loaded from: classes2.dex */
public class AdSdkFileProvider extends FileProvider {
    public static long sLaunchTime;

    @Override // android.support.v4.content.FileProvider, android.content.ContentProvider
    public boolean onCreate() {
        sLaunchTime = System.currentTimeMillis();
        try {
            KSLifecycleObserver.getInstance().init(getContext().getApplicationContext());
        } catch (Throwable unused) {
        }
        return super.onCreate();
    }
}

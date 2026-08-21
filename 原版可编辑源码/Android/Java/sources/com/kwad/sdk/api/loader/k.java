package com.kwad.sdk.api.loader;

import android.content.Context;
import android.content.res.Resources;
import android.text.TextUtils;
import com.kwad.sdk.api.core.IKsAdSDK;
import java.io.File;

final class k {
    private final String aiF;
    private final String aiG;
    private final String aiH;
    private Resources aiI;
    private ClassLoader aiJ;
    private IKsAdSDK aiK;

    private k(String str, String str2, String str3) {
        this.aiF = str;
        this.aiG = str2;
        this.aiH = str3;
    }

    static synchronized k a(Context context, ClassLoader classLoader, String str) {
        try {
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
        return b(context, classLoader, h.q(context, str), h.r(context, str), h.s(context, str));
    }

    static k b(Context context, ClassLoader classLoader, String str, String str2, String str3) {
        if (TextUtils.isEmpty(str)) {
            throw new RuntimeException("mApk is null");
        }
        File file = new File(str);
        if (!file.exists() || !file.isFile()) {
            throw new RuntimeException("mApk not a file");
        }
        k kVar = new k(str, str2, str3);
        kVar.c(context, classLoader);
        return kVar;
    }

    private void c(Context context, ClassLoader classLoader) {
        yt();
        Resources resourcesA = q.a(context, context.getResources(), this.aiF);
        ClassLoader classLoaderA = e.a(context, classLoader, this.aiF, this.aiG, this.aiH);
        IKsAdSDK iKsAdSDKA = Loader.a(classLoaderA);
        this.aiI = resourcesA;
        this.aiJ = classLoaderA;
        this.aiK = iKsAdSDKA;
        int sDKType = iKsAdSDKA.getSDKType();
        if (sDKType == 1) {
            return;
        }
        throw new RuntimeException("sdkType error apiType: 1 , sdkType:" + sDKType);
    }

    private void yt() {
        if (TextUtils.isEmpty(this.aiF)) {
            throw new RuntimeException("mApk is null");
        }
        File file = new File(this.aiF);
        if (!file.isFile() || !file.exists()) {
            throw new RuntimeException("mApk not a file");
        }
    }

    final ClassLoader getClassLoader() {
        return this.aiJ;
    }

    public final String toString() {
        return "ExternalPackage{mApk='" + this.aiF + "', mDexDir='" + this.aiG + "', mNativeLibDir='" + this.aiH + "', mResource=" + this.aiI + ", mClassLoader=" + this.aiJ + ", mKsSdk=" + this.aiK + '}';
    }

    final Resources yr() {
        return this.aiI;
    }

    final IKsAdSDK ys() {
        return this.aiK;
    }
}

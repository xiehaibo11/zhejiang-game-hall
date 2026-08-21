package com.kwad.components.core.offline.init.a;

import android.content.Context;
import android.location.Location;
import com.kwad.components.offline.api.BuildConfig;
import com.kwad.components.offline.api.core.api.IEnvironment;
import com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener;
import com.kwad.sdk.KsAdSDKImpl;
import com.kwad.sdk.components.DevelopMangerComponents;
import com.kwad.sdk.core.network.q;
import com.kwad.sdk.utils.AbiUtil;
import com.kwad.sdk.utils.SystemUtil;
import com.kwad.sdk.utils.ag;
import com.kwad.sdk.utils.au;
import com.kwad.sdk.utils.be;

/* JADX INFO: loaded from: classes2.dex */
final class d implements IEnvironment {
    d() {
    }

    @Override // com.kwad.components.offline.api.core.api.IEnvironment
    public final void addOnAudioConflictListener(Context context, OfflineOnAudioConflictListener offlineOnAudioConflictListener) {
        if (context == null || offlineOnAudioConflictListener == null) {
            return;
        }
        com.kwad.components.core.t.a.al(context).a(offlineOnAudioConflictListener);
    }

    @Override // com.kwad.components.offline.api.core.api.IEnvironment
    public final String getAppId() {
        return KsAdSDKImpl.get().getAppId();
    }

    @Override // com.kwad.components.offline.api.core.api.IEnvironment
    public final String getAppVersion() {
        return BuildConfig.VERSION_NAME;
    }

    @Override // com.kwad.components.offline.api.core.api.IEnvironment
    public final String getBiz() {
        return com.kwad.sdk.i.agZ;
    }

    @Override // com.kwad.components.offline.api.core.api.IEnvironment
    public final Context getContext() {
        return KsAdSDKImpl.get().getContext();
    }

    @Override // com.kwad.components.offline.api.core.api.IEnvironment
    public final String getDeviceId() {
        return be.getDeviceId();
    }

    @Override // com.kwad.components.offline.api.core.api.IEnvironment
    public final String getKpf() {
        return "ANDROID_PHONE";
    }

    @Override // com.kwad.components.offline.api.core.api.IEnvironment
    public final String getKpn() {
        return "kseulivesdk";
    }

    @Override // com.kwad.components.offline.api.core.api.IEnvironment
    public final double getLatitude(Context context) {
        Location locationBU = au.bU(context);
        if (locationBU != null) {
            return locationBU.getLatitude();
        }
        return 0.0d;
    }

    @Override // com.kwad.components.offline.api.core.api.IEnvironment
    public final double getLongitude(Context context) {
        Location locationBU = au.bU(context);
        if (locationBU != null) {
            return locationBU.getLongitude();
        }
        return 0.0d;
    }

    @Override // com.kwad.components.offline.api.core.api.IEnvironment
    public final String getOperator(Context context) {
        return String.valueOf(ag.cj(context));
    }

    @Override // com.kwad.components.offline.api.core.api.IEnvironment
    public final String getOsVersion() {
        return be.getOsVersion();
    }

    @Override // com.kwad.components.offline.api.core.api.IEnvironment
    public final String getProcessName(Context context) {
        return SystemUtil.getProcessName(context);
    }

    @Override // com.kwad.components.offline.api.core.api.IEnvironment
    public final String getSdkVersion() {
        return BuildConfig.VERSION_NAME;
    }

    @Override // com.kwad.components.offline.api.core.api.IEnvironment
    public final int getStatusBarHeight(Context context) {
        return com.kwad.sdk.d.a.a.getStatusBarHeight(context);
    }

    @Override // com.kwad.components.offline.api.core.api.IEnvironment
    public final String getUserAgent() {
        return q.getUserAgent();
    }

    @Override // com.kwad.components.offline.api.core.api.IEnvironment
    public final boolean isArm64(Context context) {
        return AbiUtil.isArm64(context);
    }

    @Override // com.kwad.components.offline.api.core.api.IEnvironment
    public final boolean isDebug() {
        return false;
    }

    @Override // com.kwad.components.offline.api.core.api.IEnvironment
    public final boolean isDevelopEnable() {
        return com.kwad.components.core.a.ml.booleanValue();
    }

    @Override // com.kwad.components.offline.api.core.api.IEnvironment
    public final boolean isInMainProcess(Context context) {
        return SystemUtil.isInMainProcess(context);
    }

    @Override // com.kwad.components.offline.api.core.api.IEnvironment
    public final String localIpAddress() {
        if (!com.kwad.components.core.a.ml.booleanValue()) {
            return "10.244.113.101";
        }
        com.kwad.sdk.components.c.f(DevelopMangerComponents.class);
        return "10.244.113.101";
    }

    @Override // com.kwad.components.offline.api.core.api.IEnvironment
    public final void removeOnAudioConflictListener(Context context, OfflineOnAudioConflictListener offlineOnAudioConflictListener) {
        if (context == null || offlineOnAudioConflictListener == null) {
            return;
        }
        com.kwad.components.core.t.a.al(context).b(offlineOnAudioConflictListener);
    }

    @Override // com.kwad.components.offline.api.core.api.IEnvironment
    public final boolean requestAudioFocus(Context context, boolean z) {
        return com.kwad.components.core.t.a.al(context).aJ(z);
    }
}

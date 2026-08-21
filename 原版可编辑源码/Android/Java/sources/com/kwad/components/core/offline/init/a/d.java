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

final class d implements IEnvironment {
    d() {
    }

    @Override
    public final void addOnAudioConflictListener(Context context, OfflineOnAudioConflictListener offlineOnAudioConflictListener) {
        if (context == null || offlineOnAudioConflictListener == null) {
            return;
        }
        com.kwad.components.core.t.a.al(context).a(offlineOnAudioConflictListener);
    }

    @Override
    public final String getAppId() {
        return KsAdSDKImpl.get().getAppId();
    }

    @Override
    public final String getAppVersion() {
        return BuildConfig.VERSION_NAME;
    }

    @Override
    public final String getBiz() {
        return com.kwad.sdk.i.agZ;
    }

    @Override
    public final Context getContext() {
        return KsAdSDKImpl.get().getContext();
    }

    @Override
    public final String getDeviceId() {
        return be.getDeviceId();
    }

    @Override
    public final String getKpf() {
        return "ANDROID_PHONE";
    }

    @Override
    public final String getKpn() {
        return "kseulivesdk";
    }

    @Override
    public final double getLatitude(Context context) {
        Location locationBU = au.bU(context);
        if (locationBU != null) {
            return locationBU.getLatitude();
        }
        return 0.0d;
    }

    @Override
    public final double getLongitude(Context context) {
        Location locationBU = au.bU(context);
        if (locationBU != null) {
            return locationBU.getLongitude();
        }
        return 0.0d;
    }

    @Override
    public final String getOperator(Context context) {
        return String.valueOf(ag.cj(context));
    }

    @Override
    public final String getOsVersion() {
        return be.getOsVersion();
    }

    @Override
    public final String getProcessName(Context context) {
        return SystemUtil.getProcessName(context);
    }

    @Override
    public final String getSdkVersion() {
        return BuildConfig.VERSION_NAME;
    }

    @Override
    public final int getStatusBarHeight(Context context) {
        return com.kwad.sdk.d.a.a.getStatusBarHeight(context);
    }

    @Override
    public final String getUserAgent() {
        return q.getUserAgent();
    }

    @Override
    public final boolean isArm64(Context context) {
        return AbiUtil.isArm64(context);
    }

    @Override
    public final boolean isDebug() {
        return false;
    }

    @Override
    public final boolean isDevelopEnable() {
        return com.kwad.components.core.a.ml.booleanValue();
    }

    @Override
    public final boolean isInMainProcess(Context context) {
        return SystemUtil.isInMainProcess(context);
    }

    @Override
    public final String localIpAddress() {
        if (!com.kwad.components.core.a.ml.booleanValue()) {
            return "10.244.113.101";
        }
        com.kwad.sdk.components.c.f(DevelopMangerComponents.class);
        return "10.244.113.101";
    }

    @Override
    public final void removeOnAudioConflictListener(Context context, OfflineOnAudioConflictListener offlineOnAudioConflictListener) {
        if (context == null || offlineOnAudioConflictListener == null) {
            return;
        }
        com.kwad.components.core.t.a.al(context).b(offlineOnAudioConflictListener);
    }

    @Override
    public final boolean requestAudioFocus(Context context, boolean z) {
        return com.kwad.components.core.t.a.al(context).aJ(z);
    }
}

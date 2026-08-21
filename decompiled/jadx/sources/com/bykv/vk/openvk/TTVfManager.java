package com.bykv.vk.openvk;

import android.app.Activity;
import android.content.Context;
import android.os.Bundle;
import com.bykv.vk.openvk.downloadnew.core.ExitInstallListener;

/* JADX INFO: loaded from: classes.dex */
public interface TTVfManager {
    TTVfNative createVfNative(Context context);

    String getBiddingToken(VfSlot vfSlot);

    String getBiddingToken(VfSlot vfSlot, boolean z, int i);

    <T> T getExtra(Class<T> cls, Bundle bundle);

    String getPluginVersion();

    String getSDKVersion();

    int getThemeStatus();

    void register(Object obj);

    void requestPermissionIfNecessary(Context context);

    void setThemeStatus(int i);

    boolean tryShowInstallDialogWhenExit(Activity activity, ExitInstallListener exitInstallListener);

    void unregister(Object obj);
}

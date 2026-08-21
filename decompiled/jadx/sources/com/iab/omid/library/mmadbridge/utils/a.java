package com.iab.omid.library.mmadbridge.utils;

import android.app.UiModeManager;
import android.content.Context;
import com.iab.omid.library.mmadbridge.adsession.DeviceCategory;

/* JADX INFO: loaded from: classes2.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static UiModeManager f2390a;

    public static DeviceCategory a() {
        int currentModeType = f2390a.getCurrentModeType();
        return currentModeType != 1 ? currentModeType != 4 ? DeviceCategory.OTHER : DeviceCategory.CTV : DeviceCategory.MOBILE;
    }

    public static void a(Context context) {
        if (context != null) {
            f2390a = (UiModeManager) context.getSystemService("uimode");
        }
    }
}

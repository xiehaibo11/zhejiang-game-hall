package com.bianfeng.ymnsdk.sysfunc.utils;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.telephony.TelephonyManager;

/* JADX INFO: loaded from: classes.dex */
public class SimulatorUtil {
    private SimulatorUtil() {
    }

    public static boolean isSimulator(Context context) {
        Intent intent = new Intent();
        intent.setData(Uri.parse("tel:123456"));
        intent.setAction("android.intent.action.DIAL");
        boolean z = intent.resolveActivity(context.getPackageManager()) != null;
        if (Build.FINGERPRINT.startsWith("generic") || Build.FINGERPRINT.toLowerCase().contains("vbox") || Build.FINGERPRINT.toLowerCase().contains("test-keys") || Build.MODEL.contains("google_sdk") || Build.MODEL.contains("Emulator") || Build.MODEL.contains("MuMu") || Build.MODEL.contains("virtual") || Build.SERIAL.equalsIgnoreCase("android") || Build.MANUFACTURER.contains("Genymotion")) {
            return true;
        }
        return (Build.BRAND.startsWith("generic") && Build.DEVICE.startsWith("generic")) || "google_sdk".equals(Build.PRODUCT) || ((TelephonyManager) context.getSystemService("phone")).getNetworkOperatorName().toLowerCase().equals("android") || !z;
    }
}

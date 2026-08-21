package com.bianfeng.ymnsdk.sysfunc.utils;

public class SimulatorUtil {
    private SimulatorUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean isSimulator(android.content.Context r8) {
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r1 = "tel:123456"
            android.net.Uri r1 = android.net.Uri.parse(r1)
            r0.setData(r1)
            java.lang.String r1 = "android.intent.action.DIAL"
            r0.setAction(r1)
            android.content.pm.PackageManager r1 = r8.getPackageManager()
            android.content.ComponentName r0 = r0.resolveActivity(r1)
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L21
            r0 = 1
            goto L22
        L21:
            r0 = 0
        L22:
            java.lang.String r3 = android.os.Build.FINGERPRINT
            java.lang.String r4 = "generic"
            boolean r3 = r3.startsWith(r4)
            if (r3 != 0) goto Lb6
            java.lang.String r3 = android.os.Build.FINGERPRINT
            java.lang.String r3 = r3.toLowerCase()
            java.lang.String r5 = "vbox"
            boolean r3 = r3.contains(r5)
            if (r3 != 0) goto Lb6
            java.lang.String r3 = android.os.Build.FINGERPRINT
            java.lang.String r3 = r3.toLowerCase()
            java.lang.String r5 = "test-keys"
            boolean r3 = r3.contains(r5)
            if (r3 != 0) goto Lb6
            java.lang.String r3 = android.os.Build.MODEL
            java.lang.String r5 = "google_sdk"
            boolean r3 = r3.contains(r5)
            if (r3 != 0) goto Lb6
            java.lang.String r3 = android.os.Build.MODEL
            java.lang.String r6 = "Emulator"
            boolean r3 = r3.contains(r6)
            if (r3 != 0) goto Lb6
            java.lang.String r3 = android.os.Build.MODEL
            java.lang.String r6 = "MuMu"
            boolean r3 = r3.contains(r6)
            if (r3 != 0) goto Lb6
            java.lang.String r3 = android.os.Build.MODEL
            java.lang.String r6 = "virtual"
            boolean r3 = r3.contains(r6)
            if (r3 != 0) goto Lb6
            java.lang.String r3 = android.os.Build.SERIAL
            java.lang.String r6 = "android"
            boolean r3 = r3.equalsIgnoreCase(r6)
            if (r3 != 0) goto Lb6
            java.lang.String r3 = android.os.Build.MANUFACTURER
            java.lang.String r7 = "Genymotion"
            boolean r3 = r3.contains(r7)
            if (r3 != 0) goto Lb6
            java.lang.String r3 = android.os.Build.BRAND
            boolean r3 = r3.startsWith(r4)
            if (r3 == 0) goto L94
            java.lang.String r3 = android.os.Build.DEVICE
            boolean r3 = r3.startsWith(r4)
            if (r3 != 0) goto Lb6
        L94:
            java.lang.String r3 = android.os.Build.PRODUCT
            boolean r3 = r5.equals(r3)
            if (r3 != 0) goto Lb6
            java.lang.String r3 = "phone"
            java.lang.Object r8 = r8.getSystemService(r3)
            android.telephony.TelephonyManager r8 = (android.telephony.TelephonyManager) r8
            java.lang.String r8 = r8.getNetworkOperatorName()
            java.lang.String r8 = r8.toLowerCase()
            boolean r8 = r8.equals(r6)
            if (r8 != 0) goto Lb6
            if (r0 != 0) goto Lb5
            goto Lb6
        Lb5:
            r1 = 0
        Lb6:
            return r1
    }
}

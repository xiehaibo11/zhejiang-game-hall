package com.kuaishou.weapon.p0;

public class al {
    public al() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean a(android.content.Context r15) {
            r0 = 0
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L6f
            r2 = 22
            r3 = 1
            if (r1 > r2) goto L15
            android.content.ContentResolver r15 = r15.getContentResolver()     // Catch: java.lang.Throwable -> L6f
            java.lang.String r1 = "mock_location"
            int r15 = android.provider.Settings.Secure.getInt(r15, r1, r0)     // Catch: java.lang.Throwable -> L6f
            if (r15 == 0) goto L6f
            goto L6e
        L15:
            java.lang.String r1 = "location"
            java.lang.Object r15 = r15.getSystemService(r1)
            android.location.LocationManager r15 = (android.location.LocationManager) r15
            java.lang.String r1 = "gps"
            android.location.LocationProvider r2 = r15.getProvider(r1)
            if (r2 == 0) goto L52
            java.lang.String r5 = r2.getName()
            boolean r6 = r2.requiresNetwork()
            boolean r7 = r2.requiresSatellite()
            boolean r8 = r2.requiresCell()
            boolean r9 = r2.hasMonetaryCost()
            boolean r10 = r2.supportsAltitude()
            boolean r11 = r2.supportsSpeed()
            boolean r12 = r2.supportsBearing()
            int r13 = r2.getPowerRequirement()
            int r14 = r2.getAccuracy()
            r4 = r15
            r4.addTestProvider(r5, r6, r7, r8, r9, r10, r11, r12, r13, r14)
            goto L60
        L52:
            r6 = 1
            r7 = 1
            r8 = 0
            r9 = 0
            r10 = 1
            r11 = 1
            r12 = 1
            r13 = 3
            r14 = 1
            r4 = r15
            r5 = r1
            r4.addTestProvider(r5, r6, r7, r8, r9, r10, r11, r12, r13, r14)
        L60:
            r15.setTestProviderEnabled(r1, r3)
            r6 = 2
            r7 = 0
            long r8 = java.lang.System.currentTimeMillis()
            r4 = r15
            r5 = r1
            r4.setTestProviderStatus(r5, r6, r7, r8)
        L6e:
            r0 = r3
        L6f:
            return r0
    }
}

package com.kuaishou.weapon.p0;

public class de {
    public de() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(android.content.Context r3, int r4, java.lang.String r5, java.lang.String r6) {
            java.lang.String r0 = "re_po_rt"
            com.kuaishou.weapon.p0.h r0 = com.kuaishou.weapon.p0.h.a(r3, r0)     // Catch: java.lang.Throwable -> L40
            java.lang.String r1 = "plc001_bwc"
            r2 = 0
            int r0 = r0.b(r1, r2)     // Catch: java.lang.Throwable -> L40
            if (r0 > 0) goto L10
            return
        L10:
            java.lang.String r0 = "alarm"
            java.lang.Object r0 = r3.getSystemService(r0)     // Catch: java.lang.Throwable -> L40
            android.app.AlarmManager r0 = (android.app.AlarmManager) r0     // Catch: java.lang.Throwable -> L40
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Throwable -> L40
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L40
            android.net.Uri r5 = android.net.Uri.parse(r6)     // Catch: java.lang.Throwable -> L40
            r1.setData(r5)     // Catch: java.lang.Throwable -> L40
            java.lang.String r5 = r3.getPackageName()     // Catch: java.lang.Throwable -> L40
            r1.setPackage(r5)     // Catch: java.lang.Throwable -> L40
            r5 = 134217728(0x8000000, float:3.85186E-34)
            android.content.pm.ApplicationInfo r6 = r3.getApplicationInfo()     // Catch: java.lang.Throwable -> L40
            int r6 = r6.targetSdkVersion     // Catch: java.lang.Throwable -> L40
            r2 = 31
            if (r6 < r2) goto L39
            r5 = 201326592(0xc000000, float:9.8607613E-32)
        L39:
            android.app.PendingIntent r3 = android.app.PendingIntent.getBroadcast(r3, r4, r1, r5)     // Catch: java.lang.Throwable -> L40
            r0.cancel(r3)     // Catch: java.lang.Throwable -> L40
        L40:
            return
    }

    public static void a(android.content.Context r3, java.lang.String r4, int r5, long r6, java.lang.String r8) {
            java.lang.String r0 = "re_po_rt"
            com.kuaishou.weapon.p0.h r0 = com.kuaishou.weapon.p0.h.a(r3, r0)     // Catch: java.lang.Throwable -> L49
            java.lang.String r1 = "plc001_bwc"
            r2 = 0
            int r0 = r0.b(r1, r2)     // Catch: java.lang.Throwable -> L49
            if (r0 > 0) goto L10
            return
        L10:
            java.lang.String r0 = "alarm"
            java.lang.Object r0 = r3.getSystemService(r0)     // Catch: java.lang.Throwable -> L49
            android.app.AlarmManager r0 = (android.app.AlarmManager) r0     // Catch: java.lang.Throwable -> L49
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Throwable -> L49
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L49
            android.net.Uri r4 = android.net.Uri.parse(r8)     // Catch: java.lang.Throwable -> L49
            r1.setData(r4)     // Catch: java.lang.Throwable -> L49
            java.lang.String r4 = r3.getPackageName()     // Catch: java.lang.Throwable -> L49
            r1.setPackage(r4)     // Catch: java.lang.Throwable -> L49
            r4 = 134217728(0x8000000, float:3.85186E-34)
            android.content.pm.ApplicationInfo r8 = r3.getApplicationInfo()     // Catch: java.lang.Throwable -> L49
            int r8 = r8.targetSdkVersion     // Catch: java.lang.Throwable -> L49
            r2 = 31
            if (r8 < r2) goto L39
            r4 = 201326592(0xc000000, float:9.8607613E-32)
        L39:
            android.app.PendingIntent r3 = android.app.PendingIntent.getBroadcast(r3, r5, r1, r4)     // Catch: java.lang.Throwable -> L49
            r0.cancel(r3)     // Catch: java.lang.Throwable -> L40
        L40:
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L49
            long r4 = r4 + r6
            r6 = 1
            r0.set(r6, r4, r3)     // Catch: java.lang.Throwable -> L49
        L49:
            return
    }
}

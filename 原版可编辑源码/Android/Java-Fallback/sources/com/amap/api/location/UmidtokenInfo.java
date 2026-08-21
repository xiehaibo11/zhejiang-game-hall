package com.amap.api.location;

public class UmidtokenInfo {
    static android.os.Handler a;
    static java.lang.String b;
    static boolean c;
    private static com.amap.api.location.AMapLocationClient d;
    private static long e;


    static class a implements com.amap.api.location.AMapLocationListener {
        a() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final void onLocationChanged(com.amap.api.location.AMapLocation r3) {
                r2 = this;
                com.amap.api.location.AMapLocationClient r3 = com.amap.api.location.UmidtokenInfo.a()     // Catch: java.lang.Throwable -> L14
                if (r3 == 0) goto L13
                android.os.Handler r3 = com.amap.api.location.UmidtokenInfo.a     // Catch: java.lang.Throwable -> L14
                r0 = 0
                r3.removeCallbacksAndMessages(r0)     // Catch: java.lang.Throwable -> L14
                com.amap.api.location.AMapLocationClient r3 = com.amap.api.location.UmidtokenInfo.a()     // Catch: java.lang.Throwable -> L14
                r3.onDestroy()     // Catch: java.lang.Throwable -> L14
            L13:
                return
            L14:
                r3 = move-exception
                java.lang.String r0 = "UmidListener"
                java.lang.String r1 = "onLocationChanged"
                com.loc.fr.a(r3, r0, r1)
                return
        }
    }

    static {
            android.os.Handler r0 = new android.os.Handler
            r0.<init>()
            com.amap.api.location.UmidtokenInfo.a = r0
            r0 = 0
            com.amap.api.location.UmidtokenInfo.b = r0
            r0 = 30000(0x7530, double:1.4822E-319)
            com.amap.api.location.UmidtokenInfo.e = r0
            r0 = 1
            com.amap.api.location.UmidtokenInfo.c = r0
            return
    }

    public UmidtokenInfo() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.amap.api.location.AMapLocationClient a() {
            com.amap.api.location.AMapLocationClient r0 = com.amap.api.location.UmidtokenInfo.d
            return r0
    }

    public static java.lang.String getUmidtoken() {
            java.lang.String r0 = com.amap.api.location.UmidtokenInfo.b
            return r0
    }

    public static void setLocAble(boolean r0) {
            com.amap.api.location.UmidtokenInfo.c = r0
            return
    }

    public static synchronized void setUmidtoken(android.content.Context r3, java.lang.String r4) {
            java.lang.Class<com.amap.api.location.UmidtokenInfo> r0 = com.amap.api.location.UmidtokenInfo.class
            monitor-enter(r0)
            com.amap.api.location.UmidtokenInfo.b = r4     // Catch: java.lang.Throwable -> L46
            com.loc.o.a(r4)     // Catch: java.lang.Throwable -> L46
            com.amap.api.location.AMapLocationClient r4 = com.amap.api.location.UmidtokenInfo.d     // Catch: java.lang.Throwable -> L46
            if (r4 != 0) goto L44
            boolean r4 = com.amap.api.location.UmidtokenInfo.c     // Catch: java.lang.Throwable -> L46
            if (r4 == 0) goto L44
            com.amap.api.location.UmidtokenInfo$a r4 = new com.amap.api.location.UmidtokenInfo$a     // Catch: java.lang.Throwable -> L46
            r4.<init>()     // Catch: java.lang.Throwable -> L46
            com.amap.api.location.AMapLocationClient r1 = new com.amap.api.location.AMapLocationClient     // Catch: java.lang.Throwable -> L46
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L46
            com.amap.api.location.UmidtokenInfo.d = r1     // Catch: java.lang.Throwable -> L46
            com.amap.api.location.AMapLocationClientOption r3 = new com.amap.api.location.AMapLocationClientOption     // Catch: java.lang.Throwable -> L46
            r3.<init>()     // Catch: java.lang.Throwable -> L46
            r1 = 1
            r3.setOnceLocation(r1)     // Catch: java.lang.Throwable -> L46
            r1 = 0
            r3.setNeedAddress(r1)     // Catch: java.lang.Throwable -> L46
            com.amap.api.location.AMapLocationClient r1 = com.amap.api.location.UmidtokenInfo.d     // Catch: java.lang.Throwable -> L46
            r1.setLocationOption(r3)     // Catch: java.lang.Throwable -> L46
            com.amap.api.location.AMapLocationClient r3 = com.amap.api.location.UmidtokenInfo.d     // Catch: java.lang.Throwable -> L46
            r3.setLocationListener(r4)     // Catch: java.lang.Throwable -> L46
            com.amap.api.location.AMapLocationClient r3 = com.amap.api.location.UmidtokenInfo.d     // Catch: java.lang.Throwable -> L46
            r3.startLocation()     // Catch: java.lang.Throwable -> L46
            android.os.Handler r3 = com.amap.api.location.UmidtokenInfo.a     // Catch: java.lang.Throwable -> L46
            com.amap.api.location.UmidtokenInfo$1 r4 = new com.amap.api.location.UmidtokenInfo$1     // Catch: java.lang.Throwable -> L46
            r4.<init>()     // Catch: java.lang.Throwable -> L46
            r1 = 30000(0x7530, double:1.4822E-319)
            r3.postDelayed(r4, r1)     // Catch: java.lang.Throwable -> L46
        L44:
            monitor-exit(r0)
            return
        L46:
            r3 = move-exception
            java.lang.String r4 = "UmidListener"
            java.lang.String r1 = "setUmidtoken"
            com.loc.fr.a(r3, r4, r1)     // Catch: java.lang.Throwable -> L50
            monitor-exit(r0)
            return
        L50:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }
}

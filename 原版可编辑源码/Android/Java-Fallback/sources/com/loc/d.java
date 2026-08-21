package com.loc;

public final class d {
    private static boolean H = true;
    private static boolean J;
    private static java.util.concurrent.atomic.AtomicBoolean K;
    public static volatile boolean g;
    com.loc.d.a A;
    java.lang.String B;
    boolean C;
    private android.content.Context D;
    private com.loc.g E;
    private boolean F;
    private volatile boolean G;
    private boolean I;
    private com.amap.api.location.AMapLocationClientOption L;
    private com.loc.i M;
    private android.content.ServiceConnection N;
    private volatile boolean O;
    com.loc.ew a;
    com.amap.api.location.AMapLocationClientOption b;
    public com.loc.d.c c;
    com.loc.h d;
    java.util.ArrayList<com.amap.api.location.AMapLocationListener> e;
    boolean f;
    public boolean h;
    public boolean i;
    public boolean j;
    com.loc.j k;
    android.os.Messenger l;
    android.os.Messenger m;
    android.content.Intent n;
    int o;
    com.loc.d.b p;
    boolean q;
    com.amap.api.location.AMapLocationClientOption.AMapLocationMode r;
    java.lang.Object s;
    com.loc.fx t;
    boolean u;
    com.loc.e v;
    java.lang.String w;
    com.amap.api.location.AMapLocationQualityReport x;
    boolean y;
    boolean z;



    static class 3 {
        static final int[] a = null;

        static {
                com.amap.api.location.AMapLocationClientOption$AMapLocationMode[] r0 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.loc.d.3.a = r0
                com.amap.api.location.AMapLocationClientOption$AMapLocationMode r1 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Battery_Saving     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.loc.d.3.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.amap.api.location.AMapLocationClientOption$AMapLocationMode r1 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Device_Sensors     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.loc.d.3.a     // Catch: java.lang.NoSuchFieldError -> L28
                com.amap.api.location.AMapLocationClientOption$AMapLocationMode r1 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Hight_Accuracy     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                return
        }
    }

    public class a extends android.os.Handler {
        final com.loc.d a;

        public a(com.loc.d r1, android.os.Looper r2) {
                r0 = this;
                r0.a = r1
                r0.<init>(r2)
                return
        }

        @Override
        public final void handleMessage(android.os.Message r7) {
                r6 = this;
                r0 = 0
                super.handleMessage(r7)     // Catch: java.lang.Throwable -> L15c
                boolean r1 = com.loc.fq.h     // Catch: java.lang.Throwable -> L15c
                if (r1 == 0) goto L10
                java.lang.String r7 = "AMapLocationClient"
                java.lang.String r1 = "SERVICE_NOT_AVAILABLE"
                android.util.Log.e(r7, r1)     // Catch: java.lang.Throwable -> L15c
                return
            L10:
                int r1 = r7.what     // Catch: java.lang.Throwable -> L15c
                r2 = 11
                if (r1 == r2) goto L150
                r2 = 12
                if (r1 == r2) goto L148
                r2 = 1011(0x3f3, float:1.417E-42)
                r3 = 14
                if (r1 == r2) goto L13b
                switch(r1) {
                    case 1002: goto L12f;
                    case 1003: goto L11b;
                    case 1004: goto L10e;
                    case 1005: goto L102;
                    default: goto L23;
                }     // Catch: java.lang.Throwable -> L15c
            L23:
                r2 = 300000(0x493e0, double:1.482197E-318)
                r4 = 1025(0x401, float:1.436E-42)
                switch(r1) {
                    case 1014: goto Lfa;
                    case 1015: goto Le7;
                    case 1016: goto Lb3;
                    case 1017: goto La4;
                    case 1018: goto L8e;
                    default: goto L2b;
                }     // Catch: java.lang.Throwable -> L15c
            L2b:
                switch(r1) {
                    case 1023: goto L86;
                    case 1024: goto L7e;
                    case 1025: goto L5a;
                    case 1026: goto L47;
                    case 1027: goto L3b;
                    case 1028: goto L2f;
                    default: goto L2e;
                }     // Catch: java.lang.Throwable -> L15c
            L2e:
                goto La3
            L2f:
                java.lang.String r0 = "handleMessage ACTION_COARSE_LOCATIONSUCCESS"
                com.loc.d r1 = r6.a     // Catch: java.lang.Throwable -> L15c
                java.lang.Object r7 = r7.obj     // Catch: java.lang.Throwable -> L15c
                com.amap.api.location.AMapLocation r7 = (com.amap.api.location.AMapLocation) r7     // Catch: java.lang.Throwable -> L15c
                com.loc.d.b(r1, r7)     // Catch: java.lang.Throwable -> L15c
                return
            L3b:
                java.lang.String r0 = "handleMessage STOP_COARSE_LOCATION"
                com.loc.d r7 = r6.a     // Catch: java.lang.Throwable -> L15c
                com.loc.g r7 = com.loc.d.b(r7)     // Catch: java.lang.Throwable -> L15c
                r7.a()     // Catch: java.lang.Throwable -> L15c
                return
            L47:
                java.lang.String r0 = "handleMessage START_COARSE_LOCATION"
                com.loc.ft.b()     // Catch: java.lang.Throwable -> L15c
                com.loc.d r7 = r6.a     // Catch: java.lang.Throwable -> L15c
                com.loc.g r7 = com.loc.d.b(r7)     // Catch: java.lang.Throwable -> L15c
                com.loc.d r1 = r6.a     // Catch: java.lang.Throwable -> L15c
                com.amap.api.location.AMapLocationClientOption r1 = r1.b     // Catch: java.lang.Throwable -> L15c
                r7.a(r1)     // Catch: java.lang.Throwable -> L15c
                return
            L5a:
                java.lang.String r0 = "handleMessage ACTION_REBOOT_GPS_LOCATION"
                com.loc.d r7 = r6.a     // Catch: java.lang.Throwable -> L15c
                com.loc.h r7 = r7.d     // Catch: java.lang.Throwable -> L15c
                boolean r7 = r7.f()     // Catch: java.lang.Throwable -> L15c
                if (r7 == 0) goto L78
                com.loc.d r7 = r6.a     // Catch: java.lang.Throwable -> L15c
                com.loc.h r7 = r7.d     // Catch: java.lang.Throwable -> L15c
                r7.a()     // Catch: java.lang.Throwable -> L15c
                com.loc.d r7 = r6.a     // Catch: java.lang.Throwable -> L15c
                com.loc.h r7 = r7.d     // Catch: java.lang.Throwable -> L15c
                com.loc.d r1 = r6.a     // Catch: java.lang.Throwable -> L15c
                com.amap.api.location.AMapLocationClientOption r1 = r1.b     // Catch: java.lang.Throwable -> L15c
                r7.a(r1)     // Catch: java.lang.Throwable -> L15c
            L78:
                com.loc.d r7 = r6.a     // Catch: java.lang.Throwable -> L15c
                com.loc.d.a(r7, r4, r2)     // Catch: java.lang.Throwable -> L15c
                goto La3
            L7e:
                java.lang.String r0 = "handleMessage ACTION_DISABLE_BACKGROUND"
                com.loc.d r1 = r6.a     // Catch: java.lang.Throwable -> L15c
                com.loc.d.d(r1, r7)     // Catch: java.lang.Throwable -> L15c
                return
            L86:
                java.lang.String r0 = "handleMessage ACTION_ENABLE_BACKGROUND"
                com.loc.d r1 = r6.a     // Catch: java.lang.Throwable -> L15c
                com.loc.d.c(r1, r7)     // Catch: java.lang.Throwable -> L15c
                return
            L8e:
                java.lang.String r0 = "handleMessage SET_OPTION"
                com.loc.d r1 = r6.a     // Catch: java.lang.Throwable -> L15c
                java.lang.Object r7 = r7.obj     // Catch: java.lang.Throwable -> L15c
                com.amap.api.location.AMapLocationClientOption r7 = (com.amap.api.location.AMapLocationClientOption) r7     // Catch: java.lang.Throwable -> L15c
                r1.b = r7     // Catch: java.lang.Throwable -> L15c
                com.loc.d r7 = r6.a     // Catch: java.lang.Throwable -> L15c
                com.amap.api.location.AMapLocationClientOption r7 = r7.b     // Catch: java.lang.Throwable -> L15c
                if (r7 == 0) goto La3
                com.loc.d r7 = r6.a     // Catch: java.lang.Throwable -> L15c
                com.loc.d.j(r7)     // Catch: java.lang.Throwable -> L15c
            La3:
                return
            La4:
                java.lang.String r0 = "handleMessage STOP_GPS_LOCATION"
                com.loc.d r7 = r6.a     // Catch: java.lang.Throwable -> L15c
                com.loc.h r7 = r7.d     // Catch: java.lang.Throwable -> L15c
                r7.a()     // Catch: java.lang.Throwable -> L15c
                com.loc.d r7 = r6.a     // Catch: java.lang.Throwable -> L15c
                com.loc.d.i(r7)     // Catch: java.lang.Throwable -> L15c
                return
            Lb3:
                java.lang.String r0 = "handleMessage START_LBS_LOCATION"
                com.loc.d r7 = r6.a     // Catch: java.lang.Throwable -> L15c
                android.content.Context r7 = com.loc.d.c(r7)     // Catch: java.lang.Throwable -> L15c
                boolean r7 = com.loc.fz.m(r7)     // Catch: java.lang.Throwable -> L15c
                if (r7 == 0) goto Lcd
                r7 = 1
                java.lang.Object[] r7 = new java.lang.Object[r7]     // Catch: java.lang.Throwable -> L15c
                com.loc.ft.a()     // Catch: java.lang.Throwable -> L15c
                com.loc.d r7 = r6.a     // Catch: java.lang.Throwable -> L15c
                com.loc.d.g(r7)     // Catch: java.lang.Throwable -> L15c
                return
            Lcd:
                com.loc.d r7 = r6.a     // Catch: java.lang.Throwable -> L15c
                com.loc.h r7 = r7.d     // Catch: java.lang.Throwable -> L15c
                boolean r7 = r7.b()     // Catch: java.lang.Throwable -> L15c
                if (r7 == 0) goto Le1
                com.loc.d r7 = r6.a     // Catch: java.lang.Throwable -> L15c
                r1 = 1016(0x3f8, float:1.424E-42)
                r2 = 1000(0x3e8, double:4.94E-321)
                com.loc.d.a(r7, r1, r2)     // Catch: java.lang.Throwable -> L15c
                return
            Le1:
                com.loc.d r7 = r6.a     // Catch: java.lang.Throwable -> L15c
                com.loc.d.h(r7)     // Catch: java.lang.Throwable -> L15c
                return
            Le7:
                java.lang.String r0 = "handleMessage START_GPS_LOCATION"
                com.loc.d r7 = r6.a     // Catch: java.lang.Throwable -> L15c
                com.loc.h r7 = r7.d     // Catch: java.lang.Throwable -> L15c
                com.loc.d r1 = r6.a     // Catch: java.lang.Throwable -> L15c
                com.amap.api.location.AMapLocationClientOption r1 = r1.b     // Catch: java.lang.Throwable -> L15c
                r7.a(r1)     // Catch: java.lang.Throwable -> L15c
                com.loc.d r7 = r6.a     // Catch: java.lang.Throwable -> L15c
                com.loc.d.a(r7, r4, r2)     // Catch: java.lang.Throwable -> L15c
                return
            Lfa:
                java.lang.String r0 = "handleMessage ACTION_SAVE_LAST_LOCATION"
                com.loc.d r1 = r6.a     // Catch: java.lang.Throwable -> L15c
                com.loc.d.b(r1, r7)     // Catch: java.lang.Throwable -> L15c
                return
            L102:
                java.lang.String r0 = "handleMessage REMOVE_LISTENER"
                com.loc.d r1 = r6.a     // Catch: java.lang.Throwable -> L15c
                java.lang.Object r7 = r7.obj     // Catch: java.lang.Throwable -> L15c
                com.amap.api.location.AMapLocationListener r7 = (com.amap.api.location.AMapLocationListener) r7     // Catch: java.lang.Throwable -> L15c
                com.loc.d.b(r1, r7)     // Catch: java.lang.Throwable -> L15c
                return
            L10e:
                java.lang.String r7 = "handleMessage STOP_LOCATION"
                com.loc.d r1 = r6.a     // Catch: java.lang.Throwable -> L12a
                com.loc.d.f(r1)     // Catch: java.lang.Throwable -> L12a
                com.loc.d r1 = r6.a     // Catch: java.lang.Throwable -> L12a
                com.loc.d.a(r1, r3, r0)     // Catch: java.lang.Throwable -> L12a
                return
            L11b:
                java.lang.String r7 = "handleMessage START_LOCATION"
                com.loc.d r1 = r6.a     // Catch: java.lang.Throwable -> L12a
                com.loc.d.e(r1)     // Catch: java.lang.Throwable -> L12a
                com.loc.d r1 = r6.a     // Catch: java.lang.Throwable -> L12a
                r2 = 13
                com.loc.d.a(r1, r2, r0)     // Catch: java.lang.Throwable -> L12a
                return
            L12a:
                r0 = move-exception
                r5 = r0
                r0 = r7
                r7 = r5
                goto L15d
            L12f:
                java.lang.String r0 = "handleMessage SET_LISTENER"
                com.loc.d r1 = r6.a     // Catch: java.lang.Throwable -> L15c
                java.lang.Object r7 = r7.obj     // Catch: java.lang.Throwable -> L15c
                com.amap.api.location.AMapLocationListener r7 = (com.amap.api.location.AMapLocationListener) r7     // Catch: java.lang.Throwable -> L15c
                com.loc.d.a(r1, r7)     // Catch: java.lang.Throwable -> L15c
                return
            L13b:
                com.loc.d r7 = r6.a     // Catch: java.lang.Throwable -> L15c
                com.loc.d.a(r7, r3, r0)     // Catch: java.lang.Throwable -> L15c
                java.lang.String r0 = "handleMessage DESTROY"
                com.loc.d r7 = r6.a     // Catch: java.lang.Throwable -> L15c
                r7.g()     // Catch: java.lang.Throwable -> L15c
                return
            L148:
                java.lang.String r0 = "handleMessage ACTION_GPS_LOCATIONSUCCESS"
                com.loc.d r1 = r6.a     // Catch: java.lang.Throwable -> L15c
                com.loc.d.a(r1, r7)     // Catch: java.lang.Throwable -> L15c
                return
            L150:
                java.lang.String r0 = "handleMessage ACTION_LBS_LOCATIONSUCCES"
                android.os.Bundle r7 = r7.getData()     // Catch: java.lang.Throwable -> L15c
                com.loc.d r1 = r6.a     // Catch: java.lang.Throwable -> L15c
                com.loc.d.a(r1, r7)     // Catch: java.lang.Throwable -> L15c
                return
            L15c:
                r7 = move-exception
            L15d:
                if (r0 != 0) goto L161
                java.lang.String r0 = "handleMessage"
            L161:
                java.lang.String r1 = "AMapLocationManage$MHandlerr"
                com.loc.fr.a(r7, r1, r0)
                return
        }
    }

    static class b extends android.os.HandlerThread {
        com.loc.d a;

        public b(java.lang.String r1, com.loc.d r2) {
                r0 = this;
                r0.<init>(r1)
                r1 = 0
                r0.a = r1
                r0.a = r2
                return
        }

        @Override
        protected final void onLooperPrepared() {
                r1 = this;
                com.loc.d r0 = r1.a     // Catch: java.lang.Throwable -> L36
                com.loc.j r0 = r0.k     // Catch: java.lang.Throwable -> L36
                r0.a()     // Catch: java.lang.Throwable -> L36
                com.loc.d r0 = r1.a     // Catch: java.lang.Throwable -> L36
                android.content.Context r0 = com.loc.d.c(r0)     // Catch: java.lang.Throwable -> L36
                com.loc.fw.a(r0)     // Catch: java.lang.Throwable -> L36
                com.loc.d r0 = r1.a     // Catch: java.lang.Throwable -> L36
                com.loc.d.d(r0)     // Catch: java.lang.Throwable -> L36
                com.loc.d r0 = r1.a     // Catch: java.lang.Throwable -> L36
                if (r0 == 0) goto L33
                com.loc.d r0 = r1.a     // Catch: java.lang.Throwable -> L36
                android.content.Context r0 = com.loc.d.c(r0)     // Catch: java.lang.Throwable -> L36
                if (r0 == 0) goto L33
                com.loc.d r0 = r1.a     // Catch: java.lang.Throwable -> L36
                android.content.Context r0 = com.loc.d.c(r0)     // Catch: java.lang.Throwable -> L36
                com.loc.fq.b(r0)     // Catch: java.lang.Throwable -> L36
                com.loc.d r0 = r1.a     // Catch: java.lang.Throwable -> L36
                android.content.Context r0 = com.loc.d.c(r0)     // Catch: java.lang.Throwable -> L36
                com.loc.fq.a(r0)     // Catch: java.lang.Throwable -> L36
            L33:
                super.onLooperPrepared()     // Catch: java.lang.Throwable -> L36
            L36:
                return
        }

        @Override
        public final void run() {
                r0 = this;
                super.run()     // Catch: java.lang.Throwable -> L3
            L3:
                return
        }
    }

    public class c extends android.os.Handler {
        final com.loc.d a;

        public c(com.loc.d r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        public c(com.loc.d r1, android.os.Looper r2) {
                r0 = this;
                r0.a = r1
                r0.<init>(r2)
                return
        }

        @Override
        public final void handleMessage(android.os.Message r5) {
                r4 = this;
                r0 = 0
                super.handleMessage(r5)     // Catch: java.lang.Throwable -> L168
                com.loc.d r1 = r4.a     // Catch: java.lang.Throwable -> L168
                boolean r1 = r1.q     // Catch: java.lang.Throwable -> L168
                if (r1 == 0) goto Lb
                return
            Lb:
                int r1 = r5.what     // Catch: java.lang.Throwable -> L168
                r2 = 1
                if (r1 == r2) goto L14b
                r2 = 2
                r3 = 13
                if (r1 == r2) goto L114
                if (r1 == r3) goto Lf0
                java.lang.String r2 = "optBundle"
                switch(r1) {
                    case 5: goto Ld7;
                    case 6: goto Lc3;
                    case 7: goto Lb1;
                    case 8: goto Lab;
                    case 9: goto L9a;
                    case 10: goto L8e;
                    default: goto L1c;
                }
            L1c:
                switch(r1) {
                    case 100: goto L52;
                    case 101: goto L57;
                    case 102: goto L39;
                    case 103: goto L21;
                    default: goto L1f;
                }
            L1f:
                goto L14a
            L21:
                java.lang.String r0 = "handleMessage RESULT_COARSE_GEO_SUCCESS"
                android.os.Bundle r5 = r5.getData()     // Catch: java.lang.Throwable -> L168
                com.loc.d r1 = r4.a     // Catch: java.lang.Throwable -> L168
                com.loc.g r1 = com.loc.d.b(r1)     // Catch: java.lang.Throwable -> L168
                if (r1 == 0) goto L14a
                com.loc.d r1 = r4.a     // Catch: java.lang.Throwable -> L168
                com.loc.g r1 = com.loc.d.b(r1)     // Catch: java.lang.Throwable -> L168
                r1.a(r5)     // Catch: java.lang.Throwable -> L168
                return
            L39:
                java.lang.String r0 = "handleMessage RESULT_COARSE_LOCATIONCHANGE"
                android.os.Bundle r5 = r5.getData()     // Catch: java.lang.Throwable -> L168
                com.loc.d r1 = r4.a     // Catch: java.lang.Throwable -> L168
                com.amap.api.location.AMapLocationClientOption r1 = r1.b     // Catch: java.lang.Throwable -> L168
                android.os.Bundle r1 = com.loc.fr.a(r1)     // Catch: java.lang.Throwable -> L168
                r5.putBundle(r2, r1)     // Catch: java.lang.Throwable -> L168
                com.loc.d r1 = r4.a     // Catch: java.lang.Throwable -> L168
                r2 = 15
                com.loc.d.a(r1, r2, r5)     // Catch: java.lang.Throwable -> L168
                return
            L52:
                r1 = 2155(0x86b, float:3.02E-42)
                com.loc.fx.a(r0, r1)     // Catch: java.lang.Throwable -> L168
            L57:
                java.lang.String r0 = "handleMessage RESULT_COARSE_LOCATIONSUCCESS"
                android.os.Message r1 = android.os.Message.obtain()     // Catch: java.lang.Throwable -> L168
                r2 = 1028(0x404, float:1.44E-42)
                r1.what = r2     // Catch: java.lang.Throwable -> L168
                java.lang.Object r5 = r5.obj     // Catch: java.lang.Throwable -> L168
                r1.obj = r5     // Catch: java.lang.Throwable -> L168
                com.loc.d r5 = r4.a     // Catch: java.lang.Throwable -> L168
                com.loc.d$a r5 = r5.A     // Catch: java.lang.Throwable -> L168
                r5.sendMessage(r1)     // Catch: java.lang.Throwable -> L168
                com.loc.d r5 = r4.a     // Catch: java.lang.Throwable -> L168
                com.amap.api.location.AMapLocationClientOption r5 = com.loc.d.a(r5)     // Catch: java.lang.Throwable -> L168
                if (r5 == 0) goto L14a
                com.loc.d r5 = r4.a     // Catch: java.lang.Throwable -> L168
                com.amap.api.location.AMapLocationClientOption r5 = com.loc.d.a(r5)     // Catch: java.lang.Throwable -> L168
                boolean r5 = r5.getCacheCallBack()     // Catch: java.lang.Throwable -> L168
                if (r5 == 0) goto L14a
                com.loc.d r5 = r4.a     // Catch: java.lang.Throwable -> L168
                com.loc.d$c r5 = r5.c     // Catch: java.lang.Throwable -> L168
                if (r5 == 0) goto L14a
                com.loc.d r5 = r4.a     // Catch: java.lang.Throwable -> L168
                com.loc.d$c r5 = r5.c     // Catch: java.lang.Throwable -> L168
                r5.removeMessages(r3)     // Catch: java.lang.Throwable -> L168
                return
            L8e:
                java.lang.String r0 = "handleMessage RESULT_LBS_ON_CALLBACK"
                java.lang.Object r5 = r5.obj     // Catch: java.lang.Throwable -> L168
                com.amap.api.location.AMapLocation r5 = (com.amap.api.location.AMapLocation) r5     // Catch: java.lang.Throwable -> L168
                com.loc.d r1 = r4.a     // Catch: java.lang.Throwable -> L168
                com.loc.d.a(r1, r5)     // Catch: java.lang.Throwable -> L168
                return
            L9a:
                java.lang.String r0 = "handleMessage RESULT_INSTALLED_MOCK_APP"
                android.os.Bundle r5 = r5.getData()     // Catch: java.lang.Throwable -> L168
                java.lang.String r1 = "installMockApp"
                boolean r5 = r5.getBoolean(r1)     // Catch: java.lang.Throwable -> L168
                com.loc.d.b(r5)     // Catch: java.lang.Throwable -> L168
                goto L14a
            Lab:
                r1 = 2141(0x85d, float:3.0E-42)
                com.loc.fx.a(r0, r1)     // Catch: java.lang.Throwable -> L168
                goto L114
            Lb1:
                java.lang.String r0 = "handleMessage RESULT_NGPS_ABLE"
                android.os.Bundle r5 = r5.getData()     // Catch: java.lang.Throwable -> L168
                com.loc.d r1 = r4.a     // Catch: java.lang.Throwable -> L168
                java.lang.String r2 = "ngpsAble"
                boolean r5 = r5.getBoolean(r2)     // Catch: java.lang.Throwable -> L168
                com.loc.d.b(r1, r5)     // Catch: java.lang.Throwable -> L168
                return
            Lc3:
                java.lang.String r0 = "handleMessage RESULT_GPS_GEO_SUCCESS"
                android.os.Bundle r5 = r5.getData()     // Catch: java.lang.Throwable -> L168
                com.loc.d r1 = r4.a     // Catch: java.lang.Throwable -> L168
                com.loc.h r1 = r1.d     // Catch: java.lang.Throwable -> L168
                if (r1 == 0) goto L14a
                com.loc.d r1 = r4.a     // Catch: java.lang.Throwable -> L168
                com.loc.h r1 = r1.d     // Catch: java.lang.Throwable -> L168
                r1.a(r5)     // Catch: java.lang.Throwable -> L168
                return
            Ld7:
                java.lang.String r0 = "handleMessage RESULT_GPS_LOCATIONCHANGE"
                android.os.Bundle r5 = r5.getData()     // Catch: java.lang.Throwable -> L168
                com.loc.d r1 = r4.a     // Catch: java.lang.Throwable -> L168
                com.amap.api.location.AMapLocationClientOption r1 = r1.b     // Catch: java.lang.Throwable -> L168
                android.os.Bundle r1 = com.loc.fr.a(r1)     // Catch: java.lang.Throwable -> L168
                r5.putBundle(r2, r1)     // Catch: java.lang.Throwable -> L168
                com.loc.d r1 = r4.a     // Catch: java.lang.Throwable -> L168
                r2 = 10
                com.loc.d.a(r1, r2, r5)     // Catch: java.lang.Throwable -> L168
                return
            Lf0:
                java.lang.String r0 = "handleMessage RESULT_CACHE_CALLBACK"
                com.loc.d r5 = r4.a     // Catch: java.lang.Throwable -> L168
                com.loc.ew r5 = r5.a     // Catch: java.lang.Throwable -> L168
                if (r5 == 0) goto L102
                com.loc.d r5 = r4.a     // Catch: java.lang.Throwable -> L168
                com.loc.d r1 = r4.a     // Catch: java.lang.Throwable -> L168
                com.loc.ew r1 = r1.a     // Catch: java.lang.Throwable -> L168
                com.loc.d.a(r5, r1)     // Catch: java.lang.Throwable -> L168
                return
            L102:
                com.amap.api.location.AMapLocation r5 = new com.amap.api.location.AMapLocation     // Catch: java.lang.Throwable -> L168
                java.lang.String r1 = "LBS"
                r5.<init>(r1)     // Catch: java.lang.Throwable -> L168
                r1 = 33
                r5.setErrorCode(r1)     // Catch: java.lang.Throwable -> L168
                com.loc.d r1 = r4.a     // Catch: java.lang.Throwable -> L168
                com.loc.d.a(r1, r5)     // Catch: java.lang.Throwable -> L168
                return
            L114:
                java.lang.String r0 = "handleMessage RESULT_GPS_LOCATIONSUCCESS"
                android.os.Message r1 = android.os.Message.obtain()     // Catch: java.lang.Throwable -> L168
                r2 = 12
                r1.what = r2     // Catch: java.lang.Throwable -> L168
                java.lang.Object r5 = r5.obj     // Catch: java.lang.Throwable -> L168
                r1.obj = r5     // Catch: java.lang.Throwable -> L168
                com.loc.d r5 = r4.a     // Catch: java.lang.Throwable -> L168
                com.loc.d$a r5 = r5.A     // Catch: java.lang.Throwable -> L168
                r5.sendMessage(r1)     // Catch: java.lang.Throwable -> L168
                com.loc.d r5 = r4.a     // Catch: java.lang.Throwable -> L168
                com.amap.api.location.AMapLocationClientOption r5 = com.loc.d.a(r5)     // Catch: java.lang.Throwable -> L168
                if (r5 == 0) goto L14a
                com.loc.d r5 = r4.a     // Catch: java.lang.Throwable -> L168
                com.amap.api.location.AMapLocationClientOption r5 = com.loc.d.a(r5)     // Catch: java.lang.Throwable -> L168
                boolean r5 = r5.getCacheCallBack()     // Catch: java.lang.Throwable -> L168
                if (r5 == 0) goto L14a
                com.loc.d r5 = r4.a     // Catch: java.lang.Throwable -> L168
                com.loc.d$c r5 = r5.c     // Catch: java.lang.Throwable -> L168
                if (r5 == 0) goto L14a
                com.loc.d r5 = r4.a     // Catch: java.lang.Throwable -> L168
                com.loc.d$c r5 = r5.c     // Catch: java.lang.Throwable -> L168
                r5.removeMessages(r3)     // Catch: java.lang.Throwable -> L168
            L14a:
                return
            L14b:
                java.lang.String r0 = "handleMessage RESULT_LBS_LOCATIONSUCCESS"
                com.loc.d r1 = r4.a     // Catch: java.lang.Throwable -> L168
                com.loc.d$a r1 = r1.A     // Catch: java.lang.Throwable -> L168
                android.os.Message r1 = r1.obtainMessage()     // Catch: java.lang.Throwable -> L168
                r2 = 11
                r1.what = r2     // Catch: java.lang.Throwable -> L168
                android.os.Bundle r5 = r5.getData()     // Catch: java.lang.Throwable -> L168
                r1.setData(r5)     // Catch: java.lang.Throwable -> L168
                com.loc.d r5 = r4.a     // Catch: java.lang.Throwable -> L168
                com.loc.d$a r5 = r5.A     // Catch: java.lang.Throwable -> L168
                r5.sendMessage(r1)     // Catch: java.lang.Throwable -> L168
                return
            L168:
                r5 = move-exception
                if (r0 != 0) goto L16d
                java.lang.String r0 = "handleMessage"
            L16d:
                java.lang.String r1 = "AmapLocationManager$MainHandler"
                com.loc.fr.a(r5, r1, r0)
                return
        }
    }

    static {
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            com.loc.d.K = r0
            return
    }

    public d(android.content.Context r4, android.content.Intent r5, android.os.Looper r6) {
            r3 = this;
            r3.<init>()
            com.amap.api.location.AMapLocationClientOption r0 = new com.amap.api.location.AMapLocationClientOption
            r0.<init>()
            r3.b = r0
            r0 = 0
            r3.d = r0
            r1 = 0
            r3.F = r1
            r3.G = r1
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r3.e = r2
            r3.f = r1
            r2 = 1
            r3.h = r2
            r3.i = r2
            r3.j = r2
            r3.l = r0
            r3.m = r0
            r3.n = r0
            r3.o = r1
            r3.I = r2
            r3.p = r0
            r3.q = r1
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r2 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Hight_Accuracy
            r3.r = r2
            java.lang.Object r2 = new java.lang.Object
            r2.<init>()
            r3.s = r2
            r3.t = r0
            r3.u = r1
            r3.v = r0
            com.amap.api.location.AMapLocationClientOption r2 = new com.amap.api.location.AMapLocationClientOption
            r2.<init>()
            r3.L = r2
            r3.M = r0
            r3.w = r0
            com.loc.d$2 r2 = new com.loc.d$2
            r2.<init>(r3)
            r3.N = r2
            r3.x = r0
            r3.y = r1
            r3.z = r1
            r3.O = r1
            r3.A = r0
            r3.B = r0
            r3.C = r1
            r3.D = r4
            r3.n = r5
            r3.b(r6)
            return
    }

    static com.amap.api.location.AMapLocationClientOption a(com.loc.d r0) {
            com.amap.api.location.AMapLocationClientOption r0 = r0.L
            return r0
    }

    private com.loc.d.a a(android.os.Looper r3) {
            r2 = this;
            java.lang.Object r0 = r2.s
            monitor-enter(r0)
            com.loc.d$a r1 = new com.loc.d$a     // Catch: java.lang.Throwable -> Lc
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> Lc
            r2.A = r1     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
            return r1
        Lc:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
            throw r3
    }

    private com.loc.ew a(com.loc.er r2, boolean r3) {
            r1 = this;
            com.amap.api.location.AMapLocationClientOption r0 = r1.b
            boolean r0 = r0.isLocationCacheEnable()
            if (r0 == 0) goto L15
            com.loc.ew r2 = r2.a(r3)     // Catch: java.lang.Throwable -> Ld
            return r2
        Ld:
            r2 = move-exception
            java.lang.String r3 = "ALManager"
            java.lang.String r0 = "doFirstCacheLoc"
            com.loc.fr.a(r2, r3, r0)
        L15:
            r2 = 0
            return r2
    }

    private void a(int r3) {
            r2 = this;
            java.lang.Object r0 = r2.s
            monitor-enter(r0)
            com.loc.d$a r1 = r2.A     // Catch: java.lang.Throwable -> Le
            if (r1 == 0) goto Lc
            com.loc.d$a r1 = r2.A     // Catch: java.lang.Throwable -> Le
            r1.removeMessages(r3)     // Catch: java.lang.Throwable -> Le
        Lc:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le
            return
        Le:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le
            throw r3
    }

    private void a(int r3, android.os.Bundle r4) {
            r2 = this;
            if (r4 != 0) goto L7
            android.os.Bundle r4 = new android.os.Bundle     // Catch: java.lang.Throwable -> L35
            r4.<init>()     // Catch: java.lang.Throwable -> L35
        L7:
            java.lang.String r0 = r2.w     // Catch: java.lang.Throwable -> L35
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L35
            if (r0 == 0) goto L17
            android.content.Context r0 = r2.D     // Catch: java.lang.Throwable -> L35
            java.lang.String r0 = com.loc.fr.b(r0)     // Catch: java.lang.Throwable -> L35
            r2.w = r0     // Catch: java.lang.Throwable -> L35
        L17:
            java.lang.String r0 = "c"
            java.lang.String r1 = r2.w     // Catch: java.lang.Throwable -> L35
            r4.putString(r0, r1)     // Catch: java.lang.Throwable -> L35
            android.os.Message r0 = android.os.Message.obtain()     // Catch: java.lang.Throwable -> L35
            r0.what = r3     // Catch: java.lang.Throwable -> L35
            r0.setData(r4)     // Catch: java.lang.Throwable -> L35
            android.os.Messenger r3 = r2.m     // Catch: java.lang.Throwable -> L35
            r0.replyTo = r3     // Catch: java.lang.Throwable -> L35
            android.os.Messenger r3 = r2.l     // Catch: java.lang.Throwable -> L35
            if (r3 == 0) goto L34
            android.os.Messenger r3 = r2.l     // Catch: java.lang.Throwable -> L35
            r3.send(r0)     // Catch: java.lang.Throwable -> L35
        L34:
            return
        L35:
            r3 = move-exception
            boolean r4 = r3 instanceof java.lang.IllegalStateException
            r0 = 0
            if (r4 == 0) goto L49
            java.lang.String r4 = r3.getMessage()
            java.lang.String r1 = "sending message to a Handler on a dead thread"
            boolean r4 = r4.contains(r1)
            if (r4 == 0) goto L49
            r4 = 1
            goto L4a
        L49:
            r4 = 0
        L4a:
            boolean r1 = r3 instanceof android.os.RemoteException
            if (r1 != 0) goto L50
            if (r4 == 0) goto L55
        L50:
            r4 = 0
            r2.l = r4
            r2.F = r0
        L55:
            java.lang.String r4 = "ALManager"
            java.lang.String r0 = "sendLocMessage"
            com.loc.fr.a(r3, r4, r0)
            return
    }

    private void a(int r3, java.lang.Object r4, long r5) {
            r2 = this;
            java.lang.Object r0 = r2.s
            monitor-enter(r0)
            com.loc.d$a r1 = r2.A     // Catch: java.lang.Throwable -> L20
            if (r1 == 0) goto L1e
            android.os.Message r1 = android.os.Message.obtain()     // Catch: java.lang.Throwable -> L20
            r1.what = r3     // Catch: java.lang.Throwable -> L20
            boolean r3 = r4 instanceof android.os.Bundle     // Catch: java.lang.Throwable -> L20
            if (r3 == 0) goto L17
            android.os.Bundle r4 = (android.os.Bundle) r4     // Catch: java.lang.Throwable -> L20
            r1.setData(r4)     // Catch: java.lang.Throwable -> L20
            goto L19
        L17:
            r1.obj = r4     // Catch: java.lang.Throwable -> L20
        L19:
            com.loc.d$a r3 = r2.A     // Catch: java.lang.Throwable -> L20
            r3.sendMessageDelayed(r1, r5)     // Catch: java.lang.Throwable -> L20
        L1e:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            return
        L20:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            throw r3
    }

    private static void a(android.content.Context r3) {
            java.util.concurrent.atomic.AtomicBoolean r0 = com.loc.d.K
            r1 = 0
            r2 = 1
            boolean r0 = r0.compareAndSet(r1, r2)
            if (r0 == 0) goto L16
            com.loc.cr r0 = com.loc.cr.a()
            com.loc.d$1 r1 = new com.loc.d$1
            r1.<init>(r3)
            r0.b(r1)
        L16:
            return
    }

    private void a(android.content.Intent r4) {
            r3 = this;
            android.content.Context r0 = r3.D     // Catch: java.lang.Throwable -> L9
            android.content.ServiceConnection r1 = r3.N     // Catch: java.lang.Throwable -> L9
            r2 = 1
            r0.bindService(r4, r1, r2)     // Catch: java.lang.Throwable -> L9
            return
        L9:
            r4 = move-exception
            java.lang.String r0 = "ALManager"
            java.lang.String r1 = "startServiceImpl"
            com.loc.fr.a(r4, r0, r1)
            return
    }

    private void a(android.content.Intent r6, boolean r7) {
            r5 = this;
            android.content.Context r0 = r5.D
            if (r0 == 0) goto L3f
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            r2 = 1
            if (r0 < r1) goto L38
            if (r7 == 0) goto L38
            boolean r7 = r5.t()
            if (r7 != 0) goto L1b
            java.lang.String r6 = "amapapi"
            java.lang.String r7 = "-------------调用后台定位服务，缺少权限：android.permission.FOREGROUND_SERVICE--------------"
            android.util.Log.e(r6, r7)
            return
        L1b:
            android.content.Context r7 = r5.D     // Catch: java.lang.Throwable -> L38
            java.lang.Class r7 = r7.getClass()     // Catch: java.lang.Throwable -> L38
            java.lang.String r0 = "startForegroundService"
            java.lang.Class[] r1 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L38
            java.lang.Class<android.content.Intent> r3 = android.content.Intent.class
            r4 = 0
            r1[r4] = r3     // Catch: java.lang.Throwable -> L38
            java.lang.reflect.Method r7 = r7.getMethod(r0, r1)     // Catch: java.lang.Throwable -> L38
            android.content.Context r0 = r5.D     // Catch: java.lang.Throwable -> L38
            java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L38
            r1[r4] = r6     // Catch: java.lang.Throwable -> L38
            r7.invoke(r0, r1)     // Catch: java.lang.Throwable -> L38
            goto L3d
        L38:
            android.content.Context r7 = r5.D
            r7.startService(r6)
        L3d:
            r5.C = r2
        L3f:
            return
    }

    private void a(android.os.Bundle r5) {
            r4 = this;
            r0 = 0
            if (r5 == 0) goto L45
            java.lang.Class<com.amap.api.location.AMapLocation> r1 = com.amap.api.location.AMapLocation.class
            java.lang.ClassLoader r1 = r1.getClassLoader()     // Catch: java.lang.Throwable -> L42
            r5.setClassLoader(r1)     // Catch: java.lang.Throwable -> L42
            java.lang.String r1 = "loc"
            android.os.Parcelable r1 = r5.getParcelable(r1)     // Catch: java.lang.Throwable -> L42
            com.amap.api.location.AMapLocation r1 = (com.amap.api.location.AMapLocation) r1     // Catch: java.lang.Throwable -> L42
            java.lang.String r2 = "nb"
            java.lang.String r2 = r5.getString(r2)     // Catch: java.lang.Throwable -> L42
            r4.B = r2     // Catch: java.lang.Throwable -> L42
            java.lang.String r2 = "statics"
            android.os.Parcelable r5 = r5.getParcelable(r2)     // Catch: java.lang.Throwable -> L42
            com.loc.eq r5 = (com.loc.eq) r5     // Catch: java.lang.Throwable -> L42
            if (r1 == 0) goto L47
            int r2 = r1.getErrorCode()     // Catch: java.lang.Throwable -> L56
            if (r2 != 0) goto L47
            com.loc.h r2 = r4.d     // Catch: java.lang.Throwable -> L56
            if (r2 == 0) goto L47
            com.loc.h r2 = r4.d     // Catch: java.lang.Throwable -> L56
            r2.c()     // Catch: java.lang.Throwable -> L56
            java.lang.String r2 = r1.getAdCode()     // Catch: java.lang.Throwable -> L56
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L56
            if (r2 != 0) goto L47
            com.loc.h.y = r1     // Catch: java.lang.Throwable -> L56
            goto L47
        L42:
            r1 = move-exception
            r5 = r0
            goto L57
        L45:
            r5 = r0
            r1 = r5
        L47:
            com.loc.h r2 = r4.d     // Catch: java.lang.Throwable -> L56
            if (r2 == 0) goto L54
            com.loc.h r2 = r4.d     // Catch: java.lang.Throwable -> L56
            java.lang.String r3 = r4.B     // Catch: java.lang.Throwable -> L56
            com.amap.api.location.AMapLocation r0 = r2.a(r1, r3)     // Catch: java.lang.Throwable -> L56
            goto L5e
        L54:
            r0 = r1
            goto L5e
        L56:
            r1 = move-exception
        L57:
            java.lang.String r2 = "AmapLocationManager"
            java.lang.String r3 = "resultLbsLocationSuccess"
            com.loc.fr.a(r1, r2, r3)
        L5e:
            r4.a(r0, r5)
            return
    }

    private void a(android.os.Message r3) {
            r2 = this;
            android.os.Bundle r3 = r3.getData()     // Catch: java.lang.Throwable -> L23
            java.lang.String r0 = "loc"
            android.os.Parcelable r0 = r3.getParcelable(r0)     // Catch: java.lang.Throwable -> L23
            com.amap.api.location.AMapLocation r0 = (com.amap.api.location.AMapLocation) r0     // Catch: java.lang.Throwable -> L23
            java.lang.String r1 = "lastLocNb"
            java.lang.String r3 = r3.getString(r1)     // Catch: java.lang.Throwable -> L23
            r2.f(r0)     // Catch: java.lang.Throwable -> L23
            com.loc.j r1 = r2.k     // Catch: java.lang.Throwable -> L23
            boolean r3 = r1.a(r0, r3)     // Catch: java.lang.Throwable -> L23
            if (r3 == 0) goto L22
            com.loc.j r3 = r2.k     // Catch: java.lang.Throwable -> L23
            r3.d()     // Catch: java.lang.Throwable -> L23
        L22:
            return
        L23:
            r3 = move-exception
            java.lang.String r0 = "ALManager"
            java.lang.String r1 = "doSaveLastLocation"
            com.loc.fr.a(r3, r0, r1)
            return
    }

    private void a(com.amap.api.location.AMapLocation r9) {
            r8 = this;
            int r0 = r9.getErrorCode()     // Catch: java.lang.Throwable -> Lad
            r1 = 0
            if (r0 == 0) goto La
            r9.setLocationType(r1)     // Catch: java.lang.Throwable -> Lad
        La:
            int r0 = r9.getErrorCode()     // Catch: java.lang.Throwable -> Lad
            if (r0 != 0) goto L5c
            double r2 = r9.getLatitude()     // Catch: java.lang.Throwable -> Lad
            double r4 = r9.getLongitude()     // Catch: java.lang.Throwable -> Lad
            r6 = 0
            int r0 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r0 != 0) goto L22
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 == 0) goto L46
        L22:
            r6 = -4587338432941916160(0xc056800000000000, double:-90.0)
            int r0 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r0 < 0) goto L46
            r6 = 4636033603912859648(0x4056800000000000, double:90.0)
            int r0 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r0 > 0) goto L46
            r2 = -4582834833314545664(0xc066800000000000, double:-180.0)
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 < 0) goto L46
            r2 = 4640537203540230144(0x4066800000000000, double:180.0)
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 <= 0) goto L5c
        L46:
            java.lang.String r0 = "errorLatLng"
            java.lang.String r2 = r9.toStr()     // Catch: java.lang.Throwable -> Lad
            com.loc.fx.a(r0, r2)     // Catch: java.lang.Throwable -> Lad
            r9.setLocationType(r1)     // Catch: java.lang.Throwable -> Lad
            r0 = 8
            r9.setErrorCode(r0)     // Catch: java.lang.Throwable -> Lad
            java.lang.String r0 = "LatLng is error#0802"
            r9.setLocationDetail(r0)     // Catch: java.lang.Throwable -> Lad
        L5c:
            java.lang.String r0 = "gps"
            java.lang.String r1 = r9.getProvider()     // Catch: java.lang.Throwable -> Lad
            boolean r0 = r0.equalsIgnoreCase(r1)     // Catch: java.lang.Throwable -> Lad
            if (r0 != 0) goto L70
            com.loc.h r0 = r8.d     // Catch: java.lang.Throwable -> Lad
            boolean r0 = r0.b()     // Catch: java.lang.Throwable -> Lad
            if (r0 != 0) goto Lad
        L70:
            double r0 = r9.getAltitude()     // Catch: java.lang.Throwable -> Lad
            double r0 = com.loc.fz.c(r0)     // Catch: java.lang.Throwable -> Lad
            r9.setAltitude(r0)     // Catch: java.lang.Throwable -> Lad
            float r0 = r9.getBearing()     // Catch: java.lang.Throwable -> Lad
            float r0 = com.loc.fz.a(r0)     // Catch: java.lang.Throwable -> Lad
            r9.setBearing(r0)     // Catch: java.lang.Throwable -> Lad
            float r0 = r9.getSpeed()     // Catch: java.lang.Throwable -> Lad
            float r0 = com.loc.fz.a(r0)     // Catch: java.lang.Throwable -> Lad
            r9.setSpeed(r0)     // Catch: java.lang.Throwable -> Lad
            r8.c(r9)     // Catch: java.lang.Throwable -> Lad
            b(r9)     // Catch: java.lang.Throwable -> Lad
            java.util.ArrayList<com.amap.api.location.AMapLocationListener> r0 = r8.e     // Catch: java.lang.Throwable -> Lad
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> Lad
        L9d:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> Lad
            if (r1 == 0) goto Lad
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> Lad
            com.amap.api.location.AMapLocationListener r1 = (com.amap.api.location.AMapLocationListener) r1     // Catch: java.lang.Throwable -> Lad
            r1.onLocationChanged(r9)     // Catch: java.lang.Throwable -> L9d
            goto L9d
        Lad:
            return
    }

    private synchronized void a(com.amap.api.location.AMapLocation r4, com.loc.eq r5) {
            r3 = this;
            monitor-enter(r3)
            if (r4 != 0) goto L14
            com.amap.api.location.AMapLocation r4 = new com.amap.api.location.AMapLocation     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r0 = ""
            r4.<init>(r0)     // Catch: java.lang.Throwable -> Lf3
            r0 = 8
            r4.setErrorCode(r0)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r0 = "amapLocation is null#0801"
            r4.setLocationDetail(r0)     // Catch: java.lang.Throwable -> Lf3
        L14:
            java.lang.String r0 = "gps"
            java.lang.String r1 = r4.getProvider()     // Catch: java.lang.Throwable -> Lf3
            boolean r0 = r0.equalsIgnoreCase(r1)     // Catch: java.lang.Throwable -> Lf3
            if (r0 != 0) goto L25
            java.lang.String r0 = "lbs"
            r4.setProvider(r0)     // Catch: java.lang.Throwable -> Lf3
        L25:
            com.amap.api.location.AMapLocationQualityReport r0 = r3.x     // Catch: java.lang.Throwable -> Lf3
            if (r0 != 0) goto L30
            com.amap.api.location.AMapLocationQualityReport r0 = new com.amap.api.location.AMapLocationQualityReport     // Catch: java.lang.Throwable -> Lf3
            r0.<init>()     // Catch: java.lang.Throwable -> Lf3
            r3.x = r0     // Catch: java.lang.Throwable -> Lf3
        L30:
            com.amap.api.location.AMapLocationQualityReport r0 = r3.x     // Catch: java.lang.Throwable -> Lf3
            com.amap.api.location.AMapLocationClientOption r1 = r3.b     // Catch: java.lang.Throwable -> Lf3
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r1 = r1.getLocationMode()     // Catch: java.lang.Throwable -> Lf3
            r0.setLocationMode(r1)     // Catch: java.lang.Throwable -> Lf3
            com.loc.h r0 = r3.d     // Catch: java.lang.Throwable -> Lf3
            if (r0 == 0) goto L55
            com.amap.api.location.AMapLocationQualityReport r0 = r3.x     // Catch: java.lang.Throwable -> Lf3
            com.loc.h r1 = r3.d     // Catch: java.lang.Throwable -> Lf3
            int r1 = r1.e()     // Catch: java.lang.Throwable -> Lf3
            r0.setGPSSatellites(r1)     // Catch: java.lang.Throwable -> Lf3
            com.amap.api.location.AMapLocationQualityReport r0 = r3.x     // Catch: java.lang.Throwable -> Lf3
            com.loc.h r1 = r3.d     // Catch: java.lang.Throwable -> Lf3
            int r1 = r1.d()     // Catch: java.lang.Throwable -> Lf3
            r0.setGpsStatus(r1)     // Catch: java.lang.Throwable -> Lf3
        L55:
            android.content.Context r0 = r3.D     // Catch: java.lang.Throwable -> Lf3
            boolean r0 = com.loc.fz.g(r0)     // Catch: java.lang.Throwable -> Lf3
            com.amap.api.location.AMapLocationQualityReport r1 = r3.x     // Catch: java.lang.Throwable -> Lf3
            r1.setWifiAble(r0)     // Catch: java.lang.Throwable -> Lf3
            com.amap.api.location.AMapLocationQualityReport r0 = r3.x     // Catch: java.lang.Throwable -> Lf3
            android.content.Context r1 = r3.D     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r1 = com.loc.fz.h(r1)     // Catch: java.lang.Throwable -> Lf3
            r0.setNetworkType(r1)     // Catch: java.lang.Throwable -> Lf3
            int r0 = r4.getLocationType()     // Catch: java.lang.Throwable -> Lf3
            r1 = 1
            if (r0 == r1) goto L7e
            java.lang.String r0 = "gps"
            java.lang.String r1 = r4.getProvider()     // Catch: java.lang.Throwable -> Lf3
            boolean r0 = r0.equalsIgnoreCase(r1)     // Catch: java.lang.Throwable -> Lf3
            if (r0 == 0) goto L85
        L7e:
            com.amap.api.location.AMapLocationQualityReport r0 = r3.x     // Catch: java.lang.Throwable -> Lf3
            r1 = 0
            r0.setNetUseTime(r1)     // Catch: java.lang.Throwable -> Lf3
        L85:
            if (r5 == 0) goto L90
            com.amap.api.location.AMapLocationQualityReport r0 = r3.x     // Catch: java.lang.Throwable -> Lf3
            long r1 = r5.a()     // Catch: java.lang.Throwable -> Lf3
            r0.setNetUseTime(r1)     // Catch: java.lang.Throwable -> Lf3
        L90:
            com.amap.api.location.AMapLocationQualityReport r0 = r3.x     // Catch: java.lang.Throwable -> Lf3
            boolean r1 = com.loc.d.J     // Catch: java.lang.Throwable -> Lf3
            r0.setInstallHighDangerMockApp(r1)     // Catch: java.lang.Throwable -> Lf3
            com.amap.api.location.AMapLocationQualityReport r0 = r3.x     // Catch: java.lang.Throwable -> Lf3
            r4.setLocationQualityReport(r0)     // Catch: java.lang.Throwable -> Lf3
            boolean r0 = r3.G     // Catch: java.lang.Throwable -> Ld2
            if (r0 == 0) goto Lda
            java.lang.String r0 = r3.B     // Catch: java.lang.Throwable -> Ld2
            r3.a(r4, r0)     // Catch: java.lang.Throwable -> Ld2
            if (r5 == 0) goto Lae
            long r0 = com.loc.fz.b()     // Catch: java.lang.Throwable -> Ld2
            r5.d(r0)     // Catch: java.lang.Throwable -> Ld2
        Lae:
            android.content.Context r0 = r3.D     // Catch: java.lang.Throwable -> Ld2
            com.loc.fx.a(r0, r4, r5)     // Catch: java.lang.Throwable -> Ld2
            android.content.Context r5 = r3.D     // Catch: java.lang.Throwable -> Ld2
            com.loc.fx.a(r5, r4)     // Catch: java.lang.Throwable -> Ld2
            com.amap.api.location.AMapLocation r5 = r4.clone()     // Catch: java.lang.Throwable -> Ld2
            r3.d(r5)     // Catch: java.lang.Throwable -> Ld2
            android.content.Context r5 = r3.D     // Catch: java.lang.Throwable -> Ld2
            com.loc.fw r5 = com.loc.fw.a(r5)     // Catch: java.lang.Throwable -> Ld2
            r5.a(r4)     // Catch: java.lang.Throwable -> Ld2
            android.content.Context r4 = r3.D     // Catch: java.lang.Throwable -> Ld2
            com.loc.fw r4 = com.loc.fw.a(r4)     // Catch: java.lang.Throwable -> Ld2
            r4.b()     // Catch: java.lang.Throwable -> Ld2
            goto Lda
        Ld2:
            r4 = move-exception
            java.lang.String r5 = "ALManager"
            java.lang.String r0 = "handlerLocation part2"
            com.loc.fr.a(r4, r5, r0)     // Catch: java.lang.Throwable -> Lf3
        Lda:
            boolean r4 = r3.q     // Catch: java.lang.Throwable -> Lf3
            if (r4 == 0) goto Le0
            monitor-exit(r3)
            return
        Le0:
            com.amap.api.location.AMapLocationClientOption r4 = r3.b     // Catch: java.lang.Throwable -> Lf3
            boolean r4 = r4.isOnceLocation()     // Catch: java.lang.Throwable -> Lf3
            if (r4 == 0) goto Lf1
            r3.l()     // Catch: java.lang.Throwable -> Lf3
            r4 = 14
            r5 = 0
            r3.a(r4, r5)     // Catch: java.lang.Throwable -> Lf3
        Lf1:
            monitor-exit(r3)
            return
        Lf3:
            r4 = move-exception
            java.lang.String r5 = "ALManager"
            java.lang.String r0 = "handlerLocation part3"
            com.loc.fr.a(r4, r5, r0)     // Catch: java.lang.Throwable -> Lfd
            monitor-exit(r3)
            return
        Lfd:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    private void a(com.amap.api.location.AMapLocation r4, java.lang.String r5) {
            r3 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "loc"
            r0.putParcelable(r1, r4)
            java.lang.String r4 = "lastLocNb"
            r0.putString(r4, r5)
            r4 = 1014(0x3f6, float:1.421E-42)
            r1 = 0
            r3.a(r4, r0, r1)
            return
    }

    static void a(com.loc.d r1, int r2, long r3) {
            r0 = 0
            r1.a(r2, r0, r3)
            return
    }

    static void a(com.loc.d r0, int r1, android.os.Bundle r2) {
            r0.a(r1, r2)
            return
    }

    static void a(com.loc.d r0, android.os.Bundle r1) {
            r0.a(r1)
            return
    }

    static void a(com.loc.d r0, android.os.Message r1) {
            r0.b(r1)
            return
    }

    static void a(com.loc.d r0, com.amap.api.location.AMapLocation r1) {
            r0.a(r1)
            return
    }

    static void a(com.loc.d r0, com.amap.api.location.AMapLocationListener r1) {
            r0.c(r1)
            return
    }

    private static void a(com.loc.er r2) {
            r2.d()     // Catch: java.lang.Throwable -> L1a
            com.amap.api.location.AMapLocationClientOption r0 = new com.amap.api.location.AMapLocationClientOption     // Catch: java.lang.Throwable -> L1a
            r0.<init>()     // Catch: java.lang.Throwable -> L1a
            r1 = 0
            com.amap.api.location.AMapLocationClientOption r0 = r0.setNeedAddress(r1)     // Catch: java.lang.Throwable -> L1a
            r2.a(r0)     // Catch: java.lang.Throwable -> L1a
            com.loc.eq r0 = new com.loc.eq     // Catch: java.lang.Throwable -> L1a
            r0.<init>()     // Catch: java.lang.Throwable -> L1a
            r1 = 1
            r2.a(r1, r0)     // Catch: java.lang.Throwable -> L1a
            return
        L1a:
            r2 = move-exception
            java.lang.String r0 = "ALManager"
            java.lang.String r1 = "apsLocation:doFirstNetLocate 2"
            com.loc.fr.a(r2, r0, r1)
            return
    }

    private void a(com.loc.er r2, com.loc.eq r3) {
            r1 = this;
            android.content.Context r0 = r1.D     // Catch: java.lang.Throwable -> Le
            r2.a(r0)     // Catch: java.lang.Throwable -> Le
            com.amap.api.location.AMapLocationClientOption r0 = r1.b     // Catch: java.lang.Throwable -> Le
            r2.a(r0)     // Catch: java.lang.Throwable -> Le
            r2.b(r3)     // Catch: java.lang.Throwable -> Le
            return
        Le:
            r2 = move-exception
            java.lang.String r3 = "ALManager"
            java.lang.String r0 = "initApsBase"
            com.loc.fr.a(r2, r3, r0)
            return
    }

    private static void a(com.loc.er r1, com.loc.ew r2) {
            if (r2 == 0) goto L14
            int r0 = r2.getErrorCode()     // Catch: java.lang.Throwable -> Lc
            if (r0 != 0) goto L14
            r1.b(r2)     // Catch: java.lang.Throwable -> Lc
            goto L14
        Lc:
            r1 = move-exception
            java.lang.String r2 = "ALManager"
            java.lang.String r0 = "apsLocation:doFirstAddCache"
            com.loc.fr.a(r1, r2, r0)
        L14:
            return
    }

    static boolean a(com.loc.d r0, boolean r1) {
            r0.F = r1
            return r1
    }

    private com.loc.ew b(com.loc.er r14) {
            r13 = this;
            java.lang.String r0 = "ALManager"
            r1 = 0
            r13.a = r1
            com.loc.eq r2 = new com.loc.eq
            r2.<init>()
            long r3 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L13e
            r2.c(r3)     // Catch: java.lang.Throwable -> L13e
            java.lang.String r3 = com.amap.api.location.AMapLocationClientOption.getAPIKEY()     // Catch: java.lang.Throwable -> L21
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L21
            if (r4 != 0) goto L27
            android.content.Context r4 = r13.D     // Catch: java.lang.Throwable -> L21
            com.loc.m.a(r4, r3)     // Catch: java.lang.Throwable -> L21
            goto L27
        L21:
            r3 = move-exception
            java.lang.String r4 = "apsLocation setAuthKey"
            com.loc.fr.a(r3, r0, r4)     // Catch: java.lang.Throwable -> L13e
        L27:
            java.lang.String r3 = com.amap.api.location.UmidtokenInfo.getUmidtoken()     // Catch: java.lang.Throwable -> L35
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L35
            if (r4 != 0) goto L3b
            com.loc.o.a(r3)     // Catch: java.lang.Throwable -> L35
            goto L3b
        L35:
            r3 = move-exception
            java.lang.String r4 = "apsLocation setUmidToken"
            com.loc.fr.a(r3, r0, r4)     // Catch: java.lang.Throwable -> L13e
        L3b:
            r13.a(r14, r2)     // Catch: java.lang.Throwable -> L13e
            boolean r3 = com.loc.fq.m()     // Catch: java.lang.Throwable -> L13e
            r4 = 0
            com.amap.api.location.AMapLocationClientOption r5 = r13.L     // Catch: java.lang.Throwable -> L91
            boolean r5 = r5.getCacheCallBack()     // Catch: java.lang.Throwable -> L91
            if (r5 == 0) goto L8c
            com.amap.api.location.AMapLocationClientOption r5 = r13.L     // Catch: java.lang.Throwable -> L91
            boolean r5 = r5.getCacheCallBack()     // Catch: java.lang.Throwable -> L91
            com.loc.ew r5 = r13.a(r14, r5)     // Catch: java.lang.Throwable -> L91
            if (r5 == 0) goto L97
            long r6 = r5.getTime()     // Catch: java.lang.Throwable -> L91
            boolean r6 = com.loc.fq.a(r6)     // Catch: java.lang.Throwable -> L91
            if (r6 == 0) goto L62
            goto L98
        L62:
            com.amap.api.location.AMapLocationClientOption r6 = r13.L     // Catch: java.lang.Throwable -> L91
            boolean r6 = r6.getCacheCallBack()     // Catch: java.lang.Throwable -> L91
            if (r6 == 0) goto L97
            com.amap.api.location.AMapLocationClientOption r6 = r13.L     // Catch: java.lang.Throwable -> L91
            int r6 = r6.getCacheTimeOut()     // Catch: java.lang.Throwable -> L91
            long r7 = com.loc.fz.a()     // Catch: java.lang.Throwable -> L91
            long r9 = r5.getTime()     // Catch: java.lang.Throwable -> L91
            long r7 = r7 - r9
            r9 = 0
            int r11 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r11 <= 0) goto L97
            long r9 = (long) r6     // Catch: java.lang.Throwable -> L91
            int r6 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r6 >= 0) goto L97
            r13.a = r5     // Catch: java.lang.Throwable -> L91
            r6 = 10
            r5.setLocationType(r6)     // Catch: java.lang.Throwable -> L91
            goto L97
        L8c:
            com.loc.ew r5 = r13.a(r14, r4)     // Catch: java.lang.Throwable -> L91
            goto L98
        L91:
            r5 = move-exception
            java.lang.String r6 = "apscach"
            com.loc.fr.a(r5, r0, r6)     // Catch: java.lang.Throwable -> L13e
        L97:
            r5 = r1
        L98:
            r6 = 1
            if (r5 != 0) goto Lbe
            if (r3 != 0) goto L9f
            r7 = 1
            goto La0
        L9f:
            r7 = 0
        La0:
            com.loc.ew r5 = r14.a(r7, r2)     // Catch: java.lang.Throwable -> Lb1
            if (r5 == 0) goto Lad
            int r7 = r5.getErrorCode()     // Catch: java.lang.Throwable -> Lb1
            if (r7 != 0) goto Lad
            r4 = 1
        Lad:
            r7 = r5
            r5 = r4
            r4 = 1
            goto Lc0
        Lb1:
            r7 = move-exception
            java.lang.String r8 = "apsLocation:doFirstNetLocate"
            com.loc.fr.a(r7, r0, r8)     // Catch: java.lang.Throwable -> Lba
            r7 = r5
            r4 = 1
            goto Lbf
        Lba:
            r1 = move-exception
            r7 = r5
            goto L141
        Lbe:
            r7 = r5
        Lbf:
            r5 = 0
        Lc0:
            if (r7 == 0) goto Ld1
            java.lang.String r1 = r7.k()     // Catch: java.lang.Throwable -> Lce
            com.amap.api.location.AMapLocation r8 = r7.clone()     // Catch: java.lang.Throwable -> Lce
            r12 = r8
            r8 = r1
            r1 = r12
            goto Ld2
        Lce:
            r1 = move-exception
            goto L141
        Ld1:
            r8 = r1
        Ld2:
            com.amap.api.location.AMapLocationClientOption r9 = r13.b     // Catch: java.lang.Throwable -> Leb
            boolean r9 = r9.isLocationCacheEnable()     // Catch: java.lang.Throwable -> Leb
            if (r9 == 0) goto Lf1
            com.loc.j r9 = r13.k     // Catch: java.lang.Throwable -> Leb
            if (r9 == 0) goto Lf1
            com.loc.j r9 = r13.k     // Catch: java.lang.Throwable -> Leb
            com.amap.api.location.AMapLocationClientOption r10 = r13.b     // Catch: java.lang.Throwable -> Leb
            long r10 = r10.getLastLocationLifeCycle()     // Catch: java.lang.Throwable -> Leb
            com.amap.api.location.AMapLocation r1 = r9.a(r1, r8, r10)     // Catch: java.lang.Throwable -> Leb
            goto Lf1
        Leb:
            r8 = move-exception
            java.lang.String r9 = "fixLastLocation"
            com.loc.fr.a(r8, r0, r9)     // Catch: java.lang.Throwable -> Lce
        Lf1:
            com.amap.api.location.AMapLocationClientOption r8 = r13.L     // Catch: java.lang.Throwable -> L104
            boolean r8 = r8.getCacheCallBack()     // Catch: java.lang.Throwable -> L104
            if (r8 == 0) goto L104
            com.loc.d$c r8 = r13.c     // Catch: java.lang.Throwable -> L104
            if (r8 == 0) goto L104
            com.loc.d$c r8 = r13.c     // Catch: java.lang.Throwable -> L104
            r9 = 13
            r8.removeMessages(r9)     // Catch: java.lang.Throwable -> L104
        L104:
            android.os.Bundle r8 = new android.os.Bundle     // Catch: java.lang.Throwable -> L127
            r8.<init>()     // Catch: java.lang.Throwable -> L127
            if (r1 == 0) goto L11e
            java.lang.String r9 = "loc"
            r8.putParcelable(r9, r1)     // Catch: java.lang.Throwable -> L127
            java.lang.String r1 = "nb"
            java.lang.String r9 = r7.k()     // Catch: java.lang.Throwable -> L127
            r8.putString(r1, r9)     // Catch: java.lang.Throwable -> L127
            java.lang.String r1 = "statics"
            r8.putParcelable(r1, r2)     // Catch: java.lang.Throwable -> L127
        L11e:
            r13.a(r8)     // Catch: java.lang.Throwable -> L127
            if (r5 == 0) goto L12d
            a(r14, r7)     // Catch: java.lang.Throwable -> L127
            goto L12d
        L127:
            r1 = move-exception
            java.lang.String r2 = "apsLocation:callback"
            com.loc.fr.a(r1, r0, r2)     // Catch: java.lang.Throwable -> Lce
        L12d:
            if (r4 == 0) goto L13a
            if (r3 == 0) goto L13a
            boolean r1 = com.loc.d.g     // Catch: java.lang.Throwable -> Lce
            if (r1 != 0) goto L13a
            com.loc.d.g = r6     // Catch: java.lang.Throwable -> Lce
            a(r14)     // Catch: java.lang.Throwable -> Lce
        L13a:
            r14.e()     // Catch: java.lang.Throwable -> L147
            goto L147
        L13e:
            r2 = move-exception
            r7 = r1
            r1 = r2
        L141:
            java.lang.String r2 = "apsLocation"
            com.loc.fr.a(r1, r0, r2)     // Catch: java.lang.Throwable -> L148
            goto L13a
        L147:
            return r7
        L148:
            r0 = move-exception
            r14.e()     // Catch: java.lang.Throwable -> L14c
        L14c:
            throw r0
    }

    static com.loc.g b(com.loc.d r0) {
            com.loc.g r0 = r0.E
            return r0
    }

    private void b(android.os.Looper r4) {
            r3 = this;
            java.lang.String r0 = "ALManager"
            if (r4 != 0) goto L1e
            android.os.Looper r4 = android.os.Looper.myLooper()     // Catch: java.lang.Throwable -> L26
            if (r4 != 0) goto L18
            com.loc.d$c r4 = new com.loc.d$c     // Catch: java.lang.Throwable -> L26
            android.content.Context r1 = r3.D     // Catch: java.lang.Throwable -> L26
            android.os.Looper r1 = r1.getMainLooper()     // Catch: java.lang.Throwable -> L26
            r4.<init>(r3, r1)     // Catch: java.lang.Throwable -> L26
        L15:
            r3.c = r4     // Catch: java.lang.Throwable -> L26
            goto L2c
        L18:
            com.loc.d$c r4 = new com.loc.d$c     // Catch: java.lang.Throwable -> L26
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L26
            goto L15
        L1e:
            com.loc.d$c r1 = new com.loc.d$c     // Catch: java.lang.Throwable -> L26
            r1.<init>(r3, r4)     // Catch: java.lang.Throwable -> L26
            r3.c = r1     // Catch: java.lang.Throwable -> L26
            goto L2c
        L26:
            r4 = move-exception
            java.lang.String r1 = "init 1"
            com.loc.fr.a(r4, r0, r1)
        L2c:
            com.loc.j r4 = new com.loc.j     // Catch: java.lang.Throwable -> L36
            android.content.Context r1 = r3.D     // Catch: java.lang.Throwable -> L36
            r4.<init>(r1)     // Catch: java.lang.Throwable -> L36
            r3.k = r4     // Catch: java.lang.Throwable -> L36
            goto L3c
        L36:
            r4 = move-exception
            java.lang.String r1 = "init 2"
            com.loc.fr.a(r4, r0, r1)     // Catch: java.lang.Throwable -> L5b
        L3c:
            com.loc.d$b r4 = new com.loc.d$b     // Catch: java.lang.Throwable -> L5b
            java.lang.String r1 = "amapLocManagerThread"
            r4.<init>(r1, r3)     // Catch: java.lang.Throwable -> L5b
            r3.p = r4     // Catch: java.lang.Throwable -> L5b
            r1 = 5
            r4.setPriority(r1)     // Catch: java.lang.Throwable -> L5b
            com.loc.d$b r4 = r3.p     // Catch: java.lang.Throwable -> L5b
            r4.start()     // Catch: java.lang.Throwable -> L5b
            com.loc.d$b r4 = r3.p     // Catch: java.lang.Throwable -> L5b
            android.os.Looper r4 = r4.getLooper()     // Catch: java.lang.Throwable -> L5b
            com.loc.d$a r4 = r3.a(r4)     // Catch: java.lang.Throwable -> L5b
            r3.A = r4     // Catch: java.lang.Throwable -> L5b
            goto L61
        L5b:
            r4 = move-exception
            java.lang.String r1 = "init 5"
            com.loc.fr.a(r4, r0, r1)
        L61:
            com.loc.h r4 = new com.loc.h     // Catch: java.lang.Throwable -> L78
            android.content.Context r1 = r3.D     // Catch: java.lang.Throwable -> L78
            com.loc.d$c r2 = r3.c     // Catch: java.lang.Throwable -> L78
            r4.<init>(r1, r2)     // Catch: java.lang.Throwable -> L78
            r3.d = r4     // Catch: java.lang.Throwable -> L78
            com.loc.g r4 = new com.loc.g     // Catch: java.lang.Throwable -> L78
            android.content.Context r1 = r3.D     // Catch: java.lang.Throwable -> L78
            com.loc.d$c r2 = r3.c     // Catch: java.lang.Throwable -> L78
            r4.<init>(r1, r2)     // Catch: java.lang.Throwable -> L78
            r3.E = r4     // Catch: java.lang.Throwable -> L78
            goto L7e
        L78:
            r4 = move-exception
            java.lang.String r1 = "init 3"
            com.loc.fr.a(r4, r0, r1)
        L7e:
            com.loc.fx r4 = r3.t
            if (r4 != 0) goto L89
            com.loc.fx r4 = new com.loc.fx
            r4.<init>()
            r3.t = r4
        L89:
            android.content.Context r4 = r3.D
            a(r4)
            return
    }

    private void b(android.os.Message r5) {
            r4 = this;
            java.lang.Object r5 = r5.obj     // Catch: java.lang.Throwable -> L3b
            com.amap.api.location.AMapLocation r5 = (com.amap.api.location.AMapLocation) r5     // Catch: java.lang.Throwable -> L3b
            boolean r0 = r4.h     // Catch: java.lang.Throwable -> L3b
            r1 = 0
            if (r0 == 0) goto L2c
            android.os.Messenger r0 = r4.l     // Catch: java.lang.Throwable -> L3b
            if (r0 == 0) goto L2c
            android.os.Bundle r0 = new android.os.Bundle     // Catch: java.lang.Throwable -> L3b
            r0.<init>()     // Catch: java.lang.Throwable -> L3b
            java.lang.String r2 = "optBundle"
            com.amap.api.location.AMapLocationClientOption r3 = r4.b     // Catch: java.lang.Throwable -> L3b
            android.os.Bundle r3 = com.loc.fr.a(r3)     // Catch: java.lang.Throwable -> L3b
            r0.putBundle(r2, r3)     // Catch: java.lang.Throwable -> L3b
            r2 = 0
            r4.a(r2, r0)     // Catch: java.lang.Throwable -> L3b
            boolean r0 = r4.G     // Catch: java.lang.Throwable -> L3b
            if (r0 == 0) goto L2a
            r0 = 13
            r4.a(r0, r1)     // Catch: java.lang.Throwable -> L3b
        L2a:
            r4.h = r2     // Catch: java.lang.Throwable -> L3b
        L2c:
            r4.a(r5, r1)     // Catch: java.lang.Throwable -> L3b
            r5 = 1025(0x401, float:1.436E-42)
            r4.a(r5)     // Catch: java.lang.Throwable -> L3b
            r2 = 300000(0x493e0, double:1.482197E-318)
            r4.a(r5, r1, r2)     // Catch: java.lang.Throwable -> L3b
            return
        L3b:
            r5 = move-exception
            java.lang.String r0 = "ALManager"
            java.lang.String r1 = "resultGpsLocationSuccess"
            com.loc.fr.a(r5, r0, r1)
            return
    }

    private static void b(com.amap.api.location.AMapLocation r5) {
            if (r5 != 0) goto L3
            return
        L3:
            r0 = 2
            int r1 = r5.getLocationType()     // Catch: java.lang.Throwable -> L20
            if (r0 == r1) goto L11
            r0 = 4
            int r1 = r5.getLocationType()     // Catch: java.lang.Throwable -> L20
            if (r0 != r1) goto L20
        L11:
            long r0 = r5.getTime()     // Catch: java.lang.Throwable -> L20
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L20
            int r4 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r4 <= 0) goto L20
            r5.setTime(r2)     // Catch: java.lang.Throwable -> L20
        L20:
            return
    }

    static void b(com.loc.d r0, android.os.Message r1) {
            r0.a(r1)
            return
    }

    static void b(com.loc.d r0, com.amap.api.location.AMapLocation r1) {
            r0.g(r1)
            return
    }

    static void b(com.loc.d r0, com.amap.api.location.AMapLocationListener r1) {
            r0.d(r1)
            return
    }

    static boolean b(com.loc.d r0, boolean r1) {
            r0.I = r1
            return r1
    }

    static boolean b(boolean r0) {
            com.loc.d.J = r0
            return r0
    }

    static android.content.Context c(com.loc.d r0) {
            android.content.Context r0 = r0.D
            return r0
    }

    private void c(android.os.Message r5) {
            r4 = this;
            java.lang.String r0 = "h"
            java.lang.String r1 = "i"
            if (r5 != 0) goto L7
            return
        L7:
            android.os.Bundle r5 = r5.getData()     // Catch: java.lang.Throwable -> L2d
            if (r5 != 0) goto Le
            return
        Le:
            r2 = 0
            int r2 = r5.getInt(r1, r2)     // Catch: java.lang.Throwable -> L2d
            android.os.Parcelable r5 = r5.getParcelable(r0)     // Catch: java.lang.Throwable -> L2d
            android.app.Notification r5 = (android.app.Notification) r5     // Catch: java.lang.Throwable -> L2d
            android.content.Intent r3 = r4.q()     // Catch: java.lang.Throwable -> L2d
            r3.putExtra(r1, r2)     // Catch: java.lang.Throwable -> L2d
            r3.putExtra(r0, r5)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r5 = "g"
            r0 = 1
            r3.putExtra(r5, r0)     // Catch: java.lang.Throwable -> L2d
            r4.a(r3, r0)     // Catch: java.lang.Throwable -> L2d
            return
        L2d:
            r5 = move-exception
            java.lang.String r0 = "ALManager"
            java.lang.String r1 = "doEnableBackgroundLocation"
            com.loc.fr.a(r5, r0, r1)
            return
    }

    private void c(com.amap.api.location.AMapLocation r9) {
            r8 = this;
            if (r9 == 0) goto L88
            java.lang.String r0 = r9.getLocationDetail()     // Catch: java.lang.Throwable -> L85
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L85
            if (r1 == 0) goto L12
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L85
            r0.<init>()     // Catch: java.lang.Throwable -> L85
            goto L18
        L12:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L85
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L85
            r0 = r1
        L18:
            android.content.Context r1 = r8.D     // Catch: java.lang.Throwable -> L85
            java.lang.String r2 = "EYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19XSUZJX1NUQVRF"
            boolean r1 = com.loc.fz.c(r1, r2)     // Catch: java.lang.Throwable -> L85
            android.content.Context r2 = r8.D     // Catch: java.lang.Throwable -> L85
            java.lang.String r3 = "WYW5kcm9pZC5wZXJtaXNzaW9uLkNIQU5HRV9XSUZJX1NUQVRF"
            boolean r2 = com.loc.fz.c(r2, r3)     // Catch: java.lang.Throwable -> L85
            android.content.Context r3 = r8.D     // Catch: java.lang.Throwable -> L85
            java.lang.String r4 = "WYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19MT0NBVElPTl9FWFRSQV9DT01NQU5EUw=="
            boolean r3 = com.loc.fz.c(r3, r4)     // Catch: java.lang.Throwable -> L85
            android.content.Context r4 = r8.D     // Catch: java.lang.Throwable -> L85
            java.lang.String r5 = "EYW5kcm9pZC5wZXJtaXNzaW9uLlJFQURfUEhPTkVfU1RBVEU="
            boolean r4 = com.loc.fz.c(r4, r5)     // Catch: java.lang.Throwable -> L85
            android.content.Context r5 = r8.D     // Catch: java.lang.Throwable -> L85
            java.lang.String r6 = "EYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19GSU5FX0xPQ0FUSU9O"
            boolean r5 = com.loc.fz.c(r5, r6)     // Catch: java.lang.Throwable -> L85
            android.content.Context r6 = r8.D     // Catch: java.lang.Throwable -> L85
            java.lang.String r7 = "EYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19DT0FSU0VfTE9DQVRJT04="
            boolean r6 = com.loc.fz.c(r6, r7)     // Catch: java.lang.Throwable -> L85
            if (r1 == 0) goto L4d
            java.lang.String r1 = "#pm1"
            goto L4f
        L4d:
            java.lang.String r1 = "#pm0"
        L4f:
            r0.append(r1)     // Catch: java.lang.Throwable -> L85
            java.lang.String r1 = "1"
            java.lang.String r7 = "0"
            if (r2 == 0) goto L5a
            r2 = r1
            goto L5b
        L5a:
            r2 = r7
        L5b:
            r0.append(r2)     // Catch: java.lang.Throwable -> L85
            if (r3 == 0) goto L62
            r2 = r1
            goto L63
        L62:
            r2 = r7
        L63:
            r0.append(r2)     // Catch: java.lang.Throwable -> L85
            if (r4 == 0) goto L6a
            r2 = r1
            goto L6b
        L6a:
            r2 = r7
        L6b:
            r0.append(r2)     // Catch: java.lang.Throwable -> L85
            if (r5 == 0) goto L72
            r2 = r1
            goto L73
        L72:
            r2 = r7
        L73:
            r0.append(r2)     // Catch: java.lang.Throwable -> L85
            if (r6 == 0) goto L79
            goto L7a
        L79:
            r1 = r7
        L7a:
            r0.append(r1)     // Catch: java.lang.Throwable -> L85
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L85
            r9.setLocationDetail(r0)     // Catch: java.lang.Throwable -> L85
            goto L88
        L85:
            com.loc.ft.b()
        L88:
            return
    }

    private void c(com.amap.api.location.AMapLocationListener r2) {
            r1 = this;
            if (r2 == 0) goto L1b
            java.util.ArrayList<com.amap.api.location.AMapLocationListener> r0 = r1.e
            if (r0 != 0) goto Ld
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.e = r0
        Ld:
            java.util.ArrayList<com.amap.api.location.AMapLocationListener> r0 = r1.e
            boolean r0 = r0.contains(r2)
            if (r0 != 0) goto L1a
            java.util.ArrayList<com.amap.api.location.AMapLocationListener> r0 = r1.e
            r0.add(r2)
        L1a:
            return
        L1b:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "listener参数不能为null"
            r2.<init>(r0)
            throw r2
    }

    static void c(com.loc.d r0, android.os.Message r1) {
            r0.c(r1)
            return
    }

    private void d(android.os.Message r3) {
            r2 = this;
            java.lang.String r0 = "j"
            if (r3 != 0) goto L5
            return
        L5:
            android.os.Bundle r3 = r3.getData()     // Catch: java.lang.Throwable -> L23
            if (r3 != 0) goto Lc
            return
        Lc:
            r1 = 1
            boolean r3 = r3.getBoolean(r0, r1)     // Catch: java.lang.Throwable -> L23
            android.content.Intent r1 = r2.q()     // Catch: java.lang.Throwable -> L23
            r1.putExtra(r0, r3)     // Catch: java.lang.Throwable -> L23
            java.lang.String r3 = "g"
            r0 = 2
            r1.putExtra(r3, r0)     // Catch: java.lang.Throwable -> L23
            r3 = 0
            r2.a(r1, r3)     // Catch: java.lang.Throwable -> L23
            return
        L23:
            r3 = move-exception
            java.lang.String r0 = "ALManager"
            java.lang.String r1 = "doDisableBackgroundLocation"
            com.loc.fr.a(r3, r0, r1)
            return
    }

    private void d(com.amap.api.location.AMapLocation r3) {
            r2 = this;
            com.loc.d$c r0 = r2.c
            android.os.Message r0 = r0.obtainMessage()
            r1 = 10
            r0.what = r1
            r0.obj = r3
            com.loc.d$c r3 = r2.c
            r3.sendMessage(r0)
            return
    }

    private void d(com.amap.api.location.AMapLocationListener r2) {
            r1 = this;
            java.util.ArrayList<com.amap.api.location.AMapLocationListener> r0 = r1.e
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L15
            java.util.ArrayList<com.amap.api.location.AMapLocationListener> r0 = r1.e
            boolean r0 = r0.contains(r2)
            if (r0 == 0) goto L15
            java.util.ArrayList<com.amap.api.location.AMapLocationListener> r0 = r1.e
            r0.remove(r2)
        L15:
            java.util.ArrayList<com.amap.api.location.AMapLocationListener> r2 = r1.e
            boolean r2 = r2.isEmpty()
            if (r2 == 0) goto L20
            r1.l()
        L20:
            return
    }

    static void d(com.loc.d r0) {
            r0.p()
            return
    }

    static void d(com.loc.d r0, android.os.Message r1) {
            r0.d(r1)
            return
    }

    private synchronized void e(com.amap.api.location.AMapLocation r4) {
            r3 = this;
            monitor-enter(r3)
            if (r4 != 0) goto L14
            com.amap.api.location.AMapLocation r4 = new com.amap.api.location.AMapLocation     // Catch: java.lang.Throwable -> Lab
            java.lang.String r0 = ""
            r4.<init>(r0)     // Catch: java.lang.Throwable -> Lab
            r0 = 8
            r4.setErrorCode(r0)     // Catch: java.lang.Throwable -> Lab
            java.lang.String r0 = "coarse amapLocation is null#2005"
            r4.setLocationDetail(r0)     // Catch: java.lang.Throwable -> Lab
        L14:
            com.amap.api.location.AMapLocationQualityReport r0 = r3.x     // Catch: java.lang.Throwable -> Lab
            if (r0 != 0) goto L1f
            com.amap.api.location.AMapLocationQualityReport r0 = new com.amap.api.location.AMapLocationQualityReport     // Catch: java.lang.Throwable -> Lab
            r0.<init>()     // Catch: java.lang.Throwable -> Lab
            r3.x = r0     // Catch: java.lang.Throwable -> Lab
        L1f:
            com.amap.api.location.AMapLocationQualityReport r0 = r3.x     // Catch: java.lang.Throwable -> Lab
            com.amap.api.location.AMapLocationClientOption r1 = r3.b     // Catch: java.lang.Throwable -> Lab
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r1 = r1.getLocationMode()     // Catch: java.lang.Throwable -> Lab
            r0.setLocationMode(r1)     // Catch: java.lang.Throwable -> Lab
            com.loc.g r0 = r3.E     // Catch: java.lang.Throwable -> Lab
            if (r0 == 0) goto L42
            com.amap.api.location.AMapLocationQualityReport r0 = r3.x     // Catch: java.lang.Throwable -> Lab
            int r1 = r4.getSatellites()     // Catch: java.lang.Throwable -> Lab
            r0.setGPSSatellites(r1)     // Catch: java.lang.Throwable -> Lab
            com.amap.api.location.AMapLocationQualityReport r0 = r3.x     // Catch: java.lang.Throwable -> Lab
            com.loc.g r1 = r3.E     // Catch: java.lang.Throwable -> Lab
            int r1 = r1.b()     // Catch: java.lang.Throwable -> Lab
            r0.setGpsStatus(r1)     // Catch: java.lang.Throwable -> Lab
        L42:
            android.content.Context r0 = r3.D     // Catch: java.lang.Throwable -> Lab
            boolean r0 = com.loc.fz.g(r0)     // Catch: java.lang.Throwable -> Lab
            com.amap.api.location.AMapLocationQualityReport r1 = r3.x     // Catch: java.lang.Throwable -> Lab
            r1.setWifiAble(r0)     // Catch: java.lang.Throwable -> Lab
            com.amap.api.location.AMapLocationQualityReport r0 = r3.x     // Catch: java.lang.Throwable -> Lab
            android.content.Context r1 = r3.D     // Catch: java.lang.Throwable -> Lab
            java.lang.String r1 = com.loc.fz.h(r1)     // Catch: java.lang.Throwable -> Lab
            r0.setNetworkType(r1)     // Catch: java.lang.Throwable -> Lab
            com.amap.api.location.AMapLocationQualityReport r0 = r3.x     // Catch: java.lang.Throwable -> Lab
            r1 = 0
            r0.setNetUseTime(r1)     // Catch: java.lang.Throwable -> Lab
            com.amap.api.location.AMapLocationQualityReport r0 = r3.x     // Catch: java.lang.Throwable -> Lab
            boolean r1 = com.loc.d.J     // Catch: java.lang.Throwable -> Lab
            r0.setInstallHighDangerMockApp(r1)     // Catch: java.lang.Throwable -> Lab
            com.amap.api.location.AMapLocationQualityReport r0 = r3.x     // Catch: java.lang.Throwable -> Lab
            r4.setLocationQualityReport(r0)     // Catch: java.lang.Throwable -> Lab
            boolean r0 = r3.G     // Catch: java.lang.Throwable -> L8e
            if (r0 == 0) goto L96
            android.content.Context r0 = r3.D     // Catch: java.lang.Throwable -> L8e
            com.loc.fx.a(r0, r4)     // Catch: java.lang.Throwable -> L8e
            com.amap.api.location.AMapLocation r0 = r4.clone()     // Catch: java.lang.Throwable -> L8e
            r3.d(r0)     // Catch: java.lang.Throwable -> L8e
            android.content.Context r0 = r3.D     // Catch: java.lang.Throwable -> L8e
            com.loc.fw r0 = com.loc.fw.a(r0)     // Catch: java.lang.Throwable -> L8e
            r0.a(r4)     // Catch: java.lang.Throwable -> L8e
            android.content.Context r4 = r3.D     // Catch: java.lang.Throwable -> L8e
            com.loc.fw r4 = com.loc.fw.a(r4)     // Catch: java.lang.Throwable -> L8e
            r4.b()     // Catch: java.lang.Throwable -> L8e
            goto L96
        L8e:
            r4 = move-exception
            java.lang.String r0 = "ALManager"
            java.lang.String r1 = "handlerCoarseLocation part"
            com.loc.fr.a(r4, r0, r1)     // Catch: java.lang.Throwable -> Lab
        L96:
            boolean r4 = r3.q     // Catch: java.lang.Throwable -> Lab
            if (r4 == 0) goto L9c
            monitor-exit(r3)
            return
        L9c:
            com.loc.g r4 = r3.E     // Catch: java.lang.Throwable -> Lab
            if (r4 == 0) goto La3
            r3.l()     // Catch: java.lang.Throwable -> Lab
        La3:
            r4 = 14
            r0 = 0
            r3.a(r4, r0)     // Catch: java.lang.Throwable -> Lab
            monitor-exit(r3)
            return
        Lab:
            r4 = move-exception
            java.lang.String r0 = "ALManager"
            java.lang.String r1 = "handlerCoarseLocation part2"
            com.loc.fr.a(r4, r0, r1)     // Catch: java.lang.Throwable -> Lb5
            monitor-exit(r3)
            return
        Lb5:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    static void e(com.loc.d r0) {
            r0.j()
            return
    }

    private void f(com.amap.api.location.AMapLocation r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            r0 = 0
            com.loc.fi r1 = com.loc.j.b     // Catch: java.lang.Throwable -> L1c
            if (r1 != 0) goto L13
            com.loc.j r1 = r2.k     // Catch: java.lang.Throwable -> L1c
            if (r1 == 0) goto L19
            com.loc.j r0 = r2.k     // Catch: java.lang.Throwable -> L1c
            com.amap.api.location.AMapLocation r0 = r0.b()     // Catch: java.lang.Throwable -> L1c
            goto L19
        L13:
            com.loc.fi r0 = com.loc.j.b     // Catch: java.lang.Throwable -> L1c
            com.amap.api.location.AMapLocation r0 = r0.a()     // Catch: java.lang.Throwable -> L1c
        L19:
            com.loc.fx.a(r0, r3)     // Catch: java.lang.Throwable -> L1c
        L1c:
            return
    }

    static void f(com.loc.d r0) {
            r0.l()
            return
    }

    private void g(com.amap.api.location.AMapLocation r4) {
            r3 = this;
            boolean r0 = r3.i     // Catch: java.lang.Throwable -> L2c
            if (r0 == 0) goto L28
            android.os.Messenger r0 = r3.l     // Catch: java.lang.Throwable -> L2c
            if (r0 == 0) goto L28
            android.os.Bundle r0 = new android.os.Bundle     // Catch: java.lang.Throwable -> L2c
            r0.<init>()     // Catch: java.lang.Throwable -> L2c
            java.lang.String r1 = "optBundle"
            com.amap.api.location.AMapLocationClientOption r2 = r3.b     // Catch: java.lang.Throwable -> L2c
            android.os.Bundle r2 = com.loc.fr.a(r2)     // Catch: java.lang.Throwable -> L2c
            r0.putBundle(r1, r2)     // Catch: java.lang.Throwable -> L2c
            r1 = 0
            r3.a(r1, r0)     // Catch: java.lang.Throwable -> L2c
            boolean r0 = r3.G     // Catch: java.lang.Throwable -> L2c
            if (r0 == 0) goto L26
            r0 = 13
            r2 = 0
            r3.a(r0, r2)     // Catch: java.lang.Throwable -> L2c
        L26:
            r3.i = r1     // Catch: java.lang.Throwable -> L2c
        L28:
            r3.e(r4)     // Catch: java.lang.Throwable -> L2c
            return
        L2c:
            r4 = move-exception
            java.lang.String r0 = "ALManager"
            java.lang.String r1 = "resultGpsLocationSuccess"
            com.loc.fr.a(r4, r0, r1)
            return
    }

    static void g(com.loc.d r0) {
            r0.r()
            return
    }

    private void h() {
            r3 = this;
            java.lang.Object r0 = r3.s
            monitor-enter(r0)
            com.loc.d$a r1 = r3.A     // Catch: java.lang.Throwable -> L11
            r2 = 0
            if (r1 == 0) goto Ld
            com.loc.d$a r1 = r3.A     // Catch: java.lang.Throwable -> L11
            r1.removeCallbacksAndMessages(r2)     // Catch: java.lang.Throwable -> L11
        Ld:
            r3.A = r2     // Catch: java.lang.Throwable -> L11
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
            return
        L11:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
            throw r1
    }

    static void h(com.loc.d r0) {
            r0.n()
            return
    }

    static void i(com.loc.d r1) {
            r0 = 1025(0x401, float:1.436E-42)
            r1.a(r0)
            return
    }

    private boolean i() {
            r6 = this;
            r0 = 0
            r1 = 0
        L2:
            r2 = 1
            android.os.Messenger r3 = r6.l     // Catch: java.lang.Throwable -> L51
            if (r3 != 0) goto L11
            r3 = 100
            java.lang.Thread.sleep(r3)     // Catch: java.lang.Throwable -> L51
            int r1 = r1 + r2
            r3 = 50
            if (r1 < r3) goto L2
        L11:
            android.os.Messenger r1 = r6.l     // Catch: java.lang.Throwable -> L51
            if (r1 != 0) goto L4f
            android.os.Message r1 = android.os.Message.obtain()     // Catch: java.lang.Throwable -> L51
            android.os.Bundle r3 = new android.os.Bundle     // Catch: java.lang.Throwable -> L51
            r3.<init>()     // Catch: java.lang.Throwable -> L51
            com.amap.api.location.AMapLocation r4 = new com.amap.api.location.AMapLocation     // Catch: java.lang.Throwable -> L51
            java.lang.String r5 = ""
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L51
            r5 = 10
            r4.setErrorCode(r5)     // Catch: java.lang.Throwable -> L51
            android.content.Context r5 = r6.D     // Catch: java.lang.Throwable -> L51
            android.content.Context r5 = r5.getApplicationContext()     // Catch: java.lang.Throwable -> L51
            boolean r5 = com.loc.fz.k(r5)     // Catch: java.lang.Throwable -> L51
            if (r5 != 0) goto L3c
            java.lang.String r5 = "请检查配置文件是否配置服务，并且manifest中service标签是否配置在application标签内#1003"
        L38:
            r4.setLocationDetail(r5)     // Catch: java.lang.Throwable -> L51
            goto L3f
        L3c:
            java.lang.String r5 = "启动ApsServcie失败#1001"
            goto L38
        L3f:
            java.lang.String r5 = "loc"
            r3.putParcelable(r5, r4)     // Catch: java.lang.Throwable -> L51
            r1.setData(r3)     // Catch: java.lang.Throwable -> L51
            r1.what = r2     // Catch: java.lang.Throwable -> L51
            com.loc.d$c r2 = r6.c     // Catch: java.lang.Throwable -> L51
            r2.sendMessage(r1)     // Catch: java.lang.Throwable -> L51
            goto L59
        L4f:
            r0 = 1
            goto L59
        L51:
            r1 = move-exception
            java.lang.String r2 = "ALManager"
            java.lang.String r3 = "checkAPSManager"
            com.loc.fr.a(r1, r2, r3)
        L59:
            if (r0 != 0) goto L70
            android.content.Context r1 = r6.D
            android.content.Context r1 = r1.getApplicationContext()
            boolean r1 = com.loc.fz.k(r1)
            r2 = 0
            if (r1 != 0) goto L6b
            r1 = 2103(0x837, float:2.947E-42)
            goto L6d
        L6b:
            r1 = 2101(0x835, float:2.944E-42)
        L6d:
            com.loc.fx.a(r2, r1)
        L70:
            return r0
    }

    private synchronized void j() {
            r10 = this;
            monitor-enter(r10)
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L117
            r1 = 29
            if (r0 >= r1) goto L21
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L117
            r2 = 23
            if (r0 < r2) goto L21
            android.content.Context r0 = r10.D     // Catch: java.lang.Throwable -> L117
            java.lang.String r2 = "EYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19DT0FSU0VfTE9DQVRJT04="
            boolean r0 = com.loc.fz.c(r0, r2)     // Catch: java.lang.Throwable -> L117
            if (r0 != 0) goto L21
            android.content.Context r0 = r10.D     // Catch: java.lang.Throwable -> L117
            java.lang.String r2 = "EYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19GSU5FX0xPQ0FUSU9O"
            boolean r0 = com.loc.fz.c(r0, r2)     // Catch: java.lang.Throwable -> L117
            if (r0 == 0) goto L7d
        L21:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L117
            r2 = 31
            if (r0 >= r2) goto L3f
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L117
            if (r0 < r1) goto L3f
            android.content.Context r0 = r10.D     // Catch: java.lang.Throwable -> L117
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo()     // Catch: java.lang.Throwable -> L117
            int r0 = r0.targetSdkVersion     // Catch: java.lang.Throwable -> L117
            if (r0 < r1) goto L3f
            android.content.Context r0 = r10.D     // Catch: java.lang.Throwable -> L117
            java.lang.String r3 = "EYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19GSU5FX0xPQ0FUSU9O"
            boolean r0 = com.loc.fz.c(r0, r3)     // Catch: java.lang.Throwable -> L117
            if (r0 == 0) goto L7d
        L3f:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L117
            if (r0 >= r2) goto L65
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L117
            if (r0 < r1) goto L65
            android.content.Context r0 = r10.D     // Catch: java.lang.Throwable -> L117
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo()     // Catch: java.lang.Throwable -> L117
            int r0 = r0.targetSdkVersion     // Catch: java.lang.Throwable -> L117
            if (r0 >= r1) goto L65
            android.content.Context r0 = r10.D     // Catch: java.lang.Throwable -> L117
            java.lang.String r1 = "EYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19DT0FSU0VfTE9DQVRJT04="
            boolean r0 = com.loc.fz.c(r0, r1)     // Catch: java.lang.Throwable -> L117
            if (r0 != 0) goto L65
            android.content.Context r0 = r10.D     // Catch: java.lang.Throwable -> L117
            java.lang.String r1 = "EYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19GSU5FX0xPQ0FUSU9O"
            boolean r0 = com.loc.fz.c(r0, r1)     // Catch: java.lang.Throwable -> L117
            if (r0 == 0) goto L7d
        L65:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L117
            if (r0 < r2) goto L82
            android.content.Context r0 = r10.D     // Catch: java.lang.Throwable -> L117
            java.lang.String r1 = "EYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19DT0FSU0VfTE9DQVRJT04="
            boolean r0 = com.loc.fz.c(r0, r1)     // Catch: java.lang.Throwable -> L117
            if (r0 != 0) goto L82
            android.content.Context r0 = r10.D     // Catch: java.lang.Throwable -> L117
            java.lang.String r1 = "EYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19GSU5FX0xPQ0FUSU9O"
            boolean r0 = com.loc.fz.c(r0, r1)     // Catch: java.lang.Throwable -> L117
            if (r0 != 0) goto L82
        L7d:
            r10.k()     // Catch: java.lang.Throwable -> L117
            monitor-exit(r10)
            return
        L82:
            com.amap.api.location.AMapLocationClientOption r0 = r10.b     // Catch: java.lang.Throwable -> L117
            if (r0 != 0) goto L8d
            com.amap.api.location.AMapLocationClientOption r0 = new com.amap.api.location.AMapLocationClientOption     // Catch: java.lang.Throwable -> L117
            r0.<init>()     // Catch: java.lang.Throwable -> L117
            r10.b = r0     // Catch: java.lang.Throwable -> L117
        L8d:
            boolean r0 = r10.G     // Catch: java.lang.Throwable -> L117
            if (r0 == 0) goto L93
            monitor-exit(r10)
            return
        L93:
            r0 = 1
            r10.G = r0     // Catch: java.lang.Throwable -> L117
            int[] r1 = com.loc.d.3.a     // Catch: java.lang.Throwable -> L117
            com.amap.api.location.AMapLocationClientOption r2 = r10.b     // Catch: java.lang.Throwable -> L117
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r2 = r2.getLocationMode()     // Catch: java.lang.Throwable -> L117
            int r2 = r2.ordinal()     // Catch: java.lang.Throwable -> L117
            r1 = r1[r2]     // Catch: java.lang.Throwable -> L117
            r2 = 1017(0x3f9, float:1.425E-42)
            r3 = 1027(0x403, float:1.439E-42)
            r4 = 1016(0x3f8, float:1.424E-42)
            r5 = 0
            r7 = 0
            if (r1 == r0) goto L10c
            r0 = 2
            r8 = 1026(0x402, float:1.438E-42)
            r9 = 1015(0x3f7, float:1.422E-42)
            if (r1 == r0) goto Lee
            r0 = 3
            if (r1 == r0) goto Lba
            goto Lec
        Lba:
            android.content.Context r0 = r10.D     // Catch: java.lang.Throwable -> L117
            boolean r0 = com.loc.fz.m(r0)     // Catch: java.lang.Throwable -> L117
            if (r0 == 0) goto Lcd
            r10.a(r4)     // Catch: java.lang.Throwable -> L117
            r10.a(r2, r7, r5)     // Catch: java.lang.Throwable -> L117
            r10.a(r8, r7, r5)     // Catch: java.lang.Throwable -> L117
            monitor-exit(r10)
            return
        Lcd:
            r10.a(r3, r7, r5)     // Catch: java.lang.Throwable -> L117
            r10.a(r9, r7, r5)     // Catch: java.lang.Throwable -> L117
            com.amap.api.location.AMapLocationClientOption r0 = r10.b     // Catch: java.lang.Throwable -> L117
            boolean r0 = r0.isGpsFirst()     // Catch: java.lang.Throwable -> L117
            if (r0 == 0) goto Le9
            com.amap.api.location.AMapLocationClientOption r0 = r10.b     // Catch: java.lang.Throwable -> L117
            boolean r0 = r0.isOnceLocation()     // Catch: java.lang.Throwable -> L117
            if (r0 == 0) goto Le9
            com.amap.api.location.AMapLocationClientOption r0 = r10.b     // Catch: java.lang.Throwable -> L117
            long r5 = r0.getGpsFirstTimeout()     // Catch: java.lang.Throwable -> L117
        Le9:
            r10.a(r4, r7, r5)     // Catch: java.lang.Throwable -> L117
        Lec:
            monitor-exit(r10)
            return
        Lee:
            android.content.Context r0 = r10.D     // Catch: java.lang.Throwable -> L117
            boolean r0 = com.loc.fz.m(r0)     // Catch: java.lang.Throwable -> L117
            if (r0 == 0) goto L101
            r10.a(r4)     // Catch: java.lang.Throwable -> L117
            r10.a(r2, r7, r5)     // Catch: java.lang.Throwable -> L117
            r10.a(r8, r7, r5)     // Catch: java.lang.Throwable -> L117
            monitor-exit(r10)
            return
        L101:
            r10.a(r4)     // Catch: java.lang.Throwable -> L117
            r10.a(r3, r7, r5)     // Catch: java.lang.Throwable -> L117
            r10.a(r9, r7, r5)     // Catch: java.lang.Throwable -> L117
            monitor-exit(r10)
            return
        L10c:
            r10.a(r3, r7, r5)     // Catch: java.lang.Throwable -> L117
            r10.a(r2, r7, r5)     // Catch: java.lang.Throwable -> L117
            r10.a(r4, r7, r5)     // Catch: java.lang.Throwable -> L117
            monitor-exit(r10)
            return
        L117:
            r0 = move-exception
            monitor-exit(r10)
            throw r0
    }

    static void j(com.loc.d r0) {
            r0.s()
            return
    }

    private void k() {
            r4 = this;
            com.amap.api.location.AMapLocation r0 = new com.amap.api.location.AMapLocation
            java.lang.String r1 = ""
            r0.<init>(r1)
            r1 = 12
            r0.setErrorCode(r1)
            java.lang.String r1 = "定位权限被禁用,请授予应用定位权限 #1201"
            r0.setLocationDetail(r1)
            com.amap.api.location.AMapLocationQualityReport r1 = r4.x
            if (r1 != 0) goto L1c
            com.amap.api.location.AMapLocationQualityReport r1 = new com.amap.api.location.AMapLocationQualityReport
            r1.<init>()
            r4.x = r1
        L1c:
            com.amap.api.location.AMapLocationQualityReport r1 = new com.amap.api.location.AMapLocationQualityReport
            r1.<init>()
            r4.x = r1
            r2 = 4
            r1.setGpsStatus(r2)
            com.amap.api.location.AMapLocationQualityReport r1 = r4.x
            r2 = 0
            r1.setGPSSatellites(r2)
            com.amap.api.location.AMapLocationQualityReport r1 = r4.x
            com.amap.api.location.AMapLocationClientOption r2 = r4.b
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r2 = r2.getLocationMode()
            r1.setLocationMode(r2)
            com.amap.api.location.AMapLocationQualityReport r1 = r4.x
            android.content.Context r2 = r4.D
            boolean r2 = com.loc.fz.g(r2)
            r1.setWifiAble(r2)
            com.amap.api.location.AMapLocationQualityReport r1 = r4.x
            android.content.Context r2 = r4.D
            java.lang.String r2 = com.loc.fz.h(r2)
            r1.setNetworkType(r2)
            com.amap.api.location.AMapLocationQualityReport r1 = r4.x
            r2 = 0
            r1.setNetUseTime(r2)
            com.amap.api.location.AMapLocationQualityReport r1 = r4.x
            r0.setLocationQualityReport(r1)
            r1 = 0
            r2 = 2121(0x849, float:2.972E-42)
            com.loc.fx.a(r1, r2)
            r4.d(r0)
            return
    }

    private void l() {
            r3 = this;
            r0 = 1025(0x401, float:1.436E-42)
            r3.a(r0)     // Catch: java.lang.Throwable -> L22
            com.loc.h r0 = r3.d     // Catch: java.lang.Throwable -> L22
            if (r0 == 0) goto Le
            com.loc.h r0 = r3.d     // Catch: java.lang.Throwable -> L22
            r0.a()     // Catch: java.lang.Throwable -> L22
        Le:
            com.loc.g r0 = r3.E     // Catch: java.lang.Throwable -> L22
            if (r0 == 0) goto L17
            com.loc.g r0 = r3.E     // Catch: java.lang.Throwable -> L22
            r0.a()     // Catch: java.lang.Throwable -> L22
        L17:
            r0 = 1016(0x3f8, float:1.424E-42)
            r3.a(r0)     // Catch: java.lang.Throwable -> L22
            r0 = 0
            r3.G = r0     // Catch: java.lang.Throwable -> L22
            r3.o = r0     // Catch: java.lang.Throwable -> L22
            return
        L22:
            r0 = move-exception
            java.lang.String r1 = "ALManager"
            java.lang.String r2 = "stopLocation"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    private void m() {
            r4 = this;
            com.loc.er r0 = new com.loc.er
            r1 = 1
            r0.<init>(r1)
            com.loc.ew r0 = r4.b(r0)
            boolean r1 = r4.i()
            if (r1 == 0) goto L48
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
            if (r0 == 0) goto L28
            int r2 = r0.getLocationType()
            r3 = 2
            if (r2 == r3) goto L25
            int r0 = r0.getLocationType()
            r2 = 4
            if (r0 != r2) goto L28
        L25:
            java.lang.String r0 = "1"
            goto L2a
        L28:
            java.lang.String r0 = "0"
        L2a:
            com.amap.api.location.AMapLocationClientOption r2 = r4.b
            android.os.Bundle r2 = com.loc.fr.a(r2)
            java.lang.String r3 = "optBundle"
            r1.putBundle(r3, r2)
            java.lang.String r2 = "isCacheLoc"
            r1.putString(r2, r0)
            r0 = 0
            r4.a(r0, r1)
            boolean r0 = r4.G
            if (r0 == 0) goto L48
            r0 = 13
            r1 = 0
            r4.a(r0, r1)
        L48:
            return
    }

    private void n() {
            r5 = this;
            java.lang.String r0 = "ALManager"
            boolean r1 = com.loc.d.H     // Catch: java.lang.Throwable -> L6d
            r2 = 0
            r3 = 1
            if (r1 != 0) goto L5a
            boolean r1 = r5.u     // Catch: java.lang.Throwable -> L6d
            if (r1 != 0) goto L11
            boolean r1 = r5.O     // Catch: java.lang.Throwable -> L6d
            if (r1 != 0) goto L11
            goto L5a
        L11:
            boolean r1 = r5.u     // Catch: java.lang.Throwable -> L25
            if (r1 == 0) goto L2d
            boolean r1 = r5.a()     // Catch: java.lang.Throwable -> L25
            if (r1 != 0) goto L2d
            boolean r1 = r5.z     // Catch: java.lang.Throwable -> L25
            if (r1 != 0) goto L2d
            r5.z = r3     // Catch: java.lang.Throwable -> L25
            r5.p()     // Catch: java.lang.Throwable -> L25
            goto L2d
        L25:
            r1 = move-exception
            r5.z = r3     // Catch: java.lang.Throwable -> L6d
            java.lang.String r4 = "doLBSLocation reStartService"
            com.loc.fr.a(r1, r0, r4)     // Catch: java.lang.Throwable -> L6d
        L2d:
            boolean r1 = r5.i()     // Catch: java.lang.Throwable -> L6d
            if (r1 == 0) goto L61
            r5.z = r2     // Catch: java.lang.Throwable -> L6d
            android.os.Bundle r1 = new android.os.Bundle     // Catch: java.lang.Throwable -> L6d
            r1.<init>()     // Catch: java.lang.Throwable -> L6d
            java.lang.String r2 = "optBundle"
            com.amap.api.location.AMapLocationClientOption r4 = r5.b     // Catch: java.lang.Throwable -> L6d
            android.os.Bundle r4 = com.loc.fr.a(r4)     // Catch: java.lang.Throwable -> L6d
            r1.putBundle(r2, r4)     // Catch: java.lang.Throwable -> L6d
            java.lang.String r2 = "d"
            java.lang.String r4 = com.amap.api.location.UmidtokenInfo.getUmidtoken()     // Catch: java.lang.Throwable -> L6d
            r1.putString(r2, r4)     // Catch: java.lang.Throwable -> L6d
            com.loc.h r2 = r5.d     // Catch: java.lang.Throwable -> L6d
            boolean r2 = r2.b()     // Catch: java.lang.Throwable -> L6d
            if (r2 != 0) goto L61
            r5.a(r3, r1)     // Catch: java.lang.Throwable -> L6d
            goto L61
        L5a:
            com.loc.d.H = r2     // Catch: java.lang.Throwable -> L6d
            r5.O = r3     // Catch: java.lang.Throwable -> L6d
            r5.m()     // Catch: java.lang.Throwable -> L6d
        L61:
            com.amap.api.location.AMapLocationClientOption r0 = r5.b     // Catch: java.lang.Throwable -> L6c
            boolean r0 = r0.isOnceLocation()     // Catch: java.lang.Throwable -> L6c
            if (r0 != 0) goto L6c
            r5.o()     // Catch: java.lang.Throwable -> L6c
        L6c:
            return
        L6d:
            r1 = move-exception
            java.lang.String r2 = "doLBSLocation"
            com.loc.fr.a(r1, r0, r2)     // Catch: java.lang.Throwable -> L7f
            com.amap.api.location.AMapLocationClientOption r0 = r5.b     // Catch: java.lang.Throwable -> L7e
            boolean r0 = r0.isOnceLocation()     // Catch: java.lang.Throwable -> L7e
            if (r0 != 0) goto L7e
            r5.o()     // Catch: java.lang.Throwable -> L7e
        L7e:
            return
        L7f:
            r0 = move-exception
            com.amap.api.location.AMapLocationClientOption r1 = r5.b     // Catch: java.lang.Throwable -> L8b
            boolean r1 = r1.isOnceLocation()     // Catch: java.lang.Throwable -> L8b
            if (r1 != 0) goto L8b
            r5.o()     // Catch: java.lang.Throwable -> L8b
        L8b:
            throw r0
    }

    private void o() {
            r7 = this;
            com.amap.api.location.AMapLocationClientOption r0 = r7.b
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r0 = r0.getLocationMode()
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r1 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Device_Sensors
            if (r0 == r1) goto L23
            r0 = 1016(0x3f8, float:1.424E-42)
            r1 = 0
            com.amap.api.location.AMapLocationClientOption r2 = r7.b
            long r2 = r2.getInterval()
            r4 = 1000(0x3e8, double:4.94E-321)
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 >= 0) goto L1a
            goto L20
        L1a:
            com.amap.api.location.AMapLocationClientOption r2 = r7.b
            long r4 = r2.getInterval()
        L20:
            r7.a(r0, r1, r4)
        L23:
            return
    }

    private void p() {
            r2 = this;
            android.os.Messenger r0 = r2.m     // Catch: java.lang.Throwable -> L14
            if (r0 != 0) goto Ld
            android.os.Messenger r0 = new android.os.Messenger     // Catch: java.lang.Throwable -> L14
            com.loc.d$c r1 = r2.c     // Catch: java.lang.Throwable -> L14
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L14
            r2.m = r0     // Catch: java.lang.Throwable -> L14
        Ld:
            android.content.Intent r0 = r2.q()     // Catch: java.lang.Throwable -> L14
            r2.a(r0)     // Catch: java.lang.Throwable -> L14
        L14:
            return
    }

    private android.content.Intent q() {
            r3 = this;
            android.content.Intent r0 = r3.n
            if (r0 != 0) goto Lf
            android.content.Intent r0 = new android.content.Intent
            android.content.Context r1 = r3.D
            java.lang.Class<com.amap.api.location.APSService> r2 = com.amap.api.location.APSService.class
            r0.<init>(r1, r2)
            r3.n = r0
        Lf:
            java.lang.String r0 = com.amap.api.location.AMapLocationClientOption.getAPIKEY()     // Catch: java.lang.Throwable -> L25
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L25
            if (r0 != 0) goto L1e
            java.lang.String r0 = com.amap.api.location.AMapLocationClientOption.getAPIKEY()     // Catch: java.lang.Throwable -> L25
            goto L2f
        L1e:
            android.content.Context r0 = r3.D     // Catch: java.lang.Throwable -> L25
            java.lang.String r0 = com.loc.l.f(r0)     // Catch: java.lang.Throwable -> L25
            goto L2f
        L25:
            r0 = move-exception
            java.lang.String r1 = "ALManager"
            java.lang.String r2 = "startServiceImpl p2"
            com.loc.fr.a(r0, r1, r2)
            java.lang.String r0 = ""
        L2f:
            android.content.Intent r1 = r3.n
            java.lang.String r2 = "a"
            r1.putExtra(r2, r0)
            android.content.Intent r0 = r3.n
            android.content.Context r1 = r3.D
            java.lang.String r1 = com.loc.l.c(r1)
            java.lang.String r2 = "b"
            r0.putExtra(r2, r1)
            android.content.Intent r0 = r3.n
            java.lang.String r1 = com.amap.api.location.UmidtokenInfo.getUmidtoken()
            java.lang.String r2 = "d"
            r0.putExtra(r2, r1)
            android.content.Intent r0 = r3.n
            return r0
    }

    private void r() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L31
            r0.<init>()     // Catch: java.lang.Throwable -> L31
            com.loc.eq r1 = new com.loc.eq     // Catch: java.lang.Throwable -> L31
            r1.<init>()     // Catch: java.lang.Throwable -> L31
            java.lang.String r2 = "#2001"
            r1.f(r2)     // Catch: java.lang.Throwable -> L31
            java.lang.String r1 = "模糊权限下不支持低功耗定位#2001"
            r0.append(r1)     // Catch: java.lang.Throwable -> L31
            r1 = 0
            r2 = 2153(0x869, float:3.017E-42)
            com.loc.fx.a(r1, r2)     // Catch: java.lang.Throwable -> L31
            com.loc.ew r1 = new com.loc.ew     // Catch: java.lang.Throwable -> L31
            java.lang.String r2 = ""
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L31
            r2 = 20
            r1.setErrorCode(r2)     // Catch: java.lang.Throwable -> L31
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L31
            r1.setLocationDetail(r0)     // Catch: java.lang.Throwable -> L31
            r3.g(r1)     // Catch: java.lang.Throwable -> L31
            return
        L31:
            r0 = move-exception
            java.lang.String r1 = "ALManager"
            java.lang.String r2 = "apsLocation:callback"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    private void s() {
            r3 = this;
            com.loc.h r0 = r3.d
            com.amap.api.location.AMapLocationClientOption r1 = r3.b
            r0.b(r1)
            com.loc.g r0 = r3.E
            com.amap.api.location.AMapLocationClientOption r1 = r3.b
            r0.b(r1)
            boolean r0 = r3.G
            if (r0 == 0) goto L26
            com.amap.api.location.AMapLocationClientOption r0 = r3.b
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r0 = r0.getLocationMode()
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r1 = r3.r
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L26
            r3.l()
            r3.j()
        L26:
            com.amap.api.location.AMapLocationClientOption r0 = r3.b
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r0 = r0.getLocationMode()
            r3.r = r0
            com.loc.fx r0 = r3.t
            if (r0 == 0) goto L51
            com.amap.api.location.AMapLocationClientOption r0 = r3.b
            boolean r0 = r0.isOnceLocation()
            if (r0 == 0) goto L40
            com.loc.fx r0 = r3.t
            android.content.Context r1 = r3.D
            r2 = 0
            goto L45
        L40:
            com.loc.fx r0 = r3.t
            android.content.Context r1 = r3.D
            r2 = 1
        L45:
            r0.a(r1, r2)
            com.loc.fx r0 = r3.t
            android.content.Context r1 = r3.D
            com.amap.api.location.AMapLocationClientOption r2 = r3.b
            r0.a(r1, r2)
        L51:
            return
    }

    private boolean t() {
            r7 = this;
            android.content.Context r0 = r7.D
            boolean r0 = com.loc.fz.j(r0)
            r1 = 1
            if (r0 == 0) goto L28
            r0 = -1
            r2 = 0
            android.content.Context r3 = r7.D     // Catch: java.lang.Throwable -> L24
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L24
            android.app.Application r3 = (android.app.Application) r3     // Catch: java.lang.Throwable -> L24
            android.content.Context r3 = r3.getBaseContext()     // Catch: java.lang.Throwable -> L24
            java.lang.String r4 = "checkSelfPermission"
            java.lang.Object[] r5 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L24
            java.lang.String r6 = "android.permission.FOREGROUND_SERVICE"
            r5[r2] = r6     // Catch: java.lang.Throwable -> L24
            int r0 = com.loc.fv.b(r3, r4, r5)     // Catch: java.lang.Throwable -> L24
            goto L25
        L24:
        L25:
            if (r0 == 0) goto L28
            return r2
        L28:
            return r1
    }

    public final void a(int r4, android.app.Notification r5) {
            r3 = this;
            if (r4 == 0) goto L42
            if (r5 != 0) goto L5
            goto L42
        L5:
            boolean r0 = r3.j     // Catch: java.lang.Throwable -> L3a
            if (r0 == 0) goto L23
            android.os.Messenger r0 = r3.l     // Catch: java.lang.Throwable -> L3a
            if (r0 == 0) goto L23
            android.os.Bundle r0 = new android.os.Bundle     // Catch: java.lang.Throwable -> L3a
            r0.<init>()     // Catch: java.lang.Throwable -> L3a
            java.lang.String r1 = "optBundle"
            com.amap.api.location.AMapLocationClientOption r2 = r3.b     // Catch: java.lang.Throwable -> L3a
            android.os.Bundle r2 = com.loc.fr.a(r2)     // Catch: java.lang.Throwable -> L3a
            r0.putBundle(r1, r2)     // Catch: java.lang.Throwable -> L3a
            r1 = 0
            r3.a(r1, r0)     // Catch: java.lang.Throwable -> L3a
            r3.j = r1     // Catch: java.lang.Throwable -> L3a
        L23:
            android.os.Bundle r0 = new android.os.Bundle     // Catch: java.lang.Throwable -> L3a
            r0.<init>()     // Catch: java.lang.Throwable -> L3a
            java.lang.String r1 = "i"
            r0.putInt(r1, r4)     // Catch: java.lang.Throwable -> L3a
            java.lang.String r4 = "h"
            r0.putParcelable(r4, r5)     // Catch: java.lang.Throwable -> L3a
            r4 = 1023(0x3ff, float:1.434E-42)
            r1 = 0
            r3.a(r4, r0, r1)     // Catch: java.lang.Throwable -> L3a
            return
        L3a:
            r4 = move-exception
            java.lang.String r5 = "ALManager"
            java.lang.String r0 = "disableBackgroundLocation"
            com.loc.fr.a(r4, r5, r0)
        L42:
            return
    }

    public final void a(android.webkit.WebView r3) {
            r2 = this;
            com.loc.i r0 = r2.M
            if (r0 != 0) goto Ld
            com.loc.i r0 = new com.loc.i
            android.content.Context r1 = r2.D
            r0.<init>(r1, r3)
            r2.M = r0
        Ld:
            com.loc.i r3 = r2.M
            r3.a()
            return
    }

    public final void a(com.amap.api.location.AMapLocationClientOption r4) {
            r3 = this;
            com.amap.api.location.AMapLocationClientOption r0 = r4.clone()     // Catch: java.lang.Throwable -> L12
            r3.L = r0     // Catch: java.lang.Throwable -> L12
            r0 = 1018(0x3fa, float:1.427E-42)
            com.amap.api.location.AMapLocationClientOption r4 = r4.clone()     // Catch: java.lang.Throwable -> L12
            r1 = 0
            r3.a(r0, r4, r1)     // Catch: java.lang.Throwable -> L12
            return
        L12:
            r4 = move-exception
            java.lang.String r0 = "ALManager"
            java.lang.String r1 = "setLocationOption"
            com.loc.fr.a(r4, r0, r1)
            return
    }

    public final void a(com.amap.api.location.AMapLocationListener r4) {
            r3 = this;
            r0 = 1002(0x3ea, float:1.404E-42)
            r1 = 0
            r3.a(r0, r4, r1)     // Catch: java.lang.Throwable -> L8
            return
        L8:
            r4 = move-exception
            java.lang.String r0 = "ALManager"
            java.lang.String r1 = "setLocationListener"
            com.loc.fr.a(r4, r0, r1)
            return
    }

    public final void a(boolean r4) {
            r3 = this;
            android.os.Bundle r0 = new android.os.Bundle     // Catch: java.lang.Throwable -> L12
            r0.<init>()     // Catch: java.lang.Throwable -> L12
            java.lang.String r1 = "j"
            r0.putBoolean(r1, r4)     // Catch: java.lang.Throwable -> L12
            r4 = 1024(0x400, float:1.435E-42)
            r1 = 0
            r3.a(r4, r0, r1)     // Catch: java.lang.Throwable -> L12
            return
        L12:
            r4 = move-exception
            java.lang.String r0 = "ALManager"
            java.lang.String r1 = "disableBackgroundLocation"
            com.loc.fr.a(r4, r0, r1)
            return
    }

    public final boolean a() {
            r1 = this;
            boolean r0 = r1.F
            return r0
    }

    public final void b() {
            r4 = this;
            com.amap.api.location.AMapLocationClientOption r0 = r4.L     // Catch: java.lang.Throwable -> L1a
            boolean r0 = r0.getCacheCallBack()     // Catch: java.lang.Throwable -> L1a
            if (r0 == 0) goto L1a
            com.loc.d$c r0 = r4.c     // Catch: java.lang.Throwable -> L1a
            if (r0 == 0) goto L1a
            com.loc.d$c r0 = r4.c     // Catch: java.lang.Throwable -> L1a
            r1 = 13
            com.amap.api.location.AMapLocationClientOption r2 = r4.L     // Catch: java.lang.Throwable -> L1a
            int r2 = r2.getCacheCallBackTime()     // Catch: java.lang.Throwable -> L1a
            long r2 = (long) r2     // Catch: java.lang.Throwable -> L1a
            r0.sendEmptyMessageDelayed(r1, r2)     // Catch: java.lang.Throwable -> L1a
        L1a:
            r0 = 1003(0x3eb, float:1.406E-42)
            r1 = 0
            r2 = 0
            r4.a(r0, r1, r2)     // Catch: java.lang.Throwable -> L23
            return
        L23:
            r0 = move-exception
            java.lang.String r1 = "ALManager"
            java.lang.String r2 = "startLocation"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    public final void b(com.amap.api.location.AMapLocationListener r4) {
            r3 = this;
            r0 = 1005(0x3ed, float:1.408E-42)
            r1 = 0
            r3.a(r0, r4, r1)     // Catch: java.lang.Throwable -> L8
            return
        L8:
            r4 = move-exception
            java.lang.String r0 = "ALManager"
            java.lang.String r1 = "unRegisterLocationListener"
            com.loc.fr.a(r4, r0, r1)
            return
    }

    public final void c() {
            r4 = this;
            r0 = 1004(0x3ec, float:1.407E-42)
            r1 = 0
            r2 = 0
            r4.a(r0, r1, r2)     // Catch: java.lang.Throwable -> L9
            return
        L9:
            r0 = move-exception
            java.lang.String r1 = "ALManager"
            java.lang.String r2 = "stopLocation"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    public final void d() {
            r4 = this;
            com.loc.i r0 = r4.M     // Catch: java.lang.Throwable -> L17
            r1 = 0
            if (r0 == 0) goto Lc
            com.loc.i r0 = r4.M     // Catch: java.lang.Throwable -> L17
            r0.b()     // Catch: java.lang.Throwable -> L17
            r4.M = r1     // Catch: java.lang.Throwable -> L17
        Lc:
            r0 = 1011(0x3f3, float:1.417E-42)
            r2 = 0
            r4.a(r0, r1, r2)     // Catch: java.lang.Throwable -> L17
            r0 = 1
            r4.q = r0     // Catch: java.lang.Throwable -> L17
            return
        L17:
            r0 = move-exception
            java.lang.String r1 = "ALManager"
            java.lang.String r2 = "onDestroy"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    public final com.amap.api.location.AMapLocation e() {
            r4 = this;
            r0 = 0
            com.loc.j r1 = r4.k     // Catch: java.lang.Throwable -> L12
            if (r1 == 0) goto L1a
            com.loc.j r1 = r4.k     // Catch: java.lang.Throwable -> L12
            com.amap.api.location.AMapLocation r0 = r1.b()     // Catch: java.lang.Throwable -> L12
            if (r0 == 0) goto L1a
            r1 = 3
            r0.setTrustedLevel(r1)     // Catch: java.lang.Throwable -> L12
            goto L1a
        L12:
            r1 = move-exception
            java.lang.String r2 = "ALManager"
            java.lang.String r3 = "getLastKnownLocation"
            com.loc.fr.a(r1, r2, r3)
        L1a:
            return r0
    }

    public final void f() {
            r3 = this;
            com.loc.i r0 = r3.M     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto Lc
            com.loc.i r0 = r3.M     // Catch: java.lang.Throwable -> Ld
            r0.b()     // Catch: java.lang.Throwable -> Ld
            r0 = 0
            r3.M = r0     // Catch: java.lang.Throwable -> Ld
        Lc:
            return
        Ld:
            r0 = move-exception
            java.lang.String r1 = "ALManager"
            java.lang.String r2 = "stopAssistantLocation"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    final void g() {
            r5 = this;
            r0 = 0
            r1 = 12
            r5.a(r1, r0)
            r1 = 1
            r5.h = r1
            r5.i = r1
            r5.j = r1
            r1 = 0
            r5.F = r1
            r5.u = r1
            r5.l()
            com.loc.fx r2 = r5.t
            if (r2 == 0) goto L1e
            android.content.Context r3 = r5.D
            r2.b(r3)
        L1e:
            android.content.Context r2 = r5.D
            com.loc.fw r2 = com.loc.fw.a(r2)
            r2.a()
            android.content.Context r2 = r5.D
            com.loc.fx.a(r2)
            com.loc.e r2 = r5.v
            if (r2 == 0) goto L3a
            android.os.Handler r2 = r2.b()
            r3 = 11
            r2.sendEmptyMessage(r3)
            goto L43
        L3a:
            android.content.ServiceConnection r2 = r5.N
            if (r2 == 0) goto L43
            android.content.Context r3 = r5.D
            r3.unbindService(r2)
        L43:
            boolean r2 = r5.C     // Catch: java.lang.Throwable -> L51
            if (r2 == 0) goto L52
            android.content.Context r2 = r5.D     // Catch: java.lang.Throwable -> L51
            android.content.Intent r3 = r5.q()     // Catch: java.lang.Throwable -> L51
            r2.stopService(r3)     // Catch: java.lang.Throwable -> L51
            goto L52
        L51:
        L52:
            r5.C = r1
            java.util.ArrayList<com.amap.api.location.AMapLocationListener> r2 = r5.e
            if (r2 == 0) goto L5d
            r2.clear()
            r5.e = r0
        L5d:
            r5.N = r0
            r5.h()
            com.loc.d$b r2 = r5.p
            if (r2 == 0) goto L7d
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 18
            if (r2 < r3) goto L78
            com.loc.d$b r2 = r5.p     // Catch: java.lang.Throwable -> L78
            java.lang.Class<android.os.HandlerThread> r3 = android.os.HandlerThread.class
            java.lang.String r4 = "quitSafely"
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L78
            com.loc.fv.a(r2, r3, r4, r1)     // Catch: java.lang.Throwable -> L78
            goto L7d
        L78:
            com.loc.d$b r1 = r5.p
            r1.quit()
        L7d:
            r5.p = r0
            com.loc.d$c r1 = r5.c
            if (r1 == 0) goto L86
            r1.removeCallbacksAndMessages(r0)
        L86:
            com.loc.j r1 = r5.k
            if (r1 == 0) goto L8f
            r1.c()
            r5.k = r0
        L8f:
            return
    }
}

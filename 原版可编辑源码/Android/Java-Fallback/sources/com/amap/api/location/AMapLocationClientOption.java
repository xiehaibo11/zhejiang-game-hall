package com.amap.api.location;

public class AMapLocationClientOption implements android.os.Parcelable, java.lang.Cloneable {
    public static final android.os.Parcelable.Creator<com.amap.api.location.AMapLocationClientOption> CREATOR = null;
    public static boolean OPEN_ALWAYS_SCAN_WIFI = false;
    public static long SCAN_WIFI_INTERVAL = 0;
    static java.lang.String a = null;
    private static int d = 0;
    private static int e = 1;
    private static int f = 2;
    private static int g = 4;
    private static com.amap.api.location.AMapLocationClientOption.AMapLocationProtocol p;
    private boolean A;
    private int B;
    private int C;
    private boolean D;
    private boolean E;
    private float F;
    private com.amap.api.location.AMapLocationClientOption.AMapLocationPurpose G;
    boolean b;
    java.lang.String c;
    private long h;
    private long i;
    private boolean j;
    private boolean k;
    private boolean l;
    private boolean m;
    private boolean n;
    private com.amap.api.location.AMapLocationClientOption.AMapLocationMode o;
    private boolean q;
    private boolean r;
    private boolean s;
    private boolean t;
    private boolean u;
    private boolean v;
    private boolean w;
    private long x;
    private long y;
    private com.amap.api.location.AMapLocationClientOption.GeoLanguage z;


    static class 2 {
        static final int[] a = null;

        static {
                com.amap.api.location.AMapLocationClientOption$AMapLocationPurpose[] r0 = com.amap.api.location.AMapLocationClientOption.AMapLocationPurpose.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.amap.api.location.AMapLocationClientOption.2.a = r0
                com.amap.api.location.AMapLocationClientOption$AMapLocationPurpose r1 = com.amap.api.location.AMapLocationClientOption.AMapLocationPurpose.SignIn     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.amap.api.location.AMapLocationClientOption.2.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.amap.api.location.AMapLocationClientOption$AMapLocationPurpose r1 = com.amap.api.location.AMapLocationClientOption.AMapLocationPurpose.Transport     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.amap.api.location.AMapLocationClientOption.2.a     // Catch: java.lang.NoSuchFieldError -> L28
                com.amap.api.location.AMapLocationClientOption$AMapLocationPurpose r1 = com.amap.api.location.AMapLocationClientOption.AMapLocationPurpose.Sport     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                return
        }
    }

    public enum AMapLocationMode extends java.lang.Enum<com.amap.api.location.AMapLocationClientOption.AMapLocationMode> {
        public static final com.amap.api.location.AMapLocationClientOption.AMapLocationMode Battery_Saving = null;
        public static final com.amap.api.location.AMapLocationClientOption.AMapLocationMode Device_Sensors = null;
        public static final com.amap.api.location.AMapLocationClientOption.AMapLocationMode Hight_Accuracy = null;
        private static final com.amap.api.location.AMapLocationClientOption.AMapLocationMode[] a = null;

        static {
                com.amap.api.location.AMapLocationClientOption$AMapLocationMode r0 = new com.amap.api.location.AMapLocationClientOption$AMapLocationMode
                r1 = 0
                java.lang.String r2 = "Battery_Saving"
                r0.<init>(r2, r1)
                com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Battery_Saving = r0
                com.amap.api.location.AMapLocationClientOption$AMapLocationMode r0 = new com.amap.api.location.AMapLocationClientOption$AMapLocationMode
                r2 = 1
                java.lang.String r3 = "Device_Sensors"
                r0.<init>(r3, r2)
                com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Device_Sensors = r0
                com.amap.api.location.AMapLocationClientOption$AMapLocationMode r0 = new com.amap.api.location.AMapLocationClientOption$AMapLocationMode
                r3 = 2
                java.lang.String r4 = "Hight_Accuracy"
                r0.<init>(r4, r3)
                com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Hight_Accuracy = r0
                r4 = 3
                com.amap.api.location.AMapLocationClientOption$AMapLocationMode[] r4 = new com.amap.api.location.AMapLocationClientOption.AMapLocationMode[r4]
                com.amap.api.location.AMapLocationClientOption$AMapLocationMode r5 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Battery_Saving
                r4[r1] = r5
                com.amap.api.location.AMapLocationClientOption$AMapLocationMode r1 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Device_Sensors
                r4[r2] = r1
                r4[r3] = r0
                com.amap.api.location.AMapLocationClientOption.AMapLocationMode.a = r4
                return
        }

        AMapLocationMode(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.amap.api.location.AMapLocationClientOption.AMapLocationMode valueOf(java.lang.String r1) {
                java.lang.Class<com.amap.api.location.AMapLocationClientOption$AMapLocationMode> r0 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.amap.api.location.AMapLocationClientOption$AMapLocationMode r1 = (com.amap.api.location.AMapLocationClientOption.AMapLocationMode) r1
                return r1
        }

        public static com.amap.api.location.AMapLocationClientOption.AMapLocationMode[] values() {
                com.amap.api.location.AMapLocationClientOption$AMapLocationMode[] r0 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.a
                java.lang.Object r0 = r0.clone()
                com.amap.api.location.AMapLocationClientOption$AMapLocationMode[] r0 = (com.amap.api.location.AMapLocationClientOption.AMapLocationMode[]) r0
                return r0
        }
    }

    public enum AMapLocationProtocol extends java.lang.Enum<com.amap.api.location.AMapLocationClientOption.AMapLocationProtocol> {
        public static final com.amap.api.location.AMapLocationClientOption.AMapLocationProtocol HTTP = null;
        public static final com.amap.api.location.AMapLocationClientOption.AMapLocationProtocol HTTPS = null;
        private static final com.amap.api.location.AMapLocationClientOption.AMapLocationProtocol[] b = null;
        private int a;

        static {
                com.amap.api.location.AMapLocationClientOption$AMapLocationProtocol r0 = new com.amap.api.location.AMapLocationClientOption$AMapLocationProtocol
                r1 = 0
                java.lang.String r2 = "HTTP"
                r0.<init>(r2, r1, r1)
                com.amap.api.location.AMapLocationClientOption.AMapLocationProtocol.HTTP = r0
                com.amap.api.location.AMapLocationClientOption$AMapLocationProtocol r0 = new com.amap.api.location.AMapLocationClientOption$AMapLocationProtocol
                r2 = 1
                java.lang.String r3 = "HTTPS"
                r0.<init>(r3, r2, r2)
                com.amap.api.location.AMapLocationClientOption.AMapLocationProtocol.HTTPS = r0
                r3 = 2
                com.amap.api.location.AMapLocationClientOption$AMapLocationProtocol[] r3 = new com.amap.api.location.AMapLocationClientOption.AMapLocationProtocol[r3]
                com.amap.api.location.AMapLocationClientOption$AMapLocationProtocol r4 = com.amap.api.location.AMapLocationClientOption.AMapLocationProtocol.HTTP
                r3[r1] = r4
                r3[r2] = r0
                com.amap.api.location.AMapLocationClientOption.AMapLocationProtocol.b = r3
                return
        }

        AMapLocationProtocol(java.lang.String r1, int r2, int r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.a = r3
                return
        }

        public static com.amap.api.location.AMapLocationClientOption.AMapLocationProtocol valueOf(java.lang.String r1) {
                java.lang.Class<com.amap.api.location.AMapLocationClientOption$AMapLocationProtocol> r0 = com.amap.api.location.AMapLocationClientOption.AMapLocationProtocol.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.amap.api.location.AMapLocationClientOption$AMapLocationProtocol r1 = (com.amap.api.location.AMapLocationClientOption.AMapLocationProtocol) r1
                return r1
        }

        public static com.amap.api.location.AMapLocationClientOption.AMapLocationProtocol[] values() {
                com.amap.api.location.AMapLocationClientOption$AMapLocationProtocol[] r0 = com.amap.api.location.AMapLocationClientOption.AMapLocationProtocol.b
                java.lang.Object r0 = r0.clone()
                com.amap.api.location.AMapLocationClientOption$AMapLocationProtocol[] r0 = (com.amap.api.location.AMapLocationClientOption.AMapLocationProtocol[]) r0
                return r0
        }

        public final int getValue() {
                r1 = this;
                int r0 = r1.a
                return r0
        }
    }

    public enum AMapLocationPurpose extends java.lang.Enum<com.amap.api.location.AMapLocationClientOption.AMapLocationPurpose> {
        public static final com.amap.api.location.AMapLocationClientOption.AMapLocationPurpose SignIn = null;
        public static final com.amap.api.location.AMapLocationClientOption.AMapLocationPurpose Sport = null;
        public static final com.amap.api.location.AMapLocationClientOption.AMapLocationPurpose Transport = null;
        private static final com.amap.api.location.AMapLocationClientOption.AMapLocationPurpose[] a = null;

        static {
                com.amap.api.location.AMapLocationClientOption$AMapLocationPurpose r0 = new com.amap.api.location.AMapLocationClientOption$AMapLocationPurpose
                r1 = 0
                java.lang.String r2 = "SignIn"
                r0.<init>(r2, r1)
                com.amap.api.location.AMapLocationClientOption.AMapLocationPurpose.SignIn = r0
                com.amap.api.location.AMapLocationClientOption$AMapLocationPurpose r0 = new com.amap.api.location.AMapLocationClientOption$AMapLocationPurpose
                r2 = 1
                java.lang.String r3 = "Transport"
                r0.<init>(r3, r2)
                com.amap.api.location.AMapLocationClientOption.AMapLocationPurpose.Transport = r0
                com.amap.api.location.AMapLocationClientOption$AMapLocationPurpose r0 = new com.amap.api.location.AMapLocationClientOption$AMapLocationPurpose
                r3 = 2
                java.lang.String r4 = "Sport"
                r0.<init>(r4, r3)
                com.amap.api.location.AMapLocationClientOption.AMapLocationPurpose.Sport = r0
                r4 = 3
                com.amap.api.location.AMapLocationClientOption$AMapLocationPurpose[] r4 = new com.amap.api.location.AMapLocationClientOption.AMapLocationPurpose[r4]
                com.amap.api.location.AMapLocationClientOption$AMapLocationPurpose r5 = com.amap.api.location.AMapLocationClientOption.AMapLocationPurpose.SignIn
                r4[r1] = r5
                com.amap.api.location.AMapLocationClientOption$AMapLocationPurpose r1 = com.amap.api.location.AMapLocationClientOption.AMapLocationPurpose.Transport
                r4[r2] = r1
                r4[r3] = r0
                com.amap.api.location.AMapLocationClientOption.AMapLocationPurpose.a = r4
                return
        }

        AMapLocationPurpose(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.amap.api.location.AMapLocationClientOption.AMapLocationPurpose valueOf(java.lang.String r1) {
                java.lang.Class<com.amap.api.location.AMapLocationClientOption$AMapLocationPurpose> r0 = com.amap.api.location.AMapLocationClientOption.AMapLocationPurpose.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.amap.api.location.AMapLocationClientOption$AMapLocationPurpose r1 = (com.amap.api.location.AMapLocationClientOption.AMapLocationPurpose) r1
                return r1
        }

        public static com.amap.api.location.AMapLocationClientOption.AMapLocationPurpose[] values() {
                com.amap.api.location.AMapLocationClientOption$AMapLocationPurpose[] r0 = com.amap.api.location.AMapLocationClientOption.AMapLocationPurpose.a
                java.lang.Object r0 = r0.clone()
                com.amap.api.location.AMapLocationClientOption$AMapLocationPurpose[] r0 = (com.amap.api.location.AMapLocationClientOption.AMapLocationPurpose[]) r0
                return r0
        }
    }

    public enum GeoLanguage extends java.lang.Enum<com.amap.api.location.AMapLocationClientOption.GeoLanguage> {
        public static final com.amap.api.location.AMapLocationClientOption.GeoLanguage DEFAULT = null;
        public static final com.amap.api.location.AMapLocationClientOption.GeoLanguage EN = null;
        public static final com.amap.api.location.AMapLocationClientOption.GeoLanguage ZH = null;
        private static final com.amap.api.location.AMapLocationClientOption.GeoLanguage[] a = null;

        static {
                com.amap.api.location.AMapLocationClientOption$GeoLanguage r0 = new com.amap.api.location.AMapLocationClientOption$GeoLanguage
                r1 = 0
                java.lang.String r2 = "DEFAULT"
                r0.<init>(r2, r1)
                com.amap.api.location.AMapLocationClientOption.GeoLanguage.DEFAULT = r0
                com.amap.api.location.AMapLocationClientOption$GeoLanguage r0 = new com.amap.api.location.AMapLocationClientOption$GeoLanguage
                r2 = 1
                java.lang.String r3 = "ZH"
                r0.<init>(r3, r2)
                com.amap.api.location.AMapLocationClientOption.GeoLanguage.ZH = r0
                com.amap.api.location.AMapLocationClientOption$GeoLanguage r0 = new com.amap.api.location.AMapLocationClientOption$GeoLanguage
                r3 = 2
                java.lang.String r4 = "EN"
                r0.<init>(r4, r3)
                com.amap.api.location.AMapLocationClientOption.GeoLanguage.EN = r0
                r4 = 3
                com.amap.api.location.AMapLocationClientOption$GeoLanguage[] r4 = new com.amap.api.location.AMapLocationClientOption.GeoLanguage[r4]
                com.amap.api.location.AMapLocationClientOption$GeoLanguage r5 = com.amap.api.location.AMapLocationClientOption.GeoLanguage.DEFAULT
                r4[r1] = r5
                com.amap.api.location.AMapLocationClientOption$GeoLanguage r1 = com.amap.api.location.AMapLocationClientOption.GeoLanguage.ZH
                r4[r2] = r1
                r4[r3] = r0
                com.amap.api.location.AMapLocationClientOption.GeoLanguage.a = r4
                return
        }

        GeoLanguage(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.amap.api.location.AMapLocationClientOption.GeoLanguage valueOf(java.lang.String r1) {
                java.lang.Class<com.amap.api.location.AMapLocationClientOption$GeoLanguage> r0 = com.amap.api.location.AMapLocationClientOption.GeoLanguage.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.amap.api.location.AMapLocationClientOption$GeoLanguage r1 = (com.amap.api.location.AMapLocationClientOption.GeoLanguage) r1
                return r1
        }

        public static com.amap.api.location.AMapLocationClientOption.GeoLanguage[] values() {
                com.amap.api.location.AMapLocationClientOption$GeoLanguage[] r0 = com.amap.api.location.AMapLocationClientOption.GeoLanguage.a
                java.lang.Object r0 = r0.clone()
                com.amap.api.location.AMapLocationClientOption$GeoLanguage[] r0 = (com.amap.api.location.AMapLocationClientOption.GeoLanguage[]) r0
                return r0
        }
    }

    static {
            com.amap.api.location.AMapLocationClientOption$AMapLocationProtocol r0 = com.amap.api.location.AMapLocationClientOption.AMapLocationProtocol.HTTP
            com.amap.api.location.AMapLocationClientOption.p = r0
            java.lang.String r0 = ""
            com.amap.api.location.AMapLocationClientOption.a = r0
            com.amap.api.location.AMapLocationClientOption$1 r0 = new com.amap.api.location.AMapLocationClientOption$1
            r0.<init>()
            com.amap.api.location.AMapLocationClientOption.CREATOR = r0
            r0 = 1
            com.amap.api.location.AMapLocationClientOption.OPEN_ALWAYS_SCAN_WIFI = r0
            r0 = 30000(0x7530, double:1.4822E-319)
            com.amap.api.location.AMapLocationClientOption.SCAN_WIFI_INTERVAL = r0
            return
    }

    public AMapLocationClientOption() {
            r4 = this;
            r4.<init>()
            r0 = 2000(0x7d0, double:9.88E-321)
            r4.h = r0
            int r0 = com.loc.fr.i
            long r0 = (long) r0
            r4.i = r0
            r0 = 0
            r4.j = r0
            r1 = 1
            r4.k = r1
            r4.l = r1
            r4.m = r1
            r4.n = r1
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r2 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Hight_Accuracy
            r4.o = r2
            r4.q = r0
            r4.r = r0
            r4.s = r1
            r4.t = r1
            r4.u = r0
            r4.v = r0
            r4.w = r1
            r2 = 30000(0x7530, double:1.4822E-319)
            r4.x = r2
            r4.y = r2
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r2 = com.amap.api.location.AMapLocationClientOption.GeoLanguage.DEFAULT
            r4.z = r2
            r4.A = r0
            r2 = 1500(0x5dc, float:2.102E-42)
            r4.B = r2
            r2 = 21600000(0x1499700, float:3.7026207E-38)
            r4.C = r2
            r4.D = r0
            r4.E = r1
            r1 = 0
            r4.F = r1
            r1 = 0
            r4.G = r1
            r4.b = r0
            r4.c = r1
            return
    }

    protected AMapLocationClientOption(android.os.Parcel r8) {
            r7 = this;
            r7.<init>()
            r0 = 2000(0x7d0, double:9.88E-321)
            r7.h = r0
            int r0 = com.loc.fr.i
            long r0 = (long) r0
            r7.i = r0
            r0 = 0
            r7.j = r0
            r1 = 1
            r7.k = r1
            r7.l = r1
            r7.m = r1
            r7.n = r1
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r2 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Hight_Accuracy
            r7.o = r2
            r7.q = r0
            r7.r = r0
            r7.s = r1
            r7.t = r1
            r7.u = r0
            r7.v = r0
            r7.w = r1
            r2 = 30000(0x7530, double:1.4822E-319)
            r7.x = r2
            r7.y = r2
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r2 = com.amap.api.location.AMapLocationClientOption.GeoLanguage.DEFAULT
            r7.z = r2
            r7.A = r0
            r2 = 1500(0x5dc, float:2.102E-42)
            r7.B = r2
            r2 = 21600000(0x1499700, float:3.7026207E-38)
            r7.C = r2
            r7.D = r0
            r7.E = r1
            r2 = 0
            r7.F = r2
            r2 = 0
            r7.G = r2
            r7.b = r0
            r7.c = r2
            long r3 = r8.readLong()
            r7.h = r3
            long r3 = r8.readLong()
            r7.i = r3
            byte r3 = r8.readByte()
            if (r3 == 0) goto L61
            r3 = 1
            goto L62
        L61:
            r3 = 0
        L62:
            r7.j = r3
            byte r3 = r8.readByte()
            if (r3 == 0) goto L6c
            r3 = 1
            goto L6d
        L6c:
            r3 = 0
        L6d:
            r7.k = r3
            byte r3 = r8.readByte()
            if (r3 == 0) goto L77
            r3 = 1
            goto L78
        L77:
            r3 = 0
        L78:
            r7.l = r3
            byte r3 = r8.readByte()
            if (r3 == 0) goto L82
            r3 = 1
            goto L83
        L82:
            r3 = 0
        L83:
            r7.m = r3
            byte r3 = r8.readByte()
            if (r3 == 0) goto L8d
            r3 = 1
            goto L8e
        L8d:
            r3 = 0
        L8e:
            r7.n = r3
            int r3 = r8.readInt()
            r4 = -1
            if (r3 != r4) goto L9a
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r3 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Hight_Accuracy
            goto La0
        L9a:
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode[] r5 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.values()
            r3 = r5[r3]
        La0:
            r7.o = r3
            byte r3 = r8.readByte()
            if (r3 == 0) goto Laa
            r3 = 1
            goto Lab
        Laa:
            r3 = 0
        Lab:
            r7.q = r3
            byte r3 = r8.readByte()
            if (r3 == 0) goto Lb5
            r3 = 1
            goto Lb6
        Lb5:
            r3 = 0
        Lb6:
            r7.r = r3
            byte r3 = r8.readByte()
            if (r3 == 0) goto Lc0
            r3 = 1
            goto Lc1
        Lc0:
            r3 = 0
        Lc1:
            r7.D = r3
            byte r3 = r8.readByte()
            if (r3 == 0) goto Lcb
            r3 = 1
            goto Lcc
        Lcb:
            r3 = 0
        Lcc:
            r7.E = r3
            byte r3 = r8.readByte()
            if (r3 == 0) goto Ld6
            r3 = 1
            goto Ld7
        Ld6:
            r3 = 0
        Ld7:
            r7.s = r3
            byte r3 = r8.readByte()
            if (r3 == 0) goto Le1
            r3 = 1
            goto Le2
        Le1:
            r3 = 0
        Le2:
            r7.t = r3
            byte r3 = r8.readByte()
            if (r3 == 0) goto Lec
            r3 = 1
            goto Led
        Lec:
            r3 = 0
        Led:
            r7.u = r3
            byte r3 = r8.readByte()
            if (r3 == 0) goto Lf7
            r3 = 1
            goto Lf8
        Lf7:
            r3 = 0
        Lf8:
            r7.v = r3
            byte r3 = r8.readByte()
            if (r3 == 0) goto L102
            r3 = 1
            goto L103
        L102:
            r3 = 0
        L103:
            r7.w = r3
            long r5 = r8.readLong()
            r7.x = r5
            int r3 = r8.readInt()
            if (r3 != r4) goto L114
            com.amap.api.location.AMapLocationClientOption$AMapLocationProtocol r3 = com.amap.api.location.AMapLocationClientOption.AMapLocationProtocol.HTTP
            goto L11a
        L114:
            com.amap.api.location.AMapLocationClientOption$AMapLocationProtocol[] r5 = com.amap.api.location.AMapLocationClientOption.AMapLocationProtocol.values()
            r3 = r5[r3]
        L11a:
            com.amap.api.location.AMapLocationClientOption.p = r3
            int r3 = r8.readInt()
            if (r3 != r4) goto L125
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r3 = com.amap.api.location.AMapLocationClientOption.GeoLanguage.DEFAULT
            goto L12b
        L125:
            com.amap.api.location.AMapLocationClientOption$GeoLanguage[] r5 = com.amap.api.location.AMapLocationClientOption.GeoLanguage.values()
            r3 = r5[r3]
        L12b:
            r7.z = r3
            float r3 = r8.readFloat()
            r7.F = r3
            int r3 = r8.readInt()
            if (r3 != r4) goto L13a
            goto L140
        L13a:
            com.amap.api.location.AMapLocationClientOption$AMapLocationPurpose[] r2 = com.amap.api.location.AMapLocationClientOption.AMapLocationPurpose.values()
            r2 = r2[r3]
        L140:
            r7.G = r2
            byte r2 = r8.readByte()
            if (r2 == 0) goto L149
            r0 = 1
        L149:
            com.amap.api.location.AMapLocationClientOption.OPEN_ALWAYS_SCAN_WIFI = r0
            long r0 = r8.readLong()
            r7.y = r0
            return
    }

    private com.amap.api.location.AMapLocationClientOption a(com.amap.api.location.AMapLocationClientOption r3) {
            r2 = this;
            long r0 = r3.h
            r2.h = r0
            boolean r0 = r3.j
            r2.j = r0
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r0 = r3.o
            r2.o = r0
            boolean r0 = r3.k
            r2.k = r0
            boolean r0 = r3.q
            r2.q = r0
            boolean r0 = r3.r
            r2.r = r0
            boolean r0 = r3.D
            r2.D = r0
            boolean r0 = r3.l
            r2.l = r0
            boolean r0 = r3.m
            r2.m = r0
            long r0 = r3.i
            r2.i = r0
            boolean r0 = r3.s
            r2.s = r0
            boolean r0 = r3.t
            r2.t = r0
            boolean r0 = r3.u
            r2.u = r0
            boolean r0 = r3.isSensorEnable()
            r2.v = r0
            boolean r0 = r3.isWifiScan()
            r2.w = r0
            long r0 = r3.x
            r2.x = r0
            com.amap.api.location.AMapLocationClientOption$AMapLocationProtocol r0 = r3.getLocationProtocol()
            setLocationProtocol(r0)
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r0 = r3.z
            r2.z = r0
            boolean r0 = isDownloadCoordinateConvertLibrary()
            setDownloadCoordinateConvertLibrary(r0)
            float r0 = r3.F
            r2.F = r0
            com.amap.api.location.AMapLocationClientOption$AMapLocationPurpose r0 = r3.G
            r2.G = r0
            boolean r0 = isOpenAlwaysScanWifi()
            setOpenAlwaysScanWifi(r0)
            long r0 = r3.getScanWifiInterval()
            setScanWifiInterval(r0)
            long r0 = r3.y
            r2.y = r0
            int r0 = r3.getCacheTimeOut()
            r2.C = r0
            boolean r0 = r3.getCacheCallBack()
            r2.A = r0
            int r0 = r3.getCacheCallBackTime()
            r2.B = r0
            boolean r3 = r3.isSelfStartServiceEnable()
            r2.E = r3
            return r2
    }

    public static java.lang.String getAPIKEY() {
            java.lang.String r0 = com.amap.api.location.AMapLocationClientOption.a
            return r0
    }

    public static boolean isDownloadCoordinateConvertLibrary() {
            r0 = 0
            return r0
    }

    public static boolean isOpenAlwaysScanWifi() {
            boolean r0 = com.amap.api.location.AMapLocationClientOption.OPEN_ALWAYS_SCAN_WIFI
            return r0
    }

    public static void setDownloadCoordinateConvertLibrary(boolean r0) {
            return
    }

    public static void setLocationProtocol(com.amap.api.location.AMapLocationClientOption.AMapLocationProtocol r0) {
            com.amap.api.location.AMapLocationClientOption.p = r0
            return
    }

    public static void setOpenAlwaysScanWifi(boolean r0) {
            com.amap.api.location.AMapLocationClientOption.OPEN_ALWAYS_SCAN_WIFI = r0
            return
    }

    public static void setScanWifiInterval(long r0) {
            com.amap.api.location.AMapLocationClientOption.SCAN_WIFI_INTERVAL = r0
            return
    }

    public com.amap.api.location.AMapLocationClientOption clone() {
            r1 = this;
            super.clone()     // Catch: java.lang.Throwable -> L4
            goto L8
        L4:
            r0 = move-exception
            r0.printStackTrace()
        L8:
            com.amap.api.location.AMapLocationClientOption r0 = new com.amap.api.location.AMapLocationClientOption
            r0.<init>()
            com.amap.api.location.AMapLocationClientOption r0 = r0.a(r1)
            return r0
    }

    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            com.amap.api.location.AMapLocationClientOption r0 = r1.clone()
            return r0
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public boolean getCacheCallBack() {
            r1 = this;
            boolean r0 = r1.A
            return r0
    }

    public int getCacheCallBackTime() {
            r1 = this;
            int r0 = r1.B
            return r0
    }

    public int getCacheTimeOut() {
            r1 = this;
            int r0 = r1.C
            return r0
    }

    public float getDeviceModeDistanceFilter() {
            r1 = this;
            float r0 = r1.F
            return r0
    }

    public com.amap.api.location.AMapLocationClientOption.GeoLanguage getGeoLanguage() {
            r1 = this;
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r0 = r1.z
            return r0
    }

    public long getGpsFirstTimeout() {
            r2 = this;
            long r0 = r2.y
            return r0
    }

    public long getHttpTimeOut() {
            r2 = this;
            long r0 = r2.i
            return r0
    }

    public long getInterval() {
            r2 = this;
            long r0 = r2.h
            return r0
    }

    public long getLastLocationLifeCycle() {
            r2 = this;
            long r0 = r2.x
            return r0
    }

    public com.amap.api.location.AMapLocationClientOption.AMapLocationMode getLocationMode() {
            r1 = this;
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r0 = r1.o
            return r0
    }

    public com.amap.api.location.AMapLocationClientOption.AMapLocationProtocol getLocationProtocol() {
            r1 = this;
            com.amap.api.location.AMapLocationClientOption$AMapLocationProtocol r0 = com.amap.api.location.AMapLocationClientOption.p
            return r0
    }

    public com.amap.api.location.AMapLocationClientOption.AMapLocationPurpose getLocationPurpose() {
            r1 = this;
            com.amap.api.location.AMapLocationClientOption$AMapLocationPurpose r0 = r1.G
            return r0
    }

    public long getScanWifiInterval() {
            r2 = this;
            long r0 = com.amap.api.location.AMapLocationClientOption.SCAN_WIFI_INTERVAL
            return r0
    }

    public boolean isBeidouFirst() {
            r1 = this;
            boolean r0 = r1.D
            return r0
    }

    public boolean isGpsFirst() {
            r1 = this;
            boolean r0 = r1.r
            return r0
    }

    public boolean isKillProcess() {
            r1 = this;
            boolean r0 = r1.q
            return r0
    }

    public boolean isLocationCacheEnable() {
            r1 = this;
            boolean r0 = r1.t
            return r0
    }

    public boolean isMockEnable() {
            r1 = this;
            boolean r0 = r1.k
            return r0
    }

    public boolean isNeedAddress() {
            r1 = this;
            boolean r0 = r1.l
            return r0
    }

    public boolean isOffset() {
            r1 = this;
            boolean r0 = r1.s
            return r0
    }

    public boolean isOnceLocation() {
            r1 = this;
            boolean r0 = r1.j
            return r0
    }

    public boolean isOnceLocationLatest() {
            r1 = this;
            boolean r0 = r1.u
            return r0
    }

    public boolean isSelfStartServiceEnable() {
            r1 = this;
            boolean r0 = r1.E
            return r0
    }

    public boolean isSensorEnable() {
            r1 = this;
            boolean r0 = r1.v
            return r0
    }

    public boolean isWifiActiveScan() {
            r1 = this;
            boolean r0 = r1.m
            return r0
    }

    public boolean isWifiScan() {
            r1 = this;
            boolean r0 = r1.w
            return r0
    }

    public com.amap.api.location.AMapLocationClientOption setBeidouFirst(boolean r1) {
            r0 = this;
            r0.D = r1
            return r0
    }

    public void setCacheCallBack(boolean r1) {
            r0 = this;
            r0.A = r1
            return
    }

    public void setCacheCallBackTime(int r1) {
            r0 = this;
            r0.B = r1
            return
    }

    public void setCacheTimeOut(int r1) {
            r0 = this;
            r0.C = r1
            return
    }

    public com.amap.api.location.AMapLocationClientOption setDeviceModeDistanceFilter(float r3) {
            r2 = this;
            r0 = 0
            int r1 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r1 >= 0) goto L6
            r3 = 0
        L6:
            r2.F = r3
            return r2
    }

    public com.amap.api.location.AMapLocationClientOption setGeoLanguage(com.amap.api.location.AMapLocationClientOption.GeoLanguage r1) {
            r0 = this;
            r0.z = r1
            return r0
    }

    public com.amap.api.location.AMapLocationClientOption setGpsFirst(boolean r1) {
            r0 = this;
            r0.r = r1
            return r0
    }

    public com.amap.api.location.AMapLocationClientOption setGpsFirstTimeout(long r4) {
            r3 = this;
            r0 = 5000(0x1388, double:2.4703E-320)
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 >= 0) goto L7
            r4 = r0
        L7:
            r0 = 30000(0x7530, double:1.4822E-319)
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 <= 0) goto Le
            r4 = r0
        Le:
            r3.y = r4
            return r3
    }

    public com.amap.api.location.AMapLocationClientOption setHttpTimeOut(long r1) {
            r0 = this;
            r0.i = r1
            return r0
    }

    public com.amap.api.location.AMapLocationClientOption setInterval(long r4) {
            r3 = this;
            r0 = 800(0x320, double:3.953E-321)
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 > 0) goto L7
            r4 = r0
        L7:
            r3.h = r4
            return r3
    }

    public com.amap.api.location.AMapLocationClientOption setKillProcess(boolean r1) {
            r0 = this;
            r0.q = r1
            return r0
    }

    public com.amap.api.location.AMapLocationClientOption setLastLocationLifeCycle(long r1) {
            r0 = this;
            r0.x = r1
            return r0
    }

    public com.amap.api.location.AMapLocationClientOption setLocationCacheEnable(boolean r1) {
            r0 = this;
            r0.t = r1
            return r0
    }

    public com.amap.api.location.AMapLocationClientOption setLocationMode(com.amap.api.location.AMapLocationClientOption.AMapLocationMode r1) {
            r0 = this;
            r0.o = r1
            return r0
    }

    public com.amap.api.location.AMapLocationClientOption setLocationPurpose(com.amap.api.location.AMapLocationClientOption.AMapLocationPurpose r5) {
            r4 = this;
            r4.G = r5
            if (r5 == 0) goto L6e
            int[] r0 = com.amap.api.location.AMapLocationClientOption.2.a
            int r5 = r5.ordinal()
            r5 = r0[r5]
            r0 = 0
            r1 = 1
            if (r5 == r1) goto L4b
            r2 = 2
            if (r5 == r2) goto L27
            r2 = 3
            if (r5 == r2) goto L17
            goto L6e
        L17:
            int r5 = com.amap.api.location.AMapLocationClientOption.d
            int r2 = com.amap.api.location.AMapLocationClientOption.g
            r3 = r5 & r2
            if (r3 != 0) goto L38
            r4.b = r1
            r5 = r5 | r2
            com.amap.api.location.AMapLocationClientOption.d = r5
            java.lang.String r5 = "sport"
            goto L36
        L27:
            int r5 = com.amap.api.location.AMapLocationClientOption.d
            int r2 = com.amap.api.location.AMapLocationClientOption.f
            r3 = r5 & r2
            if (r3 != 0) goto L38
            r4.b = r1
            r5 = r5 | r2
            com.amap.api.location.AMapLocationClientOption.d = r5
            java.lang.String r5 = "transport"
        L36:
            r4.c = r5
        L38:
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r5 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Hight_Accuracy
            r4.o = r5
            r4.j = r0
            r4.u = r0
            r4.r = r1
            r4.D = r0
            r4.E = r1
            r4.k = r0
            r4.w = r1
            goto L6e
        L4b:
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r5 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Hight_Accuracy
            r4.o = r5
            r4.j = r1
            r4.u = r1
            r4.r = r0
            r4.D = r0
            r4.k = r0
            r4.w = r1
            r4.E = r1
            int r5 = com.amap.api.location.AMapLocationClientOption.d
            int r0 = com.amap.api.location.AMapLocationClientOption.e
            r2 = r5 & r0
            if (r2 != 0) goto L6e
            r4.b = r1
            r5 = r5 | r0
            com.amap.api.location.AMapLocationClientOption.d = r5
            java.lang.String r5 = "signin"
            r4.c = r5
        L6e:
            return r4
    }

    public com.amap.api.location.AMapLocationClientOption setMockEnable(boolean r1) {
            r0 = this;
            r0.k = r1
            return r0
    }

    public com.amap.api.location.AMapLocationClientOption setNeedAddress(boolean r1) {
            r0 = this;
            r0.l = r1
            return r0
    }

    public com.amap.api.location.AMapLocationClientOption setOffset(boolean r1) {
            r0 = this;
            r0.s = r1
            return r0
    }

    public com.amap.api.location.AMapLocationClientOption setOnceLocation(boolean r1) {
            r0 = this;
            r0.j = r1
            return r0
    }

    public com.amap.api.location.AMapLocationClientOption setOnceLocationLatest(boolean r1) {
            r0 = this;
            r0.u = r1
            return r0
    }

    public void setSelfStartServiceEnable(boolean r1) {
            r0 = this;
            r0.E = r1
            return
    }

    public com.amap.api.location.AMapLocationClientOption setSensorEnable(boolean r1) {
            r0 = this;
            r0.v = r1
            return r0
    }

    public com.amap.api.location.AMapLocationClientOption setWifiActiveScan(boolean r1) {
            r0 = this;
            r0.m = r1
            r0.n = r1
            return r0
    }

    public com.amap.api.location.AMapLocationClientOption setWifiScan(boolean r1) {
            r0 = this;
            r0.w = r1
            if (r1 == 0) goto L7
            boolean r1 = r0.n
            goto L8
        L7:
            r1 = 0
        L8:
            r0.m = r1
            return r0
    }

    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "interval:"
            r0.append(r1)
            long r1 = r4.h
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.append(r1)
            java.lang.String r1 = "#"
            r0.append(r1)
            java.lang.String r2 = "isOnceLocation:"
            r0.append(r2)
            boolean r2 = r4.j
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "locationMode:"
            r0.append(r2)
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r2 = r4.o
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "locationProtocol:"
            r0.append(r2)
            com.amap.api.location.AMapLocationClientOption$AMapLocationProtocol r2 = com.amap.api.location.AMapLocationClientOption.p
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "isMockEnable:"
            r0.append(r2)
            boolean r2 = r4.k
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "isKillProcess:"
            r0.append(r2)
            boolean r2 = r4.q
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "isGpsFirst:"
            r0.append(r2)
            boolean r2 = r4.r
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "isBeidouFirst:"
            r0.append(r2)
            boolean r2 = r4.D
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "isSelfStartServiceEnable:"
            r0.append(r2)
            boolean r2 = r4.E
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "isNeedAddress:"
            r0.append(r2)
            boolean r2 = r4.l
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "isWifiActiveScan:"
            r0.append(r2)
            boolean r2 = r4.m
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "wifiScan:"
            r0.append(r2)
            boolean r2 = r4.w
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "httpTimeOut:"
            r0.append(r2)
            long r2 = r4.i
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "isLocationCacheEnable:"
            r0.append(r2)
            boolean r2 = r4.t
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "isOnceLocationLatest:"
            r0.append(r2)
            boolean r2 = r4.u
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "sensorEnable:"
            r0.append(r2)
            boolean r2 = r4.v
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "geoLanguage:"
            r0.append(r2)
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r2 = r4.z
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "locationPurpose:"
            r0.append(r2)
            com.amap.api.location.AMapLocationClientOption$AMapLocationPurpose r2 = r4.G
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "callback:"
            r0.append(r2)
            boolean r2 = r4.A
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "time:"
            r0.append(r2)
            int r2 = r4.B
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r4, int r5) {
            r3 = this;
            long r0 = r3.h
            r4.writeLong(r0)
            long r0 = r3.i
            r4.writeLong(r0)
            boolean r5 = r3.j
            r4.writeByte(r5)
            boolean r5 = r3.k
            r4.writeByte(r5)
            boolean r5 = r3.l
            r4.writeByte(r5)
            boolean r5 = r3.m
            r4.writeByte(r5)
            boolean r5 = r3.n
            r4.writeByte(r5)
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r5 = r3.o
            r0 = -1
            if (r5 != 0) goto L2a
            r5 = -1
            goto L2e
        L2a:
            int r5 = r5.ordinal()
        L2e:
            r4.writeInt(r5)
            boolean r5 = r3.q
            r4.writeByte(r5)
            boolean r5 = r3.r
            r4.writeByte(r5)
            boolean r5 = r3.D
            r4.writeByte(r5)
            boolean r5 = r3.E
            r4.writeByte(r5)
            boolean r5 = r3.s
            r4.writeByte(r5)
            boolean r5 = r3.t
            r4.writeByte(r5)
            boolean r5 = r3.u
            r4.writeByte(r5)
            boolean r5 = r3.v
            r4.writeByte(r5)
            boolean r5 = r3.w
            r4.writeByte(r5)
            long r1 = r3.x
            r4.writeLong(r1)
            com.amap.api.location.AMapLocationClientOption$AMapLocationProtocol r5 = com.amap.api.location.AMapLocationClientOption.p
            if (r5 != 0) goto L69
            r5 = -1
            goto L71
        L69:
            com.amap.api.location.AMapLocationClientOption$AMapLocationProtocol r5 = r3.getLocationProtocol()
            int r5 = r5.ordinal()
        L71:
            r4.writeInt(r5)
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r5 = r3.z
            if (r5 != 0) goto L7a
            r5 = -1
            goto L7e
        L7a:
            int r5 = r5.ordinal()
        L7e:
            r4.writeInt(r5)
            float r5 = r3.F
            r4.writeFloat(r5)
            com.amap.api.location.AMapLocationClientOption$AMapLocationPurpose r5 = r3.G
            if (r5 != 0) goto L8b
            goto L8f
        L8b:
            int r0 = r5.ordinal()
        L8f:
            r4.writeInt(r0)
            boolean r5 = com.amap.api.location.AMapLocationClientOption.OPEN_ALWAYS_SCAN_WIFI
            r4.writeInt(r5)
            long r0 = r3.y
            r4.writeLong(r0)
            return
    }
}

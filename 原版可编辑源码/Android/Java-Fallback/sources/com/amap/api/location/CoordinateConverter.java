package com.amap.api.location;

public class CoordinateConverter {
    private static int b = 0;
    private static int c = 1;
    private static int d = 2;
    private static int e = 4;
    private static int f = 8;
    private static int g = 16;
    private static int h = 32;
    private static int i = 64;
    com.amap.api.location.DPoint a;
    private android.content.Context j;
    private com.amap.api.location.CoordinateConverter.CoordType k;
    private com.amap.api.location.DPoint l;

    static class 1 {
        static final int[] a = null;

        static {
                com.amap.api.location.CoordinateConverter$CoordType[] r0 = com.amap.api.location.CoordinateConverter.CoordType.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.amap.api.location.CoordinateConverter.1.a = r0
                com.amap.api.location.CoordinateConverter$CoordType r1 = com.amap.api.location.CoordinateConverter.CoordType.BAIDU     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.amap.api.location.CoordinateConverter.1.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.amap.api.location.CoordinateConverter$CoordType r1 = com.amap.api.location.CoordinateConverter.CoordType.MAPBAR     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.amap.api.location.CoordinateConverter.1.a     // Catch: java.lang.NoSuchFieldError -> L28
                com.amap.api.location.CoordinateConverter$CoordType r1 = com.amap.api.location.CoordinateConverter.CoordType.MAPABC     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.amap.api.location.CoordinateConverter.1.a     // Catch: java.lang.NoSuchFieldError -> L33
                com.amap.api.location.CoordinateConverter$CoordType r1 = com.amap.api.location.CoordinateConverter.CoordType.SOSOMAP     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                int[] r0 = com.amap.api.location.CoordinateConverter.1.a     // Catch: java.lang.NoSuchFieldError -> L3e
                com.amap.api.location.CoordinateConverter$CoordType r1 = com.amap.api.location.CoordinateConverter.CoordType.ALIYUN     // Catch: java.lang.NoSuchFieldError -> L3e
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L3e
                r2 = 5
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L3e
            L3e:
                int[] r0 = com.amap.api.location.CoordinateConverter.1.a     // Catch: java.lang.NoSuchFieldError -> L49
                com.amap.api.location.CoordinateConverter$CoordType r1 = com.amap.api.location.CoordinateConverter.CoordType.GOOGLE     // Catch: java.lang.NoSuchFieldError -> L49
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L49
                r2 = 6
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L49
            L49:
                int[] r0 = com.amap.api.location.CoordinateConverter.1.a     // Catch: java.lang.NoSuchFieldError -> L54
                com.amap.api.location.CoordinateConverter$CoordType r1 = com.amap.api.location.CoordinateConverter.CoordType.GPS     // Catch: java.lang.NoSuchFieldError -> L54
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L54
                r2 = 7
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L54
            L54:
                return
        }
    }

    public enum CoordType extends java.lang.Enum<com.amap.api.location.CoordinateConverter.CoordType> {
        public static final com.amap.api.location.CoordinateConverter.CoordType ALIYUN = null;
        public static final com.amap.api.location.CoordinateConverter.CoordType BAIDU = null;
        public static final com.amap.api.location.CoordinateConverter.CoordType GOOGLE = null;
        public static final com.amap.api.location.CoordinateConverter.CoordType GPS = null;
        public static final com.amap.api.location.CoordinateConverter.CoordType MAPABC = null;
        public static final com.amap.api.location.CoordinateConverter.CoordType MAPBAR = null;
        public static final com.amap.api.location.CoordinateConverter.CoordType SOSOMAP = null;
        private static final com.amap.api.location.CoordinateConverter.CoordType[] a = null;

        static {
                com.amap.api.location.CoordinateConverter$CoordType r0 = new com.amap.api.location.CoordinateConverter$CoordType
                r1 = 0
                java.lang.String r2 = "BAIDU"
                r0.<init>(r2, r1)
                com.amap.api.location.CoordinateConverter.CoordType.BAIDU = r0
                com.amap.api.location.CoordinateConverter$CoordType r0 = new com.amap.api.location.CoordinateConverter$CoordType
                r2 = 1
                java.lang.String r3 = "MAPBAR"
                r0.<init>(r3, r2)
                com.amap.api.location.CoordinateConverter.CoordType.MAPBAR = r0
                com.amap.api.location.CoordinateConverter$CoordType r0 = new com.amap.api.location.CoordinateConverter$CoordType
                r3 = 2
                java.lang.String r4 = "MAPABC"
                r0.<init>(r4, r3)
                com.amap.api.location.CoordinateConverter.CoordType.MAPABC = r0
                com.amap.api.location.CoordinateConverter$CoordType r0 = new com.amap.api.location.CoordinateConverter$CoordType
                r4 = 3
                java.lang.String r5 = "SOSOMAP"
                r0.<init>(r5, r4)
                com.amap.api.location.CoordinateConverter.CoordType.SOSOMAP = r0
                com.amap.api.location.CoordinateConverter$CoordType r0 = new com.amap.api.location.CoordinateConverter$CoordType
                r5 = 4
                java.lang.String r6 = "ALIYUN"
                r0.<init>(r6, r5)
                com.amap.api.location.CoordinateConverter.CoordType.ALIYUN = r0
                com.amap.api.location.CoordinateConverter$CoordType r0 = new com.amap.api.location.CoordinateConverter$CoordType
                r6 = 5
                java.lang.String r7 = "GOOGLE"
                r0.<init>(r7, r6)
                com.amap.api.location.CoordinateConverter.CoordType.GOOGLE = r0
                com.amap.api.location.CoordinateConverter$CoordType r0 = new com.amap.api.location.CoordinateConverter$CoordType
                r7 = 6
                java.lang.String r8 = "GPS"
                r0.<init>(r8, r7)
                com.amap.api.location.CoordinateConverter.CoordType.GPS = r0
                r8 = 7
                com.amap.api.location.CoordinateConverter$CoordType[] r8 = new com.amap.api.location.CoordinateConverter.CoordType[r8]
                com.amap.api.location.CoordinateConverter$CoordType r9 = com.amap.api.location.CoordinateConverter.CoordType.BAIDU
                r8[r1] = r9
                com.amap.api.location.CoordinateConverter$CoordType r1 = com.amap.api.location.CoordinateConverter.CoordType.MAPBAR
                r8[r2] = r1
                com.amap.api.location.CoordinateConverter$CoordType r1 = com.amap.api.location.CoordinateConverter.CoordType.MAPABC
                r8[r3] = r1
                com.amap.api.location.CoordinateConverter$CoordType r1 = com.amap.api.location.CoordinateConverter.CoordType.SOSOMAP
                r8[r4] = r1
                com.amap.api.location.CoordinateConverter$CoordType r1 = com.amap.api.location.CoordinateConverter.CoordType.ALIYUN
                r8[r5] = r1
                com.amap.api.location.CoordinateConverter$CoordType r1 = com.amap.api.location.CoordinateConverter.CoordType.GOOGLE
                r8[r6] = r1
                r8[r7] = r0
                com.amap.api.location.CoordinateConverter.CoordType.a = r8
                return
        }

        CoordType(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.amap.api.location.CoordinateConverter.CoordType valueOf(java.lang.String r1) {
                java.lang.Class<com.amap.api.location.CoordinateConverter$CoordType> r0 = com.amap.api.location.CoordinateConverter.CoordType.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.amap.api.location.CoordinateConverter$CoordType r1 = (com.amap.api.location.CoordinateConverter.CoordType) r1
                return r1
        }

        public static com.amap.api.location.CoordinateConverter.CoordType[] values() {
                com.amap.api.location.CoordinateConverter$CoordType[] r0 = com.amap.api.location.CoordinateConverter.CoordType.a
                java.lang.Object r0 = r0.clone()
                com.amap.api.location.CoordinateConverter$CoordType[] r0 = (com.amap.api.location.CoordinateConverter.CoordType[]) r0
                return r0
        }
    }

    static {
            return
    }

    public CoordinateConverter(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.k = r0
            r1.l = r0
            r1.a = r0
            r1.j = r2
            return
    }

    public static float calculateLineDistance(com.amap.api.location.DPoint r0, com.amap.api.location.DPoint r1) {
            float r0 = com.loc.fz.a(r0, r1)     // Catch: java.lang.Throwable -> L5
            return r0
        L5:
            r0 = 0
            return r0
    }

    public static boolean isAMapDataAvailable(double r0, double r2) {
            boolean r0 = com.loc.fr.a(r0, r2)
            return r0
    }

    public synchronized com.amap.api.location.DPoint convert() throws java.lang.Exception {
            r5 = this;
            monitor-enter(r5)
            com.amap.api.location.CoordinateConverter$CoordType r0 = r5.k     // Catch: java.lang.Throwable -> L132
            if (r0 == 0) goto L12a
            com.amap.api.location.DPoint r0 = r5.l     // Catch: java.lang.Throwable -> L132
            if (r0 == 0) goto L122
            com.amap.api.location.DPoint r0 = r5.l     // Catch: java.lang.Throwable -> L132
            double r0 = r0.getLongitude()     // Catch: java.lang.Throwable -> L132
            r2 = 4640537203540230144(0x4066800000000000, double:180.0)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 > 0) goto L11a
            com.amap.api.location.DPoint r0 = r5.l     // Catch: java.lang.Throwable -> L132
            double r0 = r0.getLongitude()     // Catch: java.lang.Throwable -> L132
            r2 = -4582834833314545664(0xc066800000000000, double:-180.0)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 < 0) goto L11a
            com.amap.api.location.DPoint r0 = r5.l     // Catch: java.lang.Throwable -> L132
            double r0 = r0.getLatitude()     // Catch: java.lang.Throwable -> L132
            r2 = 4636033603912859648(0x4056800000000000, double:90.0)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 > 0) goto L112
            com.amap.api.location.DPoint r0 = r5.l     // Catch: java.lang.Throwable -> L132
            double r0 = r0.getLatitude()     // Catch: java.lang.Throwable -> L132
            r2 = -4587338432941916160(0xc056800000000000, double:-90.0)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 < 0) goto L112
            r0 = 0
            r1 = 0
            int[] r2 = com.amap.api.location.CoordinateConverter.1.a     // Catch: java.lang.Throwable -> L132
            com.amap.api.location.CoordinateConverter$CoordType r3 = r5.k     // Catch: java.lang.Throwable -> L132
            int r3 = r3.ordinal()     // Catch: java.lang.Throwable -> L132
            r2 = r2[r3]     // Catch: java.lang.Throwable -> L132
            r3 = 1
            switch(r2) {
                case 1: goto Ldc;
                case 2: goto Lc4;
                case 3: goto Lb0;
                case 4: goto L9c;
                case 5: goto L88;
                case 6: goto L74;
                case 7: goto L57;
                default: goto L55;
            }     // Catch: java.lang.Throwable -> L132
        L55:
            goto Lf5
        L57:
            int r2 = com.amap.api.location.CoordinateConverter.b     // Catch: java.lang.Throwable -> L132
            int r4 = com.amap.api.location.CoordinateConverter.i     // Catch: java.lang.Throwable -> L132
            r2 = r2 & r4
            if (r2 != 0) goto L68
            java.lang.String r1 = "gps"
            int r0 = com.amap.api.location.CoordinateConverter.b     // Catch: java.lang.Throwable -> L132
            int r2 = com.amap.api.location.CoordinateConverter.i     // Catch: java.lang.Throwable -> L132
            r0 = r0 | r2
            com.amap.api.location.CoordinateConverter.b = r0     // Catch: java.lang.Throwable -> L132
            r0 = 1
        L68:
            android.content.Context r2 = r5.j     // Catch: java.lang.Throwable -> L132
            com.amap.api.location.DPoint r3 = r5.l     // Catch: java.lang.Throwable -> L132
            com.amap.api.location.DPoint r2 = com.loc.fu.a(r2, r3)     // Catch: java.lang.Throwable -> L132
        L70:
            r5.a = r2     // Catch: java.lang.Throwable -> L132
            goto Lf5
        L74:
            int r2 = com.amap.api.location.CoordinateConverter.b     // Catch: java.lang.Throwable -> L132
            int r4 = com.amap.api.location.CoordinateConverter.h     // Catch: java.lang.Throwable -> L132
            r2 = r2 & r4
            if (r2 != 0) goto L85
            java.lang.String r1 = "google"
            int r0 = com.amap.api.location.CoordinateConverter.b     // Catch: java.lang.Throwable -> L132
            int r2 = com.amap.api.location.CoordinateConverter.h     // Catch: java.lang.Throwable -> L132
            r0 = r0 | r2
            com.amap.api.location.CoordinateConverter.b = r0     // Catch: java.lang.Throwable -> L132
            r0 = 1
        L85:
            com.amap.api.location.DPoint r2 = r5.l     // Catch: java.lang.Throwable -> L132
            goto L70
        L88:
            int r2 = com.amap.api.location.CoordinateConverter.b     // Catch: java.lang.Throwable -> L132
            int r4 = com.amap.api.location.CoordinateConverter.g     // Catch: java.lang.Throwable -> L132
            r2 = r2 & r4
            if (r2 != 0) goto L99
            java.lang.String r1 = "aliyun"
            int r0 = com.amap.api.location.CoordinateConverter.b     // Catch: java.lang.Throwable -> L132
            int r2 = com.amap.api.location.CoordinateConverter.g     // Catch: java.lang.Throwable -> L132
            r0 = r0 | r2
            com.amap.api.location.CoordinateConverter.b = r0     // Catch: java.lang.Throwable -> L132
            r0 = 1
        L99:
            com.amap.api.location.DPoint r2 = r5.l     // Catch: java.lang.Throwable -> L132
            goto L70
        L9c:
            int r2 = com.amap.api.location.CoordinateConverter.b     // Catch: java.lang.Throwable -> L132
            int r4 = com.amap.api.location.CoordinateConverter.f     // Catch: java.lang.Throwable -> L132
            r2 = r2 & r4
            if (r2 != 0) goto Lad
            java.lang.String r1 = "sosomap"
            int r0 = com.amap.api.location.CoordinateConverter.b     // Catch: java.lang.Throwable -> L132
            int r2 = com.amap.api.location.CoordinateConverter.f     // Catch: java.lang.Throwable -> L132
            r0 = r0 | r2
            com.amap.api.location.CoordinateConverter.b = r0     // Catch: java.lang.Throwable -> L132
            r0 = 1
        Lad:
            com.amap.api.location.DPoint r2 = r5.l     // Catch: java.lang.Throwable -> L132
            goto L70
        Lb0:
            int r2 = com.amap.api.location.CoordinateConverter.b     // Catch: java.lang.Throwable -> L132
            int r4 = com.amap.api.location.CoordinateConverter.e     // Catch: java.lang.Throwable -> L132
            r2 = r2 & r4
            if (r2 != 0) goto Lc1
            java.lang.String r1 = "mapabc"
            int r0 = com.amap.api.location.CoordinateConverter.b     // Catch: java.lang.Throwable -> L132
            int r2 = com.amap.api.location.CoordinateConverter.e     // Catch: java.lang.Throwable -> L132
            r0 = r0 | r2
            com.amap.api.location.CoordinateConverter.b = r0     // Catch: java.lang.Throwable -> L132
            r0 = 1
        Lc1:
            com.amap.api.location.DPoint r2 = r5.l     // Catch: java.lang.Throwable -> L132
            goto L70
        Lc4:
            android.content.Context r2 = r5.j     // Catch: java.lang.Throwable -> L132
            com.amap.api.location.DPoint r4 = r5.l     // Catch: java.lang.Throwable -> L132
            com.amap.api.location.DPoint r2 = com.loc.fu.b(r2, r4)     // Catch: java.lang.Throwable -> L132
            r5.a = r2     // Catch: java.lang.Throwable -> L132
            int r2 = com.amap.api.location.CoordinateConverter.b     // Catch: java.lang.Throwable -> L132
            int r4 = com.amap.api.location.CoordinateConverter.d     // Catch: java.lang.Throwable -> L132
            r2 = r2 & r4
            if (r2 != 0) goto Lf5
            java.lang.String r1 = "mapbar"
            int r0 = com.amap.api.location.CoordinateConverter.b     // Catch: java.lang.Throwable -> L132
            int r2 = com.amap.api.location.CoordinateConverter.d     // Catch: java.lang.Throwable -> L132
            goto Lf1
        Ldc:
            com.amap.api.location.DPoint r2 = r5.l     // Catch: java.lang.Throwable -> L132
            com.amap.api.location.DPoint r2 = com.loc.fu.a(r2)     // Catch: java.lang.Throwable -> L132
            r5.a = r2     // Catch: java.lang.Throwable -> L132
            int r2 = com.amap.api.location.CoordinateConverter.b     // Catch: java.lang.Throwable -> L132
            int r4 = com.amap.api.location.CoordinateConverter.c     // Catch: java.lang.Throwable -> L132
            r2 = r2 & r4
            if (r2 != 0) goto Lf5
            java.lang.String r1 = "baidu"
            int r0 = com.amap.api.location.CoordinateConverter.b     // Catch: java.lang.Throwable -> L132
            int r2 = com.amap.api.location.CoordinateConverter.c     // Catch: java.lang.Throwable -> L132
        Lf1:
            r0 = r0 | r2
            com.amap.api.location.CoordinateConverter.b = r0     // Catch: java.lang.Throwable -> L132
            r0 = 1
        Lf5:
            if (r0 == 0) goto L10e
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L132
            r0.<init>()     // Catch: java.lang.Throwable -> L132
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L132
            if (r2 != 0) goto L107
            java.lang.String r2 = "amap_loc_coordinate"
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> L132
        L107:
            android.content.Context r1 = r5.j     // Catch: java.lang.Throwable -> L132
            java.lang.String r2 = "O021"
            com.loc.fx.a(r1, r2, r0)     // Catch: java.lang.Throwable -> L132
        L10e:
            com.amap.api.location.DPoint r0 = r5.a     // Catch: java.lang.Throwable -> L132
            monitor-exit(r5)
            return r0
        L112:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L132
            java.lang.String r1 = "请传入合理纬度"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L132
            throw r0     // Catch: java.lang.Throwable -> L132
        L11a:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L132
            java.lang.String r1 = "请传入合理经度"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L132
            throw r0     // Catch: java.lang.Throwable -> L132
        L122:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L132
            java.lang.String r1 = "转换坐标源不能为空"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L132
            throw r0     // Catch: java.lang.Throwable -> L132
        L12a:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L132
            java.lang.String r1 = "转换坐标类型不能为空"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L132
            throw r0     // Catch: java.lang.Throwable -> L132
        L132:
            r0 = move-exception
            monitor-exit(r5)
            throw r0
    }

    public synchronized com.amap.api.location.CoordinateConverter coord(com.amap.api.location.DPoint r6) throws java.lang.Exception {
            r5 = this;
            monitor-enter(r5)
            if (r6 == 0) goto L4d
            double r0 = r6.getLongitude()     // Catch: java.lang.Throwable -> L4b
            r2 = 4640537203540230144(0x4066800000000000, double:180.0)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 > 0) goto L43
            double r0 = r6.getLongitude()     // Catch: java.lang.Throwable -> L4b
            r2 = -4582834833314545664(0xc066800000000000, double:-180.0)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 < 0) goto L43
            double r0 = r6.getLatitude()     // Catch: java.lang.Throwable -> L4b
            r2 = 4636033603912859648(0x4056800000000000, double:90.0)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 > 0) goto L3b
            double r0 = r6.getLatitude()     // Catch: java.lang.Throwable -> L4b
            r2 = -4587338432941916160(0xc056800000000000, double:-90.0)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 < 0) goto L3b
            r5.l = r6     // Catch: java.lang.Throwable -> L4b
            monitor-exit(r5)
            return r5
        L3b:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L4b
            java.lang.String r0 = "请传入合理纬度"
            r6.<init>(r0)     // Catch: java.lang.Throwable -> L4b
            throw r6     // Catch: java.lang.Throwable -> L4b
        L43:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L4b
            java.lang.String r0 = "请传入合理经度"
            r6.<init>(r0)     // Catch: java.lang.Throwable -> L4b
            throw r6     // Catch: java.lang.Throwable -> L4b
        L4b:
            r6 = move-exception
            goto L55
        L4d:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L4b
            java.lang.String r0 = "传入经纬度对象为空"
            r6.<init>(r0)     // Catch: java.lang.Throwable -> L4b
            throw r6     // Catch: java.lang.Throwable -> L4b
        L55:
            monitor-exit(r5)
            throw r6
    }

    public synchronized com.amap.api.location.CoordinateConverter from(com.amap.api.location.CoordinateConverter.CoordType r1) {
            r0 = this;
            monitor-enter(r0)
            r0.k = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return r0
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }
}

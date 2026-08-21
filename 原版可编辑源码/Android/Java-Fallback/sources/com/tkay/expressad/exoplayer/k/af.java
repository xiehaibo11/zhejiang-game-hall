package com.tkay.expressad.exoplayer.k;

public final class af {
    public static final int a = 0;
    public static final java.lang.String b = null;
    public static final java.lang.String c = null;
    public static final java.lang.String d = null;
    public static final java.lang.String e = null;
    private static final java.lang.String f = "Util";
    private static final java.util.regex.Pattern g = null;
    private static final java.util.regex.Pattern h = null;
    private static final java.util.regex.Pattern i = null;
    private static final int[] j = null;


    static {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 25
            if (r0 != r1) goto L14
            java.lang.String r0 = android.os.Build.VERSION.CODENAME
            r1 = 0
            char r0 = r0.charAt(r1)
            r1 = 79
            if (r0 != r1) goto L14
            r0 = 26
            goto L16
        L14:
            int r0 = android.os.Build.VERSION.SDK_INT
        L16:
            com.tkay.expressad.exoplayer.k.af.a = r0
            java.lang.String r0 = android.os.Build.DEVICE
            com.tkay.expressad.exoplayer.k.af.b = r0
            java.lang.String r0 = android.os.Build.MANUFACTURER
            com.tkay.expressad.exoplayer.k.af.c = r0
            java.lang.String r0 = android.os.Build.MODEL
            com.tkay.expressad.exoplayer.k.af.d = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.tkay.expressad.exoplayer.k.af.b
            r0.append(r1)
            java.lang.String r1 = ", "
            r0.append(r1)
            java.lang.String r2 = com.tkay.expressad.exoplayer.k.af.d
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = com.tkay.expressad.exoplayer.k.af.c
            r0.append(r2)
            r0.append(r1)
            int r1 = com.tkay.expressad.exoplayer.k.af.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.tkay.expressad.exoplayer.k.af.e = r0
            java.lang.String r0 = "(\\d\\d\\d\\d)\\-(\\d\\d)\\-(\\d\\d)[Tt](\\d\\d):(\\d\\d):(\\d\\d)([\\.,](\\d+))?([Zz]|((\\+|\\-)(\\d?\\d):?(\\d\\d)))?"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.tkay.expressad.exoplayer.k.af.g = r0
            java.lang.String r0 = "^(-)?P(([0-9]*)Y)?(([0-9]*)M)?(([0-9]*)D)?(T(([0-9]*)H)?(([0-9]*)M)?(([0-9.]*)S)?)?$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.tkay.expressad.exoplayer.k.af.h = r0
            java.lang.String r0 = "%([A-Fa-f0-9]{2})"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.tkay.expressad.exoplayer.k.af.i = r0
            r0 = 256(0x100, float:3.59E-43)
            int[] r0 = new int[r0]
            r0 = {x0070: FILL_ARRAY_DATA , data: [0, 79764919, 159529838, 222504665, 319059676, 398814059, 445009330, 507990021, 638119352, 583659535, 797628118, 726387553, 890018660, 835552979, 1015980042, 944750013, 1276238704, 1221641927, 1167319070, 1095957929, 1595256236, 1540665371, 1452775106, 1381403509, 1780037320, 1859660671, 1671105958, 1733955601, 2031960084, 2111593891, 1889500026, 1952343757, -1742489888, -1662866601, -1851683442, -1788833735, -1960329156, -1880695413, -2103051438, -2040207643, -1104454824, -1159051537, -1213636554, -1284997759, -1389417084, -1444007885, -1532160278, -1603531939, -734892656, -789352409, -575645954, -646886583, -952755380, -1007220997, -827056094, -898286187, -231047128, -151282273, -71779514, -8804623, -515967244, -436212925, -390279782, -327299027, 881225847, 809987520, 1023691545, 969234094, 662832811, 591600412, 771767749, 717299826, 311336399, 374308984, 453813921, 533576470, 25881363, 88864420, 134795389, 214552010, 2023205639, 2086057648, 1897238633, 1976864222, 1804852699, 1867694188, 1645340341, 1724971778, 1587496639, 1516133128, 1461550545, 1406951526, 1302016099, 1230646740, 1142491917, 1087903418, -1398421865, -1469785312, -1524105735, -1578704818, -1079922613, -1151291908, -1239184603, -1293773166, -1968362705, -1905510760, -2094067647, -2014441994, -1716953613, -1654112188, -1876203875, -1796572374, -525066777, -462094256, -382327159, -302564546, -206542021, -143559028, -97365931, -17609246, -960696225, -1031934488, -817968335, -872425850, -709327229, -780559564, -600130067, -654598054, 1762451694, 1842216281, 1619975040, 1682949687, 2047383090, 2127137669, 1938468188, 2001449195, 1325665622, 1271206113, 1183200824, 1111960463, 1543535498, 1489069629, 1434599652, 1363369299, 622672798, 568075817, 748617968, 677256519, 907627842, 853037301, 1067152940, 995781531, 51762726, 131386257, 177728840, 240578815, 269590778, 349224269, 429104020, 491947555, -248556018, -168932423, -122852000, -60002089, -500490030, -420856475, -341238852, -278395381, -685261898, -739858943, -559578920, -630940305, -1004286614, -1058877219, -845023740, -916395085, -1119974018, -1174433591, -1262701040, -1333941337, -1371866206, -1426332139, -1481064244, -1552294533, -1690935098, -1611170447, -1833673816, -1770699233, -2009983462, -1930228819, -2119160460, -2056179517, 1569362073, 1498123566, 1409854455, 1355396672, 1317987909, 1246755826, 1192025387, 1137557660, 2072149281, 2135122070, 1912620623, 1992383480, 1753615357, 1816598090, 1627664531, 1707420964, 295390185, 358241886, 404320391, 483945776, 43990325, 106832002, 186451547, 266083308, 932423249, 861060070, 1041341759, 986742920, 613929101, 542559546, 756411363, 701822548, -978770311, -1050133554, -869589737, -924188512, -693284699, -764654318, -550540341, -605129092, -475935807, -413084042, -366743377, -287118056, -257573603, -194731862, -114850189, -35218492, -1984365303, -1921392450, -2143631769, -2063868976, -1698919467, -1635936670, -1824608069, -1744851700, -1347415887, -1418654458, -1506661409, -1561119128, -1129027987, -1200260134, -1254728445, -1309196108} // fill-array
            com.tkay.expressad.exoplayer.k.af.j = r0
            return
    }

    private af() {
            r0 = this;
            r0.<init>()
            return
    }

    public static float a(float r1) {
            r0 = 1090519040(0x41000000, float:8.0)
            float r1 = java.lang.Math.min(r1, r0)
            r0 = 1036831949(0x3dcccccd, float:0.1)
            float r1 = java.lang.Math.max(r0, r1)
            return r1
    }

    public static int a(int r0, int r1) {
            int r0 = r0 + r1
            int r0 = r0 + (-1)
            int r0 = r0 / r1
            return r0
    }

    public static int a(int r0, int r1, int r2) {
            int r0 = java.lang.Math.min(r0, r2)
            int r0 = java.lang.Math.max(r1, r0)
            return r0
    }

    private static int a(android.net.Uri r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L13
            java.lang.String r1 = r1.getPath()
            if (r1 != 0) goto Le
            r1 = 3
            return r1
        Le:
            int r1 = l(r1)
            return r1
        L13:
            java.lang.String r1 = java.lang.String.valueOf(r2)
            java.lang.String r2 = "."
            java.lang.String r1 = r2.concat(r1)
            int r1 = l(r1)
            return r1
    }

    private static <T> int a(java.util.List<? extends java.lang.Comparable<? super T>> r2, T r3, boolean r4, boolean r5) {
            int r0 = java.util.Collections.binarySearch(r2, r3)
            if (r0 >= 0) goto La
            int r0 = r0 + 2
            int r2 = -r0
            goto L20
        La:
            int r0 = r0 + (-1)
            if (r0 < 0) goto L1a
            java.lang.Object r1 = r2.get(r0)
            java.lang.Comparable r1 = (java.lang.Comparable) r1
            int r1 = r1.compareTo(r3)
            if (r1 == 0) goto La
        L1a:
            if (r4 == 0) goto L1f
            int r2 = r0 + 1
            goto L20
        L1f:
            r2 = r0
        L20:
            if (r5 == 0) goto L27
            r3 = 0
            int r2 = java.lang.Math.max(r3, r2)
        L27:
            return r2
    }

    private static int a(byte[] r3, int r4, int r5, int r6) {
        L0:
            if (r4 >= r5) goto L15
            int r0 = r6 << 8
            int[] r1 = com.tkay.expressad.exoplayer.k.af.j
            int r6 = r6 >>> 24
            r2 = r3[r4]
            r2 = r2 & 255(0xff, float:3.57E-43)
            r6 = r6 ^ r2
            r6 = r6 & 255(0xff, float:3.57E-43)
            r6 = r1[r6]
            r6 = r6 ^ r0
            int r4 = r4 + 1
            goto L0
        L15:
            return r6
    }

    public static int a(int[] r2, int r3) {
            int r0 = java.util.Arrays.binarySearch(r2, r3)
            if (r0 >= 0) goto La
            int r0 = r0 + 2
            int r2 = -r0
            goto L13
        La:
            int r0 = r0 + (-1)
            if (r0 < 0) goto L12
            r1 = r2[r0]
            if (r1 == r3) goto La
        L12:
            r2 = r0
        L13:
            return r2
    }

    public static int a(long[] r3, long r4, boolean r6) {
            int r0 = java.util.Arrays.binarySearch(r3, r4)
            if (r0 >= 0) goto La
            int r0 = r0 + 2
            int r3 = -r0
            goto L16
        La:
            int r0 = r0 + (-1)
            if (r0 < 0) goto L14
            r1 = r3[r0]
            int r1 = (r1 > r4 ? 1 : (r1 == r4 ? 0 : -1))
            if (r1 == 0) goto La
        L14:
            int r3 = r0 + 1
        L16:
            if (r6 == 0) goto L1d
            r4 = 0
            int r3 = java.lang.Math.max(r4, r3)
        L1d:
            return r3
    }

    public static int a(long[] r3, long r4, boolean r6, boolean r7) {
            int r0 = java.util.Arrays.binarySearch(r3, r4)
            if (r0 >= 0) goto L8
            int r4 = ~r0
            goto L19
        L8:
            int r0 = r0 + 1
            int r1 = r3.length
            if (r0 >= r1) goto L13
            r1 = r3[r0]
            int r1 = (r1 > r4 ? 1 : (r1 == r4 ? 0 : -1))
            if (r1 == 0) goto L8
        L13:
            if (r6 == 0) goto L18
            int r4 = r0 + (-1)
            goto L19
        L18:
            r4 = r0
        L19:
            if (r7 == 0) goto L23
            int r3 = r3.length
            int r3 = r3 + (-1)
            int r3 = java.lang.Math.min(r3, r4)
            return r3
        L23:
            return r4
    }

    public static long a(long r2, float r4) {
            r0 = 1065353216(0x3f800000, float:1.0)
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 != 0) goto L7
            return r2
        L7:
            double r2 = (double) r2
            double r0 = (double) r4
            double r2 = r2 * r0
            long r2 = java.lang.Math.round(r2)
            return r2
    }

    public static long a(long r0, long r2) {
            long r0 = java.lang.Math.min(r0, r2)
            r2 = 0
            long r0 = java.lang.Math.max(r2, r0)
            return r0
    }

    public static long a(long r5, long r7, long r9) {
            int r0 = (r9 > r7 ? 1 : (r9 == r7 ? 0 : -1))
            r1 = 0
            if (r0 < 0) goto Lf
            long r3 = r9 % r7
            int r3 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r3 != 0) goto Lf
            long r9 = r9 / r7
            long r5 = r5 / r9
            return r5
        Lf:
            if (r0 >= 0) goto L1a
            long r3 = r7 % r9
            int r0 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r0 != 0) goto L1a
            long r7 = r7 / r9
            long r5 = r5 * r7
            return r5
        L1a:
            double r7 = (double) r7
            double r9 = (double) r9
            double r7 = r7 / r9
            double r5 = (double) r5
            double r5 = r5 * r7
            long r5 = (long) r5
            return r5
    }

    public static long a(long r11, com.tkay.expressad.exoplayer.ac r13, long r14, long r16) {
            r0 = r13
            com.tkay.expressad.exoplayer.ac r1 = com.tkay.expressad.exoplayer.ac.a
            boolean r1 = r1.equals(r13)
            if (r1 == 0) goto La
            return r11
        La:
            long r1 = r0.f
            long r3 = r11 - r1
            long r1 = r1 ^ r11
            long r5 = r11 ^ r3
            long r1 = r1 & r5
            r5 = 0
            int r1 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r1 >= 0) goto L1a
            r3 = -9223372036854775808
        L1a:
            long r0 = r0.g
            long r7 = r11 + r0
            long r9 = r11 ^ r7
            long r0 = r0 ^ r7
            long r0 = r0 & r9
            int r0 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r0 >= 0) goto L2b
            r7 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
        L2b:
            int r0 = (r3 > r14 ? 1 : (r3 == r14 ? 0 : -1))
            r1 = 1
            r2 = 0
            if (r0 > 0) goto L37
            int r0 = (r14 > r7 ? 1 : (r14 == r7 ? 0 : -1))
            if (r0 > 0) goto L37
            r0 = r1
            goto L38
        L37:
            r0 = r2
        L38:
            int r5 = (r3 > r16 ? 1 : (r3 == r16 ? 0 : -1))
            if (r5 > 0) goto L41
            int r5 = (r16 > r7 ? 1 : (r16 == r7 ? 0 : -1))
            if (r5 > 0) goto L41
            goto L42
        L41:
            r1 = r2
        L42:
            if (r0 == 0) goto L58
            if (r1 == 0) goto L58
            long r0 = r14 - r11
            long r0 = java.lang.Math.abs(r0)
            long r2 = r16 - r11
            long r2 = java.lang.Math.abs(r2)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto L57
            return r14
        L57:
            return r16
        L58:
            if (r0 == 0) goto L5b
            return r14
        L5b:
            if (r1 == 0) goto L5e
            return r16
        L5e:
            return r3
    }

    public static android.content.ComponentName a(android.content.Context r2, android.content.Intent r3) {
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 26
            if (r0 < r1) goto Lb
            android.content.ComponentName r2 = r2.startForegroundService(r3)
            return r2
        Lb:
            android.content.ComponentName r2 = r2.startService(r3)
            return r2
    }

    public static android.graphics.Point a(android.content.Context r1) {
            java.lang.String r0 = "window"
            java.lang.Object r0 = r1.getSystemService(r0)
            android.view.WindowManager r0 = (android.view.WindowManager) r0
            android.view.Display r0 = r0.getDefaultDisplay()
            android.graphics.Point r1 = a(r1, r0)
            return r1
    }

    private static android.graphics.Point a(android.content.Context r7, android.view.Display r8) {
            java.lang.String r0 = "Util"
            int r1 = com.tkay.expressad.exoplayer.k.af.a
            r2 = 25
            if (r1 >= r2) goto Ld9
            int r1 = r8.getDisplayId()
            if (r1 != 0) goto Ld9
            java.lang.String r1 = com.tkay.expressad.exoplayer.k.af.c
            java.lang.String r2 = "Sony"
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L38
            java.lang.String r1 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r2 = "BRAVIA"
            boolean r1 = r1.startsWith(r2)
            if (r1 == 0) goto L38
            android.content.pm.PackageManager r7 = r7.getPackageManager()
            java.lang.String r1 = "com.sony.dtv.hardware.panel.qfhd"
            boolean r7 = r7.hasSystemFeature(r1)
            if (r7 == 0) goto L38
            android.graphics.Point r7 = new android.graphics.Point
            r8 = 3840(0xf00, float:5.381E-42)
            r0 = 2160(0x870, float:3.027E-42)
            r7.<init>(r8, r0)
            return r7
        L38:
            java.lang.String r7 = com.tkay.expressad.exoplayer.k.af.c
            java.lang.String r1 = "NVIDIA"
            boolean r7 = r1.equals(r7)
            if (r7 == 0) goto L4c
            java.lang.String r7 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r1 = "SHIELD"
            boolean r7 = r7.contains(r1)
            if (r7 != 0) goto L78
        L4c:
            java.lang.String r7 = com.tkay.expressad.exoplayer.k.af.c
            java.lang.String r7 = d(r7)
            java.lang.String r1 = "philips"
            boolean r7 = r1.equals(r7)
            if (r7 == 0) goto Ld9
            java.lang.String r7 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r1 = "QM1"
            boolean r7 = r7.startsWith(r1)
            if (r7 != 0) goto L78
            java.lang.String r7 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r1 = "QV151E"
            boolean r7 = r7.equals(r1)
            if (r7 != 0) goto L78
            java.lang.String r7 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r1 = "TPM171E"
            boolean r7 = r7.equals(r1)
            if (r7 == 0) goto Ld9
        L78:
            r7 = 0
            r1 = 0
            r2 = 1
            java.lang.String r3 = "android.os.SystemProperties"
            java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.Exception -> L9b
            java.lang.String r4 = "get"
            java.lang.Class[] r5 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L9b
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r5[r1] = r6     // Catch: java.lang.Exception -> L9b
            java.lang.reflect.Method r4 = r3.getMethod(r4, r5)     // Catch: java.lang.Exception -> L9b
            java.lang.Object[] r5 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L9b
            java.lang.String r6 = "sys.display-size"
            r5[r1] = r6     // Catch: java.lang.Exception -> L9b
            java.lang.Object r3 = r4.invoke(r3, r5)     // Catch: java.lang.Exception -> L9b
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L9b
            r7 = r3
            goto La1
        L9b:
            r3 = move-exception
            java.lang.String r4 = "Failed to read sys.display-size"
            android.util.Log.e(r0, r4, r3)
        La1:
            boolean r3 = android.text.TextUtils.isEmpty(r7)
            if (r3 != 0) goto Ld9
            java.lang.String r3 = r7.trim()     // Catch: java.lang.NumberFormatException -> Lcc
            java.lang.String r4 = "x"
            r5 = -1
            java.lang.String[] r3 = r3.split(r4, r5)     // Catch: java.lang.NumberFormatException -> Lcc
            int r4 = r3.length     // Catch: java.lang.NumberFormatException -> Lcc
            r5 = 2
            if (r4 != r5) goto Lcc
            r1 = r3[r1]     // Catch: java.lang.NumberFormatException -> Lcc
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.NumberFormatException -> Lcc
            r2 = r3[r2]     // Catch: java.lang.NumberFormatException -> Lcc
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.NumberFormatException -> Lcc
            if (r1 <= 0) goto Lcc
            if (r2 <= 0) goto Lcc
            android.graphics.Point r3 = new android.graphics.Point     // Catch: java.lang.NumberFormatException -> Lcc
            r3.<init>(r1, r2)     // Catch: java.lang.NumberFormatException -> Lcc
            return r3
        Lcc:
            java.lang.String r7 = java.lang.String.valueOf(r7)
            java.lang.String r1 = "Invalid sys.display-size: "
            java.lang.String r7 = r1.concat(r7)
            android.util.Log.e(r0, r7)
        Ld9:
            android.graphics.Point r7 = new android.graphics.Point
            r7.<init>()
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 23
            if (r0 < r1) goto Lf5
            android.view.Display$Mode r8 = r8.getMode()
            int r0 = r8.getPhysicalWidth()
            r7.x = r0
            int r8 = r8.getPhysicalHeight()
            r7.y = r8
            goto L111
        Lf5:
            r1 = 17
            if (r0 < r1) goto Lfd
            r8.getRealSize(r7)
            goto L111
        Lfd:
            r1 = 16
            if (r0 < r1) goto L105
            r8.getSize(r7)
            goto L111
        L105:
            int r0 = r8.getWidth()
            r7.x = r0
            int r8 = r8.getHeight()
            r7.y = r8
        L111:
            return r7
    }

    private static java.lang.String a(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = r2.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L10
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L10
            r1 = 0
            android.content.pm.PackageInfo r2 = r2.getPackageInfo(r0, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L10
            java.lang.String r2 = r2.versionName     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L10
            goto L12
        L10:
            java.lang.String r2 = "?"
        L12:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = "/"
            r0.append(r3)
            r0.append(r2)
            java.lang.String r2 = " (Linux;Android "
            r0.append(r2)
            java.lang.String r2 = android.os.Build.VERSION.RELEASE
            r0.append(r2)
            java.lang.String r2 = ") ExoPlayerLib/2.8.4"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    private static java.lang.String a(java.lang.String r6, int r7) {
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.lang.String r6 = r6.trim()
            r0 = -1
            java.lang.String r2 = "(\\s*,\\s*)"
            java.lang.String[] r6 = r6.split(r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r2 = r6.length
            r3 = 0
        L1a:
            if (r3 >= r2) goto L35
            r4 = r6[r3]
            int r5 = com.tkay.expressad.exoplayer.k.o.f(r4)
            if (r7 != r5) goto L32
            int r5 = r0.length()
            if (r5 <= 0) goto L2f
            java.lang.String r5 = ","
            r0.append(r5)
        L2f:
            r0.append(r4)
        L32:
            int r3 = r3 + 1
            goto L1a
        L35:
            int r6 = r0.length()
            if (r6 <= 0) goto L40
            java.lang.String r6 = r0.toString()
            return r6
        L40:
            return r1
    }

    public static java.lang.String a(java.lang.String r1, java.lang.Object... r2) {
            java.util.Locale r0 = java.util.Locale.US
            java.lang.String r1 = java.lang.String.format(r0, r1, r2)
            return r1
    }

    private static java.lang.String a(java.lang.StringBuilder r9, java.util.Formatter r10, long r11) {
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r11 > r0 ? 1 : (r11 == r0 ? 0 : -1))
            r1 = 0
            if (r0 != 0) goto Lc
            r11 = r1
        Lc:
            r3 = 500(0x1f4, double:2.47E-321)
            long r11 = r11 + r3
            r3 = 1000(0x3e8, double:4.94E-321)
            long r11 = r11 / r3
            r3 = 60
            long r5 = r11 % r3
            long r7 = r11 / r3
            long r7 = r7 % r3
            r3 = 3600(0xe10, double:1.7786E-320)
            long r11 = r11 / r3
            r0 = 0
            r9.setLength(r0)
            int r9 = (r11 > r1 ? 1 : (r11 == r1 ? 0 : -1))
            r1 = 1
            r2 = 2
            if (r9 <= 0) goto L46
            r9 = 3
            java.lang.Object[] r9 = new java.lang.Object[r9]
            java.lang.Long r11 = java.lang.Long.valueOf(r11)
            r9[r0] = r11
            java.lang.Long r11 = java.lang.Long.valueOf(r7)
            r9[r1] = r11
            java.lang.Long r11 = java.lang.Long.valueOf(r5)
            r9[r2] = r11
            java.lang.String r11 = "%d:%02d:%02d"
            java.util.Formatter r9 = r10.format(r11, r9)
            java.lang.String r9 = r9.toString()
            return r9
        L46:
            java.lang.Object[] r9 = new java.lang.Object[r2]
            java.lang.Long r11 = java.lang.Long.valueOf(r7)
            r9[r0] = r11
            java.lang.Long r11 = java.lang.Long.valueOf(r5)
            r9[r1] = r11
            java.lang.String r11 = "%02d:%02d"
            java.util.Formatter r9 = r10.format(r11, r9)
            java.lang.String r9 = r9.toString()
            return r9
    }

    public static java.lang.String a(byte[] r2) {
            java.lang.String r0 = new java.lang.String
            java.lang.String r1 = "UTF-8"
            java.nio.charset.Charset r1 = java.nio.charset.Charset.forName(r1)
            r0.<init>(r2, r1)
            return r0
    }

    public static java.lang.String a(byte[] r2, int r3, int r4) {
            java.lang.String r0 = new java.lang.String
            java.lang.String r1 = "UTF-8"
            java.nio.charset.Charset r1 = java.nio.charset.Charset.forName(r1)
            r0.<init>(r2, r3, r4, r1)
            return r0
    }

    public static java.lang.String a(java.lang.Object[] r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
        L6:
            int r2 = r3.length
            if (r1 >= r2) goto L23
            r2 = r3[r1]
            java.lang.Class r2 = r2.getClass()
            java.lang.String r2 = r2.getSimpleName()
            r0.append(r2)
            int r2 = r3.length
            int r2 = r2 + (-1)
            if (r1 >= r2) goto L20
            java.lang.String r2 = ", "
            r0.append(r2)
        L20:
            int r1 = r1 + 1
            goto L6
        L23:
            java.lang.String r3 = r0.toString()
            return r3
    }

    public static java.util.concurrent.ExecutorService a(java.lang.String r1) {
            com.tkay.expressad.exoplayer.k.af$1 r0 = new com.tkay.expressad.exoplayer.k.af$1
            r0.<init>(r1)
            java.util.concurrent.ExecutorService r1 = java.util.concurrent.Executors.newSingleThreadExecutor(r0)
            return r1
    }

    public static void a(android.os.Parcel r0, boolean r1) {
            r0.writeInt(r1)
            return
    }

    private static void a(android.view.Display r1, android.graphics.Point r2) {
            android.view.Display$Mode r1 = r1.getMode()
            int r0 = r1.getPhysicalWidth()
            r2.x = r0
            int r1 = r1.getPhysicalHeight()
            r2.y = r1
            return
    }

    public static void a(com.tkay.expressad.exoplayer.j.h r0) {
            if (r0 == 0) goto L6
            r0.b()     // Catch: java.io.IOException -> L6
        L6:
            return
    }

    public static void a(java.io.Closeable r0) {
            if (r0 == 0) goto L6
            r0.close()     // Catch: java.io.IOException -> L6
        L6:
            return
    }

    private static void a(java.io.File r4) {
            boolean r0 = r4.isDirectory()
            if (r0 == 0) goto L16
            java.io.File[] r0 = r4.listFiles()
            int r1 = r0.length
            r2 = 0
        Lc:
            if (r2 >= r1) goto L16
            r3 = r0[r2]
            a(r3)
            int r2 = r2 + 1
            goto Lc
        L16:
            r4.delete()
            return
    }

    public static void a(java.lang.Throwable r0) {
            throw r0
    }

    public static <T> void a(java.util.List<T> r0, int r1, int r2) {
            java.util.List r0 = r0.subList(r1, r2)
            r0.clear()
            return
    }

    public static void a(long[] r8, long r9) {
            r0 = 1000000(0xf4240, double:4.940656E-318)
            int r2 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
            r3 = 0
            r5 = 0
            if (r2 < 0) goto L1d
            long r6 = r9 % r0
            int r6 = (r6 > r3 ? 1 : (r6 == r3 ? 0 : -1))
            if (r6 != 0) goto L1d
            long r9 = r9 / r0
        L11:
            int r0 = r8.length
            if (r5 >= r0) goto L1c
            r0 = r8[r5]
            long r0 = r0 / r9
            r8[r5] = r0
            int r5 = r5 + 1
            goto L11
        L1c:
            return
        L1d:
            if (r2 >= 0) goto L32
            long r6 = r0 % r9
            int r2 = (r6 > r3 ? 1 : (r6 == r3 ? 0 : -1))
            if (r2 != 0) goto L32
            long r0 = r0 / r9
        L26:
            int r9 = r8.length
            if (r5 >= r9) goto L31
            r9 = r8[r5]
            long r9 = r9 * r0
            r8[r5] = r9
            int r5 = r5 + 1
            goto L26
        L31:
            return
        L32:
            r0 = 4696837146684686336(0x412e848000000000, double:1000000.0)
            double r9 = (double) r9
            double r0 = r0 / r9
        L39:
            int r9 = r8.length
            if (r5 >= r9) goto L46
            r9 = r8[r5]
            double r9 = (double) r9
            double r9 = r9 * r0
            long r9 = (long) r9
            r8[r5] = r9
            int r5 = r5 + 1
            goto L39
        L46:
            return
    }

    private static boolean a() {
            r0 = 0
            return r0
    }

    private static boolean a(char r1) {
            r0 = 34
            if (r1 == r0) goto L2a
            r0 = 37
            if (r1 == r0) goto L2a
            r0 = 42
            if (r1 == r0) goto L2a
            r0 = 47
            if (r1 == r0) goto L2a
            r0 = 58
            if (r1 == r0) goto L2a
            r0 = 60
            if (r1 == r0) goto L2a
            r0 = 92
            if (r1 == r0) goto L2a
            r0 = 124(0x7c, float:1.74E-43)
            if (r1 == r0) goto L2a
            r0 = 62
            if (r1 == r0) goto L2a
            r0 = 63
            if (r1 == r0) goto L2a
            r1 = 0
            return r1
        L2a:
            r1 = 1
            return r1
    }

    public static boolean a(int r1) {
            r0 = 10
            if (r1 == r0) goto Lb
            r0 = 13
            if (r1 != r0) goto L9
            goto Lb
        L9:
            r1 = 0
            return r1
        Lb:
            r1 = 1
            return r1
    }

    public static boolean a(android.net.Uri r1) {
            java.lang.String r1 = r1.getScheme()
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L15
            java.lang.String r0 = "file"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L13
            goto L15
        L13:
            r1 = 0
            return r1
        L15:
            r1 = 1
            return r1
    }

    public static boolean a(android.os.Parcel r0) {
            int r0 = r0.readInt()
            if (r0 == 0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    public static boolean a(java.lang.Object r0, java.lang.Object r1) {
            if (r0 != 0) goto L8
            if (r1 != 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
        L8:
            boolean r0 = r0.equals(r1)
            return r0
    }

    private static boolean a(java.lang.Object[] r4, java.lang.Object r5) {
            int r0 = r4.length
            r1 = 0
            r2 = r1
        L3:
            if (r2 >= r0) goto L12
            r3 = r4[r2]
            boolean r3 = a(r3, r5)
            if (r3 == 0) goto Lf
            r4 = 1
            return r4
        Lf:
            int r2 = r2 + 1
            goto L3
        L12:
            return r1
    }

    private static byte[] a(java.io.InputStream r4) {
            r0 = 4096(0x1000, float:5.74E-42)
            byte[] r0 = new byte[r0]
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream
            r1.<init>()
        L9:
            int r2 = r4.read(r0)
            r3 = -1
            if (r2 == r3) goto L15
            r3 = 0
            r1.write(r0, r3, r2)
            goto L9
        L15:
            byte[] r4 = r1.toByteArray()
            return r4
    }

    public static int[] a(java.util.List<java.lang.Integer> r4) {
            if (r4 != 0) goto L4
            r4 = 0
            return r4
        L4:
            int r0 = r4.size()
            int[] r1 = new int[r0]
            r2 = 0
        Lb:
            if (r2 >= r0) goto L1c
            java.lang.Object r3 = r4.get(r2)
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r3 = r3.intValue()
            r1[r2] = r3
            int r2 = r2 + 1
            goto Lb
        L1c:
            return r1
    }

    private static long[] a(java.util.List<java.lang.Long> r8, long r9, long r11) {
            int r0 = r8.size()
            long[] r1 = new long[r0]
            int r2 = (r11 > r9 ? 1 : (r11 == r9 ? 0 : -1))
            r3 = 0
            r5 = 0
            if (r2 < 0) goto L26
            long r6 = r11 % r9
            int r6 = (r6 > r3 ? 1 : (r6 == r3 ? 0 : -1))
            if (r6 != 0) goto L26
            long r11 = r11 / r9
        L14:
            if (r5 >= r0) goto L58
            java.lang.Object r9 = r8.get(r5)
            java.lang.Long r9 = (java.lang.Long) r9
            long r9 = r9.longValue()
            long r9 = r9 / r11
            r1[r5] = r9
            int r5 = r5 + 1
            goto L14
        L26:
            if (r2 >= 0) goto L41
            long r6 = r9 % r11
            int r2 = (r6 > r3 ? 1 : (r6 == r3 ? 0 : -1))
            if (r2 != 0) goto L41
            long r9 = r9 / r11
        L2f:
            if (r5 >= r0) goto L58
            java.lang.Object r11 = r8.get(r5)
            java.lang.Long r11 = (java.lang.Long) r11
            long r11 = r11.longValue()
            long r11 = r11 * r9
            r1[r5] = r11
            int r5 = r5 + 1
            goto L2f
        L41:
            double r9 = (double) r9
            double r11 = (double) r11
            double r9 = r9 / r11
        L44:
            if (r5 >= r0) goto L58
            java.lang.Object r11 = r8.get(r5)
            java.lang.Long r11 = (java.lang.Long) r11
            long r11 = r11.longValue()
            double r11 = (double) r11
            double r11 = r11 * r9
            long r11 = (long) r11
            r1[r5] = r11
            int r5 = r5 + 1
            goto L44
        L58:
            return r1
    }

    public static <T> T[] a(T[] r1, int r2) {
            int r0 = r1.length
            if (r2 > r0) goto L5
            r0 = 1
            goto L6
        L5:
            r0 = 0
        L6:
            com.tkay.expressad.exoplayer.k.a.a(r0)
            java.lang.Object[] r1 = java.util.Arrays.copyOf(r1, r2)
            return r1
    }

    public static java.lang.String[] a(java.lang.String r1, java.lang.String r2) {
            r0 = -1
            java.lang.String[] r1 = r1.split(r2, r0)
            return r1
    }

    public static int b(int r3, int r4) {
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            r1 = 3
            if (r3 == r0) goto L1d
            r0 = 1073741824(0x40000000, float:2.0)
            r2 = 4
            if (r3 == r0) goto L1b
            r0 = 2
            if (r3 == r0) goto L19
            if (r3 == r1) goto L18
            if (r3 != r2) goto L12
            goto L1b
        L12:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            r3.<init>()
            throw r3
        L18:
            return r4
        L19:
            int r4 = r4 * r0
            return r4
        L1b:
            int r4 = r4 * r2
            return r4
        L1d:
            int r4 = r4 * r1
            return r4
    }

    public static int b(long r0, long r2) {
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L6
            r0 = -1
            return r0
        L6:
            if (r0 != 0) goto La
            r0 = 0
            return r0
        La:
            r0 = 1
            return r0
    }

    private static int b(android.net.Uri r0) {
            java.lang.String r0 = r0.getPath()
            if (r0 != 0) goto L8
            r0 = 3
            return r0
        L8:
            int r0 = l(r0)
            return r0
    }

    private static <T> int b(java.util.List<? extends java.lang.Comparable<? super T>> r3, T r4, boolean r5, boolean r6) {
            int r0 = java.util.Collections.binarySearch(r3, r4)
            if (r0 >= 0) goto L8
            int r4 = ~r0
            goto L22
        L8:
            int r1 = r3.size()
        Lc:
            int r0 = r0 + 1
            if (r0 >= r1) goto L1c
            java.lang.Object r2 = r3.get(r0)
            java.lang.Comparable r2 = (java.lang.Comparable) r2
            int r2 = r2.compareTo(r4)
            if (r2 == 0) goto Lc
        L1c:
            if (r5 == 0) goto L21
            int r4 = r0 + (-1)
            goto L22
        L21:
            r4 = r0
        L22:
            if (r6 == 0) goto L2f
            int r3 = r3.size()
            int r3 = r3 + (-1)
            int r3 = java.lang.Math.min(r3, r4)
            return r3
        L2f:
            return r4
    }

    public static long b(long r2, float r4) {
            r0 = 1065353216(0x3f800000, float:1.0)
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 != 0) goto L7
            return r2
        L7:
            double r2 = (double) r2
            double r0 = (double) r4
            double r2 = r2 / r0
            long r2 = java.lang.Math.round(r2)
            return r2
    }

    private static java.io.File b(android.content.Context r1, java.lang.String r2) {
            java.io.File r1 = r1.getCacheDir()
            r0 = 0
            java.io.File r1 = java.io.File.createTempFile(r2, r0, r1)
            r1.delete()
            r1.mkdir()
            return r1
    }

    public static java.lang.String b(java.lang.String r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            java.util.Locale r0 = new java.util.Locale     // Catch: java.util.MissingResourceException -> Le
            r0.<init>(r1)     // Catch: java.util.MissingResourceException -> Le
            java.lang.String r1 = r0.getISO3Language()     // Catch: java.util.MissingResourceException -> Le
            return r1
        Le:
            java.lang.String r1 = d(r1)
            return r1
    }

    private static void b(android.view.Display r0, android.graphics.Point r1) {
            r0.getRealSize(r1)
            return
    }

    private static <T extends java.lang.Throwable> void b(java.lang.Throwable r0) {
            throw r0
    }

    public static boolean b(int r1) {
            r0 = 3
            if (r1 == r0) goto L14
            r0 = 2
            if (r1 == r0) goto L14
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r1 == r0) goto L14
            r0 = 1073741824(0x40000000, float:2.0)
            if (r1 == r0) goto L14
            r0 = 4
            if (r1 != r0) goto L12
            goto L14
        L12:
            r1 = 0
            return r1
        L14:
            r1 = 1
            return r1
    }

    private static java.lang.String[] b(java.lang.String r1, java.lang.String r2) {
            r0 = 2
            java.lang.String[] r1 = r1.split(r2, r0)
            return r1
    }

    private static long c(long r2, long r4) {
            long r2 = r2 + r4
            r0 = 1
            long r2 = r2 - r0
            long r2 = r2 / r4
            return r2
    }

    private static java.io.File c(android.content.Context r1, java.lang.String r2) {
            java.io.File r1 = r1.getCacheDir()
            r0 = 0
            java.io.File r1 = java.io.File.createTempFile(r2, r0, r1)
            return r1
    }

    private static void c(android.view.Display r0, android.graphics.Point r1) {
            r0.getSize(r1)
            return
    }

    public static boolean c(int r1) {
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r1 == r0) goto Lb
            r0 = 1073741824(0x40000000, float:2.0)
            if (r1 != r0) goto L9
            goto Lb
        L9:
            r1 = 0
            return r1
        Lb:
            r1 = 1
            return r1
    }

    public static byte[] c(java.lang.String r1) {
            java.lang.String r0 = "UTF-8"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            byte[] r1 = r1.getBytes(r0)
            return r1
    }

    public static int d(int r2) {
            r0 = 2
            if (r2 == 0) goto L1b
            r1 = 1
            if (r2 == r1) goto L18
            if (r2 == r0) goto L16
            r0 = 4
            if (r2 == r0) goto L15
            r0 = 5
            if (r2 == r0) goto L15
            r0 = 8
            if (r2 == r0) goto L13
            return r1
        L13:
            r2 = 3
            return r2
        L15:
            return r0
        L16:
            r2 = 6
            return r2
        L18:
            r2 = 13
            return r2
        L1b:
            return r0
    }

    private static long d(long r2, long r4) {
            long r0 = r2 + r4
            long r2 = r2 ^ r0
            long r4 = r4 ^ r0
            long r2 = r2 & r4
            r4 = 0
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 >= 0) goto L11
            r2 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            return r2
        L11:
            return r0
    }

    public static java.lang.String d(java.lang.String r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            java.util.Locale r0 = java.util.Locale.US
            java.lang.String r1 = r1.toLowerCase(r0)
            return r1
    }

    private static void d(android.view.Display r1, android.graphics.Point r2) {
            int r0 = r1.getWidth()
            r2.x = r0
            int r1 = r1.getHeight()
            r2.y = r1
            return
    }

    public static int e(int r3) {
            r0 = 1
            if (r3 == 0) goto L14
            r1 = 4
            if (r3 == r0) goto L13
            r0 = 2
            if (r3 == r0) goto L13
            if (r3 == r1) goto L13
            r2 = 5
            if (r3 == r2) goto L13
            r2 = 8
            if (r3 == r2) goto L13
            return r0
        L13:
            return r1
        L14:
            return r0
    }

    private static long e(long r2, long r4) {
            long r0 = r2 - r4
            long r4 = r4 ^ r2
            long r2 = r2 ^ r0
            long r2 = r2 & r4
            r4 = 0
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 >= 0) goto Le
            r2 = -9223372036854775808
            return r2
        Le:
            return r0
    }

    public static java.lang.String e(java.lang.String r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            java.util.Locale r0 = java.util.Locale.US
            java.lang.String r1 = r1.toUpperCase(r0)
            return r1
    }

    public static int f(int r1) {
            r0 = 13
            if (r1 == r0) goto L14
            switch(r1) {
                case 2: goto L12;
                case 3: goto Lf;
                case 4: goto Ld;
                case 5: goto Lb;
                case 6: goto L9;
                case 7: goto Lb;
                case 8: goto Lb;
                case 9: goto Lb;
                case 10: goto Lb;
                default: goto L7;
            }
        L7:
            r1 = 3
            return r1
        L9:
            r1 = 2
            return r1
        Lb:
            r1 = 5
            return r1
        Ld:
            r1 = 4
            return r1
        Lf:
            r1 = 8
            return r1
        L12:
            r1 = 0
            return r1
        L14:
            r1 = 1
            return r1
    }

    public static int f(java.lang.String r4) {
            int r0 = r4.length()
            r1 = 0
            r2 = 4
            if (r0 > r2) goto La
            r2 = 1
            goto Lb
        La:
            r2 = r1
        Lb:
            com.tkay.expressad.exoplayer.k.a.a(r2)
            r2 = r1
        Lf:
            if (r1 >= r0) goto L1b
            int r2 = r2 << 8
            char r3 = r4.charAt(r1)
            r2 = r2 | r3
            int r1 = r1 + 1
            goto Lf
        L1b:
            return r2
    }

    public static int g(int r2) {
            if (r2 == 0) goto L1e
            r0 = 1
            if (r2 == r0) goto L1b
            r0 = 2
            if (r2 == r0) goto L18
            r0 = 3
            r1 = 131072(0x20000, float:1.83671E-40)
            if (r2 == r0) goto L17
            r0 = 4
            if (r2 != r0) goto L11
            return r1
        L11:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            r2.<init>()
            throw r2
        L17:
            return r1
        L18:
            r2 = 13107200(0xc80000, float:1.8367099E-38)
            return r2
        L1b:
            r2 = 3538944(0x360000, float:4.959117E-39)
            return r2
        L1e:
            r2 = 16777216(0x1000000, float:2.3509887E-38)
            return r2
    }

    public static byte[] g(java.lang.String r6) {
            int r0 = r6.length()
            int r0 = r0 / 2
            byte[] r1 = new byte[r0]
            r2 = 0
        L9:
            if (r2 >= r0) goto L2a
            int r3 = r2 * 2
            char r4 = r6.charAt(r3)
            r5 = 16
            int r4 = java.lang.Character.digit(r4, r5)
            int r4 = r4 << 4
            int r3 = r3 + 1
            char r3 = r6.charAt(r3)
            int r3 = java.lang.Character.digit(r3, r5)
            int r4 = r4 + r3
            byte r3 = (byte) r4
            r1[r2] = r3
            int r2 = r2 + 1
            goto L9
        L2a:
            return r1
    }

    private static int h(int r1) {
            r0 = 8
            if (r1 == r0) goto L1a
            r0 = 16
            if (r1 == r0) goto L18
            r0 = 24
            if (r1 == r0) goto L15
            r0 = 32
            if (r1 == r0) goto L12
            r1 = 0
            return r1
        L12:
            r1 = 1073741824(0x40000000, float:2.0)
            return r1
        L15:
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            return r1
        L18:
            r1 = 2
            return r1
        L1a:
            r1 = 3
            return r1
    }

    public static java.lang.String h(java.lang.String r8) {
            int r0 = r8.length()
            r1 = 0
            r2 = r1
            r3 = r2
        L7:
            if (r2 >= r0) goto L16
            char r4 = r8.charAt(r2)
            r5 = 37
            if (r4 != r5) goto L13
            int r3 = r3 + 1
        L13:
            int r2 = r2 + 1
            goto L7
        L16:
            if (r3 != 0) goto L19
            return r8
        L19:
            int r2 = r3 * 2
            int r2 = r0 - r2
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>(r2)
            java.util.regex.Pattern r5 = com.tkay.expressad.exoplayer.k.af.i
            java.util.regex.Matcher r5 = r5.matcher(r8)
        L28:
            if (r3 <= 0) goto L4d
            boolean r6 = r5.find()
            if (r6 == 0) goto L4d
            r6 = 1
            java.lang.String r6 = r5.group(r6)
            r7 = 16
            int r6 = java.lang.Integer.parseInt(r6, r7)
            char r6 = (char) r6
            int r7 = r5.start()
            r4.append(r8, r1, r7)
            r4.append(r6)
            int r1 = r5.end()
            int r3 = r3 + (-1)
            goto L28
        L4d:
            if (r1 >= r0) goto L52
            r4.append(r8, r1, r0)
        L52:
            int r8 = r4.length()
            if (r8 == r2) goto L5a
            r8 = 0
            return r8
        L5a:
            java.lang.String r8 = r4.toString()
            return r8
    }

    private static long i(java.lang.String r14) {
            java.util.regex.Pattern r0 = com.tkay.expressad.exoplayer.k.af.h
            java.util.regex.Matcher r0 = r0.matcher(r14)
            boolean r1 = r0.matches()
            r2 = 4652007308841189376(0x408f400000000000, double:1000.0)
            r4 = 4660134898793709568(0x40ac200000000000, double:3600.0)
            if (r1 == 0) goto L92
            r14 = 1
            java.lang.String r1 = r0.group(r14)
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            r14 = r14 ^ r1
            r1 = 3
            java.lang.String r1 = r0.group(r1)
            r6 = 0
            if (r1 == 0) goto L34
            double r8 = java.lang.Double.parseDouble(r1)
            r10 = 4719236203218468864(0x417e1852c0000000, double:3.1556908E7)
            double r8 = r8 * r10
            goto L35
        L34:
            r8 = r6
        L35:
            r1 = 5
            java.lang.String r1 = r0.group(r1)
            if (r1 == 0) goto L47
            double r10 = java.lang.Double.parseDouble(r1)
            r12 = 4702901732848435200(0x4144103580000000, double:2629739.0)
            double r10 = r10 * r12
            goto L48
        L47:
            r10 = r6
        L48:
            double r8 = r8 + r10
            r1 = 7
            java.lang.String r1 = r0.group(r1)
            if (r1 == 0) goto L5b
            double r10 = java.lang.Double.parseDouble(r1)
            r12 = 4680673776000565248(0x40f5180000000000, double:86400.0)
            double r10 = r10 * r12
            goto L5c
        L5b:
            r10 = r6
        L5c:
            double r8 = r8 + r10
            r1 = 10
            java.lang.String r1 = r0.group(r1)
            if (r1 == 0) goto L6b
            double r10 = java.lang.Double.parseDouble(r1)
            double r10 = r10 * r4
            goto L6c
        L6b:
            r10 = r6
        L6c:
            double r8 = r8 + r10
            r1 = 12
            java.lang.String r1 = r0.group(r1)
            if (r1 == 0) goto L7d
            double r4 = java.lang.Double.parseDouble(r1)
            r10 = 4633641066610819072(0x404e000000000000, double:60.0)
            double r4 = r4 * r10
            goto L7e
        L7d:
            r4 = r6
        L7e:
            double r8 = r8 + r4
            r1 = 14
            java.lang.String r0 = r0.group(r1)
            if (r0 == 0) goto L8b
            double r6 = java.lang.Double.parseDouble(r0)
        L8b:
            double r8 = r8 + r6
            double r8 = r8 * r2
            long r0 = (long) r8
            if (r14 == 0) goto L91
            long r0 = -r0
        L91:
            return r0
        L92:
            double r0 = java.lang.Double.parseDouble(r14)
            double r0 = r0 * r4
            double r0 = r0 * r2
            long r0 = (long) r0
            return r0
    }

    private static long j(java.lang.String r10) {
            java.util.regex.Pattern r0 = com.tkay.expressad.exoplayer.k.af.g
            java.util.regex.Matcher r0 = r0.matcher(r10)
            boolean r1 = r0.matches()
            if (r1 == 0) goto Ld2
            r10 = 9
            java.lang.String r1 = r0.group(r10)
            r2 = 0
            if (r1 != 0) goto L16
            goto L4b
        L16:
            java.lang.String r10 = r0.group(r10)
            java.lang.String r1 = "Z"
            boolean r10 = r10.equalsIgnoreCase(r1)
            if (r10 == 0) goto L23
            goto L4b
        L23:
            r10 = 12
            java.lang.String r10 = r0.group(r10)
            int r10 = java.lang.Integer.parseInt(r10)
            int r10 = r10 * 60
            r1 = 13
            java.lang.String r1 = r0.group(r1)
            int r1 = java.lang.Integer.parseInt(r1)
            int r2 = r10 + r1
            r10 = 11
            java.lang.String r10 = r0.group(r10)
            java.lang.String r1 = "-"
            boolean r10 = r1.equals(r10)
            if (r10 == 0) goto L4b
            int r2 = r2 * (-1)
        L4b:
            java.util.GregorianCalendar r10 = new java.util.GregorianCalendar
            java.lang.String r1 = "GMT"
            java.util.TimeZone r1 = java.util.TimeZone.getTimeZone(r1)
            r10.<init>(r1)
            r10.clear()
            r1 = 1
            java.lang.String r3 = r0.group(r1)
            int r4 = java.lang.Integer.parseInt(r3)
            r3 = 2
            java.lang.String r3 = r0.group(r3)
            int r3 = java.lang.Integer.parseInt(r3)
            int r5 = r3 + (-1)
            r1 = 3
            java.lang.String r3 = r0.group(r1)
            int r6 = java.lang.Integer.parseInt(r3)
            r3 = 4
            java.lang.String r3 = r0.group(r3)
            int r7 = java.lang.Integer.parseInt(r3)
            r3 = 5
            java.lang.String r3 = r0.group(r3)
            int r8 = java.lang.Integer.parseInt(r3)
            r3 = 6
            java.lang.String r3 = r0.group(r3)
            int r9 = java.lang.Integer.parseInt(r3)
            r3 = r10
            r3.set(r4, r5, r6, r7, r8, r9)
            r3 = 8
            java.lang.String r4 = r0.group(r3)
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto Lc5
            java.math.BigDecimal r4 = new java.math.BigDecimal
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r6 = "0."
            r5.<init>(r6)
            java.lang.String r0 = r0.group(r3)
            r5.append(r0)
            java.lang.String r0 = r5.toString()
            r4.<init>(r0)
            r0 = 14
            java.math.BigDecimal r1 = r4.movePointRight(r1)
            int r1 = r1.intValue()
            r10.set(r0, r1)
        Lc5:
            long r0 = r10.getTimeInMillis()
            if (r2 == 0) goto Ld1
            r10 = 60000(0xea60, float:8.4078E-41)
            int r2 = r2 * r10
            long r2 = (long) r2
            long r0 = r0 - r2
        Ld1:
            return r0
        Ld2:
            com.tkay.expressad.exoplayer.t r0 = new com.tkay.expressad.exoplayer.t
            java.lang.String r10 = java.lang.String.valueOf(r10)
            java.lang.String r1 = "Invalid date/time format: "
            java.lang.String r10 = r1.concat(r10)
            r0.<init>(r10)
            throw r0
    }

    private static java.util.UUID k(java.lang.String r5) {
            java.lang.String r0 = d(r5)
            int r1 = r0.hashCode()
            r2 = -1860423953(0xffffffff911c2eef, float:-1.2320693E-28)
            r3 = 2
            r4 = 1
            if (r1 == r2) goto L2e
            r2 = -1400551171(0xffffffffac8548fd, float:-3.7881907E-12)
            if (r1 == r2) goto L24
            r2 = 790309106(0x2f1b28f2, float:1.4111715E-10)
            if (r1 == r2) goto L1a
            goto L38
        L1a:
            java.lang.String r1 = "clearkey"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L38
            r0 = r3
            goto L39
        L24:
            java.lang.String r1 = "widevine"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L38
            r0 = 0
            goto L39
        L2e:
            java.lang.String r1 = "playready"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L38
            r0 = r4
            goto L39
        L38:
            r0 = -1
        L39:
            if (r0 == 0) goto L4c
            if (r0 == r4) goto L49
            if (r0 == r3) goto L46
            java.util.UUID r5 = java.util.UUID.fromString(r5)     // Catch: java.lang.RuntimeException -> L44
            return r5
        L44:
            r5 = 0
            return r5
        L46:
            java.util.UUID r5 = com.tkay.expressad.exoplayer.b.bj
            return r5
        L49:
            java.util.UUID r5 = com.tkay.expressad.exoplayer.b.bl
            return r5
        L4c:
            java.util.UUID r5 = com.tkay.expressad.exoplayer.b.bk
            return r5
    }

    private static int l(java.lang.String r1) {
            java.lang.String r1 = d(r1)
            java.lang.String r0 = ".mpd"
            boolean r0 = r1.endsWith(r0)
            if (r0 == 0) goto Le
            r1 = 0
            return r1
        Le:
            java.lang.String r0 = ".m3u8"
            boolean r0 = r1.endsWith(r0)
            if (r0 == 0) goto L18
            r1 = 2
            return r1
        L18:
            java.lang.String r0 = ".*\\.ism(l)?(/manifest(\\(.+\\))?)?"
            boolean r1 = r1.matches(r0)
            if (r1 == 0) goto L22
            r1 = 1
            return r1
        L22:
            r1 = 3
            return r1
    }

    private static java.lang.String m(java.lang.String r6) {
            int r0 = r6.length()
            r1 = 0
            r2 = r1
            r3 = r2
        L7:
            if (r2 >= r0) goto L18
            char r4 = r6.charAt(r2)
            boolean r4 = a(r4)
            if (r4 == 0) goto L15
            int r3 = r3 + 1
        L15:
            int r2 = r2 + 1
            goto L7
        L18:
            if (r3 != 0) goto L1b
            return r6
        L1b:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            int r4 = r3 * 2
            int r4 = r4 + r0
            r2.<init>(r4)
        L23:
            if (r3 <= 0) goto L45
            int r4 = r1 + 1
            char r1 = r6.charAt(r1)
            boolean r5 = a(r1)
            if (r5 == 0) goto L40
            r5 = 37
            r2.append(r5)
            java.lang.String r1 = java.lang.Integer.toHexString(r1)
            r2.append(r1)
            int r3 = r3 + (-1)
            goto L43
        L40:
            r2.append(r1)
        L43:
            r1 = r4
            goto L23
        L45:
            if (r1 >= r0) goto L4a
            r2.append(r6, r1, r0)
        L4a:
            java.lang.String r6 = r2.toString()
            return r6
    }
}

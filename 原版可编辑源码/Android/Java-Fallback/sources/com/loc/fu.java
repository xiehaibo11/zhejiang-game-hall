package com.loc;

public final class fu {
    static double a = 3.141592653589793d;
    private static final java.util.List<com.amap.api.location.DPoint> b = null;

    static {
            java.util.ArrayList r0 = new java.util.ArrayList
            r1 = 8
            com.amap.api.location.DPoint[] r1 = new com.amap.api.location.DPoint[r1]
            com.amap.api.location.DPoint r2 = new com.amap.api.location.DPoint
            r3 = 4627274087719450268(0x4037614434e3369c, double:23.379947)
            r5 = 4638127566703723140(0x405df072b4528284, double:119.757001)
            r2.<init>(r3, r5)
            r3 = 0
            r1[r3] = r2
            com.amap.api.location.DPoint r2 = new com.amap.api.location.DPoint
            r3 = 4627725390341884321(0x4038fbb9496249a1, double:24.983296)
            r5 = 4638178055925826893(0x405e1e5e2478854d, double:120.474496)
            r2.<init>(r3, r5)
            r3 = 1
            r1[r3] = r2
            com.amap.api.location.DPoint r2 = new com.amap.api.location.DPoint
            r3 = 4627876099362764601(0x403984caf709b739, double:25.518722)
            r5 = 4638240358300859471(0x405e57080b673c4f, double:121.359866)
            r2.<init>(r3, r5)
            r3 = 2
            r1[r3] = r2
            com.amap.api.location.DPoint r2 = new com.amap.api.location.DPoint
            r3 = 4627846422893020043(0x403969cd5f99c38b, double:25.41329)
            r5 = 4638316618034824713(0x405e9c63a5c1c609, double:122.443582)
            r2.<init>(r3, r5)
            r3 = 3
            r1[r3] = r2
            com.amap.api.location.DPoint r2 = new com.amap.api.location.DPoint
            r3 = 4627691447837392737(0x4038dcda6e75ff61, double:24.862708)
            r5 = 4638305694835403502(0x405e92746455eaee, double:122.288354)
            r2.<init>(r3, r5)
            r3 = 4
            r1[r3] = r2
            com.amap.api.location.DPoint r2 = new com.amap.api.location.DPoint
            r3 = 4627578459278141452(0x403876173b85e80c, double:24.461292)
            r5 = 4638298655498079690(0x405e8c0d6b228dca, double:122.188319)
            r2.<init>(r3, r5)
            r3 = 5
            r1[r3] = r2
            com.amap.api.location.DPoint r2 = new com.amap.api.location.DPoint
            r3 = 4626768787781908972(0x403595b2e59af9ec, double:21.584761)
            r5 = 4638212848132904423(0x405e3e02d59d55e7, double:120.968923)
            r2.<init>(r3, r5)
            r3 = 6
            r1[r3] = r2
            com.amap.api.location.DPoint r2 = new com.amap.api.location.DPoint
            r3 = 4626838052018278023(0x4035d4b1bbcf4e87, double:21.830837)
            r5 = 4638190718710972919(0x405e29e26d4801f7, double:120.654445)
            r2.<init>(r3, r5)
            r3 = 7
            r1[r3] = r2
            java.util.List r1 = java.util.Arrays.asList(r1)
            r0.<init>(r1)
            com.loc.fu.b = r0
            return
    }

    private static double a(double r4) {
            r0 = 4658815484840378368(0x40a7700000000000, double:3000.0)
            double r4 = r4 * r0
            double r0 = com.loc.fu.a
            r2 = 4640537203540230144(0x4066800000000000, double:180.0)
            double r0 = r0 / r2
            double r4 = r4 * r0
            double r4 = java.lang.Math.sin(r4)
            r0 = 4536524183238306033(0x3ef4f8b588e368f1, double:2.0E-5)
            double r4 = r4 * r0
            return r4
    }

    private static double a(double r6, double r8) {
            r0 = 4681608360884174848(0x40f86a0000000000, double:100000.0)
            double r2 = r8 / r0
            double r2 = java.lang.Math.cos(r2)
            r4 = 4670677016280825856(0x40d1940000000000, double:18000.0)
            double r4 = r6 / r4
            double r2 = r2 * r4
            double r6 = r6 / r0
            double r6 = java.lang.Math.sin(r6)
            r0 = 4666173416653455360(0x40c1940000000000, double:9000.0)
            double r8 = r8 / r0
            double r6 = r6 * r8
            double r2 = r2 + r6
            return r2
    }

    private static com.amap.api.location.DPoint a(double r2, double r4, double r6, double r8) {
            com.amap.api.location.DPoint r0 = new com.amap.api.location.DPoint
            r0.<init>()
            double r6 = r2 - r6
            double r8 = r4 - r8
            com.amap.api.location.DPoint r1 = d(r6, r8)
            double r2 = r2 + r6
            double r6 = r1.getLongitude()
            double r2 = r2 - r6
            double r2 = c(r2)
            r0.setLongitude(r2)
            double r4 = r4 + r8
            double r2 = r1.getLatitude()
            double r4 = r4 - r2
            double r2 = c(r4)
            r0.setLatitude(r2)
            return r0
    }

    public static com.amap.api.location.DPoint a(android.content.Context r0, com.amap.api.location.DPoint r1) {
            if (r0 != 0) goto L4
            r0 = 0
            return r0
        L4:
            com.amap.api.location.DPoint r0 = b(r1)
            return r0
    }

    public static com.amap.api.location.DPoint a(com.amap.api.location.DPoint r5) {
            if (r5 == 0) goto L3c
            double r0 = r5.getLatitude()     // Catch: java.lang.Throwable -> L34
            double r2 = r5.getLongitude()     // Catch: java.lang.Throwable -> L34
            boolean r0 = com.loc.fr.a(r0, r2)     // Catch: java.lang.Throwable -> L34
            if (r0 == 0) goto L15
            com.amap.api.location.DPoint r5 = c(r5)     // Catch: java.lang.Throwable -> L34
            return r5
        L15:
            double r0 = r5.getLatitude()     // Catch: java.lang.Throwable -> L34
            double r2 = r5.getLongitude()     // Catch: java.lang.Throwable -> L34
            boolean r0 = e(r0, r2)     // Catch: java.lang.Throwable -> L34
            if (r0 == 0) goto L33
            com.amap.api.location.DPoint r0 = c(r5)     // Catch: java.lang.Throwable -> L34
            double r1 = r0.getLatitude()     // Catch: java.lang.Throwable -> L34
            double r3 = r0.getLongitude()     // Catch: java.lang.Throwable -> L34
            com.amap.api.location.DPoint r5 = f(r1, r3)     // Catch: java.lang.Throwable -> L34
        L33:
            return r5
        L34:
            r0 = move-exception
            java.lang.String r1 = "OffsetUtil"
            java.lang.String r2 = "b2G"
            com.loc.fr.a(r0, r1, r2)
        L3c:
            return r5
    }

    private static double b(double r4) {
            r0 = 4658815484840378368(0x40a7700000000000, double:3000.0)
            double r4 = r4 * r0
            double r0 = com.loc.fu.a
            r2 = 4640537203540230144(0x4066800000000000, double:180.0)
            double r0 = r0 / r2
            double r4 = r4 * r0
            double r4 = java.lang.Math.cos(r4)
            r0 = 4524193975976911956(0x3ec92a737110e454, double:3.0E-6)
            double r4 = r4 * r0
            return r4
    }

    private static double b(double r6, double r8) {
            r0 = 4681608360884174848(0x40f86a0000000000, double:100000.0)
            double r2 = r8 / r0
            double r2 = java.lang.Math.sin(r2)
            r4 = 4670677016280825856(0x40d1940000000000, double:18000.0)
            double r4 = r6 / r4
            double r2 = r2 * r4
            double r6 = r6 / r0
            double r6 = java.lang.Math.cos(r6)
            r0 = 4666173416653455360(0x40c1940000000000, double:9000.0)
            double r8 = r8 / r0
            double r6 = r6 * r8
            double r2 = r2 + r6
            return r2
    }

    public static com.amap.api.location.DPoint b(android.content.Context r4, com.amap.api.location.DPoint r5) {
            double r0 = r5.getLatitude()     // Catch: java.lang.Throwable -> L20
            double r2 = r5.getLongitude()     // Catch: java.lang.Throwable -> L20
            boolean r0 = com.loc.fr.a(r0, r2)     // Catch: java.lang.Throwable -> L20
            if (r0 != 0) goto Lf
            return r5
        Lf:
            double r0 = r5.getLongitude()     // Catch: java.lang.Throwable -> L20
            double r2 = r5.getLatitude()     // Catch: java.lang.Throwable -> L20
            com.amap.api.location.DPoint r0 = c(r0, r2)     // Catch: java.lang.Throwable -> L20
            com.amap.api.location.DPoint r4 = a(r4, r0)     // Catch: java.lang.Throwable -> L20
            return r4
        L20:
            r4 = move-exception
            java.lang.String r0 = "OffsetUtil"
            java.lang.String r1 = "marbar2G"
            com.loc.fr.a(r4, r0, r1)
            return r5
    }

    private static com.amap.api.location.DPoint b(com.amap.api.location.DPoint r6) {
            double r0 = r6.getLatitude()     // Catch: java.lang.Throwable -> L27
            double r2 = r6.getLongitude()     // Catch: java.lang.Throwable -> L27
            boolean r0 = com.loc.fr.a(r0, r2)     // Catch: java.lang.Throwable -> L27
            if (r0 == 0) goto L26
            double r0 = r6.getLongitude()     // Catch: java.lang.Throwable -> L27
            double r2 = r6.getLatitude()     // Catch: java.lang.Throwable -> L27
            double[] r0 = com.loc.ga.a(r0, r2)     // Catch: java.lang.Throwable -> L27
            com.amap.api.location.DPoint r1 = new com.amap.api.location.DPoint     // Catch: java.lang.Throwable -> L27
            r2 = 1
            r2 = r0[r2]     // Catch: java.lang.Throwable -> L27
            r4 = 0
            r4 = r0[r4]     // Catch: java.lang.Throwable -> L27
            r1.<init>(r2, r4)     // Catch: java.lang.Throwable -> L27
            return r1
        L26:
            return r6
        L27:
            r0 = move-exception
            java.lang.String r1 = "OffsetUtil"
            java.lang.String r2 = "cover part2"
            com.loc.fr.a(r0, r1, r2)
            return r6
    }

    private static double c(double r1) {
            java.math.BigDecimal r0 = new java.math.BigDecimal
            r0.<init>(r1)
            r1 = 8
            r2 = 4
            java.math.BigDecimal r1 = r0.setScale(r1, r2)
            double r1 = r1.doubleValue()
            return r1
    }

    private static com.amap.api.location.DPoint c(double r11, double r13) {
            r0 = 4681608360884174848(0x40f86a0000000000, double:100000.0)
            double r11 = r11 * r0
            long r11 = (long) r11
            r2 = 36000000(0x2255100, double:1.77863633E-316)
            long r11 = r11 % r2
            double r11 = (double) r11
            double r13 = r13 * r0
            long r13 = (long) r13
            long r13 = r13 % r2
            double r13 = (double) r13
            double r2 = a(r11, r13)
            double r2 = -r2
            double r2 = r2 + r11
            int r2 = (int) r2
            double r3 = b(r11, r13)
            double r3 = -r3
            double r3 = r3 + r13
            int r3 = (int) r3
            double r4 = (double) r2
            double r2 = (double) r3
            double r4 = a(r4, r2)
            double r4 = -r4
            double r4 = r4 + r11
            r6 = 1
            r7 = -1
            r8 = 0
            int r10 = (r11 > r8 ? 1 : (r11 == r8 ? 0 : -1))
            if (r10 <= 0) goto L32
            r11 = 1
            goto L33
        L32:
            r11 = -1
        L33:
            double r11 = (double) r11
            double r4 = r4 + r11
            int r11 = (int) r4
            double r11 = (double) r11
            double r2 = b(r11, r2)
            double r2 = -r2
            double r2 = r2 + r13
            int r4 = (r13 > r8 ? 1 : (r13 == r8 ? 0 : -1))
            if (r4 <= 0) goto L42
            goto L43
        L42:
            r6 = -1
        L43:
            double r13 = (double) r6
            double r2 = r2 + r13
            int r13 = (int) r2
            double r11 = r11 / r0
            double r13 = (double) r13
            double r13 = r13 / r0
            com.amap.api.location.DPoint r0 = new com.amap.api.location.DPoint
            r0.<init>(r13, r11)
            return r0
    }

    private static com.amap.api.location.DPoint c(com.amap.api.location.DPoint r14) {
            r0 = 4574029944185804657(0x3f7a37ffff31d771, double:0.006401062)
            r2 = 4573616527863300477(0x3f78c0000225c17d, double:0.0060424805)
            r4 = 0
            r5 = 0
            r10 = r0
            r12 = r2
        Le:
            r0 = 2
            if (r5 >= r0) goto L34
            double r6 = r14.getLongitude()
            double r8 = r14.getLatitude()
            com.amap.api.location.DPoint r4 = a(r6, r8, r10, r12)
            double r0 = r14.getLongitude()
            double r2 = r4.getLongitude()
            double r10 = r0 - r2
            double r0 = r14.getLatitude()
            double r2 = r4.getLatitude()
            double r12 = r0 - r2
            int r5 = r5 + 1
            goto Le
        L34:
            return r4
    }

    private static com.amap.api.location.DPoint d(double r9, double r11) {
            com.amap.api.location.DPoint r0 = new com.amap.api.location.DPoint
            r0.<init>()
            double r1 = b(r9)
            double r3 = java.lang.Math.atan2(r11, r9)
            double r1 = r1 + r3
            double r1 = java.lang.Math.cos(r1)
            double r3 = a(r11)
            double r5 = r9 * r9
            double r7 = r11 * r11
            double r5 = r5 + r7
            double r7 = java.lang.Math.sqrt(r5)
            double r3 = r3 + r7
            double r1 = r1 * r3
            r3 = 4574144011933627449(0x3f7a9fbe76c8b439, double:0.0065)
            double r1 = r1 + r3
            double r3 = b(r9)
            double r9 = java.lang.Math.atan2(r11, r9)
            double r3 = r3 + r9
            double r9 = java.lang.Math.sin(r3)
            double r11 = a(r11)
            double r3 = java.lang.Math.sqrt(r5)
            double r11 = r11 + r3
            double r9 = r9 * r11
            r11 = 4573567551181324026(0x3f789374bc6a7efa, double:0.006)
            double r9 = r9 + r11
            double r11 = c(r1)
            r0.setLongitude(r11)
            double r9 = c(r9)
            r0.setLatitude(r9)
            return r0
    }

    private static boolean e(double r1, double r3) {
            com.amap.api.location.DPoint r0 = new com.amap.api.location.DPoint
            r0.<init>(r1, r3)
            java.util.List<com.amap.api.location.DPoint> r1 = com.loc.fu.b
            boolean r1 = com.loc.fr.a(r0, r1)
            if (r1 == 0) goto Lf
            r1 = 1
            return r1
        Lf:
            r1 = 0
            return r1
    }

    private static com.amap.api.location.DPoint f(double r5, double r7) {
            com.amap.api.location.DPoint r0 = g(r5, r7)
            r1 = 4611686018427387904(0x4000000000000000, double:2.0)
            double r7 = r7 * r1
            double r3 = r0.getLongitude()
            double r7 = r7 - r3
            double r5 = r5 * r1
            double r0 = r0.getLatitude()
            double r5 = r5 - r0
            com.amap.api.location.DPoint r0 = new com.amap.api.location.DPoint
            r0.<init>(r5, r7)
            return r0
    }

    private static com.amap.api.location.DPoint g(double r14, double r16) {
            r0 = 4637089135075524608(0x405a400000000000, double:105.0)
            double r0 = r16 - r0
            r2 = 4630122629401935872(0x4041800000000000, double:35.0)
            double r2 = r14 - r2
            double r4 = h(r0, r2)
            double r0 = i(r0, r2)
            r2 = 4640537203540230144(0x4066800000000000, double:180.0)
            double r6 = r14 / r2
            double r8 = com.loc.fu.a
            double r6 = r6 * r8
            double r8 = java.lang.Math.sin(r6)
            r10 = 4574367011882200843(0x3f7b6a8faf80ef0b, double:0.006693421622965943)
            double r10 = r10 * r8
            double r10 = r10 * r8
            r8 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r8 = r8 - r10
            double r10 = java.lang.Math.sqrt(r8)
            double r4 = r4 * r2
            double r8 = r8 * r10
            r12 = 4708560758905198017(0x41582b102de355c1, double:6335552.717000426)
            double r12 = r12 / r8
            double r8 = com.loc.fu.a
            double r12 = r12 * r8
            double r4 = r4 / r12
            double r0 = r0 * r2
            r2 = 4708606599395016704(0x415854c140000000, double:6378245.0)
            double r2 = r2 / r10
            double r6 = java.lang.Math.cos(r6)
            double r2 = r2 * r6
            double r6 = com.loc.fu.a
            double r2 = r2 * r6
            double r0 = r0 / r2
            double r2 = r14 + r4
            double r0 = r16 + r0
            com.amap.api.location.DPoint r4 = new com.amap.api.location.DPoint
            r4.<init>(r2, r0)
            return r4
    }

    private static double h(double r12, double r14) {
            r0 = 4611686018427387904(0x4000000000000000, double:2.0)
            double r2 = r12 * r0
            r4 = -4586634745500139520(0xc059000000000000, double:-100.0)
            double r4 = r4 + r2
            r6 = 4613937818241073152(0x4008000000000000, double:3.0)
            double r8 = r14 * r6
            double r4 = r4 + r8
            r8 = 4596373779694328218(0x3fc999999999999a, double:0.2)
            double r10 = r14 * r8
            double r10 = r10 * r14
            double r4 = r4 + r10
            r10 = 4591870180066957722(0x3fb999999999999a, double:0.1)
            double r10 = r10 * r12
            double r10 = r10 * r14
            double r4 = r4 + r10
            double r10 = java.lang.Math.abs(r12)
            double r10 = java.lang.Math.sqrt(r10)
            double r10 = r10 * r8
            double r4 = r4 + r10
            r8 = 4618441417868443648(0x4018000000000000, double:6.0)
            double r12 = r12 * r8
            double r8 = com.loc.fu.a
            double r12 = r12 * r8
            double r12 = java.lang.Math.sin(r12)
            r8 = 4626322717216342016(0x4034000000000000, double:20.0)
            double r12 = r12 * r8
            double r10 = com.loc.fu.a
            double r2 = r2 * r10
            double r2 = java.lang.Math.sin(r2)
            double r2 = r2 * r8
            double r12 = r12 + r2
            double r12 = r12 * r0
            double r12 = r12 / r6
            double r4 = r4 + r12
            double r12 = com.loc.fu.a
            double r12 = r12 * r14
            double r12 = java.lang.Math.sin(r12)
            double r12 = r12 * r8
            double r2 = r14 / r6
            double r8 = com.loc.fu.a
            double r2 = r2 * r8
            double r2 = java.lang.Math.sin(r2)
            r8 = 4630826316843712512(0x4044000000000000, double:40.0)
            double r2 = r2 * r8
            double r12 = r12 + r2
            double r12 = r12 * r0
            double r12 = r12 / r6
            double r4 = r4 + r12
            r12 = 4622945017495814144(0x4028000000000000, double:12.0)
            double r12 = r14 / r12
            double r2 = com.loc.fu.a
            double r12 = r12 * r2
            double r12 = java.lang.Math.sin(r12)
            r2 = 4639833516098453504(0x4064000000000000, double:160.0)
            double r12 = r12 * r2
            double r2 = com.loc.fu.a
            double r14 = r14 * r2
            r2 = 4629137466983448576(0x403e000000000000, double:30.0)
            double r14 = r14 / r2
            double r14 = java.lang.Math.sin(r14)
            r2 = 4644337115725824000(0x4074000000000000, double:320.0)
            double r14 = r14 * r2
            double r12 = r12 + r14
            double r12 = r12 * r0
            double r12 = r12 / r6
            double r4 = r4 + r12
            return r4
    }

    private static double i(double r12, double r14) {
            r0 = 4643985272004935680(0x4072c00000000000, double:300.0)
            double r2 = r12 + r0
            r4 = 4611686018427387904(0x4000000000000000, double:2.0)
            double r6 = r14 * r4
            double r2 = r2 + r6
            r6 = 4591870180066957722(0x3fb999999999999a, double:0.1)
            double r8 = r12 * r6
            double r10 = r8 * r12
            double r2 = r2 + r10
            double r8 = r8 * r14
            double r2 = r2 + r8
            double r14 = java.lang.Math.abs(r12)
            double r14 = java.lang.Math.sqrt(r14)
            double r14 = r14 * r6
            double r2 = r2 + r14
            r14 = 4618441417868443648(0x4018000000000000, double:6.0)
            double r14 = r14 * r12
            double r6 = com.loc.fu.a
            double r14 = r14 * r6
            double r14 = java.lang.Math.sin(r14)
            r6 = 4626322717216342016(0x4034000000000000, double:20.0)
            double r14 = r14 * r6
            double r8 = r12 * r4
            double r10 = com.loc.fu.a
            double r8 = r8 * r10
            double r8 = java.lang.Math.sin(r8)
            double r8 = r8 * r6
            double r14 = r14 + r8
            double r14 = r14 * r4
            r8 = 4613937818241073152(0x4008000000000000, double:3.0)
            double r14 = r14 / r8
            double r2 = r2 + r14
            double r14 = com.loc.fu.a
            double r14 = r14 * r12
            double r14 = java.lang.Math.sin(r14)
            double r14 = r14 * r6
            double r6 = r12 / r8
            double r10 = com.loc.fu.a
            double r6 = r6 * r10
            double r6 = java.lang.Math.sin(r6)
            r10 = 4630826316843712512(0x4044000000000000, double:40.0)
            double r6 = r6 * r10
            double r14 = r14 + r6
            double r14 = r14 * r4
            double r14 = r14 / r8
            double r2 = r2 + r14
            r14 = 4622945017495814144(0x4028000000000000, double:12.0)
            double r14 = r12 / r14
            double r6 = com.loc.fu.a
            double r14 = r14 * r6
            double r14 = java.lang.Math.sin(r14)
            r6 = 4639481672377565184(0x4062c00000000000, double:150.0)
            double r14 = r14 * r6
            r6 = 4629137466983448576(0x403e000000000000, double:30.0)
            double r12 = r12 / r6
            double r6 = com.loc.fu.a
            double r12 = r12 * r6
            double r12 = java.lang.Math.sin(r12)
            double r12 = r12 * r0
            double r14 = r14 + r12
            double r14 = r14 * r4
            double r14 = r14 / r8
            double r2 = r2 + r14
            return r2
    }
}

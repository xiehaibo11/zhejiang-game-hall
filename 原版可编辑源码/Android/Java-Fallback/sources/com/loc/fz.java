package com.loc;

public final class fz {
    static android.net.wifi.WifiManager a;
    private static int b;
    private static java.lang.String[] c;
    private static java.lang.String d;

    static {
            return
    }

    public static double a(double r0) {
            double r0 = b(r0)
            return r0
    }

    public static float a(float r4) {
            double r0 = (double) r4
            r2 = 4636737291354636288(0x4059000000000000, double:100.0)
            double r0 = r0 * r2
            long r0 = (long) r0
            double r0 = (double) r0
            double r0 = r0 / r2
            float r4 = (float) r0
            return r4
    }

    public static float a(com.amap.api.location.AMapLocation r4, com.amap.api.location.AMapLocation r5) {
            r0 = 4
            double[] r0 = new double[r0]
            double r1 = r4.getLatitude()
            r3 = 0
            r0[r3] = r1
            double r1 = r4.getLongitude()
            r4 = 1
            r0[r4] = r1
            double r1 = r5.getLatitude()
            r4 = 2
            r0[r4] = r1
            double r4 = r5.getLongitude()
            r1 = 3
            r0[r1] = r4
            float r4 = a(r0)
            return r4
    }

    public static float a(com.amap.api.location.DPoint r4, com.amap.api.location.DPoint r5) {
            r0 = 4
            double[] r0 = new double[r0]
            double r1 = r4.getLatitude()
            r3 = 0
            r0[r3] = r1
            double r1 = r4.getLongitude()
            r4 = 1
            r0[r4] = r1
            double r1 = r5.getLatitude()
            r4 = 2
            r0[r4] = r1
            double r4 = r5.getLongitude()
            r1 = 3
            r0[r1] = r4
            float r4 = a(r0)
            return r4
    }

    public static float a(double[] r12) {
            r0 = 1
            float[] r10 = new float[r0]
            r11 = 0
            r1 = r12[r11]
            r3 = r12[r0]
            r0 = 2
            r5 = r12[r0]
            r0 = 3
            r7 = r12[r0]
            r9 = r10
            android.location.Location.distanceBetween(r1, r3, r5, r7, r9)
            r12 = r10[r11]
            return r12
    }

    public static int a(android.net.NetworkInfo r2) {
            r0 = -1
            if (r2 != 0) goto L4
            goto L16
        L4:
            boolean r1 = r2.isAvailable()
            if (r1 != 0) goto Lb
            goto L16
        Lb:
            boolean r1 = r2.isConnected()
            if (r1 != 0) goto L12
            goto L16
        L12:
            int r0 = r2.getType()
        L16:
            return r0
    }

    public static long a() {
            long r0 = java.lang.System.currentTimeMillis()
            return r0
    }

    public static java.lang.Object a(android.content.Context r2, java.lang.String r3) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> Ld
            java.lang.Object r0 = r2.getSystemService(r3)     // Catch: java.lang.Throwable -> Ld
            goto L15
        Ld:
            r2 = move-exception
            java.lang.String r3 = "Utils"
            java.lang.String r1 = "getServ"
            com.loc.fr.a(r2, r3, r1)
        L15:
            return r0
    }

    public static java.lang.String a(int r2) {
            r0 = 33
            java.lang.String r1 = "其他错误"
            if (r2 == r0) goto L43
            switch(r2) {
                case 0: goto L40;
                case 1: goto L3d;
                case 2: goto L3a;
                case 3: goto L37;
                case 4: goto L34;
                case 5: goto L31;
                case 6: goto L2e;
                case 7: goto L2b;
                case 8: goto L45;
                case 9: goto L28;
                case 10: goto L25;
                case 11: goto L22;
                case 12: goto L1f;
                case 13: goto L1c;
                case 14: goto L19;
                case 15: goto L16;
                default: goto L9;
            }
        L9:
            switch(r2) {
                case 18: goto L13;
                case 19: goto L10;
                case 20: goto Ld;
                default: goto Lc;
            }
        Lc:
            goto L45
        Ld:
            java.lang.String r1 = "模糊定位失败，具体可查看错误信息/详细信息描述"
            goto L45
        L10:
            java.lang.String r1 = "定位失败，没有检查到SIM卡，并且关闭了WIFI开关，请打开WIFI开关或者插入SIM卡"
            goto L45
        L13:
            java.lang.String r1 = "定位失败，飞行模式下关闭了WIFI开关，请关闭飞行模式或者打开WIFI开关"
            goto L45
        L16:
            java.lang.String r1 = "当前返回位置为模拟软件返回，请关闭模拟软件，或者在option中设置允许模拟"
            goto L45
        L19:
            java.lang.String r1 = "GPS 定位失败，由于设备当前 GPS 状态差,建议持设备到相对开阔的露天场所再次尝试"
            goto L45
        L1c:
            java.lang.String r1 = "网络定位失败，请检查设备是否插入sim卡，是否开启移动网络或开启了wifi模块"
            goto L45
        L1f:
            java.lang.String r1 = "缺少定位权限"
            goto L45
        L22:
            java.lang.String r1 = "错误的基站信息，请检查是否插入SIM卡"
            goto L45
        L25:
            java.lang.String r1 = "定位服务启动失败"
            goto L45
        L28:
            java.lang.String r1 = "初始化异常"
            goto L45
        L2b:
            java.lang.String r1 = "KEY错误"
            goto L45
        L2e:
            java.lang.String r1 = "定位结果错误"
            goto L45
        L31:
            java.lang.String r1 = "解析数据异常"
            goto L45
        L34:
            java.lang.String r1 = "网络连接异常"
            goto L45
        L37:
            java.lang.String r1 = "请求参数获取出现异常"
            goto L45
        L3a:
            java.lang.String r1 = "WIFI信息不足"
            goto L45
        L3d:
            java.lang.String r1 = "重要参数为空"
            goto L45
        L40:
            java.lang.String r1 = "success"
            goto L45
        L43:
            java.lang.String r1 = "补偿定位失败，未命中缓存"
        L45:
            return r1
    }

    public static java.lang.String a(long r4, java.lang.String r6) {
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 == 0) goto L8
            java.lang.String r6 = "yyyy-MM-dd HH:mm:ss"
        L8:
            r0 = 0
            java.text.SimpleDateFormat r1 = new java.text.SimpleDateFormat     // Catch: java.lang.Throwable -> L17
            java.util.Locale r2 = java.util.Locale.CHINA     // Catch: java.lang.Throwable -> L17
            r1.<init>(r6, r2)     // Catch: java.lang.Throwable -> L17
            r1.applyPattern(r6)     // Catch: java.lang.Throwable -> L14
            goto L20
        L14:
            r6 = move-exception
            r0 = r1
            goto L18
        L17:
            r6 = move-exception
        L18:
            java.lang.String r1 = "Utils"
            java.lang.String r2 = "formatUTC"
            com.loc.fr.a(r6, r1, r2)
            r1 = r0
        L20:
            r2 = 0
            int r6 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r6 > 0) goto L2a
            long r4 = a()
        L2a:
            if (r1 != 0) goto L2f
            java.lang.String r4 = "NULL"
            return r4
        L2f:
            java.lang.Long r4 = java.lang.Long.valueOf(r4)
            java.lang.String r4 = r1.format(r4)
            return r4
    }

    public static java.lang.String a(android.net.ConnectivityManager r1) {
            r0 = 0
            if (r1 == 0) goto L10
            android.net.NetworkInfo r1 = r1.getActiveNetworkInfo()     // Catch: java.lang.Throwable -> Lf
            if (r1 == 0) goto L10
            int r1 = r1.getSubtype()     // Catch: java.lang.Throwable -> Lf
            r0 = r1
            goto L10
        Lf:
        L10:
            switch(r0) {
                case 1: goto L40;
                case 2: goto L3d;
                case 3: goto L3a;
                case 4: goto L37;
                case 5: goto L34;
                case 6: goto L31;
                case 7: goto L2e;
                case 8: goto L2b;
                case 9: goto L28;
                case 10: goto L25;
                case 11: goto L22;
                case 12: goto L1f;
                case 13: goto L1c;
                case 14: goto L19;
                case 15: goto L16;
                default: goto L13;
            }
        L13:
            java.lang.String r1 = "UNKWN"
            return r1
        L16:
            java.lang.String r1 = "HSPAP"
            return r1
        L19:
            java.lang.String r1 = "EHRPD"
            return r1
        L1c:
            java.lang.String r1 = "LTE"
            return r1
        L1f:
            java.lang.String r1 = "EVDO_B"
            return r1
        L22:
            java.lang.String r1 = "IDEN"
            return r1
        L25:
            java.lang.String r1 = "HSPA"
            return r1
        L28:
            java.lang.String r1 = "HSUPA"
            return r1
        L2b:
            java.lang.String r1 = "HSDPA"
            return r1
        L2e:
            java.lang.String r1 = "1xRTT"
            return r1
        L31:
            java.lang.String r1 = "EVDO_A"
            return r1
        L34:
            java.lang.String r1 = "EVDO_0"
            return r1
        L37:
            java.lang.String r1 = "CDMA"
            return r1
        L3a:
            java.lang.String r1 = "UMTS"
            return r1
        L3d:
            java.lang.String r1 = "EDGE"
            return r1
        L40:
            java.lang.String r1 = "GPRS"
            return r1
    }

    public static java.util.List<java.lang.String> a(java.io.File r4) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
            java.io.FileInputStream r4 = b(r4)     // Catch: java.lang.Throwable -> L30
            java.io.InputStreamReader r2 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L2e
            java.nio.charset.Charset r3 = java.nio.charset.Charset.defaultCharset()     // Catch: java.lang.Throwable -> L2e
            r2.<init>(r4, r3)     // Catch: java.lang.Throwable -> L2e
            java.io.BufferedReader r3 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L32
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L32
        L18:
            java.lang.String r1 = r3.readLine()     // Catch: java.lang.Throwable -> L2c
            if (r1 == 0) goto L22
            r0.add(r1)     // Catch: java.lang.Throwable -> L2c
            goto L18
        L22:
            r3.close()     // Catch: java.io.IOException -> L38
            r2.close()     // Catch: java.io.IOException -> L38
            r4.close()     // Catch: java.io.IOException -> L38
            goto L48
        L2c:
            r1 = r3
            goto L32
        L2e:
            r2 = r1
            goto L32
        L30:
            r4 = r1
            r2 = r4
        L32:
            if (r1 == 0) goto L3a
            r1.close()     // Catch: java.io.IOException -> L38
            goto L3a
        L38:
            r4 = move-exception
            goto L45
        L3a:
            if (r2 == 0) goto L3f
            r2.close()     // Catch: java.io.IOException -> L38
        L3f:
            if (r4 == 0) goto L48
            r4.close()     // Catch: java.io.IOException -> L38
            goto L48
        L45:
            r4.printStackTrace()
        L48:
            return r0
    }

    public static void a(java.io.File r1, java.lang.String r2) {
            r0 = 0
            java.io.FileOutputStream r0 = c(r1)     // Catch: java.lang.Throwable -> L17 java.io.IOException -> L19
            if (r2 == 0) goto Le
            byte[] r1 = r2.getBytes()     // Catch: java.lang.Throwable -> L17 java.io.IOException -> L19
            r0.write(r1)     // Catch: java.lang.Throwable -> L17 java.io.IOException -> L19
        Le:
            r0.close()     // Catch: java.io.IOException -> L12
            return
        L12:
            r1 = move-exception
            r1.printStackTrace()
            return
        L17:
            r1 = move-exception
            goto L28
        L19:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L17
            if (r0 == 0) goto L27
            r0.close()     // Catch: java.io.IOException -> L23
            goto L27
        L23:
            r1 = move-exception
            r1.printStackTrace()
        L27:
            return
        L28:
            if (r0 == 0) goto L32
            r0.close()     // Catch: java.io.IOException -> L2e
            goto L32
        L2e:
            r2 = move-exception
            r2.printStackTrace()
        L32:
            throw r1
    }

    public static boolean a(android.content.Context r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            int r1 = c()     // Catch: java.lang.Throwable -> L1a
            r2 = 17
            if (r1 >= r2) goto L13
            java.lang.String r1 = "android.provider.Settings$System"
            boolean r3 = d(r3, r1)     // Catch: java.lang.Throwable -> L1a
            return r3
        L13:
            java.lang.String r1 = "android.provider.Settings$Global"
            boolean r3 = d(r3, r1)     // Catch: java.lang.Throwable -> L1a
            return r3
        L1a:
            return r0
    }

    public static boolean a(android.database.sqlite.SQLiteDatabase r13, java.lang.String r14) {
            boolean r0 = android.text.TextUtils.isEmpty(r14)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.lang.String r0 = "2.0.201501131131"
            java.lang.String r2 = "."
            java.lang.String r3 = ""
            java.lang.String r0 = r0.replace(r2, r3)
            r2 = 0
            if (r13 == 0) goto L67
            r3 = 1
            boolean r4 = r13.isOpen()     // Catch: java.lang.Throwable -> L58
            if (r4 != 0) goto L1d
            goto L67
        L1d:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L58
            java.lang.String r5 = "type = 'table' AND name = '"
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L58
            java.lang.String r14 = r14.trim()     // Catch: java.lang.Throwable -> L58
            r4.append(r14)     // Catch: java.lang.Throwable -> L58
            r4.append(r0)     // Catch: java.lang.Throwable -> L58
            java.lang.String r14 = "'"
            r4.append(r14)     // Catch: java.lang.Throwable -> L58
            java.lang.String r8 = r4.toString()     // Catch: java.lang.Throwable -> L58
            java.lang.String r6 = "sqlite_master"
            java.lang.String r14 = "count(*) as c"
            java.lang.String[] r7 = new java.lang.String[]{r14}     // Catch: java.lang.Throwable -> L58
            r9 = 0
            r10 = 0
            r11 = 0
            r12 = 0
            r5 = r13
            android.database.Cursor r2 = r5.query(r6, r7, r8, r9, r10, r11, r12)     // Catch: java.lang.Throwable -> L58
            if (r2 == 0) goto L5a
            boolean r13 = r2.moveToFirst()     // Catch: java.lang.Throwable -> L58
            if (r13 == 0) goto L5a
            int r13 = r2.getInt(r1)     // Catch: java.lang.Throwable -> L58
            if (r13 <= 0) goto L5a
            r1 = 1
            goto L5a
        L58:
            goto L61
        L5a:
            if (r2 == 0) goto L5f
            r2.close()
        L5f:
            r3 = r1
            goto L66
        L61:
            if (r2 == 0) goto L66
            r2.close()
        L66:
            return r3
        L67:
            return r1
    }

    public static boolean a(android.location.Location r7, int r8) {
            r0 = 0
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L40
            r2 = 18
            if (r1 < r2) goto Lc
            boolean r1 = r7.isFromMockProvider()     // Catch: java.lang.Throwable -> Lc
            goto Ld
        Lc:
            r1 = 0
        Ld:
            r2 = 1
            if (r1 == 0) goto L11
            return r2
        L11:
            android.os.Bundle r1 = r7.getExtras()     // Catch: java.lang.Throwable -> L40
            if (r1 == 0) goto L1e
            java.lang.String r3 = "satellites"
            int r1 = r1.getInt(r3)     // Catch: java.lang.Throwable -> L40
            goto L1f
        L1e:
            r1 = 0
        L1f:
            if (r1 > 0) goto L22
            return r2
        L22:
            if (r8 != 0) goto L40
            double r3 = r7.getAltitude()     // Catch: java.lang.Throwable -> L40
            r5 = 0
            int r8 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r8 != 0) goto L40
            float r8 = r7.getBearing()     // Catch: java.lang.Throwable -> L40
            r1 = 0
            int r8 = (r8 > r1 ? 1 : (r8 == r1 ? 0 : -1))
            if (r8 != 0) goto L40
            float r7 = r7.getSpeed()     // Catch: java.lang.Throwable -> L40
            int r7 = (r7 > r1 ? 1 : (r7 == r1 ? 0 : -1))
            if (r7 != 0) goto L40
            return r2
        L40:
            return r0
    }

    public static boolean a(com.amap.api.location.AMapLocation r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            int r1 = r2.getErrorCode()
            if (r1 == 0) goto Lb
            return r0
        Lb:
            boolean r2 = b(r2)
            return r2
    }

    public static boolean a(com.loc.ew r3) {
            r0 = 0
            if (r3 != 0) goto L4
            goto L2f
        L4:
            java.lang.String r1 = r3.d()
            java.lang.String r2 = "8"
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L11
            goto L2f
        L11:
            java.lang.String r1 = r3.d()
            java.lang.String r2 = "5"
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L1e
            goto L2f
        L1e:
            java.lang.String r1 = r3.d()
            java.lang.String r2 = "6"
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L2b
            goto L2f
        L2b:
            boolean r0 = b(r3)
        L2f:
            return r0
    }

    public static boolean a(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 == 0) goto L8
            goto L23
        L8:
            java.lang.String r0 = "00:00:00:00:00:00"
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L23
            java.lang.String r0 = "02:00:00:00:00:00"
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L19
            goto L23
        L19:
            java.lang.String r0 = " :"
            boolean r2 = r2.contains(r0)
            if (r2 == 0) goto L22
            goto L23
        L22:
            r1 = 1
        L23:
            return r1
    }

    public static boolean a(java.lang.String r6, java.lang.String r7) {
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            r1 = 0
            if (r0 != 0) goto L5b
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 == 0) goto Le
            goto L5b
        Le:
            java.util.ArrayList r6 = b(r6)
            java.lang.String r7 = r7.toString()
            java.lang.String r0 = "#"
            java.lang.String[] r7 = r7.split(r0)
            r0 = 0
            r2 = 0
            r3 = 0
        L1f:
            int r4 = r7.length
            if (r0 >= r4) goto L45
            r4 = r7[r0]
            java.lang.String r5 = ",nb"
            boolean r4 = r4.contains(r5)
            if (r4 != 0) goto L36
            r4 = r7[r0]
            java.lang.String r5 = ",access"
            boolean r4 = r4.contains(r5)
            if (r4 == 0) goto L42
        L36:
            int r2 = r2 + 1
            r4 = r7[r0]
            boolean r4 = r6.contains(r4)
            if (r4 == 0) goto L42
            int r3 = r3 + 1
        L42:
            int r0 = r0 + 1
            goto L1f
        L45:
            int r6 = r6.size()
            int r6 = r6 + r2
            int r3 = r3 * 2
            double r2 = (double) r3
            double r6 = (double) r6
            r4 = 4603741668684706349(0x3fe3c6a7ef9db22d, double:0.618)
            double r6 = r6 * r4
            int r0 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r0 < 0) goto L5b
            r6 = 1
            return r6
        L5b:
            return r1
    }

    public static boolean a(org.json.JSONObject r0, java.lang.String r1) {
            boolean r0 = com.loc.x.a(r0, r1)
            return r0
    }

    public static byte[] a(int r2, byte[] r3) {
            r0 = 2
            if (r3 == 0) goto L6
            int r1 = r3.length
            if (r1 >= r0) goto L8
        L6:
            byte[] r3 = new byte[r0]
        L8:
            r0 = 0
            r1 = r2 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r3[r0] = r1
            r0 = 1
            r1 = 65280(0xff00, float:9.1477E-41)
            r2 = r2 & r1
            int r2 = r2 >> 8
            byte r2 = (byte) r2
            r3[r0] = r2
            return r3
    }

    public static byte[] a(long r7) {
            r0 = 8
            byte[] r1 = new byte[r0]
            r2 = 0
        L5:
            if (r2 >= r0) goto L15
            int r3 = r2 * 8
            long r3 = r7 >> r3
            r5 = 255(0xff, double:1.26E-321)
            long r3 = r3 & r5
            int r4 = (int) r3
            byte r3 = (byte) r4
            r1[r2] = r3
            int r2 = r2 + 1
            goto L5
        L15:
            return r1
    }

    public static byte[] a(byte[] r0) {
            byte[] r0 = com.loc.x.b(r0)
            return r0
    }

    public static java.lang.String[] a(android.telephony.TelephonyManager r8) {
            if (r8 == 0) goto L7
            java.lang.String r8 = r8.getNetworkOperator()
            goto L8
        L7:
            r8 = 0
        L8:
            java.lang.String r0 = "0"
            java.lang.String[] r1 = new java.lang.String[]{r0, r0}
            boolean r2 = android.text.TextUtils.isEmpty(r8)
            r3 = 1
            r4 = 0
            if (r2 == 0) goto L18
        L16:
            r2 = 0
            goto L28
        L18:
            boolean r2 = android.text.TextUtils.isDigitsOnly(r8)
            if (r2 != 0) goto L1f
            goto L16
        L1f:
            int r2 = r8.length()
            r5 = 4
            if (r2 > r5) goto L27
            goto L16
        L27:
            r2 = 1
        L28:
            if (r2 == 0) goto L4f
            r2 = 3
            java.lang.String r5 = r8.substring(r4, r2)
            r1[r4] = r5
            java.lang.String r5 = r8.substring(r2)
            char[] r5 = r5.toCharArray()
            r6 = 0
        L3a:
            int r7 = r5.length
            if (r6 >= r7) goto L48
            char r7 = r5[r6]
            boolean r7 = java.lang.Character.isDigit(r7)
            if (r7 == 0) goto L48
            int r6 = r6 + 1
            goto L3a
        L48:
            int r6 = r6 + r2
            java.lang.String r8 = r8.substring(r2, r6)
            r1[r3] = r8
        L4f:
            r8 = r1[r4]     // Catch: java.lang.Throwable -> L56
            int r8 = java.lang.Integer.parseInt(r8)     // Catch: java.lang.Throwable -> L56
            goto L5f
        L56:
            r8 = move-exception
            java.lang.String r2 = "Utils"
            java.lang.String r5 = "getMccMnc"
            com.loc.fr.a(r8, r2, r5)
            r8 = 0
        L5f:
            if (r8 != 0) goto L63
            r1[r4] = r0
        L63:
            r8 = r1[r4]
            boolean r8 = r0.equals(r8)
            if (r8 != 0) goto L76
            r8 = r1[r3]
            boolean r8 = r0.equals(r8)
            if (r8 != 0) goto L76
            com.loc.fz.c = r1
            goto L8b
        L76:
            r8 = r1[r4]
            boolean r8 = r0.equals(r8)
            if (r8 == 0) goto L8b
            r8 = r1[r3]
            boolean r8 = r0.equals(r8)
            if (r8 == 0) goto L8b
            java.lang.String[] r8 = com.loc.fz.c
            if (r8 == 0) goto L8b
            r1 = r8
        L8b:
            return r1
    }

    public static double b(double r2) {
            r0 = 4696837146684686336(0x412e848000000000, double:1000000.0)
            double r2 = r2 * r0
            long r2 = (long) r2
            double r2 = (double) r2
            double r2 = r2 / r0
            return r2
    }

    public static int b(byte[] r4) {
            r0 = 0
            r1 = 0
        L2:
            r2 = 2
            if (r0 >= r2) goto L12
            r2 = r4[r0]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r3 = 1 - r0
            int r3 = r3 * 8
            int r2 = r2 << r3
            r1 = r1 | r2
            int r0 = r0 + 1
            goto L2
        L12:
            return r1
    }

    public static long b() {
            long r0 = android.os.SystemClock.elapsedRealtime()
            return r0
    }

    private static java.io.FileInputStream b(java.io.File r3) throws java.io.IOException {
            boolean r0 = r3.exists()
            java.lang.String r1 = "File '"
            if (r0 == 0) goto L48
            boolean r0 = r3.isDirectory()
            if (r0 != 0) goto L31
            boolean r0 = r3.canRead()
            if (r0 == 0) goto L1a
            java.io.FileInputStream r0 = new java.io.FileInputStream
            r0.<init>(r3)
            return r0
        L1a:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r1)
            r2.append(r3)
            java.lang.String r3 = "' cannot be read"
            r2.append(r3)
            java.lang.String r3 = r2.toString()
            r0.<init>(r3)
            throw r0
        L31:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r1)
            r2.append(r3)
            java.lang.String r3 = "' exists but is a directory"
            r2.append(r3)
            java.lang.String r3 = r2.toString()
            r0.<init>(r3)
            throw r0
        L48:
            java.io.FileNotFoundException r0 = new java.io.FileNotFoundException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r1)
            r2.append(r3)
            java.lang.String r3 = "' does not exist"
            r2.append(r3)
            java.lang.String r3 = r2.toString()
            r0.<init>(r3)
            throw r0
    }

    public static java.lang.String b(android.content.Context r5) {
            java.lang.String r0 = "Utils"
            java.lang.String r1 = com.loc.fr.j
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto Ld
            java.lang.String r5 = com.loc.fr.j
            return r5
        Ld:
            r1 = 0
            if (r5 != 0) goto L11
            return r1
        L11:
            java.lang.String r2 = com.loc.l.c(r5)
            android.content.pm.PackageManager r3 = r5.getPackageManager()     // Catch: java.lang.Throwable -> L20
            r4 = 64
            android.content.pm.PackageInfo r2 = r3.getPackageInfo(r2, r4)     // Catch: java.lang.Throwable -> L20
            goto L27
        L20:
            r2 = move-exception
            java.lang.String r3 = "getAppName part"
            com.loc.fr.a(r2, r0, r3)
            r2 = r1
        L27:
            java.lang.String r3 = com.loc.fr.k     // Catch: java.lang.Throwable -> L32
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L32
            if (r3 == 0) goto L38
            com.loc.fr.k = r1     // Catch: java.lang.Throwable -> L32
            goto L38
        L32:
            r3 = move-exception
            java.lang.String r4 = "getAppName"
            com.loc.fr.a(r3, r0, r4)
        L38:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            if (r2 == 0) goto L63
            android.content.pm.ApplicationInfo r3 = r2.applicationInfo
            if (r3 == 0) goto L4d
            android.content.pm.ApplicationInfo r1 = r2.applicationInfo
            android.content.pm.PackageManager r3 = r5.getPackageManager()
            java.lang.CharSequence r1 = r1.loadLabel(r3)
        L4d:
            if (r1 == 0) goto L56
            java.lang.String r1 = r1.toString()
            r0.append(r1)
        L56:
            java.lang.String r1 = r2.versionName
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L63
            java.lang.String r1 = r2.versionName
            r0.append(r1)
        L63:
            java.lang.String r5 = com.loc.l.c(r5)
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            java.lang.String r2 = ","
            if (r1 != 0) goto L75
            r0.append(r2)
            r0.append(r5)
        L75:
            java.lang.String r5 = com.loc.fr.k
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L85
            r0.append(r2)
            java.lang.String r5 = com.loc.fr.k
            r0.append(r5)
        L85:
            java.lang.String r5 = r0.toString()
            com.loc.fr.j = r5
            return r5
    }

    public static java.util.ArrayList<java.lang.String> b(java.lang.String r4) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 != 0) goto L31
            java.lang.String r1 = "#"
            java.lang.String[] r4 = r4.split(r1)
            r1 = 0
        L12:
            int r2 = r4.length
            if (r1 >= r2) goto L31
            r2 = r4[r1]
            java.lang.String r3 = ",nb"
            boolean r2 = r2.contains(r3)
            if (r2 != 0) goto L29
            r2 = r4[r1]
            java.lang.String r3 = ",access"
            boolean r2 = r2.contains(r3)
            if (r2 == 0) goto L2e
        L29:
            r2 = r4[r1]
            r0.add(r2)
        L2e:
            int r1 = r1 + 1
            goto L12
        L31:
            return r0
    }

    public static boolean b(android.content.Context r1, java.lang.String r2) {
            android.content.Context r1 = r1.getApplicationContext()
            android.content.pm.PackageManager r1 = r1.getPackageManager()
            r0 = 256(0x100, float:3.59E-43)
            android.content.pm.PackageInfo r1 = r1.getPackageInfo(r2, r0)     // Catch: java.lang.Throwable -> Lf
            goto L10
        Lf:
            r1 = 0
        L10:
            if (r1 == 0) goto L14
            r1 = 1
            goto L15
        L14:
            r1 = 0
        L15:
            return r1
    }

    public static boolean b(com.amap.api.location.AMapLocation r7) {
            double r0 = r7.getLongitude()
            double r2 = r7.getLatitude()
            r4 = 0
            r7 = 0
            int r6 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r6 != 0) goto L14
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 != 0) goto L14
            return r7
        L14:
            r4 = 4640537203540230144(0x4066800000000000, double:180.0)
            int r6 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r6 > 0) goto L3b
            r4 = 4636033603912859648(0x4056800000000000, double:90.0)
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 <= 0) goto L27
            goto L3b
        L27:
            r4 = -4582834833314545664(0xc066800000000000, double:-180.0)
            int r6 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r6 < 0) goto L3b
            r0 = -4587338432941916160(0xc056800000000000, double:-90.0)
            int r4 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r4 >= 0) goto L3a
            goto L3b
        L3a:
            r7 = 1
        L3b:
            return r7
    }

    public static byte[] b(int r2, byte[] r3) {
            r0 = 4
            if (r3 == 0) goto L6
            int r1 = r3.length
            if (r1 >= r0) goto L8
        L6:
            byte[] r3 = new byte[r0]
        L8:
            r0 = 0
        L9:
            int r1 = r3.length
            if (r0 >= r1) goto L18
            int r1 = r0 * 8
            int r1 = r2 >> r1
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r3[r0] = r1
            int r0 = r0 + 1
            goto L9
        L18:
            return r3
    }

    public static double c(double r2) {
            r0 = 4636737291354636288(0x4059000000000000, double:100.0)
            double r2 = r2 * r0
            long r2 = (long) r2
            double r2 = (double) r2
            double r2 = r2 / r0
            return r2
    }

    public static double c(java.lang.String r2) throws java.lang.NumberFormatException {
            double r0 = java.lang.Double.parseDouble(r2)
            return r0
    }

    public static int c() {
            int r0 = com.loc.fz.b
            if (r0 <= 0) goto L5
            return r0
        L5:
            r0 = 0
            java.lang.String r1 = "android.os.Build$VERSION"
            java.lang.String r2 = "SDK_INT"
            int r0 = com.loc.fv.b(r1, r2)     // Catch: java.lang.Throwable -> Lf
            goto L1d
        Lf:
            java.lang.String r2 = "SDK"
            java.lang.Object r1 = com.loc.fv.a(r1, r2)     // Catch: java.lang.Throwable -> L1d
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L1d
            int r0 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Throwable -> L1d
        L1d:
            return r0
    }

    public static android.net.NetworkInfo c(android.content.Context r2) {
            android.net.NetworkInfo r2 = com.loc.o.k(r2)     // Catch: java.lang.Throwable -> L5
            goto Le
        L5:
            r2 = move-exception
            java.lang.String r0 = "Utils"
            java.lang.String r1 = "getNetWorkInfo"
            com.loc.fr.a(r2, r0, r1)
            r2 = 0
        Le:
            return r2
    }

    private static java.io.FileOutputStream c(java.io.File r3) throws java.io.IOException {
            boolean r0 = r3.exists()
            if (r0 == 0) goto L43
            boolean r0 = r3.isDirectory()
            java.lang.String r1 = "File '"
            if (r0 != 0) goto L2c
            boolean r0 = r3.canWrite()
            if (r0 == 0) goto L15
            goto L72
        L15:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r1)
            r2.append(r3)
            java.lang.String r3 = "' cannot be written to"
            r2.append(r3)
            java.lang.String r3 = r2.toString()
            r0.<init>(r3)
            throw r0
        L2c:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r1)
            r2.append(r3)
            java.lang.String r3 = "' exists but is a directory"
            r2.append(r3)
            java.lang.String r3 = r2.toString()
            r0.<init>(r3)
            throw r0
        L43:
            java.io.File r0 = r3.getParentFile()
            if (r0 == 0) goto L72
            boolean r1 = r0.mkdirs()
            if (r1 != 0) goto L6f
            boolean r1 = r0.isDirectory()
            if (r1 == 0) goto L56
            goto L6f
        L56:
            java.io.IOException r3 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Directory '"
            r1.<init>(r2)
            r1.append(r0)
            java.lang.String r0 = "' could not be created"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r3.<init>(r0)
            throw r3
        L6f:
            r3.createNewFile()
        L72:
            java.io.FileOutputStream r0 = new java.io.FileOutputStream
            r1 = 0
            r0.<init>(r3, r1)
            return r0
    }

    public static boolean c(android.content.Context r4, java.lang.String r5) {
            r0 = 0
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L23
            r2 = 23
            r3 = 1
            if (r1 < r2) goto L16
            if (r4 == 0) goto L26
            java.lang.String r5 = com.loc.x.c(r5)     // Catch: java.lang.Throwable -> L23
            int r4 = r4.checkSelfPermission(r5)     // Catch: java.lang.Throwable -> L23
            if (r4 != 0) goto L26
        L14:
            r0 = 1
            goto L26
        L16:
            if (r4 == 0) goto L26
            java.lang.String r5 = com.loc.x.c(r5)     // Catch: java.lang.Throwable -> L23
            int r4 = r4.checkCallingOrSelfPermission(r5)     // Catch: java.lang.Throwable -> L23
            if (r4 != 0) goto L26
            goto L14
        L23:
            com.loc.ft.b()
        L26:
            return r0
    }

    public static float d(java.lang.String r0) throws java.lang.NumberFormatException {
            float r0 = java.lang.Float.parseFloat(r0)
            return r0
    }

    public static int d() {
            java.util.Random r0 = new java.util.Random
            r0.<init>()
            r1 = 65536(0x10000, float:9.1835E-41)
            int r0 = r0.nextInt(r1)
            int r0 = r0 + (-32768)
            return r0
    }

    public static boolean d(android.content.Context r1) {
            r0 = 0
            android.net.NetworkInfo r1 = c(r1)     // Catch: java.lang.Throwable -> Lf
            if (r1 == 0) goto Lf
            boolean r1 = r1.isConnectedOrConnecting()     // Catch: java.lang.Throwable -> Lf
            if (r1 == 0) goto Lf
            r1 = 1
            return r1
        Lf:
            return r0
    }

    private static boolean d(android.content.Context r4, java.lang.String r5) throws java.lang.Throwable {
            android.content.ContentResolver r4 = r4.getContentResolver()
            java.lang.String r0 = "AIRPLANE_MODE_ON"
            java.lang.Object r0 = com.loc.fv.a(r5, r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r0 = r0.toString()
            r1 = 2
            java.lang.Object[] r2 = new java.lang.Object[r1]
            r3 = 0
            r2[r3] = r4
            r4 = 1
            r2[r4] = r0
            java.lang.Class[] r0 = new java.lang.Class[r1]
            java.lang.Class<android.content.ContentResolver> r1 = android.content.ContentResolver.class
            r0[r3] = r1
            java.lang.Class<java.lang.String> r1 = java.lang.String.class
            r0[r4] = r1
            java.lang.String r1 = "getInt"
            java.lang.Object r5 = com.loc.fv.a(r5, r1, r2, r0)
            java.lang.Integer r5 = (java.lang.Integer) r5
            int r5 = r5.intValue()
            if (r5 != r4) goto L32
            return r4
        L32:
            return r3
    }

    public static int e(java.lang.String r0) throws java.lang.NumberFormatException {
            int r0 = java.lang.Integer.parseInt(r0)
            return r0
    }

    public static java.lang.String e() {
            java.lang.String r0 = "S128DF1572465B890OE3F7A13167KLEI"
            java.lang.String r1 = "UTF-8"
            byte[] r0 = r0.getBytes(r1)     // Catch: java.lang.Throwable -> L13
            java.lang.String r0 = com.loc.p.b(r0)     // Catch: java.lang.Throwable -> L13
            r1 = 20
            java.lang.String r0 = r0.substring(r1)     // Catch: java.lang.Throwable -> L13
            goto L15
        L13:
            java.lang.String r0 = ""
        L15:
            return r0
    }

    public static boolean e(android.content.Context r9) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            r2 = 1
            r3 = 0
            if (r0 < r1) goto L30
            android.content.pm.ApplicationInfo r0 = r9.getApplicationInfo()
            int r0 = r0.targetSdkVersion
            if (r0 < r1) goto L30
            android.app.Application r9 = (android.app.Application) r9
            java.lang.String[] r0 = com.loc.er.F
            int r1 = r0.length
            r4 = 0
        L16:
            if (r4 >= r1) goto L43
            r5 = r0[r4]
            android.content.Context r6 = r9.getBaseContext()     // Catch: java.lang.Throwable -> L29
            java.lang.String r7 = "checkSelfPermission"
            java.lang.Object[] r8 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L29
            r8[r3] = r5     // Catch: java.lang.Throwable -> L29
            int r5 = com.loc.fv.b(r6, r7, r8)     // Catch: java.lang.Throwable -> L29
            goto L2a
        L29:
            r5 = 0
        L2a:
            if (r5 == 0) goto L2d
            goto L3e
        L2d:
            int r4 = r4 + 1
            goto L16
        L30:
            java.lang.String[] r0 = com.loc.er.F
            int r1 = r0.length
            r4 = 0
        L34:
            if (r4 >= r1) goto L43
            r5 = r0[r4]
            int r5 = r9.checkCallingOrSelfPermission(r5)
            if (r5 == 0) goto L40
        L3e:
            r2 = 0
            goto L43
        L40:
            int r4 = r4 + 1
            goto L34
        L43:
            return r2
    }

    public static int f(java.lang.String r1) throws java.lang.NumberFormatException {
            r0 = 16
            int r1 = java.lang.Integer.parseInt(r1, r0)
            return r1
    }

    public static boolean f(android.content.Context r5) {
            android.content.pm.ApplicationInfo r0 = r5.getApplicationInfo()
            int r0 = r0.targetSdkVersion
            r1 = 29
            r2 = 1
            r3 = 0
            if (r0 < r1) goto L27
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 < r1) goto L27
            android.app.Application r5 = (android.app.Application) r5
            android.content.Context r5 = r5.getBaseContext()     // Catch: java.lang.Throwable -> L23
            java.lang.String r0 = "checkSelfPermission"
            java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L23
            java.lang.String r4 = com.loc.er.G     // Catch: java.lang.Throwable -> L23
            r1[r3] = r4     // Catch: java.lang.Throwable -> L23
            int r5 = com.loc.fv.b(r5, r0, r1)     // Catch: java.lang.Throwable -> L23
            goto L24
        L23:
            r5 = 0
        L24:
            if (r5 == 0) goto L27
            r2 = 0
        L27:
            return r2
    }

    public static byte g(java.lang.String r0) throws java.lang.NumberFormatException {
            byte r0 = java.lang.Byte.parseByte(r0)
            return r0
    }

    public static boolean g(android.content.Context r3) {
            if (r3 != 0) goto L4
            r3 = 1
            return r3
        L4:
            android.net.wifi.WifiManager r0 = com.loc.fz.a
            if (r0 != 0) goto L12
            java.lang.String r0 = "wifi"
            java.lang.Object r0 = a(r3, r0)
            android.net.wifi.WifiManager r0 = (android.net.wifi.WifiManager) r0
            com.loc.fz.a = r0
        L12:
            r0 = 0
            java.lang.String r1 = "EYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19XSUZJX1NUQVRF"
            boolean r3 = c(r3, r1)     // Catch: java.lang.Throwable -> L35
            if (r3 == 0) goto L22
            android.net.wifi.WifiManager r3 = com.loc.fz.a     // Catch: java.lang.Throwable -> L35
            boolean r3 = r3.isWifiEnabled()     // Catch: java.lang.Throwable -> L35
            goto L31
        L22:
            java.lang.Exception r3 = new java.lang.Exception     // Catch: java.lang.Throwable -> L35
            java.lang.String r1 = "n_aws"
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L35
            java.lang.String r1 = "OPENSDK_UTS"
            java.lang.String r2 = "iwfal_n_aws"
            com.loc.fr.a(r3, r1, r2)     // Catch: java.lang.Throwable -> L35
            r3 = 0
        L31:
            com.loc.ft.b()     // Catch: java.lang.Throwable -> L36
            goto L39
        L35:
            r3 = 0
        L36:
            com.loc.ft.c()
        L39:
            if (r3 != 0) goto L57
            int r1 = c()
            r2 = 17
            if (r1 <= r2) goto L57
            android.net.wifi.WifiManager r1 = com.loc.fz.a     // Catch: java.lang.Throwable -> L57
            java.lang.String r2 = "isScanAlwaysAvailable"
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L57
            java.lang.Object r0 = com.loc.fv.a(r1, r2, r0)     // Catch: java.lang.Throwable -> L57
            java.lang.String r1 = "true"
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> L57
            boolean r3 = r1.equals(r0)     // Catch: java.lang.Throwable -> L57
        L57:
            return r3
    }

    public static java.lang.String h(android.content.Context r4) {
            android.net.NetworkInfo r4 = c(r4)
            if (r4 == 0) goto L54
            boolean r0 = r4.isConnectedOrConnecting()
            if (r0 != 0) goto Ld
            goto L54
        Ld:
            int r0 = r4.getType()
            r1 = 1
            java.lang.String r2 = "3G"
            java.lang.String r3 = "2G"
            if (r0 != r1) goto L1b
            java.lang.String r2 = "WIFI"
            goto L53
        L1b:
            if (r0 != 0) goto L51
            java.lang.String r0 = r4.getSubtypeName()
            int r4 = r4.getSubtype()
            switch(r4) {
                case 1: goto L34;
                case 2: goto L34;
                case 3: goto L53;
                case 4: goto L34;
                case 5: goto L53;
                case 6: goto L53;
                case 7: goto L34;
                case 8: goto L53;
                case 9: goto L53;
                case 10: goto L53;
                case 11: goto L34;
                case 12: goto L53;
                case 13: goto L31;
                case 14: goto L53;
                case 15: goto L53;
                case 16: goto L34;
                case 17: goto L53;
                default: goto L28;
            }
        L28:
            java.lang.String r4 = "GSM"
            boolean r4 = r4.equalsIgnoreCase(r0)
            if (r4 == 0) goto L36
            goto L34
        L31:
            java.lang.String r2 = "4G"
            goto L53
        L34:
            r2 = r3
            goto L53
        L36:
            java.lang.String r4 = "TD-SCDMA"
            boolean r4 = r4.equalsIgnoreCase(r0)
            if (r4 != 0) goto L53
            java.lang.String r4 = "WCDMA"
            boolean r4 = r4.equalsIgnoreCase(r0)
            if (r4 != 0) goto L53
            java.lang.String r4 = "CDMA2000"
            boolean r4 = r4.equalsIgnoreCase(r0)
            if (r4 == 0) goto L4f
            goto L53
        L4f:
            r2 = r0
            goto L53
        L51:
            java.lang.String r2 = "UNKNOWN"
        L53:
            return r2
        L54:
            java.lang.String r4 = "DISCONNECTED"
            return r4
    }

    private static boolean h(java.lang.String r3) {
            r0 = 0
            java.lang.String r1 = android.os.Build.MANUFACTURER     // Catch: java.lang.Throwable -> L18
            java.lang.String r2 = android.os.Build.BRAND     // Catch: java.lang.Throwable -> L18
            boolean r1 = r1.equalsIgnoreCase(r3)     // Catch: java.lang.Throwable -> L18
            if (r1 != 0) goto L15
            java.lang.String r1 = r2.toLowerCase()     // Catch: java.lang.Throwable -> L18
            boolean r3 = r1.contains(r3)     // Catch: java.lang.Throwable -> L18
            if (r3 == 0) goto L1b
        L15:
            r3 = 1
            r0 = 1
            goto L1b
        L18:
            com.loc.ft.b()
        L1b:
            return r0
    }

    public static java.lang.String i(android.content.Context r3) {
            java.lang.String r0 = com.loc.o.h()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r2 = "00:00:00:00:00:00"
            if (r1 != 0) goto L12
            boolean r1 = r0.equals(r2)
            if (r1 == 0) goto L16
        L12:
            java.lang.String r0 = com.loc.fy.a(r3)
        L16:
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 == 0) goto L1d
            goto L1e
        L1d:
            r2 = r0
        L1e:
            return r2
    }

    public static boolean j(android.content.Context r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto L10
            android.content.pm.ApplicationInfo r2 = r2.getApplicationInfo()
            int r2 = r2.targetSdkVersion
            if (r2 < r1) goto L10
            r2 = 1
            return r2
        L10:
            r2 = 0
            return r2
    }

    public static boolean k(android.content.Context r2) {
            android.content.ComponentName r0 = new android.content.ComponentName     // Catch: java.lang.Throwable -> L12
            java.lang.String r1 = "com.amap.api.location.APSService"
            r0.<init>(r2, r1)     // Catch: java.lang.Throwable -> L12
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Throwable -> L12
            r1 = 128(0x80, float:1.8E-43)
            android.content.pm.ServiceInfo r2 = r2.getServiceInfo(r0, r1)     // Catch: java.lang.Throwable -> L12
            goto L13
        L12:
            r2 = 0
        L13:
            if (r2 != 0) goto L17
            r2 = 0
            return r2
        L17:
            r2 = 1
            return r2
    }

    public static java.lang.String l(android.content.Context r1) {
            java.lang.String r0 = com.loc.fz.d
            if (r0 != 0) goto L10
            java.lang.String r1 = com.loc.l.c(r1)
            java.lang.String r0 = "MD5"
            java.lang.String r1 = com.loc.fg.a(r0, r1)
            com.loc.fz.d = r1
        L10:
            java.lang.String r1 = com.loc.fz.d
            return r1
    }

    public static boolean m(android.content.Context r2) {
            r0 = 0
            boolean r1 = p(r2)     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto L13
            boolean r1 = o(r2)     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto L13
            boolean r2 = n(r2)     // Catch: java.lang.Throwable -> L16
            if (r2 == 0) goto L19
        L13:
            r2 = 1
            r0 = 1
            goto L19
        L16:
            com.loc.ft.b()
        L19:
            return r0
    }

    private static boolean n(android.content.Context r1) {
            java.lang.String r0 = "huawei"
            boolean r0 = h(r0)
            if (r0 == 0) goto L16
            boolean r0 = q(r1)
            if (r0 == 0) goto L16
            boolean r1 = s(r1)
            if (r1 == 0) goto L16
            r1 = 1
            return r1
        L16:
            r1 = 0
            return r1
    }

    private static boolean o(android.content.Context r1) {
            java.lang.String r0 = "vivo"
            boolean r0 = h(r0)
            if (r0 == 0) goto L16
            boolean r0 = q(r1)
            if (r0 == 0) goto L16
            boolean r1 = r(r1)
            if (r1 == 0) goto L16
            r1 = 1
            return r1
        L16:
            r1 = 0
            return r1
    }

    private static boolean p(android.content.Context r3) {
            r0 = 0
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L1c
            r2 = 31
            if (r1 < r2) goto L1f
            if (r3 == 0) goto L1f
            java.lang.String r1 = "android.permission.ACCESS_FINE_LOCATION"
            int r1 = r3.checkSelfPermission(r1)     // Catch: java.lang.Throwable -> L1c
            if (r1 == 0) goto L1f
            java.lang.String r1 = "android.permission.ACCESS_COARSE_LOCATION"
            int r3 = r3.checkSelfPermission(r1)     // Catch: java.lang.Throwable -> L1c
            if (r3 != 0) goto L1f
            r3 = 1
            r0 = 1
            goto L1f
        L1c:
            com.loc.ft.b()
        L1f:
            return r0
    }

    private static boolean q(android.content.Context r8) {
            r0 = 0
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L3a
            android.content.pm.ApplicationInfo r8 = r8.getApplicationInfo()     // Catch: java.lang.Throwable -> L3a
            int r8 = r8.targetSdkVersion     // Catch: java.lang.Throwable -> L3a
            r2 = 30
            r3 = 1
            if (r1 != r2) goto L10
            r4 = 1
            goto L11
        L10:
            r4 = 0
        L11:
            r5 = 23
            if (r8 < r5) goto L17
            r6 = 1
            goto L18
        L17:
            r6 = 0
        L18:
            r7 = 31
            if (r1 != r7) goto L1e
            r1 = 1
            goto L1f
        L1e:
            r1 = 0
        L1f:
            if (r8 > r2) goto L25
            if (r8 < r5) goto L25
            r8 = 1
            goto L26
        L25:
            r8 = 0
        L26:
            if (r4 == 0) goto L2c
            if (r6 == 0) goto L2c
            r2 = 1
            goto L2d
        L2c:
            r2 = 0
        L2d:
            if (r1 == 0) goto L33
            if (r8 == 0) goto L33
            r8 = 1
            goto L34
        L33:
            r8 = 0
        L34:
            if (r2 != 0) goto L38
            if (r8 == 0) goto L3d
        L38:
            r0 = 1
            goto L3d
        L3a:
            com.loc.ft.b()
        L3d:
            return r0
    }

    private static boolean r(android.content.Context r8) {
            r0 = 0
            java.lang.String r1 = r8.getPackageName()     // Catch: java.lang.Throwable -> L42
            android.content.ContentResolver r2 = r8.getContentResolver()     // Catch: java.lang.Throwable -> L42
            java.lang.String r8 = "content://com.vivo.permissionmanager.provider.permission/fuzzy_location_apps"
            android.net.Uri r3 = android.net.Uri.parse(r8)     // Catch: java.lang.Throwable -> L42
            java.lang.String r8 = "package_name"
            java.lang.String r4 = "selected_fuzzy"
            java.lang.String[] r4 = new java.lang.String[]{r8, r4}     // Catch: java.lang.Throwable -> L42
            java.lang.String r5 = "package_name=?"
            r8 = 1
            java.lang.String[] r6 = new java.lang.String[r8]     // Catch: java.lang.Throwable -> L42
            r6[r0] = r1     // Catch: java.lang.Throwable -> L42
            r7 = 0
            android.database.Cursor r1 = r2.query(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L42
            r2 = 0
        L24:
            if (r1 == 0) goto L3c
            boolean r3 = r1.moveToNext()     // Catch: java.lang.Throwable -> L3a
            if (r3 == 0) goto L3c
            java.lang.String r3 = r1.getString(r0)     // Catch: java.lang.Throwable -> L3a
            if (r3 == 0) goto L24
            int r3 = r1.getInt(r8)     // Catch: java.lang.Throwable -> L3a
            if (r3 != r8) goto L24
            r2 = 1
            goto L24
        L3a:
            r0 = r2
            goto L43
        L3c:
            if (r1 == 0) goto L41
            r1.close()
        L41:
            return r2
        L42:
            r1 = 0
        L43:
            com.loc.ft.b()     // Catch: java.lang.Throwable -> L4c
            if (r1 == 0) goto L4b
            r1.close()
        L4b:
            return r0
        L4c:
            if (r1 == 0) goto L51
            r1.close()
        L51:
            return r0
    }

    private static boolean s(android.content.Context r5) {
            r0 = 0
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L1e
            r2 = 23
            r3 = 1
            java.lang.String r4 = "com.huawei.permission.ACCESS_APPROXIMATELY_LOCATION"
            if (r1 < r2) goto L14
            if (r5 == 0) goto L1d
            int r5 = r5.checkSelfPermission(r4)     // Catch: java.lang.Throwable -> L1e
            if (r5 != 0) goto L1d
        L12:
            r0 = 1
            goto L1d
        L14:
            if (r5 == 0) goto L1d
            int r5 = r5.checkCallingOrSelfPermission(r4)     // Catch: java.lang.Throwable -> L1e
            if (r5 != 0) goto L1d
            goto L12
        L1d:
            return r0
        L1e:
            com.loc.ft.b()     // Catch: java.lang.Throwable -> L21
        L21:
            return r0
    }
}

package com.yxcorp.kuaishou.addfp.android.a;

public class c {
    private static boolean d = true;
    private java.lang.String a;
    private java.lang.String b;
    private java.util.concurrent.locks.ReentrantLock c;

    private c() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.b = r0
            java.util.concurrent.locks.ReentrantLock r0 = new java.util.concurrent.locks.ReentrantLock
            r0.<init>()
            r1.c = r0
            return
    }

    c(com.yxcorp.kuaishou.addfp.android.a.a r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(android.content.Context r7) {
            boolean r0 = com.yxcorp.kuaishou.addfp.android.a.c.d     // Catch: java.lang.Throwable -> Lb4
            if (r0 != 0) goto L7
            java.lang.String r7 = "KWE_NPN"
            return r7
        L7:
            r0 = 1
            r1 = 0
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L11
            r3 = 26
            if (r2 < r3) goto L15
            r2 = r0
            goto L16
        L11:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> Lb4
        L15:
            r2 = r1
        L16:
            if (r2 != 0) goto L23
            java.lang.String r2 = b()     // Catch: java.lang.Throwable -> Lb4
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lb4
            if (r3 != 0) goto L23
            return r2
        L23:
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lb4
            r3 = 29
            if (r2 < r3) goto L58
            java.lang.String r2 = android.os.Build.MODEL     // Catch: java.lang.Throwable -> Lb4
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lb4
            if (r3 != 0) goto L4b
            java.lang.String r3 = r2.toLowerCase()     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r4 = "redmi"
            boolean r3 = r3.contains(r4)     // Catch: java.lang.Throwable -> Lb4
            if (r3 == 0) goto L4b
            java.lang.String r2 = r2.toLowerCase()     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r3 = "note 7"
            boolean r2 = r2.contains(r3)     // Catch: java.lang.Throwable -> Lb4
            if (r2 == 0) goto L4b
            r2 = r0
            goto L4c
        L4b:
            r2 = r1
        L4c:
            java.lang.String r3 = android.os.Build.BRAND     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r4 = "HONOR"
            boolean r3 = r3.equalsIgnoreCase(r4)     // Catch: java.lang.Throwable -> Lb4
            if (r3 == 0) goto L59
            r2 = r0
            goto L59
        L58:
            r2 = r1
        L59:
            if (r2 != 0) goto L72
            com.yxcorp.kuaishou.addfp.android.Orange r2 = com.yxcorp.kuaishou.addfp.android.Orange.getInstance()     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r2 = r2.gSer()     // Catch: java.lang.Throwable -> Lb4
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lb4
            if (r3 != 0) goto L72
            java.lang.String r3 = "KWE"
            boolean r3 = r2.startsWith(r3)     // Catch: java.lang.Throwable -> Lb4
            if (r3 != 0) goto L72
            return r2
        L72:
            java.lang.String r2 = "android.permission.READ_PHONE_STATE"
            java.lang.String[] r2 = new java.lang.String[]{r2}     // Catch: java.lang.Throwable -> Lb4
            r3 = r1
        L79:
            if (r3 > 0) goto L90
            r4 = r2[r1]     // Catch: java.lang.Throwable -> L8f
            int r5 = android.os.Process.myPid()     // Catch: java.lang.Throwable -> L8f
            int r6 = android.os.Process.myUid()     // Catch: java.lang.Throwable -> L8f
            int r4 = r7.checkPermission(r4, r5, r6)     // Catch: java.lang.Throwable -> L8f
            r5 = -1
            if (r4 == r5) goto L8f
            int r3 = r3 + 1
            goto L79
        L8f:
            r0 = r1
        L90:
            java.lang.String r7 = "unknown"
            if (r0 == 0) goto La5
            java.lang.String r0 = android.os.Build.getSerial()     // Catch: java.lang.Throwable -> Lb4
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb4
            if (r1 != 0) goto La5
            boolean r1 = r0.equals(r7)     // Catch: java.lang.Throwable -> Lb4
            if (r1 != 0) goto La5
            return r0
        La5:
            java.lang.String r0 = android.os.Build.SERIAL     // Catch: java.lang.Throwable -> Lb4
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb4
            if (r1 != 0) goto Lb8
            boolean r7 = r0.equals(r7)     // Catch: java.lang.Throwable -> Lb4
            if (r7 != 0) goto Lb8
            return r0
        Lb4:
            r7 = move-exception
            r7.printStackTrace()
        Lb8:
            java.lang.String r7 = "KWE_N"
            return r7
    }

    private static java.lang.String a(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L9
            java.lang.String r2 = "KWE_N"
            return r2
        L9:
            java.lang.String r0 = ""
            java.lang.String r1 = "="
            java.lang.String r2 = r2.replace(r1, r0)
            java.lang.String r1 = "&"
            java.lang.String r2 = r2.replace(r1, r0)
            return r2
    }

    public static void a(org.json.JSONObject r3) {
            java.util.Iterator r0 = r3.keys()     // Catch: java.lang.Throwable -> L23
        L4:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L23
            if (r1 == 0) goto L27
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L23
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L23
            java.lang.String r2 = "64"
            boolean r2 = r2.equals(r1)     // Catch: java.lang.Throwable -> L23
            if (r2 == 0) goto L4
            r2 = 1
            int r1 = r3.optInt(r1, r2)     // Catch: java.lang.Throwable -> L23
            if (r1 != 0) goto L4
            r1 = 0
            com.yxcorp.kuaishou.addfp.android.a.c.d = r1     // Catch: java.lang.Throwable -> L23
            goto L4
        L23:
            r3 = move-exception
            r3.printStackTrace()
        L27:
            return
    }

    public static java.lang.String b() {
            r0 = 0
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L35
            java.lang.String r2 = "/sys/class/android_usb/android0/iSerial"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L35
            boolean r2 = r1.exists()     // Catch: java.lang.Throwable -> L35
            if (r2 == 0) goto L31
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L35
            java.io.FileReader r3 = new java.io.FileReader     // Catch: java.lang.Throwable -> L35
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L35
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L35
            java.lang.String r1 = r2.readLine()     // Catch: java.lang.Throwable -> L2f
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L2f
            if (r3 != 0) goto L32
            java.lang.String r0 = r1.trim()     // Catch: java.lang.Throwable -> L2f
            r2.close()     // Catch: java.lang.Throwable -> L2a
            goto L2e
        L2a:
            r1 = move-exception
            r1.printStackTrace()
        L2e:
            return r0
        L2f:
            r1 = move-exception
            goto L37
        L31:
            r2 = r0
        L32:
            if (r2 == 0) goto L44
            goto L3c
        L35:
            r1 = move-exception
            r2 = r0
        L37:
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L45
            if (r2 == 0) goto L44
        L3c:
            r2.close()     // Catch: java.lang.Throwable -> L40
            goto L44
        L40:
            r1 = move-exception
            r1.printStackTrace()
        L44:
            return r0
        L45:
            r0 = move-exception
            if (r2 == 0) goto L50
            r2.close()     // Catch: java.lang.Throwable -> L4c
            goto L50
        L4c:
            r1 = move-exception
            r1.printStackTrace()
        L50:
            throw r0
    }

    public static com.yxcorp.kuaishou.addfp.android.a.c c() {
            com.yxcorp.kuaishou.addfp.android.a.c r0 = com.yxcorp.kuaishou.addfp.android.a.b.a
            return r0
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.a     // Catch: java.lang.Throwable -> Lb
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lb
            if (r0 != 0) goto Lf
            java.lang.String r0 = r1.a     // Catch: java.lang.Throwable -> Lb
            return r0
        Lb:
            r0 = move-exception
            r0.printStackTrace()
        Lf:
            java.lang.String r0 = "KWE_N"
            return r0
    }

    public java.lang.String a(android.content.Context r23, com.yxcorp.kuaishou.addfp.ResponseDfpCallback r24, boolean r25) {
            r22 = this;
            r1 = r22
            r2 = r23
            java.lang.String r3 = " "
            java.lang.String r4 = "KWE_NPN"
            java.lang.String r5 = "AD_AND"
            java.lang.String r6 = "k14"
            java.lang.String r7 = ""
            java.lang.String r8 = "KWE_N"
            java.lang.String r9 = "KWE_PE"
            long r10 = java.lang.System.currentTimeMillis()
            java.util.concurrent.locks.ReentrantLock r0 = r1.c     // Catch: java.lang.Throwable -> L343
            r0.lock()     // Catch: java.lang.Throwable -> L343
            java.lang.String r0 = r1.b     // Catch: java.lang.Throwable -> L343
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L343
            if (r0 != 0) goto L2b
            java.lang.String r0 = r1.b     // Catch: java.lang.Throwable -> L343
            java.util.concurrent.locks.ReentrantLock r2 = r1.c
            r2.unlock()
            return r0
        L2b:
            org.json.JSONObject r12 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L343
            r12.<init>()     // Catch: java.lang.Throwable -> L343
            java.lang.String r0 = "k23"
            java.lang.String r13 = android.os.Build.MANUFACTURER     // Catch: java.lang.Throwable -> L343
            java.lang.String r13 = a(r13)     // Catch: java.lang.Throwable -> L343
            java.lang.String r13 = com.yxcorp.kuaishou.addfp.android.b.g.a(r13)     // Catch: java.lang.Throwable -> L343
            r12.put(r0, r13)     // Catch: java.lang.Throwable -> L343
            java.lang.String r0 = "k61"
            java.lang.String r13 = android.os.Build.BRAND     // Catch: java.lang.Throwable -> L343
            java.lang.String r13 = a(r13)     // Catch: java.lang.Throwable -> L343
            java.lang.String r13 = com.yxcorp.kuaishou.addfp.android.b.g.a(r13)     // Catch: java.lang.Throwable -> L343
            r12.put(r0, r13)     // Catch: java.lang.Throwable -> L343
            java.lang.String r0 = android.os.Build.MODEL     // Catch: java.lang.Throwable -> L343
            java.lang.String r0 = a(r0)     // Catch: java.lang.Throwable -> L343
            java.lang.String r13 = "k27"
            java.lang.String r0 = com.yxcorp.kuaishou.addfp.android.b.g.a(r0)     // Catch: java.lang.Throwable -> L343
            r12.put(r13, r0)     // Catch: java.lang.Throwable -> L343
            java.lang.String r0 = a(r23)     // Catch: java.lang.Throwable -> L343
            java.lang.String r13 = "k64"
            java.lang.String r0 = com.yxcorp.kuaishou.addfp.android.b.g.a(r0)     // Catch: java.lang.Throwable -> L343
            r12.put(r13, r0)     // Catch: java.lang.Throwable -> L343
            r13 = 0
            java.lang.String r0 = com.yxcorp.kuaishou.addfp.android.b.d.c(r13)     // Catch: java.lang.Throwable -> L343
            java.lang.String r14 = "k31"
            java.lang.String r0 = com.yxcorp.kuaishou.addfp.android.b.g.a(r0)     // Catch: java.lang.Throwable -> L343
            r12.put(r14, r0)     // Catch: java.lang.Throwable -> L343
            r14 = 1
            java.lang.String r0 = com.yxcorp.kuaishou.addfp.android.b.d.c(r14)     // Catch: java.lang.Throwable -> L343
            java.lang.String r15 = "k117"
            java.lang.String r0 = com.yxcorp.kuaishou.addfp.android.b.g.a(r0)     // Catch: java.lang.Throwable -> L343
            r12.put(r15, r0)     // Catch: java.lang.Throwable -> L343
            java.lang.String r0 = "k66"
            java.lang.String r15 = com.yxcorp.kuaishou.addfp.android.b.d.a(r13)     // Catch: java.lang.Throwable -> L343
            java.lang.String r15 = com.yxcorp.kuaishou.addfp.android.b.g.a(r15)     // Catch: java.lang.Throwable -> L343
            r12.put(r0, r15)     // Catch: java.lang.Throwable -> L343
            java.lang.String r0 = "k116"
            java.lang.String r15 = com.yxcorp.kuaishou.addfp.android.b.d.a(r14)     // Catch: java.lang.Throwable -> L343
            java.lang.String r15 = com.yxcorp.kuaishou.addfp.android.b.g.a(r15)     // Catch: java.lang.Throwable -> L343
            r12.put(r0, r15)     // Catch: java.lang.Throwable -> L343
            java.lang.String r15 = "k39"
            r16 = 0
            long r18 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Laf
            long r20 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> Laf
            long r18 = r18 - r20
            goto Lb5
        Laf:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L343
            r18 = r16
        Lb5:
            java.lang.String r0 = java.lang.Long.toString(r18)     // Catch: java.lang.Throwable -> L343
            java.lang.String r0 = com.yxcorp.kuaishou.addfp.android.b.g.a(r0)     // Catch: java.lang.Throwable -> L343
            r12.put(r15, r0)     // Catch: java.lang.Throwable -> L343
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Throwable -> L343
            java.lang.String r15 = "Y2F0IC9zeXMvZGV2aWNlcy9zb2MwL3NlcmlhbF9udW1iZXI="
            byte[] r15 = android.util.Base64.decode(r15, r13)     // Catch: java.lang.Throwable -> L343
            r0.<init>(r15)     // Catch: java.lang.Throwable -> L343
            java.lang.String r0 = com.yxcorp.kuaishou.addfp.android.b.g.b(r0)     // Catch: java.lang.Throwable -> L343
            java.lang.String r0 = com.yxcorp.kuaishou.addfp.android.b.g.a(r0)     // Catch: java.lang.Throwable -> L343
            java.lang.String r15 = "k101"
            r12.put(r15, r0)     // Catch: java.lang.Throwable -> L343
            java.lang.String r0 = "k102"
            java.lang.String r15 = new java.lang.String     // Catch: java.lang.Throwable -> L343
            java.lang.String r14 = "Y2F0IC9wcm9jL3N5cy9rZXJuZWwvcmFuZG9tL2Jvb3RfaWQ="
            byte[] r14 = android.util.Base64.decode(r14, r13)     // Catch: java.lang.Throwable -> L343
            r15.<init>(r14)     // Catch: java.lang.Throwable -> L343
            java.lang.String r14 = com.yxcorp.kuaishou.addfp.android.b.g.b(r15)     // Catch: java.lang.Throwable -> L343
            java.lang.String r14 = com.yxcorp.kuaishou.addfp.android.b.g.a(r14)     // Catch: java.lang.Throwable -> L343
            r12.put(r0, r14)     // Catch: java.lang.Throwable -> L343
            java.lang.String r0 = "k57"
            java.lang.String r14 = com.yxcorp.kuaishou.addfp.android.b.d.b(r13)     // Catch: java.lang.Throwable -> L343
            java.lang.String r14 = com.yxcorp.kuaishou.addfp.android.b.g.a(r14)     // Catch: java.lang.Throwable -> L343
            r12.put(r0, r14)     // Catch: java.lang.Throwable -> L343
            java.lang.String r0 = "k118"
            r14 = 1
            java.lang.String r15 = com.yxcorp.kuaishou.addfp.android.b.d.b(r14)     // Catch: java.lang.Throwable -> L343
            java.lang.String r14 = com.yxcorp.kuaishou.addfp.android.b.g.a(r15)     // Catch: java.lang.Throwable -> L343
            r12.put(r0, r14)     // Catch: java.lang.Throwable -> L343
            java.lang.String r0 = "k68"
            java.lang.String r14 = com.yxcorp.kuaishou.addfp.android.b.d.e(r13)     // Catch: java.lang.Throwable -> L343
            java.lang.String r14 = com.yxcorp.kuaishou.addfp.android.b.g.a(r14)     // Catch: java.lang.Throwable -> L343
            r12.put(r0, r14)     // Catch: java.lang.Throwable -> L343
            java.lang.String r0 = "k120"
            r14 = 1
            java.lang.String r15 = com.yxcorp.kuaishou.addfp.android.b.d.e(r14)     // Catch: java.lang.Throwable -> L343
            java.lang.String r14 = com.yxcorp.kuaishou.addfp.android.b.g.a(r15)     // Catch: java.lang.Throwable -> L343
            r12.put(r0, r14)     // Catch: java.lang.Throwable -> L343
            com.yxcorp.kuaishou.addfp.android.Orange r0 = com.yxcorp.kuaishou.addfp.android.Orange.getInstance()     // Catch: java.lang.Throwable -> L343
            java.lang.String r0 = r0.gRdi()     // Catch: java.lang.Throwable -> L343
            java.lang.String r14 = "k105"
            java.lang.String r0 = com.yxcorp.kuaishou.addfp.android.b.g.a(r0)     // Catch: java.lang.Throwable -> L343
            r12.put(r14, r0)     // Catch: java.lang.Throwable -> L343
            java.lang.String r14 = "k83"
            com.yxcorp.kuaishou.addfp.android.a.c r0 = c()     // Catch: java.lang.Throwable -> L151
            java.lang.String r0 = r0.a()     // Catch: java.lang.Throwable -> L151
            com.yxcorp.kuaishou.addfp.KWEGIDDFP r15 = com.yxcorp.kuaishou.addfp.KWEGIDDFP.instance()     // Catch: java.lang.Throwable -> L151
            java.lang.String r0 = r15.getEGidLocal(r2, r0, r13)     // Catch: java.lang.Throwable -> L151
            boolean r15 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L151
            if (r15 == 0) goto L156
            r0 = r8
            goto L156
        L151:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L343
            r0 = r9
        L156:
            java.lang.String r0 = com.yxcorp.kuaishou.addfp.android.b.g.a(r0)     // Catch: java.lang.Throwable -> L343
            r12.put(r14, r0)     // Catch: java.lang.Throwable -> L343
            java.lang.String r0 = com.yxcorp.kuaishou.addfp.c.a.a.a(r23)     // Catch: java.lang.Throwable -> L343
            java.lang.String r14 = "k86"
            java.lang.String r0 = com.yxcorp.kuaishou.addfp.android.b.g.a(r0)     // Catch: java.lang.Throwable -> L343
            r12.put(r14, r0)     // Catch: java.lang.Throwable -> L343
            java.lang.String r14 = "k3"
            java.lang.String r0 = r23.getPackageName()     // Catch: java.lang.Throwable -> L17d
            java.lang.String r15 = "="
            java.lang.String r0 = r0.replace(r15, r7)     // Catch: java.lang.Throwable -> L17d
            java.lang.String r15 = "&"
            java.lang.String r0 = r0.replace(r15, r7)     // Catch: java.lang.Throwable -> L17d
            goto L182
        L17d:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L343
            r0 = r9
        L182:
            java.lang.String r0 = com.yxcorp.kuaishou.addfp.android.b.g.a(r0)     // Catch: java.lang.Throwable -> L343
            r12.put(r14, r0)     // Catch: java.lang.Throwable -> L343
            java.lang.String r0 = "k109"
            com.yxcorp.kuaishou.addfp.android.Orange r7 = com.yxcorp.kuaishou.addfp.android.Orange.getInstance()     // Catch: java.lang.Throwable -> L343
            java.lang.String r7 = r7.gProps()     // Catch: java.lang.Throwable -> L343
            java.lang.String r7 = com.yxcorp.kuaishou.addfp.android.b.g.a(r7)     // Catch: java.lang.Throwable -> L343
            r12.put(r0, r7)     // Catch: java.lang.Throwable -> L343
            java.lang.String r0 = "k36"
            java.lang.String r7 = "1.3.6.92.f75f436d"
            java.lang.String r7 = com.yxcorp.kuaishou.addfp.android.b.g.a(r7)     // Catch: java.lang.Throwable -> L343
            r12.put(r0, r7)     // Catch: java.lang.Throwable -> L343
            java.lang.String r0 = com.yxcorp.kuaishou.addfp.android.b.g.a(r5)     // Catch: java.lang.Throwable -> L343
            r12.put(r6, r0)     // Catch: java.lang.Throwable -> L343
            java.lang.String r0 = "k5"
            java.io.File r7 = android.os.Environment.getDataDirectory()     // Catch: java.lang.Throwable -> L1c8
            android.os.StatFs r14 = new android.os.StatFs     // Catch: java.lang.Throwable -> L1c8
            java.lang.String r7 = r7.getPath()     // Catch: java.lang.Throwable -> L1c8
            r14.<init>(r7)     // Catch: java.lang.Throwable -> L1c8
            int r7 = r14.getBlockSize()     // Catch: java.lang.Throwable -> L1c8
            r15 = r8
            long r7 = (long) r7
            int r14 = r14.getBlockCount()     // Catch: java.lang.Throwable -> L1c9
            long r13 = (long) r14
            long r13 = r13 * r7
            goto L1cb
        L1c8:
            r15 = r8
        L1c9:
            r13 = r16
        L1cb:
            java.lang.String r7 = java.lang.Long.toString(r13)     // Catch: java.lang.Throwable -> L341
            java.lang.String r7 = com.yxcorp.kuaishou.addfp.android.b.g.a(r7)     // Catch: java.lang.Throwable -> L341
            r12.put(r0, r7)     // Catch: java.lang.Throwable -> L341
            java.lang.String r7 = "k46"
            java.lang.String r0 = "/proc/meminfo"
            r8 = 0
            java.io.FileReader r13 = new java.io.FileReader     // Catch: java.lang.Throwable -> L203
            r13.<init>(r0)     // Catch: java.lang.Throwable -> L203
            java.io.BufferedReader r14 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L203
            r0 = 8192(0x2000, float:1.148E-41)
            r14.<init>(r13, r0)     // Catch: java.lang.Throwable -> L203
            java.lang.String r0 = r14.readLine()     // Catch: java.lang.Throwable -> L200
            java.lang.String r8 = "\\s+"
            java.lang.String[] r0 = r0.split(r8)     // Catch: java.lang.Throwable -> L200
            r8 = 1
            r0 = r0[r8]     // Catch: java.lang.Throwable -> L200
            long r16 = java.lang.Long.parseLong(r0)     // Catch: java.lang.Throwable -> L200
            r20 = 1024(0x400, double:5.06E-321)
            long r16 = r16 * r20
            r14.close()     // Catch: java.io.IOException -> L20c java.lang.Throwable -> L341
            goto L20c
        L200:
            r0 = move-exception
            r8 = r14
            goto L204
        L203:
            r0 = move-exception
        L204:
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L339
            if (r8 == 0) goto L20c
            r8.close()     // Catch: java.io.IOException -> L20c java.lang.Throwable -> L341
        L20c:
            java.lang.String r0 = java.lang.Long.toString(r16)     // Catch: java.lang.Throwable -> L341
            java.lang.String r0 = com.yxcorp.kuaishou.addfp.android.b.g.a(r0)     // Catch: java.lang.Throwable -> L341
            r12.put(r7, r0)     // Catch: java.lang.Throwable -> L341
            java.lang.String r0 = "k110"
            com.yxcorp.kuaishou.addfp.android.Orange r7 = com.yxcorp.kuaishou.addfp.android.Orange.getInstance()     // Catch: java.lang.Throwable -> L341
            java.lang.String r7 = r7.gKpsd()     // Catch: java.lang.Throwable -> L341
            java.lang.String r7 = com.yxcorp.kuaishou.addfp.android.b.g.a(r7)     // Catch: java.lang.Throwable -> L341
            r12.put(r0, r7)     // Catch: java.lang.Throwable -> L341
            java.lang.String r0 = "k111"
            java.lang.String r7 = com.yxcorp.kuaishou.addfp.android.b.g.a(r4)     // Catch: java.lang.Throwable -> L341
            r12.put(r0, r7)     // Catch: java.lang.Throwable -> L341
            com.yxcorp.kuaishou.addfp.android.Orange r0 = com.yxcorp.kuaishou.addfp.android.Orange.getInstance()     // Catch: java.lang.Throwable -> L341
            java.lang.String r7 = com.yxcorp.kuaishou.addfp.c.a.a.a()     // Catch: java.lang.Throwable -> L341
            java.lang.String r0 = r0.gManu(r2, r7)     // Catch: java.lang.Throwable -> L341
            java.lang.String r7 = "k113"
            java.lang.String r0 = com.yxcorp.kuaishou.addfp.android.b.g.a(r0)     // Catch: java.lang.Throwable -> L341
            r12.put(r7, r0)     // Catch: java.lang.Throwable -> L341
            r7 = 1
            java.lang.String r0 = com.yxcorp.kuaishou.addfp.android.b.d.d(r7)     // Catch: java.lang.Throwable -> L341
            java.lang.String r7 = "k115"
            java.lang.String r0 = com.yxcorp.kuaishou.addfp.android.b.g.a(r0)     // Catch: java.lang.Throwable -> L341
            r12.put(r7, r0)     // Catch: java.lang.Throwable -> L341
            r7 = 0
            java.lang.String r0 = com.yxcorp.kuaishou.addfp.android.b.d.d(r7)     // Catch: java.lang.Throwable -> L341
            if (r25 == 0) goto L289
            boolean r4 = r0.equals(r4)     // Catch: java.lang.Throwable -> L341
            if (r4 != 0) goto L289
            java.lang.String r4 = "KWE"
            boolean r4 = r0.startsWith(r4)     // Catch: java.lang.Throwable -> L341
            if (r4 == 0) goto L289
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L341
            r4 = 29
            if (r0 < r4) goto L282
            java.util.concurrent.CountDownLatch r0 = new java.util.concurrent.CountDownLatch     // Catch: java.lang.Throwable -> L341
            r4 = 1
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L341
            r7 = 1000(0x3e8, double:4.94E-321)
            java.util.concurrent.TimeUnit r13 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.InterruptedException -> L27d java.lang.Throwable -> L341
            r0.await(r7, r13)     // Catch: java.lang.InterruptedException -> L27d java.lang.Throwable -> L341
            goto L283
        L27d:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L341
            goto L283
        L282:
            r4 = 1
        L283:
            r7 = 0
            java.lang.String r0 = com.yxcorp.kuaishou.addfp.android.b.d.d(r7)     // Catch: java.lang.Throwable -> L341
            goto L28a
        L289:
            r4 = 1
        L28a:
            java.lang.String r7 = "k97"
            java.lang.String r0 = com.yxcorp.kuaishou.addfp.android.b.g.a(r0)     // Catch: java.lang.Throwable -> L341
            r12.put(r7, r0)     // Catch: java.lang.Throwable -> L341
            java.util.zip.CRC32 r0 = new java.util.zip.CRC32     // Catch: java.lang.Throwable -> L2e3
            r0.<init>()     // Catch: java.lang.Throwable -> L2e3
            r14 = r4
        L299:
            r4 = 120(0x78, float:1.68E-43)
            if (r14 > r4) goto L2bf
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2e3
            java.lang.String r7 = "k"
            r4.<init>(r7)     // Catch: java.lang.Throwable -> L2e3
            r4.append(r14)     // Catch: java.lang.Throwable -> L2e3
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L2e3
            boolean r7 = r12.has(r4)     // Catch: java.lang.Throwable -> L2e3
            if (r7 == 0) goto L2bc
            java.lang.String r4 = r12.optString(r4)     // Catch: java.lang.Throwable -> L2e3
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Throwable -> L2e3
            r0.update(r4)     // Catch: java.lang.Throwable -> L2e3
        L2bc:
            int r14 = r14 + 1
            goto L299
        L2bf:
            long r7 = r0.getValue()     // Catch: java.lang.Throwable -> L2e3
            java.lang.String r0 = java.lang.String.valueOf(r7)     // Catch: java.lang.Throwable -> L2e3
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2e3
            r4.<init>()     // Catch: java.lang.Throwable -> L2e3
            r4.append(r5)     // Catch: java.lang.Throwable -> L2e3
            java.lang.String r5 = ":"
            r4.append(r5)     // Catch: java.lang.Throwable -> L2e3
            r4.append(r0)     // Catch: java.lang.Throwable -> L2e3
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Throwable -> L2e3
            java.lang.String r0 = com.yxcorp.kuaishou.addfp.android.b.g.a(r0)     // Catch: java.lang.Throwable -> L2e3
            r12.put(r6, r0)     // Catch: java.lang.Throwable -> L2e3
            goto L2e7
        L2e3:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L341
        L2e7:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L341
            java.lang.String r4 = "mimi :"
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L341
            java.lang.String r4 = r12.toString()     // Catch: java.lang.Throwable -> L341
            r0.append(r4)     // Catch: java.lang.Throwable -> L341
            r0.append(r3)     // Catch: java.lang.Throwable -> L341
            java.lang.String r4 = r12.toString()     // Catch: java.lang.Throwable -> L341
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Throwable -> L341
            int r4 = r4.length     // Catch: java.lang.Throwable -> L341
            r0.append(r4)     // Catch: java.lang.Throwable -> L341
            r0.append(r3)     // Catch: java.lang.Throwable -> L341
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L341
            long r3 = r3 - r10
            r0.append(r3)     // Catch: java.lang.Throwable -> L341
            com.yxcorp.kuaishou.addfp.android.Orange r0 = com.yxcorp.kuaishou.addfp.android.Orange.getInstance()     // Catch: java.lang.Throwable -> L341
            java.lang.String r3 = r12.toString()     // Catch: java.lang.Throwable -> L341
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Throwable -> L341
            r4 = 0
            byte[] r0 = r0.getMagicWrapper(r2, r3, r4)     // Catch: java.lang.Throwable -> L341
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L341
            java.lang.String r3 = "get mini lenth "
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L341
            int r3 = r0.length     // Catch: java.lang.Throwable -> L341
            r2.append(r3)     // Catch: java.lang.Throwable -> L341
            r2 = 0
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r2)     // Catch: java.lang.Throwable -> L341
            java.lang.String r2 = "utf-8"
            java.lang.String r0 = java.net.URLEncoder.encode(r0, r2)     // Catch: java.lang.Throwable -> L341
            r1.b = r0     // Catch: java.lang.Throwable -> L341
            goto L354
        L339:
            r0 = move-exception
            r2 = r0
            if (r8 == 0) goto L340
            r8.close()     // Catch: java.io.IOException -> L340 java.lang.Throwable -> L341
        L340:
            throw r2     // Catch: java.lang.Throwable -> L341
        L341:
            r0 = move-exception
            goto L345
        L343:
            r0 = move-exception
            r15 = r8
        L345:
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L367
            r1.b = r9     // Catch: java.lang.Throwable -> L367
            java.lang.String r0 = com.yxcorp.kuaishou.addfp.android.b.g.a(r0)     // Catch: java.lang.Throwable -> L367
            r2 = -1
            r3 = r24
            r3.onFailed(r2, r0)     // Catch: java.lang.Throwable -> L367
        L354:
            java.util.concurrent.locks.ReentrantLock r0 = r1.c
            r0.unlock()
            java.lang.String r0 = r1.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L364
            r2 = r15
            r1.b = r2
        L364:
            java.lang.String r0 = r1.b
            return r0
        L367:
            r0 = move-exception
            java.util.concurrent.locks.ReentrantLock r2 = r1.c
            r2.unlock()
            throw r0
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }
}

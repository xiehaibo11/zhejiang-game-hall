package com.kuaishou.weapon.p0.jni;

public class Engine {
    private static volatile com.kuaishou.weapon.p0.jni.Engine instance;
    public static volatile int loadSoCount;
    public static volatile boolean loadSuccess;
    public static volatile java.lang.String soPath;
    public static volatile java.lang.String soVersion;

    static {
            return
    }

    public Engine() {
            r0 = this;
            r0.<init>()
            return
    }

    public static native java.lang.String abc();

    public static native java.lang.String bcd();

    public static com.kuaishou.weapon.p0.jni.Engine getInstance(android.content.Context r8) {
            java.lang.String r0 = com.kuaishou.weapon.p0.jni.Engine.soVersion
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L123
            boolean r0 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess
            if (r0 != 0) goto L123
            com.kuaishou.weapon.p0.jni.Engine r0 = com.kuaishou.weapon.p0.jni.Engine.instance
            if (r0 != 0) goto L123
            java.lang.Class<com.kuaishou.weapon.p0.jni.Engine> r0 = com.kuaishou.weapon.p0.jni.Engine.class
            monitor-enter(r0)
            java.lang.String r1 = "weapon"
            com.kuaishou.weapon.p0.jni.Engine r2 = com.kuaishou.weapon.p0.jni.Engine.instance     // Catch: java.lang.Throwable -> L120
            if (r2 != 0) goto L20
            com.kuaishou.weapon.p0.jni.Engine r2 = new com.kuaishou.weapon.p0.jni.Engine     // Catch: java.lang.Throwable -> L120
            r2.<init>()     // Catch: java.lang.Throwable -> L120
            com.kuaishou.weapon.p0.jni.Engine.instance = r2     // Catch: java.lang.Throwable -> L120
        L20:
            java.lang.String r2 = "re_po_rt"
            com.kuaishou.weapon.p0.h r2 = com.kuaishou.weapon.p0.h.a(r8, r2)     // Catch: java.lang.Throwable -> L120
            r3 = 0
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf3
            r4.<init>()     // Catch: java.lang.Throwable -> Lf3
            r4.append(r1)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r5 = com.kuaishou.weapon.p0.jni.Engine.soVersion     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r6 = "."
            java.lang.String r7 = ""
            java.lang.String r5 = r5.replace(r6, r7)     // Catch: java.lang.Throwable -> Lf3
            r4.append(r5)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r5 = ".so"
            r4.append(r5)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> Lf3
            boolean r4 = com.kuaishou.weapon.p0.bo.a(r8, r4)     // Catch: java.lang.Throwable -> Lf3
            if (r4 != 0) goto L62
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> Lf3
            r1.<init>()     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r4 = "l"
            java.lang.String r5 = com.kuaishou.weapon.p0.cj.l     // Catch: java.lang.Throwable -> Lf3
            r1.put(r4, r5)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r4 = com.kuaishou.weapon.p0.cj.a     // Catch: java.lang.Throwable -> Lf3
            com.kuaishou.weapon.p0.bg.a(r8, r4, r1)     // Catch: java.lang.Throwable -> Lf3
            com.kuaishou.weapon.p0.jni.Engine.loadSuccess = r3     // Catch: java.lang.Throwable -> Lf3
            com.kuaishou.weapon.p0.jni.Engine r8 = com.kuaishou.weapon.p0.jni.Engine.instance     // Catch: java.lang.Throwable -> Lf3
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L120
            return r8
        L62:
            java.lang.String r4 = "plc001_lss_v_s"
            java.lang.String r5 = ""
            java.lang.String r4 = r2.b(r4, r5)     // Catch: java.lang.Throwable -> Lf3
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> Lf3
            if (r5 == 0) goto L77
            java.lang.String r4 = com.kuaishou.weapon.p0.jni.Engine.soVersion     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r5 = "plc001_lss_v_s"
            r2.c(r5, r4, r3)     // Catch: java.lang.Throwable -> Lf3
        L77:
            java.lang.String r5 = "plc001_lps_t_p0"
            int r5 = r2.c(r5)     // Catch: java.lang.Throwable -> Lf3
            com.kuaishou.weapon.p0.jni.Engine.loadSoCount = r5     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r5 = com.kuaishou.weapon.p0.jni.Engine.soVersion     // Catch: java.lang.Throwable -> Lf3
            boolean r4 = android.text.TextUtils.equals(r4, r5)     // Catch: java.lang.Throwable -> Lf3
            if (r4 != 0) goto L90
            java.lang.String r4 = com.kuaishou.weapon.p0.jni.Engine.soVersion     // Catch: java.lang.Throwable -> Lf3
            com.kuaishou.weapon.p0.jni.Engine.loadSoCount = r3     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r5 = "plc001_lss_v_s"
            r2.c(r5, r4, r3)     // Catch: java.lang.Throwable -> Lf3
        L90:
            int r4 = com.kuaishou.weapon.p0.jni.Engine.loadSoCount     // Catch: java.lang.Throwable -> Lf3
            r5 = 1
            int r4 = r4 + r5
            r6 = 10
            if (r4 >= r6) goto L117
            int r4 = com.kuaishou.weapon.p0.jni.Engine.loadSoCount     // Catch: java.lang.Throwable -> Lf3
            int r4 = r4 + r5
            com.kuaishou.weapon.p0.jni.Engine.loadSoCount = r4     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r4 = "plc001_lps_t_p0"
            int r6 = com.kuaishou.weapon.p0.jni.Engine.loadSoCount     // Catch: java.lang.Throwable -> Lf3
            r2.d(r4, r6)     // Catch: java.lang.Throwable -> Lf3
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf3
            r4.<init>()     // Catch: java.lang.Throwable -> Lf3
            r4.append(r1)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r1 = com.kuaishou.weapon.p0.jni.Engine.soVersion     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r6 = "."
            java.lang.String r7 = ""
            java.lang.String r1 = r1.replace(r6, r7)     // Catch: java.lang.Throwable -> Lf3
            r4.append(r1)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r1 = r4.toString()     // Catch: java.lang.Throwable -> Lf3
            java.lang.System.loadLibrary(r1)     // Catch: java.lang.Throwable -> Lf3
            bcd()     // Catch: java.lang.Throwable -> Lf3
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> Lf3
            r1.<init>()     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r4 = "c"
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf3
            r6.<init>()     // Catch: java.lang.Throwable -> Lf3
            int r7 = com.kuaishou.weapon.p0.jni.Engine.loadSoCount     // Catch: java.lang.Throwable -> Lf3
            r6.append(r7)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> Lf3
            r1.put(r4, r6)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r4 = "v"
            java.lang.String r6 = com.kuaishou.weapon.p0.jni.Engine.soVersion     // Catch: java.lang.Throwable -> Lf3
            r1.put(r4, r6)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r4 = "l"
            java.lang.String r6 = "s"
            r1.put(r4, r6)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r4 = "1003001"
            com.kuaishou.weapon.p0.bg.a(r8, r4, r1)     // Catch: java.lang.Throwable -> Lf3
            com.kuaishou.weapon.p0.jni.Engine.loadSoCount = r3     // Catch: java.lang.Throwable -> Lf3
            com.kuaishou.weapon.p0.jni.Engine.loadSuccess = r5     // Catch: java.lang.Throwable -> Lf3
            goto L117
        Lf3:
            r1 = move-exception
            com.kuaishou.weapon.p0.jni.Engine.loadSuccess = r3     // Catch: java.lang.Throwable -> L120
            java.util.HashMap r3 = new java.util.HashMap     // Catch: java.lang.Exception -> L117 java.lang.Throwable -> L120
            r3.<init>()     // Catch: java.lang.Exception -> L117 java.lang.Throwable -> L120
            java.lang.String r4 = "e"
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Exception -> L117 java.lang.Throwable -> L120
            r3.put(r4, r1)     // Catch: java.lang.Exception -> L117 java.lang.Throwable -> L120
            java.lang.String r1 = "v"
            java.lang.String r4 = com.kuaishou.weapon.p0.jni.Engine.soVersion     // Catch: java.lang.Exception -> L117 java.lang.Throwable -> L120
            r3.put(r1, r4)     // Catch: java.lang.Exception -> L117 java.lang.Throwable -> L120
            java.lang.String r1 = "l"
            java.lang.String r4 = com.kuaishou.weapon.p0.cj.k     // Catch: java.lang.Exception -> L117 java.lang.Throwable -> L120
            r3.put(r1, r4)     // Catch: java.lang.Exception -> L117 java.lang.Throwable -> L120
            java.lang.String r1 = com.kuaishou.weapon.p0.cj.a     // Catch: java.lang.Exception -> L117 java.lang.Throwable -> L120
            com.kuaishou.weapon.p0.bg.a(r8, r1, r3)     // Catch: java.lang.Exception -> L117 java.lang.Throwable -> L120
        L117:
            java.lang.String r8 = "plc001_lps_t_p0"
            int r1 = com.kuaishou.weapon.p0.jni.Engine.loadSoCount     // Catch: java.lang.Throwable -> L120
            r2.d(r8, r1)     // Catch: java.lang.Throwable -> L120
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L120
            goto L123
        L120:
            r8 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L120
            throw r8
        L123:
            com.kuaishou.weapon.p0.jni.Engine r8 = com.kuaishou.weapon.p0.jni.Engine.instance
            return r8
    }

    public static native int mmo(java.lang.reflect.Member r0, int r1, int r2);

    public static native int mqc(java.lang.reflect.Member r0, int r1);

    public static native int off();

    public static native java.lang.String tao(int r0, long r1, java.lang.Object r3);

    public native byte[] ac(byte[] r1, byte[] r2);

    public native byte[] ar(byte[] r1, byte[] r2);

    public native java.lang.String cde();

    public native byte[] dc(byte[] r1, byte[] r2);

    public native java.lang.String def();

    public native byte[] dr(byte[] r1, byte[] r2);

    public native java.lang.String efg();

    public native java.lang.String eopq(int r1, int r2, int r3, java.lang.String r4);

    public native java.lang.String fgh();

    public native java.lang.String ghi();

    public native java.lang.String hij();

    public native java.lang.String klm(int r1, java.lang.String r2);

    public native java.lang.String nop();

    public native java.lang.String pqr(int r1, int r2, int r3, java.lang.String r4);

    public native java.lang.String qrs();

    public native java.lang.String stu(int r1, int r2, int r3, int r4, java.lang.String r5);
}

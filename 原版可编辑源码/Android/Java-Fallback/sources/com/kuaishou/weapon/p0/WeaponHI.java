package com.kuaishou.weapon.p0;

public class WeaponHI {
    public static boolean as = false;
    public static java.lang.String cookieData = "";
    public static java.lang.String encryENV = "";
    public static java.lang.String hostVersionName = "";
    public static int ii = 0;
    public static java.util.List<java.lang.Integer> isList = null;
    public static android.content.Context mContext = null;
    public static com.kuaishou.weapon.p0.IWeaponInitParams mParams = null;
    public static java.lang.String sChannel = "";
    public static java.lang.String sKDeviceId = "";
    public static java.lang.String sKSAppkey = "";
    public static java.lang.String sKSSdkver = "";
    public static java.lang.String sKSSecKey = "";
    public static java.lang.String sUserId = "";
    public static java.lang.String skProductName = "";




    static {
            return
    }

    public WeaponHI() {
            r0 = this;
            r0.<init>()
            return
    }

    static void access$000(java.lang.String r0, java.lang.String r1, boolean r2) {
            init(r0, r1, r2)
            return
    }

    public static void iD() {
            android.content.Context r0 = com.kuaishou.weapon.p0.WeaponHI.mContext     // Catch: java.lang.Throwable -> L26
            iP(r0)     // Catch: java.lang.Throwable -> L26
            com.kuaishou.weapon.p0.receiver.WeaponRECE r0 = new com.kuaishou.weapon.p0.receiver.WeaponRECE     // Catch: java.lang.Throwable -> L26
            r0.<init>()     // Catch: java.lang.Throwable -> L26
            r1 = 0
            android.content.Context r2 = com.kuaishou.weapon.p0.WeaponHI.mContext     // Catch: java.lang.Throwable -> L26
            boolean r2 = r2 instanceof android.app.Application     // Catch: java.lang.Throwable -> L26
            if (r2 == 0) goto L15
            android.content.Context r1 = com.kuaishou.weapon.p0.WeaponHI.mContext     // Catch: java.lang.Throwable -> L26
            android.app.Application r1 = (android.app.Application) r1     // Catch: java.lang.Throwable -> L26
        L15:
            if (r1 == 0) goto L26
            android.content.IntentFilter r2 = new android.content.IntentFilter     // Catch: java.lang.Throwable -> L26
            java.lang.String r3 = "com.kuaishou.weapon.p0.env.action"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L26
            java.lang.String r3 = "env"
            r2.addDataScheme(r3)     // Catch: java.lang.Throwable -> L26
            r1.registerReceiver(r0, r2)     // Catch: java.lang.Throwable -> L26
        L26:
            android.content.Context r0 = com.kuaishou.weapon.p0.WeaponHI.mContext     // Catch: java.lang.Exception -> L71
            com.kuaishou.weapon.p0.db r0 = com.kuaishou.weapon.p0.db.a(r0)     // Catch: java.lang.Exception -> L71
            r1 = 100
            r0.a(r1)     // Catch: java.lang.Exception -> L71
            android.content.Context r0 = com.kuaishou.weapon.p0.WeaponHI.mContext     // Catch: java.lang.Exception -> L71
            com.kuaishou.weapon.p0.cw r0 = com.kuaishou.weapon.p0.cw.a(r0)     // Catch: java.lang.Exception -> L71
            r0.a(r1)     // Catch: java.lang.Exception -> L71
            android.content.Context r0 = com.kuaishou.weapon.p0.WeaponHI.mContext     // Catch: java.lang.Exception -> L71
            com.kuaishou.weapon.p0.dc r0 = com.kuaishou.weapon.p0.dc.a(r0)     // Catch: java.lang.Exception -> L71
            r0.a(r1)     // Catch: java.lang.Exception -> L71
            android.content.Context r0 = com.kuaishou.weapon.p0.WeaponHI.mContext     // Catch: java.lang.Exception -> L71
            com.kuaishou.weapon.p0.da r0 = com.kuaishou.weapon.p0.da.a(r0)     // Catch: java.lang.Exception -> L71
            r2 = 0
            r0.a(r1, r2)     // Catch: java.lang.Exception -> L71
            android.content.Context r0 = com.kuaishou.weapon.p0.WeaponHI.mContext     // Catch: java.lang.Exception -> L71
            com.kuaishou.weapon.p0.cx r0 = com.kuaishou.weapon.p0.cx.a(r0)     // Catch: java.lang.Exception -> L71
            r0.a(r1)     // Catch: java.lang.Exception -> L71
            android.content.Context r0 = com.kuaishou.weapon.p0.WeaponHI.mContext     // Catch: java.lang.Exception -> L71
            com.kuaishou.weapon.p0.cy r0 = com.kuaishou.weapon.p0.cy.a(r0)     // Catch: java.lang.Exception -> L71
            r0.a(r1)     // Catch: java.lang.Exception -> L71
            android.content.Context r0 = com.kuaishou.weapon.p0.WeaponHI.mContext     // Catch: java.lang.Exception -> L71
            com.kuaishou.weapon.p0.dd r0 = com.kuaishou.weapon.p0.dd.a(r0)     // Catch: java.lang.Exception -> L71
            r0.a(r1)     // Catch: java.lang.Exception -> L71
            android.content.Context r0 = com.kuaishou.weapon.p0.WeaponHI.mContext     // Catch: java.lang.Exception -> L71
            com.kuaishou.weapon.p0.cz r0 = com.kuaishou.weapon.p0.cz.a(r0)     // Catch: java.lang.Exception -> L71
            r0.a()     // Catch: java.lang.Exception -> L71
        L71:
            return
    }

    public static void iP(android.content.Context r8) {
            com.kuaishou.weapon.p0.df r0 = com.kuaishou.weapon.p0.df.a(r8)     // Catch: java.lang.Throwable -> L39
            long r0 = r0.b()     // Catch: java.lang.Throwable -> L39
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L39
            long r2 = r2 - r0
            java.lang.String r4 = "re_po_rt"
            com.kuaishou.weapon.p0.h r4 = com.kuaishou.weapon.p0.h.a(r8, r4)     // Catch: java.lang.Throwable -> L39
            java.lang.String r5 = "plc001_b_pti"
            r6 = 12
            int r4 = r4.c(r5, r6)     // Catch: java.lang.Throwable -> L39
            long r4 = (long) r4     // Catch: java.lang.Throwable -> L39
            r6 = 3600000(0x36ee80, double:1.7786363E-317)
            long r4 = r4 * r6
            long r2 = r2 - r4
            r4 = 1
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 < 0) goto L2d
            r0 = 0
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 <= 0) goto L39
        L2d:
            com.kuaishou.weapon.p0.n r0 = com.kuaishou.weapon.p0.n.a()     // Catch: java.lang.Throwable -> L39
            com.kuaishou.weapon.p0.cv r1 = new com.kuaishou.weapon.p0.cv     // Catch: java.lang.Throwable -> L39
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L39
            r0.a(r1)     // Catch: java.lang.Throwable -> L39
        L39:
            return
    }

    public static void init(android.content.Context r1, com.kuaishou.weapon.p0.IWeaponInitParams r2) {
            android.content.Context r1 = r1.getApplicationContext()     // Catch: java.lang.Throwable -> L1e
            com.kuaishou.weapon.p0.WeaponHI.mContext = r1     // Catch: java.lang.Throwable -> L1e
            boolean r1 = r1 instanceof android.app.Application     // Catch: java.lang.Throwable -> L1e
            if (r1 == 0) goto L17
            com.kuaishou.weapon.p0.n r1 = com.kuaishou.weapon.p0.n.a()     // Catch: java.lang.Throwable -> L1e
            com.kuaishou.weapon.p0.WeaponHI$2 r0 = new com.kuaishou.weapon.p0.WeaponHI$2     // Catch: java.lang.Throwable -> L1e
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L1e
            r1.a(r0)     // Catch: java.lang.Throwable -> L1e
            goto L1e
        L17:
            java.lang.String r1 = "Risk"
            java.lang.String r2 = "context  is not application！！！"
            android.util.Log.e(r1, r2)     // Catch: java.lang.Throwable -> L1e
        L1e:
            return
    }

    private static void init(java.lang.String r0, java.lang.String r1, boolean r2) {
            android.content.Context r0 = com.kuaishou.weapon.p0.WeaponHI.mContext     // Catch: java.lang.Exception -> L1e
            java.lang.String r1 = "re_po_rt"
            com.kuaishou.weapon.p0.h r0 = com.kuaishou.weapon.p0.h.a(r0, r1)     // Catch: java.lang.Exception -> L1e
            java.lang.String r1 = "a1_p_s_p_s"
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)     // Catch: java.lang.Exception -> L1e
            r0.a(r1, r2)     // Catch: java.lang.Exception -> L1e
            com.kuaishou.weapon.p0.n.a()     // Catch: java.lang.Exception -> L1e
            android.content.Context r0 = com.kuaishou.weapon.p0.WeaponHI.mContext     // Catch: java.lang.Exception -> L1e
            com.kuaishou.weapon.p0.bs.a(r0)     // Catch: java.lang.Exception -> L1e
            android.content.Context r0 = com.kuaishou.weapon.p0.WeaponHI.mContext     // Catch: java.lang.Exception -> L1e
            com.kuaishou.weapon.p0.br.a(r0)     // Catch: java.lang.Exception -> L1e
        L1e:
            com.kuaishou.weapon.p0.n r0 = com.kuaishou.weapon.p0.n.a()
            com.kuaishou.weapon.p0.WeaponHI$3 r1 = new com.kuaishou.weapon.p0.WeaponHI$3
            r1.<init>()
            r0.a(r1)
            return
    }

    public static void setPS(boolean r2) {
            com.kuaishou.weapon.p0.n r0 = com.kuaishou.weapon.p0.n.a()     // Catch: java.lang.Exception -> Lc
            com.kuaishou.weapon.p0.WeaponHI$1 r1 = new com.kuaishou.weapon.p0.WeaponHI$1     // Catch: java.lang.Exception -> Lc
            r1.<init>(r2)     // Catch: java.lang.Exception -> Lc
            r0.a(r1)     // Catch: java.lang.Exception -> Lc
        Lc:
            return
    }
}

package com.yxcorp.kuaishou.addfp;

public class KWEGIDDFP {
    private static final int EGID_LENGTH = 64;
    public static final int ERROR_TYPE_ACCESS_EXPTION = -1;
    public static final int ERROR_TYPE_NULL = -3;
    public static final int ERROR_TYPE_PROCESS = -4;
    public static final int ERROR_TYPE_UNKNOW = -2;
    private static int PROCESSALLOW = -1;
    private com.yxcorp.kuaishou.addfp.ResponseDfpCallback mCallBack;
    private java.lang.String mEgid;
    private java.lang.String mLocal;
    private android.content.Context mParamContext;
    private java.lang.String mPkgName;
    private boolean mUserAgree;

    private KWEGIDDFP() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.mPkgName = r0
            r1.mEgid = r0
            r1.mLocal = r0
            r0 = 0
            r1.mUserAgree = r0
            return
    }

    KWEGIDDFP(com.yxcorp.kuaishou.addfp.a r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static android.content.Context access$100(com.yxcorp.kuaishou.addfp.KWEGIDDFP r0) {
            android.content.Context r0 = r0.mParamContext
            return r0
    }

    static com.yxcorp.kuaishou.addfp.ResponseDfpCallback access$200(com.yxcorp.kuaishou.addfp.KWEGIDDFP r0) {
            com.yxcorp.kuaishou.addfp.ResponseDfpCallback r0 = r0.mCallBack
            return r0
    }

    static java.lang.String access$300(com.yxcorp.kuaishou.addfp.KWEGIDDFP r0) {
            java.lang.String r0 = r0.mPkgName
            return r0
    }

    static java.lang.String access$302(com.yxcorp.kuaishou.addfp.KWEGIDDFP r0, java.lang.String r1) {
            r0.mPkgName = r1
            return r1
    }

    static void access$400(com.yxcorp.kuaishou.addfp.KWEGIDDFP r0, com.yxcorp.kuaishou.addfp.ResponseDfpCallback r1) {
            r0.getEGid(r1)
            return
    }

    public static java.lang.String doSign(android.content.Context r2, java.lang.String r3) {
            com.yxcorp.kuaishou.addfp.android.Orange r0 = com.yxcorp.kuaishou.addfp.android.Orange.getInstance()
            byte[] r3 = r3.getBytes()
            r1 = 20
            java.lang.String r2 = r0.getClockWrapper(r2, r3, r1)
            return r2
    }

    private void getEGid(com.yxcorp.kuaishou.addfp.ResponseDfpCallback r4) {
            r3 = this;
            com.yxcorp.kuaishou.addfp.android.a.e r0 = new com.yxcorp.kuaishou.addfp.android.a.e     // Catch: java.lang.Throwable -> L56
            android.content.Context r1 = r3.mParamContext     // Catch: java.lang.Throwable -> L56
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L56
            boolean r0 = r0.a()     // Catch: java.lang.Throwable -> L56
            r3.getEGidImpl(r0)     // Catch: java.lang.Throwable -> L56
            com.yxcorp.kuaishou.addfp.android.a.c r0 = com.yxcorp.kuaishou.addfp.android.a.c.c()     // Catch: java.lang.Throwable -> L56
            android.content.Context r1 = r3.mParamContext     // Catch: java.lang.Throwable -> L56
            java.lang.String r2 = r3.mEgid     // Catch: java.lang.Throwable -> L56
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L56
            java.lang.String r0 = r0.a(r1, r4, r2)     // Catch: java.lang.Throwable -> L56
            r3.mLocal = r0     // Catch: java.lang.Throwable -> L56
            if (r4 != 0) goto L23
            return
        L23:
            java.lang.String r0 = r3.mEgid     // Catch: java.lang.Throwable -> L56
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L56
            if (r0 == 0) goto L4e
            java.lang.String r0 = r3.mLocal     // Catch: java.lang.Throwable -> L56
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L56
            if (r0 != 0) goto L3d
            java.lang.String r0 = r3.mLocal     // Catch: java.lang.Throwable -> L56
            java.lang.String r1 = "KWE"
            boolean r0 = r0.startsWith(r1)     // Catch: java.lang.Throwable -> L56
            if (r0 == 0) goto L4e
        L3d:
            java.lang.String r0 = r3.mLocal     // Catch: java.lang.Throwable -> L56
            java.lang.String r1 = "KWE_PE"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L56
            if (r0 != 0) goto L66
            r0 = -2
            java.lang.String r1 = "need check"
            r4.onFailed(r0, r1)     // Catch: java.lang.Throwable -> L56
            return
        L4e:
            java.lang.String r0 = r3.mEgid     // Catch: java.lang.Throwable -> L56
            java.lang.String r1 = r3.mLocal     // Catch: java.lang.Throwable -> L56
            r4.onSuccess(r0, r1)     // Catch: java.lang.Throwable -> L56
            return
        L56:
            r0 = move-exception
            if (r4 == 0) goto L66
            java.lang.String r0 = com.yxcorp.kuaishou.addfp.android.b.g.a(r0)     // Catch: java.lang.Throwable -> L62
            r1 = -1
            r4.onFailed(r1, r0)     // Catch: java.lang.Throwable -> L62
            return
        L62:
            r4 = move-exception
            r4.printStackTrace()
        L66:
            return
    }

    private void getEGidImpl(boolean r4) {
            r3 = this;
            android.content.Context r4 = r3.mParamContext     // Catch: java.lang.Throwable -> Laa
            com.yxcorp.kuaishou.addfp.android.a.d r4 = com.yxcorp.kuaishou.addfp.android.a.d.a(r4)     // Catch: java.lang.Throwable -> Laa
            android.util.Pair r4 = r4.a()     // Catch: java.lang.Throwable -> Laa
            if (r4 == 0) goto L22
            java.lang.Object r4 = r4.second     // Catch: java.lang.Throwable -> Laa
            if (r4 == 0) goto L22
            java.util.concurrent.ConcurrentHashMap r4 = (java.util.concurrent.ConcurrentHashMap) r4     // Catch: java.lang.Throwable -> Laa
            java.lang.String r0 = "cache_e"
            java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Throwable -> Laa
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> Laa
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> Laa
            if (r0 != 0) goto L22
            r3.mEgid = r4     // Catch: java.lang.Throwable -> Laa
        L22:
            java.lang.String r4 = r3.mEgid     // Catch: java.lang.Throwable -> Laa
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> Laa
            if (r4 == 0) goto Lae
            r4 = 0
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> La5
            r1 = 29
            if (r0 >= r1) goto L39
            android.content.Context r4 = r3.mParamContext     // Catch: java.lang.Throwable -> La5
            java.lang.String r0 = "k_w_o_d_out_dtt"
            java.lang.String r4 = com.yxcorp.kuaishou.addfp.c.a.a.a(r4, r0)     // Catch: java.lang.Throwable -> La5
        L39:
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> La5
            if (r0 == 0) goto L5c
            android.content.Context r0 = r3.mParamContext     // Catch: java.lang.Throwable -> La5
            java.lang.String r1 = "android.permission.READ_EXTERNAL_STORAGE"
            java.lang.String r2 = "android.permission.WRITE_EXTERNAL_STORAGE"
            java.lang.String[] r1 = new java.lang.String[]{r1, r2}     // Catch: java.lang.Throwable -> La5
            boolean r0 = com.yxcorp.kuaishou.addfp.android.b.g.a(r0, r1)     // Catch: java.lang.Throwable -> La5
            if (r0 == 0) goto L5c
            android.content.Context r0 = r3.mParamContext     // Catch: java.lang.Throwable -> La5
            com.yxcorp.kuaishou.addfp.android.a.d r0 = com.yxcorp.kuaishou.addfp.android.a.d.a(r0)     // Catch: java.lang.Throwable -> La5
            java.lang.String r1 = "Lm91a2R0ZnQ="
            java.lang.String r0 = r0.a(r1)     // Catch: java.lang.Throwable -> La5
            goto L5e
        L5c:
            java.lang.String r0 = ""
        L5e:
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> La5
            if (r1 == 0) goto L6a
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> La5
            if (r1 != 0) goto Lae
        L6a:
            android.content.Context r1 = r3.mParamContext     // Catch: java.lang.Throwable -> La5
            com.yxcorp.kuaishou.addfp.android.a.d r1 = com.yxcorp.kuaishou.addfp.android.a.d.a(r1)     // Catch: java.lang.Throwable -> La5
            java.util.LinkedHashMap r4 = r1.b(r4)     // Catch: java.lang.Throwable -> La5
            if (r4 == 0) goto L7c
            int r1 = r4.size()     // Catch: java.lang.Throwable -> La5
            if (r1 != 0) goto L86
        L7c:
            android.content.Context r4 = r3.mParamContext     // Catch: java.lang.Throwable -> La5
            com.yxcorp.kuaishou.addfp.android.a.d r4 = com.yxcorp.kuaishou.addfp.android.a.d.a(r4)     // Catch: java.lang.Throwable -> La5
            java.util.LinkedHashMap r4 = r4.b(r0)     // Catch: java.lang.Throwable -> La5
        L86:
            if (r4 == 0) goto Lae
            int r0 = r4.size()     // Catch: java.lang.Throwable -> La5
            if (r0 <= 0) goto Lae
            com.yxcorp.kuaishou.addfp.android.a.c r0 = com.yxcorp.kuaishou.addfp.android.a.c.c()     // Catch: java.lang.Throwable -> La5
            java.lang.String r0 = r0.a()     // Catch: java.lang.Throwable -> La5
            java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Throwable -> La5
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> La5
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> La5
            if (r0 != 0) goto Lae
            r3.mEgid = r4     // Catch: java.lang.Throwable -> La5
            return
        La5:
            r4 = move-exception
            r4.printStackTrace()     // Catch: java.lang.Throwable -> Laa
            return
        Laa:
            r4 = move-exception
            r4.printStackTrace()
        Lae:
            return
    }

    public static void handlePolicy(org.json.JSONObject r0) {
            com.yxcorp.kuaishou.addfp.android.a.c.a(r0)
            return
    }

    public static com.yxcorp.kuaishou.addfp.KWEGIDDFP instance() {
            com.yxcorp.kuaishou.addfp.KWEGIDDFP r0 = com.yxcorp.kuaishou.addfp.b.a()
            return r0
    }

    public void getEGidByCallback(android.content.Context r1, boolean r2, com.yxcorp.kuaishou.addfp.ResponseDfpCallback r3) {
            r0 = this;
            r0.mCallBack = r3     // Catch: java.lang.Throwable -> L19
            r0.mParamContext = r1     // Catch: java.lang.Throwable -> L19
            r0.mUserAgree = r2     // Catch: java.lang.Throwable -> L19
            com.yxcorp.kuaishou.addfp.a r1 = new com.yxcorp.kuaishou.addfp.a     // Catch: java.lang.Throwable -> L19
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L19
            java.lang.Thread r2 = new java.lang.Thread     // Catch: java.lang.Throwable -> L19
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L19
            java.lang.String r1 = "adsence-dfp"
            r2.setName(r1)     // Catch: java.lang.Throwable -> L19
            r2.start()     // Catch: java.lang.Throwable -> L19
            return
        L19:
            r1 = move-exception
            java.lang.String r1 = com.yxcorp.kuaishou.addfp.android.b.g.a(r1)
            if (r3 == 0) goto L24
            r2 = -1
            r3.onFailed(r2, r1)
        L24:
            return
    }

    public java.lang.String getEGidLocal(android.content.Context r1, java.lang.String r2, boolean r3) {
            r0 = this;
            java.lang.String r1 = r0.mEgid
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto Lb
            java.lang.String r1 = r0.mEgid
            return r1
        Lb:
            r1 = 0
            return r1
    }

    public android.content.Context getParamContext() {
            r1 = this;
            android.content.Context r0 = r1.mParamContext
            return r0
    }

    public boolean setEgid(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L21
            java.lang.String r0 = "DFP"
            boolean r0 = r4.startsWith(r0)
            if (r0 == 0) goto L21
            int r0 = r4.length()
            r1 = 64
            if (r0 != r1) goto L21
            com.yxcorp.kuaishou.addfp.android.a.d r3 = com.yxcorp.kuaishou.addfp.android.a.d.a(r3)
            java.lang.String r0 = ""
            r3.a(r4, r0)
            r3 = 1
            return r3
        L21:
            r3 = 0
            return r3
    }

    public void setLog(boolean r1) {
            r0 = this;
            com.yxcorp.kuaishou.addfp.android.b.g.a(r1)
            return
    }
}

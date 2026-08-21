package com.czhj.sdk.common.mta;

public abstract class PointEntitySuper {
    private static final java.lang.String a = null;
    private static long b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private java.lang.String f;
    private java.lang.String g;
    private java.lang.String h;
    private java.lang.String i;
    private java.util.Map<java.lang.String, java.lang.String> j;
    private java.lang.String k;
    private java.lang.String l;
    private java.lang.String m;
    protected java.lang.Object mPointEntityClass;
    private java.lang.String n;
    private int o;
    private java.lang.String p;
    private int q;




    static {
            java.util.UUID r0 = java.util.UUID.randomUUID()
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.common.mta.PointEntitySuper.a = r0
            r0 = 1
            com.czhj.sdk.common.mta.PointEntitySuper.b = r0
            return
    }

    public PointEntitySuper() {
            r0 = this;
            r0.<init>()
            return
    }

    private static synchronized long a() {
            java.lang.Class<com.czhj.sdk.common.mta.PointEntitySuper> r0 = com.czhj.sdk.common.mta.PointEntitySuper.class
            monitor-enter(r0)
            long r1 = com.czhj.sdk.common.mta.PointEntitySuper.b     // Catch: java.lang.Throwable -> Lc
            r3 = 1
            long r3 = r3 + r1
            com.czhj.sdk.common.mta.PointEntitySuper.b = r3     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r0)
            return r1
        Lc:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private boolean a(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = "motion_before"
            java.lang.String r1 = "motion_after"
            java.lang.String r2 = "custom_info"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2}
            java.util.List r0 = java.util.Arrays.asList(r0)
            boolean r4 = r0.contains(r4)
            return r4
    }

    public static java.lang.String captureName(java.lang.String r4) {
            char[] r0 = r4.toCharArray()
            r1 = 0
            char r2 = r0[r1]
            r3 = 96
            if (r2 <= r3) goto L1c
            char r2 = r0[r1]
            r3 = 123(0x7b, float:1.72E-43)
            if (r2 >= r3) goto L1c
            char r4 = r0[r1]
            int r4 = r4 + (-32)
            char r4 = (char) r4
            r0[r1] = r4
            java.lang.String r4 = java.lang.String.valueOf(r0)
        L1c:
            return r4
    }

    public static java.lang.String lowFirstChar(java.lang.String r4) {
            char[] r0 = r4.toCharArray()
            r1 = 0
            char r2 = r0[r1]
            r3 = 64
            if (r2 <= r3) goto L1c
            char r2 = r0[r1]
            r3 = 91
            if (r2 >= r3) goto L1c
            char r4 = r0[r1]
            int r4 = r4 + 32
            char r4 = (char) r4
            r0[r1] = r4
            java.lang.String r4 = java.lang.String.valueOf(r0)
        L1c:
            return r4
    }

    public static java.lang.String toURLEncoded(java.lang.String r3) {
            java.lang.String r0 = "UTF-8"
            java.lang.String r1 = ""
            if (r3 != 0) goto L7
            return r1
        L7:
            java.lang.String r2 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> L15
            byte[] r3 = r3.getBytes()     // Catch: java.io.UnsupportedEncodingException -> L15
            r2.<init>(r3, r0)     // Catch: java.io.UnsupportedEncodingException -> L15
            java.lang.String r3 = java.net.URLEncoder.encode(r2, r0)     // Catch: java.io.UnsupportedEncodingException -> L15
            return r3
        L15:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r3)
            return r1
    }

    public abstract java.lang.String appId();

    public void commit() {
            r2 = this;
            r2.mPointEntityClass = r2
            com.czhj.sdk.common.ThreadPool.ThreadPoolFactory$BackgroundThreadPool r0 = com.czhj.sdk.common.ThreadPool.ThreadPoolFactory.BackgroundThreadPool.getInstance()
            com.czhj.sdk.common.mta.PointEntitySuper$1 r1 = new com.czhj.sdk.common.mta.PointEntitySuper$1
            r1.<init>(r2)
            r0.submit(r1)
            return
    }

    public java.lang.String getAc_type() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public java.lang.String getAndroid_id() {
            r1 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.String r0 = r0.getAndroidId()
            return r0
    }

    public java.lang.String getAppinfo_switch() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }

    public java.lang.String getCarrier() {
            r1 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.String r0 = r0.getNetworkOperatorForUrl()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
    }

    public java.lang.String getCategory() {
            r1 = this;
            java.lang.String r0 = r1.g
            return r0
    }

    public java.lang.String getClientversion() {
            r1 = this;
            java.lang.String r0 = com.czhj.sdk.common.ClientMetadata.getDeviceOsVersion()
            return r0
    }

    public int getCompatible() {
            r1 = this;
            int r0 = r1.q
            return r0
    }

    public java.lang.String getExt() {
            r1 = this;
            java.lang.String r0 = r1.i
            return r0
    }

    public java.lang.String getGameversion() {
            r1 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.String r0 = r0.getAppVersion()
            return r0
    }

    public java.lang.String getGoogle_aid() {
            r1 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.String r0 = r0.getAdvertisingId()
            return r0
    }

    public java.lang.String getImei() {
            r1 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.String r0 = r0.getDeviceId()
            return r0
    }

    public java.lang.String getImei1() {
            r2 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            r1 = 0
            java.lang.String r0 = r0.getDeviceId(r1)
            return r0
    }

    public java.lang.String getImei2() {
            r2 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            r1 = 1
            java.lang.String r0 = r0.getDeviceId(r1)
            return r0
    }

    public int getIntegration() {
            r1 = this;
            int r0 = r1.o
            return r0
    }

    public java.lang.String getIs_mediation() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    public java.lang.String getLocation_switch() {
            r1 = this;
            java.lang.String r0 = r1.f
            return r0
    }

    public java.lang.String getMd5() {
            r1 = this;
            java.lang.String r0 = r1.m
            return r0
    }

    public java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.n
            return r0
    }

    public java.lang.String getNetworktype() {
            r1 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            int r0 = r0.getActiveNetworkType()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
    }

    public java.lang.String getOaid() {
            r1 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.String r0 = r0.getOAID_SDK()
            return r0
    }

    public java.lang.String getOaid_api() {
            r1 = this;
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.String r0 = r0.getOAID_API()
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getOptions() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.j
            if (r0 != 0) goto Lb
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.j = r0
        Lb:
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.j
            return r0
    }

    public java.lang.String getOs() {
            r1 = this;
            java.lang.String r0 = "2"
            return r0
    }

    public abstract java.lang.String getSdkversion();

    public java.lang.String getSeq_id() {
            r2 = this;
            long r0 = a()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
    }

    public java.lang.String getSha1() {
            r1 = this;
            java.lang.String r0 = r1.l
            return r0
    }

    public java.lang.String getSub_category() {
            r1 = this;
            java.lang.String r0 = r1.h
            return r0
    }

    public java.lang.String getTimestamp() {
            r2 = this;
            java.lang.String r0 = r2.k
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L11
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
        L11:
            java.lang.String r0 = r2.k
            return r0
    }

    public java.lang.String getUid() {
            r1 = this;
            com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.String r0 = com.czhj.sdk.common.ClientMetadata.getUid()
            return r0
    }

    public java.lang.String getUser_id() {
            r1 = this;
            java.lang.String r0 = com.czhj.sdk.common.ClientMetadata.getUserId()
            return r0
    }

    public java.lang.String getVersion() {
            r1 = this;
            java.lang.String r0 = r1.p
            return r0
    }

    public java.lang.String getWmsession_id() {
            r1 = this;
            java.lang.String r0 = com.czhj.sdk.common.mta.PointEntitySuper.a
            return r0
    }

    public void insertToDB(com.czhj.sdk.common.Database.SQLiteMTAHelper.ExecCallBack r7) {
            r6 = this;
            boolean r0 = r6.isAcTypeBlock()     // Catch: java.lang.Throwable -> La1
            if (r0 != 0) goto La0
            java.lang.String r0 = r6.appId()     // Catch: java.lang.Throwable -> La1
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> La1
            if (r0 == 0) goto L12
            goto La0
        L12:
            java.util.Map r0 = r6.toMap()     // Catch: java.lang.Throwable -> La1
            java.util.Map r1 = r6.getOptions()     // Catch: java.lang.Throwable -> La1
            if (r1 == 0) goto L28
            java.lang.String r1 = "options"
            r0.remove(r1)     // Catch: java.lang.Throwable -> La1
            java.util.Map r1 = r6.getOptions()     // Catch: java.lang.Throwable -> La1
            r0.putAll(r1)     // Catch: java.lang.Throwable -> La1
        L28:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La1
            r1.<init>()     // Catch: java.lang.Throwable -> La1
            java.lang.String r2 = "sigandroid_"
            r1.append(r2)     // Catch: java.lang.Throwable -> La1
            java.lang.String r2 = r6.appId()     // Catch: java.lang.Throwable -> La1
            r1.append(r2)     // Catch: java.lang.Throwable -> La1
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> La1
            java.lang.String r2 = "_uniq_key"
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> La1
            java.lang.String r0 = r6.toJsonString(r0)     // Catch: java.lang.Throwable -> La1
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> La1
            if (r1 == 0) goto L4d
            return
        L4d:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La1
            r1.<init>()     // Catch: java.lang.Throwable -> La1
            java.lang.String r2 = "dcdebug:"
            r1.append(r2)     // Catch: java.lang.Throwable -> La1
            r1.append(r0)     // Catch: java.lang.Throwable -> La1
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> La1
            com.czhj.sdk.logger.SigmobLog.d(r1)     // Catch: java.lang.Throwable -> La1
            com.czhj.sdk.common.Database.SQLiteMTAHelper r1 = com.czhj.sdk.common.Database.SQLiteMTAHelper.getInstance()     // Catch: java.lang.Throwable -> La1
            if (r1 != 0) goto L68
            return
        L68:
            android.database.sqlite.SQLiteDatabase r1 = r1.getWritableDatabase()     // Catch: java.lang.Throwable -> La1
            com.czhj.sdk.common.Database.SQLiteBuider$Insert$Builder r2 = new com.czhj.sdk.common.Database.SQLiteBuider$Insert$Builder     // Catch: java.lang.Throwable -> La1
            r2.<init>()     // Catch: java.lang.Throwable -> La1
            java.lang.String r3 = "point"
            r2.setTableName(r3)     // Catch: java.lang.Throwable -> La1
            java.util.HashMap r3 = new java.util.HashMap     // Catch: java.lang.Throwable -> La1
            r3.<init>()     // Catch: java.lang.Throwable -> La1
            java.lang.String r4 = "item"
            java.lang.String r5 = "sigandroid_mtadb"
            java.lang.String r0 = com.czhj.sdk.common.utils.AESUtil.EncryptString(r0, r5)     // Catch: java.lang.Throwable -> La1
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> La1
            java.lang.String r0 = "encryption"
            r4 = 1
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> La1
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> La1
            r2.setColumnValues(r3)     // Catch: java.lang.Throwable -> La1
            com.czhj.sdk.common.Database.SQLiteBuider$Insert r0 = r2.build()     // Catch: java.lang.Throwable -> La1
            com.czhj.sdk.common.mta.PointEntitySuper$2 r2 = new com.czhj.sdk.common.mta.PointEntitySuper$2     // Catch: java.lang.Throwable -> La1
            r2.<init>(r6, r7)     // Catch: java.lang.Throwable -> La1
            com.czhj.sdk.common.Database.SQLiteMTAHelper.insert(r1, r0, r2)     // Catch: java.lang.Throwable -> La1
            goto La9
        La0:
            return
        La1:
            r7 = move-exception
            java.lang.String r7 = r7.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r7)
        La9:
            return
    }

    public abstract boolean isAcTypeBlock();

    public void sendServe() {
            r4 = this;
            r4.mPointEntityClass = r4
            java.util.Map r0 = r4.toMap()
            java.lang.String r0 = r4.toJsonString(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L6d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L65
            r1.<init>()     // Catch: java.lang.Exception -> L65
            java.lang.String r2 = "["
            r1.append(r2)     // Catch: java.lang.Exception -> L65
            r1.append(r0)     // Catch: java.lang.Exception -> L65
            java.lang.String r0 = "]"
            r1.append(r0)     // Catch: java.lang.Exception -> L65
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> L65
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L65
            r1.<init>()     // Catch: java.lang.Exception -> L65
            java.lang.String r2 = "sigandroid_"
            r1.append(r2)     // Catch: java.lang.Exception -> L65
            java.lang.String r2 = r4.appId()     // Catch: java.lang.Exception -> L65
            r1.append(r2)     // Catch: java.lang.Exception -> L65
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L65
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L65
            r2.<init>()     // Catch: java.lang.Exception -> L65
            java.lang.String r3 = "_uniq_key="
            r2.append(r3)     // Catch: java.lang.Exception -> L65
            r2.append(r1)     // Catch: java.lang.Exception -> L65
            java.lang.String r1 = "&_batch_value="
            r2.append(r1)     // Catch: java.lang.Exception -> L65
            r2.append(r0)     // Catch: java.lang.Exception -> L65
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> L65
            java.lang.String r0 = com.czhj.sdk.common.mta.BuriedPointManager.deflateAndBase64(r0)     // Catch: java.lang.Exception -> L65
            java.lang.String r0 = toURLEncoded(r0)     // Catch: java.lang.Exception -> L65
            com.czhj.sdk.common.mta.PointEntitySuper$3 r1 = new com.czhj.sdk.common.mta.PointEntitySuper$3     // Catch: java.lang.Exception -> L65
            r1.<init>(r4)     // Catch: java.lang.Exception -> L65
            com.czhj.sdk.common.network.BuriedPointRequest.BuriedPointSend(r0, r1)     // Catch: java.lang.Exception -> L65
            goto L6d
        L65:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        L6d:
            return
    }

    public void setAc_type(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void setAppinfo_switch(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public void setCategory(java.lang.String r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void setCompatible(int r1) {
            r0 = this;
            r0.q = r1
            return
    }

    public void setExt(java.lang.String r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public void setIntegration(int r1) {
            r0 = this;
            r0.o = r1
            return
    }

    public void setIs_mediation(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void setLocation_switch(java.lang.String r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public void setMd5(java.lang.String r1) {
            r0 = this;
            r0.m = r1
            return
    }

    public void setName(java.lang.String r1) {
            r0 = this;
            r0.n = r1
            return
    }

    public void setOptions(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public void setSha1(java.lang.String r1) {
            r0 = this;
            r0.l = r1
            return
    }

    public void setSub_category(java.lang.String r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public void setTimestamp(java.lang.String r1) {
            r0 = this;
            r0.k = r1
            return
    }

    public void setVersion(java.lang.String r1) {
            r0 = this;
            r0.p = r1
            return
    }

    public java.lang.String testJsonString() {
            r2 = this;
            java.util.Map r0 = r2.toMap()
            java.util.Map r1 = r2.getOptions()
            if (r1 == 0) goto L16
            java.lang.String r1 = "options"
            r0.remove(r1)
            java.util.Map r1 = r2.getOptions()
            r0.putAll(r1)
        L16:
            java.lang.String r0 = r2.toJsonString(r0)
            return r0
    }

    public java.lang.String toJsonString(java.util.Map<java.lang.String, java.lang.Object> r7) {
            r6 = this;
            int r0 = r7.size()
            if (r0 != 0) goto L8
            r7 = 0
            return r7
        L8:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "{"
            r0.append(r1)
            java.util.Set r7 = r7.entrySet()
            java.util.Iterator r7 = r7.iterator()
            r2 = 0
        L1b:
            boolean r3 = r7.hasNext()
            if (r3 == 0) goto L9d
            java.lang.Object r3 = r7.next()
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3
            java.lang.Object r4 = r3.getValue()
            if (r4 == 0) goto L1b
            if (r2 == 0) goto L34
            java.lang.String r2 = ","
            r0.append(r2)
        L34:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "\""
            r2.append(r4)
            java.lang.Object r5 = r3.getKey()
            r2.append(r5)
            java.lang.String r5 = "\":"
            r2.append(r5)
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            java.lang.Object r2 = r3.getValue()
            boolean r2 = r2 instanceof java.lang.String
            if (r2 == 0) goto L77
            java.lang.Object r2 = r3.getKey()
            java.lang.String r2 = (java.lang.String) r2
            boolean r2 = r6.a(r2)
            if (r2 != 0) goto L70
            java.lang.Object r2 = r3.getValue()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r2 = toURLEncoded(r2)
            goto L7f
        L70:
            java.lang.Object r2 = r3.getValue()
            java.lang.String r2 = (java.lang.String) r2
            goto L7f
        L77:
            java.lang.Object r2 = r3.getValue()
            java.lang.String r2 = r2.toString()
        L7f:
            boolean r3 = r2.startsWith(r1)
            if (r3 != 0) goto L97
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r4)
            r3.append(r2)
            r3.append(r4)
            java.lang.String r2 = r3.toString()
        L97:
            r0.append(r2)
            r2 = 1
            goto L1b
        L9d:
            java.lang.String r7 = "}"
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            return r7
    }

    public java.util.Map<java.lang.String, java.lang.Object> toMap() {
            r6 = this;
            java.lang.Object r0 = r6.mPointEntityClass
            java.lang.Class r0 = r0.getClass()
            java.util.List r0 = com.czhj.sdk.common.utils.ReflectionUtil.getMethodWithTraversal(r0)
            java.util.HashMap r1 = new java.util.HashMap
            int r2 = r0.size()
            r1.<init>(r2)
            java.util.Iterator r0 = r0.iterator()
        L17:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto Lbb
            java.lang.Object r2 = r0.next()
            java.lang.reflect.Method r2 = (java.lang.reflect.Method) r2
            java.lang.String r3 = r2.getName()
            java.lang.String r4 = "get"
            boolean r3 = r3.startsWith(r4)
            if (r3 == 0) goto L17
            java.lang.String r3 = r2.getName()
            java.lang.String r4 = "getLogs"
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L17
            java.lang.Object r3 = r6.mPointEntityClass     // Catch: java.lang.Throwable -> L99
            r4 = 0
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L99
            java.lang.Object r3 = r2.invoke(r3, r4)     // Catch: java.lang.Throwable -> L99
            java.lang.String r4 = r2.getName()     // Catch: java.lang.Throwable -> L99
            r5 = 3
            java.lang.String r4 = r4.substring(r5)     // Catch: java.lang.Throwable -> L99
            java.lang.String r4 = lowFirstChar(r4)     // Catch: java.lang.Throwable -> L99
            if (r3 == 0) goto L17
            boolean r5 = r3 instanceof java.lang.String     // Catch: java.lang.Throwable -> L99
            if (r5 == 0) goto L61
            r5 = r3
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L99
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L99
            if (r5 == 0) goto L61
            goto L17
        L61:
            java.lang.String r5 = "content_length"
            boolean r5 = r4.equalsIgnoreCase(r5)     // Catch: java.lang.Throwable -> L99
            if (r5 == 0) goto L6f
            java.lang.String r4 = "content-length"
        L6b:
            r1.put(r4, r3)     // Catch: java.lang.Throwable -> L99
            goto L17
        L6f:
            java.lang.String r5 = "content_type"
            boolean r5 = r4.equalsIgnoreCase(r5)     // Catch: java.lang.Throwable -> L99
            if (r5 == 0) goto L7a
            java.lang.String r4 = "content-type"
            goto L6b
        L7a:
            java.lang.String r5 = "ac_type"
            boolean r5 = r4.equalsIgnoreCase(r5)     // Catch: java.lang.Throwable -> L99
            if (r5 == 0) goto L85
            java.lang.String r4 = "_ac_type"
            goto L6b
        L85:
            java.lang.String r5 = "user_id"
            boolean r5 = r4.equalsIgnoreCase(r5)     // Catch: java.lang.Throwable -> L99
            if (r5 == 0) goto L90
            java.lang.String r4 = "_user_id"
            goto L6b
        L90:
            java.lang.String r5 = "class"
            boolean r5 = r4.equalsIgnoreCase(r5)     // Catch: java.lang.Throwable -> L99
            if (r5 != 0) goto L17
            goto L6b
        L99:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "name "
            r4.append(r5)
            java.lang.String r2 = r2.getName()
            r4.append(r2)
            java.lang.String r2 = r3.getMessage()
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            com.czhj.sdk.logger.SigmobLog.e(r2)
            goto L17
        Lbb:
            return r1
    }
}

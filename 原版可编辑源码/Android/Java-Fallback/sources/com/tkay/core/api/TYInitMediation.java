package com.tkay.core.api;

public abstract class TYInitMediation {
    public static final java.lang.String KEY_LOCAL = "tkay_local";

    public TYInitMediation() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean getBooleanFromMap(java.util.Map<java.lang.String, java.lang.Object> r1, java.lang.String r2) {
            r0 = 0
            boolean r1 = getBooleanFromMap(r1, r2, r0)
            return r1
    }

    public static boolean getBooleanFromMap(java.util.Map<java.lang.String, java.lang.Object> r0, java.lang.String r1, boolean r2) {
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            java.lang.Object r0 = getValueFromMap(r0, r1, r2)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            return r0
    }

    public static double getDoubleFromMap(java.util.Map<java.lang.String, java.lang.Object> r2, java.lang.String r3) {
            r0 = 0
            double r2 = getDoubleFromMap(r2, r3, r0)
            return r2
    }

    public static double getDoubleFromMap(java.util.Map<java.lang.String, java.lang.Object> r0, java.lang.String r1, double r2) {
            java.lang.Double r2 = java.lang.Double.valueOf(r2)
            java.lang.Object r0 = getValueFromMap(r0, r1, r2)
            java.lang.Double r0 = (java.lang.Double) r0
            double r0 = r0.doubleValue()
            return r0
    }

    public static int getIntFromMap(java.util.Map<java.lang.String, java.lang.Object> r1, java.lang.String r2) {
            r0 = 0
            int r1 = getIntFromMap(r1, r2, r0)
            return r1
    }

    public static int getIntFromMap(java.util.Map<java.lang.String, java.lang.Object> r0, java.lang.String r1, int r2) {
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.Object r0 = getValueFromMap(r0, r1, r2)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            return r0
    }

    public static long getLongFromMap(java.util.Map<java.lang.String, java.lang.Object> r2, java.lang.String r3) {
            r0 = 0
            long r2 = getLongFromMap(r2, r3, r0)
            return r2
    }

    public static long getLongFromMap(java.util.Map<java.lang.String, java.lang.Object> r0, java.lang.String r1, long r2) {
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            java.lang.Object r0 = getValueFromMap(r0, r1, r2)
            java.lang.Long r0 = (java.lang.Long) r0
            long r0 = r0.longValue()
            return r0
    }

    public static java.lang.String getStringFromMap(java.util.Map<java.lang.String, java.lang.Object> r1, java.lang.String r2) {
            java.lang.String r0 = ""
            java.lang.String r1 = getStringFromMap(r1, r2, r0)
            return r1
    }

    public static java.lang.String getStringFromMap(java.util.Map<java.lang.String, java.lang.Object> r0, java.lang.String r1, java.lang.String r2) {
            java.lang.Object r0 = getValueFromMap(r0, r1, r2)
            java.lang.String r0 = (java.lang.String) r0
            return r0
    }

    private static <T> T getValueFromMap(java.util.Map<java.lang.String, java.lang.Object> r3, java.lang.String r4, T r5) {
            java.lang.String r0 = "TYInitMediation"
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L8d
            if (r1 != 0) goto L8c
            if (r3 == 0) goto L8c
            int r1 = r3.size()     // Catch: java.lang.Exception -> L8d
            if (r1 > 0) goto L12
            goto L8c
        L12:
            java.lang.Object r3 = r3.get(r4)     // Catch: java.lang.Exception -> L8d
            if (r3 != 0) goto L19
            return r5
        L19:
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L8d
            boolean r1 = r5 instanceof java.lang.String     // Catch: java.lang.Exception -> L8d
            if (r1 == 0) goto L22
            goto L64
        L22:
            boolean r1 = r5 instanceof java.lang.Integer     // Catch: java.lang.Exception -> L8d
            if (r1 == 0) goto L2f
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Exception -> L8d
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Exception -> L8d
            goto L64
        L2f:
            boolean r1 = r5 instanceof java.lang.Long     // Catch: java.lang.Exception -> L8d
            if (r1 == 0) goto L3c
            long r1 = java.lang.Long.parseLong(r3)     // Catch: java.lang.Exception -> L8d
            java.lang.Long r3 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Exception -> L8d
            goto L64
        L3c:
            boolean r1 = r5 instanceof java.lang.Double     // Catch: java.lang.Exception -> L8d
            if (r1 == 0) goto L49
            double r1 = java.lang.Double.parseDouble(r3)     // Catch: java.lang.Exception -> L8d
            java.lang.Double r3 = java.lang.Double.valueOf(r1)     // Catch: java.lang.Exception -> L8d
            goto L64
        L49:
            boolean r1 = r5 instanceof java.lang.Float     // Catch: java.lang.Exception -> L8d
            if (r1 == 0) goto L56
            float r3 = java.lang.Float.parseFloat(r3)     // Catch: java.lang.Exception -> L8d
            java.lang.Float r3 = java.lang.Float.valueOf(r3)     // Catch: java.lang.Exception -> L8d
            goto L64
        L56:
            boolean r1 = r5 instanceof java.lang.Boolean     // Catch: java.lang.Exception -> L8d
            if (r1 == 0) goto L63
            boolean r3 = java.lang.Boolean.parseBoolean(r3)     // Catch: java.lang.Exception -> L8d
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)     // Catch: java.lang.Exception -> L8d
            goto L64
        L63:
            r3 = r5
        L64:
            boolean r1 = com.tkay.core.api.TYSDK.isNetworkLogDebug()     // Catch: java.lang.Exception -> L8d
            if (r1 == 0) goto L8b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L8d
            java.lang.String r2 = "key = "
            r1.<init>(r2)     // Catch: java.lang.Exception -> L8d
            r1.append(r4)     // Catch: java.lang.Exception -> L8d
            java.lang.String r4 = "getValueFromMap() >>> result = "
            r1.append(r4)     // Catch: java.lang.Exception -> L8d
            r1.append(r3)     // Catch: java.lang.Exception -> L8d
            java.lang.String r4 = " defaultValue = "
            r1.append(r4)     // Catch: java.lang.Exception -> L8d
            r1.append(r5)     // Catch: java.lang.Exception -> L8d
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Exception -> L8d
            android.util.Log.d(r0, r4)     // Catch: java.lang.Exception -> L8d
        L8b:
            return r3
        L8c:
            return r5
        L8d:
            r3 = move-exception
            boolean r4 = com.tkay.core.api.TYSDK.isNetworkLogDebug()
            if (r4 == 0) goto La9
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r1 = "getValueFromMap() >>> errorMsg = "
            r4.<init>(r1)
            java.lang.String r3 = r3.getMessage()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            android.util.Log.e(r0, r3)
        La9:
            return r5
    }

    protected final void checkToSaveInitData(java.lang.String r2, java.util.Map<java.lang.String, java.lang.Object> r3, java.lang.String... r4) {
            r1 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.a(r2, r3, r4)
            return
    }

    public java.util.List getActivityStatus() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.util.List getMetaValutStatus() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String getNetworkName() {
            r1 = this;
            java.lang.String r0 = ""
            return r0
    }

    public java.lang.String getNetworkSDKClass() {
            r1 = this;
            java.lang.String r0 = ""
            return r0
    }

    public java.lang.String getNetworkVersion() {
            r1 = this;
            java.lang.String r0 = ""
            return r0
    }

    public java.util.List getPermissionStatus() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.Boolean> getPluginClassStatus() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.util.List getProviderStatus() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.util.List getResourceStatus() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.util.List getServiceStatus() {
            r1 = this;
            r0 = 0
            return r0
    }

    public abstract void initSDK(android.content.Context r1, java.util.Map<java.lang.String, java.lang.Object> r2, com.tkay.core.api.MediationInitCallback r3);

    protected final void runOnMainThread(java.lang.Runnable r2) {
            r1 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            r0.a(r2)
            return
    }

    protected final void runOnThreadPool(java.lang.Runnable r1) {
            r0 = this;
            com.tkay.core.common.b.m.a()
            com.tkay.core.common.b.m.b(r1)
            return
    }

    public boolean setUserDataConsent(android.content.Context r1, boolean r2, boolean r3) {
            r0 = this;
            r1 = 0
            return r1
    }
}

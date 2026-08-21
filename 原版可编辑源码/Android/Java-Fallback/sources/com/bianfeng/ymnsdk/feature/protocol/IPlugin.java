package com.bianfeng.ymnsdk.feature.protocol;

public interface IPlugin extends java.io.Serializable {
    public static final int STATE_CHECKING = -1;
    public static final int STATE_CLOSED = 0;
    public static final int STATE_EMPTY = -10;
    public static final int STATE_INSTALLED = -3;
    public static final int STATE_INSTALLING = -4;
    public static final int STATE_PENDING_CHECK = -2;
    public static final int STATE_PENDING_INSTALL = -5;
    public static final int STATE_WORKING = 1;

    public static class STATE_NAME {
        static java.util.Map<java.lang.Integer, java.lang.String> names;

        static {
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                com.bianfeng.ymnsdk.feature.protocol.IPlugin.STATE_NAME.names = r0
                java.lang.Class<com.bianfeng.ymnsdk.feature.protocol.IPlugin> r0 = com.bianfeng.ymnsdk.feature.protocol.IPlugin.class
                java.lang.reflect.Field[] r0 = r0.getDeclaredFields()
                int r1 = r0.length
                r2 = 0
            Lf:
                if (r2 >= r1) goto L39
                r3 = r0[r2]
                r4 = 1
                r3.setAccessible(r4)
                java.lang.String r4 = r3.getName()
                java.lang.String r5 = "STATE_"
                boolean r5 = r4.startsWith(r5)
                if (r5 == 0) goto L36
                java.util.Map<java.lang.Integer, java.lang.String> r5 = com.bianfeng.ymnsdk.feature.protocol.IPlugin.STATE_NAME.names     // Catch: java.lang.IllegalAccessException -> L32
                r6 = 0
                int r6 = r3.getInt(r6)     // Catch: java.lang.IllegalAccessException -> L32
                java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.IllegalAccessException -> L32
                r5.put(r6, r4)     // Catch: java.lang.IllegalAccessException -> L32
                goto L36
            L32:
                r5 = move-exception
                r5.printStackTrace()
            L36:
                int r2 = r2 + 1
                goto Lf
            L39:
                return
        }

        public STATE_NAME() {
                r0 = this;
                r0.<init>()
                return
        }

        public static java.lang.String get(java.lang.Integer r2) {
                java.util.Map<java.lang.Integer, java.lang.String> r0 = com.bianfeng.ymnsdk.feature.protocol.IPlugin.STATE_NAME.names
                java.lang.Object r0 = r0.get(r2)
                java.lang.String r0 = (java.lang.String) r0
                boolean r1 = android.text.TextUtils.isEmpty(r0)
                if (r1 == 0) goto L11
                java.lang.String r1 = "UNSET"
                return r1
            L11:
                return r0
        }
    }

    void callFunction(java.lang.String r1, java.util.LinkedHashMap<java.lang.String, java.lang.String> r2);

    void callFunction(java.lang.String r1, java.lang.String... r2);

    java.lang.String callFunctionWithResult(java.lang.String r1, java.util.LinkedHashMap<java.lang.String, java.lang.String> r2);

    java.lang.String callFunctionWithResult(java.lang.String r1, java.lang.String... r2);

    java.lang.String getPluginId();

    java.lang.String getPluginName();

    int getPluginVersion();

    java.lang.String getSdkVersion();

    boolean isDebugMode();

    boolean isSupportFunction(java.lang.String r1);

    void onActivityResult(int r1, int r2, android.content.Intent r3);

    void onDestroy();

    void onInit(android.content.Context r1);

    void onLogin(java.util.Map<java.lang.String, java.lang.String> r1);

    void onNewIntent(android.content.Intent r1);

    void onPause();

    void onPay(java.util.Map<java.lang.String, java.lang.String> r1);

    void onRestart();

    void onResume();

    void onStart();

    void onStop();

    void onWindowFocusChanged(boolean r1, android.app.Activity r2);

    void setDebugMode(boolean r1);
}

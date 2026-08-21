package com.bianfeng.ymnsdk.feature;

public abstract class YmnPluginWrapper extends com.bianfeng.ymnsdk.feature.YmnPlugin {
    private android.app.Activity activity;
    private com.bianfeng.ymnsdk.feature.YmnCallback callback;
    private java.util.Map<java.lang.String, java.lang.String> cfgs;
    private android.content.Context context;
    private volatile boolean inited;
    private volatile boolean initing;
    private volatile boolean injected;
    private java.util.List<com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor> interceptors;
    private java.util.Map<java.lang.String, java.lang.String> loginedData;
    private java.util.Map<java.lang.String, java.lang.String> params;
    private int state;
    private volatile boolean triggered;

    static class a {
        static final int[] a = null;

        static {
                com.bianfeng.ymnsdk.feature.protocol.YPlugin$Policy[] r0 = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.bianfeng.ymnsdk.feature.YmnPluginWrapper.a.a = r0
                int[] r0 = com.bianfeng.ymnsdk.feature.YmnPluginWrapper.a.a     // Catch: java.lang.NoSuchFieldError -> L14
                com.bianfeng.ymnsdk.feature.protocol.YPlugin$Policy r1 = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.LAZY     // Catch: java.lang.NoSuchFieldError -> L14
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L14
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L14
            L14:
                int[] r0 = com.bianfeng.ymnsdk.feature.YmnPluginWrapper.a.a     // Catch: java.lang.NoSuchFieldError -> L1f
                com.bianfeng.ymnsdk.feature.protocol.YPlugin$Policy r1 = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.REMOTE     // Catch: java.lang.NoSuchFieldError -> L1f
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1f
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1f
            L1f:
                int[] r0 = com.bianfeng.ymnsdk.feature.YmnPluginWrapper.a.a     // Catch: java.lang.NoSuchFieldError -> L2a
                com.bianfeng.ymnsdk.feature.protocol.YPlugin$Policy r1 = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.FORCE     // Catch: java.lang.NoSuchFieldError -> L2a
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L2a
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L2a
            L2a:
                int[] r0 = com.bianfeng.ymnsdk.feature.YmnPluginWrapper.a.a     // Catch: java.lang.NoSuchFieldError -> L35
                com.bianfeng.ymnsdk.feature.protocol.YPlugin$Policy r1 = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.TRIGGER     // Catch: java.lang.NoSuchFieldError -> L35
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L35
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L35
            L35:
                return
        }
    }

    public YmnPluginWrapper() {
            r1 = this;
            r1.<init>()
            r0 = -10
            r1.state = r0
            return
    }

    public void addCallbackInterceptor(com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor r2) {
            r1 = this;
            java.util.List<com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor> r0 = r1.interceptors
            if (r0 != 0) goto Lb
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.interceptors = r0
        Lb:
            java.util.List<com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor> r0 = r1.interceptors
            r0.add(r2)
            return
    }

    public boolean canDoInit() {
            r3 = this;
            boolean r0 = r3.initing
            r1 = 0
            if (r0 == 0) goto L23
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r3.getPluginName()
            r0.append(r2)
            java.lang.String r2 = " on initing , ignore invoke "
            r0.append(r2)
            android.content.Context r2 = r3.context
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.w(r0)
            return r1
        L23:
            boolean r0 = r3.inited
            if (r0 == 0) goto L45
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r3.getPluginName()
            r0.append(r2)
            java.lang.String r2 = " already inited , ignore invoke "
            r0.append(r2)
            android.content.Context r2 = r3.context
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.w(r0)
            return r1
        L45:
            r0 = 1
            return r0
    }

    public void checkState(com.bianfeng.ymnsdk.entity.PluginLocalState r3) {
            r2 = this;
            int[] r0 = com.bianfeng.ymnsdk.feature.YmnPluginWrapper.a.a
            com.bianfeng.ymnsdk.feature.protocol.YPlugin$Policy r1 = r2.getPolicy()
            int r1 = r1.ordinal()
            r0 = r0[r1]
            r1 = 1
            if (r0 == r1) goto L2b
            r3 = 2
            if (r0 == r3) goto L27
            r3 = 3
            if (r0 == r3) goto L24
            r3 = 4
            if (r0 == r3) goto L19
            goto L31
        L19:
            boolean r3 = r2.triggered
            if (r3 == 0) goto L20
            r2.state = r1
            goto L31
        L20:
            r3 = 0
            r2.state = r3
            goto L31
        L24:
            r2.state = r1
            goto L31
        L27:
            r3 = -2
            r2.state = r3
            goto L31
        L2b:
            int r3 = r3.getState(r2)
            r2.state = r3
        L31:
            return
    }

    public android.app.Activity getActivity() {
            r1 = this;
            android.app.Activity r0 = r1.activity
            if (r0 != 0) goto Lc
            android.content.Context r0 = r1.getContext()
            android.app.Activity r0 = (android.app.Activity) r0
            r1.activity = r0
        Lc:
            android.app.Activity r0 = r1.activity
            return r0
    }

    public final java.util.Map<java.lang.String, java.lang.String> getCfgs() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.cfgs
            return r0
    }

    public <T extends android.content.Context> T getContext() {
            r1 = this;
            android.content.Context r0 = r1.context
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getLoginedData() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.loginedData
            return r0
    }

    public java.lang.String getMetaData(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = com.bianfeng.ymnsdk.util.YmnAppContext.getMetaDataValueString(r1)
            return r1
    }

    public final java.util.Map<java.lang.String, java.lang.String> getParams() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.params
            return r0
    }

    public java.lang.String getPropertie(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = com.bianfeng.ymnsdk.feature.YmnProperties.getPluginValue(r0, r1)
            return r1
    }

    public java.lang.String getServerHost() {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            java.lang.String r0 = com.bianfeng.ymnsdk.feature.e.c(r0)
            return r0
    }

    public int getState() {
            r1 = this;
            int r0 = r1.state
            return r0
    }

    public java.lang.String inited() {
            r2 = this;
            boolean r0 = r2.isInited()
            if (r0 == 0) goto L23
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "初始化成功"
            r0.append(r1)
            java.lang.String r1 = r2.getPluginName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = 100
            r2.sendResult(r1, r0)
            java.lang.String r0 = "true"
            return r0
        L23:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "初始化失败"
            r0.append(r1)
            java.lang.String r1 = r2.getPluginName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = 101(0x65, float:1.42E-43)
            r2.sendResult(r1, r0)
            java.lang.String r0 = "flase"
            return r0
    }

    public boolean isCheckedState() {
            r2 = this;
            int r0 = r2.state
            r1 = -10
            if (r0 == r1) goto Lb
            r1 = -2
            if (r0 == r1) goto Lb
            r0 = 1
            goto Lc
        Lb:
            r0 = 0
        Lc:
            return r0
    }

    @Override
    public boolean isDebugMode() {
            r1 = this;
            r0 = 0
            return r0
    }

    public boolean isInited() {
            r1 = this;
            boolean r0 = r1.inited
            return r0
    }

    public boolean isIniting() {
            r1 = this;
            boolean r0 = r1.initing
            return r0
    }

    public boolean isInjected() {
            r1 = this;
            boolean r0 = r1.injected
            return r0
    }

    public boolean isScreenLandscape() {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            boolean r0 = r0 instanceof android.app.Activity
            if (r0 == 0) goto L13
            android.content.Context r0 = r1.getContext()
            android.app.Activity r0 = (android.app.Activity) r0
            boolean r0 = com.bianfeng.ymnsdk.util.SystemUtil.isScreenLandscape(r0)
            return r0
        L13:
            r0 = 1
            return r0
    }

    public boolean isWorking() {
            r2 = this;
            int r0 = r2.state
            r1 = 1
            if (r0 != r1) goto L6
            goto L7
        L6:
            r1 = 0
        L7:
            return r1
    }

    @Override
    public void onActivityResult(int r1, int r2, android.content.Intent r3) {
            r0 = this;
            return
    }

    public void onContextChanged(android.content.Context r1) {
            r0 = this;
            return
    }

    public void onCreate(android.app.Activity r1) {
            r0 = this;
            r0.activity = r1
            return
    }

    @Override
    public void onDestroy() {
            r0 = this;
            return
    }

    @Override
    public void onInit(android.content.Context r1) {
            r0 = this;
            r0.context = r1
            return
    }

    @Override
    public void onLogin(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.loginedData = r1
            return
    }

    @Override
    public void onNewIntent(android.content.Intent r1) {
            r0 = this;
            return
    }

    @Override
    public void onPause() {
            r0 = this;
            return
    }

    @Override
    public void onPay(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            return
    }

    public void onRequestPermissionsResult(int r1, java.lang.String[] r2, int[] r3) {
            r0 = this;
            return
    }

    @Override
    public void onRestart() {
            r0 = this;
            return
    }

    @Override
    public void onResume() {
            r0 = this;
            return
    }

    @Override
    public void onStart() {
            r0 = this;
            return
    }

    @Override
    public void onStop() {
            r0 = this;
            return
    }

    @Override
    public void onWindowFocusChanged(boolean r1, android.app.Activity r2) {
            r0 = this;
            return
    }

    public void registCallback(com.bianfeng.ymnsdk.feature.YmnCallback r1) {
            r0 = this;
            r0.callback = r1
            return
    }

    public void sendResult(int r2, java.lang.Object r3, java.lang.Object r4) {
            r1 = this;
            com.bianfeng.ymnsdk.feature.YmnCallback$a r0 = new com.bianfeng.ymnsdk.feature.YmnCallback$a
            r0.<init>(r3, r4)
            java.lang.String r3 = r0.toString()
            r1.sendResult(r2, r3)
            return
    }

    public void sendResult(int r8, java.lang.Object r9, java.lang.Object r10, java.lang.String r11) {
            r7 = this;
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()     // Catch: java.lang.Exception -> L2a
            java.lang.String r2 = r7.getPluginId()     // Catch: java.lang.Exception -> L2a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2a
            r1.<init>()     // Catch: java.lang.Exception -> L2a
            int r3 = r7.getPluginVersion()     // Catch: java.lang.Exception -> L2a
            r1.append(r3)     // Catch: java.lang.Exception -> L2a
            java.lang.String r3 = ""
            r1.append(r3)     // Catch: java.lang.Exception -> L2a
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Exception -> L2a
            java.lang.String r4 = r7.getSdkVersion()     // Catch: java.lang.Exception -> L2a
            java.lang.String r6 = r9.toString()     // Catch: java.lang.Exception -> L2a
            r1 = r11
            r5 = r8
            r0.pluginFinish(r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L2a
        L2a:
            r7.sendResult(r8, r9, r10)
            return
    }

    public void sendResult(int r5, java.lang.String r6) {
            r4 = this;
            java.util.List<com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor> r0 = r4.interceptors
            if (r0 == 0) goto L33
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L33
            java.util.List<com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor> r0 = r4.interceptors
            java.util.Iterator r0 = r0.iterator()
            java.lang.Object r1 = r0.next()
            com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor r1 = (com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor) r1
            r2 = r1
        L17:
            boolean r3 = r0.hasNext()
            if (r3 == 0) goto L28
            java.lang.Object r3 = r0.next()
            com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor r3 = (com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor) r3
            r2.setNext(r3)
            r2 = r3
            goto L17
        L28:
            com.bianfeng.ymnsdk.feature.YmnCallback r0 = r4.callback
            if (r0 == 0) goto L2f
            r2.setNext(r0)
        L2f:
            r1.onCallBack(r5, r6)
            goto L3a
        L33:
            com.bianfeng.ymnsdk.feature.YmnCallback r0 = r4.callback
            if (r0 == 0) goto L3a
            r0.onCallBack(r5, r6)
        L3a:
            return
    }

    public void sendResult(int r8, java.lang.String r9, java.lang.String r10) {
            r7 = this;
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            java.lang.String r2 = r7.getPluginId()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            int r3 = r7.getPluginVersion()
            r1.append(r3)
            java.lang.String r3 = ""
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            java.lang.String r4 = r7.getSdkVersion()
            r1 = r10
            r5 = r8
            r6 = r9
            r0.pluginFinish(r1, r2, r3, r4, r5, r6)
            r7.sendResult(r8, r9)
            return
    }

    public void sendResultWithoutInterceptors(int r2, java.lang.String r3) {
            r1 = this;
            com.bianfeng.ymnsdk.feature.YmnCallback r0 = r1.callback
            if (r0 == 0) goto L7
            r0.onCallBack(r2, r3)
        L7:
            return
    }

    public final void setCfgs(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.cfgs = r1
            return
    }

    @Override
    public void setDebugMode(boolean r1) {
            r0 = this;
            return
    }

    public void setInited(boolean r1) {
            r0 = this;
            r0.inited = r1
            return
    }

    public void setIniting(boolean r1) {
            r0 = this;
            r0.initing = r1
            return
    }

    public void setInjected(boolean r1) {
            r0 = this;
            r0.injected = r1
            return
    }

    public final void setParams(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.params = r1
            return
    }

    public void setTriggered(boolean r1) {
            r0 = this;
            r0.triggered = r1
            return
    }

    public java.lang.String toString() {
            r3 = this;
            r0 = 5
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = r3.getPluginName()
            r2 = 0
            r0[r2] = r1
            int r1 = r3.state
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r1 = com.bianfeng.ymnsdk.feature.protocol.IPlugin.STATE_NAME.get(r1)
            r2 = 1
            r0[r2] = r1
            boolean r1 = r3.inited
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            r2 = 2
            r0[r2] = r1
            boolean r1 = r3.initing
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            r2 = 3
            r0[r2] = r1
            java.lang.Class r1 = r3.getClass()
            java.lang.String r1 = r1.getName()
            r2 = 4
            r0[r2] = r1
            java.lang.String r1 = "%s {%s, inited = %b, initing = %b, class = %s}"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            return r0
    }

    public void tryRunOnUiThreadOrJustRun(java.lang.Runnable r2) {
            r1 = this;
            android.app.Activity r0 = r1.activity
            if (r0 == 0) goto L8
            r0.runOnUiThread(r2)
            goto Lb
        L8:
            r2.run()
        Lb:
            return
    }

    public void updateContext(android.content.Context r3) {
            r2 = this;
            r2.context = r3
            r2.onContextChanged(r3)     // Catch: java.lang.Exception -> L6
            goto L1f
        L6:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "updateContext"
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r3)
        L1f:
            return
    }
}

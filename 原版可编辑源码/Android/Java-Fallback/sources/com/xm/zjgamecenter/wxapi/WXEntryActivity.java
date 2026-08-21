package com.xm.zjgamecenter.wxapi;

public class WXEntryActivity extends android.app.Activity implements com.tencent.mm.opensdk.openapi.IWXAPIEventHandler {
    static final java.lang.String FILE = "plugins.ymn";
    static final java.lang.String KEY = "wxHandler";
    static final com.google.gson.Gson gson = null;
    private com.tencent.mm.opensdk.openapi.IWXAPI api;
    private java.util.List<com.tencent.mm.opensdk.openapi.IWXAPIEventHandler> handlers;
    private boolean loaded;


    static {
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            com.xm.zjgamecenter.wxapi.WXEntryActivity.gson = r0
            return
    }

    public WXEntryActivity() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.handlers = r0
            return
    }

    private com.tencent.mm.opensdk.openapi.IWXAPIEventHandler newHandler(java.lang.String r7) {
            r6 = this;
            java.lang.Class r0 = java.lang.Class.forName(r7)     // Catch: java.lang.Exception -> L21
            r3 = 1
            java.lang.Class[] r3 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L21
            r4 = 0
            java.lang.Class<android.content.Context> r5 = android.content.Context.class
            r3[r4] = r5     // Catch: java.lang.Exception -> L21
            java.lang.reflect.Constructor r1 = r0.getDeclaredConstructor(r3)     // Catch: java.lang.Exception -> L21
            r3 = 1
            r1.setAccessible(r3)     // Catch: java.lang.Exception -> L21
            r3 = 1
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L21
            r4 = 0
            r3[r4] = r6     // Catch: java.lang.Exception -> L21
            java.lang.Object r3 = r1.newInstance(r3)     // Catch: java.lang.Exception -> L21
            com.tencent.mm.opensdk.openapi.IWXAPIEventHandler r3 = (com.tencent.mm.opensdk.openapi.IWXAPIEventHandler) r3     // Catch: java.lang.Exception -> L21
        L20:
            return r3
        L21:
            r2 = move-exception
            r2.printStackTrace()
            r3 = 0
            goto L20
    }

    void initialize() {
            r2 = this;
            boolean r1 = r2.loaded
            if (r1 == 0) goto L5
        L4:
            return
        L5:
            r1 = 1
            r2.loaded = r1
            r2.loadHandlers()     // Catch: java.io.IOException -> Lc
            goto L4
        Lc:
            r0 = move-exception
            r0.printStackTrace()
            goto L4
    }

    void loadHandlers() throws java.io.IOException {
            r11 = this;
            android.content.res.AssetManager r0 = r11.getAssets()
            java.io.InputStreamReader r4 = new java.io.InputStreamReader
            java.lang.String r7 = "plugins.ymn"
            java.io.InputStream r7 = r0.open(r7)
            r4.<init>(r7)
            com.xm.zjgamecenter.wxapi.WXEntryActivity$1 r7 = new com.xm.zjgamecenter.wxapi.WXEntryActivity$1
            r7.<init>(r11)
            java.lang.reflect.Type r6 = r7.getType()
            com.google.gson.Gson r7 = com.xm.zjgamecenter.wxapi.WXEntryActivity.gson
            java.lang.Object r5 = r7.fromJson(r4, r6)
            java.util.Map r5 = (java.util.Map) r5
            com.google.gson.Gson r8 = com.xm.zjgamecenter.wxapi.WXEntryActivity.gson
            java.lang.String r7 = "wxHandler"
            java.lang.Object r7 = r5.get(r7)
            com.google.gson.JsonElement r7 = (com.google.gson.JsonElement) r7
            java.lang.Class<java.util.List> r9 = java.util.List.class
            java.lang.Object r2 = r8.fromJson(r7, r9)
            java.util.List r2 = (java.util.List) r2
            java.util.Iterator r7 = r2.iterator()
        L36:
            boolean r8 = r7.hasNext()
            if (r8 == 0) goto L66
            java.lang.Object r1 = r7.next()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r8 = "YmnSdk"
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r10 = "load IWXAPIEventHandler: "
            java.lang.StringBuilder r9 = r9.append(r10)
            java.lang.StringBuilder r9 = r9.append(r1)
            java.lang.String r9 = r9.toString()
            android.util.Log.i(r8, r9)
            com.tencent.mm.opensdk.openapi.IWXAPIEventHandler r3 = r11.newHandler(r1)
            if (r3 == 0) goto L36
            java.util.List<com.tencent.mm.opensdk.openapi.IWXAPIEventHandler> r8 = r11.handlers
            r8.add(r3)
            goto L36
        L66:
            r4.close()
            return
    }

    @Override
    public void onCreate(android.os.Bundle r3) {
            r2 = this;
            super.onCreate(r3)
            r0 = 0
            com.tencent.mm.opensdk.openapi.IWXAPI r0 = com.tencent.mm.opensdk.openapi.WXAPIFactory.createWXAPI(r2, r0)
            r2.api = r0
            com.tencent.mm.opensdk.openapi.IWXAPI r0 = r2.api
            android.content.Intent r1 = r2.getIntent()
            r0.handleIntent(r1, r2)
            r2.initialize()
            return
    }

    @Override
    protected void onNewIntent(android.content.Intent r2) {
            r1 = this;
            super.onNewIntent(r2)
            r1.initialize()
            r1.setIntent(r2)
            com.tencent.mm.opensdk.openapi.IWXAPI r0 = r1.api
            r0.handleIntent(r2, r1)
            return
    }

    @Override
    public void onReq(com.tencent.mm.opensdk.modelbase.BaseReq r5) {
            r4 = this;
            java.lang.String r1 = "YmnSdk"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "dispatch IWXAPIEventHandler when onReq "
            java.lang.StringBuilder r2 = r2.append(r3)
            com.google.gson.Gson r3 = com.xm.zjgamecenter.wxapi.WXEntryActivity.gson
            java.lang.String r3 = r3.toJson(r5)
            java.lang.StringBuilder r2 = r2.append(r3)
            java.lang.String r2 = r2.toString()
            android.util.Log.i(r1, r2)
            r4.initialize()
            java.util.List<com.tencent.mm.opensdk.openapi.IWXAPIEventHandler> r1 = r4.handlers
            java.util.Iterator r1 = r1.iterator()
        L27:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L39
            java.lang.Object r0 = r1.next()
            com.tencent.mm.opensdk.openapi.IWXAPIEventHandler r0 = (com.tencent.mm.opensdk.openapi.IWXAPIEventHandler) r0
            if (r0 == 0) goto L27
            r0.onReq(r5)
            goto L27
        L39:
            r4.finish()
            return
    }

    @Override
    public void onResp(com.tencent.mm.opensdk.modelbase.BaseResp r5) {
            r4 = this;
            java.lang.String r1 = "YmnSdk"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "dispatch IWXAPIEventHandler when onResp "
            java.lang.StringBuilder r2 = r2.append(r3)
            com.google.gson.Gson r3 = com.xm.zjgamecenter.wxapi.WXEntryActivity.gson
            java.lang.String r3 = r3.toJson(r5)
            java.lang.StringBuilder r2 = r2.append(r3)
            java.lang.String r2 = r2.toString()
            android.util.Log.i(r1, r2)
            r4.initialize()
            java.util.List<com.tencent.mm.opensdk.openapi.IWXAPIEventHandler> r1 = r4.handlers
            java.util.Iterator r1 = r1.iterator()
        L27:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L39
            java.lang.Object r0 = r1.next()
            com.tencent.mm.opensdk.openapi.IWXAPIEventHandler r0 = (com.tencent.mm.opensdk.openapi.IWXAPIEventHandler) r0
            if (r0 == 0) goto L27
            r0.onResp(r5)
            goto L27
        L39:
            r4.finish()
            return
    }
}

package com.bytedance.pangle.provider;

public class ContentProviderProxy extends android.content.ContentProvider {
    public com.bytedance.pangle.provider.ContentProviderManager mPluginProviderManager;

    public ContentProviderProxy() {
            r0 = this;
            r0.<init>()
            return
    }

    private com.bytedance.pangle.provider.PluginContentProvider obtainPluginProvider(android.net.Uri r2, java.lang.String r3) {
            r1 = this;
            r0 = 0
            com.bytedance.pangle.provider.PluginContentProvider r2 = r1.obtainPluginProvider(r2, r3, r0)
            return r2
    }

    private com.bytedance.pangle.provider.PluginContentProvider obtainPluginProvider(android.net.Uri r4, java.lang.String r5, java.lang.String r6) {
            r3 = this;
            java.lang.String r5 = "provider_params"
            java.lang.String r4 = r4.getQueryParameter(r5)
            r5 = 0
            if (r4 != 0) goto La
            return r5
        La:
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L25
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L19
            java.lang.String r4 = ""
            goto L25
        L19:
            r0 = 10
            byte[] r4 = android.util.Base64.decode(r4, r0)
            java.lang.String r0 = new java.lang.String
            r0.<init>(r4)
            r4 = r0
        L25:
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>(r4)
            java.lang.String r4 = "process_name"
            java.lang.String r4 = r0.optString(r4)
            java.lang.String r1 = "plugin_pkg_name"
            java.lang.String r1 = r0.optString(r1)
            java.lang.String r2 = "uri"
            java.lang.String r0 = r0.optString(r2)
            com.bytedance.pangle.Zeus.loadPlugin(r1)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L4d
            android.net.Uri r5 = android.net.Uri.parse(r0)
            java.lang.String r6 = r5.getAuthority()
        L4d:
            if (r6 != 0) goto L56
            java.lang.String r0 = "Zeus/provider_pangle"
            java.lang.String r2 = "[Method:obtainPluginProvider()] plugin Authority is null !!! plugin provider can not find !!"
            com.bytedance.pangle.log.ZeusLogger.w(r0, r2)
        L56:
            com.bytedance.pangle.provider.ContentProviderManager$b r0 = new com.bytedance.pangle.provider.ContentProviderManager$b
            r0.<init>(r1, r4, r6)
            com.bytedance.pangle.provider.ContentProviderManager r4 = r3.mPluginProviderManager
            com.bytedance.pangle.provider.PluginContentProvider r4 = r4.getPluginProvider(r0)
            r4.pluginUri = r5
            return r4
    }

    @Override
    public android.os.Bundle call(java.lang.String r4, java.lang.String r5, android.os.Bundle r6) {
            r3 = this;
            java.lang.String r0 = ""
            r3.waitInit()
            java.lang.String r1 = "provider_params"
            java.lang.String r1 = r6.getString(r1, r0)     // Catch: java.lang.Throwable -> L24
            java.lang.String r2 = "provider_proxy_uri"
            java.lang.String r0 = r6.getString(r2, r0)     // Catch: java.lang.Throwable -> L24
            android.net.Uri r0 = android.net.Uri.parse(r0)     // Catch: java.lang.Throwable -> L24
            java.lang.String r2 = r0.getAuthority()     // Catch: java.lang.Throwable -> L24
            com.bytedance.pangle.provider.PluginContentProvider r0 = r3.obtainPluginProvider(r0, r2, r1)     // Catch: java.lang.Throwable -> L24
            if (r0 == 0) goto L45
            android.os.Bundle r4 = r0.call(r4, r5, r6)     // Catch: java.lang.Throwable -> L24
            return r4
        L24:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r6 = "proxy provider#call(3 params) className="
            r5.<init>(r6)
            java.lang.Class r6 = r3.getClass()
            java.lang.String r6 = r6.getSimpleName()
            r5.append(r6)
            java.lang.String r6 = ",exception:"
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            java.lang.String r6 = "Zeus/provider_pangle"
            com.bytedance.pangle.log.ZeusLogger.w(r6, r5, r4)
        L45:
            r4 = 0
            return r4
    }

    @Override
    public android.os.Bundle call(java.lang.String r3, java.lang.String r4, java.lang.String r5, android.os.Bundle r6) {
            r2 = this;
            java.lang.String r3 = ""
            java.lang.String r0 = "provider_params"
            java.lang.String r0 = r6.getString(r0, r3)     // Catch: java.lang.Throwable -> L21
            java.lang.String r1 = "provider_proxy_uri"
            java.lang.String r3 = r6.getString(r1, r3)     // Catch: java.lang.Throwable -> L21
            android.net.Uri r3 = android.net.Uri.parse(r3)     // Catch: java.lang.Throwable -> L21
            java.lang.String r1 = r3.getAuthority()     // Catch: java.lang.Throwable -> L21
            com.bytedance.pangle.provider.PluginContentProvider r3 = r2.obtainPluginProvider(r3, r1, r0)     // Catch: java.lang.Throwable -> L21
            if (r3 == 0) goto L42
            android.os.Bundle r3 = r3.call(r0, r4, r5, r6)     // Catch: java.lang.Throwable -> L21
            return r3
        L21:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "proxy provider#call(4 params-Added in API level 29) className="
            r4.<init>(r5)
            java.lang.Class r5 = r2.getClass()
            java.lang.String r5 = r5.getSimpleName()
            r4.append(r5)
            java.lang.String r5 = ",exception:"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "Zeus/provider_pangle"
            com.bytedance.pangle.log.ZeusLogger.w(r5, r4, r3)
        L42:
            r3 = 0
            return r3
    }

    @Override
    public int delete(android.net.Uri r3, android.os.Bundle r4) {
            r2 = this;
            r2.waitInit()
            r0 = -1
            if (r3 != 0) goto L7
            return r0
        L7:
            java.lang.String r1 = r3.getAuthority()     // Catch: java.lang.Throwable -> L18
            com.bytedance.pangle.provider.PluginContentProvider r3 = r2.obtainPluginProvider(r3, r1)     // Catch: java.lang.Throwable -> L18
            if (r3 == 0) goto L39
            android.net.Uri r1 = r3.pluginUri     // Catch: java.lang.Throwable -> L18
            int r3 = r3.delete(r1, r4)     // Catch: java.lang.Throwable -> L18
            return r3
        L18:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r1 = "proxy provider#delete(2 params) className="
            r4.<init>(r1)
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r4.append(r1)
            java.lang.String r1 = ",exception:"
            r4.append(r1)
            java.lang.String r4 = r4.toString()
            java.lang.String r1 = "Zeus/provider_pangle"
            com.bytedance.pangle.log.ZeusLogger.w(r1, r4, r3)
        L39:
            return r0
    }

    @Override
    public int delete(android.net.Uri r3, java.lang.String r4, java.lang.String[] r5) {
            r2 = this;
            r2.waitInit()
            r0 = -1
            if (r3 != 0) goto L7
            return r0
        L7:
            java.lang.String r1 = r3.getAuthority()     // Catch: java.lang.Throwable -> L18
            com.bytedance.pangle.provider.PluginContentProvider r3 = r2.obtainPluginProvider(r3, r1)     // Catch: java.lang.Throwable -> L18
            if (r3 == 0) goto L39
            android.net.Uri r1 = r3.pluginUri     // Catch: java.lang.Throwable -> L18
            int r3 = r3.delete(r1, r4, r5)     // Catch: java.lang.Throwable -> L18
            return r3
        L18:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "proxy provider#delete(3 params) className="
            r4.<init>(r5)
            java.lang.Class r5 = r2.getClass()
            java.lang.String r5 = r5.getSimpleName()
            r4.append(r5)
            java.lang.String r5 = ",exception:"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "Zeus/provider_pangle"
            com.bytedance.pangle.log.ZeusLogger.w(r5, r4, r3)
        L39:
            return r0
    }

    @Override
    public java.lang.String getType(android.net.Uri r4) {
            r3 = this;
            r3.waitInit()
            r0 = 0
            if (r4 != 0) goto L7
            return r0
        L7:
            java.lang.String r1 = r4.getAuthority()     // Catch: java.lang.Throwable -> L18
            com.bytedance.pangle.provider.PluginContentProvider r4 = r3.obtainPluginProvider(r4, r1)     // Catch: java.lang.Throwable -> L18
            if (r4 == 0) goto L39
            android.net.Uri r1 = r4.pluginUri     // Catch: java.lang.Throwable -> L18
            java.lang.String r4 = r4.getType(r1)     // Catch: java.lang.Throwable -> L18
            return r4
        L18:
            r4 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "proxy provider#getType className="
            r1.<init>(r2)
            java.lang.Class r2 = r3.getClass()
            java.lang.String r2 = r2.getSimpleName()
            r1.append(r2)
            java.lang.String r2 = ",exception:"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "Zeus/provider_pangle"
            com.bytedance.pangle.log.ZeusLogger.w(r2, r1, r4)
        L39:
            return r0
    }

    @Override
    public android.net.Uri insert(android.net.Uri r3, android.content.ContentValues r4) {
            r2 = this;
            r2.waitInit()
            r0 = 0
            if (r3 != 0) goto L7
            return r0
        L7:
            java.lang.String r1 = r3.getAuthority()     // Catch: java.lang.Throwable -> L18
            com.bytedance.pangle.provider.PluginContentProvider r3 = r2.obtainPluginProvider(r3, r1)     // Catch: java.lang.Throwable -> L18
            if (r3 == 0) goto L39
            android.net.Uri r1 = r3.pluginUri     // Catch: java.lang.Throwable -> L18
            android.net.Uri r3 = r3.insert(r1, r4)     // Catch: java.lang.Throwable -> L18
            return r3
        L18:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r1 = "proxy provider#insert(2 params) className="
            r4.<init>(r1)
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r4.append(r1)
            java.lang.String r1 = ",exception:"
            r4.append(r1)
            java.lang.String r4 = r4.toString()
            java.lang.String r1 = "Zeus/provider_pangle"
            com.bytedance.pangle.log.ZeusLogger.w(r1, r4, r3)
        L39:
            return r0
    }

    @Override
    public android.net.Uri insert(android.net.Uri r3, android.content.ContentValues r4, android.os.Bundle r5) {
            r2 = this;
            r2.waitInit()
            r0 = 0
            if (r3 != 0) goto L7
            return r0
        L7:
            java.lang.String r1 = r3.getAuthority()     // Catch: java.lang.Throwable -> L18
            com.bytedance.pangle.provider.PluginContentProvider r3 = r2.obtainPluginProvider(r3, r1)     // Catch: java.lang.Throwable -> L18
            if (r3 == 0) goto L39
            android.net.Uri r1 = r3.pluginUri     // Catch: java.lang.Throwable -> L18
            android.net.Uri r3 = r3.insert(r1, r4, r5)     // Catch: java.lang.Throwable -> L18
            return r3
        L18:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "proxy provider#insert(3 params) className="
            r4.<init>(r5)
            java.lang.Class r5 = r2.getClass()
            java.lang.String r5 = r5.getSimpleName()
            r4.append(r5)
            java.lang.String r5 = ",exception:"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "Zeus/provider_pangle"
            com.bytedance.pangle.log.ZeusLogger.w(r5, r4, r3)
        L39:
            return r0
    }

    @Override
    public boolean onCreate() {
            r1 = this;
            com.bytedance.pangle.provider.ContentProviderManager r0 = com.bytedance.pangle.provider.ContentProviderManager.getInstance()
            r1.mPluginProviderManager = r0
            r0 = 1
            return r0
    }

    @Override
    public android.database.Cursor query(android.net.Uri r3, java.lang.String[] r4, android.os.Bundle r5, android.os.CancellationSignal r6) {
            r2 = this;
            r2.waitInit()
            r0 = 0
            if (r3 != 0) goto L7
            return r0
        L7:
            java.lang.String r1 = r3.getAuthority()     // Catch: java.lang.Throwable -> L18
            com.bytedance.pangle.provider.PluginContentProvider r3 = r2.obtainPluginProvider(r3, r1)     // Catch: java.lang.Throwable -> L18
            if (r3 == 0) goto L39
            android.net.Uri r1 = r3.pluginUri     // Catch: java.lang.Throwable -> L18
            android.database.Cursor r3 = r3.query(r1, r4, r5, r6)     // Catch: java.lang.Throwable -> L18
            return r3
        L18:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "proxy provider#query(4 params) className="
            r4.<init>(r5)
            java.lang.Class r5 = r2.getClass()
            java.lang.String r5 = r5.getSimpleName()
            r4.append(r5)
            java.lang.String r5 = ",exception:"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "Zeus/provider_pangle"
            com.bytedance.pangle.log.ZeusLogger.w(r5, r4, r3)
        L39:
            return r0
    }

    @Override
    public android.database.Cursor query(android.net.Uri r9, java.lang.String[] r10, java.lang.String r11, java.lang.String[] r12, java.lang.String r13) {
            r8 = this;
            r8.waitInit()
            r0 = 0
            if (r9 != 0) goto L7
            return r0
        L7:
            java.lang.String r1 = r9.getAuthority()     // Catch: java.lang.Throwable -> L1c
            com.bytedance.pangle.provider.PluginContentProvider r2 = r8.obtainPluginProvider(r9, r1)     // Catch: java.lang.Throwable -> L1c
            if (r2 == 0) goto L3d
            android.net.Uri r3 = r2.pluginUri     // Catch: java.lang.Throwable -> L1c
            r4 = r10
            r5 = r11
            r6 = r12
            r7 = r13
            android.database.Cursor r9 = r2.query(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L1c
            return r9
        L1c:
            r9 = move-exception
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            java.lang.String r11 = "proxy provider#query(5 params) className="
            r10.<init>(r11)
            java.lang.Class r11 = r8.getClass()
            java.lang.String r11 = r11.getSimpleName()
            r10.append(r11)
            java.lang.String r11 = ",exception:"
            r10.append(r11)
            java.lang.String r10 = r10.toString()
            java.lang.String r11 = "Zeus/provider_pangle"
            com.bytedance.pangle.log.ZeusLogger.w(r11, r10, r9)
        L3d:
            return r0
    }

    @Override
    public android.database.Cursor query(android.net.Uri r10, java.lang.String[] r11, java.lang.String r12, java.lang.String[] r13, java.lang.String r14, android.os.CancellationSignal r15) {
            r9 = this;
            r9.waitInit()
            r0 = 0
            if (r10 != 0) goto L7
            return r0
        L7:
            java.lang.String r1 = r10.getAuthority()     // Catch: java.lang.Throwable -> L1d
            com.bytedance.pangle.provider.PluginContentProvider r2 = r9.obtainPluginProvider(r10, r1)     // Catch: java.lang.Throwable -> L1d
            if (r2 == 0) goto L3e
            android.net.Uri r3 = r2.pluginUri     // Catch: java.lang.Throwable -> L1d
            r4 = r11
            r5 = r12
            r6 = r13
            r7 = r14
            r8 = r15
            android.database.Cursor r10 = r2.query(r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L1d
            return r10
        L1d:
            r10 = move-exception
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            java.lang.String r12 = "proxy provider#query(6 params) className="
            r11.<init>(r12)
            java.lang.Class r12 = r9.getClass()
            java.lang.String r12 = r12.getSimpleName()
            r11.append(r12)
            java.lang.String r12 = ",exception:"
            r11.append(r12)
            java.lang.String r11 = r11.toString()
            java.lang.String r12 = "Zeus/provider_pangle"
            com.bytedance.pangle.log.ZeusLogger.w(r12, r11, r10)
        L3e:
            return r0
    }

    @Override
    public int update(android.net.Uri r3, android.content.ContentValues r4, android.os.Bundle r5) {
            r2 = this;
            r2.waitInit()
            r0 = 0
            if (r3 != 0) goto L7
            return r0
        L7:
            java.lang.String r1 = r3.getAuthority()     // Catch: java.lang.Throwable -> L18
            com.bytedance.pangle.provider.PluginContentProvider r3 = r2.obtainPluginProvider(r3, r1)     // Catch: java.lang.Throwable -> L18
            if (r3 == 0) goto L39
            android.net.Uri r1 = r3.pluginUri     // Catch: java.lang.Throwable -> L18
            int r3 = r3.update(r1, r4, r5)     // Catch: java.lang.Throwable -> L18
            return r3
        L18:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "proxy provider#update(3 params) className="
            r4.<init>(r5)
            java.lang.Class r5 = r2.getClass()
            java.lang.String r5 = r5.getSimpleName()
            r4.append(r5)
            java.lang.String r5 = ",exception:"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "Zeus/provider_pangle"
            com.bytedance.pangle.log.ZeusLogger.w(r5, r4, r3)
        L39:
            return r0
    }

    @Override
    public int update(android.net.Uri r3, android.content.ContentValues r4, java.lang.String r5, java.lang.String[] r6) {
            r2 = this;
            r2.waitInit()
            r0 = 0
            if (r3 != 0) goto L7
            return r0
        L7:
            java.lang.String r1 = r3.getAuthority()     // Catch: java.lang.Throwable -> L18
            com.bytedance.pangle.provider.PluginContentProvider r3 = r2.obtainPluginProvider(r3, r1)     // Catch: java.lang.Throwable -> L18
            if (r3 == 0) goto L39
            android.net.Uri r1 = r3.pluginUri     // Catch: java.lang.Throwable -> L18
            int r3 = r3.update(r1, r4, r5, r6)     // Catch: java.lang.Throwable -> L18
            return r3
        L18:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "proxy provider#update(4 params) className="
            r4.<init>(r5)
            java.lang.Class r5 = r2.getClass()
            java.lang.String r5 = r5.getSimpleName()
            r4.append(r5)
            java.lang.String r5 = ",exception:"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "Zeus/provider_pangle"
            com.bytedance.pangle.log.ZeusLogger.w(r5, r4, r3)
        L39:
            return r0
    }

    public void waitInit() {
            r1 = this;
            r0 = -1
            com.bytedance.pangle.Zeus.waitInit(r0)
            return
    }
}

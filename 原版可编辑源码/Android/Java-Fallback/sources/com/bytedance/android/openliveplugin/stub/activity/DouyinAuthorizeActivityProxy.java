package com.bytedance.android.openliveplugin.stub.activity;

public class DouyinAuthorizeActivityProxy extends android.app.Activity {
    public DouyinAuthorizeActivityProxy() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r7) {
            r6 = this;
            super.onCreate(r7)
            r7 = 1
            java.lang.String r0 = "com.bytedance.android.openlive.auth.impl.auth.LiveAuthCallStub"
            java.lang.String r1 = "onAuthActivityBack"
            com.bytedance.pangle.plugin.PluginManager r2 = com.bytedance.pangle.plugin.PluginManager.getInstance()     // Catch: java.lang.Throwable -> L24
            java.lang.String r3 = "com.byted.live.lite"
            com.bytedance.pangle.plugin.Plugin r2 = r2.getPlugin(r3)     // Catch: java.lang.Throwable -> L24
            com.bytedance.pangle.PluginClassLoader r2 = r2.mClassLoader     // Catch: java.lang.Throwable -> L24
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L24
            r4 = 0
            android.content.Intent r5 = r6.getIntent()     // Catch: java.lang.Throwable -> L24
            r3[r4] = r5     // Catch: java.lang.Throwable -> L24
            r3[r7] = r6     // Catch: java.lang.Throwable -> L24
            com.bytedance.android.live.base.api.JavaCallsUtils.callStaticMethodWithClassLoader(r0, r1, r2, r3)     // Catch: java.lang.Throwable -> L24
            goto L31
        L24:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r0 = "抖音授权失败-界面启动失败"
            android.widget.Toast r7 = android.widget.Toast.makeText(r6, r0, r7)
            r7.show()
        L31:
            return
    }
}

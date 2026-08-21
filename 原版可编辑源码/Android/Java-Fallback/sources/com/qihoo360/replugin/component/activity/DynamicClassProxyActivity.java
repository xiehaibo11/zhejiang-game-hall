package com.qihoo360.replugin.component.activity;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class DynamicClassProxyActivity extends android.app.Activity {
    public DynamicClassProxyActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r4) {
            r3 = this;
            super.onCreate(r4)
            android.content.Intent r4 = r3.getIntent()
            android.content.ComponentName r4 = r4.getComponent()
            if (r4 == 0) goto L5c
            java.lang.String r4 = r4.getClassName()
            java.lang.String r0 = com.qihoo360.i.Factory2.getPluginByDynamicClass(r4)
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L37
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "DynamicClassProxyActivity.onCreate(), plugin = "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r2 = ", class = "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "loadClass"
            com.qihoo360.replugin.helper.LogDebug.d(r2, r1)
        L37:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L5c
            boolean r1 = com.qihoo360.replugin.RePlugin.isPluginInstalled(r0)
            if (r1 != 0) goto L5c
            android.content.Intent r1 = new android.content.Intent
            r1.<init>()
            android.content.ComponentName r2 = new android.content.ComponentName
            r2.<init>(r0, r4)
            r1.setComponent(r2)
            com.qihoo360.replugin.RePluginConfig r4 = com.qihoo360.replugin.RePlugin.getConfig()
            com.qihoo360.replugin.RePluginCallbacks r4 = r4.getCallbacks()
            r2 = -1
            r4.onPluginNotExistsForActivity(r3, r0, r1, r2)
        L5c:
            r3.finish()
            return
    }
}

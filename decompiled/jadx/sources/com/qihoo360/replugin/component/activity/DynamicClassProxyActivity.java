package com.qihoo360.replugin.component.activity;

import android.app.Activity;
import android.content.ComponentName;
import android.content.Intent;
import android.os.Bundle;
import android.text.TextUtils;
import com.qihoo360.i.Factory2;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.helper.LogDebug;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class DynamicClassProxyActivity extends Activity {
    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        ComponentName component = getIntent().getComponent();
        if (component != null) {
            String className = component.getClassName();
            String pluginByDynamicClass = Factory2.getPluginByDynamicClass(className);
            if (LogDebug.LOG) {
                LogDebug.d("loadClass", "DynamicClassProxyActivity.onCreate(), plugin = " + pluginByDynamicClass + ", class = " + className);
            }
            if (!TextUtils.isEmpty(pluginByDynamicClass) && !RePlugin.isPluginInstalled(pluginByDynamicClass)) {
                Intent intent = new Intent();
                intent.setComponent(new ComponentName(pluginByDynamicClass, className));
                RePlugin.getConfig().getCallbacks().onPluginNotExistsForActivity(this, pluginByDynamicClass, intent, -1);
            }
        }
        finish();
    }
}

package com.qihoo360.replugin.component.dummy;

import android.app.Activity;
import android.os.Bundle;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class DummyActivity extends Activity {
    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        LogRelease.i(LogDebug.PLUGIN_TAG, "d.a o.c f");
        super.onCreate(null);
        finish();
    }
}

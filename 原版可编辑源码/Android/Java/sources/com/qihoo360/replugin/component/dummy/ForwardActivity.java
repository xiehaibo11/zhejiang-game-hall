package com.qihoo360.replugin.component.dummy;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import com.qihoo360.loader2.PMF;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class ForwardActivity extends Activity {
    @Override
    protected void onCreate(Bundle bundle) {
        super.onCreate(null);
        LogRelease.i(LogDebug.PLUGIN_TAG, "f.a: o.c");
        Intent intent = getIntent();
        if (intent == null) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "f.a: nul i");
        }
        PMF.forward(this, intent);
    }
}

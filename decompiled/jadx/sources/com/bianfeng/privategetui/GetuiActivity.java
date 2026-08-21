package com.bianfeng.privategetui;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import com.vivo.push.PushClientConstants;

/* JADX INFO: loaded from: classes.dex */
public class GetuiActivity extends Activity {
    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        final Intent intent = getIntent();
        YmnGetuiSharedPreferencesUtils.init(this);
        String stringExtra = intent.getStringExtra(PushClientConstants.TAG_PKG_NAME);
        runOnUiThread(new Runnable() { // from class: com.bianfeng.privategetui.GetuiActivity.1
            @Override // java.lang.Runnable
            public void run() {
                if (intent.hasExtra("key")) {
                    YmnGetuiSharedPreferencesUtils.put("key", intent.getStringExtra("key"));
                }
                if (intent.hasExtra("params")) {
                    String stringExtra2 = intent.getStringExtra("params");
                    YmnGetuiSharedPreferencesUtils.put("params", stringExtra2);
                    YmnGetuiSharedPreferencesUtils.put("click", stringExtra2);
                }
                YmnGetuiSharedPreferencesUtils.put("offline", "true");
            }
        });
        Intent intent2 = new Intent();
        intent2.setClassName(this, stringExtra);
        Log.e("ymnsdk", "pkgName is " + stringExtra);
        startActivity(intent2);
        finish();
    }
}

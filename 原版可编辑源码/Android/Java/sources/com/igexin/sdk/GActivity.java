package com.igexin.sdk;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import com.igexin.push.core.x;

public class GActivity extends Activity {
    public static final String TAG = GActivity.class.getName();

    @Override
    protected void onCreate(Bundle bundle) {
        Intent intent = new Intent(this, (Class<?>) com.igexin.push.core.a.e.a().a((Context) this));
        try {
            super.onCreate(bundle);
            Intent intent2 = getIntent();
            if (intent2 != null && intent2.hasExtra("action") && intent2.hasExtra("isSlave")) {
                intent.putExtra("action", intent2.getStringExtra("action"));
                intent.putExtra("isSlave", intent2.getBooleanExtra("isSlave", false));
                if (intent2.hasExtra("op_app")) {
                    intent.putExtra("op_app", intent2.getStringExtra("op_app"));
                }
                com.igexin.b.a.c.b.a("GActivity action = " + intent2.getStringExtra("action") + ", isSlave = " + intent2.getBooleanExtra("isSlave", false), new Object[0]);
            }
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a(TAG + "|put extra exception" + th.toString(), new Object[0]);
        }
        x.a().a(this, intent);
        com.igexin.b.a.c.b.a(TAG + "|start PushService from GActivity", new Object[0]);
        finish();
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
    }
}

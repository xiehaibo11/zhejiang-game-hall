package com.igexin.sdk;

import android.app.Activity;
import android.content.Intent;
import android.content.res.Configuration;
import android.os.Bundle;
import android.view.KeyEvent;
import android.view.Menu;

/* JADX INFO: loaded from: classes2.dex */
public class PushActivity extends Activity {
    @Override // android.app.Activity, android.content.ComponentCallbacks
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        if (com.igexin.sdk.a.a.a().c() != null) {
            com.igexin.sdk.a.a.a().c().onActivityConfigurationChanged(this, configuration);
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
    }

    @Override // android.app.Activity
    public boolean onCreateOptionsMenu(Menu menu) {
        if (com.igexin.sdk.a.a.a().c() != null) {
            return com.igexin.sdk.a.a.a().c().onActivityCreateOptionsMenu(this, menu);
        }
        return true;
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        if (com.igexin.sdk.a.a.a().c() != null) {
            com.igexin.sdk.a.a.a().c().onActivityDestroy(this);
        }
    }

    @Override // android.app.Activity, android.view.KeyEvent.Callback
    public boolean onKeyDown(int i, KeyEvent keyEvent) {
        if (com.igexin.sdk.a.a.a().c() == null || !com.igexin.sdk.a.a.a().c().onActivityKeyDown(this, i, keyEvent)) {
            return super.onKeyDown(i, keyEvent);
        }
        return true;
    }

    @Override // android.app.Activity
    protected void onNewIntent(Intent intent) {
        super.onNewIntent(intent);
        setIntent(intent);
        if (com.igexin.sdk.a.a.a().c() != null) {
            com.igexin.sdk.a.a.a().c().onActivityNewIntent(this, intent);
        }
    }

    @Override // android.app.Activity
    protected void onPause() {
        super.onPause();
        if (com.igexin.sdk.a.a.a().c() != null) {
            com.igexin.sdk.a.a.a().c().onActivityPause(this);
        }
    }

    @Override // android.app.Activity
    protected void onRestart() {
        super.onRestart();
        if (com.igexin.sdk.a.a.a().c() != null) {
            com.igexin.sdk.a.a.a().c().onActivityRestart(this);
        }
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        if (com.igexin.sdk.a.a.a().c() != null) {
            com.igexin.sdk.a.a.a().c().onActivityResume(this);
        }
    }

    @Override // android.app.Activity
    protected void onStart() {
        super.onStart();
        if (com.igexin.sdk.a.a.a().c() != null) {
            com.igexin.sdk.a.a.a().c().onActivityStart(this, getIntent());
        }
    }

    @Override // android.app.Activity
    protected void onStop() {
        super.onStop();
        if (com.igexin.sdk.a.a.a().c() != null) {
            com.igexin.sdk.a.a.a().c().onActivityStop(this);
        }
    }
}

package com.bianfeng.baselib;

import android.app.Activity;
import android.view.KeyEvent;

/* JADX INFO: loaded from: classes.dex */
public class BaseActivity extends Activity {
    private String version = "1.0.0";

    @Override // android.app.Activity, android.view.KeyEvent.Callback
    public boolean onKeyDown(int i, KeyEvent keyEvent) {
        if (i == 4) {
            return true;
        }
        return super.onKeyDown(i, keyEvent);
    }
}

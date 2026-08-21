package com.qihoo360.replugin.loader.a;

import android.content.Context;
import android.content.Intent;
import android.content.res.Resources;
import android.os.Bundle;
import android.preference.PreferenceActivity;
import com.qihoo360.replugin.f;
import library.d;
import library.e;

public class PluginPreferenceActivity extends PreferenceActivity {
    private e a;

    public PluginPreferenceActivity() {
    }

    @Override
    protected void attachBaseContext(Context r2) {
        Context r22 = f.a(this, r2);
        this.a = new e(r22);
        super.attachBaseContext(r22);
    }

    @Override
    public Resources getResources() {
        e r0 = this.a;
        if (r0 == null) goto L6;
        return r0;
    L6:
        return super.getResources();
    }

    @Override
    protected void onCreate(Bundle r1) {
        f.a(this, r1);
        super.onCreate(r1);
        f.b(this, r1);
    }

    @Override
    protected void onDestroy() {
        f.a(this);
        super.onDestroy();
    }

    @Override
    protected void onRestoreInstanceState(Bundle r3) {
        f.c(this, r3);
        super.onRestoreInstanceState(r3);     // Catch: Throwable -> L5
        return;
    L5:
        th = move-exception;
        d.a("PluginActivity", "o r i s: p=" + getPackageCodePath() + "; " + th.getMessage(), th);
    }

    @Override
    public void startActivity(Intent r2) {
        if (f.a(this, r2) == false) goto L5;
        return;
    L5:
        super.startActivity(r2);
    }

    @Override
    public void startActivityForResult(Intent r2, int r3) {
        if (f.a(this, r2, r3) == false) goto L5;
        return;
    L5:
        super.startActivityForResult(r2, r3);
    }
}

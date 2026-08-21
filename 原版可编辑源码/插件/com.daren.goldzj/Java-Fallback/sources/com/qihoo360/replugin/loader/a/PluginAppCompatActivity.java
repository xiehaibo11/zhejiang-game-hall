package com.qihoo360.replugin.loader.a;

import android.content.Context;
import android.content.Intent;
import android.content.res.Resources;
import android.os.Build;
import android.os.Bundle;
import android.support.v4.app.Fragment;
import android.support.v4.internal.view.SupportMenu;
import android.support.v7.app.AppCompatActivity;
import com.qihoo360.replugin.f;
import java.lang.reflect.Field;
import library.d;
import library.e;

public abstract class PluginAppCompatActivity extends AppCompatActivity {
    private e a;

    public PluginAppCompatActivity() {
    }

    @Override
    protected void attachBaseContext(Context r2) {
        Context r22 = f.a(this, r2);
        this.a = new e(r22);
        super.attachBaseContext(r22);
    }

    @Override
    public Context getBaseContext() {
        return super.getBaseContext();
    }

    @Override
    public String getPackageCodePath() {
        return super.getPackageCodePath();
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
        d.a("PluginAppCompatActivity", "o r i s: p=" + getPackageCodePath() + "; " + th.getMessage(), th);
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
        startActivityForResult(r2, r3, null);
    }

    @Override
    public void startActivityForResult(Intent r3, int r4, Bundle r5) {
        if (f.a(this, r3, r4, r5) == false) goto L6;
        return;
    L6:
        if (Build.VERSION.SDK_INT < 16) goto L8;
        super.startActivityForResult(r3, r4, r5);
        return;
    L8:
        super.startActivityForResult(r3, r4);
    }

    @Override
    public void startActivityFromFragment(Fragment r5, Intent r6, int r7) {
        int r0 = -1;
        if (r7 != (-1)) goto L6;
    L4:
        startActivityForResult(r6, r0);
        return;
    L6:
        if (((-65536) & r7) != 0) goto L17;
        Field r1 = Fragment.class.getDeclaredField("mIndex");     // Catch: Throwable -> L18
        boolean r2 = r1.isAccessible();     // Catch: Throwable -> L18
        if (r2 == true) goto L10;
        r1.setAccessible(true);     // Catch: Throwable -> L18
    L10:
        Object r52 = r1.get(r5);     // Catch: Throwable -> L18
        if (r2 == true) goto L13;
        r1.setAccessible(r2);     // Catch: Throwable -> L18
    L13:
        r0 = ((((Integer) r52).intValue() + 1) << 16) + (r7 & SupportMenu.USER_MASK);
        goto L4
    L17:
        throw new IllegalArgumentException("Can only use lower 16 bits for requestCode");
    }
}

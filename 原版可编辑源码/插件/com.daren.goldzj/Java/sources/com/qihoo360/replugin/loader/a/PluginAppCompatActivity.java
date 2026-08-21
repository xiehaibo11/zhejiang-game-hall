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

    @Override
    protected void attachBaseContext(Context context) {
        Context contextA = f.a(this, context);
        this.a = new e(contextA);
        super.attachBaseContext(contextA);
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
        e eVar = this.a;
        return eVar != null ? eVar : super.getResources();
    }

    @Override
    protected void onCreate(Bundle bundle) {
        f.a(this, bundle);
        super.onCreate(bundle);
        f.b(this, bundle);
    }

    @Override
    protected void onDestroy() {
        f.a(this);
        super.onDestroy();
    }

    @Override
    protected void onRestoreInstanceState(Bundle bundle) {
        f.c(this, bundle);
        try {
            super.onRestoreInstanceState(bundle);
        } catch (Throwable th) {
            d.a("PluginAppCompatActivity", "o r i s: p=" + getPackageCodePath() + "; " + th.getMessage(), th);
        }
    }

    @Override
    public void startActivity(Intent intent) {
        if (f.a(this, intent)) {
            return;
        }
        super.startActivity(intent);
    }

    @Override
    public void startActivityForResult(Intent intent, int i) {
        startActivityForResult(intent, i, null);
    }

    @Override
    public void startActivityForResult(Intent intent, int i, Bundle bundle) {
        if (f.a(this, intent, i, bundle)) {
            return;
        }
        if (Build.VERSION.SDK_INT >= 16) {
            super.startActivityForResult(intent, i, bundle);
        } else {
            super.startActivityForResult(intent, i);
        }
    }

    @Override
    public void startActivityFromFragment(Fragment fragment, Intent intent, int i) {
        int iIntValue = -1;
        if (i != -1) {
            if (((-65536) & i) != 0) {
                throw new IllegalArgumentException("Can only use lower 16 bits for requestCode");
            }
            try {
                Field declaredField = Fragment.class.getDeclaredField("mIndex");
                boolean zIsAccessible = declaredField.isAccessible();
                if (!zIsAccessible) {
                    declaredField.setAccessible(true);
                }
                Object obj = declaredField.get(fragment);
                if (!zIsAccessible) {
                    declaredField.setAccessible(zIsAccessible);
                }
                iIntValue = ((((Integer) obj).intValue() + 1) << 16) + (i & SupportMenu.USER_MASK);
            } catch (Throwable unused) {
            }
        }
        startActivityForResult(intent, iIntValue);
    }
}

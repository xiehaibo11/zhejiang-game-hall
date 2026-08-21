package com.qihoo360.replugin.loader.a;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.res.Resources;
import android.os.Build;
import android.os.Bundle;
import android.support.v4.internal.view.SupportMenu;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentActivity;
import com.qihoo360.replugin.f;
import java.lang.reflect.Field;
import library.d;
import library.e;

public abstract class PluginFragmentActivityAndroidX extends FragmentActivity {
    private e a;

    /* JADX WARN: Multi-variable type inference failed */
    protected void attachBaseContext(Context context) {
        Context contextA = f.a((Activity) this, context);
        this.a = new e(contextA);
        super.attachBaseContext(contextA);
    }

    public Context getBaseContext() {
        return super.getBaseContext();
    }

    public String getPackageCodePath() {
        return super.getPackageCodePath();
    }

    public Resources getResources() {
        e eVar = this.a;
        return eVar != null ? eVar : super.getResources();
    }

    /* JADX WARN: Multi-variable type inference failed */
    protected void onCreate(Bundle bundle) {
        f.a((Activity) this, bundle);
        super.onCreate(bundle);
        f.b((Activity) this, bundle);
    }

    /* JADX WARN: Multi-variable type inference failed */
    protected void onDestroy() {
        f.a(this);
        super.onDestroy();
    }

    /* JADX WARN: Multi-variable type inference failed */
    protected void onRestoreInstanceState(Bundle bundle) {
        f.c(this, bundle);
        try {
            super.onRestoreInstanceState(bundle);
        } catch (Throwable th) {
            d.a("PluginFragmentActivityAndroidX", "o r i s: p=" + getPackageCodePath() + "; " + th.getMessage(), th);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public void startActivity(Intent intent) {
        if (f.a((Activity) this, intent)) {
            return;
        }
        super.startActivity(intent);
    }

    public void startActivityForResult(Intent intent, int i) {
        startActivityForResult(intent, i, null);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public void startActivityForResult(Intent intent, int i, Bundle bundle) {
        if (f.a((Activity) this, intent, i, bundle)) {
            return;
        }
        if (Build.VERSION.SDK_INT >= 16) {
            super.startActivityForResult(intent, i, bundle);
        } else {
            super.startActivityForResult(intent, i);
        }
    }

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

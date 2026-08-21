package com.qihoo360.replugin.loader.a;

import android.app.TabActivity;
import android.content.Context;
import android.content.Intent;
import android.content.res.Resources;
import android.os.Bundle;
import com.qihoo360.replugin.f;
import library.d;
import library.e;

public abstract class PluginTabActivity extends TabActivity {
    private e a;

    @Override
    protected void attachBaseContext(Context context) {
        Context contextA = f.a(this, context);
        this.a = new e(contextA);
        super.attachBaseContext(contextA);
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
            d.a("PluginTabActivity", "o r i s: p=" + getPackageCodePath() + "; " + th.getMessage(), th);
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
        if (f.a(this, intent, i)) {
            return;
        }
        super.startActivityForResult(intent, i);
    }
}

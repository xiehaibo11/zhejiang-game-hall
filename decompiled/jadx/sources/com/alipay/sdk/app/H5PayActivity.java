package com.alipay.sdk.app;

import android.app.Activity;
import android.content.Intent;
import android.content.res.Configuration;
import android.os.Bundle;
import com.alipay.sdk.m.s.a;
import com.alipay.sdk.m.u.n;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes.dex */
public class H5PayActivity extends Activity {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public com.alipay.sdk.m.x.c f1092a;
    public String b;
    public String c;
    public String d;
    public String e;
    public boolean f;
    public String g;
    public WeakReference<com.alipay.sdk.m.s.a> h;

    private void b() {
        try {
            super.requestWindowFeature(1);
            getWindow().addFlags(8192);
        } catch (Throwable th) {
            com.alipay.sdk.m.u.e.a(th);
        }
    }

    public void a() {
        Object obj = PayTask.h;
        synchronized (obj) {
            try {
                obj.notify();
            } catch (Exception unused) {
            }
        }
    }

    @Override // android.app.Activity
    public void finish() {
        a();
        super.finish();
    }

    @Override // android.app.Activity
    public void onActivityResult(int i, int i2, Intent intent) {
        super.onActivityResult(i, i2, intent);
        if (i == 1010) {
            com.alipay.sdk.m.j.d.a((com.alipay.sdk.m.s.a) n.a(this.h), i, i2, intent);
        }
    }

    @Override // android.app.Activity
    public void onBackPressed() {
        com.alipay.sdk.m.x.c cVar = this.f1092a;
        if (cVar == null) {
            finish();
            return;
        }
        if (cVar.a()) {
            cVar.b();
            return;
        }
        if (!cVar.b()) {
            super.onBackPressed();
        }
        com.alipay.sdk.m.j.b.a(com.alipay.sdk.m.j.b.a());
        finish();
    }

    @Override // android.app.Activity, android.content.ComponentCallbacks
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        b();
        super.onCreate(bundle);
        try {
            com.alipay.sdk.m.s.a aVarA = a.C0022a.a(getIntent());
            if (aVarA == null) {
                finish();
                return;
            }
            this.h = new WeakReference<>(aVarA);
            if (com.alipay.sdk.m.m.a.D().y()) {
                setRequestedOrientation(3);
            } else {
                setRequestedOrientation(1);
            }
            try {
                Bundle extras = getIntent().getExtras();
                String string = extras.getString("url", null);
                this.b = string;
                if (!n.f(string)) {
                    finish();
                    return;
                }
                this.d = extras.getString("cookie", null);
                this.c = extras.getString("method", null);
                this.e = extras.getString("title", null);
                this.g = extras.getString("version", "v1");
                this.f = extras.getBoolean("backisexit", false);
                try {
                    com.alipay.sdk.m.x.d dVar = new com.alipay.sdk.m.x.d(this, aVarA, this.g);
                    setContentView(dVar);
                    dVar.a(this.e, this.c, this.f);
                    dVar.a(this.b, this.d);
                    dVar.a(this.b);
                    this.f1092a = dVar;
                } catch (Throwable th) {
                    com.alipay.sdk.m.k.a.a(aVarA, "biz", "GetInstalledAppEx", th);
                    finish();
                }
            } catch (Exception unused) {
                finish();
            }
        } catch (Exception unused2) {
            finish();
        }
    }

    @Override // android.app.Activity
    public void onDestroy() {
        super.onDestroy();
        com.alipay.sdk.m.x.c cVar = this.f1092a;
        if (cVar != null) {
            cVar.c();
        }
    }

    @Override // android.app.Activity
    public void setRequestedOrientation(int i) {
        try {
            super.setRequestedOrientation(i);
        } catch (Throwable th) {
            try {
                com.alipay.sdk.m.k.a.a((com.alipay.sdk.m.s.a) n.a(this.h), "biz", "H5PayDataAnalysisError", th);
            } catch (Throwable unused) {
            }
        }
    }
}

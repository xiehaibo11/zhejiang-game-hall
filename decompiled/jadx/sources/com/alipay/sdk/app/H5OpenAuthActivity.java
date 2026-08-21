package com.alipay.sdk.app;

import android.content.Intent;
import android.net.Uri;
import com.alipay.sdk.m.s.a;

/* JADX INFO: loaded from: classes.dex */
public class H5OpenAuthActivity extends H5PayActivity {
    public boolean i = false;

    @Override // com.alipay.sdk.app.H5PayActivity
    public void a() {
    }

    @Override // com.alipay.sdk.app.H5PayActivity, android.app.Activity
    public void onDestroy() {
        if (this.i) {
            try {
                com.alipay.sdk.m.s.a aVarA = a.C0022a.a(getIntent());
                if (aVarA != null) {
                    com.alipay.sdk.m.k.a.b(this, aVarA, "", aVarA.d);
                }
            } catch (Throwable unused) {
            }
        }
        super.onDestroy();
    }

    @Override // android.app.Activity, android.content.ContextWrapper, android.content.Context
    public void startActivity(Intent intent) {
        try {
            com.alipay.sdk.m.s.a aVarA = a.C0022a.a(intent);
            try {
                super.startActivity(intent);
                Uri data = intent != null ? intent.getData() : null;
                if (data == null || !data.toString().startsWith("alipays://platformapi/startapp")) {
                    return;
                }
                finish();
            } catch (Throwable th) {
                String string = (intent == null || intent.getData() == null) ? "null" : intent.getData().toString();
                if (aVarA != null) {
                    com.alipay.sdk.m.k.a.a(aVarA, "biz", com.alipay.sdk.m.k.b.p0, th, string);
                }
                this.i = true;
                throw th;
            }
        } catch (Throwable unused) {
            finish();
        }
    }
}

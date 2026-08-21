package com.alipay.sdk.app;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.os.SystemClock;
import android.text.TextUtils;
import com.alipay.sdk.m.s.a;
import com.xiaomi.mipush.sdk.Constants;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes.dex */
public class APayEntranceActivity extends Activity {
    public static final String d = "ap_order_info";
    public static final String e = "ap_target_packagename";
    public static final String f = "ap_session";
    public static final String g = "ap_local_info";
    public static final ConcurrentHashMap<String, a> h = new ConcurrentHashMap<>();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f1088a;
    public String b;
    public com.alipay.sdk.m.s.a c;

    public interface a {
        void a(String str);
    }

    @Override // android.app.Activity
    public void finish() {
        String str = this.b;
        com.alipay.sdk.m.k.a.a(this.c, "biz", "BSAFinish", str + "|" + TextUtils.isEmpty(this.f1088a));
        if (TextUtils.isEmpty(this.f1088a)) {
            this.f1088a = com.alipay.sdk.m.j.b.a();
            com.alipay.sdk.m.s.a aVar = this.c;
            if (aVar != null) {
                aVar.b(true);
            }
        }
        if (str != null) {
            a aVarRemove = h.remove(str);
            if (aVarRemove != null) {
                aVarRemove.a(this.f1088a);
            } else {
                com.alipay.sdk.m.k.a.b(this.c, "wr", "refNull", "session=" + str);
            }
        }
        try {
            super.finish();
        } catch (Throwable th) {
            com.alipay.sdk.m.k.a.a(this.c, "wr", "APStartFinish", th);
        }
    }

    @Override // android.app.Activity
    public void onActivityResult(int i, int i2, Intent intent) {
        super.onActivityResult(i, i2, intent);
        com.alipay.sdk.m.k.a.a(this.c, "biz", "BSAOnAR", this.b + "|" + i + Constants.ACCEPT_TIME_SEPARATOR_SP + i2);
        if (i == 1000) {
            if (intent != null) {
                try {
                    this.f1088a = intent.getStringExtra("result");
                } catch (Throwable unused) {
                }
            }
            finish();
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        try {
            Bundle extras = getIntent().getExtras();
            if (extras == null) {
                finish();
                return;
            }
            String string = extras.getString(d);
            String string2 = extras.getString(e);
            this.b = extras.getString(f);
            String string3 = extras.getString(g, "{}");
            if (!TextUtils.isEmpty(this.b)) {
                com.alipay.sdk.m.s.a aVarA = a.C0022a.a(this.b);
                this.c = aVarA;
                com.alipay.sdk.m.k.a.a(aVarA, "biz", "BSAEntryCreate", this.b + "|" + SystemClock.elapsedRealtime());
            }
            Intent intent = new Intent();
            intent.putExtra("order_info", string);
            intent.putExtra("localInfo", string3);
            intent.setClassName(string2, "com.alipay.android.app.flybird.ui.window.FlyBirdWindowActivity");
            try {
                startActivityForResult(intent, 1000);
            } catch (Throwable th) {
                com.alipay.sdk.m.k.a.a(this.c, "wr", "APStartEx", th);
                finish();
            }
            if (this.c != null) {
                Context applicationContext = getApplicationContext();
                com.alipay.sdk.m.s.a aVar = this.c;
                com.alipay.sdk.m.k.a.a(applicationContext, aVar, string, aVar.d);
                this.c.a(true);
            }
        } catch (Throwable unused) {
            finish();
        }
    }
}

package com.igexin.sdk;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import com.igexin.push.core.x;

/* JADX INFO: loaded from: classes2.dex */
public class GetuiActivity extends Activity {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f2658a = "GetuiActivity";

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        Intent intent = new Intent(this, (Class<?>) com.igexin.push.core.a.e.a().a((Context) this));
        try {
            super.onCreate(bundle);
            Intent intent2 = getIntent();
            if (intent2 != null && intent2.hasExtra("action") && intent2.hasExtra("broadcast_intent")) {
                intent.putExtra("action", intent2.getStringExtra("action"));
                intent.putExtra("broadcast_intent", (Intent) intent2.getParcelableExtra("broadcast_intent"));
            }
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a(this.f2658a + "|put extra exception" + th.toString(), new Object[0]);
        }
        x.a().a(this, intent);
        finish();
    }
}

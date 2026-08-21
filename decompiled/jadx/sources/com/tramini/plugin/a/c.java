package com.tramini.plugin.a;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;

/* JADX INFO: loaded from: classes4.dex */
public class c extends BroadcastReceiver {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f7835a = c.class.getSimpleName();

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        try {
            String stringExtra = intent.getStringExtra(intent.getAction());
            String stringExtra2 = intent.getStringExtra("data");
            String[] stringArrayExtra = intent.getStringArrayExtra("denied");
            if (!TextUtils.isEmpty(stringExtra) && !TextUtils.isEmpty(stringExtra2)) {
                com.tramini.plugin.a.a.c.a().a(stringArrayExtra);
                com.tramini.plugin.a.a.c.a().b(stringExtra);
                com.tramini.plugin.a.a.c.a().c(stringExtra2);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }
}

package com.tramini.plugin.a;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;

public class c extends BroadcastReceiver {
    public static final String a = c.class.getSimpleName();

    @Override
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

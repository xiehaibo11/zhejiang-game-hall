package com.igexin.push.core;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.os.Message;

/* JADX INFO: loaded from: classes2.dex */
public class l extends BroadcastReceiver {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static l f2577a;

    private l() {
    }

    public static l a() {
        if (f2577a == null) {
            f2577a = new l();
        }
        return f2577a;
    }

    private void a(Intent intent) {
        try {
            com.igexin.b.a.c.b.a("----------------------------------------------------------------------------------", new Object[0]);
            com.igexin.b.a.c.b.a("InternalPublicReceiver|action = " + intent.getAction() + ", component = " + intent.getComponent(), new Object[0]);
            Bundle extras = intent.getExtras();
            if (extras == null) {
                com.igexin.b.a.c.b.a("InternalPublicReceiver|no extras", new Object[0]);
                return;
            }
            for (String str : extras.keySet()) {
                com.igexin.b.a.c.b.a("InternalPublicReceiver|key [" + str + "]: " + extras.get(str), new Object[0]);
            }
        } catch (Exception unused) {
        }
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        if (intent != null && intent.getAction() != null && intent.getAction().equals("android.net.conn.CONNECTIVITY_CHANGE")) {
            a(intent);
        }
        StringBuilder sb = new StringBuilder();
        sb.append("InternalPublicReceiver InternalPublicReceiver:");
        sb.append(intent != null ? intent.getAction() : "null");
        com.igexin.b.a.c.b.a(sb.toString(), new Object[0]);
        if (c.a() != null) {
            Message message = new Message();
            message.what = CoreConsts.d;
            message.obj = intent;
            c.a().a(message);
        }
    }
}

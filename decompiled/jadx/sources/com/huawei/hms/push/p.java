package com.huawei.hms.push;

import android.content.Context;
import android.content.Intent;
import com.huawei.hms.support.log.HMSLog;

/* JADX INFO: compiled from: PushSelfShowThread.java */
/* JADX INFO: loaded from: classes.dex */
public class p extends Thread {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public Context f2159a;
    public k b;

    public p(Context context, k kVar) {
        this.f2159a = context;
        this.b = kVar;
    }

    public static Intent a(Context context, k kVar) {
        if (kVar == null) {
            return null;
        }
        Intent intentB = q.b(context, kVar.d());
        if (kVar.n() == null) {
            if (kVar.a() != null) {
                Intent intent = new Intent(kVar.a());
                if (q.a(context, kVar.d(), intent).booleanValue()) {
                    intentB = intent;
                }
            }
            intentB.setPackage(kVar.d());
            return intentB;
        }
        try {
            Intent uri = Intent.parseUri(kVar.n(), 0);
            uri.setSelector(null);
            StringBuilder sb = new StringBuilder();
            sb.append("Intent.parseUri(msg.intentUri, 0), action:");
            sb.append(uri.getAction());
            HMSLog.d("PushSelfShowLog", sb.toString());
            return q.a(context, kVar.d(), uri).booleanValue() ? uri : intentB;
        } catch (Exception e) {
            HMSLog.w("PushSelfShowLog", "intentUri error," + e.toString());
            return intentB;
        }
    }

    public final boolean b(Context context) {
        if ("cosa".equals(this.b.i())) {
            return a(context);
        }
        return true;
    }

    @Override // java.lang.Thread, java.lang.Runnable
    public void run() {
        HMSLog.i("PushSelfShowLog", "enter run()");
        try {
            if (!b(this.f2159a) || b(this.f2159a, this.b)) {
                return;
            }
            o.a(this.f2159a, this.b);
        } catch (Exception e) {
            HMSLog.e("PushSelfShowLog", e.toString());
        }
    }

    public final boolean b(Context context, k kVar) {
        if (!"cosa".equals(kVar.i()) || a(context, kVar) != null) {
            return false;
        }
        HMSLog.d("PushSelfShowLog", "launchCosaApp,intent == null");
        return true;
    }

    public final boolean a(Context context) {
        return q.c(context, this.b.d());
    }
}

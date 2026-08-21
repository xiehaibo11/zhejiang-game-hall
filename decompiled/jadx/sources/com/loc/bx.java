package com.loc;

import android.content.Context;

/* JADX INFO: compiled from: OfflineLocEntity.java */
/* JADX INFO: loaded from: classes2.dex */
public final class bx {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f2893a;
    private w b;
    private String c;

    public bx(Context context, w wVar, String str) {
        this.f2893a = context.getApplicationContext();
        this.b = wVar;
        this.c = str;
    }

    private static String a(Context context, w wVar, String str) {
        StringBuilder sb = new StringBuilder();
        try {
            sb.append("\"sdkversion\":\"");
            sb.append(wVar.c());
            sb.append("\",\"product\":\"");
            sb.append(wVar.a());
            sb.append("\",\"nt\":\"");
            sb.append(o.c(context));
            sb.append("\",\"details\":");
            sb.append(str);
        } catch (Throwable th) {
            th.printStackTrace();
        }
        return sb.toString();
    }

    final byte[] a() {
        return x.a(a(this.f2893a, this.b, this.c));
    }
}

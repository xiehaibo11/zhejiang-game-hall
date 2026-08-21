package com.loc;

import android.content.Context;

public final class bx {
    private Context a;
    private w b;
    private String c;

    public bx(Context context, w wVar, String str) {
        this.a = context.getApplicationContext();
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
        return x.a(a(this.a, this.b, this.c));
    }
}

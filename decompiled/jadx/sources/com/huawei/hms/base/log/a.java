package com.huawei.hms.base.log;

import android.content.Context;
import android.util.Log;

/* JADX INFO: compiled from: LogAdaptor.java */
/* JADX INFO: loaded from: classes.dex */
public class a {
    public static final b c = new d();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public int f2041a = 4;
    public String b;

    public void a(Context context, int i, String str) {
        this.f2041a = i;
        this.b = str;
        c.a(context, "HMSCore");
    }

    public void b(int i, String str, String str2, Throwable th) {
        if (a(i)) {
            c cVarA = a(i, str, str2, th);
            String str3 = cVarA.c() + cVarA.a();
            c.a(str3, i, str, str2 + '\n' + Log.getStackTraceString(th));
        }
    }

    public boolean a(int i) {
        return i >= this.f2041a;
    }

    public void a(int i, String str, String str2) {
        if (a(i)) {
            c cVarA = a(i, str, str2, null);
            c.a(cVarA.c() + cVarA.a(), i, str, str2);
        }
    }

    public void a(String str, String str2) {
        c cVarA = a(4, str, str2, null);
        c.a(cVarA.c() + '\n' + cVarA.a(), 4, str, str2);
    }

    public final c a(int i, String str, String str2, Throwable th) {
        c cVar = new c(8, this.b, i, str);
        cVar.a(str2);
        cVar.a(th);
        return cVar;
    }
}

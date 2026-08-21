package com.tkay.core.basead;

import android.content.Context;
import com.tkay.core.common.b.f;
import com.tkay.core.common.f.i;
import com.tkay.core.common.l.p;

/* JADX INFO: loaded from: classes3.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile b f5982a;

    private b() {
    }

    public static b a() {
        if (f5982a == null) {
            synchronized (b.class) {
                if (f5982a == null) {
                    f5982a = new b();
                }
            }
        }
        return f5982a;
    }

    public static void a(Context context, String str, String str2) {
        p.a(context, f.v, str, str2);
    }

    public static String a(Context context, String str) {
        return p.b(context, f.v, str, "");
    }

    public static void b(Context context, String str) {
        p.a(context, f.v, str);
    }

    public static String a(i iVar) {
        return iVar == null ? "" : a(iVar.b, iVar.c, iVar.f);
    }

    public static String a(String str, String str2, int i) {
        return str + "_" + str2 + "_" + i;
    }
}

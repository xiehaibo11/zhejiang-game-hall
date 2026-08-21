package com.tkay.core.a;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.core.c.d;
import com.tkay.core.common.b.f;
import com.tkay.core.common.l.p;
import com.xiaomi.mipush.sdk.Constants;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes3.dex */
public class b {
    private static volatile b c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final String f5941a = b.class.getSimpleName();
    ConcurrentHashMap<String, com.tkay.core.common.f.b> b = new ConcurrentHashMap<>();

    public static b a() {
        if (c == null) {
            synchronized (b.class) {
                if (c == null) {
                    c = new b();
                }
            }
        }
        return c;
    }

    public final boolean a(Context context, String str, d dVar) {
        if (dVar.al() <= 0) {
            return false;
        }
        com.tkay.core.common.f.b bVar = this.b.get(str);
        if (bVar == null) {
            String strB = p.b(context, f.s, str, "");
            bVar = new com.tkay.core.common.f.b();
            if (!TextUtils.isEmpty(strB)) {
                bVar.a(strB);
            }
            this.b.put(str, bVar);
        }
        StringBuilder sb = new StringBuilder("Load Cap info:");
        sb.append(str);
        sb.append(Constants.COLON_SEPARATOR);
        sb.append(bVar.toString());
        return bVar.f6150a >= dVar.al() && System.currentTimeMillis() - bVar.b <= dVar.am();
    }

    public final void b(Context context, String str, d dVar) {
        com.tkay.core.common.f.b bVar = this.b.get(str);
        if (bVar == null) {
            String strB = p.b(context, f.s, str, "");
            com.tkay.core.common.f.b bVar2 = new com.tkay.core.common.f.b();
            if (!TextUtils.isEmpty(strB)) {
                bVar2.a(strB);
            }
            this.b.put(str, bVar2);
            bVar = bVar2;
        }
        if (System.currentTimeMillis() - bVar.b > dVar.am()) {
            bVar.b = System.currentTimeMillis();
            bVar.f6150a = 0;
        }
        bVar.f6150a++;
        StringBuilder sb = new StringBuilder("After save load cap:");
        sb.append(str);
        sb.append(Constants.COLON_SEPARATOR);
        sb.append(bVar.toString());
        p.a(context, f.s, str, bVar.toString());
    }
}

package com.tkay.basead.a.b;

import android.text.TextUtils;
import com.tkay.basead.mraid.MraidWebView;
import com.tkay.core.common.a.j;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import java.io.File;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

public final class c {
    public static final int a = 0;
    public static final int b = -1;
    public static final int c = 100;
    private static Map<String, Integer> d = new HashMap();
    private static ConcurrentHashMap<String, MraidWebView> e = new ConcurrentHashMap<>(3);

    public static boolean a(String str) {
        Integer num = d.get(str);
        return num != null && num.intValue() == 0;
    }

    public static void a(String str, int i) {
        Integer num = d.get(str);
        if (num == null || num.intValue() < i) {
            d.put(str, Integer.valueOf(i));
        }
    }

    public static void a(String str, MraidWebView mraidWebView) {
        e.put(str, mraidWebView);
    }

    public static MraidWebView b(String str) {
        return e.remove(str);
    }

    public static String a(i iVar, h hVar) {
        return iVar.d + "_" + hVar.p();
    }

    public static boolean b(String str, int i) {
        return j.a().a(str, i);
    }

    public static boolean a(h hVar, i iVar) {
        com.tkay.core.common.f.j jVar;
        boolean zA;
        if (hVar == null || !(zA = a(hVar, iVar.j, (jVar = iVar.m)))) {
            return false;
        }
        if (!hVar.g()) {
            return zA;
        }
        if (jVar.V()) {
            return e.containsKey(a(iVar, hVar));
        }
        return true;
    }

    public static boolean a(h hVar, int i, com.tkay.core.common.f.j jVar) {
        if (TextUtils.equals(String.valueOf(i), "1")) {
            if (TextUtils.isEmpty(hVar.x())) {
                return false;
            }
            return b(hVar.x(), jVar.S());
        }
        if (!TextUtils.equals(String.valueOf(i), "3") || TextUtils.isEmpty(hVar.x())) {
            return true;
        }
        return b(hVar.x(), jVar.S());
    }

    public static boolean c(String str) {
        String strA = com.tkay.core.common.l.f.a(str);
        com.tkay.core.common.res.d dVarA = com.tkay.core.common.res.d.a(m.a().f());
        if (TextUtils.isEmpty(strA)) {
            return false;
        }
        return new File(dVarA.a(1) + File.separator + strA + ".0").exists();
    }
}

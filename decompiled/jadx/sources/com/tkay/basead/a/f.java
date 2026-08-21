package com.tkay.basead.a;

import com.tkay.basead.a.b.b;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.r;
import com.tkay.core.common.f.t;
import java.io.FileInputStream;
import java.io.InputStream;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f5592a = f.class.getSimpleName();
    private static volatile f b;

    private f() {
    }

    public static f a() {
        if (b == null) {
            synchronized (f.class) {
                if (b == null) {
                    b = new f();
                }
            }
        }
        return b;
    }

    private static void a(String str, List<r> list, t tVar) {
        if (list == null) {
            return;
        }
        int size = list.size();
        for (int i = 0; i < size; i++) {
            com.tkay.core.common.f.i iVar = new com.tkay.core.common.f.i();
            iVar.m = tVar;
            a(str, true, list.get(i), iVar, null);
        }
    }

    public static void a(String str, com.tkay.core.common.f.h hVar, com.tkay.core.common.f.i iVar, b.InterfaceC0384b interfaceC0384b) {
        a(str, false, hVar, iVar, interfaceC0384b);
    }

    public static void a(String str, boolean z, com.tkay.core.common.f.h hVar, com.tkay.core.common.f.i iVar, b.InterfaceC0384b interfaceC0384b) {
        new com.tkay.basead.a.b.b(str, z, hVar, iVar).a(interfaceC0384b);
    }

    public static boolean a(r rVar, com.tkay.core.common.f.i iVar) {
        return com.tkay.basead.a.b.c.a(rVar, iVar);
    }

    public static boolean a(r rVar, int i, com.tkay.core.common.f.j jVar) {
        return com.tkay.basead.a.b.c.a(rVar, i, jVar);
    }

    public static boolean a(String str, InputStream inputStream) {
        if (str == null || inputStream == null) {
            return false;
        }
        return com.tkay.core.common.res.d.a(m.a().f()).a(1, com.tkay.core.common.l.f.a(str), inputStream);
    }

    private static FileInputStream b(int i, String str) {
        return com.tkay.core.common.res.d.a(m.a().f()).a(i, com.tkay.core.common.l.f.a(str));
    }

    public static String a(int i, String str) {
        return com.tkay.core.common.res.d.a(m.a().f()).b(i, com.tkay.core.common.l.f.a(str));
    }
}

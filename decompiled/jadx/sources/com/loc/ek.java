package com.loc;

import java.util.HashMap;
import java.util.Map;

/* JADX INFO: compiled from: HttpRequest.java */
/* JADX INFO: loaded from: classes2.dex */
public final class ek {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f2943a;
    public byte[] d;
    public Map<String, String> b = new HashMap();
    boolean c = true;
    public int e = 10000;

    public static String a() {
        return "lc_" + ((int) eh.a());
    }

    public static String b() {
        return eh.c() + "*" + eh.f();
    }
}

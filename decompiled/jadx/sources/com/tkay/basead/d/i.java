package com.tkay.basead.d;

import com.tkay.core.api.BaseAd;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f5673a = i.class.getSimpleName();
    private Map<String, BaseAd> b;

    /* synthetic */ i(byte b) {
        this();
    }

    private i() {
        this.b = new HashMap(2);
    }

    public static i a() {
        return a.f5674a;
    }

    private static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static final i f5674a = new i(0);

        private a() {
        }
    }

    public final void a(String str, BaseAd baseAd) {
        this.b.put(str, baseAd);
    }

    public final BaseAd a(String str) {
        return this.b.remove(str);
    }
}

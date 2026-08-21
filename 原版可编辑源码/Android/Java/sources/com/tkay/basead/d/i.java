package com.tkay.basead.d;

import com.tkay.core.api.BaseAd;
import java.util.HashMap;
import java.util.Map;

public class i {
    public static final String a = i.class.getSimpleName();
    private Map<String, BaseAd> b;

    i(byte b) {
        this();
    }

    private i() {
        this.b = new HashMap(2);
    }

    public static i a() {
        return a.a;
    }

    private static class a {
        private static final i a = new i(0);

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

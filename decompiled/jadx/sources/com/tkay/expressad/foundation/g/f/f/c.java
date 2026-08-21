package com.tkay.expressad.foundation.g.f.f;

import java.util.Collections;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;

/* JADX INFO: loaded from: classes3.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final int f6914a;
    public final byte[] b;
    public final Map<String, String> c;
    public final List<com.tkay.expressad.foundation.g.f.c.c> d;

    public c(int i, byte[] bArr, List<com.tkay.expressad.foundation.g.f.c.c> list) {
        this(i, bArr, a(list), list);
    }

    private c(int i, byte[] bArr, Map<String, String> map, List<com.tkay.expressad.foundation.g.f.c.c> list) {
        this.f6914a = i;
        this.b = bArr;
        this.c = map;
        if (list == null) {
            this.d = null;
        } else {
            this.d = Collections.unmodifiableList(list);
        }
    }

    private static Map<String, String> a(List<com.tkay.expressad.foundation.g.f.c.c> list) {
        if (list == null) {
            return null;
        }
        if (list.isEmpty()) {
            return Collections.emptyMap();
        }
        TreeMap treeMap = new TreeMap(String.CASE_INSENSITIVE_ORDER);
        for (com.tkay.expressad.foundation.g.f.c.c cVar : list) {
            treeMap.put(cVar.a(), cVar.b());
        }
        return treeMap;
    }
}

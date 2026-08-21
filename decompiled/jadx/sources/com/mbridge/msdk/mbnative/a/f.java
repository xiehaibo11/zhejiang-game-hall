package com.mbridge.msdk.mbnative.a;

import com.mbridge.msdk.out.Campaign;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: compiled from: NativeCacheFactory.java */
/* JADX INFO: loaded from: classes2.dex */
public final class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static Map<Integer, b<String, List<Campaign>>> f3747a = new HashMap();

    public static b<String, List<Campaign>> a(int i) {
        b<String, List<Campaign>> aVar;
        if (f3747a.containsKey(Integer.valueOf(i))) {
            return f3747a.get(Integer.valueOf(i));
        }
        if (i == 1 || i == 2) {
            aVar = new a(i);
        } else if (i == 3) {
            aVar = new d();
        } else if (i == 6) {
            aVar = new c();
        } else if (i == 7) {
            aVar = new e();
        } else {
            aVar = new a(i);
        }
        f3747a.put(Integer.valueOf(i), aVar);
        return aVar;
    }
}

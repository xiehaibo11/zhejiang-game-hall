package com.meizu.cloud.pushsdk.d.a;

import com.meizu.cloud.pushsdk.d.f.e;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class c implements a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f4567a = c.class.getSimpleName();
    private final HashMap<String, Object> b = new HashMap<>();

    @Override // com.meizu.cloud.pushsdk.d.a.a
    public Map a() {
        return this.b;
    }

    public void a(String str, Object obj) {
        if (obj != null) {
            this.b.put(str, obj);
            return;
        }
        com.meizu.cloud.pushsdk.d.f.c.c(this.f4567a, "The keys value is empty, returning without adding key: " + str, new Object[0]);
    }

    @Override // com.meizu.cloud.pushsdk.d.a.a
    public void a(String str, String str2) {
        if (str2 != null && !str2.isEmpty()) {
            this.b.put(str, str2);
            return;
        }
        com.meizu.cloud.pushsdk.d.f.c.c(this.f4567a, "The keys value is empty, returning without adding key: " + str, new Object[0]);
    }

    public void a(Map<String, Object> map) {
        if (map == null) {
            com.meizu.cloud.pushsdk.d.f.c.c(this.f4567a, "Map passed in is null, returning without adding map.", new Object[0]);
        } else {
            this.b.putAll(map);
        }
    }

    @Override // com.meizu.cloud.pushsdk.d.a.a
    public long b() {
        return e.a(toString());
    }

    public String toString() {
        return e.a((Map) this.b).toString();
    }
}

package com.huawei.hms.framework.network.grs.local.model;

import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f2082a;
    private long b;
    private Map<String, c> c = new HashMap(16);

    public c a(String str) {
        return this.c.get(str);
    }

    public void a() {
        Map<String, c> map = this.c;
        if (map != null) {
            map.clear();
        }
    }

    public void a(long j) {
        this.b = j;
    }

    public void a(String str, c cVar) {
        this.c.put(str, cVar);
    }

    public String b() {
        return this.f2082a;
    }

    public void b(String str) {
        this.f2082a = str;
    }
}

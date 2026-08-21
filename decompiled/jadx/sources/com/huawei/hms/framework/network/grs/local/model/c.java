package com.huawei.hms.framework.network.grs.local.model;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f2084a;
    private String b;
    private Map<String, d> c = new HashMap(16);
    private List<b> d = new ArrayList(16);

    public d a(String str) {
        return this.c.get(str);
    }

    public List<b> a() {
        return this.d;
    }

    public void a(String str, d dVar) {
        this.c.put(str, dVar);
    }

    public void a(List<b> list) {
        this.d = list;
    }

    public String b() {
        return this.b;
    }

    public void b(String str) {
        this.f2084a = str;
    }

    public void c(String str) {
        this.b = str;
    }
}

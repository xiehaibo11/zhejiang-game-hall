package com.igexin.push.core.bean;

import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f2554a;
    private List<String> b;
    private int c;

    public String a() {
        return this.f2554a;
    }

    public void a(String str) {
        this.f2554a = str;
    }

    public void a(List<String> list) {
        this.b = list;
    }

    public List<String> b() {
        return this.b;
    }

    public int c() {
        return this.c;
    }

    public void d() {
        this.c++;
    }

    public void e() {
        this.c--;
    }
}

package com.xiaomi.push;

import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public class fx implements Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static String f8173a = "wcc-ml-test10.bj";
    public static final String b = ah.f8031a;
    public static String c = null;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private int f432a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private ga f433a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private boolean f434a = fw.f417a;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    private boolean f435b = true;
    private String d;
    private String e;
    private String f;

    public fx(Map<String, Integer> map, int i, String str, ga gaVar) {
        a(map, i, str, gaVar);
    }

    public static final String a() {
        String str = c;
        return str != null ? str : ae.m117a() ? "sandbox.xmpush.xiaomi.com" : ae.b() ? b : "app.chat.xiaomi.net";
    }

    public static final void a(String str) {
        if (m.m575a(v.m701a()) && ae.b()) {
            return;
        }
        c = str;
    }

    private void a(Map<String, Integer> map, int i, String str, ga gaVar) {
        this.f432a = i;
        this.d = str;
        this.f433a = gaVar;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public int m372a() {
        return this.f432a;
    }

    public void a(boolean z) {
        this.f434a = z;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m373a() {
        return this.f434a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public byte[] mo374a() {
        return null;
    }

    public String b() {
        return this.f;
    }

    public void b(String str) {
        this.f = str;
    }

    public String c() {
        if (this.e == null) {
            this.e = a();
        }
        return this.e;
    }

    public void c(String str) {
        this.e = str;
    }
}

package com.cmic.gen.sdk;

import com.cmic.gen.sdk.a.a;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: compiled from: ConcurrentBundle.java */
/* JADX INFO: loaded from: classes.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private ConcurrentHashMap<String, Object> f1609a;

    public a(int i) {
        this.f1609a = new ConcurrentHashMap<>(i);
    }

    public void a(String str, byte[] bArr) {
        if (str == null || bArr == null) {
            return;
        }
        this.f1609a.put(str, bArr);
    }

    public byte[] a(String str) {
        if (str != null) {
            return (byte[]) this.f1609a.get(str);
        }
        return null;
    }

    public void a(String str, String str2) {
        if (str == null || str2 == null) {
            return;
        }
        this.f1609a.put(str, str2);
    }

    public String b(String str) {
        return b(str, "");
    }

    public String b(String str, String str2) {
        return (str == null || !this.f1609a.containsKey(str)) ? str2 : (String) this.f1609a.get(str);
    }

    public void a(String str, boolean z) {
        if (str != null) {
            this.f1609a.put(str, Boolean.valueOf(z));
        }
    }

    public boolean b(String str, boolean z) {
        return (str == null || !this.f1609a.containsKey(str)) ? z : ((Boolean) this.f1609a.get(str)).booleanValue();
    }

    public void a(String str, int i) {
        if (str != null) {
            this.f1609a.put(str, Integer.valueOf(i));
        }
    }

    public int c(String str) {
        return b(str, 0);
    }

    public int b(String str, int i) {
        return (str == null || !this.f1609a.containsKey(str)) ? i : ((Integer) this.f1609a.get(str)).intValue();
    }

    public void a(String str, long j) {
        if (str != null) {
            this.f1609a.put(str, Long.valueOf(j));
        }
    }

    public long b(String str, long j) {
        return (str == null || !this.f1609a.containsKey(str)) ? j : ((Long) this.f1609a.get(str)).longValue();
    }

    public void a(com.cmic.gen.sdk.d.b bVar) {
        if (bVar != null) {
            this.f1609a.put("logBean", bVar);
        }
    }

    public com.cmic.gen.sdk.d.b a() {
        com.cmic.gen.sdk.d.b bVar = (com.cmic.gen.sdk.d.b) this.f1609a.get("logBean");
        return bVar != null ? bVar : new com.cmic.gen.sdk.d.b();
    }

    public void a(com.cmic.gen.sdk.a.a aVar) {
        if (aVar != null) {
            this.f1609a.put("current_config", aVar);
        }
    }

    public com.cmic.gen.sdk.a.a b() {
        com.cmic.gen.sdk.a.a aVar = (com.cmic.gen.sdk.a.a) this.f1609a.get("current_config");
        if (aVar != null) {
            return aVar;
        }
        com.cmic.gen.sdk.e.c.a("UmcConfigBean为空", "请核查");
        return new a.C0061a().a();
    }
}

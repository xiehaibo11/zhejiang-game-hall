package com.cmic.gen.sdk;

import com.cmic.gen.sdk.a.a;
import java.util.concurrent.ConcurrentHashMap;

public class a {
    private ConcurrentHashMap<String, Object> a;

    public a(int i) {
        this.a = new ConcurrentHashMap<>(i);
    }

    public void a(String str, byte[] bArr) {
        if (str == null || bArr == null) {
            return;
        }
        this.a.put(str, bArr);
    }

    public byte[] a(String str) {
        if (str != null) {
            return (byte[]) this.a.get(str);
        }
        return null;
    }

    public void a(String str, String str2) {
        if (str == null || str2 == null) {
            return;
        }
        this.a.put(str, str2);
    }

    public String b(String str) {
        return b(str, "");
    }

    public String b(String str, String str2) {
        return (str == null || !this.a.containsKey(str)) ? str2 : (String) this.a.get(str);
    }

    public void a(String str, boolean z) {
        if (str != null) {
            this.a.put(str, Boolean.valueOf(z));
        }
    }

    public boolean b(String str, boolean z) {
        return (str == null || !this.a.containsKey(str)) ? z : ((Boolean) this.a.get(str)).booleanValue();
    }

    public void a(String str, int i) {
        if (str != null) {
            this.a.put(str, Integer.valueOf(i));
        }
    }

    public int c(String str) {
        return b(str, 0);
    }

    public int b(String str, int i) {
        return (str == null || !this.a.containsKey(str)) ? i : ((Integer) this.a.get(str)).intValue();
    }

    public void a(String str, long j) {
        if (str != null) {
            this.a.put(str, Long.valueOf(j));
        }
    }

    public long b(String str, long j) {
        return (str == null || !this.a.containsKey(str)) ? j : ((Long) this.a.get(str)).longValue();
    }

    public void a(com.cmic.gen.sdk.d.b bVar) {
        if (bVar != null) {
            this.a.put("logBean", bVar);
        }
    }

    public com.cmic.gen.sdk.d.b a() {
        com.cmic.gen.sdk.d.b bVar = (com.cmic.gen.sdk.d.b) this.a.get("logBean");
        return bVar != null ? bVar : new com.cmic.gen.sdk.d.b();
    }

    public void a(com.cmic.gen.sdk.a.a aVar) {
        if (aVar != null) {
            this.a.put("current_config", aVar);
        }
    }

    public com.cmic.gen.sdk.a.a b() {
        com.cmic.gen.sdk.a.a aVar = (com.cmic.gen.sdk.a.a) this.a.get("current_config");
        if (aVar != null) {
            return aVar;
        }
        com.cmic.gen.sdk.e.c.a("UmcConfigBean为空", "请核查");
        return new a.a().a();
    }
}

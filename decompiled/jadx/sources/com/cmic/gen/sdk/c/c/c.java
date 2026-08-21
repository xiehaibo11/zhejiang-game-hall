package com.cmic.gen.sdk.c.c;

import android.net.Network;
import com.cmic.gen.sdk.c.b.g;
import com.cmic.gen.sdk.e.e;
import com.loopj.android.http.RequestParams;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: compiled from: HttpRequest.java */
/* JADX INFO: loaded from: classes.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f1656a;
    private final String b;
    private final Map<String, String> c;
    private final String d;
    private boolean e;
    private final String f;
    private Network g;
    private long h;
    private final String i;
    private int j;
    private final g k;

    private c(String str, Map<String, String> map, g gVar, String str2, String str3) {
        this.e = false;
        this.b = str;
        this.k = gVar;
        this.c = map == null ? new HashMap<>() : map;
        this.f1656a = gVar == null ? "" : gVar.b().toString();
        this.d = str2;
        this.f = str3;
        this.i = gVar != null ? gVar.a() : "";
        l();
    }

    public c(String str, g gVar, String str2, String str3) {
        this(str, null, gVar, str2, str3);
    }

    private void l() {
        this.c.put(com.heytap.mcssdk.constant.b.C, com.cmic.gen.sdk.auth.c.SDK_VERSION);
        this.c.put("Content-Type", RequestParams.APPLICATION_JSON);
        this.c.put("CMCC-EncryptType", "STD");
        this.c.put("traceId", this.f);
        this.c.put("appid", this.i);
        this.c.put("connection", "Keep-Alive");
    }

    public void a(String str, String str2) {
        this.c.put(str, str2);
    }

    public String a() {
        return this.b;
    }

    public boolean b() {
        return this.e;
    }

    void a(boolean z) {
        this.e = z;
    }

    public Map<String, String> c() {
        return this.c;
    }

    public String d() {
        return this.f1656a;
    }

    public String e() {
        return this.d;
    }

    public String f() {
        return this.f;
    }

    public boolean g() {
        return !e.a(this.f) || this.b.contains("logReport") || this.b.contains("uniConfig");
    }

    public Network h() {
        return this.g;
    }

    public void a(Network network) {
        this.g = network;
    }

    void a(long j) {
        this.h = j;
    }

    long i() {
        return this.h;
    }

    public boolean j() {
        int i = this.j;
        this.j = i + 1;
        return i < 2;
    }

    public g k() {
        return this.k;
    }
}

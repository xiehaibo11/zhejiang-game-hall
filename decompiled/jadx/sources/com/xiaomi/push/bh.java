package com.xiaomi.push;

import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public class bh {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public int f8056a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public String f152a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public Map<String, String> f153a = new HashMap();

    public String a() {
        return this.f152a;
    }

    public String toString() {
        return String.format("resCode = %1$d, headers = %2$s, response = %3$s", Integer.valueOf(this.f8056a), this.f153a.toString(), this.f152a);
    }
}

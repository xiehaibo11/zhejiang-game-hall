package com.xiaomi.push;

/* JADX INFO: loaded from: classes4.dex */
public class bg implements bi {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f8055a;
    private final String b;

    public bg(String str, String str2) {
        if (str == null) {
            throw new IllegalArgumentException("Name may not be null");
        }
        this.f8055a = str;
        this.b = str2;
    }

    @Override // com.xiaomi.push.bi
    public String a() {
        return this.f8055a;
    }

    @Override // com.xiaomi.push.bi
    public String b() {
        return this.b;
    }
}

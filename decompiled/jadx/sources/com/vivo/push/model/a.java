package com.vivo.push.model;

/* JADX INFO: loaded from: classes4.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f7930a;
    private String b;

    public a(String str, String str2) {
        this.f7930a = str;
        this.b = str2;
    }

    public final String a() {
        return this.f7930a;
    }

    public final String b() {
        return this.b;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || getClass() != obj.getClass()) {
            return false;
        }
        String str = this.f7930a;
        String str2 = ((a) obj).f7930a;
        if (str == null) {
            if (str2 != null) {
                return false;
            }
        } else if (!str.equals(str2)) {
            return false;
        }
        return true;
    }

    public final int hashCode() {
        String str = this.f7930a;
        return (str == null ? 0 : str.hashCode()) + 31;
    }

    public final String toString() {
        return "ConfigItem{mKey='" + this.f7930a + "', mValue='" + this.b + "'}";
    }
}

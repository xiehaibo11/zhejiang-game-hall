package com.vivo.push.model;

public final class a {
    private String a;
    private String b;

    public a(String str, String str2) {
        this.a = str;
        this.b = str2;
    }

    public final String a() {
        return this.a;
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
        String str = this.a;
        String str2 = ((a) obj).a;
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
        String str = this.a;
        return (str == null ? 0 : str.hashCode()) + 31;
    }

    public final String toString() {
        return "ConfigItem{mKey='" + this.a + "', mValue='" + this.b + "'}";
    }
}

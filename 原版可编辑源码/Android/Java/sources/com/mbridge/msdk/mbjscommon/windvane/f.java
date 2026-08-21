package com.mbridge.msdk.mbjscommon.windvane;

public enum f {
    a("js", "application/x-javascript"),
    b("css", "text/css"),
    c("jpg", "image/jpeg"),
    d("jpep", "image/jpeg"),
    e("png", "image/png"),
    f("webp", "image/webp"),
    g("gif", "image/gif"),
    h("htm", "text/html"),
    i("html", "text/html");

    private String j;
    private String k;

    f(String str, String str2) {
        this.j = str;
        this.k = str2;
    }

    public final String a() {
        return this.j;
    }

    public final String b() {
        return this.k;
    }
}

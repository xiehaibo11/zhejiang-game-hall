package com.tkay.expressad.atsignalcommon.windvane;

public enum h {
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

    h(String str, String str2) {
        this.j = str;
        this.k = str2;
    }

    public final String a() {
        return this.j;
    }

    private void a(String str) {
        this.j = str;
    }

    public final String b() {
        return this.k;
    }

    private void b(String str) {
        this.k = str;
    }
}

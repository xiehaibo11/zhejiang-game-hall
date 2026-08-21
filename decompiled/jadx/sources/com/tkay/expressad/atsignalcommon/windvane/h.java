package com.tkay.expressad.atsignalcommon.windvane;

/* JADX INFO: loaded from: classes3.dex */
public enum h {
    JS("js", "application/x-javascript"),
    CSS("css", "text/css"),
    JPG("jpg", "image/jpeg"),
    JPEG("jpep", "image/jpeg"),
    PNG("png", "image/png"),
    WEBP("webp", "image/webp"),
    GIF("gif", "image/gif"),
    HTM("htm", "text/html"),
    HTML("html", "text/html");

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

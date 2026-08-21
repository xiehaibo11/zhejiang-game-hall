package com.tencent.open;

public abstract class c extends android.app.Dialog {
    protected com.tencent.open.b a;
    protected final android.webkit.WebChromeClient b;


    public c(android.content.Context r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            com.tencent.open.c$1 r1 = new com.tencent.open.c$1
            r1.<init>(r0)
            r0.b = r1
            return
    }

    protected abstract void a(java.lang.String r1);

    @Override
    protected void onCreate(android.os.Bundle r1) {
            r0 = this;
            super.onCreate(r1)
            com.tencent.open.b r1 = new com.tencent.open.b
            r1.<init>()
            r0.a = r1
            return
    }
}

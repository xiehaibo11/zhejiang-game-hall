package com.vivo.push;

final class i implements IPushActionListener {
    final e a;

    i(e eVar) {
        this.a = eVar;
    }

    @Override
    public final void onStateChanged(int i) {
        if (i != 0) {
            this.a.k = null;
            this.a.j.b("APP_TOKEN");
        } else {
            this.a.k = "";
            this.a.j.a("APP_TOKEN", "");
            this.a.m();
            this.a.j.b("APP_TAGS");
        }
    }
}

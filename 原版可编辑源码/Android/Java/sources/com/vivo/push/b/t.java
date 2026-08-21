package com.vivo.push.b;

import java.util.ArrayList;
import java.util.List;

public final class t extends s {
    private ArrayList<String> a;
    private ArrayList<String> b;

    public t(int i) {
        super(i);
        this.a = null;
        this.b = null;
    }

    @Override
    protected final void c(com.vivo.push.a aVar) {
        super.c(aVar);
        aVar.a("content", this.a);
        aVar.a("error_msg", this.b);
    }

    public final ArrayList<String> d() {
        return this.a;
    }

    @Override
    protected final void d(com.vivo.push.a aVar) {
        super.d(aVar);
        this.a = aVar.c("content");
        this.b = aVar.c("error_msg");
    }

    public final List<String> e() {
        return this.b;
    }

    @Override
    public final String toString() {
        return "OnSetTagsCommand";
    }
}

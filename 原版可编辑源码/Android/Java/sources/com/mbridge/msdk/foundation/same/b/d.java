package com.mbridge.msdk.foundation.same.b;

import java.util.ArrayList;
import java.util.List;

public final class d extends b {
    public d(String str) {
        super(str);
    }

    @Override
    protected final List<a> b() {
        ArrayList<a> arrayList = new ArrayList<>();
        a(arrayList, c.k, "mb/res");
        a(arrayList, c.b, "mb/res/Movies").a(c.c, "mb/res/.MBridge_VC");
        a aVarA = a(arrayList, c.d, "mb/res/.mbridge700");
        aVarA.a(c.f, "mb/res/img");
        aVarA.a(c.n, "mb/res/picasso");
        aVarA.a(c.e, "mb/res/res");
        aVarA.a(c.g, "mb/res/html");
        aVarA.a(c.l, "mb/res/xml");
        aVarA.a(c.m, "mb/config");
        a(arrayList, c.j, "mb/other").a(c.h, "mb/apk");
        a(arrayList, c.i, "mb/crashinfo");
        a(arrayList, c.j, "mb/other");
        return arrayList;
    }
}

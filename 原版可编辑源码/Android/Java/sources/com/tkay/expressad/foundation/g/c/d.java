package com.tkay.expressad.foundation.g.c;

import java.util.ArrayList;
import java.util.List;

public final class d extends b {
    private static final String b = "tkay_template/";
    private static final String c = "tkay_template/res/Movies";
    private static final String d = "tkay_template/res";
    private static final String e = "tkay_template/res/.Tkay_VC";
    private static final String f = "tkay_template/res/.tkay700";
    private static final String g = "tkay_template/res/img";
    private static final String h = "tkay_template/crashinfo";
    private static final String i = "tkay_template/other";
    private static final String j = "tkay_template/res/xml";
    private static final String k = "tkay_template/tkay/config";
    private static final String l = "tkay_template/res/res";
    private static final String m = "tkay_template/res/html";

    public d(String str) {
        super(str);
    }

    @Override
    protected final List<a> b() {
        ArrayList arrayList = new ArrayList();
        a(arrayList, c.l, d);
        a(arrayList, c.c, c).a(c.d, e);
        a aVarA = a(arrayList, c.e, f);
        aVarA.a(c.h, g);
        aVarA.a(c.m, j);
        aVarA.a(c.n, k);
        aVarA.a(c.g, l);
        aVarA.a(c.i, m);
        a(arrayList, c.k, i);
        a(arrayList, c.j, h);
        a(arrayList, c.k, i);
        return arrayList;
    }
}

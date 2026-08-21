package com.tkay.expressad.foundation.g.c;

import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
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

    @Override // com.tkay.expressad.foundation.g.c.b
    protected final List<a> b() {
        ArrayList arrayList = new ArrayList();
        a(arrayList, c.ANYTHINK_RES_MANAGER_DIR, d);
        a(arrayList, c.AD_MOVIES, c).a(c.ANYTHINK_VC, e);
        a aVarA = a(arrayList, c.AD_ANYTHINK_700, f);
        aVarA.a(c.ANYTHINK_700_IMG, g);
        aVarA.a(c.ANYTHINK_700_XML, j);
        aVarA.a(c.MBRIDGE_700_CONFIG, k);
        aVarA.a(c.ANYTHINK_700_RES, l);
        aVarA.a(c.ANYTHINK_700_HTML, m);
        a(arrayList, c.ANYTHINK_OTHER, i);
        a(arrayList, c.ANYTHINK_CRASH_INFO, h);
        a(arrayList, c.ANYTHINK_OTHER, i);
        return arrayList;
    }
}

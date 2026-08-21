package com.cmic.gen.sdk.c;

import android.text.TextUtils;
import com.cmic.gen.sdk.c.b.g;
import com.cmic.gen.sdk.e.q;
import java.util.List;
import java.util.Map;

/* JADX INFO: compiled from: RedirectHandler.java */
/* JADX INFO: loaded from: classes.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f1644a;
    private String b;

    public com.cmic.gen.sdk.c.c.c a(com.cmic.gen.sdk.c.c.c cVar, com.cmic.gen.sdk.c.d.b bVar, com.cmic.gen.sdk.a aVar) {
        List<String> list;
        Map<String, List<String>> mapB = bVar.b();
        if (TextUtils.isEmpty(this.f1644a) && (list = mapB.get("pplocation")) != null && list.size() > 0) {
            this.f1644a = list.get(0);
        }
        q.b(aVar, String.valueOf(bVar.a()));
        List<String> list2 = mapB.get("Location");
        if (list2 == null || list2.isEmpty()) {
            list2 = mapB.get("Location".toLowerCase());
        }
        if (list2 != null && list2.size() > 0) {
            String str = list2.get(0);
            this.b = str;
            if (!TextUtils.isEmpty(str)) {
                String strB = aVar.b("operatortype", "0");
                if ("2".equals(strB)) {
                    q.a(aVar, "getUnicomMobile");
                } else if ("3".equals(strB)) {
                    q.a(aVar, "getTelecomMobile");
                } else {
                    q.a(aVar, "NONE");
                }
            }
        }
        com.cmic.gen.sdk.e.c.b("Location", this.b);
        com.cmic.gen.sdk.c.c.c cVarA = a(this.b, cVar.f(), "GET", new com.cmic.gen.sdk.c.b.c(cVar.k().a()));
        cVarA.a(cVar.h());
        return cVarA;
    }

    public com.cmic.gen.sdk.c.c.c b(com.cmic.gen.sdk.c.c.c cVar, com.cmic.gen.sdk.c.d.b bVar, com.cmic.gen.sdk.a aVar) {
        String strB = aVar.b("operatortype", "0");
        if ("2".equals(strB)) {
            q.a(aVar, "getNewUnicomPhoneNumberNotify");
        } else if ("3".equals(strB)) {
            q.a(aVar, "getNewTelecomPhoneNumberNotify");
        } else {
            q.a(aVar, "NONE");
        }
        q.b(aVar, String.valueOf(bVar.a()));
        com.cmic.gen.sdk.c.b.d dVar = new com.cmic.gen.sdk.c.b.d(cVar.k().a(), "1.0", bVar.c());
        dVar.c(aVar.b("userCapaid"));
        if (aVar.c("logintype") == 3 || aVar.b("isRisk", false)) {
            dVar.b("pre");
        } else {
            dVar.b("authz");
        }
        com.cmic.gen.sdk.c.c.c cVarA = a(this.f1644a, cVar.f(), "POST", dVar);
        cVarA.a(cVar.h());
        this.f1644a = null;
        return cVarA;
    }

    private com.cmic.gen.sdk.c.c.c a(String str, String str2, String str3, g gVar) {
        com.cmic.gen.sdk.c.c.c cVar = new com.cmic.gen.sdk.c.c.c(str, gVar, str3, str2);
        if (str3.equals("GET")) {
            cVar.a("Content-Type", "application/x-www-form-urlencoded");
        }
        return cVar;
    }

    public String a() {
        return this.f1644a;
    }
}

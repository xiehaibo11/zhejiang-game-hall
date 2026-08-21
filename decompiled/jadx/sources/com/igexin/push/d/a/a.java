package com.igexin.push.d.a;

import com.igexin.b.a.b.d;
import com.igexin.b.a.b.e;
import com.igexin.push.d.c.c;
import com.igexin.push.d.c.f;
import com.igexin.push.d.c.h;
import com.igexin.push.d.c.k;
import com.igexin.push.d.c.l;
import com.igexin.push.d.c.m;
import com.igexin.push.d.c.o;
import com.igexin.push.d.c.p;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class a extends com.igexin.b.a.b.b {
    public a(String str, com.igexin.b.a.b.b bVar) {
        super(str, true);
        a(bVar);
    }

    private boolean a(com.igexin.push.d.c.a aVar, c cVar) {
        String string;
        if (aVar.b != 26) {
            return false;
        }
        m mVar = (m) cVar;
        if (mVar.b() && mVar.e != null) {
            try {
                JSONObject jSONObject = new JSONObject((String) mVar.e);
                if (jSONObject.has("action") && (string = jSONObject.getString("action")) != null) {
                    if (string.equals("redirect_server")) {
                        return true;
                    }
                }
            } catch (Exception e) {
                com.igexin.b.a.c.b.a("CommandFilter|" + e.toString(), new Object[0]);
            }
        }
        return false;
    }

    @Override // com.igexin.b.a.b.b
    public Object a(e eVar, d dVar, Object obj) {
        if (obj instanceof c) {
            c cVar = (c) obj;
            com.igexin.push.d.c.a aVar = new com.igexin.push.d.c.a();
            aVar.b = (byte) cVar.i;
            aVar.a(cVar.c());
            aVar.c = cVar.j;
            aVar.d = cVar.k;
            return aVar;
        }
        if (!(obj instanceof c[])) {
            return null;
        }
        c[] cVarArr = (c[]) obj;
        com.igexin.push.d.c.a[] aVarArr = new com.igexin.push.d.c.a[cVarArr.length];
        for (int i = 0; i < cVarArr.length; i++) {
            aVarArr[i] = new com.igexin.push.d.c.a();
            aVarArr[i].b = (byte) cVarArr[i].i;
            aVarArr[i].a(cVarArr[i].c());
        }
        return aVarArr;
    }

    @Override // com.igexin.b.a.b.b
    /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] */
    public com.igexin.b.a.d.a.e c(e eVar, d dVar, Object obj) {
        if (obj == null) {
            return null;
        }
        if (obj instanceof f) {
            return (com.igexin.b.a.d.a.e) obj;
        }
        com.igexin.push.d.c.a aVar = (com.igexin.push.d.c.a) obj;
        byte b = aVar.b;
        c hVar = b != 5 ? b != 9 ? b != 20 ? b != 26 ? b != 37 ? b != 97 ? null : new h() : new l() : new m() : new p() : new o() : new k();
        if ((aVar.f != 1 && aVar.f != 7) || hVar == null) {
            return null;
        }
        hVar.a(aVar.e);
        if (aVar.f != 7) {
            if (a(aVar, hVar)) {
                return hVar;
            }
            return null;
        }
        if (aVar.g != 32 || a(aVar, hVar)) {
            return hVar;
        }
        return null;
    }
}

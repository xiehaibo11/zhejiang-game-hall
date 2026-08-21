package com.igexin.push.core.a;

import android.text.TextUtils;

public class s extends a {
    private static final String a = com.igexin.push.config.i.a + "_RegisterResultAction";

    @Override
    public boolean a(com.igexin.b.a.d.e eVar) {
        return false;
    }

    @Override
    public boolean a(Object obj) {
        if (obj instanceof com.igexin.push.d.c.o) {
            com.igexin.push.d.c.o oVar = (com.igexin.push.d.c.o) obj;
            com.igexin.push.core.d.F = 0L;
            com.igexin.b.a.c.b.a("register resp |" + oVar.a + "|" + com.igexin.push.core.d.t, new Object[0]);
            com.igexin.b.a.c.b.a("register resp cid = " + oVar.c + " device id = " + oVar.d, new Object[0]);
            if (oVar.a != com.igexin.push.core.d.t) {
                com.igexin.push.core.d.o = false;
                com.igexin.b.a.c.b.a(a + " change session : from [" + com.igexin.push.core.d.t + "] to [" + oVar.a + "]", new Object[0]);
                com.igexin.b.a.c.b.a(a + " change cid : from [" + com.igexin.push.core.d.u + "] to [" + oVar.c + "]", new Object[0]);
                if (TextUtils.isEmpty(oVar.c) || TextUtils.isEmpty(oVar.d)) {
                    com.igexin.push.core.b.i.a().a(oVar.a);
                } else {
                    com.igexin.push.core.b.i.a().a(oVar.c, oVar.d, oVar.a);
                }
                com.igexin.push.core.d.H = 0L;
            }
            com.igexin.b.a.c.b.a("loginReqAfterRegister|new session:" + com.igexin.push.core.d.t + ", cid :" + com.igexin.push.core.d.u + ", devId :" + com.igexin.push.core.d.A, new Object[0]);
            com.igexin.push.d.c.i iVarD = com.igexin.push.core.m.a().d();
            com.igexin.push.e.a aVarI = com.igexin.push.core.c.a().i();
            StringBuilder sb = new StringBuilder();
            sb.append("S-");
            sb.append(iVarD.a);
            aVarI.a(sb.toString(), iVarD, true);
        }
        return true;
    }
}

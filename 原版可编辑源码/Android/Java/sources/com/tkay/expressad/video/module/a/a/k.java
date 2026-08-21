package com.tkay.expressad.video.module.a.a;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.expressad.foundation.d.r;
import com.tkay.expressad.foundation.h.w;
import java.util.Iterator;
import java.util.List;
import org.json.JSONException;
import org.json.JSONObject;

public class k extends f {
    public static final int V = 2;
    public static final int a = 1;
    private static final String ag = "camp_position";
    protected boolean W;
    protected com.tkay.expressad.foundation.d.c X;
    protected List<com.tkay.expressad.foundation.d.c> Y;
    protected boolean Z;
    protected com.tkay.expressad.videocommon.b.a aa;
    protected com.tkay.expressad.videocommon.c.c ab;
    protected String ac;
    protected String ad;
    protected com.tkay.expressad.video.module.a.a ae;
    protected int af;
    private boolean ah = false;
    private boolean ai = false;
    private boolean aj = false;

    private static void g() {
    }

    private static void h() {
    }

    private static void j() {
    }

    private static void l() {
    }

    private static void m() {
    }

    private static void n() {
    }

    public final void a(com.tkay.expressad.foundation.d.c cVar) {
        this.X = cVar;
    }

    public final void a(List<com.tkay.expressad.foundation.d.c> list) {
        this.Y = list;
    }

    public k(com.tkay.expressad.foundation.d.c cVar, com.tkay.expressad.videocommon.b.a aVar, com.tkay.expressad.videocommon.c.c cVar2, String str, String str2, com.tkay.expressad.video.module.a.a aVar2, int i, boolean z) {
        this.Z = false;
        this.ae = new f();
        this.af = 1;
        if (!z && cVar != null && w.b(str2) && aVar != null && aVar2 != null) {
            this.X = cVar;
            this.ad = str;
            this.ac = str2;
            this.aa = aVar;
            this.ab = cVar2;
            this.ae = aVar2;
            this.W = true;
            this.af = i;
            this.Z = false;
            return;
        }
        if (!z || cVar == null || !w.b(str2) || aVar2 == null) {
            return;
        }
        this.X = cVar;
        this.ad = str;
        this.ac = str2;
        this.aa = aVar;
        this.ab = cVar2;
        this.ae = aVar2;
        this.W = true;
        this.af = i;
        this.Z = true;
    }

    @Override
    public void a(int i, Object obj) {
        super.a(i, obj);
        this.ae.a(i, obj);
    }

    public final void a(int i) {
        if (this.X != null) {
            if (i == 1 || i == 2) {
                com.tkay.expressad.video.module.b.a.a(com.tkay.core.common.b.m.a().f(), this.X, i, this.af);
            }
        }
    }

    public final void a() {
        if (!this.W || this.X == null) {
            return;
        }
        com.tkay.core.common.b.m.a().f();
        new r(r.q, this.X.aZ(), this.X.Z(), this.X.aa(), this.ac, com.tkay.expressad.foundation.h.k.a()).a(this.X.H() ? r.aQ : r.aR);
    }

    public final void a(int i, String str) {
        if (this.X != null) {
            com.tkay.core.common.b.m.a().f();
            new r(r.r, this.X.aZ(), this.X.Z(), this.X.aa(), this.ac, com.tkay.expressad.foundation.h.k.a(), i, str);
        }
    }

    public final void b(int i) {
        com.tkay.expressad.foundation.d.c cVar = this.X;
        if (cVar != null) {
            String strAh = cVar.ah();
            if (TextUtils.isEmpty(strAh)) {
                return;
            }
            if (i == 1 || i == 2) {
                if (!strAh.contains("endscreen_type")) {
                    StringBuilder sb = new StringBuilder(strAh);
                    if (strAh.contains("?")) {
                        sb.append("&endscreen_type=");
                        sb.append(i);
                    } else {
                        sb.append("?endscreen_type=");
                        sb.append(i);
                    }
                    strAh = sb.toString();
                } else if (i == 2) {
                    if (strAh.contains("endscreen_type=1")) {
                        strAh = strAh.replace("endscreen_type=1", "endscreen_type=2");
                    }
                } else if (strAh.contains("endscreen_type=2")) {
                    strAh = strAh.replace("endscreen_type=2", "endscreen_type=1");
                }
                this.X.q(strAh);
            }
        }
    }

    private static void i() {
        com.tkay.expressad.videocommon.b.c.a().a(false);
    }

    protected final void b() {
        com.tkay.expressad.videocommon.b.a aVar = this.aa;
        if (aVar != null) {
            aVar.b(true);
        }
    }

    protected final void c() {
        String str;
        try {
            if (this.X != null && this.X.j() && this.Z && !this.X.l()) {
                this.ai = true;
                return;
            }
            if (!this.W || TextUtils.isEmpty(this.X.ai()) || com.tkay.expressad.foundation.g.a.f.h == null || com.tkay.expressad.foundation.g.a.f.h.containsKey(this.X.ai()) || this.ai) {
                return;
            }
            com.tkay.expressad.foundation.g.a.f.h.put(this.X.ai(), Long.valueOf(System.currentTimeMillis()));
            String strAi = this.X.ai();
            if (this.X.n() == 1) {
                str = strAi + "&to=1&cbt=" + this.X.az() + "&tmorl=" + this.af;
            } else {
                str = strAi + "&to=0&cbt=" + this.X.az() + "&tmorl=" + this.af;
            }
            String str2 = str;
            if (this.Z) {
                if (this.X.l()) {
                    com.tkay.expressad.a.a.a(com.tkay.core.common.b.m.a().f(), this.X, this.ac, str2, false, true, com.tkay.expressad.a.a.a.j);
                }
            } else {
                com.tkay.expressad.a.a.a(com.tkay.core.common.b.m.a().f(), this.X, this.ac, str2, true);
            }
            this.ai = true;
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    protected final void d() {
        String str;
        try {
            if (!this.W || this.ah || TextUtils.isEmpty(this.X.ag())) {
                return;
            }
            this.ah = true;
            this.X.A();
            String strAg = this.X.ag();
            if (this.X.n() == 1) {
                str = strAg + "&to=1&cbt=" + this.X.az() + "&tmorl=" + this.af;
            } else {
                str = strAg + "&to=0&cbt=" + this.X.az() + "&tmorl=" + this.af;
            }
            com.tkay.expressad.a.a.a(com.tkay.core.common.b.m.a().f(), this.X, this.ac, str, false, true, com.tkay.expressad.a.a.a.i);
            com.tkay.expressad.video.module.b.a.a(com.tkay.core.common.b.m.a().f(), this.X);
            if (!this.W || com.tkay.expressad.foundation.g.a.f.k == null || TextUtils.isEmpty(this.X.aZ())) {
                return;
            }
            com.tkay.expressad.foundation.g.a.f.a(this.ac, this.X, "reward");
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    protected final void e() {
        List<String> listE;
        try {
            if (!this.W || this.aj || this.X == null) {
                return;
            }
            this.aj = true;
            if ((this.X.j() && this.Z && !this.X.l()) || this.Z || (listE = this.X.e()) == null || listE.size() <= 0) {
                return;
            }
            Iterator<String> it = listE.iterator();
            while (it.hasNext()) {
                com.tkay.expressad.a.a.a(com.tkay.core.common.b.m.a().f(), this.X, this.ac, it.next(), true);
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    protected final void f() {
        com.tkay.expressad.foundation.d.c cVar = this.X;
        if (cVar == null || TextUtils.isEmpty(cVar.K()) || this.X.L() == null || this.X.L().n() == null) {
            return;
        }
        Context contextF = com.tkay.core.common.b.m.a().f();
        com.tkay.expressad.foundation.d.c cVar2 = this.X;
        com.tkay.expressad.a.a.a(contextF, cVar2, cVar2.K(), this.X.L().n(), false);
    }

    private void k() {
        if (!this.W || com.tkay.expressad.foundation.g.a.f.k == null || TextUtils.isEmpty(this.X.aZ())) {
            return;
        }
        com.tkay.expressad.foundation.g.a.f.a(this.ac, this.X, "reward");
    }

    protected final void a(String str) {
        List<com.tkay.expressad.foundation.d.c> list;
        if (this.X == null || (list = this.Y) == null || list.size() == 0) {
            return;
        }
        try {
            JSONObject jSONObject = new JSONObject(str);
            if (jSONObject.has(ag)) {
                this.X = this.Y.get(jSONObject.getInt(ag));
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }
}

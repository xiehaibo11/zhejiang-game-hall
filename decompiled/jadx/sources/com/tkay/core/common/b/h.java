package com.tkay.core.common.b;

import android.text.TextUtils;
import com.reyun.mobdna.MobClientInfo;
import com.reyun.mobdna.MobDNA;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class h {
    private static volatile h b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f6068a = getClass().getSimpleName();
    private String c;
    private String d;
    private String e;
    private boolean f;
    private boolean g;

    public static h a() {
        if (b == null) {
            synchronized (h.class) {
                if (b == null) {
                    b = new h();
                }
            }
        }
        return b;
    }

    public final void a(int i, com.tkay.core.common.f.d dVar) {
        if (dVar != null) {
            if (i == 4 || i == 6) {
                com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(m.a().f()).b(m.a().o());
                if (m.a().G()) {
                    a(aVarB);
                    if (e()) {
                        String string = "";
                        try {
                            Map<String, Object> mapL = m.a().l();
                            if (mapL != null) {
                                string = mapL.get("user_id").toString();
                            }
                        } catch (Throwable unused) {
                        }
                        try {
                            if (aVarB.h() == 1 && i == 4) {
                                MobDNA.dna_event_ad(string, dVar.H(), dVar.k(), String.valueOf(dVar.w()), 2);
                            } else if (aVarB.f() == 1 && i == 6) {
                                MobDNA.dna_event_ad(string, dVar.H(), dVar.k(), String.valueOf(dVar.w()), 3);
                            }
                        } catch (Throwable unused2) {
                        }
                    }
                }
            }
        }
    }

    private boolean e() {
        return (TextUtils.isEmpty(this.c) || TextUtils.isEmpty(this.d) || TextUtils.isEmpty(this.e)) ? false : true;
    }

    public final String b() {
        return this.c;
    }

    public final String c() {
        return this.d;
    }

    public final String d() {
        return this.e;
    }

    public final synchronized boolean a(com.tkay.core.c.a aVar) {
        if (this.g) {
            return true;
        }
        if (aVar == null || aVar.d() != 1) {
            return false;
        }
        try {
            if (TextUtils.isEmpty(this.c) || TextUtils.isEmpty(this.d) || TextUtils.isEmpty(this.e)) {
                MobClientInfo clientInfo = MobDNA.getClientInfo(m.a().f());
                if (clientInfo == null) {
                    return false;
                }
                this.c = clientInfo.oid;
                this.d = clientInfo.appkey;
                this.e = clientInfo.rdid;
                StringBuilder sb = new StringBuilder("oid: ");
                sb.append(this.c);
                sb.append(", appkey: ");
                sb.append(this.d);
                sb.append(", rdid: ");
                sb.append(this.e);
            }
        } catch (Throwable unused) {
        }
        boolean zE = e();
        this.g = zE;
        if (!this.f && zE) {
            this.f = true;
            com.tkay.core.common.k.c.b(this.c, this.d, this.e);
        }
        return this.g;
    }
}

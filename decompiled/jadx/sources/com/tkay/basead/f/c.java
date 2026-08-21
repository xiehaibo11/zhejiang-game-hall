package com.tkay.basead.f;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.basead.a.b.b;
import com.tkay.core.common.f.i;
import com.tkay.core.common.f.r;

/* JADX INFO: loaded from: classes3.dex */
public abstract class c implements a {
    public static final String h = "extra_request_id";
    public static final String i = "extra_scenario";
    public static final String j = "extra_orientation";
    public String b = getClass().getSimpleName();
    protected Context c;
    protected i d;
    protected String e;
    protected boolean f;
    protected r g;

    public void c() {
    }

    public c(Context context, i iVar, String str, boolean z) {
        this.c = context.getApplicationContext();
        this.d = iVar;
        this.e = str;
        this.f = z;
    }

    @Override // com.tkay.basead.f.a
    public boolean a() {
        try {
            if (d()) {
                return com.tkay.basead.f.a.a.a(this.c).a(this.g, this.d, this.f);
            }
            return false;
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    private com.tkay.basead.c.e b() {
        if (TextUtils.isEmpty(this.e) || TextUtils.isEmpty(this.d.b)) {
            return com.tkay.basead.c.f.a(com.tkay.basead.c.f.i, com.tkay.basead.c.f.u);
        }
        r rVarA = com.tkay.basead.f.a.a.a(this.c).a(this.d.b, this.e);
        this.g = rVarA;
        if (rVarA == null) {
            return com.tkay.basead.c.f.a(com.tkay.basead.c.f.i, com.tkay.basead.c.f.x);
        }
        if (this.d.m == null) {
            return com.tkay.basead.c.f.a("30002", com.tkay.basead.c.f.y);
        }
        return null;
    }

    protected final boolean d() {
        if (this.c == null || TextUtils.isEmpty(this.d.b) || TextUtils.isEmpty(this.e)) {
            return false;
        }
        if (this.g != null) {
            return true;
        }
        r rVarA = com.tkay.basead.f.a.a.a(this.c).a(this.d.b, this.e);
        this.g = rVarA;
        return rVarA != null;
    }

    public final r e() {
        return this.g;
    }

    @Override // com.tkay.basead.f.a
    public final void a(final com.tkay.basead.e.c cVar) {
        com.tkay.basead.c.e eVarA;
        try {
            if (TextUtils.isEmpty(this.e) || TextUtils.isEmpty(this.d.b)) {
                eVarA = com.tkay.basead.c.f.a(com.tkay.basead.c.f.i, com.tkay.basead.c.f.u);
            } else {
                r rVarA = com.tkay.basead.f.a.a.a(this.c).a(this.d.b, this.e);
                this.g = rVarA;
                if (rVarA == null) {
                    eVarA = com.tkay.basead.c.f.a(com.tkay.basead.c.f.i, com.tkay.basead.c.f.x);
                } else {
                    eVarA = this.d.m == null ? com.tkay.basead.c.f.a("30002", com.tkay.basead.c.f.y) : null;
                }
            }
            if (eVarA != null) {
                cVar.onAdLoadFailed(eVarA);
            } else {
                com.tkay.basead.f.a.a.a(this.c).a(this.d.b, this.g, this.d, new b.InterfaceC0384b() { // from class: com.tkay.basead.f.c.1
                    @Override // com.tkay.basead.a.b.b.InterfaceC0384b
                    public final void a() {
                        com.tkay.basead.e.c cVar2 = cVar;
                        if (cVar2 != null) {
                            cVar2.onAdCacheLoaded();
                        }
                    }

                    @Override // com.tkay.basead.a.b.b.InterfaceC0384b
                    public final void a(com.tkay.basead.c.e eVar) {
                        com.tkay.basead.e.c cVar2 = cVar;
                        if (cVar2 != null) {
                            cVar2.onAdLoadFailed(eVar);
                        }
                    }
                });
            }
        } catch (Exception e) {
            e.printStackTrace();
            cVar.onAdLoadFailed(com.tkay.basead.c.f.a("-9999", e.getMessage()));
        }
    }
}

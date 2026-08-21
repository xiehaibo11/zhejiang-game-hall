package com.vivo.push.b;

import android.content.Context;
import android.text.TextUtils;

/* JADX INFO: loaded from: classes4.dex */
public class c extends com.vivo.push.o {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f7878a;
    private String b;
    private long c;
    private int d;
    private int e;
    private String f;

    public c(int i, String str) {
        super(i);
        this.c = -1L;
        this.d = -1;
        this.f7878a = null;
        this.b = str;
    }

    public final int a(Context context) {
        if (this.d == -1) {
            String str = this.b;
            if (TextUtils.isEmpty(str)) {
                com.vivo.push.util.p.a("BaseAppCommand", "pkg name is null");
                String strA = a();
                if (TextUtils.isEmpty(strA)) {
                    com.vivo.push.util.p.a("BaseAppCommand", "src is null");
                    return -1;
                }
                str = strA;
            }
            this.d = com.vivo.push.util.t.b(context, str);
            if (!TextUtils.isEmpty(this.f)) {
                this.d = 2;
            }
        }
        return this.d;
    }

    public final void a(int i) {
        this.e = i;
    }

    public final void b(String str) {
        this.f7878a = str;
    }

    @Override // com.vivo.push.o
    protected void c(com.vivo.push.a aVar) {
        aVar.a("req_id", this.f7878a);
        aVar.a("package_name", this.b);
        aVar.a("sdk_version", 323L);
        aVar.a("PUSH_APP_STATUS", this.d);
        if (TextUtils.isEmpty(this.f)) {
            return;
        }
        aVar.a("BaseAppCommand.EXTRA__HYBRIDVERSION", this.f);
    }

    @Override // com.vivo.push.o
    protected void d(com.vivo.push.a aVar) {
        this.f7878a = aVar.a("req_id");
        this.b = aVar.a("package_name");
        this.c = aVar.b("sdk_version", 0L);
        this.d = aVar.b("PUSH_APP_STATUS", 0);
        this.f = aVar.a("BaseAppCommand.EXTRA__HYBRIDVERSION");
    }

    public final int f() {
        return this.e;
    }

    public final void g() {
        this.f = null;
    }

    public final String h() {
        return this.f7878a;
    }

    @Override // com.vivo.push.o
    public String toString() {
        return "BaseAppCommand";
    }
}

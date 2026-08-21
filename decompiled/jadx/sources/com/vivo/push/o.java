package com.vivo.push;

import android.content.Intent;
import android.os.Bundle;
import android.text.TextUtils;

/* JADX INFO: loaded from: classes4.dex */
public abstract class o {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f7932a;
    private String b;

    public o(int i) {
        this.f7932a = -1;
        if (i < 0) {
            throw new IllegalArgumentException("PushCommand: the value of command must > 0.");
        }
        this.f7932a = i;
    }

    private void e(a aVar) {
        aVar.a(com.heytap.mcssdk.constant.b.y, this.f7932a);
        aVar.a("client_pkgname", this.b);
        c(aVar);
    }

    public final String a() {
        return this.b;
    }

    public final void a(Intent intent) {
        a aVarA = a.a(intent);
        if (aVarA == null) {
            com.vivo.push.util.p.b("PushCommand", "bundleWapper is null");
            return;
        }
        a(aVarA);
        Bundle bundleB = aVarA.b();
        if (bundleB != null) {
            intent.putExtras(bundleB);
        }
    }

    public final void a(a aVar) {
        String strA = p.a(this.f7932a);
        if (strA == null) {
            strA = "";
        }
        aVar.a("method", strA);
        e(aVar);
    }

    public final void a(String str) {
        this.b = str;
    }

    public final int b() {
        return this.f7932a;
    }

    public final void b(Intent intent) {
        a aVarA = a.a(intent);
        if (aVarA == null) {
            com.vivo.push.util.p.b("PushCommand", "bundleWapper is null");
            return;
        }
        aVarA.a("method", this.f7932a);
        e(aVarA);
        Bundle bundleB = aVarA.b();
        if (bundleB != null) {
            intent.putExtras(bundleB);
        }
    }

    public final void b(a aVar) {
        String strA = aVar.a();
        if (TextUtils.isEmpty(strA)) {
            strA = aVar.a("client_pkgname");
        }
        this.b = strA;
        d(aVar);
    }

    protected abstract void c(a aVar);

    public boolean c() {
        return false;
    }

    protected abstract void d(a aVar);

    public String toString() {
        return getClass().getSimpleName();
    }
}

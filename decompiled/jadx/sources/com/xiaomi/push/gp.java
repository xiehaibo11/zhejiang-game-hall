package com.xiaomi.push;

import android.os.Bundle;

/* JADX INFO: loaded from: classes4.dex */
public class gp extends gn {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f8186a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private a f455a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private b f456a;
    private String b;

    public enum a {
        chat,
        available,
        away,
        xa,
        dnd
    }

    public enum b {
        available,
        unavailable,
        subscribe,
        subscribed,
        unsubscribe,
        unsubscribed,
        error,
        probe
    }

    public gp(Bundle bundle) {
        super(bundle);
        this.f456a = b.available;
        this.b = null;
        this.f8186a = Integer.MIN_VALUE;
        this.f455a = null;
        if (bundle.containsKey("ext_pres_type")) {
            this.f456a = b.valueOf(bundle.getString("ext_pres_type"));
        }
        if (bundle.containsKey("ext_pres_status")) {
            this.b = bundle.getString("ext_pres_status");
        }
        if (bundle.containsKey("ext_pres_prio")) {
            this.f8186a = bundle.getInt("ext_pres_prio");
        }
        if (bundle.containsKey("ext_pres_mode")) {
            this.f455a = a.valueOf(bundle.getString("ext_pres_mode"));
        }
    }

    public gp(b bVar) {
        this.f456a = b.available;
        this.b = null;
        this.f8186a = Integer.MIN_VALUE;
        this.f455a = null;
        a(bVar);
    }

    @Override // com.xiaomi.push.gn
    public Bundle a() {
        Bundle bundleA = super.a();
        b bVar = this.f456a;
        if (bVar != null) {
            bundleA.putString("ext_pres_type", bVar.toString());
        }
        String str = this.b;
        if (str != null) {
            bundleA.putString("ext_pres_status", str);
        }
        int i = this.f8186a;
        if (i != Integer.MIN_VALUE) {
            bundleA.putInt("ext_pres_prio", i);
        }
        a aVar = this.f455a;
        if (aVar != null && aVar != a.available) {
            bundleA.putString("ext_pres_mode", this.f455a.toString());
        }
        return bundleA;
    }

    @Override // com.xiaomi.push.gn
    /* JADX INFO: renamed from: a */
    public String mo382a() {
        StringBuilder sb = new StringBuilder();
        sb.append("<presence");
        if (p() != null) {
            sb.append(" xmlns=\"");
            sb.append(p());
            sb.append("\"");
        }
        if (j() != null) {
            sb.append(" id=\"");
            sb.append(j());
            sb.append("\"");
        }
        if (l() != null) {
            sb.append(" to=\"");
            sb.append(gy.a(l()));
            sb.append("\"");
        }
        if (m() != null) {
            sb.append(" from=\"");
            sb.append(gy.a(m()));
            sb.append("\"");
        }
        if (k() != null) {
            sb.append(" chid=\"");
            sb.append(gy.a(k()));
            sb.append("\"");
        }
        if (this.f456a != null) {
            sb.append(" type=\"");
            sb.append(this.f456a);
            sb.append("\"");
        }
        sb.append(">");
        if (this.b != null) {
            sb.append("<status>");
            sb.append(gy.a(this.b));
            sb.append("</status>");
        }
        if (this.f8186a != Integer.MIN_VALUE) {
            sb.append("<priority>");
            sb.append(this.f8186a);
            sb.append("</priority>");
        }
        a aVar = this.f455a;
        if (aVar != null && aVar != a.available) {
            sb.append("<show>");
            sb.append(this.f455a);
            sb.append("</show>");
        }
        sb.append(o());
        gr grVarA = a();
        if (grVarA != null) {
            sb.append(grVarA.m386a());
        }
        sb.append("</presence>");
        return sb.toString();
    }

    public void a(int i) {
        if (i >= -128 && i <= 128) {
            this.f8186a = i;
            return;
        }
        throw new IllegalArgumentException("Priority value " + i + " is not valid. Valid range is -128 through 128.");
    }

    public void a(a aVar) {
        this.f455a = aVar;
    }

    public void a(b bVar) {
        if (bVar == null) {
            throw new NullPointerException("Type cannot be null");
        }
        this.f456a = bVar;
    }

    public void a(String str) {
        this.b = str;
    }
}

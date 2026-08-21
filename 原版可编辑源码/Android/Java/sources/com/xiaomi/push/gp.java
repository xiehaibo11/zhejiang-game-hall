package com.xiaomi.push;

import android.os.Bundle;

public class gp extends gn {
    private int a;
    private a a;
    private b a;
    private String b;

    public enum a {
        a,
        b,
        c,
        d,
        e
    }

    public enum b {
        a,
        b,
        c,
        d,
        e,
        f,
        g,
        h
    }

    public gp(Bundle bundle) {
        super(bundle);
        this.a = b.a;
        this.b = null;
        this.a = Integer.MIN_VALUE;
        this.a = null;
        if (bundle.containsKey("ext_pres_type")) {
            this.a = b.valueOf(bundle.getString("ext_pres_type"));
        }
        if (bundle.containsKey("ext_pres_status")) {
            this.b = bundle.getString("ext_pres_status");
        }
        if (bundle.containsKey("ext_pres_prio")) {
            this.a = bundle.getInt("ext_pres_prio");
        }
        if (bundle.containsKey("ext_pres_mode")) {
            this.a = a.valueOf(bundle.getString("ext_pres_mode"));
        }
    }

    public gp(b bVar) {
        this.a = b.a;
        this.b = null;
        this.a = Integer.MIN_VALUE;
        this.a = null;
        a(bVar);
    }

    @Override
    public Bundle a() {
        Bundle bundleA = super.a();
        b bVar = this.a;
        if (bVar != null) {
            bundleA.putString("ext_pres_type", bVar.toString());
        }
        String str = this.b;
        if (str != null) {
            bundleA.putString("ext_pres_status", str);
        }
        int i = this.a;
        if (i != Integer.MIN_VALUE) {
            bundleA.putInt("ext_pres_prio", i);
        }
        a aVar = this.a;
        if (aVar != null && aVar != a.b) {
            bundleA.putString("ext_pres_mode", this.a.toString());
        }
        return bundleA;
    }

    @Override
    public String a() {
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
        if (this.a != null) {
            sb.append(" type=\"");
            sb.append(this.a);
            sb.append("\"");
        }
        sb.append(">");
        if (this.b != null) {
            sb.append("<status>");
            sb.append(gy.a(this.b));
            sb.append("</status>");
        }
        if (this.a != Integer.MIN_VALUE) {
            sb.append("<priority>");
            sb.append(this.a);
            sb.append("</priority>");
        }
        a aVar = this.a;
        if (aVar != null && aVar != a.b) {
            sb.append("<show>");
            sb.append(this.a);
            sb.append("</show>");
        }
        sb.append(o());
        gr grVarA = a();
        if (grVarA != null) {
            sb.append(grVarA.a());
        }
        sb.append("</presence>");
        return sb.toString();
    }

    public void a(int i) {
        if (i >= -128 && i <= 128) {
            this.a = i;
            return;
        }
        throw new IllegalArgumentException("Priority value " + i + " is not valid. Valid range is -128 through 128.");
    }

    public void a(a aVar) {
        this.a = aVar;
    }

    public void a(b bVar) {
        if (bVar == null) {
            throw new NullPointerException("Type cannot be null");
        }
        this.a = bVar;
    }

    public void a(String str) {
        this.b = str;
    }
}

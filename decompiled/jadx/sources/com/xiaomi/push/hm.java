package com.xiaomi.push;

import java.io.Serializable;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public class hm implements iu<hm, Object>, Serializable, Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public List<hn> f488a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final jk f487a = new jk("ClientUploadData");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jc f8208a = new jc("", (byte) 15, 1);

    public int a() {
        List<hn> list = this.f488a;
        if (list == null) {
            return 0;
        }
        return list.size();
    }

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(hm hmVar) {
        int iA;
        if (!getClass().equals(hmVar.getClass())) {
            return getClass().getName().compareTo(hmVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(m410a()).compareTo(Boolean.valueOf(hmVar.m410a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (!m410a() || (iA = iv.a(this.f488a, hmVar.f488a)) == 0) {
            return 0;
        }
        return iA;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m409a() throws jg {
        if (this.f488a != null) {
            return;
        }
        throw new jg("Required field 'uploadDataItems' was not present! Struct: " + toString());
    }

    public void a(hn hnVar) {
        if (this.f488a == null) {
            this.f488a = new ArrayList();
        }
        this.f488a.add(hnVar);
    }

    @Override // com.xiaomi.push.iu
    public void a(jf jfVar) throws jg {
        jfVar.mo562a();
        while (true) {
            jc jcVarMo558a = jfVar.mo558a();
            if (jcVarMo558a.f8248a == 0) {
                jfVar.f();
                m409a();
                return;
            }
            if (jcVarMo558a.f823a == 1 && jcVarMo558a.f8248a == 15) {
                jd jdVarMo559a = jfVar.mo559a();
                this.f488a = new ArrayList(jdVarMo559a.f824a);
                for (int i = 0; i < jdVarMo559a.f824a; i++) {
                    hn hnVar = new hn();
                    hnVar.a(jfVar);
                    this.f488a.add(hnVar);
                }
                jfVar.i();
            } else {
                ji.a(jfVar, jcVarMo558a.f8248a);
            }
            jfVar.g();
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m410a() {
        return this.f488a != null;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m411a(hm hmVar) {
        if (hmVar == null) {
            return false;
        }
        boolean zM410a = m410a();
        boolean zM410a2 = hmVar.m410a();
        if (zM410a || zM410a2) {
            return zM410a && zM410a2 && this.f488a.equals(hmVar.f488a);
        }
        return true;
    }

    @Override // com.xiaomi.push.iu
    public void b(jf jfVar) throws jg {
        m409a();
        jfVar.a(f487a);
        if (this.f488a != null) {
            jfVar.a(f8208a);
            jfVar.a(new jd((byte) 12, this.f488a.size()));
            Iterator<hn> it = this.f488a.iterator();
            while (it.hasNext()) {
                it.next().b(jfVar);
            }
            jfVar.e();
            jfVar.b();
        }
        jfVar.c();
        jfVar.mo566a();
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof hm)) {
            return m411a((hm) obj);
        }
        return false;
    }

    public int hashCode() {
        return 0;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder("ClientUploadData(");
        sb.append("uploadDataItems:");
        List<hn> list = this.f488a;
        if (list == null) {
            sb.append("null");
        } else {
            sb.append(list);
        }
        sb.append(")");
        return sb.toString();
    }
}

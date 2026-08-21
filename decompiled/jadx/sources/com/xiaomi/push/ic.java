package com.xiaomi.push;

import java.io.Serializable;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public class ic implements iu<ic, Object>, Serializable, Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public List<hr> f613a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final jk f612a = new jk("XmPushActionCollectData");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jc f8225a = new jc("", (byte) 15, 1);

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(ic icVar) {
        int iA;
        if (!getClass().equals(icVar.getClass())) {
            return getClass().getName().compareTo(icVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(m466a()).compareTo(Boolean.valueOf(icVar.m466a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (!m466a() || (iA = iv.a(this.f613a, icVar.f613a)) == 0) {
            return 0;
        }
        return iA;
    }

    public ic a(List<hr> list) {
        this.f613a = list;
        return this;
    }

    public void a() throws jg {
        if (this.f613a != null) {
            return;
        }
        throw new jg("Required field 'dataCollectionItems' was not present! Struct: " + toString());
    }

    @Override // com.xiaomi.push.iu
    public void a(jf jfVar) throws jg {
        jfVar.mo562a();
        while (true) {
            jc jcVarMo558a = jfVar.mo558a();
            if (jcVarMo558a.f8248a == 0) {
                jfVar.f();
                a();
                return;
            }
            if (jcVarMo558a.f823a == 1 && jcVarMo558a.f8248a == 15) {
                jd jdVarMo559a = jfVar.mo559a();
                this.f613a = new ArrayList(jdVarMo559a.f824a);
                for (int i = 0; i < jdVarMo559a.f824a; i++) {
                    hr hrVar = new hr();
                    hrVar.a(jfVar);
                    this.f613a.add(hrVar);
                }
                jfVar.i();
            } else {
                ji.a(jfVar, jcVarMo558a.f8248a);
            }
            jfVar.g();
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m466a() {
        return this.f613a != null;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m467a(ic icVar) {
        if (icVar == null) {
            return false;
        }
        boolean zM466a = m466a();
        boolean zM466a2 = icVar.m466a();
        if (zM466a || zM466a2) {
            return zM466a && zM466a2 && this.f613a.equals(icVar.f613a);
        }
        return true;
    }

    @Override // com.xiaomi.push.iu
    public void b(jf jfVar) throws jg {
        a();
        jfVar.a(f612a);
        if (this.f613a != null) {
            jfVar.a(f8225a);
            jfVar.a(new jd((byte) 12, this.f613a.size()));
            Iterator<hr> it = this.f613a.iterator();
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
        if (obj != null && (obj instanceof ic)) {
            return m467a((ic) obj);
        }
        return false;
    }

    public int hashCode() {
        return 0;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder("XmPushActionCollectData(");
        sb.append("dataCollectionItems:");
        List<hr> list = this.f613a;
        if (list == null) {
            sb.append("null");
        } else {
            sb.append(list);
        }
        sb.append(")");
        return sb.toString();
    }
}

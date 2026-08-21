package com.xiaomi.push;

import java.io.Serializable;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public class ig implements iu<ig, Object>, Serializable, Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public List<hu> f649a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final jk f648a = new jk("XmPushActionCustomConfig");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jc f8229a = new jc("", (byte) 15, 1);

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(ig igVar) {
        int iA;
        if (!getClass().equals(igVar.getClass())) {
            return getClass().getName().compareTo(igVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(m488a()).compareTo(Boolean.valueOf(igVar.m488a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (!m488a() || (iA = iv.a(this.f649a, igVar.f649a)) == 0) {
            return 0;
        }
        return iA;
    }

    public List<hu> a() {
        return this.f649a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m487a() throws jg {
        if (this.f649a != null) {
            return;
        }
        throw new jg("Required field 'customConfigs' was not present! Struct: " + toString());
    }

    @Override // com.xiaomi.push.iu
    public void a(jf jfVar) throws jg {
        jfVar.mo562a();
        while (true) {
            jc jcVarMo558a = jfVar.mo558a();
            if (jcVarMo558a.f8248a == 0) {
                jfVar.f();
                m487a();
                return;
            }
            if (jcVarMo558a.f823a == 1 && jcVarMo558a.f8248a == 15) {
                jd jdVarMo559a = jfVar.mo559a();
                this.f649a = new ArrayList(jdVarMo559a.f824a);
                for (int i = 0; i < jdVarMo559a.f824a; i++) {
                    hu huVar = new hu();
                    huVar.a(jfVar);
                    this.f649a.add(huVar);
                }
                jfVar.i();
            } else {
                ji.a(jfVar, jcVarMo558a.f8248a);
            }
            jfVar.g();
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m488a() {
        return this.f649a != null;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m489a(ig igVar) {
        if (igVar == null) {
            return false;
        }
        boolean zM488a = m488a();
        boolean zM488a2 = igVar.m488a();
        if (zM488a || zM488a2) {
            return zM488a && zM488a2 && this.f649a.equals(igVar.f649a);
        }
        return true;
    }

    @Override // com.xiaomi.push.iu
    public void b(jf jfVar) throws jg {
        m487a();
        jfVar.a(f648a);
        if (this.f649a != null) {
            jfVar.a(f8229a);
            jfVar.a(new jd((byte) 12, this.f649a.size()));
            Iterator<hu> it = this.f649a.iterator();
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
        if (obj != null && (obj instanceof ig)) {
            return m489a((ig) obj);
        }
        return false;
    }

    public int hashCode() {
        return 0;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder("XmPushActionCustomConfig(");
        sb.append("customConfigs:");
        List<hu> list = this.f649a;
        if (list == null) {
            sb.append("null");
        } else {
            sb.append(list);
        }
        sb.append(")");
        return sb.toString();
    }
}

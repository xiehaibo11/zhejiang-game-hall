package com.xiaomi.push;

import java.io.Serializable;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public class ih implements iu<ih, Object>, Serializable, Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public List<hs> f651a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final jk f650a = new jk("XmPushActionNormalConfig");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jc f8230a = new jc("", (byte) 15, 1);

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(ih ihVar) {
        int iA;
        if (!getClass().equals(ihVar.getClass())) {
            return getClass().getName().compareTo(ihVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(m491a()).compareTo(Boolean.valueOf(ihVar.m491a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (!m491a() || (iA = iv.a(this.f651a, ihVar.f651a)) == 0) {
            return 0;
        }
        return iA;
    }

    public List<hs> a() {
        return this.f651a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m490a() throws jg {
        if (this.f651a != null) {
            return;
        }
        throw new jg("Required field 'normalConfigs' was not present! Struct: " + toString());
    }

    @Override // com.xiaomi.push.iu
    public void a(jf jfVar) throws jg {
        jfVar.mo562a();
        while (true) {
            jc jcVarMo558a = jfVar.mo558a();
            if (jcVarMo558a.f8248a == 0) {
                jfVar.f();
                m490a();
                return;
            }
            if (jcVarMo558a.f823a == 1 && jcVarMo558a.f8248a == 15) {
                jd jdVarMo559a = jfVar.mo559a();
                this.f651a = new ArrayList(jdVarMo559a.f824a);
                for (int i = 0; i < jdVarMo559a.f824a; i++) {
                    hs hsVar = new hs();
                    hsVar.a(jfVar);
                    this.f651a.add(hsVar);
                }
                jfVar.i();
            } else {
                ji.a(jfVar, jcVarMo558a.f8248a);
            }
            jfVar.g();
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m491a() {
        return this.f651a != null;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m492a(ih ihVar) {
        if (ihVar == null) {
            return false;
        }
        boolean zM491a = m491a();
        boolean zM491a2 = ihVar.m491a();
        if (zM491a || zM491a2) {
            return zM491a && zM491a2 && this.f651a.equals(ihVar.f651a);
        }
        return true;
    }

    @Override // com.xiaomi.push.iu
    public void b(jf jfVar) throws jg {
        m490a();
        jfVar.a(f650a);
        if (this.f651a != null) {
            jfVar.a(f8230a);
            jfVar.a(new jd((byte) 12, this.f651a.size()));
            Iterator<hs> it = this.f651a.iterator();
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
        if (obj != null && (obj instanceof ih)) {
            return m492a((ih) obj);
        }
        return false;
    }

    public int hashCode() {
        return 0;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder("XmPushActionNormalConfig(");
        sb.append("normalConfigs:");
        List<hs> list = this.f651a;
        if (list == null) {
            sb.append("null");
        } else {
            sb.append(list);
        }
        sb.append(")");
        return sb.toString();
    }
}

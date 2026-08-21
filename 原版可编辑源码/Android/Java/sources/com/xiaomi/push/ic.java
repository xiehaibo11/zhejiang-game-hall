package com.xiaomi.push;

import java.io.Serializable;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class ic implements iu<ic, Object>, Serializable, Cloneable {
    public List<hr> a;
    private static final jk a = new jk("XmPushActionCollectData");
    private static final jc a = new jc("", (byte) 15, 1);

    @Override
    public int compareTo(ic icVar) {
        int iA;
        if (!getClass().equals(icVar.getClass())) {
            return getClass().getName().compareTo(icVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(a()).compareTo(Boolean.valueOf(icVar.a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (!a() || (iA = iv.a(this.a, icVar.a)) == 0) {
            return 0;
        }
        return iA;
    }

    public ic a(List<hr> list) {
        this.a = list;
        return this;
    }

    public void a() throws jg {
        if (this.a != null) {
            return;
        }
        throw new jg("Required field 'dataCollectionItems' was not present! Struct: " + toString());
    }

    @Override
    public void a(jf jfVar) throws jg {
        jfVar.a();
        while (true) {
            jc jcVarA = jfVar.a();
            if (jcVarA.a == 0) {
                jfVar.f();
                a();
                return;
            }
            if (jcVarA.a == 1 && jcVarA.a == 15) {
                jd jdVarA = jfVar.a();
                this.a = new ArrayList(jdVarA.a);
                for (int i = 0; i < jdVarA.a; i++) {
                    hr hrVar = new hr();
                    hrVar.a(jfVar);
                    this.a.add(hrVar);
                }
                jfVar.i();
            } else {
                ji.a(jfVar, jcVarA.a);
            }
            jfVar.g();
        }
    }

    public boolean a() {
        return this.a != null;
    }

    public boolean a(ic icVar) {
        if (icVar == null) {
            return false;
        }
        boolean zA = a();
        boolean zA2 = icVar.a();
        if (zA || zA2) {
            return zA && zA2 && this.a.equals(icVar.a);
        }
        return true;
    }

    @Override
    public void b(jf jfVar) throws jg {
        a();
        jfVar.a(a);
        if (this.a != null) {
            jfVar.a(a);
            jfVar.a(new jd((byte) 12, this.a.size()));
            Iterator<hr> it = this.a.iterator();
            while (it.hasNext()) {
                it.next().b(jfVar);
            }
            jfVar.e();
            jfVar.b();
        }
        jfVar.c();
        jfVar.a();
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof ic)) {
            return a((ic) obj);
        }
        return false;
    }

    public int hashCode() {
        return 0;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder("XmPushActionCollectData(");
        sb.append("dataCollectionItems:");
        List<hr> list = this.a;
        if (list == null) {
            sb.append("null");
        } else {
            sb.append(list);
        }
        sb.append(")");
        return sb.toString();
    }
}

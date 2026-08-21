package com.xiaomi.push;

import java.io.Serializable;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class hm implements iu<hm, Object>, Serializable, Cloneable {
    public List<hn> a;
    private static final jk a = new jk("ClientUploadData");
    private static final jc a = new jc("", (byte) 15, 1);

    public int a() {
        List<hn> list = this.a;
        if (list == null) {
            return 0;
        }
        return list.size();
    }

    @Override
    public int compareTo(hm hmVar) {
        int iA;
        if (!getClass().equals(hmVar.getClass())) {
            return getClass().getName().compareTo(hmVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(a()).compareTo(Boolean.valueOf(hmVar.a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (!a() || (iA = iv.a(this.a, hmVar.a)) == 0) {
            return 0;
        }
        return iA;
    }

    public void a() throws jg {
        if (this.a != null) {
            return;
        }
        throw new jg("Required field 'uploadDataItems' was not present! Struct: " + toString());
    }

    public void a(hn hnVar) {
        if (this.a == null) {
            this.a = new ArrayList();
        }
        this.a.add(hnVar);
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
                    hn hnVar = new hn();
                    hnVar.a(jfVar);
                    this.a.add(hnVar);
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

    public boolean a(hm hmVar) {
        if (hmVar == null) {
            return false;
        }
        boolean zA = a();
        boolean zA2 = hmVar.a();
        if (zA || zA2) {
            return zA && zA2 && this.a.equals(hmVar.a);
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
            Iterator<hn> it = this.a.iterator();
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
        if (obj != null && (obj instanceof hm)) {
            return a((hm) obj);
        }
        return false;
    }

    public int hashCode() {
        return 0;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder("ClientUploadData(");
        sb.append("uploadDataItems:");
        List<hn> list = this.a;
        if (list == null) {
            sb.append("null");
        } else {
            sb.append(list);
        }
        sb.append(")");
        return sb.toString();
    }
}

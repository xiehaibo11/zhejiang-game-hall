package com.xiaomi.push;

import java.io.Serializable;
import java.util.ArrayList;
import java.util.BitSet;
import java.util.Iterator;
import java.util.List;

public class hs implements iu<hs, Object>, Serializable, Cloneable {
    public int a;
    public hp a;
    private BitSet a = new BitSet(1);
    public List<hu> a;
    private static final jk a = new jk("NormalConfig");
    private static final jc a = new jc("", (byte) 8, 1);
    private static final jc b = new jc("", (byte) 15, 2);
    private static final jc c = new jc("", (byte) 8, 3);

    public int a() {
        return this.a;
    }

    @Override
    public int compareTo(hs hsVar) {
        int iA;
        int iA2;
        int iA3;
        if (!getClass().equals(hsVar.getClass())) {
            return getClass().getName().compareTo(hsVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(a()).compareTo(Boolean.valueOf(hsVar.a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (a() && (iA3 = iv.a(this.a, hsVar.a)) != 0) {
            return iA3;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(hsVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA2 = iv.a(this.a, hsVar.a)) != 0) {
            return iA2;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(hsVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (!c() || (iA = iv.a(this.a, hsVar.a)) == 0) {
            return 0;
        }
        return iA;
    }

    public hp a() {
        return this.a;
    }

    public void a() throws jg {
        if (this.a != null) {
            return;
        }
        throw new jg("Required field 'configItems' was not present! Struct: " + toString());
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x0040  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void a(jf jfVar) throws jg {
        jfVar.a();
        while (true) {
            jc jcVarA = jfVar.a();
            if (jcVarA.a == 0) {
                break;
            }
            short s = jcVarA.a;
            if (s != 1) {
                if (s != 2) {
                    if (s == 3 && jcVarA.a == 8) {
                        this.a = hp.a(jfVar.a());
                    } else {
                        ji.a(jfVar, jcVarA.a);
                    }
                } else if (jcVarA.a == 15) {
                    jd jdVarA = jfVar.a();
                    this.a = new ArrayList(jdVarA.a);
                    for (int i = 0; i < jdVarA.a; i++) {
                        hu huVar = new hu();
                        huVar.a(jfVar);
                        this.a.add(huVar);
                    }
                    jfVar.i();
                }
            } else if (jcVarA.a == 8) {
                this.a = jfVar.a();
                a(true);
            }
            jfVar.g();
        }
        jfVar.f();
        if (a()) {
            a();
            return;
        }
        throw new jg("Required field 'version' was not found in serialized data! Struct: " + toString());
    }

    public void a(boolean z) {
        this.a.set(0, z);
    }

    public boolean a() {
        return this.a.get(0);
    }

    public boolean a(hs hsVar) {
        if (hsVar == null || this.a != hsVar.a) {
            return false;
        }
        boolean zB = b();
        boolean zB2 = hsVar.b();
        if ((zB || zB2) && !(zB && zB2 && this.a.equals(hsVar.a))) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = hsVar.c();
        if (zC || zC2) {
            return zC && zC2 && this.a.equals(hsVar.a);
        }
        return true;
    }

    @Override
    public void b(jf jfVar) throws jg {
        a();
        jfVar.a(a);
        jfVar.a(a);
        jfVar.a(this.a);
        jfVar.b();
        if (this.a != null) {
            jfVar.a(b);
            jfVar.a(new jd((byte) 12, this.a.size()));
            Iterator<hu> it = this.a.iterator();
            while (it.hasNext()) {
                it.next().b(jfVar);
            }
            jfVar.e();
            jfVar.b();
        }
        if (this.a != null && c()) {
            jfVar.a(c);
            jfVar.a(this.a.a());
            jfVar.b();
        }
        jfVar.c();
        jfVar.a();
    }

    public boolean b() {
        return this.a != null;
    }

    public boolean c() {
        return this.a != null;
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof hs)) {
            return a((hs) obj);
        }
        return false;
    }

    public int hashCode() {
        return 0;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder("NormalConfig(");
        sb.append("version:");
        sb.append(this.a);
        sb.append(", ");
        sb.append("configItems:");
        List<hu> list = this.a;
        if (list == null) {
            sb.append("null");
        } else {
            sb.append(list);
        }
        if (c()) {
            sb.append(", ");
            sb.append("type:");
            hp hpVar = this.a;
            if (hpVar == null) {
                sb.append("null");
            } else {
                sb.append(hpVar);
            }
        }
        sb.append(")");
        return sb.toString();
    }
}

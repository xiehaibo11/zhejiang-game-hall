package com.xiaomi.push;

import java.io.Serializable;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class fb implements iu<fb, Object>, Serializable, Cloneable {
    public String a;
    public List<fa> a;
    public String b;
    private static final jk a = new jk("StatsEvents");
    private static final jc a = new jc("", (byte) 11, 1);
    private static final jc b = new jc("", (byte) 11, 2);
    private static final jc c = new jc("", (byte) 15, 3);

    public fb() {
    }

    public fb(String str, List<fa> list) {
        this();
        this.a = str;
        this.a = list;
    }

    @Override
    public int compareTo(fb fbVar) {
        int iA;
        int iA2;
        int iA3;
        if (!getClass().equals(fbVar.getClass())) {
            return getClass().getName().compareTo(fbVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(a()).compareTo(Boolean.valueOf(fbVar.a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (a() && (iA3 = iv.a(this.a, fbVar.a)) != 0) {
            return iA3;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(fbVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA2 = iv.a(this.b, fbVar.b)) != 0) {
            return iA2;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(fbVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (!c() || (iA = iv.a(this.a, fbVar.a)) == 0) {
            return 0;
        }
        return iA;
    }

    public fb a(String str) {
        this.b = str;
        return this;
    }

    public void a() throws jg {
        if (this.a == null) {
            throw new jg("Required field 'uuid' was not present! Struct: " + toString());
        }
        if (this.a != null) {
            return;
        }
        throw new jg("Required field 'events' was not present! Struct: " + toString());
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x001f  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void a(jf jfVar) throws jg {
        jfVar.a();
        while (true) {
            jc jcVarA = jfVar.a();
            if (jcVarA.a == 0) {
                jfVar.f();
                a();
                return;
            }
            short s = jcVarA.a;
            if (s != 1) {
                if (s != 2) {
                    if (s == 3 && jcVarA.a == 15) {
                        jd jdVarA = jfVar.a();
                        this.a = new ArrayList(jdVarA.a);
                        for (int i = 0; i < jdVarA.a; i++) {
                            fa faVar = new fa();
                            faVar.a(jfVar);
                            this.a.add(faVar);
                        }
                        jfVar.i();
                    } else {
                        ji.a(jfVar, jcVarA.a);
                    }
                } else if (jcVarA.a == 11) {
                    this.b = jfVar.a();
                }
            } else if (jcVarA.a == 11) {
                this.a = jfVar.a();
            }
            jfVar.g();
        }
    }

    public boolean a() {
        return this.a != null;
    }

    public boolean a(fb fbVar) {
        if (fbVar == null) {
            return false;
        }
        boolean zA = a();
        boolean zA2 = fbVar.a();
        if ((zA || zA2) && !(zA && zA2 && this.a.equals(fbVar.a))) {
            return false;
        }
        boolean zB = b();
        boolean zB2 = fbVar.b();
        if ((zB || zB2) && !(zB && zB2 && this.b.equals(fbVar.b))) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = fbVar.c();
        if (zC || zC2) {
            return zC && zC2 && this.a.equals(fbVar.a);
        }
        return true;
    }

    @Override
    public void b(jf jfVar) {
        a();
        jfVar.a(a);
        if (this.a != null) {
            jfVar.a(a);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (this.b != null && b()) {
            jfVar.a(b);
            jfVar.a(this.b);
            jfVar.b();
        }
        if (this.a != null) {
            jfVar.a(c);
            jfVar.a(new jd((byte) 12, this.a.size()));
            Iterator<fa> it = this.a.iterator();
            while (it.hasNext()) {
                it.next().b(jfVar);
            }
            jfVar.e();
            jfVar.b();
        }
        jfVar.c();
        jfVar.a();
    }

    public boolean b() {
        return this.b != null;
    }

    public boolean c() {
        return this.a != null;
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof fb)) {
            return a((fb) obj);
        }
        return false;
    }

    public int hashCode() {
        return 0;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder("StatsEvents(");
        sb.append("uuid:");
        String str = this.a;
        if (str == null) {
            sb.append("null");
        } else {
            sb.append(str);
        }
        if (b()) {
            sb.append(", ");
            sb.append("operator:");
            String str2 = this.b;
            if (str2 == null) {
                sb.append("null");
            } else {
                sb.append(str2);
            }
        }
        sb.append(", ");
        sb.append("events:");
        List<fa> list = this.a;
        if (list == null) {
            sb.append("null");
        } else {
            sb.append(list);
        }
        sb.append(")");
        return sb.toString();
    }
}

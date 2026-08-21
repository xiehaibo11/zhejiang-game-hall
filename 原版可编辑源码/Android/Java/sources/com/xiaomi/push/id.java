package com.xiaomi.push;

import java.io.Serializable;
import java.util.ArrayList;
import java.util.BitSet;
import java.util.Iterator;
import java.util.List;

public class id implements iu<id, Object>, Serializable, Cloneable {
    public long a;
    public hy a;
    public String a;
    public List<String> a;
    public String b;
    public String c;
    public String d;
    public String e;
    private static final jk a = new jk("XmPushActionCommand");
    private static final jc a = new jc("", (byte) 12, 2);
    private static final jc b = new jc("", (byte) 11, 3);
    private static final jc c = new jc("", (byte) 11, 4);
    private static final jc d = new jc("", (byte) 11, 5);
    private static final jc e = new jc("", (byte) 15, 6);
    private static final jc f = new jc("", (byte) 11, 7);
    private static final jc g = new jc("", (byte) 11, 9);
    private static final jc h = new jc("", (byte) 2, 10);
    private static final jc i = new jc("", (byte) 2, 11);
    private static final jc j = new jc("", (byte) 10, 12);
    private BitSet a = new BitSet(3);
    public boolean a = false;
    public boolean b = true;

    @Override
    public int compareTo(id idVar) {
        int iA;
        int iA2;
        int iA3;
        int iA4;
        int iA5;
        int iA6;
        int iA7;
        int iA8;
        int iA9;
        int iA10;
        if (!getClass().equals(idVar.getClass())) {
            return getClass().getName().compareTo(idVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(a()).compareTo(Boolean.valueOf(idVar.a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (a() && (iA10 = iv.a(this.a, idVar.a)) != 0) {
            return iA10;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(idVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA9 = iv.a(this.a, idVar.a)) != 0) {
            return iA9;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(idVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (c() && (iA8 = iv.a(this.b, idVar.b)) != 0) {
            return iA8;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(idVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA7 = iv.a(this.c, idVar.c)) != 0) {
            return iA7;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(idVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA6 = iv.a(this.a, idVar.a)) != 0) {
            return iA6;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(idVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA5 = iv.a(this.d, idVar.d)) != 0) {
            return iA5;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(idVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA4 = iv.a(this.e, idVar.e)) != 0) {
            return iA4;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(idVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (h() && (iA3 = iv.a(this.a, idVar.a)) != 0) {
            return iA3;
        }
        int iCompareTo9 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(idVar.i()));
        if (iCompareTo9 != 0) {
            return iCompareTo9;
        }
        if (i() && (iA2 = iv.a(this.b, idVar.b)) != 0) {
            return iA2;
        }
        int iCompareTo10 = Boolean.valueOf(j()).compareTo(Boolean.valueOf(idVar.j()));
        if (iCompareTo10 != 0) {
            return iCompareTo10;
        }
        if (!j() || (iA = iv.a(this.a, idVar.a)) == 0) {
            return 0;
        }
        return iA;
    }

    public id a(String str) {
        this.a = str;
        return this;
    }

    public String a() {
        return this.c;
    }

    public void a() throws jg {
        if (this.a == null) {
            throw new jg("Required field 'id' was not present! Struct: " + toString());
        }
        if (this.b == null) {
            throw new jg("Required field 'appId' was not present! Struct: " + toString());
        }
        if (this.c != null) {
            return;
        }
        throw new jg("Required field 'cmdName' was not present! Struct: " + toString());
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:9:0x001b  */
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
            switch (jcVarA.a) {
                case 2:
                    if (jcVarA.a == 12) {
                        hy hyVar = new hy();
                        this.a = hyVar;
                        hyVar.a(jfVar);
                    } else {
                        ji.a(jfVar, jcVarA.a);
                    }
                    break;
                case 3:
                    if (jcVarA.a == 11) {
                        this.a = jfVar.a();
                        break;
                    }
                    break;
                case 4:
                    if (jcVarA.a == 11) {
                        this.b = jfVar.a();
                        break;
                    }
                    break;
                case 5:
                    if (jcVarA.a == 11) {
                        this.c = jfVar.a();
                        break;
                    }
                    break;
                case 6:
                    if (jcVarA.a == 15) {
                        jd jdVarA = jfVar.a();
                        this.a = new ArrayList(jdVarA.a);
                        for (int i2 = 0; i2 < jdVarA.a; i2++) {
                            this.a.add(jfVar.a());
                        }
                        jfVar.i();
                        break;
                    }
                    break;
                case 7:
                    if (jcVarA.a == 11) {
                        this.d = jfVar.a();
                        break;
                    }
                    break;
                case 9:
                    if (jcVarA.a == 11) {
                        this.e = jfVar.a();
                        break;
                    }
                    break;
                case 10:
                    if (jcVarA.a == 2) {
                        this.a = jfVar.a();
                        a(true);
                        break;
                    }
                    break;
                case 11:
                    if (jcVarA.a == 2) {
                        this.b = jfVar.a();
                        b(true);
                        break;
                    }
                    break;
                case 12:
                    if (jcVarA.a == 10) {
                        this.a = jfVar.a();
                        c(true);
                        break;
                    }
                    break;
            }
            jfVar.g();
        }
    }

    public void a(String str) {
        if (this.a == null) {
            this.a = new ArrayList();
        }
        this.a.add(str);
    }

    public void a(boolean z) {
        this.a.set(0, z);
    }

    public boolean a() {
        return this.a != null;
    }

    public boolean a(id idVar) {
        if (idVar == null) {
            return false;
        }
        boolean zA = a();
        boolean zA2 = idVar.a();
        if ((zA || zA2) && !(zA && zA2 && this.a.a(idVar.a))) {
            return false;
        }
        boolean zB = b();
        boolean zB2 = idVar.b();
        if ((zB || zB2) && !(zB && zB2 && this.a.equals(idVar.a))) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = idVar.c();
        if ((zC || zC2) && !(zC && zC2 && this.b.equals(idVar.b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = idVar.d();
        if ((zD || zD2) && !(zD && zD2 && this.c.equals(idVar.c))) {
            return false;
        }
        boolean zE = e();
        boolean zE2 = idVar.e();
        if ((zE || zE2) && !(zE && zE2 && this.a.equals(idVar.a))) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = idVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.d.equals(idVar.d))) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = idVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.e.equals(idVar.e))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = idVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.a == idVar.a)) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = idVar.i();
        if ((zI || zI2) && !(zI && zI2 && this.b == idVar.b)) {
            return false;
        }
        boolean zJ = j();
        boolean zJ2 = idVar.j();
        if (zJ || zJ2) {
            return zJ && zJ2 && this.a == idVar.a;
        }
        return true;
    }

    public id b(String str) {
        this.b = str;
        return this;
    }

    @Override
    public void b(jf jfVar) throws jg {
        a();
        jfVar.a(a);
        if (this.a != null && a()) {
            jfVar.a(a);
            this.a.b(jfVar);
            jfVar.b();
        }
        if (this.a != null) {
            jfVar.a(b);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (this.b != null) {
            jfVar.a(c);
            jfVar.a(this.b);
            jfVar.b();
        }
        if (this.c != null) {
            jfVar.a(d);
            jfVar.a(this.c);
            jfVar.b();
        }
        if (this.a != null && e()) {
            jfVar.a(e);
            jfVar.a(new jd((byte) 11, this.a.size()));
            Iterator<String> it = this.a.iterator();
            while (it.hasNext()) {
                jfVar.a(it.next());
            }
            jfVar.e();
            jfVar.b();
        }
        if (this.d != null && f()) {
            jfVar.a(f);
            jfVar.a(this.d);
            jfVar.b();
        }
        if (this.e != null && g()) {
            jfVar.a(g);
            jfVar.a(this.e);
            jfVar.b();
        }
        if (h()) {
            jfVar.a(h);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (i()) {
            jfVar.a(i);
            jfVar.a(this.b);
            jfVar.b();
        }
        if (j()) {
            jfVar.a(j);
            jfVar.a(this.a);
            jfVar.b();
        }
        jfVar.c();
        jfVar.a();
    }

    public void b(boolean z) {
        this.a.set(1, z);
    }

    public boolean b() {
        return this.a != null;
    }

    public id c(String str) {
        this.c = str;
        return this;
    }

    public void c(boolean z) {
        this.a.set(2, z);
    }

    public boolean c() {
        return this.b != null;
    }

    public id d(String str) {
        this.d = str;
        return this;
    }

    public boolean d() {
        return this.c != null;
    }

    public id e(String str) {
        this.e = str;
        return this;
    }

    public boolean e() {
        return this.a != null;
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof id)) {
            return a((id) obj);
        }
        return false;
    }

    public boolean f() {
        return this.d != null;
    }

    public boolean g() {
        return this.e != null;
    }

    public boolean h() {
        return this.a.get(0);
    }

    public int hashCode() {
        return 0;
    }

    public boolean i() {
        return this.a.get(1);
    }

    public boolean j() {
        return this.a.get(2);
    }

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("XmPushActionCommand(");
        if (a()) {
            sb.append("target:");
            hy hyVar = this.a;
            if (hyVar == null) {
                sb.append("null");
            } else {
                sb.append(hyVar);
            }
            z = false;
        } else {
            z = true;
        }
        if (!z) {
            sb.append(", ");
        }
        sb.append("id:");
        String str = this.a;
        if (str == null) {
            sb.append("null");
        } else {
            sb.append(str);
        }
        sb.append(", ");
        sb.append("appId:");
        String str2 = this.b;
        if (str2 == null) {
            sb.append("null");
        } else {
            sb.append(str2);
        }
        sb.append(", ");
        sb.append("cmdName:");
        String str3 = this.c;
        if (str3 == null) {
            sb.append("null");
        } else {
            sb.append(str3);
        }
        if (e()) {
            sb.append(", ");
            sb.append("cmdArgs:");
            List<String> list = this.a;
            if (list == null) {
                sb.append("null");
            } else {
                sb.append(list);
            }
        }
        if (f()) {
            sb.append(", ");
            sb.append("packageName:");
            String str4 = this.d;
            if (str4 == null) {
                sb.append("null");
            } else {
                sb.append(str4);
            }
        }
        if (g()) {
            sb.append(", ");
            sb.append("category:");
            String str5 = this.e;
            if (str5 == null) {
                sb.append("null");
            } else {
                sb.append(str5);
            }
        }
        if (h()) {
            sb.append(", ");
            sb.append("updateCache:");
            sb.append(this.a);
        }
        if (i()) {
            sb.append(", ");
            sb.append("response2Client:");
            sb.append(this.b);
        }
        if (j()) {
            sb.append(", ");
            sb.append("createdTs:");
            sb.append(this.a);
        }
        sb.append(")");
        return sb.toString();
    }
}

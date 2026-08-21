package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;

public class il implements iu<il, Object>, Serializable, Cloneable {
    public long a;
    public hy a;
    public String a;
    private BitSet a = new BitSet(1);
    public String b;
    public String c;
    public String d;
    public String e;
    private static final jk a = new jk("XmPushActionSendFeedbackResult");
    private static final jc a = new jc("", (byte) 11, 1);
    private static final jc b = new jc("", (byte) 12, 2);
    private static final jc c = new jc("", (byte) 11, 3);
    private static final jc d = new jc("", (byte) 11, 4);
    private static final jc e = new jc("", (byte) 10, 6);
    private static final jc f = new jc("", (byte) 11, 7);
    private static final jc g = new jc("", (byte) 11, 8);

    @Override
    public int compareTo(il ilVar) {
        int iA;
        int iA2;
        int iA3;
        int iA4;
        int iA5;
        int iA6;
        int iA7;
        if (!getClass().equals(ilVar.getClass())) {
            return getClass().getName().compareTo(ilVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(a()).compareTo(Boolean.valueOf(ilVar.a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (a() && (iA7 = iv.a(this.a, ilVar.a)) != 0) {
            return iA7;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(ilVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA6 = iv.a(this.a, ilVar.a)) != 0) {
            return iA6;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(ilVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (c() && (iA5 = iv.a(this.b, ilVar.b)) != 0) {
            return iA5;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(ilVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA4 = iv.a(this.c, ilVar.c)) != 0) {
            return iA4;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(ilVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA3 = iv.a(this.a, ilVar.a)) != 0) {
            return iA3;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(ilVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA2 = iv.a(this.d, ilVar.d)) != 0) {
            return iA2;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(ilVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (!g() || (iA = iv.a(this.e, ilVar.e)) == 0) {
            return 0;
        }
        return iA;
    }

    public void a() throws jg {
        if (this.b == null) {
            throw new jg("Required field 'id' was not present! Struct: " + toString());
        }
        if (this.c != null) {
            return;
        }
        throw new jg("Required field 'appId' was not present! Struct: " + toString());
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:13:0x003a  */
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
                if (e()) {
                    a();
                    return;
                }
                throw new jg("Required field 'errorCode' was not found in serialized data! Struct: " + toString());
            }
            switch (jcVarA.a) {
                case 1:
                    if (jcVarA.a != 11) {
                        ji.a(jfVar, jcVarA.a);
                    } else {
                        this.a = jfVar.a();
                    }
                    break;
                case 2:
                    if (jcVarA.a == 12) {
                        hy hyVar = new hy();
                        this.a = hyVar;
                        hyVar.a(jfVar);
                        break;
                    }
                    break;
                case 3:
                    if (jcVarA.a == 11) {
                        this.b = jfVar.a();
                        break;
                    }
                    break;
                case 4:
                    if (jcVarA.a == 11) {
                        this.c = jfVar.a();
                        break;
                    }
                    break;
                case 6:
                    if (jcVarA.a == 10) {
                        this.a = jfVar.a();
                        a(true);
                        break;
                    }
                    break;
                case 7:
                    if (jcVarA.a == 11) {
                        this.d = jfVar.a();
                        break;
                    }
                    break;
                case 8:
                    if (jcVarA.a == 11) {
                        this.e = jfVar.a();
                        break;
                    }
                    break;
            }
            jfVar.g();
        }
    }

    public void a(boolean z) {
        this.a.set(0, z);
    }

    public boolean a() {
        return this.a != null;
    }

    public boolean a(il ilVar) {
        if (ilVar == null) {
            return false;
        }
        boolean zA = a();
        boolean zA2 = ilVar.a();
        if ((zA || zA2) && !(zA && zA2 && this.a.equals(ilVar.a))) {
            return false;
        }
        boolean zB = b();
        boolean zB2 = ilVar.b();
        if ((zB || zB2) && !(zB && zB2 && this.a.a(ilVar.a))) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = ilVar.c();
        if ((zC || zC2) && !(zC && zC2 && this.b.equals(ilVar.b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = ilVar.d();
        if (((zD || zD2) && !(zD && zD2 && this.c.equals(ilVar.c))) || this.a != ilVar.a) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = ilVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.d.equals(ilVar.d))) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = ilVar.g();
        if (zG || zG2) {
            return zG && zG2 && this.e.equals(ilVar.e);
        }
        return true;
    }

    @Override
    public void b(jf jfVar) throws jg {
        a();
        jfVar.a(a);
        if (this.a != null && a()) {
            jfVar.a(a);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (this.a != null && b()) {
            jfVar.a(b);
            this.a.b(jfVar);
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
        jfVar.a(e);
        jfVar.a(this.a);
        jfVar.b();
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
        jfVar.c();
        jfVar.a();
    }

    public boolean b() {
        return this.a != null;
    }

    public boolean c() {
        return this.b != null;
    }

    public boolean d() {
        return this.c != null;
    }

    public boolean e() {
        return this.a.get(0);
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof il)) {
            return a((il) obj);
        }
        return false;
    }

    public boolean f() {
        return this.d != null;
    }

    public boolean g() {
        return this.e != null;
    }

    public int hashCode() {
        return 0;
    }

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("XmPushActionSendFeedbackResult(");
        boolean z2 = false;
        if (a()) {
            sb.append("debug:");
            String str = this.a;
            if (str == null) {
                sb.append("null");
            } else {
                sb.append(str);
            }
            z = false;
        } else {
            z = true;
        }
        if (b()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("target:");
            hy hyVar = this.a;
            if (hyVar == null) {
                sb.append("null");
            } else {
                sb.append(hyVar);
            }
        } else {
            z2 = z;
        }
        if (!z2) {
            sb.append(", ");
        }
        sb.append("id:");
        String str2 = this.b;
        if (str2 == null) {
            sb.append("null");
        } else {
            sb.append(str2);
        }
        sb.append(", ");
        sb.append("appId:");
        String str3 = this.c;
        if (str3 == null) {
            sb.append("null");
        } else {
            sb.append(str3);
        }
        sb.append(", ");
        sb.append("errorCode:");
        sb.append(this.a);
        if (f()) {
            sb.append(", ");
            sb.append("reason:");
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
        sb.append(")");
        return sb.toString();
    }
}

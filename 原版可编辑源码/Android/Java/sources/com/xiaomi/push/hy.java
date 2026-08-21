package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;

public class hy implements iu<hy, Object>, Serializable, Cloneable {
    public String a;
    public String d;
    private static final jk a = new jk("Target");
    private static final jc a = new jc("", (byte) 10, 1);
    private static final jc b = new jc("", (byte) 11, 2);
    private static final jc c = new jc("", (byte) 11, 3);
    private static final jc d = new jc("", (byte) 11, 4);
    private static final jc e = new jc("", (byte) 2, 5);
    private static final jc f = new jc("", (byte) 11, 7);
    private BitSet a = new BitSet(2);
    public long a = 5;
    public String b = "xiaomi.com";
    public String c = "";
    public boolean a = false;

    @Override
    public int compareTo(hy hyVar) {
        int iA;
        int iA2;
        int iA3;
        int iA4;
        int iA5;
        int iA6;
        if (!getClass().equals(hyVar.getClass())) {
            return getClass().getName().compareTo(hyVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(a()).compareTo(Boolean.valueOf(hyVar.a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (a() && (iA6 = iv.a(this.a, hyVar.a)) != 0) {
            return iA6;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(hyVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA5 = iv.a(this.a, hyVar.a)) != 0) {
            return iA5;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(hyVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (c() && (iA4 = iv.a(this.b, hyVar.b)) != 0) {
            return iA4;
        }
        int iCompareTo4 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(hyVar.d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (d() && (iA3 = iv.a(this.c, hyVar.c)) != 0) {
            return iA3;
        }
        int iCompareTo5 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(hyVar.e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (e() && (iA2 = iv.a(this.a, hyVar.a)) != 0) {
            return iA2;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(hyVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (!f() || (iA = iv.a(this.d, hyVar.d)) == 0) {
            return 0;
        }
        return iA;
    }

    public void a() throws jg {
        if (this.a != null) {
            return;
        }
        throw new jg("Required field 'userId' was not present! Struct: " + toString());
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x0049  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void a(jf jfVar) {
        jfVar.a();
        while (true) {
            jc jcVarA = jfVar.a();
            if (jcVarA.a == 0) {
                break;
            }
            short s = jcVarA.a;
            if (s != 1) {
                if (s != 2) {
                    if (s != 3) {
                        if (s != 4) {
                            if (s != 5) {
                                if (s == 7 && jcVarA.a == 11) {
                                    this.d = jfVar.a();
                                } else {
                                    ji.a(jfVar, jcVarA.a);
                                }
                            } else if (jcVarA.a == 2) {
                                this.a = jfVar.a();
                                b(true);
                            }
                        } else if (jcVarA.a == 11) {
                            this.c = jfVar.a();
                        }
                    } else if (jcVarA.a == 11) {
                        this.b = jfVar.a();
                    }
                } else if (jcVarA.a == 11) {
                    this.a = jfVar.a();
                }
            } else if (jcVarA.a == 10) {
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
        throw new jg("Required field 'channelId' was not found in serialized data! Struct: " + toString());
    }

    public void a(boolean z) {
        this.a.set(0, z);
    }

    public boolean a() {
        return this.a.get(0);
    }

    public boolean a(hy hyVar) {
        if (hyVar == null || this.a != hyVar.a) {
            return false;
        }
        boolean zB = b();
        boolean zB2 = hyVar.b();
        if ((zB || zB2) && !(zB && zB2 && this.a.equals(hyVar.a))) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = hyVar.c();
        if ((zC || zC2) && !(zC && zC2 && this.b.equals(hyVar.b))) {
            return false;
        }
        boolean zD = d();
        boolean zD2 = hyVar.d();
        if ((zD || zD2) && !(zD && zD2 && this.c.equals(hyVar.c))) {
            return false;
        }
        boolean zE = e();
        boolean zE2 = hyVar.e();
        if ((zE || zE2) && !(zE && zE2 && this.a == hyVar.a)) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = hyVar.f();
        if (zF || zF2) {
            return zF && zF2 && this.d.equals(hyVar.d);
        }
        return true;
    }

    @Override
    public void b(jf jfVar) {
        a();
        jfVar.a(a);
        jfVar.a(a);
        jfVar.a(this.a);
        jfVar.b();
        if (this.a != null) {
            jfVar.a(b);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (this.b != null && c()) {
            jfVar.a(c);
            jfVar.a(this.b);
            jfVar.b();
        }
        if (this.c != null && d()) {
            jfVar.a(d);
            jfVar.a(this.c);
            jfVar.b();
        }
        if (e()) {
            jfVar.a(e);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (this.d != null && f()) {
            jfVar.a(f);
            jfVar.a(this.d);
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

    public boolean c() {
        return this.b != null;
    }

    public boolean d() {
        return this.c != null;
    }

    public boolean e() {
        return this.a.get(1);
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof hy)) {
            return a((hy) obj);
        }
        return false;
    }

    public boolean f() {
        return this.d != null;
    }

    public int hashCode() {
        return 0;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder("Target(");
        sb.append("channelId:");
        sb.append(this.a);
        sb.append(", ");
        sb.append("userId:");
        String str = this.a;
        if (str == null) {
            sb.append("null");
        } else {
            sb.append(str);
        }
        if (c()) {
            sb.append(", ");
            sb.append("server:");
            String str2 = this.b;
            if (str2 == null) {
                sb.append("null");
            } else {
                sb.append(str2);
            }
        }
        if (d()) {
            sb.append(", ");
            sb.append("resource:");
            String str3 = this.c;
            if (str3 == null) {
                sb.append("null");
            } else {
                sb.append(str3);
            }
        }
        if (e()) {
            sb.append(", ");
            sb.append("isPreview:");
            sb.append(this.a);
        }
        if (f()) {
            sb.append(", ");
            sb.append("token:");
            String str4 = this.d;
            if (str4 == null) {
                sb.append("null");
            } else {
                sb.append(str4);
            }
        }
        sb.append(")");
        return sb.toString();
    }
}

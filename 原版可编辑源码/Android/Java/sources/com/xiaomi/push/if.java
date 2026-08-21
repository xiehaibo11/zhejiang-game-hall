package com.xiaomi.push;

import java.io.Serializable;
import java.nio.ByteBuffer;
import java.util.BitSet;

public class if implements iu<if, Object>, Serializable, Cloneable {
    public hj a;
    public hw a;
    public hy a;
    public String a;
    public ByteBuffer a;
    public String b;
    private static final jk a = new jk("XmPushActionContainer");
    private static final jc a = new jc("", (byte) 8, 1);
    private static final jc b = new jc("", (byte) 2, 2);
    private static final jc c = new jc("", (byte) 2, 3);
    private static final jc d = new jc("", (byte) 11, 4);
    private static final jc e = new jc("", (byte) 11, 5);
    private static final jc f = new jc("", (byte) 11, 6);
    private static final jc g = new jc("", (byte) 12, 7);
    private static final jc h = new jc("", (byte) 12, 8);
    private BitSet a = new BitSet(2);
    public boolean a = true;
    public boolean b = true;

    @Override
    public int compareTo(if ifVar) {
        int iA;
        int iA2;
        int iA3;
        int iA4;
        int iA5;
        int iA6;
        int iA7;
        int iA8;
        if (!getClass().equals(ifVar.getClass())) {
            return getClass().getName().compareTo(ifVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(a()).compareTo(Boolean.valueOf(ifVar.a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (a() && (iA8 = iv.a(this.a, ifVar.a)) != 0) {
            return iA8;
        }
        int iCompareTo2 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(ifVar.c()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (c() && (iA7 = iv.a(this.a, ifVar.a)) != 0) {
            return iA7;
        }
        int iCompareTo3 = Boolean.valueOf(d()).compareTo(Boolean.valueOf(ifVar.d()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (d() && (iA6 = iv.a(this.b, ifVar.b)) != 0) {
            return iA6;
        }
        int iCompareTo4 = Boolean.valueOf(e()).compareTo(Boolean.valueOf(ifVar.e()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (e() && (iA5 = iv.a(this.a, ifVar.a)) != 0) {
            return iA5;
        }
        int iCompareTo5 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(ifVar.f()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (f() && (iA4 = iv.a(this.a, ifVar.a)) != 0) {
            return iA4;
        }
        int iCompareTo6 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(ifVar.g()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (g() && (iA3 = iv.a(this.b, ifVar.b)) != 0) {
            return iA3;
        }
        int iCompareTo7 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(ifVar.h()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (h() && (iA2 = iv.a(this.a, ifVar.a)) != 0) {
            return iA2;
        }
        int iCompareTo8 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(ifVar.i()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (!i() || (iA = iv.a(this.a, ifVar.a)) == 0) {
            return 0;
        }
        return iA;
    }

    public hj a() {
        return this.a;
    }

    public hw a() {
        return this.a;
    }

    public if a(hj hjVar) {
        this.a = hjVar;
        return this;
    }

    public if a(hw hwVar) {
        this.a = hwVar;
        return this;
    }

    public if a(hy hyVar) {
        this.a = hyVar;
        return this;
    }

    public if a(String str) {
        this.a = str;
        return this;
    }

    public if a(ByteBuffer byteBuffer) {
        this.a = byteBuffer;
        return this;
    }

    public if a(boolean z) {
        this.a = z;
        a(true);
        return this;
    }

    public String a() {
        return this.a;
    }

    public void a() throws jg {
        if (this.a == null) {
            throw new jg("Required field 'action' was not present! Struct: " + toString());
        }
        if (this.a == null) {
            throw new jg("Required field 'pushAction' was not present! Struct: " + toString());
        }
        if (this.a != null) {
            return;
        }
        throw new jg("Required field 'target' was not present! Struct: " + toString());
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:17:0x005f  */
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
                if (!c()) {
                    throw new jg("Required field 'encryptAction' was not found in serialized data! Struct: " + toString());
                }
                if (d()) {
                    a();
                    return;
                }
                throw new jg("Required field 'isRequest' was not found in serialized data! Struct: " + toString());
            }
            switch (jcVarA.a) {
                case 1:
                    if (jcVarA.a != 8) {
                        ji.a(jfVar, jcVarA.a);
                    } else {
                        this.a = hj.a(jfVar.a());
                    }
                    break;
                case 2:
                    if (jcVarA.a == 2) {
                        this.a = jfVar.a();
                        a(true);
                        break;
                    }
                    break;
                case 3:
                    if (jcVarA.a == 2) {
                        this.b = jfVar.a();
                        b(true);
                        break;
                    }
                    break;
                case 4:
                    if (jcVarA.a == 11) {
                        this.a = jfVar.a();
                        break;
                    }
                    break;
                case 5:
                    if (jcVarA.a == 11) {
                        this.a = jfVar.a();
                        break;
                    }
                    break;
                case 6:
                    if (jcVarA.a == 11) {
                        this.b = jfVar.a();
                        break;
                    }
                    break;
                case 7:
                    if (jcVarA.a == 12) {
                        hy hyVar = new hy();
                        this.a = hyVar;
                        hyVar.a(jfVar);
                        break;
                    }
                    break;
                case 8:
                    if (jcVarA.a == 12) {
                        hw hwVar = new hw();
                        this.a = hwVar;
                        hwVar.a(jfVar);
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

    public boolean a(if ifVar) {
        if (ifVar == null) {
            return false;
        }
        boolean zA = a();
        boolean zA2 = ifVar.a();
        if (((zA || zA2) && (!zA || !zA2 || !this.a.equals(ifVar.a))) || this.a != ifVar.a || this.b != ifVar.b) {
            return false;
        }
        boolean zE = e();
        boolean zE2 = ifVar.e();
        if ((zE || zE2) && !(zE && zE2 && this.a.equals(ifVar.a))) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = ifVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.a.equals(ifVar.a))) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = ifVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.b.equals(ifVar.b))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = ifVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.a.a(ifVar.a))) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = ifVar.i();
        if (zI || zI2) {
            return zI && zI2 && this.a.a(ifVar.a);
        }
        return true;
    }

    public byte[] a() {
        a(iv.a(this.a));
        return this.a.array();
    }

    public if b(String str) {
        this.b = str;
        return this;
    }

    public if b(boolean z) {
        this.b = z;
        b(true);
        return this;
    }

    public String b() {
        return this.b;
    }

    @Override
    public void b(jf jfVar) throws jg {
        a();
        jfVar.a(a);
        if (this.a != null) {
            jfVar.a(a);
            jfVar.a(this.a.a());
            jfVar.b();
        }
        jfVar.a(b);
        jfVar.a(this.a);
        jfVar.b();
        jfVar.a(c);
        jfVar.a(this.b);
        jfVar.b();
        if (this.a != null) {
            jfVar.a(d);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (this.a != null && f()) {
            jfVar.a(e);
            jfVar.a(this.a);
            jfVar.b();
        }
        if (this.b != null && g()) {
            jfVar.a(f);
            jfVar.a(this.b);
            jfVar.b();
        }
        if (this.a != null) {
            jfVar.a(g);
            this.a.b(jfVar);
            jfVar.b();
        }
        if (this.a != null && i()) {
            jfVar.a(h);
            this.a.b(jfVar);
            jfVar.b();
        }
        jfVar.c();
        jfVar.a();
    }

    public void b(boolean z) {
        this.a.set(1, z);
    }

    public boolean b() {
        return this.a;
    }

    public boolean c() {
        return this.a.get(0);
    }

    public boolean d() {
        return this.a.get(1);
    }

    public boolean e() {
        return this.a != null;
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof if)) {
            return a((if) obj);
        }
        return false;
    }

    public boolean f() {
        return this.a != null;
    }

    public boolean g() {
        return this.b != null;
    }

    public boolean h() {
        return this.a != null;
    }

    public int hashCode() {
        return 0;
    }

    public boolean i() {
        return this.a != null;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder("XmPushActionContainer(");
        sb.append("action:");
        hj hjVar = this.a;
        if (hjVar == null) {
            sb.append("null");
        } else {
            sb.append(hjVar);
        }
        sb.append(", ");
        sb.append("encryptAction:");
        sb.append(this.a);
        sb.append(", ");
        sb.append("isRequest:");
        sb.append(this.b);
        sb.append(", ");
        sb.append("pushAction:");
        ByteBuffer byteBuffer = this.a;
        if (byteBuffer == null) {
            sb.append("null");
        } else {
            iv.a(byteBuffer, sb);
        }
        if (f()) {
            sb.append(", ");
            sb.append("appid:");
            String str = this.a;
            if (str == null) {
                sb.append("null");
            } else {
                sb.append(str);
            }
        }
        if (g()) {
            sb.append(", ");
            sb.append("packageName:");
            String str2 = this.b;
            if (str2 == null) {
                sb.append("null");
            } else {
                sb.append(str2);
            }
        }
        sb.append(", ");
        sb.append("target:");
        hy hyVar = this.a;
        if (hyVar == null) {
            sb.append("null");
        } else {
            sb.append(hyVar);
        }
        if (i()) {
            sb.append(", ");
            sb.append("metaInfo:");
            hw hwVar = this.a;
            if (hwVar == null) {
                sb.append("null");
            } else {
                sb.append(hwVar);
            }
        }
        sb.append(")");
        return sb.toString();
    }
}

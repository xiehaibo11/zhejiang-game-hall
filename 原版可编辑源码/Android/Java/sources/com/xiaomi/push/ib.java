package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;

public class ib implements iu<ib, Object>, Serializable, Cloneable {
    public int a;
    private BitSet a = new BitSet(2);
    public int b;
    private static final jk a = new jk("XmPushActionCheckClientInfo");
    private static final jc a = new jc("", (byte) 8, 1);
    private static final jc b = new jc("", (byte) 8, 2);

    @Override
    public int compareTo(ib ibVar) {
        int iA;
        int iA2;
        if (!getClass().equals(ibVar.getClass())) {
            return getClass().getName().compareTo(ibVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(a()).compareTo(Boolean.valueOf(ibVar.a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (a() && (iA2 = iv.a(this.a, ibVar.a)) != 0) {
            return iA2;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(ibVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (!b() || (iA = iv.a(this.b, ibVar.b)) == 0) {
            return 0;
        }
        return iA;
    }

    public ib a(int i) {
        this.a = i;
        a(true);
        return this;
    }

    public void a() {
    }

    /* JADX WARN: Removed duplicated region for block: B:19:0x005e  */
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
                if (s == 2 && jcVarA.a == 8) {
                    this.b = jfVar.a();
                    b(true);
                } else {
                    ji.a(jfVar, jcVarA.a);
                }
            } else if (jcVarA.a == 8) {
                this.a = jfVar.a();
                a(true);
            }
            jfVar.g();
        }
        jfVar.f();
        if (!a()) {
            throw new jg("Required field 'miscConfigVersion' was not found in serialized data! Struct: " + toString());
        }
        if (b()) {
            a();
            return;
        }
        throw new jg("Required field 'pluginConfigVersion' was not found in serialized data! Struct: " + toString());
    }

    public void a(boolean z) {
        this.a.set(0, z);
    }

    public boolean a() {
        return this.a.get(0);
    }

    public boolean a(ib ibVar) {
        return ibVar != null && this.a == ibVar.a && this.b == ibVar.b;
    }

    public ib b(int i) {
        this.b = i;
        b(true);
        return this;
    }

    @Override
    public void b(jf jfVar) {
        a();
        jfVar.a(a);
        jfVar.a(a);
        jfVar.a(this.a);
        jfVar.b();
        jfVar.a(b);
        jfVar.a(this.b);
        jfVar.b();
        jfVar.c();
        jfVar.a();
    }

    public void b(boolean z) {
        this.a.set(1, z);
    }

    public boolean b() {
        return this.a.get(1);
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof ib)) {
            return a((ib) obj);
        }
        return false;
    }

    public int hashCode() {
        return 0;
    }

    public String toString() {
        return "XmPushActionCheckClientInfo(miscConfigVersion:" + this.a + ", pluginConfigVersion:" + this.b + ")";
    }
}

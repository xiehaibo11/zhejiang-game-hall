package com.xiaomi.push;

import java.io.Serializable;
import java.util.BitSet;

public class hr implements iu<hr, Object>, Serializable, Cloneable {
    public long a;
    public hl a;
    public String a;
    private BitSet a = new BitSet(1);
    private static final jk a = new jk("DataCollectionItem");
    private static final jc a = new jc("", (byte) 10, 1);
    private static final jc b = new jc("", (byte) 8, 2);
    private static final jc c = new jc("", (byte) 11, 3);

    @Override
    public int compareTo(hr hrVar) {
        int iA;
        int iA2;
        int iA3;
        if (!getClass().equals(hrVar.getClass())) {
            return getClass().getName().compareTo(hrVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(a()).compareTo(Boolean.valueOf(hrVar.a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (a() && (iA3 = iv.a(this.a, hrVar.a)) != 0) {
            return iA3;
        }
        int iCompareTo2 = Boolean.valueOf(b()).compareTo(Boolean.valueOf(hrVar.b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (b() && (iA2 = iv.a(this.a, hrVar.a)) != 0) {
            return iA2;
        }
        int iCompareTo3 = Boolean.valueOf(c()).compareTo(Boolean.valueOf(hrVar.c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (!c() || (iA = iv.a(this.a, hrVar.a)) == 0) {
            return 0;
        }
        return iA;
    }

    public hr a(long j) {
        this.a = j;
        a(true);
        return this;
    }

    public hr a(hl hlVar) {
        this.a = hlVar;
        return this;
    }

    public hr a(String str) {
        this.a = str;
        return this;
    }

    public String a() {
        return this.a;
    }

    public void a() throws jg {
        if (this.a == null) {
            throw new jg("Required field 'collectionType' was not present! Struct: " + toString());
        }
        if (this.a != null) {
            return;
        }
        throw new jg("Required field 'content' was not present! Struct: " + toString());
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x003e  */
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
                    if (s == 3 && jcVarA.a == 11) {
                        this.a = jfVar.a();
                    } else {
                        ji.a(jfVar, jcVarA.a);
                    }
                } else if (jcVarA.a == 8) {
                    this.a = hl.a(jfVar.a());
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
        throw new jg("Required field 'collectedAt' was not found in serialized data! Struct: " + toString());
    }

    public void a(boolean z) {
        this.a.set(0, z);
    }

    public boolean a() {
        return this.a.get(0);
    }

    public boolean a(hr hrVar) {
        if (hrVar == null || this.a != hrVar.a) {
            return false;
        }
        boolean zB = b();
        boolean zB2 = hrVar.b();
        if ((zB || zB2) && !(zB && zB2 && this.a.equals(hrVar.a))) {
            return false;
        }
        boolean zC = c();
        boolean zC2 = hrVar.c();
        if (zC || zC2) {
            return zC && zC2 && this.a.equals(hrVar.a);
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
            jfVar.a(this.a.a());
            jfVar.b();
        }
        if (this.a != null) {
            jfVar.a(c);
            jfVar.a(this.a);
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
        if (obj != null && (obj instanceof hr)) {
            return a((hr) obj);
        }
        return false;
    }

    public int hashCode() {
        return 0;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder("DataCollectionItem(");
        sb.append("collectedAt:");
        sb.append(this.a);
        sb.append(", ");
        sb.append("collectionType:");
        hl hlVar = this.a;
        if (hlVar == null) {
            sb.append("null");
        } else {
            sb.append(hlVar);
        }
        sb.append(", ");
        sb.append("content:");
        String str = this.a;
        if (str == null) {
            sb.append("null");
        } else {
            sb.append(str);
        }
        sb.append(")");
        return sb.toString();
    }
}

package com.xiaomi.push;

import com.qihoo360.loader2.PluginIntent;
import java.io.Serializable;
import java.util.BitSet;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public class hn implements iu<hn, Object>, Serializable, Cloneable {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public long f490a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public String f491a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private BitSet f492a = new BitSet(3);

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public Map<String, String> f493a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public boolean f494a;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public long f495b;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    public String f496b;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    public String f497c;

    /* JADX INFO: renamed from: d, reason: collision with other field name */
    public String f498d;

    /* JADX INFO: renamed from: e, reason: collision with other field name */
    public String f499e;

    /* JADX INFO: renamed from: f, reason: collision with other field name */
    public String f500f;

    /* JADX INFO: renamed from: g, reason: collision with other field name */
    public String f501g;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final jk f489a = new jk("ClientUploadDataItem");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jc f8209a = new jc("", (byte) 11, 1);
    private static final jc b = new jc("", (byte) 11, 2);
    private static final jc c = new jc("", (byte) 11, 3);
    private static final jc d = new jc("", (byte) 10, 4);
    private static final jc e = new jc("", (byte) 10, 5);
    private static final jc f = new jc("", (byte) 2, 6);
    private static final jc g = new jc("", (byte) 11, 7);
    private static final jc h = new jc("", (byte) 11, 8);
    private static final jc i = new jc("", (byte) 11, 9);
    private static final jc j = new jc("", (byte) 13, 10);
    private static final jc k = new jc("", (byte) 11, 11);

    @Override // java.lang.Comparable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(hn hnVar) {
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
        int iA11;
        if (!getClass().equals(hnVar.getClass())) {
            return getClass().getName().compareTo(hnVar.getClass().getName());
        }
        int iCompareTo = Boolean.valueOf(m416a()).compareTo(Boolean.valueOf(hnVar.m416a()));
        if (iCompareTo != 0) {
            return iCompareTo;
        }
        if (m416a() && (iA11 = iv.a(this.f491a, hnVar.f491a)) != 0) {
            return iA11;
        }
        int iCompareTo2 = Boolean.valueOf(m418b()).compareTo(Boolean.valueOf(hnVar.m418b()));
        if (iCompareTo2 != 0) {
            return iCompareTo2;
        }
        if (m418b() && (iA10 = iv.a(this.f496b, hnVar.f496b)) != 0) {
            return iA10;
        }
        int iCompareTo3 = Boolean.valueOf(m419c()).compareTo(Boolean.valueOf(hnVar.m419c()));
        if (iCompareTo3 != 0) {
            return iCompareTo3;
        }
        if (m419c() && (iA9 = iv.a(this.f497c, hnVar.f497c)) != 0) {
            return iA9;
        }
        int iCompareTo4 = Boolean.valueOf(m420d()).compareTo(Boolean.valueOf(hnVar.m420d()));
        if (iCompareTo4 != 0) {
            return iCompareTo4;
        }
        if (m420d() && (iA8 = iv.a(this.f490a, hnVar.f490a)) != 0) {
            return iA8;
        }
        int iCompareTo5 = Boolean.valueOf(m421e()).compareTo(Boolean.valueOf(hnVar.m421e()));
        if (iCompareTo5 != 0) {
            return iCompareTo5;
        }
        if (m421e() && (iA7 = iv.a(this.f495b, hnVar.f495b)) != 0) {
            return iA7;
        }
        int iCompareTo6 = Boolean.valueOf(f()).compareTo(Boolean.valueOf(hnVar.f()));
        if (iCompareTo6 != 0) {
            return iCompareTo6;
        }
        if (f() && (iA6 = iv.a(this.f494a, hnVar.f494a)) != 0) {
            return iA6;
        }
        int iCompareTo7 = Boolean.valueOf(g()).compareTo(Boolean.valueOf(hnVar.g()));
        if (iCompareTo7 != 0) {
            return iCompareTo7;
        }
        if (g() && (iA5 = iv.a(this.f498d, hnVar.f498d)) != 0) {
            return iA5;
        }
        int iCompareTo8 = Boolean.valueOf(h()).compareTo(Boolean.valueOf(hnVar.h()));
        if (iCompareTo8 != 0) {
            return iCompareTo8;
        }
        if (h() && (iA4 = iv.a(this.f499e, hnVar.f499e)) != 0) {
            return iA4;
        }
        int iCompareTo9 = Boolean.valueOf(i()).compareTo(Boolean.valueOf(hnVar.i()));
        if (iCompareTo9 != 0) {
            return iCompareTo9;
        }
        if (i() && (iA3 = iv.a(this.f500f, hnVar.f500f)) != 0) {
            return iA3;
        }
        int iCompareTo10 = Boolean.valueOf(j()).compareTo(Boolean.valueOf(hnVar.j()));
        if (iCompareTo10 != 0) {
            return iCompareTo10;
        }
        if (j() && (iA2 = iv.a(this.f493a, hnVar.f493a)) != 0) {
            return iA2;
        }
        int iCompareTo11 = Boolean.valueOf(k()).compareTo(Boolean.valueOf(hnVar.k()));
        if (iCompareTo11 != 0) {
            return iCompareTo11;
        }
        if (!k() || (iA = iv.a(this.f501g, hnVar.f501g)) == 0) {
            return 0;
        }
        return iA;
    }

    public long a() {
        return this.f495b;
    }

    public hn a(long j2) {
        this.f490a = j2;
        m415a(true);
        return this;
    }

    public hn a(String str) {
        this.f491a = str;
        return this;
    }

    public hn a(Map<String, String> map) {
        this.f493a = map;
        return this;
    }

    public hn a(boolean z) {
        this.f494a = z;
        c(true);
        return this;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public String m412a() {
        return this.f491a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public Map<String, String> m413a() {
        return this.f493a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m414a() {
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:9:0x001d  */
    @Override // com.xiaomi.push.iu
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(com.xiaomi.push.jf r7) {
        /*
            Method dump skipped, instruction units count: 232
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.hn.a(com.xiaomi.push.jf):void");
    }

    public void a(String str, String str2) {
        if (this.f493a == null) {
            this.f493a = new HashMap();
        }
        this.f493a.put(str, str2);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m415a(boolean z) {
        this.f492a.set(0, z);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m416a() {
        return this.f491a != null;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m417a(hn hnVar) {
        if (hnVar == null) {
            return false;
        }
        boolean zM416a = m416a();
        boolean zM416a2 = hnVar.m416a();
        if ((zM416a || zM416a2) && !(zM416a && zM416a2 && this.f491a.equals(hnVar.f491a))) {
            return false;
        }
        boolean zM418b = m418b();
        boolean zM418b2 = hnVar.m418b();
        if ((zM418b || zM418b2) && !(zM418b && zM418b2 && this.f496b.equals(hnVar.f496b))) {
            return false;
        }
        boolean zM419c = m419c();
        boolean zM419c2 = hnVar.m419c();
        if ((zM419c || zM419c2) && !(zM419c && zM419c2 && this.f497c.equals(hnVar.f497c))) {
            return false;
        }
        boolean zM420d = m420d();
        boolean zM420d2 = hnVar.m420d();
        if ((zM420d || zM420d2) && !(zM420d && zM420d2 && this.f490a == hnVar.f490a)) {
            return false;
        }
        boolean zM421e = m421e();
        boolean zM421e2 = hnVar.m421e();
        if ((zM421e || zM421e2) && !(zM421e && zM421e2 && this.f495b == hnVar.f495b)) {
            return false;
        }
        boolean zF = f();
        boolean zF2 = hnVar.f();
        if ((zF || zF2) && !(zF && zF2 && this.f494a == hnVar.f494a)) {
            return false;
        }
        boolean zG = g();
        boolean zG2 = hnVar.g();
        if ((zG || zG2) && !(zG && zG2 && this.f498d.equals(hnVar.f498d))) {
            return false;
        }
        boolean zH = h();
        boolean zH2 = hnVar.h();
        if ((zH || zH2) && !(zH && zH2 && this.f499e.equals(hnVar.f499e))) {
            return false;
        }
        boolean zI = i();
        boolean zI2 = hnVar.i();
        if ((zI || zI2) && !(zI && zI2 && this.f500f.equals(hnVar.f500f))) {
            return false;
        }
        boolean zJ = j();
        boolean zJ2 = hnVar.j();
        if ((zJ || zJ2) && !(zJ && zJ2 && this.f493a.equals(hnVar.f493a))) {
            return false;
        }
        boolean zK = k();
        boolean zK2 = hnVar.k();
        if (zK || zK2) {
            return zK && zK2 && this.f501g.equals(hnVar.f501g);
        }
        return true;
    }

    public hn b(long j2) {
        this.f495b = j2;
        b(true);
        return this;
    }

    public hn b(String str) {
        this.f496b = str;
        return this;
    }

    public String b() {
        return this.f497c;
    }

    @Override // com.xiaomi.push.iu
    public void b(jf jfVar) {
        m414a();
        jfVar.a(f489a);
        if (this.f491a != null && m416a()) {
            jfVar.a(f8209a);
            jfVar.a(this.f491a);
            jfVar.b();
        }
        if (this.f496b != null && m418b()) {
            jfVar.a(b);
            jfVar.a(this.f496b);
            jfVar.b();
        }
        if (this.f497c != null && m419c()) {
            jfVar.a(c);
            jfVar.a(this.f497c);
            jfVar.b();
        }
        if (m420d()) {
            jfVar.a(d);
            jfVar.a(this.f490a);
            jfVar.b();
        }
        if (m421e()) {
            jfVar.a(e);
            jfVar.a(this.f495b);
            jfVar.b();
        }
        if (f()) {
            jfVar.a(f);
            jfVar.a(this.f494a);
            jfVar.b();
        }
        if (this.f498d != null && g()) {
            jfVar.a(g);
            jfVar.a(this.f498d);
            jfVar.b();
        }
        if (this.f499e != null && h()) {
            jfVar.a(h);
            jfVar.a(this.f499e);
            jfVar.b();
        }
        if (this.f500f != null && i()) {
            jfVar.a(i);
            jfVar.a(this.f500f);
            jfVar.b();
        }
        if (this.f493a != null && j()) {
            jfVar.a(j);
            jfVar.a(new je((byte) 11, (byte) 11, this.f493a.size()));
            for (Map.Entry<String, String> entry : this.f493a.entrySet()) {
                jfVar.a(entry.getKey());
                jfVar.a(entry.getValue());
            }
            jfVar.d();
            jfVar.b();
        }
        if (this.f501g != null && k()) {
            jfVar.a(k);
            jfVar.a(this.f501g);
            jfVar.b();
        }
        jfVar.c();
        jfVar.mo566a();
    }

    public void b(boolean z) {
        this.f492a.set(1, z);
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public boolean m418b() {
        return this.f496b != null;
    }

    public hn c(String str) {
        this.f497c = str;
        return this;
    }

    public String c() {
        return this.f499e;
    }

    public void c(boolean z) {
        this.f492a.set(2, z);
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    public boolean m419c() {
        return this.f497c != null;
    }

    public hn d(String str) {
        this.f498d = str;
        return this;
    }

    public String d() {
        return this.f500f;
    }

    /* JADX INFO: renamed from: d, reason: collision with other method in class */
    public boolean m420d() {
        return this.f492a.get(0);
    }

    public hn e(String str) {
        this.f499e = str;
        return this;
    }

    public String e() {
        return this.f501g;
    }

    /* JADX INFO: renamed from: e, reason: collision with other method in class */
    public boolean m421e() {
        return this.f492a.get(1);
    }

    public boolean equals(Object obj) {
        if (obj != null && (obj instanceof hn)) {
            return m417a((hn) obj);
        }
        return false;
    }

    public hn f(String str) {
        this.f500f = str;
        return this;
    }

    public boolean f() {
        return this.f492a.get(2);
    }

    public hn g(String str) {
        this.f501g = str;
        return this;
    }

    public boolean g() {
        return this.f498d != null;
    }

    public boolean h() {
        return this.f499e != null;
    }

    public int hashCode() {
        return 0;
    }

    public boolean i() {
        return this.f500f != null;
    }

    public boolean j() {
        return this.f493a != null;
    }

    public boolean k() {
        return this.f501g != null;
    }

    public String toString() {
        boolean z;
        StringBuilder sb = new StringBuilder("ClientUploadDataItem(");
        boolean z2 = false;
        if (m416a()) {
            sb.append("channel:");
            String str = this.f491a;
            if (str == null) {
                sb.append("null");
            } else {
                sb.append(str);
            }
            z = false;
        } else {
            z = true;
        }
        if (m418b()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("data:");
            String str2 = this.f496b;
            if (str2 == null) {
                sb.append("null");
            } else {
                sb.append(str2);
            }
            z = false;
        }
        if (m419c()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("name:");
            String str3 = this.f497c;
            if (str3 == null) {
                sb.append("null");
            } else {
                sb.append(str3);
            }
            z = false;
        }
        if (m420d()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append(PluginIntent.EXTRA_COUNTER);
            sb.append(this.f490a);
            z = false;
        }
        if (m421e()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("timestamp:");
            sb.append(this.f495b);
            z = false;
        }
        if (f()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("fromSdk:");
            sb.append(this.f494a);
            z = false;
        }
        if (g()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("category:");
            String str4 = this.f498d;
            if (str4 == null) {
                sb.append("null");
            } else {
                sb.append(str4);
            }
            z = false;
        }
        if (h()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("sourcePackage:");
            String str5 = this.f499e;
            if (str5 == null) {
                sb.append("null");
            } else {
                sb.append(str5);
            }
            z = false;
        }
        if (i()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("id:");
            String str6 = this.f500f;
            if (str6 == null) {
                sb.append("null");
            } else {
                sb.append(str6);
            }
            z = false;
        }
        if (j()) {
            if (!z) {
                sb.append(", ");
            }
            sb.append("extra:");
            Map<String, String> map = this.f493a;
            if (map == null) {
                sb.append("null");
            } else {
                sb.append(map);
            }
        } else {
            z2 = z;
        }
        if (k()) {
            if (!z2) {
                sb.append(", ");
            }
            sb.append("pkgName:");
            String str7 = this.f501g;
            if (str7 == null) {
                sb.append("null");
            } else {
                sb.append(str7);
            }
        }
        sb.append(")");
        return sb.toString();
    }
}

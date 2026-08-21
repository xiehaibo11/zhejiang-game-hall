package com.xiaomi.push;

import android.os.Bundle;
import android.os.Parcelable;
import android.text.TextUtils;
import com.xiaomi.mipush.sdk.Constants;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.TimeZone;
import java.util.concurrent.CopyOnWriteArrayList;

/* JADX INFO: loaded from: classes4.dex */
public abstract class gn {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static long f8185a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    public static final DateFormat f451a;
    private static String c;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private gr f452a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private List<gk> f453a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final Map<String, Object> f454a;
    private String d;
    private String e;
    private String f;
    private String g;
    private String h;
    private String i;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    protected static final String f450a = Locale.getDefault().getLanguage().toLowerCase();
    private static String b = null;

    static {
        SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'");
        f451a = simpleDateFormat;
        simpleDateFormat.setTimeZone(TimeZone.getTimeZone("UTC"));
        c = gy.a(5) + Constants.ACCEPT_TIME_SEPARATOR_SERVER;
        f8185a = 0L;
    }

    public gn() {
        this.d = b;
        this.e = null;
        this.f = null;
        this.g = null;
        this.h = null;
        this.i = null;
        this.f453a = new CopyOnWriteArrayList();
        this.f454a = new HashMap();
        this.f452a = null;
    }

    public gn(Bundle bundle) {
        this.d = b;
        this.e = null;
        this.f = null;
        this.g = null;
        this.h = null;
        this.i = null;
        this.f453a = new CopyOnWriteArrayList();
        this.f454a = new HashMap();
        this.f452a = null;
        this.f = bundle.getString("ext_to");
        this.g = bundle.getString("ext_from");
        this.h = bundle.getString("ext_chid");
        this.e = bundle.getString("ext_pkt_id");
        Parcelable[] parcelableArray = bundle.getParcelableArray("ext_exts");
        if (parcelableArray != null) {
            this.f453a = new ArrayList(parcelableArray.length);
            for (Parcelable parcelable : parcelableArray) {
                gk gkVarA = gk.a((Bundle) parcelable);
                if (gkVarA != null) {
                    this.f453a.add(gkVarA);
                }
            }
        }
        Bundle bundle2 = bundle.getBundle("ext_ERROR");
        if (bundle2 != null) {
            this.f452a = new gr(bundle2);
        }
    }

    public static synchronized String i() {
        StringBuilder sb;
        sb = new StringBuilder();
        sb.append(c);
        long j = f8185a;
        f8185a = 1 + j;
        sb.append(Long.toString(j));
        return sb.toString();
    }

    public static String q() {
        return f450a;
    }

    public Bundle a() {
        Bundle bundle = new Bundle();
        if (!TextUtils.isEmpty(this.d)) {
            bundle.putString("ext_ns", this.d);
        }
        if (!TextUtils.isEmpty(this.g)) {
            bundle.putString("ext_from", this.g);
        }
        if (!TextUtils.isEmpty(this.f)) {
            bundle.putString("ext_to", this.f);
        }
        if (!TextUtils.isEmpty(this.e)) {
            bundle.putString("ext_pkt_id", this.e);
        }
        if (!TextUtils.isEmpty(this.h)) {
            bundle.putString("ext_chid", this.h);
        }
        gr grVar = this.f452a;
        if (grVar != null) {
            bundle.putBundle("ext_ERROR", grVar.a());
        }
        List<gk> list = this.f453a;
        if (list != null) {
            Bundle[] bundleArr = new Bundle[list.size()];
            int i = 0;
            Iterator<gk> it = this.f453a.iterator();
            while (it.hasNext()) {
                Bundle bundleA = it.next().a();
                if (bundleA != null) {
                    bundleArr[i] = bundleA;
                    i++;
                }
            }
            bundle.putParcelableArray("ext_exts", bundleArr);
        }
        return bundle;
    }

    public gk a(String str) {
        return a(str, null);
    }

    public gk a(String str, String str2) {
        for (gk gkVar : this.f453a) {
            if (str2 == null || str2.equals(gkVar.b())) {
                if (str.equals(gkVar.m379a())) {
                    return gkVar;
                }
            }
        }
        return null;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public gr m383a() {
        return this.f452a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public synchronized Object m384a(String str) {
        if (this.f454a == null) {
            return null;
        }
        return this.f454a.get(str);
    }

    /* JADX INFO: renamed from: a */
    public abstract String mo382a();

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public synchronized Collection<gk> m385a() {
        if (this.f453a == null) {
            return Collections.emptyList();
        }
        return Collections.unmodifiableList(new ArrayList(this.f453a));
    }

    public void a(gk gkVar) {
        this.f453a.add(gkVar);
    }

    public void a(gr grVar) {
        this.f452a = grVar;
    }

    public synchronized Collection<String> b() {
        if (this.f454a == null) {
            return Collections.emptySet();
        }
        return Collections.unmodifiableSet(new HashSet(this.f454a.keySet()));
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || getClass() != obj.getClass()) {
            return false;
        }
        gn gnVar = (gn) obj;
        gr grVar = this.f452a;
        if (grVar == null ? gnVar.f452a != null : !grVar.equals(gnVar.f452a)) {
            return false;
        }
        String str = this.g;
        if (str == null ? gnVar.g != null : !str.equals(gnVar.g)) {
            return false;
        }
        if (!this.f453a.equals(gnVar.f453a)) {
            return false;
        }
        String str2 = this.e;
        if (str2 == null ? gnVar.e != null : !str2.equals(gnVar.e)) {
            return false;
        }
        String str3 = this.h;
        if (str3 == null ? gnVar.h != null : !str3.equals(gnVar.h)) {
            return false;
        }
        Map<String, Object> map = this.f454a;
        if (map == null ? gnVar.f454a != null : !map.equals(gnVar.f454a)) {
            return false;
        }
        String str4 = this.f;
        if (str4 == null ? gnVar.f != null : !str4.equals(gnVar.f)) {
            return false;
        }
        String str5 = this.d;
        String str6 = gnVar.d;
        if (str5 != null) {
            if (str5.equals(str6)) {
                return true;
            }
        } else if (str6 == null) {
            return true;
        }
        return false;
    }

    public int hashCode() {
        String str = this.d;
        int iHashCode = (str != null ? str.hashCode() : 0) * 31;
        String str2 = this.e;
        int iHashCode2 = (iHashCode + (str2 != null ? str2.hashCode() : 0)) * 31;
        String str3 = this.f;
        int iHashCode3 = (iHashCode2 + (str3 != null ? str3.hashCode() : 0)) * 31;
        String str4 = this.g;
        int iHashCode4 = (iHashCode3 + (str4 != null ? str4.hashCode() : 0)) * 31;
        String str5 = this.h;
        int iHashCode5 = (((((iHashCode4 + (str5 != null ? str5.hashCode() : 0)) * 31) + this.f453a.hashCode()) * 31) + this.f454a.hashCode()) * 31;
        gr grVar = this.f452a;
        return iHashCode5 + (grVar != null ? grVar.hashCode() : 0);
    }

    public String j() {
        if ("ID_NOT_AVAILABLE".equals(this.e)) {
            return null;
        }
        if (this.e == null) {
            this.e = i();
        }
        return this.e;
    }

    public String k() {
        return this.h;
    }

    public void k(String str) {
        this.e = str;
    }

    public String l() {
        return this.f;
    }

    public void l(String str) {
        this.h = str;
    }

    public String m() {
        return this.g;
    }

    public void m(String str) {
        this.f = str;
    }

    public String n() {
        return this.i;
    }

    public void n(String str) {
        this.g = str;
    }

    /* JADX WARN: Can't wrap try/catch for region: R(7:34|(2:91|35)|(6:93|36|84|37|80|38)|82|39|99|57) */
    /* JADX WARN: Removed duplicated region for block: B:88:0x0107 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:98:0x010d A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    protected synchronized java.lang.String o() {
        /*
            Method dump skipped, instruction units count: 303
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.gn.o():java.lang.String");
    }

    public void o(String str) {
        this.i = str;
    }

    public String p() {
        return this.d;
    }
}

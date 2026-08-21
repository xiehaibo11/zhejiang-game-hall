package com.xiaomi.push;

import android.os.Bundle;
import android.os.Parcelable;
import android.text.TextUtils;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Set;

/* JADX INFO: loaded from: classes4.dex */
public class gk implements go {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f8181a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private List<gk> f444a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private String[] f445a;
    private String b;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    private String[] f446b;
    private String c;

    public gk(String str, String str2, String[] strArr, String[] strArr2) {
        this.f445a = null;
        this.f446b = null;
        this.f444a = null;
        this.f8181a = str;
        this.b = str2;
        this.f445a = strArr;
        this.f446b = strArr2;
    }

    public gk(String str, String str2, String[] strArr, String[] strArr2, String str3, List<gk> list) {
        this.f445a = null;
        this.f446b = null;
        this.f444a = null;
        this.f8181a = str;
        this.b = str2;
        this.f445a = strArr;
        this.f446b = strArr2;
        this.c = str3;
        this.f444a = list;
    }

    public static gk a(Bundle bundle) {
        ArrayList arrayList;
        String string = bundle.getString("ext_ele_name");
        String string2 = bundle.getString("ext_ns");
        String string3 = bundle.getString("ext_text");
        Bundle bundle2 = bundle.getBundle("attributes");
        Set<String> setKeySet = bundle2.keySet();
        String[] strArr = new String[setKeySet.size()];
        String[] strArr2 = new String[setKeySet.size()];
        int i = 0;
        for (String str : setKeySet) {
            strArr[i] = str;
            strArr2[i] = bundle2.getString(str);
            i++;
        }
        if (bundle.containsKey("children")) {
            Parcelable[] parcelableArray = bundle.getParcelableArray("children");
            ArrayList arrayList2 = new ArrayList(parcelableArray.length);
            for (Parcelable parcelable : parcelableArray) {
                arrayList2.add(a((Bundle) parcelable));
            }
            arrayList = arrayList2;
        } else {
            arrayList = null;
        }
        return new gk(string, string2, strArr, strArr2, string3, arrayList);
    }

    public static Parcelable[] a(List<gk> list) {
        return a((gk[]) list.toArray(new gk[list.size()]));
    }

    public static Parcelable[] a(gk[] gkVarArr) {
        if (gkVarArr == null) {
            return null;
        }
        Parcelable[] parcelableArr = new Parcelable[gkVarArr.length];
        for (int i = 0; i < gkVarArr.length; i++) {
            parcelableArr[i] = gkVarArr[i].m378a();
        }
        return parcelableArr;
    }

    public Bundle a() {
        Bundle bundle = new Bundle();
        bundle.putString("ext_ele_name", this.f8181a);
        bundle.putString("ext_ns", this.b);
        bundle.putString("ext_text", this.c);
        Bundle bundle2 = new Bundle();
        String[] strArr = this.f445a;
        if (strArr != null && strArr.length > 0) {
            int i = 0;
            while (true) {
                String[] strArr2 = this.f445a;
                if (i >= strArr2.length) {
                    break;
                }
                bundle2.putString(strArr2[i], this.f446b[i]);
                i++;
            }
        }
        bundle.putBundle("attributes", bundle2);
        List<gk> list = this.f444a;
        if (list != null && list.size() > 0) {
            bundle.putParcelableArray("children", a(this.f444a));
        }
        return bundle;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public Parcelable m378a() {
        return a();
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public String m379a() {
        return this.f8181a;
    }

    public String a(String str) {
        if (str == null) {
            throw new IllegalArgumentException();
        }
        if (this.f445a == null) {
            return null;
        }
        int i = 0;
        while (true) {
            String[] strArr = this.f445a;
            if (i >= strArr.length) {
                return null;
            }
            if (str.equals(strArr[i])) {
                return this.f446b[i];
            }
            i++;
        }
    }

    public void a(gk gkVar) {
        if (this.f444a == null) {
            this.f444a = new ArrayList();
        }
        if (this.f444a.contains(gkVar)) {
            return;
        }
        this.f444a.add(gkVar);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m380a(String str) {
        if (!TextUtils.isEmpty(str)) {
            str = gy.a(str);
        }
        this.c = str;
    }

    public String b() {
        return this.b;
    }

    public String c() {
        return !TextUtils.isEmpty(this.c) ? gy.b(this.c) : this.c;
    }

    @Override // com.xiaomi.push.go
    public String d() {
        StringBuilder sb = new StringBuilder();
        sb.append("<");
        sb.append(this.f8181a);
        if (!TextUtils.isEmpty(this.b)) {
            sb.append(" ");
            sb.append("xmlns=");
            sb.append("\"");
            sb.append(this.b);
            sb.append("\"");
        }
        String[] strArr = this.f445a;
        if (strArr != null && strArr.length > 0) {
            for (int i = 0; i < this.f445a.length; i++) {
                if (!TextUtils.isEmpty(this.f446b[i])) {
                    sb.append(" ");
                    sb.append(this.f445a[i]);
                    sb.append("=\"");
                    sb.append(gy.a(this.f446b[i]));
                    sb.append("\"");
                }
            }
        }
        if (TextUtils.isEmpty(this.c)) {
            List<gk> list = this.f444a;
            if (list == null || list.size() <= 0) {
                sb.append("/>");
                return sb.toString();
            }
            sb.append(">");
            Iterator<gk> it = this.f444a.iterator();
            while (it.hasNext()) {
                sb.append(it.next().d());
            }
        } else {
            sb.append(">");
            sb.append(this.c);
        }
        sb.append("</");
        sb.append(this.f8181a);
        sb.append(">");
        return sb.toString();
    }

    public String toString() {
        return d();
    }
}

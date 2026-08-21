package com.xiaomi.push;

import android.os.Bundle;
import android.os.Parcelable;
import android.text.TextUtils;
import com.xiaomi.mipush.sdk.Constants;
import java.io.ByteArrayOutputStream;
import java.io.ObjectOutputStream;
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

public abstract class gn {
    private static long a;
    public static final DateFormat a;
    private static String c;
    private gr a;
    private List<gk> a;
    private final Map<String, Object> a;
    private String d;
    private String e;
    private String f;
    private String g;
    private String h;
    private String i;
    protected static final String a = Locale.getDefault().getLanguage().toLowerCase();
    private static String b = null;

    static {
        SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'");
        a = simpleDateFormat;
        simpleDateFormat.setTimeZone(TimeZone.getTimeZone("UTC"));
        c = gy.a(5) + Constants.ACCEPT_TIME_SEPARATOR_SERVER;
        a = 0L;
    }

    public gn() {
        this.d = b;
        this.e = null;
        this.f = null;
        this.g = null;
        this.h = null;
        this.i = null;
        this.a = new CopyOnWriteArrayList();
        this.a = new HashMap();
        this.a = null;
    }

    public gn(Bundle bundle) {
        this.d = b;
        this.e = null;
        this.f = null;
        this.g = null;
        this.h = null;
        this.i = null;
        this.a = new CopyOnWriteArrayList();
        this.a = new HashMap();
        this.a = null;
        this.f = bundle.getString("ext_to");
        this.g = bundle.getString("ext_from");
        this.h = bundle.getString("ext_chid");
        this.e = bundle.getString("ext_pkt_id");
        Parcelable[] parcelableArray = bundle.getParcelableArray("ext_exts");
        if (parcelableArray != null) {
            this.a = new ArrayList(parcelableArray.length);
            for (Parcelable parcelable : parcelableArray) {
                gk gkVarA = gk.a((Bundle) parcelable);
                if (gkVarA != null) {
                    this.a.add(gkVarA);
                }
            }
        }
        Bundle bundle2 = bundle.getBundle("ext_ERROR");
        if (bundle2 != null) {
            this.a = new gr(bundle2);
        }
    }

    public static synchronized String i() {
        StringBuilder sb;
        sb = new StringBuilder();
        sb.append(c);
        long j = a;
        a = 1 + j;
        sb.append(Long.toString(j));
        return sb.toString();
    }

    public static String q() {
        return a;
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
        gr grVar = this.a;
        if (grVar != null) {
            bundle.putBundle("ext_ERROR", grVar.a());
        }
        List<gk> list = this.a;
        if (list != null) {
            Bundle[] bundleArr = new Bundle[list.size()];
            int i = 0;
            Iterator<gk> it = this.a.iterator();
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
        for (gk gkVar : this.a) {
            if (str2 == null || str2.equals(gkVar.b())) {
                if (str.equals(gkVar.a())) {
                    return gkVar;
                }
            }
        }
        return null;
    }

    public gr a() {
        return this.a;
    }

    public synchronized Object a(String str) {
        if (this.a == null) {
            return null;
        }
        return this.a.get(str);
    }

    public abstract String a();

    public synchronized Collection<gk> a() {
        if (this.a == null) {
            return Collections.emptyList();
        }
        return Collections.unmodifiableList(new ArrayList(this.a));
    }

    public void a(gk gkVar) {
        this.a.add(gkVar);
    }

    public void a(gr grVar) {
        this.a = grVar;
    }

    public synchronized Collection<String> b() {
        if (this.a == null) {
            return Collections.emptySet();
        }
        return Collections.unmodifiableSet(new HashSet(this.a.keySet()));
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || getClass() != obj.getClass()) {
            return false;
        }
        gn gnVar = (gn) obj;
        gr grVar = this.a;
        if (grVar == null ? gnVar.a != null : !grVar.equals(gnVar.a)) {
            return false;
        }
        String str = this.g;
        if (str == null ? gnVar.g != null : !str.equals(gnVar.g)) {
            return false;
        }
        if (!this.a.equals(gnVar.a)) {
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
        Map<String, Object> map = this.a;
        if (map == null ? gnVar.a != null : !map.equals(gnVar.a)) {
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
        int iHashCode5 = (((((iHashCode4 + (str5 != null ? str5.hashCode() : 0)) * 31) + this.a.hashCode()) * 31) + this.a.hashCode()) * 31;
        gr grVar = this.a;
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
    */
    protected synchronized String o() {
        StringBuilder sb;
        ByteArrayOutputStream byteArrayOutputStream;
        ObjectOutputStream objectOutputStream;
        Exception e;
        String str;
        sb = new StringBuilder();
        Iterator<gk> it = a().iterator();
        while (it.hasNext()) {
            sb.append(it.next().d());
        }
        if (this.a != null && !this.a.isEmpty()) {
            sb.append("<properties xmlns=\"http://www.jivesoftware.com/xmlns/xmpp/properties\">");
            for (String str2 : b()) {
                Object objA = a(str2);
                sb.append("<property>");
                sb.append("<name>");
                sb.append(gy.a(str2));
                sb.append("</name>");
                sb.append("<value type=\"");
                if (objA instanceof Integer) {
                    sb.append("integer\">");
                    sb.append(objA);
                    str = "</value>";
                } else if (objA instanceof Long) {
                    sb.append("long\">");
                    sb.append(objA);
                    str = "</value>";
                } else if (objA instanceof Float) {
                    sb.append("float\">");
                    sb.append(objA);
                    str = "</value>";
                } else if (objA instanceof Double) {
                    sb.append("double\">");
                    sb.append(objA);
                    str = "</value>";
                } else if (objA instanceof Boolean) {
                    sb.append("boolean\">");
                    sb.append(objA);
                    str = "</value>";
                } else if (objA instanceof String) {
                    sb.append("string\">");
                    sb.append(gy.a((String) objA));
                    str = "</value>";
                } else {
                    ObjectOutputStream objectOutputStream2 = null;
                    try {
                        byteArrayOutputStream = new ByteArrayOutputStream();
                    } catch (Exception e2) {
                        e = e2;
                        byteArrayOutputStream = null;
                        objectOutputStream = null;
                    } catch (Throwable th) {
                        th = th;
                        byteArrayOutputStream = null;
                    }
                    try {
                        objectOutputStream = new ObjectOutputStream(byteArrayOutputStream);
                        try {
                            try {
                                objectOutputStream.writeObject(objA);
                                sb.append("java-object\">");
                                sb.append(gy.a(byteArrayOutputStream.toByteArray()));
                                sb.append("</value>");
                                try {
                                    objectOutputStream.close();
                                } catch (Exception unused) {
                                }
                            } catch (Throwable th2) {
                                th = th2;
                                objectOutputStream2 = objectOutputStream;
                                if (objectOutputStream2 != null) {
                                    try {
                                        objectOutputStream2.close();
                                    } catch (Exception unused2) {
                                    }
                                }
                                if (byteArrayOutputStream == null) {
                                    throw th;
                                }
                                try {
                                    byteArrayOutputStream.close();
                                    throw th;
                                } catch (Exception unused3) {
                                    throw th;
                                }
                            }
                        } catch (Exception e3) {
                            e = e3;
                            e.printStackTrace();
                            if (objectOutputStream != null) {
                                try {
                                    objectOutputStream.close();
                                } catch (Exception unused4) {
                                }
                            }
                            if (byteArrayOutputStream != null) {
                            }
                            sb.append("</property>");
                        }
                    } catch (Exception e4) {
                        e = e4;
                        objectOutputStream = null;
                        e = e;
                        e.printStackTrace();
                        if (objectOutputStream != null) {
                        }
                        if (byteArrayOutputStream != null) {
                            byteArrayOutputStream.close();
                        }
                        sb.append("</property>");
                    } catch (Throwable th3) {
                        th = th3;
                    }
                    byteArrayOutputStream.close();
                    sb.append("</property>");
                }
                sb.append(str);
                sb.append("</property>");
            }
            sb.append("</properties>");
        }
        return sb.toString();
    }

    public void o(String str) {
        this.i = str;
    }

    public String p() {
        return this.d;
    }
}

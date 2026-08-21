package com.xiaomi.push;

import android.os.Bundle;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public class gl extends gn {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private a f8182a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final Map<String, String> f447a;

    public class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final a f8183a = new a(MonitorConstants.CONNECT_TYPE_GET);
        public static final a b = new a("set");
        public static final a c = new a("result");
        public static final a d = new a("error");
        public static final a e = new a(com.heytap.mcssdk.constant.b.y);

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private String f448a;

        private a(String str) {
            this.f448a = str;
        }

        public static a a(String str) {
            if (str == null) {
                return null;
            }
            String lowerCase = str.toLowerCase();
            if (f8183a.toString().equals(lowerCase)) {
                return f8183a;
            }
            if (b.toString().equals(lowerCase)) {
                return b;
            }
            if (d.toString().equals(lowerCase)) {
                return d;
            }
            if (c.toString().equals(lowerCase)) {
                return c;
            }
            if (e.toString().equals(lowerCase)) {
                return e;
            }
            return null;
        }

        public String toString() {
            return this.f448a;
        }
    }

    public gl() {
        this.f8182a = a.f8183a;
        this.f447a = new HashMap();
    }

    public gl(Bundle bundle) {
        super(bundle);
        this.f8182a = a.f8183a;
        this.f447a = new HashMap();
        if (bundle.containsKey("ext_iq_type")) {
            this.f8182a = a.a(bundle.getString("ext_iq_type"));
        }
    }

    @Override // com.xiaomi.push.gn
    public Bundle a() {
        Bundle bundleA = super.a();
        a aVar = this.f8182a;
        if (aVar != null) {
            bundleA.putString("ext_iq_type", aVar.toString());
        }
        return bundleA;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public a m381a() {
        return this.f8182a;
    }

    @Override // com.xiaomi.push.gn
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public String mo382a() {
        String str;
        StringBuilder sb = new StringBuilder();
        sb.append("<iq ");
        if (j() != null) {
            sb.append("id=\"" + j() + "\" ");
        }
        if (l() != null) {
            sb.append("to=\"");
            sb.append(gy.a(l()));
            sb.append("\" ");
        }
        if (m() != null) {
            sb.append("from=\"");
            sb.append(gy.a(m()));
            sb.append("\" ");
        }
        if (k() != null) {
            sb.append("chid=\"");
            sb.append(gy.a(k()));
            sb.append("\" ");
        }
        for (Map.Entry<String, String> entry : this.f447a.entrySet()) {
            sb.append(gy.a(entry.getKey()));
            sb.append("=\"");
            sb.append(gy.a(entry.getValue()));
            sb.append("\" ");
        }
        if (this.f8182a == null) {
            str = "type=\"get\">";
        } else {
            sb.append("type=\"");
            sb.append(m381a());
            str = "\">";
        }
        sb.append(str);
        String strB = b();
        if (strB != null) {
            sb.append(strB);
        }
        sb.append(o());
        gr grVarA = a();
        if (grVarA != null) {
            sb.append(grVarA.m386a());
        }
        sb.append("</iq>");
        return sb.toString();
    }

    public void a(a aVar) {
        if (aVar == null) {
            aVar = a.f8183a;
        }
        this.f8182a = aVar;
    }

    public synchronized void a(Map<String, String> map) {
        this.f447a.putAll(map);
    }

    public String b() {
        return null;
    }
}

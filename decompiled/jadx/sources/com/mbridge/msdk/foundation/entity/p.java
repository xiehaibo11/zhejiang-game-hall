package com.mbridge.msdk.foundation.entity;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.tkay.expressad.foundation.d.r;
import java.io.UnsupportedEncodingException;
import java.net.URLEncoder;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: compiled from: VideoReportData.java */
/* JADX INFO: loaded from: classes2.dex */
public final class p {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static int f3396a = 1;
    public static int b;
    private String A;
    private String B;
    private String C;
    private String D;
    private String E;
    private String F;
    private String G;
    private int I;
    private String c;
    private String d;
    private String e;
    private String f;
    private int g;
    private String h;
    private int i;
    private int j;
    private int k;
    private String l;
    private String m;
    private int n;
    private int o;
    private String p;
    private long q;
    private String s;
    private String t;
    private String u;
    private String v;
    private String w;
    private String x;
    private String y;
    private String z;
    private int r = 0;
    private int H = 0;

    public final String a() {
        return this.c;
    }

    public final void a(String str) {
        this.c = str;
    }

    public final String b() {
        return this.d;
    }

    public final void b(String str) {
        this.d = str;
    }

    public final String c() {
        return this.e;
    }

    public final void c(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        this.e = URLEncoder.encode(str);
    }

    public final String d() {
        return this.F;
    }

    public final void d(String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            this.F = URLEncoder.encode(str, "utf-8");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public final String e() {
        return this.E;
    }

    public final void e(String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            this.E = URLEncoder.encode(str, "utf-8");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public final String f() {
        return this.D;
    }

    public final void f(String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            this.D = URLEncoder.encode(str, "utf-8");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public final String g() {
        return this.C;
    }

    public final void g(String str) {
        this.C = str;
    }

    public final String h() {
        return this.G;
    }

    public final void h(String str) {
        this.G = str;
    }

    public final String i() {
        return this.w;
    }

    public final void i(String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            this.w = URLEncoder.encode(str, "utf-8");
        } catch (UnsupportedEncodingException e) {
            e.printStackTrace();
        }
    }

    public final void j(String str) {
        this.y = str;
    }

    public final void a(int i) {
        this.H = i;
    }

    public final int j() {
        return this.I;
    }

    public final void b(int i) {
        this.I = i;
    }

    public p(String str, int i, int i2, int i3, int i4, String str2, String str3, int i5, String str4, int i6, String str5) {
        this.f = str;
        this.g = i;
        this.h = str5;
        this.i = i2;
        this.j = i3;
        this.k = i4;
        try {
            if (!TextUtils.isEmpty(str2)) {
                this.l = URLEncoder.encode(str2, "utf-8");
            }
        } catch (UnsupportedEncodingException e) {
            e.printStackTrace();
        }
        this.m = str3;
        this.o = i5;
        this.p = str4;
        this.q = i6;
    }

    public p() {
    }

    public p(String str, int i, String str2, String str3, String str4) {
        this.f = str;
        this.h = str4;
        this.g = i;
        if (!TextUtils.isEmpty(str2)) {
            try {
                this.l = URLEncoder.encode(str2, "utf-8");
            } catch (UnsupportedEncodingException e) {
                e.printStackTrace();
            }
        }
        this.m = str3;
    }

    public p(String str, int i, int i2, String str2, int i3, String str3, int i4, String str4) {
        this.f = str;
        this.g = i;
        this.h = str4;
        this.k = i2;
        if (!TextUtils.isEmpty(str2)) {
            try {
                this.l = URLEncoder.encode(str2, "utf-8");
            } catch (UnsupportedEncodingException e) {
                e.printStackTrace();
            }
        }
        this.o = i3;
        this.p = str3;
        this.q = i4;
    }

    public p(Context context, CampaignEx campaignEx, int i, String str, long j, int i2) {
        if (i2 == 1 || i2 == 287 || i2 == 94) {
            this.f = r.d;
        } else if (i2 == 95) {
            this.f = r.g;
        }
        int iD = v.D(context);
        this.g = iD;
        this.h = v.a(context, iD);
        this.k = campaignEx.getVideoLength();
        this.s = campaignEx.getRequestId();
        this.t = campaignEx.getRequestIdNotice();
        if (!TextUtils.isEmpty(this.l)) {
            try {
                this.l = URLEncoder.encode(campaignEx.getNoticeUrl() == null ? campaignEx.getClickURL() : campaignEx.getNoticeUrl(), "utf-8");
            } catch (UnsupportedEncodingException e) {
                e.printStackTrace();
            }
        }
        this.o = i;
        this.p = str;
        this.q = j == 0 ? campaignEx.getVideoSize() : j;
    }

    public p(String str, String str2, String str3, String str4, String str5, String str6, int i, String str7) {
        this.f = str;
        this.z = str2;
        this.x = str3;
        this.A = str4;
        this.u = str5;
        this.v = str6;
        this.g = i;
        this.h = str7;
    }

    public p(String str) {
        this.B = str;
    }

    public p(String str, int i, String str2, String str3, String str4, String str5, String str6, String str7) {
        this.f = str;
        this.o = i;
        this.p = str2;
        try {
            if (!TextUtils.isEmpty(str3)) {
                this.D = URLEncoder.encode(str3, "utf-8");
            }
        } catch (UnsupportedEncodingException e) {
            e.printStackTrace();
        }
        this.v = str4;
        this.u = str5;
        this.m = str6;
        this.C = str7;
        if (Integer.valueOf(str2).intValue() > com.mbridge.msdk.foundation.same.a.v) {
            this.o = 2;
        }
    }

    public p(String str, String str2, String str3, String str4, String str5, int i) {
        this.f = str;
        this.v = str2;
        this.s = str3;
        this.t = str4;
        this.u = str5;
        this.g = i;
    }

    public p(String str, String str2, String str3, String str4, String str5, int i, int i2, String str6) {
        this.f = str;
        this.v = str2;
        this.s = str3;
        this.t = str4;
        this.u = str5;
        this.g = i;
        this.m = str6;
        this.n = i2;
    }

    public final String k() {
        return this.s;
    }

    public final void k(String str) {
        this.s = str;
    }

    public final String l() {
        return this.t;
    }

    public final void l(String str) {
        this.t = str;
    }

    public final String m() {
        return this.u;
    }

    public final void m(String str) {
        this.u = str;
    }

    public final String n() {
        return this.v;
    }

    public final void n(String str) {
        this.v = str;
    }

    public final String o() {
        return this.f;
    }

    public final void o(String str) {
        this.f = str;
    }

    public final int p() {
        return this.j;
    }

    public final int q() {
        return this.k;
    }

    public final String r() {
        return this.l;
    }

    public final String s() {
        return TextUtils.isEmpty(this.m) ? "" : this.m;
    }

    public final void p(String str) {
        this.m = str;
    }

    public final String t() {
        return this.p;
    }

    public final void q(String str) {
        this.p = str;
    }

    public final long u() {
        return this.q;
    }

    public final int v() {
        return this.g;
    }

    public final void c(int i) {
        this.g = i;
    }

    public final String w() {
        return this.h;
    }

    public final void r(String str) {
        this.h = str;
    }

    public final int x() {
        return this.i;
    }

    public final int y() {
        return this.o;
    }

    public final void d(int i) {
        this.o = i;
    }

    public static String a(List<p> list) {
        if (list == null || list.size() <= 0) {
            return null;
        }
        StringBuffer stringBuffer = new StringBuffer();
        for (p pVar : list) {
            if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
                stringBuffer.append("key=" + pVar.f + "&");
                stringBuffer.append("network_type=" + pVar.g + "&");
                stringBuffer.append("network_str=" + pVar.h + "&");
                stringBuffer.append("reason=" + pVar.s() + "&");
                stringBuffer.append("cid=" + pVar.v + "&");
                stringBuffer.append("video_url=" + pVar.E + "&");
                stringBuffer.append("rid=" + pVar.s + "&");
                stringBuffer.append("rid_n=" + pVar.t + "&");
                stringBuffer.append("unit_id=" + pVar.u + "&");
                StringBuilder sb = new StringBuilder();
                sb.append("offer_url=");
                sb.append(pVar.l);
                stringBuffer.append(sb.toString());
                stringBuffer.append("\n");
            } else {
                stringBuffer.append("key=" + pVar.f + "&");
                stringBuffer.append("reason=" + pVar.s() + "&");
                stringBuffer.append("cid=" + pVar.v + "&");
                stringBuffer.append("video_url=" + pVar.E + "&");
                stringBuffer.append("rid=" + pVar.s + "&");
                stringBuffer.append("rid_n=" + pVar.t + "&");
                stringBuffer.append("unit_id=" + pVar.u + "&");
                StringBuilder sb2 = new StringBuilder();
                sb2.append("offer_url=");
                sb2.append(pVar.l);
                stringBuffer.append(sb2.toString());
                stringBuffer.append("\n");
            }
        }
        return stringBuffer.toString();
    }

    public static String b(List<p> list) {
        if (list == null || list.size() <= 0) {
            return null;
        }
        StringBuffer stringBuffer = new StringBuffer();
        Iterator<p> it = list.iterator();
        while (it.hasNext()) {
            p next = it.next();
            Iterator<p> it2 = it;
            if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
                stringBuffer.append("key=" + next.f + "&");
                stringBuffer.append("network_type=" + next.g + "&");
                stringBuffer.append("network_str=" + next.h + "&");
                stringBuffer.append("result=" + next.o + "&");
                stringBuffer.append("duration=" + next.p + "&");
                stringBuffer.append("video_size=" + next.q + "&");
                stringBuffer.append("video_length=" + next.k + "&");
                stringBuffer.append("reason=" + next.s() + "&");
                stringBuffer.append("cid=" + next.v + "&");
                stringBuffer.append("video_url=" + next.E + "&");
                stringBuffer.append("rid=" + next.s + "&");
                stringBuffer.append("rid_n=" + next.t + "&");
                stringBuffer.append("unit_id=" + next.u + "&");
                stringBuffer.append("offer_url=" + next.l + "&");
            } else {
                stringBuffer.append("key=" + next.f + "&");
                stringBuffer.append("result=" + next.o + "&");
                stringBuffer.append("duration=" + next.p + "&");
                stringBuffer.append("video_size=" + next.q + "&");
                stringBuffer.append("video_length=" + next.k + "&");
                stringBuffer.append("reason=" + next.s() + "&");
                stringBuffer.append("cid=" + next.v + "&");
                stringBuffer.append("video_url=" + next.E + "&");
                stringBuffer.append("rid=" + next.s + "&");
                stringBuffer.append("rid_n=" + next.t + "&");
                stringBuffer.append("unit_id=" + next.u + "&");
                stringBuffer.append("offer_url=" + next.l + "&");
            }
            if (next.c != null) {
                stringBuffer.append("resource_type=" + next.c + "&");
            }
            if (next.e != null) {
                stringBuffer.append("creative=" + next.e + "&");
            }
            stringBuffer.append("\n");
            it = it2;
        }
        return stringBuffer.toString();
    }

    public static String a(p pVar) {
        if (pVar == null) {
            return null;
        }
        StringBuffer stringBuffer = new StringBuffer();
        stringBuffer.append("key=" + pVar.f + "&");
        stringBuffer.append("cid=" + pVar.v + "&");
        stringBuffer.append("unit_id=" + pVar.u + "&");
        stringBuffer.append("network_type=" + pVar.g + "&");
        stringBuffer.append("rid=" + pVar.s + "&");
        stringBuffer.append("rid_n=" + pVar.t + "&");
        StringBuilder sb = new StringBuilder();
        sb.append("reason=");
        sb.append(pVar.s());
        stringBuffer.append(sb.toString());
        stringBuffer.append("\n");
        return stringBuffer.toString();
    }

    public static String b(p pVar) {
        if (pVar == null) {
            return null;
        }
        StringBuffer stringBuffer = new StringBuffer();
        stringBuffer.append("key=" + pVar.f + "&");
        stringBuffer.append("cid=" + pVar.v + "&");
        stringBuffer.append("unit_id=" + pVar.u + "&");
        stringBuffer.append("network_type=" + pVar.g + "&");
        stringBuffer.append("mraid_type=" + pVar.H + "&");
        stringBuffer.append("rid_n=" + pVar.t + "&");
        StringBuilder sb = new StringBuilder();
        sb.append("rid=");
        sb.append(pVar.s);
        stringBuffer.append(sb.toString());
        stringBuffer.append("\n");
        return stringBuffer.toString();
    }

    public static String c(p pVar) {
        if (pVar == null) {
            return null;
        }
        StringBuffer stringBuffer = new StringBuffer();
        stringBuffer.append("key=" + pVar.f + "&");
        stringBuffer.append("result=" + pVar.o + "&");
        stringBuffer.append("duration=" + pVar.p + "&");
        stringBuffer.append("cid=" + pVar.v + "&");
        stringBuffer.append("reason=" + pVar.s() + "&");
        stringBuffer.append("ad_type=" + pVar.G + "&");
        stringBuffer.append("unit_id=" + pVar.u + "&");
        stringBuffer.append("devid=" + pVar.d + "&");
        stringBuffer.append("mraid_type=" + pVar.H + "&");
        stringBuffer.append("network_type=" + pVar.g + "&");
        if (!TextUtils.isEmpty(pVar.D)) {
            stringBuffer.append("endcard_url=" + pVar.D + "&");
        }
        if (!TextUtils.isEmpty(pVar.C)) {
            stringBuffer.append("type=" + pVar.C + "&");
        }
        if (pVar.c != null) {
            stringBuffer.append("resource_type=" + pVar.c + "&");
        }
        stringBuffer.append("rid_n=" + pVar.t + "&");
        StringBuilder sb = new StringBuilder();
        sb.append("rid=");
        sb.append(pVar.s);
        stringBuffer.append(sb.toString());
        stringBuffer.append("\n");
        return stringBuffer.toString();
    }

    public static String d(p pVar) {
        if (pVar == null) {
            return null;
        }
        StringBuffer stringBuffer = new StringBuffer();
        stringBuffer.append("key=" + pVar.f + "&");
        stringBuffer.append("result=" + pVar.o + "&");
        stringBuffer.append("duration=" + pVar.p + "&");
        stringBuffer.append("cid=" + pVar.v + "&");
        stringBuffer.append("unit_id=" + pVar.u + "&");
        stringBuffer.append("reason=" + pVar.s() + "&");
        stringBuffer.append("ad_type=" + pVar.G + "&");
        stringBuffer.append("rid=" + pVar.s + "&");
        stringBuffer.append("rid_n=" + pVar.t + "&");
        stringBuffer.append("network_type=" + pVar.g + "&");
        stringBuffer.append("mraid_type=" + pVar.H + "&");
        stringBuffer.append("devid=" + pVar.d + "&");
        if (pVar.c != null) {
            stringBuffer.append("resource_type=" + pVar.c + "&");
        }
        if (!TextUtils.isEmpty(pVar.D)) {
            stringBuffer.append("endcard_url=" + pVar.D + "&");
        }
        stringBuffer.append("type=" + pVar.C);
        return stringBuffer.toString();
    }

    public static String c(List<p> list) {
        if (list == null || list.size() <= 0) {
            return null;
        }
        StringBuffer stringBuffer = new StringBuffer();
        for (p pVar : list) {
            stringBuffer.append("key=" + pVar.f + "&");
            stringBuffer.append("result=" + pVar.o + "&");
            stringBuffer.append("duration=" + pVar.p + "&");
            stringBuffer.append("endcard_url=" + pVar.D + "&");
            stringBuffer.append("cid=" + pVar.v + "&");
            stringBuffer.append("unit_id=" + pVar.u + "&");
            stringBuffer.append("reason=" + pVar.s() + "&");
            stringBuffer.append("ad_type=" + pVar.G + "&");
            stringBuffer.append("rid=" + pVar.s + "&");
            stringBuffer.append("rid_n=" + pVar.t + "&");
            stringBuffer.append("type=" + pVar.C + "&");
            StringBuilder sb = new StringBuilder();
            sb.append("adspace_t=");
            sb.append(pVar.I);
            stringBuffer.append(sb.toString());
            stringBuffer.append("\n");
        }
        return stringBuffer.toString();
    }

    public static String d(List<p> list) {
        if (list == null || list.size() <= 0) {
            return null;
        }
        StringBuffer stringBuffer = new StringBuffer();
        for (p pVar : list) {
            if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
                stringBuffer.append("key=" + pVar.f + "&");
                stringBuffer.append("network_type=" + pVar.g + "&");
                stringBuffer.append("result=" + pVar.o + "&");
                stringBuffer.append("cid=" + pVar.v + "&");
                stringBuffer.append("template_url=" + pVar.w + "&");
                stringBuffer.append("reason=" + pVar.s() + "&");
                stringBuffer.append("rid=" + pVar.s + "&");
                stringBuffer.append("rid_n=" + pVar.t + "&");
                stringBuffer.append("unit_id=" + pVar.u + "&");
                stringBuffer.append("\n");
            } else {
                stringBuffer.append("key=" + pVar.f + "&");
                stringBuffer.append("result=" + pVar.o + "&");
                stringBuffer.append("cid=" + pVar.v + "&");
                stringBuffer.append("template_url=" + pVar.w + "&");
                stringBuffer.append("reason=" + pVar.s() + "&");
                stringBuffer.append("rid=" + pVar.s + "&");
                stringBuffer.append("rid_n=" + pVar.t + "&");
                stringBuffer.append("unit_id=" + pVar.u + "&");
                stringBuffer.append("\n");
            }
        }
        return stringBuffer.toString();
    }

    public static String e(List<p> list) {
        if (list == null || list.size() <= 0) {
            return null;
        }
        StringBuffer stringBuffer = new StringBuffer();
        for (p pVar : list) {
            if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
                stringBuffer.append("key=" + pVar.f + "&");
                stringBuffer.append("network_type=" + pVar.g + "&");
                stringBuffer.append("cid=" + pVar.v + "&");
                stringBuffer.append("image_url=" + pVar.F + "&");
                stringBuffer.append("reason=" + pVar.s() + "&");
                stringBuffer.append("rid=" + pVar.s + "&");
                stringBuffer.append("rid_n=" + pVar.t + "&");
                stringBuffer.append("unit_id=" + pVar.u + "&");
                stringBuffer.append("\n");
            } else {
                stringBuffer.append("key=" + pVar.f + "&");
                stringBuffer.append("cid=" + pVar.v + "&");
                stringBuffer.append("image_url=" + pVar.F + "&");
                stringBuffer.append("reason=" + pVar.s() + "&");
                stringBuffer.append("rid=" + pVar.s + "&");
                stringBuffer.append("rid_n=" + pVar.t + "&");
                stringBuffer.append("unit_id=" + pVar.u + "&");
                stringBuffer.append("\n");
            }
        }
        return stringBuffer.toString();
    }

    public static String e(p pVar) {
        if (pVar == null) {
            return null;
        }
        try {
            StringBuffer stringBuffer = new StringBuffer();
            if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
                stringBuffer.append("key=" + pVar.f + "&");
                stringBuffer.append("error=" + ae.c(pVar.y) + "&");
                stringBuffer.append("template_url=" + ae.c(pVar.w) + "&");
                stringBuffer.append("unit_id=" + ae.c(pVar.u) + "&");
                stringBuffer.append("cid=" + ae.c(pVar.v) + "&");
                stringBuffer.append("network_str=" + pVar.h + "&");
                StringBuilder sb = new StringBuilder();
                sb.append("network_type=");
                sb.append(pVar.g);
                stringBuffer.append(sb.toString());
            } else {
                stringBuffer.append("key=" + pVar.f + "&");
                stringBuffer.append("error=" + ae.c(pVar.y) + "&");
                stringBuffer.append("template_url=" + ae.c(pVar.w) + "&");
                stringBuffer.append("unit_id=" + ae.c(pVar.u) + "&");
                stringBuffer.append("cid=" + ae.c(pVar.v) + "&");
            }
            return stringBuffer.toString();
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public static String f(p pVar) {
        if (pVar == null) {
            return null;
        }
        try {
            StringBuffer stringBuffer = new StringBuffer();
            if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
                stringBuffer.append("key=" + pVar.f + "&");
                stringBuffer.append("event=" + ae.c(pVar.z) + "&");
                stringBuffer.append("template=" + ae.c(pVar.x) + "&");
                stringBuffer.append("layout=" + ae.c(pVar.A) + "&");
                stringBuffer.append("unit_id=" + ae.c(pVar.u) + "&");
                stringBuffer.append("cid=" + ae.c(pVar.v) + "&");
                stringBuffer.append("network_str=" + pVar.h + "&");
                StringBuilder sb = new StringBuilder();
                sb.append("network_type=");
                sb.append(pVar.g);
                stringBuffer.append(sb.toString());
            } else {
                stringBuffer.append("key=" + pVar.f + "&");
                stringBuffer.append("event=" + ae.c(pVar.z) + "&");
                stringBuffer.append("template=" + ae.c(pVar.x) + "&");
                stringBuffer.append("layout=" + ae.c(pVar.A) + "&");
                stringBuffer.append("unit_id=" + ae.c(pVar.u) + "&");
                stringBuffer.append("cid=" + ae.c(pVar.v) + "&");
            }
            return stringBuffer.toString();
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public static String f(List<p> list) {
        if (list == null) {
            return null;
        }
        try {
            if (list.size() <= 0) {
                return null;
            }
            StringBuffer stringBuffer = new StringBuffer();
            Iterator<p> it = list.iterator();
            while (it.hasNext()) {
                stringBuffer.append(it.next().B);
                stringBuffer.append("\n");
            }
            return stringBuffer.toString();
        } catch (Throwable th) {
            z.c("VideoReportData", th.getMessage(), th);
            return null;
        }
    }

    public static String g(p pVar) {
        if (pVar == null) {
            return "";
        }
        StringBuffer stringBuffer = new StringBuffer();
        stringBuffer.append("key=" + pVar.f + "&");
        stringBuffer.append("cid=" + pVar.v + "&");
        stringBuffer.append("rid=" + pVar.s + "&");
        stringBuffer.append("rid_n=" + pVar.t + "&");
        stringBuffer.append("unit_id=" + pVar.u + "&");
        stringBuffer.append("network_type=" + pVar.g + "&");
        stringBuffer.append("mraid_type=" + pVar.H + "&");
        stringBuffer.append("platform=1");
        return stringBuffer.toString();
    }

    public static String h(p pVar) {
        if (pVar == null) {
            return "";
        }
        StringBuffer stringBuffer = new StringBuffer();
        stringBuffer.append("key=" + pVar.f + "&");
        stringBuffer.append("cid=" + pVar.v + "&");
        stringBuffer.append("rid=" + pVar.s + "&");
        stringBuffer.append("rid_n=" + pVar.t + "&");
        stringBuffer.append("unit_id=" + pVar.u + "&");
        stringBuffer.append("reason=" + pVar.s() + "&");
        stringBuffer.append("case=" + pVar.n + "&");
        StringBuilder sb = new StringBuilder();
        sb.append("network_type=");
        sb.append(pVar.g);
        stringBuffer.append(sb.toString());
        return stringBuffer.toString();
    }

    public final String toString() {
        return "RewardReportData [key=" + this.f + ", networkType=" + this.g + ", isCompleteView=" + this.i + ", watchedMillis=" + this.j + ", videoLength=" + this.k + ", offerUrl=" + this.l + ", reason=" + this.m + ", result=" + this.o + ", duration=" + this.p + ", videoSize=" + this.q + "]";
    }
}

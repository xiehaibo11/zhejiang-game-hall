package com.tkay.basead.a;

import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import android.util.Log;
import android.widget.Toast;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.tkay.basead.handler.OfferClickHandler;
import com.tkay.core.api.IExHandler;
import com.tkay.core.api.IOfferClickHandler;
import com.tkay.core.basead.ui.web.WebLandPageActivity;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.aa;
import com.tkay.core.common.f.al;
import com.tkay.core.common.f.r;
import com.tkay.core.common.f.y;
import com.tkay.core.common.l.l;
import com.tkay.core.common.p;
import java.net.HttpURLConnection;
import java.net.URL;

/* JADX INFO: loaded from: classes3.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f5577a = 1;
    public static final int b = 2;
    public static final int c = 3;
    public static final int d = 4;
    public static final int e = 6;
    public static final int f = 0;
    public static final int g = 1;
    public static final int h = 1;
    public static final int i = 2;
    public static final int j = 3;
    public static final int k = 4;
    com.tkay.core.common.f.h l;
    boolean m;
    boolean n;
    Context p;
    boolean q;
    com.tkay.core.common.f.i r;
    b s;
    IOfferClickHandler t;
    a u;
    boolean v;
    private final String y = getClass().getSimpleName();
    private final int z = 0;
    private final int A = 1;
    private final int B = 2;
    private final int C = 10;
    boolean o = false;
    boolean w = false;
    b x = new b() { // from class: com.tkay.basead.a.c.1
        @Override // com.tkay.basead.a.c.b
        public final void a() {
            if (c.this.o || c.this.s == null) {
                return;
            }
            c.this.s.a();
        }

        @Override // com.tkay.basead.a.c.b
        public final void b() {
            if (c.this.o || c.this.s == null) {
                return;
            }
            c.this.s.b();
        }

        @Override // com.tkay.basead.a.c.b
        public final void c() {
            if (c.this.o || c.this.s == null) {
                return;
            }
            c.this.s.c();
        }

        @Override // com.tkay.basead.a.c.b
        public final void a(boolean z) {
            if (c.this.o || c.this.s == null) {
                return;
            }
            c.this.s.a(z);
        }
    };

    public interface b {
        void a();

        void a(boolean z);

        void b();

        void c();
    }

    static /* synthetic */ boolean b(c cVar, com.tkay.basead.c.i iVar) {
        return cVar.b(iVar, false);
    }

    public c(Context context, com.tkay.core.common.f.i iVar, com.tkay.core.common.f.h hVar) {
        this.l = hVar;
        this.r = iVar;
        this.p = context.getApplicationContext();
        com.tkay.core.common.f.j jVar = iVar.m;
        this.q = !(hVar instanceof com.tkay.core.common.f.f) ? !((hVar instanceof r) && ((r) hVar).O() == 1) : !((jVar instanceof aa) && ((aa) jVar).Y() == 1);
        this.l.g(iVar.d);
        this.t = new OfferClickHandler();
        this.v = this.r.m.Q() != 2;
    }

    public final void a(b bVar) {
        this.s = bVar;
    }

    private void b(com.tkay.basead.c.i iVar) {
        if (this.v || !this.w) {
            this.w = true;
            com.tkay.basead.a.b.a(9, this.l, iVar);
        }
    }

    public final boolean a() {
        return this.m;
    }

    public final void a(com.tkay.basead.c.i iVar) {
        if (this.m) {
            return;
        }
        this.m = true;
        this.n = false;
        com.tkay.core.common.l.b.a.a().a(new AnonymousClass3(iVar));
    }

    /* JADX INFO: renamed from: com.tkay.basead.a.c$3, reason: invalid class name */
    final class AnonymousClass3 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ com.tkay.basead.c.i f5581a;

        AnonymousClass3(com.tkay.basead.c.i iVar) {
            this.f5581a = iVar;
        }

        @Override // java.lang.Runnable
        public final void run() throws Throwable {
            if (c.a(c.this, this.f5581a)) {
                return;
            }
            final int i = 0;
            if (c.this.r.m.l() != 2) {
                i = c.b(c.this, this.f5581a) ? 1 : 2;
            }
            if (i == 1 && c.this.r.m.l() == 1) {
                return;
            }
            IExHandler iExHandlerB = m.a().b();
            if (c.this.l.D() == 4 && 1 == c.this.r.m.o() && iExHandlerB != null && i != 1) {
                iExHandlerB.openApkConfirmDialog(c.this.p, c.this.l, c.this.r, new com.tkay.core.common.g.a() { // from class: com.tkay.basead.a.c.3.1
                    @Override // com.tkay.core.common.g.a
                    public final void a(boolean z) {
                        if (z) {
                            com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.basead.a.c.3.1.1
                                @Override // java.lang.Runnable
                                public final void run() throws Throwable {
                                    c.a(c.this, i, AnonymousClass3.this.f5581a);
                                }
                            });
                        } else {
                            c.this.m = false;
                        }
                    }
                });
            } else {
                c.a(c.this, i, this.f5581a);
            }
        }
    }

    private boolean a(com.tkay.basead.c.i iVar, boolean z) {
        iVar.i = new com.tkay.basead.c.b();
        com.tkay.basead.c.d dVarE = e();
        iVar.i.f5609a = dVarE != null ? dVarE.c : "";
        if (!TextUtils.isEmpty(this.l.o())) {
            String strReplaceAll = this.l.o().replaceAll("\\{req_id\\}", this.r.d != null ? this.r.d : "");
            if (com.tkay.core.basead.a.a.a(this.p, strReplaceAll, false)) {
                if (iVar.g != null) {
                    iVar.g.i = true;
                }
                b(iVar);
                com.tkay.core.common.k.c.a(this.r, this.l, strReplaceAll, "1", 1);
                b bVar = this.x;
                if (bVar != null && !z) {
                    bVar.a();
                }
                b bVar2 = this.x;
                if (bVar2 != null) {
                    bVar2.a(true);
                }
                this.m = false;
                m.a().a(new AnonymousClass4(z));
                return true;
            }
            com.tkay.core.common.k.c.a(this.r, this.l, strReplaceAll, "0", 1);
        }
        return false;
    }

    /* JADX INFO: renamed from: com.tkay.basead.a.c$4, reason: invalid class name */
    final class AnonymousClass4 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ boolean f5584a;

        AnonymousClass4(boolean z) {
            this.f5584a = z;
        }

        @Override // java.lang.Runnable
        public final void run() {
            if (c.this.x != null && !this.f5584a) {
                c.this.x.b();
            }
            if (c.this.x != null) {
                c.this.x.c();
            }
        }
    }

    private boolean b(com.tkay.basead.c.i iVar, final boolean z) {
        iVar.i = new com.tkay.basead.c.b();
        com.tkay.basead.c.d dVarE = e();
        iVar.i.f5609a = dVarE != null ? dVarE.c : "";
        com.tkay.basead.a.b.a(23, this.l, iVar);
        if (!TextUtils.isEmpty(this.l.z())) {
            String strReplaceAll = this.l.z().replaceAll("\\{req_id\\}", this.r.d != null ? this.r.d : "");
            p.a().a(this.l);
            if (com.tkay.core.basead.a.a.a(this.p, strReplaceAll, false)) {
                if (iVar.g != null) {
                    iVar.g.i = true;
                }
                b(iVar);
                com.tkay.core.common.k.c.a(this.r, this.l, strReplaceAll, "1", 0);
                b bVar = this.x;
                if (bVar != null && !z) {
                    bVar.a();
                }
                b bVar2 = this.x;
                if (bVar2 != null) {
                    bVar2.a(true);
                }
                this.m = false;
                m.a().a(new Runnable() { // from class: com.tkay.basead.a.c.5
                    @Override // java.lang.Runnable
                    public final void run() {
                        if (c.this.x != null && !z) {
                            c.this.x.b();
                        }
                        if (c.this.x != null) {
                            c.this.x.c();
                        }
                    }
                });
                com.tkay.basead.a.b.a(24, this.l, iVar);
                return true;
            }
            p.a().b(this.l);
            if (com.tkay.basead.a.b.a(this.p, this.l.B())) {
                com.tkay.basead.a.b.a(28, this.l, iVar);
            } else {
                com.tkay.basead.a.b.a(29, this.l, iVar);
            }
            com.tkay.core.common.k.c.a(this.r, this.l, strReplaceAll, "0", 0);
        }
        return false;
    }

    private void a(int i2, com.tkay.basead.c.i iVar) throws Throwable {
        String strB;
        com.tkay.basead.c.d dVar;
        String strB2;
        String strB3;
        com.tkay.basead.c.d dVarA;
        boolean z = true;
        if (i2 != 1) {
            b bVar = this.x;
            if (bVar != null) {
                bVar.a();
            }
            m.a().a(new AnonymousClass6());
        }
        strB = "";
        String strA = j.a((this.l.A() != null ? this.l.A() : "").replaceAll("\\{req_id\\}", this.r.d == null ? "" : this.r.d), iVar, System.currentTimeMillis());
        if (g() && this.l.D() == 4) {
            dVar = new com.tkay.basead.c.d("", "", "");
        } else {
            dVar = new com.tkay.basead.c.d(strA, "", "");
        }
        a(dVar);
        int iD = this.l.D();
        if (iD == 1) {
            if (!strA.startsWith("http")) {
                a(strA, i2, iVar);
                return;
            }
            a aVar = this.u;
            boolean z2 = aVar != null && aVar.a();
            if (this.q) {
                String strY = this.l.y();
                if (z2) {
                    strY = this.u.c;
                }
                if (!TextUtils.isEmpty(strY)) {
                    a(strY, i2, iVar);
                    z = false;
                }
            }
            if (z2) {
                strB2 = this.u.c;
            } else {
                strB2 = b(strA);
                if (!TextUtils.isEmpty(strB2)) {
                    a(strB2);
                }
            }
            if (z) {
                if (TextUtils.isEmpty(strB2)) {
                    strB2 = dVar.f5611a;
                }
                a(strB2, i2, iVar);
                return;
            }
            return;
        }
        if (iD == 2 || iD == 3) {
            if (g() && !TextUtils.isEmpty(this.l.z())) {
                strB = b(strA);
                String strA2 = com.tkay.basead.d.b.a.a.a(strB);
                dVar.b = strB;
                dVar.c = strA2;
                a(dVar);
            }
            if (TextUtils.isEmpty(strB)) {
                strB = dVar.f5611a;
            }
            a(strB, i2, iVar);
            return;
        }
        if (iD == 4) {
            if (g() && TextUtils.isEmpty(dVar.f5611a) && (dVarA = com.tkay.basead.d.b.a.a.a(this.r, this.l, strA)) != null) {
                dVar.f5611a = dVarA.f5611a;
                dVar.c = dVarA.c;
            }
            a aVar2 = this.u;
            if (aVar2 != null && aVar2.a()) {
                strB3 = this.u.c;
            } else {
                strB3 = b(dVar.f5611a);
                if (!TextUtils.isEmpty(strB3)) {
                    a(strB3);
                }
            }
            dVar.b = strB3;
            a(dVar);
            if (TextUtils.isEmpty(strB3)) {
                strB3 = dVar.f5611a;
            } else {
                iVar.j = true;
            }
            a(strB3, i2, iVar);
            return;
        }
        a(TextUtils.isEmpty("") ? dVar.f5611a : "", i2, iVar);
    }

    /* JADX INFO: renamed from: com.tkay.basead.a.c$6, reason: invalid class name */
    final class AnonymousClass6 implements Runnable {
        AnonymousClass6() {
        }

        @Override // java.lang.Runnable
        public final void run() {
            if (c.this.x != null) {
                c.this.x.b();
            }
        }
    }

    private synchronized void a(String str) {
        if (this.u == null) {
            this.u = new a();
        }
        this.u.c = str;
        this.u.b = this.r.m.P();
        this.u.f5590a = System.currentTimeMillis();
    }

    private String b(String str) throws Throwable {
        String str2;
        HttpURLConnection httpURLConnection;
        boolean z = false;
        String headerField = str;
        for (int i2 = 0; i2 < 10; i2++) {
            HttpURLConnection httpURLConnection2 = null;
            try {
                try {
                    httpURLConnection = (HttpURLConnection) new URL(headerField).openConnection();
                } catch (Exception e2) {
                    e = e2;
                    str2 = headerField;
                }
            } catch (Throwable th) {
                th = th;
            }
            try {
                httpURLConnection.setRequestMethod("GET");
                httpURLConnection.setInstanceFollowRedirects(false);
                if (this.r.m != null && com.tkay.basead.a.b.a(9, this.r.m)) {
                    String strI = com.tkay.core.common.l.d.i();
                    if (!TextUtils.isEmpty(strI)) {
                        httpURLConnection.addRequestProperty("User-Agent", strI);
                    }
                }
                httpURLConnection.setConnectTimeout(30000);
                httpURLConnection.connect();
                int responseCode = httpURLConnection.getResponseCode();
                if (responseCode == 302 || responseCode == 301 || responseCode == 307) {
                    headerField = httpURLConnection.getHeaderField("Location");
                    if (!com.tkay.core.basead.a.a.b(headerField) && !headerField.contains(com.tkay.china.common.a.a.g) && headerField.startsWith("http")) {
                        httpURLConnection.disconnect();
                        if (httpURLConnection != null) {
                            httpURLConnection.disconnect();
                        }
                    }
                    z = true;
                }
                if (z || responseCode == 200) {
                    if (httpURLConnection != null) {
                        httpURLConnection.disconnect();
                    }
                    return headerField;
                }
                com.tkay.core.common.k.c.a(this.r, this.l, str, headerField, String.valueOf(responseCode), "");
                if (httpURLConnection != null) {
                    httpURLConnection.disconnect();
                }
                return "";
            } catch (Exception e3) {
                e = e3;
                str2 = headerField;
                httpURLConnection2 = httpURLConnection;
                com.tkay.core.common.k.c.a(this.r, this.l, str, str2, "", e.getMessage());
                if (httpURLConnection2 != null) {
                    httpURLConnection2.disconnect();
                }
                return "";
            } catch (Throwable th2) {
                th = th2;
                httpURLConnection2 = httpURLConnection;
                if (httpURLConnection2 != null) {
                    httpURLConnection2.disconnect();
                }
                throw th;
            }
        }
        return "";
    }

    private void a(com.tkay.basead.c.d dVar) {
        d.a().a(this.l.d(), this.l.p(), dVar);
    }

    private com.tkay.basead.c.d e() {
        return d.a().a(this.l.d(), this.l.p());
    }

    private void a(String str, int i2, com.tkay.basead.c.i iVar) {
        b bVar;
        b bVar2;
        if (i2 == 1) {
            return;
        }
        if (this.n) {
            this.m = false;
            if ((!TextUtils.isEmpty(this.l.o()) || !TextUtils.isEmpty(this.l.z())) && (bVar2 = this.x) != null) {
                bVar2.a(false);
            }
            b(iVar);
            m.a().a(new Runnable() { // from class: com.tkay.basead.a.c.7
                @Override // java.lang.Runnable
                public final void run() {
                    if (c.this.x != null) {
                        c.this.x.c();
                    }
                }
            });
            return;
        }
        if (i2 == 0 && b(iVar, true)) {
            return;
        }
        if ((!TextUtils.isEmpty(this.l.o()) || !TextUtils.isEmpty(this.l.z())) && (bVar = this.x) != null) {
            bVar.a(false);
        }
        if (!TextUtils.isEmpty(this.l.B()) && (this.l.D() == 1 || this.l.D() == 4)) {
            boolean zA = a(this.p, this.l.B());
            iVar.i = new com.tkay.basead.c.b();
            com.tkay.basead.c.d dVarE = e();
            iVar.i.f5609a = dVarE != null ? dVarE.c : "";
            if (iVar.g != null) {
                iVar.g.j = zA ? 5 : iVar.g.j;
            }
            if (zA) {
                b(iVar);
                com.tkay.basead.a.b.a(25, this.l, iVar);
                this.m = false;
                m.a().a(new Runnable() { // from class: com.tkay.basead.a.c.8
                    @Override // java.lang.Runnable
                    public final void run() {
                        if (c.this.x != null) {
                            c.this.x.c();
                        }
                    }
                });
                return;
            }
            com.tkay.basead.a.b.a(26, this.l, iVar);
        }
        if (iVar.g != null && this.l.D() == 4) {
            if (iVar.j) {
                IExHandler iExHandlerB = m.a().b();
                iVar.g.j = iExHandlerB != null ? iExHandlerB.checkDownloadType(this.l, this.r) : iVar.g.j;
            } else {
                iVar.g.j = 3;
            }
        }
        b(iVar);
        if (TextUtils.isEmpty(str)) {
            str = this.l.y();
        }
        if (TextUtils.isEmpty(str)) {
            Log.e("tkay", "Offer click result is null.");
            m.a().a(new Runnable() { // from class: com.tkay.basead.a.c.9
                @Override // java.lang.Runnable
                public final void run() {
                    try {
                        if (TextUtils.isEmpty(c.this.l.A())) {
                            Toast.makeText(c.this.p, com.tkay.core.common.l.h.a(c.this.p, "basead_click_empty", com.tkay.expressad.foundation.h.i.g), 0).show();
                        } else {
                            Toast.makeText(c.this.p, com.tkay.core.common.l.h.a(c.this.p, "basead_click_fail", com.tkay.expressad.foundation.h.i.g), 0).show();
                        }
                    } catch (Throwable unused) {
                    }
                }
            });
            this.m = false;
            m.a().a(new Runnable() { // from class: com.tkay.basead.a.c.10
                @Override // java.lang.Runnable
                public final void run() {
                    if (c.this.x != null) {
                        c.this.x.c();
                    }
                }
            });
            return;
        }
        int iD = this.l.D();
        if (iD == 1) {
            boolean z = (str == null || str.startsWith("http")) ? false : true;
            if (!com.tkay.core.basead.a.a.a(this.p, str, z) && !z) {
                if (this.r.m.k() == 2) {
                    com.tkay.core.basead.b.a aVar = new com.tkay.core.basead.b.a();
                    aVar.c = this.l;
                    aVar.h = this.r;
                    aVar.f = str;
                    aVar.g = this.t;
                    WebLandPageActivity.a(this.p, aVar);
                } else {
                    l.a(str);
                }
            }
        } else if (iD == 2) {
            l.a(str);
        } else if (iD == 3) {
            com.tkay.core.basead.b.a aVar2 = new com.tkay.core.basead.b.a();
            aVar2.c = this.l;
            aVar2.h = this.r;
            aVar2.f = str;
            aVar2.g = this.t;
            WebLandPageActivity.a(this.p, aVar2);
        } else if (iD == 4) {
            a(str, iVar);
        } else if (iD == 6) {
            if (!f()) {
                com.tkay.core.basead.b.a aVar3 = new com.tkay.core.basead.b.a();
                aVar3.c = this.l;
                aVar3.h = this.r;
                aVar3.f = str;
                aVar3.g = this.t;
                WebLandPageActivity.a(this.p, aVar3);
            }
        } else if (this.r.m.k() == 2) {
            com.tkay.core.basead.b.a aVar4 = new com.tkay.core.basead.b.a();
            aVar4.c = this.l;
            aVar4.h = this.r;
            aVar4.f = str;
            aVar4.g = this.t;
            WebLandPageActivity.a(this.p, aVar4);
        } else {
            l.a(str);
        }
        this.m = false;
        m.a().a(new Runnable() { // from class: com.tkay.basead.a.c.2
            @Override // java.lang.Runnable
            public final void run() {
                if (c.this.x != null) {
                    c.this.x.c();
                }
            }
        });
    }

    private boolean f() {
        al alVarK = m.a().K();
        boolean z = alVarK.b() == 1;
        boolean z2 = alVarK.a() == 1;
        String strL = com.tkay.core.common.l.d.l();
        if (TextUtils.isEmpty(strL)) {
            com.tkay.core.common.k.c.a(this.r, this.l, 5);
            return false;
        }
        if (!z) {
            com.tkay.core.common.k.c.a(this.r, this.l, 3);
            return false;
        }
        if (!z2) {
            com.tkay.core.common.k.c.a(this.r, this.l, 1);
            return false;
        }
        String strE = this.l.e();
        String strF = this.l.f();
        if (TextUtils.isEmpty(strE) || TextUtils.isEmpty(strF)) {
            com.tkay.core.common.k.c.a(this.r, this.l, 4);
            return false;
        }
        try {
            Object objC = com.tkay.core.common.l.d.c(strL);
            Class<?> cls = Class.forName("com.tencent.mm.opensdk.modelbiz.WXLaunchMiniProgram$Req");
            Object objNewInstance = cls.newInstance();
            cls.getField("userName").set(objNewInstance, strE);
            cls.getField("path").set(objNewInstance, strF);
            cls.getField("miniprogramType").set(objNewInstance, cls.getField("MINIPTOGRAM_TYPE_RELEASE").get(null));
            Class.forName("com.tencent.mm.opensdk.openapi.IWXAPI").getMethod("sendReq", Class.forName("com.tencent.mm.opensdk.modelbase.BaseReq")).invoke(objC, objNewInstance);
            com.tkay.core.common.k.c.a(this.r, this.l, 0);
            return true;
        } catch (Throwable th) {
            com.tkay.core.common.f.i iVar = this.r;
            com.tkay.core.common.f.h hVar = this.l;
            th.getMessage();
            com.tkay.core.common.k.c.a(iVar, hVar, 2);
            return false;
        }
    }

    private void a(String str, com.tkay.basead.c.i iVar) {
        if (iVar.j) {
            if (!TextUtils.isEmpty(str)) {
                if (com.tkay.basead.a.b.a(this.p, this.r, this.l, e(), str, new i())) {
                    return;
                }
            } else {
                l.a(str);
                return;
            }
        }
        l.a(str);
    }

    public static boolean a(Context context, String str) {
        try {
            Intent launchIntentForPackage = context.getPackageManager().getLaunchIntentForPackage(str);
            if (launchIntentForPackage == null) {
                return false;
            }
            launchIntentForPackage.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            context.startActivity(launchIntentForPackage);
            return true;
        } catch (Throwable th) {
            th.printStackTrace();
            return false;
        }
    }

    private boolean g() {
        if (this.l.n() == 42) {
            return true;
        }
        com.tkay.core.common.f.h hVar = this.l;
        return (hVar instanceof y) && ((y) hVar).a() == 42;
    }

    public final com.tkay.core.common.f.h b() {
        return this.l;
    }

    public final com.tkay.core.common.f.i c() {
        return this.r;
    }

    private void h() {
        this.n = true;
    }

    public final void d() {
        this.o = true;
    }

    static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        long f5590a;
        long b;
        String c;

        a() {
        }

        final boolean a() {
            return System.currentTimeMillis() - this.f5590a <= this.b;
        }
    }

    static /* synthetic */ boolean a(c cVar, com.tkay.basead.c.i iVar) {
        iVar.i = new com.tkay.basead.c.b();
        com.tkay.basead.c.d dVarE = cVar.e();
        iVar.i.f5609a = dVarE != null ? dVarE.c : "";
        if (!TextUtils.isEmpty(cVar.l.o())) {
            String strReplaceAll = cVar.l.o().replaceAll("\\{req_id\\}", cVar.r.d != null ? cVar.r.d : "");
            if (com.tkay.core.basead.a.a.a(cVar.p, strReplaceAll, false)) {
                if (iVar.g != null) {
                    iVar.g.i = true;
                }
                cVar.b(iVar);
                com.tkay.core.common.k.c.a(cVar.r, cVar.l, strReplaceAll, "1", 1);
                b bVar = cVar.x;
                if (bVar != null) {
                    bVar.a();
                }
                b bVar2 = cVar.x;
                if (bVar2 != null) {
                    bVar2.a(true);
                }
                cVar.m = false;
                m.a().a(cVar.new AnonymousClass4(false));
                return true;
            }
            com.tkay.core.common.k.c.a(cVar.r, cVar.l, strReplaceAll, "0", 1);
        }
        return false;
    }

    static /* synthetic */ void a(c cVar, int i2, com.tkay.basead.c.i iVar) throws Throwable {
        String strB;
        com.tkay.basead.c.d dVar;
        String strB2;
        String strB3;
        com.tkay.basead.c.d dVarA;
        boolean z = true;
        if (i2 != 1) {
            b bVar = cVar.x;
            if (bVar != null) {
                bVar.a();
            }
            m.a().a(cVar.new AnonymousClass6());
        }
        strB = "";
        String strA = j.a((cVar.l.A() != null ? cVar.l.A() : "").replaceAll("\\{req_id\\}", cVar.r.d == null ? "" : cVar.r.d), iVar, System.currentTimeMillis());
        if (cVar.g() && cVar.l.D() == 4) {
            dVar = new com.tkay.basead.c.d("", "", "");
        } else {
            dVar = new com.tkay.basead.c.d(strA, "", "");
        }
        cVar.a(dVar);
        int iD = cVar.l.D();
        if (iD == 1) {
            if (!strA.startsWith("http")) {
                cVar.a(strA, i2, iVar);
                return;
            }
            a aVar = cVar.u;
            boolean z2 = aVar != null && aVar.a();
            if (cVar.q) {
                String strY = cVar.l.y();
                if (z2) {
                    strY = cVar.u.c;
                }
                if (!TextUtils.isEmpty(strY)) {
                    cVar.a(strY, i2, iVar);
                    z = false;
                }
            }
            if (z2) {
                strB2 = cVar.u.c;
            } else {
                strB2 = cVar.b(strA);
                if (!TextUtils.isEmpty(strB2)) {
                    cVar.a(strB2);
                }
            }
            if (z) {
                if (TextUtils.isEmpty(strB2)) {
                    strB2 = dVar.f5611a;
                }
                cVar.a(strB2, i2, iVar);
                return;
            }
            return;
        }
        if (iD == 2 || iD == 3) {
            if (cVar.g() && !TextUtils.isEmpty(cVar.l.z())) {
                strB = cVar.b(strA);
                String strA2 = com.tkay.basead.d.b.a.a.a(strB);
                dVar.b = strB;
                dVar.c = strA2;
                cVar.a(dVar);
            }
            if (TextUtils.isEmpty(strB)) {
                strB = dVar.f5611a;
            }
            cVar.a(strB, i2, iVar);
            return;
        }
        if (iD == 4) {
            if (cVar.g() && TextUtils.isEmpty(dVar.f5611a) && (dVarA = com.tkay.basead.d.b.a.a.a(cVar.r, cVar.l, strA)) != null) {
                dVar.f5611a = dVarA.f5611a;
                dVar.c = dVarA.c;
            }
            a aVar2 = cVar.u;
            if (aVar2 != null && aVar2.a()) {
                strB3 = cVar.u.c;
            } else {
                strB3 = cVar.b(dVar.f5611a);
                if (!TextUtils.isEmpty(strB3)) {
                    cVar.a(strB3);
                }
            }
            dVar.b = strB3;
            cVar.a(dVar);
            if (TextUtils.isEmpty(strB3)) {
                strB3 = dVar.f5611a;
            } else {
                iVar.j = true;
            }
            cVar.a(strB3, i2, iVar);
            return;
        }
        cVar.a(TextUtils.isEmpty("") ? dVar.f5611a : "", i2, iVar);
    }
}

package com.loc;

import android.content.Context;
import android.location.Location;
import android.location.LocationListener;
import android.location.LocationManager;
import android.net.wifi.WifiInfo;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.support.v4.view.MotionEventCompat;
import com.alibaba.sdk.android.oss.common.RequestParameters;
import com.loc.da;
import com.sigmob.sdk.base.mta.PointCategory;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import javax.crypto.KeyGenerator;
import kotlin.UByte;

/* JADX INFO: compiled from: CollectionManager.java */
/* JADX INFO: loaded from: classes2.dex */
public final class es implements em {
    private static long k;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    Context f2952a;
    dw d;
    bv e;
    private Handler g;
    private LocationManager h;
    private a i;
    private ArrayList<dc> f = new ArrayList<>();
    ff b = null;
    fb c = null;
    private volatile boolean j = false;

    /* JADX INFO: compiled from: CollectionManager.java */
    static class a implements LocationListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private es f2954a;

        a(es esVar) {
            this.f2954a = esVar;
        }

        final void a() {
            this.f2954a = null;
        }

        final void a(es esVar) {
            this.f2954a = esVar;
        }

        @Override // android.location.LocationListener
        public final void onLocationChanged(Location location) {
            try {
                if (this.f2954a != null) {
                    this.f2954a.a(location);
                }
            } catch (Throwable unused) {
            }
        }

        @Override // android.location.LocationListener
        public final void onProviderDisabled(String str) {
        }

        @Override // android.location.LocationListener
        public final void onProviderEnabled(String str) {
        }

        @Override // android.location.LocationListener
        public final void onStatusChanged(String str, int i, Bundle bundle) {
        }
    }

    /* JADX INFO: compiled from: CollectionManager.java */
    class b extends cs {
        private int b;
        private Location c;

        b(int i) {
            this.b = 0;
            this.b = i;
        }

        b(es esVar, Location location) {
            this(1);
            this.c = location;
        }

        private void b() {
            try {
                Object[] objArr = new Object[1];
                ft.a();
                if (this.c != null && es.this.j) {
                    if (fz.m(es.this.f2952a)) {
                        Object[] objArr2 = new Object[1];
                        ft.a();
                        return;
                    }
                    Bundle extras = this.c.getExtras();
                    int i = extras != null ? extras.getInt("satellites") : 0;
                    if (fz.a(this.c, i)) {
                        return;
                    }
                    if (es.this.b != null && !es.this.b.s) {
                        es.this.b.f();
                    }
                    ArrayList<eg> arrayListA = es.this.b.a();
                    List<dz> listA = es.this.c.a();
                    da.a aVar = new da.a();
                    ef efVar = new ef();
                    efVar.i = this.c.getAccuracy();
                    efVar.f = this.c.getAltitude();
                    efVar.d = this.c.getLatitude();
                    efVar.h = this.c.getBearing();
                    efVar.e = this.c.getLongitude();
                    efVar.j = this.c.isFromMockProvider();
                    efVar.f2940a = this.c.getProvider();
                    efVar.g = this.c.getSpeed();
                    efVar.l = (byte) i;
                    efVar.b = System.currentTimeMillis();
                    efVar.c = this.c.getTime();
                    efVar.k = this.c.getTime();
                    aVar.f2927a = efVar;
                    aVar.b = arrayListA;
                    WifiInfo wifiInfoC = es.this.b.c();
                    if (wifiInfoC != null) {
                        aVar.c = eg.a(wifiInfoC.getBSSID());
                    }
                    aVar.d = ff.A;
                    aVar.f = this.c.getTime();
                    aVar.g = (byte) o.i(es.this.f2952a);
                    aVar.h = o.n(es.this.f2952a);
                    aVar.e = es.this.b.k();
                    aVar.j = fz.a(es.this.f2952a);
                    aVar.i = listA;
                    dc dcVarA = dw.a(aVar);
                    if (dcVarA == null) {
                        return;
                    }
                    synchronized (es.this.f) {
                        es.this.f.add(dcVarA);
                        if (es.this.f.size() >= 5) {
                            es.this.e();
                        }
                    }
                    es.this.d();
                }
            } catch (Throwable th) {
                fr.a(th, "cl", "coll");
            }
        }

        private void c() {
            Object[] objArr = new Object[1];
            ft.a();
            if (fz.m(es.this.f2952a)) {
                Object[] objArr2 = new Object[1];
                ft.a();
                return;
            }
            bl blVarA = null;
            try {
                long unused = es.k = System.currentTimeMillis();
                if (es.this.e.f.c()) {
                    blVarA = bl.a(new File(es.this.e.f2892a), es.this.e.b);
                    ArrayList arrayList = new ArrayList();
                    byte[] bArrF = es.f();
                    if (bArrF == null) {
                        try {
                            blVarA.close();
                            return;
                        } catch (Throwable unused2) {
                            return;
                        }
                    }
                    List listB = es.b(blVarA, es.this.e, arrayList, bArrF);
                    if (listB != null && listB.size() != 0) {
                        es.this.e.f.a(true);
                        if (dw.a(x.b(dw.a(fg.a(bArrF), p.b(bArrF, dw.a(), x.c()), listB)))) {
                            es.b(blVarA, arrayList);
                        }
                    }
                    try {
                        blVarA.close();
                        return;
                    } catch (Throwable unused3) {
                        return;
                    }
                }
                if (blVarA != null) {
                    try {
                        blVarA.close();
                    } catch (Throwable unused4) {
                    }
                }
            } catch (Throwable th) {
                try {
                    av.b(th, "leg", "uts");
                    if (blVarA != null) {
                        try {
                            blVarA.close();
                        } catch (Throwable unused5) {
                        }
                    }
                } catch (Throwable th2) {
                    if (blVarA != null) {
                        try {
                            blVarA.close();
                        } catch (Throwable unused6) {
                        }
                    }
                    throw th2;
                }
            }
        }

        @Override // com.loc.cs
        public final void a() {
            int i = this.b;
            if (i == 1) {
                b();
            } else if (i == 2) {
                c();
            } else if (i == 3) {
                es.this.g();
            }
        }
    }

    es(Context context) {
        this.f2952a = null;
        this.f2952a = context;
        bv bvVar = new bv();
        this.e = bvVar;
        cb.a(this.f2952a, bvVar, at.k, 100, 1024000, "0");
        bv bvVar2 = this.e;
        int i = fq.g;
        boolean z = fq.e;
        int i2 = fq.f;
        bvVar2.f = new cn(context, i, "kKey", new cl(context, z, i2, i2 * 10, "carrierLocKey"));
        this.e.e = new be();
    }

    private static int a(byte[] bArr) {
        return ((bArr[0] & UByte.MAX_VALUE) << 24) | (bArr[3] & UByte.MAX_VALUE) | ((bArr[2] & UByte.MAX_VALUE) << 8) | ((bArr[1] & UByte.MAX_VALUE) << 16);
    }

    private static byte[] a(int i) {
        try {
            KeyGenerator keyGenerator = KeyGenerator.getInstance("AES");
            if (keyGenerator == null) {
                return null;
            }
            keyGenerator.init(i);
            return keyGenerator.generateKey().getEncoded();
        } catch (Throwable unused) {
            return null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code restructure failed: missing block: B:65:0x00e4, code lost:
    
        if (r7 == null) goto L69;
     */
    /* JADX WARN: Code restructure failed: missing block: B:66:0x00e6, code lost:
    
        r7.close();
     */
    /* JADX WARN: Removed duplicated region for block: B:111:0x003b A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:113:0x00dd A[EXC_TOP_SPLITTER, PHI: r5 r9 r16
      0x00dd: PHI (r5v3 int) = (r5v4 int), (r5v5 int) binds: [B:78:0x0109, B:61:0x00db] A[DONT_GENERATE, DONT_INLINE]
      0x00dd: PHI (r9v1 com.loc.bl$b) = (r9v2 com.loc.bl$b), (r9v3 com.loc.bl$b) binds: [B:78:0x0109, B:61:0x00db] A[DONT_GENERATE, DONT_INLINE]
      0x00dd: PHI (r16v3 java.lang.String[]) = (r16v4 java.lang.String[]), (r16v6 java.lang.String[]) binds: [B:78:0x0109, B:61:0x00db] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:131:0x0116 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:97:0x0104 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static java.util.List<com.loc.dc> b(com.loc.bl r17, com.loc.bv r18, java.util.List<java.lang.String> r19, byte[] r20) {
        /*
            Method dump skipped, instruction units count: 295
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.loc.es.b(com.loc.bl, com.loc.bv, java.util.List, byte[]):java.util.List");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void b(bl blVar, List<String> list) {
        if (blVar != null) {
            try {
                Iterator<String> it = list.iterator();
                while (it.hasNext()) {
                    blVar.c(it.next());
                }
                blVar.close();
            } catch (Throwable th) {
                av.b(th, com.kuaishou.weapon.p0.t.p, "dlo");
            }
        }
    }

    private static byte[] b(int i) {
        return new byte[]{(byte) ((i >> 24) & 255), (byte) ((i >> 16) & 255), (byte) ((i >> 8) & 255), (byte) (i & 255)};
    }

    private static byte[] c(int i) {
        return new byte[]{(byte) ((i & MotionEventCompat.ACTION_POINTER_INDEX_MASK) >> 8), (byte) (i & 255)};
    }

    static /* synthetic */ byte[] f() {
        return a(128);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void g() {
        try {
            Object[] objArr = new Object[1];
            ft.a();
            if (fz.m(this.f2952a)) {
                Object[] objArr2 = new Object[1];
                ft.a();
                return;
            }
            if (this.f != null && this.f.size() != 0) {
                ArrayList<dc> arrayList = new ArrayList();
                synchronized (this.f) {
                    arrayList.addAll(this.f);
                    this.f.clear();
                }
                ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
                byte[] bArrA = a(256);
                if (bArrA == null) {
                    return;
                }
                byteArrayOutputStream.write(c(bArrA.length));
                byteArrayOutputStream.write(bArrA);
                for (dc dcVar : arrayList) {
                    byte[] bArrB = dcVar.b();
                    if (bArrB.length >= 10 && bArrB.length <= 65535) {
                        byte[] bArrB2 = p.b(bArrA, bArrB, x.c());
                        byteArrayOutputStream.write(c(bArrB2.length));
                        byteArrayOutputStream.write(bArrB2);
                        byteArrayOutputStream.write(b(dcVar.a()));
                    }
                }
                bw.a(Long.toString(System.currentTimeMillis()), byteArrayOutputStream.toByteArray(), this.e);
            }
        } catch (Throwable th) {
            fr.a(th, "clm", "wtD");
        }
    }

    @Override // com.loc.em
    public final el a(ek ekVar) {
        try {
            fl flVar = new fl();
            flVar.a(ekVar.b);
            flVar.b(ekVar.f2943a);
            flVar.a(ekVar.d);
            bo.a();
            bu buVarA = bo.a(flVar);
            el elVar = new el();
            elVar.c = buVarA.f2891a;
            elVar.b = buVarA.b;
            elVar.f2944a = 200;
            return elVar;
        } catch (Throwable unused) {
            return null;
        }
    }

    final void a() {
        if (fz.m(this.f2952a)) {
            Object[] objArr = new Object[1];
            ft.a();
            return;
        }
        try {
            if (this.i != null && this.h != null) {
                this.h.removeUpdates(this.i);
            }
            if (this.i != null) {
                this.i.a();
            }
            if (this.j) {
                g();
                this.b.a((es) null);
                this.c.a((es) null);
                this.c = null;
                this.b = null;
                this.g = null;
                this.j = false;
            }
        } catch (Throwable th) {
            fr.a(th, "clm", "stc");
        }
    }

    public final void a(Location location) {
        try {
            if (this.g != null) {
                this.g.post(new b(this, location));
            }
        } catch (Throwable th) {
            av.b(th, "cl", "olcc");
        }
    }

    public final void a(fb fbVar, ff ffVar, Handler handler) {
        Object[] objArr = new Object[1];
        ft.a();
        if (this.j || fbVar == null || ffVar == null || handler == null) {
            return;
        }
        if (fz.m(this.f2952a)) {
            Object[] objArr2 = new Object[1];
            ft.a();
            return;
        }
        this.j = true;
        this.c = fbVar;
        this.b = ffVar;
        ffVar.a(this);
        this.c.a(this);
        this.g = handler;
        try {
            if (this.h == null && handler != null) {
                this.h = (LocationManager) this.f2952a.getSystemService(RequestParameters.SUBRESOURCE_LOCATION);
            }
            if (this.i == null) {
                this.i = new a(this);
            }
            this.i.a(this);
            if (this.i != null && this.h != null) {
                this.h.requestLocationUpdates("passive", 1000L, -1.0f, this.i);
            }
            if (this.d == null) {
                dw dwVar = new dw("6.4.0", l.f(this.f2952a), "S128DF1572465B890OE3F7A13167KLEI", l.c(this.f2952a), this);
                this.d = dwVar;
                dwVar.a(o.k()).b(o.f(this.f2952a)).c(o.a(this.f2952a)).d(o.e(this.f2952a)).e(o.n()).f(o.f()).g(Build.MODEL).h(Build.MANUFACTURER).i(Build.BRAND).a(Build.VERSION.SDK_INT).j(Build.VERSION.RELEASE).a(eg.a(o.h())).k(o.h());
                dw.b();
            }
        } catch (Throwable th) {
            fr.a(th, "col", PointCategory.INIT);
        }
    }

    public final void b() {
        try {
            Object[] objArr = new Object[1];
            ft.a();
            if (this.g != null) {
                this.g.post(new Runnable() { // from class: com.loc.es.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        try {
                            if (es.this.d == null || es.this.b == null) {
                                return;
                            }
                            dw.b(es.this.b.a());
                        } catch (Throwable th) {
                            fr.a(th, "cl", "upwr");
                        }
                    }
                });
            }
        } catch (Throwable th) {
            fr.a(th, "cl", "upw");
        }
    }

    public final void c() {
        try {
            Object[] objArr = new Object[1];
            ft.a();
            if (this.d == null || this.c == null) {
                return;
            }
            dw.a(this.c.a());
        } catch (Throwable th) {
            fr.a(th, "cl", "upc");
        }
    }

    public final void d() {
        try {
            if (fz.m(this.f2952a)) {
                Object[] objArr = new Object[1];
                ft.a();
            } else {
                if (System.currentTimeMillis() - k < 60000) {
                    return;
                }
                cr.a().b(new b(2));
            }
        } catch (Throwable unused) {
        }
    }

    public final void e() {
        try {
            cr.a().b(new b(3));
        } catch (Throwable unused) {
        }
    }
}

package com.loc;

import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.os.Messenger;
import android.os.Process;
import android.text.TextUtils;
import com.amap.api.location.AMapLocation;
import com.amap.api.location.AMapLocationClientOption;
import com.sigmob.sdk.base.mta.PointCategory;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

public final class e {
    static boolean g;
    Context e;
    private List<Messenger> w;
    private boolean o = false;
    private boolean p = false;
    String a = null;
    b b = null;
    private long q = 0;
    private long r = 0;
    private ew s = null;
    AMapLocation c = null;
    private long t = 0;
    private int u = 0;
    a d = null;
    private j v = null;
    er f = null;
    HashMap<Messenger, Long> h = new HashMap<>();
    fx i = null;
    long j = 0;
    long k = 0;
    private long x = 0;
    String l = null;
    private boolean y = true;
    private String z = "";
    AMapLocationClientOption m = null;
    AMapLocationClientOption n = new AMapLocationClientOption();

    public class a extends Handler {
        public a(Looper looper) {
            super(looper);
        }

        @Override
        public final void handleMessage(Message message) {
            Messenger messenger;
            Throwable th;
            Bundle data;
            e eVar;
            String str;
            try {
                data = message.getData();
                try {
                    messenger = message.replyTo;
                    if (data != null) {
                        try {
                            if (!data.isEmpty()) {
                                if (!e.this.a(data.getString("c"))) {
                                    if (message.what == 1) {
                                        fx.a((String) null, 2102);
                                        ew ewVarB = e.b("invalid handlder scode!!!#1002");
                                        eq eqVar = new eq();
                                        eqVar.f("#1002");
                                        eqVar.e("conitue");
                                        e.this.a(messenger, ewVarB, ewVarB.k(), eqVar);
                                        return;
                                    }
                                    return;
                                }
                            }
                        } catch (Throwable th2) {
                            th = th2;
                            try {
                                fr.a(th, "ApsServiceCore", "ActionHandler handlerMessage");
                            } catch (Throwable th3) {
                                fr.a(th3, "actionHandler", "handleMessage");
                                return;
                            }
                        }
                    }
                } catch (Throwable th4) {
                    messenger = null;
                    th = th4;
                }
            } catch (Throwable th5) {
                messenger = null;
                th = th5;
                data = null;
            }
            int i = message.what;
            if (i == 0) {
                e.this.a(data);
                e.this.a(messenger, data);
            } else if (i != 1) {
                switch (i) {
                    case 9:
                        e.this.a(data);
                        e.this.f();
                        break;
                    case 10:
                        e.this.a(data);
                        eVar = e.this;
                        str = "FINE_LOC";
                        eVar.a(messenger, data, str);
                        break;
                    case 11:
                        e.this.c();
                        break;
                    case 12:
                        e.this.a(messenger);
                        break;
                    case 13:
                        Messenger messenger2 = message.replyTo;
                        if (messenger2 != null && e.this.w != null && !e.this.w.contains(messenger2)) {
                            e.this.w.add(messenger2);
                            if (e.this.w.size() == 1) {
                                e.this.e();
                            }
                        }
                        break;
                    case 14:
                        Messenger messenger3 = message.replyTo;
                        if (messenger3 != null && e.this.w != null && e.this.w.contains(messenger3)) {
                            e.this.w.remove(messenger3);
                        }
                        if (e.this.w != null && e.this.w.size() == 0) {
                            e.this.f.h();
                        }
                        break;
                    case 15:
                        e.this.a(data);
                        eVar = e.this;
                        str = "COARSE_LOC";
                        eVar.a(messenger, data, str);
                        break;
                }
            } else {
                e.this.a(data);
                e.this.b(messenger, data);
            }
            super.handleMessage(message);
        }
    }

    class b extends HandlerThread {
        public b(String str) {
            super(str);
        }

        @Override
        protected final void onLooperPrepared() {
            try {
                try {
                    e.this.v = new j(e.this.e);
                } catch (Throwable th) {
                    fr.a(th, "APSManager$ActionThread", "init 2");
                }
                try {
                    fq.b(e.this.e);
                    fq.a(e.this.e);
                } catch (Throwable th2) {
                    fr.a(th2, "APSManager$ActionThread", "init 3");
                }
                e.this.f = new er(false);
                super.onLooperPrepared();
            } catch (Throwable th3) {
                fr.a(th3, "APSManager$ActionThread", "onLooperPrepared");
            }
        }

        @Override
        public final void run() {
            try {
                super.run();
            } catch (Throwable th) {
                fr.a(th, "APSManager$ActionThread", "run");
            }
        }
    }

    public e(Context context) {
        this.e = null;
        this.e = context;
    }

    private static ew a(int i, String str) {
        try {
            ew ewVar = new ew("");
            ewVar.setErrorCode(i);
            ewVar.setLocationDetail(str);
            return ewVar;
        } catch (Throwable th) {
            fr.a(th, "ApsServiceCore", "newInstanceAMapLoc");
            return null;
        }
    }

    private void a(Bundle bundle) {
        try {
            if (this.o) {
                if (this.f != null) {
                    this.f.a();
                    return;
                }
                return;
            }
            fr.a(this.e);
            if (bundle != null) {
                this.n = fr.a(bundle.getBundle("optBundle"));
            }
            this.f.a(this.e);
            this.f.b();
            a(this.n);
            this.f.c();
            this.o = true;
            this.y = true;
            this.z = "";
            if (this.w == null || this.w.size() <= 0) {
                return;
            }
            e();
        } catch (Throwable th) {
            this.y = false;
            th.printStackTrace();
            this.z = th.getMessage();
            fr.a(th, "ApsServiceCore", PointCategory.INIT);
        }
    }

    private void a(Messenger messenger) {
        this.h.remove(messenger);
    }

    private static void a(Messenger messenger, int i, Bundle bundle) {
        if (messenger != null) {
            try {
                Message messageObtain = Message.obtain();
                messageObtain.setData(bundle);
                messageObtain.what = i;
                messenger.send(messageObtain);
            } catch (Throwable th) {
                fr.a(th, "ApsServiceCore", "sendMessage");
            }
        }
    }

    private void a(Messenger messenger, Bundle bundle) {
        if (bundle != null) {
            try {
                if (bundle.isEmpty() || this.p) {
                    return;
                }
                this.p = true;
                b(messenger);
            } catch (Throwable th) {
                fr.a(th, "ApsServiceCore", "doInitAuth");
            }
        }
    }

    private void a(Messenger messenger, AMapLocation aMapLocation, String str, eq eqVar) {
        Bundle bundle = new Bundle();
        bundle.setClassLoader(AMapLocation.class.getClassLoader());
        bundle.putParcelable("loc", aMapLocation);
        bundle.putString("nb", str);
        bundle.putParcelable("statics", eqVar);
        this.h.put(messenger, Long.valueOf(fz.b()));
        a(messenger, 1, bundle);
    }

    private void a(Messenger messenger, String str) {
        Bundle bundle = new Bundle();
        bundle.setClassLoader(AMapLocation.class.getClassLoader());
        bundle.putInt("I_MAX_GEO_DIS", fq.i() * 3);
        bundle.putInt("I_MIN_GEO_DIS", fq.i());
        bundle.putParcelable("loc", this.c);
        a(messenger, "COARSE_LOC".equals(str) ? 103 : 6, bundle);
    }

    private void a(AMapLocationClientOption aMapLocationClientOption) {
        try {
            if (this.f != null) {
                this.f.a(aMapLocationClientOption);
            }
            if (aMapLocationClientOption != null) {
                g = aMapLocationClientOption.isKillProcess();
                if (this.m != null) {
                    if (aMapLocationClientOption.isOffset() != this.m.isOffset() || aMapLocationClientOption.isNeedAddress() != this.m.isNeedAddress() || aMapLocationClientOption.isLocationCacheEnable() != this.m.isLocationCacheEnable() || this.m.getGeoLanguage() != aMapLocationClientOption.getGeoLanguage()) {
                        this.r = 0L;
                    }
                    if (aMapLocationClientOption.isOffset() != this.m.isOffset() || this.m.getGeoLanguage() != aMapLocationClientOption.getGeoLanguage()) {
                        this.c = null;
                    }
                }
                this.m = aMapLocationClientOption;
            }
        } catch (Throwable th) {
            fr.a(th, "ApsServiceCore", "setExtra");
        }
    }

    private static AMapLocationClientOption b(Bundle bundle) {
        AMapLocationClientOption aMapLocationClientOptionA = null;
        try {
            aMapLocationClientOptionA = fr.a(bundle.getBundle("optBundle"));
            try {
                String string = bundle.getString("d");
                if (!TextUtils.isEmpty(string)) {
                    o.a(string);
                }
            } catch (Throwable th) {
                fr.a(th, "APSManager", "doLocation setUmidToken");
            }
        } catch (Throwable th2) {
            fr.a(th2, "APSManager", "parseBundle");
        }
        return aMapLocationClientOptionA;
    }

    static ew b(String str) {
        return a(10, str);
    }

    private void b(Messenger messenger) {
        try {
            this.f.f();
            if (fq.l()) {
                Bundle bundle = new Bundle();
                bundle.putBoolean("installMockApp", true);
                a(messenger, 9, bundle);
            }
        } catch (Throwable th) {
            fr.a(th, "ApsServiceCore", "initAuth");
        }
    }

    private void b(Messenger messenger, Bundle bundle) {
        String str;
        if (bundle != null) {
            try {
                if (bundle.isEmpty()) {
                    return;
                }
                eq eqVar = new eq();
                eqVar.e("conitue");
                AMapLocationClientOption aMapLocationClientOptionB = b(bundle);
                a(aMapLocationClientOptionB);
                if (this.h.containsKey(messenger) && !aMapLocationClientOptionB.isOnceLocation()) {
                    if (fz.b() - this.h.get(messenger).longValue() < 800) {
                        return;
                    }
                }
                AMapLocation aMapLocationA = null;
                if (!this.y) {
                    this.s = a(9, "init error : " + this.z + "#0901");
                    eqVar.f("#0901");
                    a(messenger, this.s, this.s.k(), eqVar);
                    fx.a((String) null, 2091);
                    return;
                }
                long jB = fz.b();
                if (fz.a(this.s) && jB - this.r < 600) {
                    a(messenger, this.s, this.s.k(), eqVar);
                    this.f.a(this.s, 3);
                    return;
                }
                eqVar.c(fz.b());
                try {
                    ew ewVarA = this.f.a(eqVar);
                    this.s = ewVarA;
                    if (ewVarA.getLocationType() == 6 || this.s.getLocationType() == 5) {
                        this.f.a(this.s, 2);
                    } else if (this.s.getLocationType() == 2) {
                        this.f.a(this.s, 3);
                    } else if (this.s.getLocationType() == 4) {
                        this.f.a(this.s, 4);
                    }
                    String[] strArr = new String[0];
                    this.s = this.f.a(this.s);
                } catch (Throwable th) {
                    fx.a((String) null, 2081);
                    eqVar.f("#0801");
                    this.s = a(8, "loc error : " + th.getMessage() + "#0801");
                    fr.a(th, "ApsServiceCore", "run part2");
                }
                if (fz.a(this.s)) {
                    this.r = fz.b();
                }
                if (this.s == null) {
                    this.s = a(8, "loc is null#0801");
                    eqVar.f("#0801");
                }
                if (this.s != null) {
                    String strK = this.s.k();
                    aMapLocationA = this.s.clone();
                    str = strK;
                } else {
                    str = null;
                }
                try {
                    if (aMapLocationClientOptionB.isLocationCacheEnable() && this.v != null) {
                        aMapLocationA = this.v.a(aMapLocationA, str, aMapLocationClientOptionB.getLastLocationLifeCycle());
                    }
                } catch (Throwable th2) {
                    fr.a(th2, "ApsServiceCore", "fixLastLocation");
                }
                a(messenger, aMapLocationA, str, eqVar);
            } catch (Throwable th3) {
                fr.a(th3, "ApsServiceCore", "doLocation");
            }
        }
    }

    public static void d() {
        g = false;
    }

    private void e() {
        if (fz.m(this.e)) {
            Object[] objArr = new Object[1];
            ft.a();
            return;
        }
        try {
            if (this.f == null || this.f == null) {
                return;
            }
            this.f.a(this.d);
            this.f.g();
        } catch (Throwable th) {
            fr.a(th, "ApsServiceCore", "startColl");
        }
    }

    private void f() {
        try {
            fq.c(this.e);
        } catch (Throwable th) {
            fr.a(th, "ApsServiceCore", "doCallOtherSer");
        }
    }

    public final void a() {
        try {
            this.i = new fx();
            b bVar = new b("amapLocCoreThread");
            this.b = bVar;
            bVar.setPriority(5);
            this.b.start();
            this.d = new a(this.b.getLooper());
            this.w = new ArrayList();
        } catch (Throwable th) {
            fr.a(th, "ApsServiceCore", "onCreate");
        }
    }

    public final void a(Intent intent) {
        a aVar;
        if (!"true".equals(intent.getStringExtra("as")) || (aVar = this.d) == null) {
            return;
        }
        aVar.sendEmptyMessageDelayed(9, 100L);
    }

    final void a(Messenger messenger, Bundle bundle, String str) {
        AMapLocationClientOption aMapLocationClientOptionB;
        float fA;
        if (bundle != null) {
            try {
                if (bundle.isEmpty()) {
                    return;
                }
                double d = bundle.getDouble("lat");
                double d2 = bundle.getDouble(com.tkay.core.common.h.c.C);
                float f = bundle.getFloat("radius");
                long j = bundle.getLong("time");
                if ("FINE_LOC".equals(str)) {
                    AMapLocation aMapLocation = new AMapLocation("gps");
                    aMapLocation.setLatitude(d);
                    aMapLocation.setLocationType(1);
                    aMapLocation.setLongitude(d2);
                    aMapLocation.setAccuracy(f);
                    aMapLocation.setTime(j);
                    this.f.a(aMapLocation);
                }
                if (fq.h() && (aMapLocationClientOptionB = b(bundle)) != null && aMapLocationClientOptionB.isNeedAddress()) {
                    a(aMapLocationClientOptionB);
                    if (this.c != null) {
                        fA = fz.a(new double[]{d, d2, this.c.getLatitude(), this.c.getLongitude()});
                        if (fA < fq.i() * 3) {
                            a(messenger, str);
                        }
                    } else {
                        fA = -1.0f;
                    }
                    if (fA == -1.0f || (fA > fq.i() && fz.b() - this.x > fq.j() * 1000)) {
                        a(bundle);
                        this.c = this.f.a(d, d2);
                        this.x = fz.b();
                        if (this.c == null || TextUtils.isEmpty(this.c.getAdCode())) {
                            return;
                        }
                        a(messenger, str);
                    }
                }
            } catch (Throwable th) {
                fr.a(th, "ApsServiceCore", "doLocationGeo");
            }
        }
    }

    public final boolean a(String str) {
        if (TextUtils.isEmpty(this.l)) {
            this.l = fr.b(this.e);
        }
        return !TextUtils.isEmpty(str) && str.equals(this.l);
    }

    public final Handler b() {
        return this.d;
    }

    public final void b(Intent intent) {
        String stringExtra = intent.getStringExtra("a");
        if (!TextUtils.isEmpty(stringExtra)) {
            m.a(this.e, stringExtra);
        }
        String stringExtra2 = intent.getStringExtra("b");
        this.a = stringExtra2;
        l.a(stringExtra2);
        String stringExtra3 = intent.getStringExtra("d");
        if (TextUtils.isEmpty(stringExtra3)) {
            return;
        }
        o.a(stringExtra3);
    }

    public final void c() {
        b bVar;
        try {
            if (this.h != null) {
                this.h.clear();
                this.h = null;
            }
            try {
                if (this.w != null) {
                    this.w.clear();
                }
            } catch (Throwable th) {
                fr.a(th, "apm", "des1");
            }
            if (this.v != null) {
                this.v.c();
                this.v = null;
            }
            this.o = false;
            this.p = false;
            this.f.e();
            if (this.d != null) {
                this.d.removeCallbacksAndMessages(null);
            }
            this.d = null;
            if (this.b != null) {
                if (Build.VERSION.SDK_INT >= 18) {
                    try {
                        fv.a(this.b, (Class<?>) HandlerThread.class, "quitSafely", new Object[0]);
                    } catch (Throwable unused) {
                        bVar = this.b;
                        bVar.quit();
                    }
                } else {
                    bVar = this.b;
                }
                bVar.quit();
            }
            this.b = null;
            if (this.i != null && this.j != 0 && this.k != 0) {
                long jB = fz.b() - this.j;
                fx.a(this.e, this.i.c(this.e), this.i.d(this.e), this.k, jB);
                this.i.e(this.e);
            }
            fx.a(this.e);
            av.b();
            if (g) {
                Process.killProcess(Process.myPid());
            }
        } catch (Throwable th2) {
            fr.a(th2, "apm", "tdest");
        }
    }
}

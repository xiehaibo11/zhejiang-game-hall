package com.mbridge.msdk.foundation.controller;

import android.content.Context;
import android.content.SharedPreferences;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import com.iab.omid.library.mmadbridge.Omid;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.MBridgeSDK;
import com.mbridge.msdk.foundation.controller.a;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.m;
import com.mbridge.msdk.foundation.db.o;
import com.mbridge.msdk.foundation.db.q;
import com.mbridge.msdk.foundation.entity.j;
import com.mbridge.msdk.foundation.entity.n;
import com.mbridge.msdk.foundation.same.b.c;
import com.mbridge.msdk.foundation.same.b.e;
import com.mbridge.msdk.foundation.same.report.d;
import com.mbridge.msdk.foundation.tools.FastKV;
import com.mbridge.msdk.foundation.tools.ac;
import com.mbridge.msdk.foundation.tools.ag;
import com.mbridge.msdk.foundation.tools.ai;
import com.mbridge.msdk.foundation.tools.t;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.x;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.out.AdMobClickListener;
import com.mbridge.msdk.out.Frame;
import com.mbridge.msdk.out.MBridgeSDKFactory;
import java.io.File;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.atomic.AtomicBoolean;

public class b {
    private static volatile b j;
    private Context k;
    private String l;
    private String m;
    private String n;
    private String o;
    private String p;
    private com.mbridge.msdk.b.a r;
    private String s;
    private FastKV u;
    private Map<String, Object> v;
    private int w;
    private AdMobClickListener x;
    private boolean q = false;
    public final int a = 1;
    public final int b = 2;
    public final int c = 3;
    public final int d = 4;
    public final int e = 5;
    public final int f = 6;
    public final int g = 7;
    public final int h = 8;
    private AtomicBoolean t = null;
    Handler i = new Handler(Looper.getMainLooper()) {
        @Override
        public final void handleMessage(Message message) {
            List list;
            List list2;
            try {
                switch (message.what) {
                    case 2:
                        if ((message.obj instanceof List) && (list = (List) message.obj) != null && list.size() > 0) {
                            d dVar = new d(b.this.k, 0);
                            for (int i = 0; i < list.size(); i++) {
                                n nVar = (n) list.get(i);
                                boolean z = false;
                                if (i == list.size() - 1) {
                                    z = true;
                                }
                                dVar.a(nVar, z);
                            }
                            break;
                        }
                        break;
                    case 3:
                        File file = (File) message.obj;
                        if (file != null) {
                            String strA = x.a(file);
                            if (!TextUtils.isEmpty(strA)) {
                                String[] strArrSplit = strA.split("====");
                                if (strArrSplit.length > 0) {
                                    new d(b.this.k).a(strArrSplit[0], file);
                                }
                            }
                        }
                        break;
                    case 4:
                        String str = (String) message.obj;
                        if (!TextUtils.isEmpty(str)) {
                            if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                                com.mbridge.msdk.foundation.same.report.b.a().a(str);
                            } else {
                                new d(b.this.k, 0).a("click_duration", str, (String) null, (Frame) null);
                            }
                        }
                        break;
                    case 5:
                        String str2 = (String) message.obj;
                        if (!TextUtils.isEmpty(str2)) {
                            if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                                com.mbridge.msdk.foundation.same.report.b.a().a(str2);
                            } else {
                                new d(b.this.k, 0).a(com.tkay.expressad.foundation.g.a.az, str2, (String) null, (Frame) null);
                            }
                        }
                        break;
                    case 6:
                        if (message.obj != null && (message.obj instanceof String)) {
                            String str3 = (String) message.obj;
                            if (!TextUtils.isEmpty(str3)) {
                                if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                                    com.mbridge.msdk.foundation.same.report.b.a().a(str3);
                                } else {
                                    new d(b.this.k, 0).a(com.tkay.expressad.foundation.g.a.aD, str3, (String) null, (Frame) null);
                                }
                            }
                            break;
                        }
                        break;
                    case 7:
                        if (message.obj != null && (message.obj instanceof List) && (list2 = (List) message.obj) != null && list2.size() > 0 && com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a("authority_applist")) {
                            ag.a(b.this.k, "mbridge_setting_campaign_time", new Long(System.currentTimeMillis()));
                            Iterator it = list2.iterator();
                            while (it.hasNext()) {
                                new d(b.this.k, 0).a((n) it.next());
                            }
                            break;
                        }
                        break;
                    case 8:
                        if (message.obj != null && (message.obj instanceof String)) {
                            String str4 = (String) message.obj;
                            if (ai.b(str4)) {
                                if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                                    com.mbridge.msdk.foundation.same.report.b.a().a(str4);
                                } else {
                                    new d(b.this.k, 0).a(str4);
                                }
                            }
                            break;
                        }
                        break;
                    case 9:
                        if (((com.mbridge.msdk.c.a) message.obj).K() == 1) {
                            com.mbridge.msdk.foundation.same.report.b.a.a(b.this.k).a();
                        }
                        break;
                }
            } catch (Exception unused) {
                z.d("SDKController", "REPORT HANDLE ERROR!");
            }
        }
    };

    private b() {
    }

    public static b a() {
        if (j == null) {
            synchronized (b.class) {
                if (j == null) {
                    j = new b();
                }
            }
        }
        return j;
    }

    public final void a(Map map, final Context context) {
        String string;
        List<com.mbridge.msdk.foundation.entity.b> listN;
        Object objNewInstance;
        Class<?> cls;
        Object objNewInstance2;
        String str = "";
        if (context != null) {
            if (map.containsKey(MBridgeConstans.ID_MBRIDGE_APPID)) {
                this.n = (String) map.get(MBridgeConstans.ID_MBRIDGE_APPID);
            }
            this.k = context.getApplicationContext();
            a.f().b(this.k);
            try {
                String str2 = (String) map.get(MBridgeConstans.ID_MBRIDGE_APPID);
                if (!TextUtils.isEmpty(str2)) {
                    com.mbridge.msdk.foundation.a.a.a.a().a(MBridgeConstans.SDK_APP_ID, str2);
                }
            } catch (Exception e) {
                e.printStackTrace();
            } catch (Throwable th) {
                th.printStackTrace();
            }
            try {
                com.mbridge.msdk.foundation.same.net.n.a(this.k);
            } catch (Exception unused) {
            }
            if (Build.VERSION.SDK_INT < 26) {
                com.mbridge.msdk.d.b.a(context).a(30000, this.n);
            }
            if (this.q) {
                com.mbridge.msdk.rover.b bVarA = com.mbridge.msdk.rover.b.a();
                bVarA.a(context);
                bVarA.b();
                new d(context).a();
                return;
            }
            v.C(context);
            if (map != null) {
                if (map.containsKey(MBridgeConstans.ID_MBRIDGE_APPID)) {
                    this.n = (String) map.get(MBridgeConstans.ID_MBRIDGE_APPID);
                }
                if (map.containsKey(MBridgeConstans.ID_MBRIDGE_APPKEY)) {
                    this.o = (String) map.get(MBridgeConstans.ID_MBRIDGE_APPKEY);
                }
                if (map.containsKey(MBridgeConstans.ID_MBRIDGE_WX_APPID)) {
                    this.p = (String) map.get(MBridgeConstans.ID_MBRIDGE_WX_APPID);
                }
                if (map.containsKey(MBridgeConstans.PACKAGE_NAME_MANIFEST)) {
                    this.s = (String) map.get(MBridgeConstans.PACKAGE_NAME_MANIFEST);
                }
                if (map.containsKey(MBridgeConstans.ID_MBRIDGE_STARTUPCRASH)) {
                    this.m = (String) map.get(MBridgeConstans.ID_MBRIDGE_STARTUPCRASH);
                }
                try {
                    com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(a.f().k());
                    if (aVarB != null && (listN = aVarB.n()) != null && listN.size() > 0) {
                        for (com.mbridge.msdk.foundation.entity.b bVar : listN) {
                            if (bVar.a() == 287) {
                                Class<?> cls2 = Class.forName("com.mbridge.msdk.interstitialvideo.out.MBInterstitialVideoHandler");
                                if (this.k != null && cls2 != null && (objNewInstance = cls2.getConstructor(String.class, String.class).newInstance("", bVar.b())) != null) {
                                    cls2.getMethod("loadFormSelfFilling", new Class[0]).invoke(objNewInstance, new Object[0]);
                                }
                            } else if (bVar.a() == 94 && (cls = Class.forName("com.mbridge.msdk.out.MBRewardVideoHandler")) != null && (objNewInstance2 = cls.getConstructor(String.class, String.class).newInstance("", bVar.b())) != null) {
                                cls.getMethod("loadFormSelfFilling", new Class[0]).invoke(objNewInstance2, new Object[0]);
                            }
                        }
                    }
                } catch (Throwable th2) {
                    if (MBridgeConstans.DEBUG) {
                        th2.printStackTrace();
                    }
                }
                a.f().c(this.n);
                a.f().d(this.o);
                a.f().e(this.p);
                a.f().b(this.l);
                a.f().a(this.s);
                a.f().a(new a.b() {
                    @Override
                    public final void a() {
                        b.d(b.this);
                    }
                }, this.i);
                Context applicationContext = this.k.getApplicationContext();
                try {
                    Omid.activate(applicationContext);
                    if (!Omid.isActive()) {
                        new d(applicationContext, 0).a("", "", "", "", "activate om failed");
                    }
                } catch (IllegalArgumentException e2) {
                    z.c("SDKController", e2.getMessage(), e2);
                }
                z.b("SDKController", "facebook = " + this.l + "appId = " + this.n + "appKey = " + this.o);
                Context applicationContext2 = this.k.getApplicationContext();
                try {
                    if (d() && this.u == null) {
                        try {
                            this.u = new FastKV.Builder(e.b(c.m), t.b(com.tkay.expressad.foundation.h.v.a)).build();
                        } catch (Exception unused2) {
                            this.u = null;
                        }
                    }
                    if (this.u != null) {
                        String string2 = this.u.getString(t.b(com.tkay.expressad.foundation.g.a.cj), "");
                        String string3 = this.u.getString(t.b(com.tkay.expressad.foundation.g.a.cm), "");
                        if (TextUtils.isEmpty(com.mbridge.msdk.foundation.same.a.t) && TextUtils.isEmpty(com.mbridge.msdk.foundation.same.a.u)) {
                            com.mbridge.msdk.foundation.same.a.t = com.mbridge.msdk.foundation.a.a.a.a().b("b");
                            com.mbridge.msdk.foundation.same.a.u = com.mbridge.msdk.foundation.a.a.a.a().b("c");
                        }
                        if (TextUtils.isEmpty(string2) && TextUtils.isEmpty(string3)) {
                            if (!TextUtils.isEmpty(com.mbridge.msdk.foundation.same.a.t) || !TextUtils.isEmpty(com.mbridge.msdk.foundation.same.a.u)) {
                                this.u.putString(t.b(com.tkay.expressad.foundation.g.a.cj), com.mbridge.msdk.foundation.same.a.t);
                                this.u.putString(t.b(com.tkay.expressad.foundation.g.a.cm), com.mbridge.msdk.foundation.same.a.u);
                            }
                        } else {
                            com.mbridge.msdk.foundation.same.a.t = string2;
                            com.mbridge.msdk.foundation.same.a.u = string3;
                            com.mbridge.msdk.foundation.a.a.a.a().a("b", com.mbridge.msdk.foundation.same.a.t);
                            com.mbridge.msdk.foundation.a.a.a.a().a("c", com.mbridge.msdk.foundation.same.a.u);
                        }
                    } else {
                        SharedPreferences sharedPreferences = applicationContext2.getSharedPreferences(t.b(com.tkay.expressad.foundation.h.v.a), 0);
                        if (sharedPreferences != null) {
                            String string4 = sharedPreferences.getString(t.b(com.tkay.expressad.foundation.g.a.cj), "");
                            string = sharedPreferences.getString(t.b(com.tkay.expressad.foundation.g.a.cm), "");
                            str = string4;
                        } else {
                            string = "";
                        }
                        if (TextUtils.isEmpty(com.mbridge.msdk.foundation.same.a.t) && TextUtils.isEmpty(com.mbridge.msdk.foundation.same.a.u)) {
                            com.mbridge.msdk.foundation.same.a.t = com.mbridge.msdk.foundation.a.a.a.a().b("b");
                            com.mbridge.msdk.foundation.same.a.u = com.mbridge.msdk.foundation.a.a.a.a().b("c");
                        }
                        if (TextUtils.isEmpty(str) && TextUtils.isEmpty(string)) {
                            if ((!TextUtils.isEmpty(com.mbridge.msdk.foundation.same.a.t) || !TextUtils.isEmpty(com.mbridge.msdk.foundation.same.a.u)) && sharedPreferences != null) {
                                SharedPreferences.Editor editorEdit = sharedPreferences.edit();
                                editorEdit.putString(t.b(com.tkay.expressad.foundation.g.a.cj), com.mbridge.msdk.foundation.same.a.t);
                                editorEdit.putString(t.b(com.tkay.expressad.foundation.g.a.cm), com.mbridge.msdk.foundation.same.a.u);
                                editorEdit.apply();
                            }
                        } else {
                            com.mbridge.msdk.foundation.same.a.t = str;
                            com.mbridge.msdk.foundation.same.a.u = string;
                            com.mbridge.msdk.foundation.a.a.a.a().a("b", com.mbridge.msdk.foundation.same.a.t);
                            com.mbridge.msdk.foundation.a.a.a.a().a("c", com.mbridge.msdk.foundation.same.a.u);
                        }
                    }
                } catch (Throwable th3) {
                    z.c("SDKController", th3.getMessage(), th3);
                }
                try {
                    if (MBridgeConstans.INIT_UA_IN) {
                        com.mbridge.msdk.foundation.same.f.b.a().execute(new Runnable() {
                            @Override
                            public final void run() {
                                Looper.prepare();
                                b.this.e();
                                b bVar2 = b.this;
                                b.a(bVar2, bVar2.n);
                                Looper.loop();
                            }
                        });
                    } else if (Looper.myLooper() == Looper.getMainLooper()) {
                        com.mbridge.msdk.foundation.same.f.b.a().execute(new Runnable() {
                            @Override
                            public final void run() {
                                Looper.prepare();
                                b.this.e();
                                Looper.loop();
                            }
                        });
                    } else {
                        e();
                    }
                } catch (Exception unused3) {
                    z.d("SDKController", "get app setting failed");
                }
                c();
                ac.a(this.k);
                this.q = true;
                com.mbridge.msdk.rover.b bVarA2 = com.mbridge.msdk.rover.b.a();
                bVarA2.a(context);
                bVarA2.b();
            }
            long jA = com.mbridge.msdk.c.b.a().g(this.n).a();
            if (jA != 1300) {
                this.i.postDelayed(new Runnable() {
                    @Override
                    public final void run() {
                        v.B(context);
                    }
                }, jA);
            }
        }
    }

    private void e() {
        try {
            Class<?> cls = Class.forName("com.mbridge.msdk.e.b");
            cls.getDeclaredMethod("start", new Class[0]).invoke(cls.getMethod("getInstance", new Class[0]).invoke(null, new Object[0]), new Object[0]);
        } catch (Throwable th) {
            z.c("SDKController", th.getMessage(), th);
        }
    }

    public final void b() {
        Handler handler = this.i;
        if (handler != null) {
            handler.removeCallbacksAndMessages(null);
        }
    }

    public final void c() {
        new Thread(new Runnable() {
            @Override
            public final void run() {
                try {
                    com.mbridge.msdk.foundation.same.report.c.a.a();
                    Context context = b.this.k;
                    String string = null;
                    List<n> listA = (context != null && o.a(i.a(context)).a() > 0) ? o.a(i.a(context)).a(5) : null;
                    if (listA != null && listA.size() > 0) {
                        Message messageObtainMessage = b.this.i.obtainMessage();
                        messageObtainMessage.what = 2;
                        messageObtainMessage.obj = listA;
                        b.this.i.sendMessage(messageObtainMessage);
                    }
                    i iVarA = i.a(b.this.k);
                    com.mbridge.msdk.foundation.db.d dVarA = com.mbridge.msdk.foundation.db.d.a(iVarA);
                    if (dVarA.a() >= 20) {
                        String strA = com.mbridge.msdk.foundation.entity.e.a(dVarA.a(20));
                        Message messageObtain = Message.obtain();
                        messageObtain.obj = strA;
                        messageObtain.what = 4;
                        b.this.i.sendMessage(messageObtain);
                    }
                    m mVarA = m.a(iVarA);
                    if (mVarA.a() > 20) {
                        List<j> listA2 = mVarA.a(20);
                        if (listA2 != null && listA2.size() > 0) {
                            StringBuffer stringBuffer = new StringBuffer();
                            for (j jVar : listA2) {
                                if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
                                    stringBuffer.append("ad_source_id=" + jVar.b());
                                    stringBuffer.append("&time=" + jVar.c());
                                    stringBuffer.append("&num=" + jVar.d());
                                    stringBuffer.append("&unit_id=" + jVar.e());
                                    stringBuffer.append("&key=2000006");
                                    stringBuffer.append("&fb=" + jVar.f());
                                    stringBuffer.append("&network_str=" + jVar.i());
                                    stringBuffer.append("&network_type=" + jVar.h());
                                } else {
                                    stringBuffer.append("ad_source_id=" + jVar.b());
                                    stringBuffer.append("&time=" + jVar.c());
                                    stringBuffer.append("&num=" + jVar.d());
                                    stringBuffer.append("&unit_id=" + jVar.e());
                                    stringBuffer.append("&key=2000006");
                                    stringBuffer.append("&fb=" + jVar.f());
                                }
                                if (jVar.a() == 1) {
                                    stringBuffer.append("&hb=1");
                                }
                                stringBuffer.append("&timeout=" + jVar.g() + "\n");
                            }
                            string = stringBuffer.toString();
                        }
                        Message messageObtain2 = Message.obtain();
                        messageObtain2.obj = string;
                        messageObtain2.what = 5;
                        b.this.i.sendMessage(messageObtain2);
                    }
                    String strB = e.b(c.i);
                    File file = new File(strB);
                    if (file.exists() && file.isDirectory() && file.list().length > 0) {
                        for (String str : file.list()) {
                            File file2 = new File(strB + "/" + str);
                            Message messageObtain3 = Message.obtain();
                            messageObtain3.obj = file2;
                            messageObtain3.what = 3;
                            b.this.i.sendMessage(messageObtain3);
                        }
                    }
                } catch (Exception unused) {
                    z.d("SDKController", "report netstate error !");
                }
            }
        }).start();
    }

    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:38:0x00bf -> B:40:0x00c2). Please report as a decompilation issue!!! */
    public final void a(Map<String, Object> map, int i) {
        if (MBridgeSDKFactory.getMBridgeSDK().getStatus() != MBridgeSDK.PLUGIN_LOAD_STATUS.COMPLETED) {
            z.d("SDKController", "preloaad failed,sdk do not inited");
            return;
        }
        this.v = map;
        this.w = i;
        a.f().k();
        if (map != null) {
            if (this.r == null) {
                this.r = new com.mbridge.msdk.b.a();
            }
            try {
                if (this.v != null && this.v.size() > 0 && this.v.containsKey(MBridgeConstans.PROPERTIES_LAYOUT_TYPE)) {
                    int iIntValue = ((Integer) this.v.get(MBridgeConstans.PROPERTIES_LAYOUT_TYPE)).intValue();
                    if (iIntValue == 0) {
                        Map<String, Object> map2 = this.v;
                        int i2 = this.w;
                        AdMobClickListener adMobClickListener = this.x;
                        try {
                            Class<?> cls = Class.forName("com.mbridge.msdk.mbnative.e.a");
                            cls.getMethod("preload", Map.class, Integer.TYPE, AdMobClickListener.class).invoke(cls.newInstance(), map2, Integer.valueOf(i2), adMobClickListener);
                        } catch (Exception e) {
                            e.printStackTrace();
                        }
                    } else if (3 == iIntValue) {
                        Map<String, Object> map3 = this.v;
                        try {
                            Class<?> cls2 = Class.forName("com.mbridge.msdk.appwall.service.HandlerProvider");
                            cls2.getMethod("preload", Map.class).invoke(cls2.newInstance(), map3);
                        } catch (Exception e2) {
                            e2.printStackTrace();
                        }
                    } else if (1 != iIntValue && 2 != iIntValue) {
                        z.d("SDKController", "unknow layout type in preload");
                    }
                }
            } catch (Exception e3) {
                e3.printStackTrace();
            }
        }
    }

    public final boolean d() {
        Context context = this.k;
        if (context != null && this.t == null) {
            int i = context.getSharedPreferences("mb_optimization_setting", 0).getInt("use_thread_pool", 0);
            AtomicBoolean atomicBoolean = new AtomicBoolean(true);
            this.t = atomicBoolean;
            atomicBoolean.set(i == 0);
        }
        AtomicBoolean atomicBoolean2 = this.t;
        if (atomicBoolean2 != null) {
            return atomicBoolean2.get();
        }
        return true;
    }

    static void a(b bVar, String str) {
        if (com.mbridge.msdk.c.b.a() == null) {
            return;
        }
        com.mbridge.msdk.c.b bVarA = com.mbridge.msdk.c.b.a();
        if (bVarA != null) {
            com.mbridge.msdk.c.a aVarB = bVarA.b(str);
            if (aVarB != null) {
                MBridgeConstans.OMID_JS_SERVICE_URL = aVarB.aM();
                MBridgeConstans.OMID_JS_H5_URL = aVarB.aL();
                if (!TextUtils.isEmpty(aVarB.al())) {
                    com.mbridge.msdk.foundation.same.net.f.d.a().c = aVarB.al();
                    com.mbridge.msdk.foundation.same.net.f.d.a().e();
                }
                if (!TextUtils.isEmpty(aVarB.am())) {
                    com.mbridge.msdk.foundation.same.net.f.d.a().d = aVarB.am();
                    com.mbridge.msdk.foundation.same.net.f.d.a().f();
                }
            } else {
                MBridgeConstans.OMID_JS_SERVICE_URL = com.tkay.expressad.d.a.b.df;
                MBridgeConstans.OMID_JS_H5_URL = "https://mtg-native.rayjump.com/omsdk/omsdkjs_common_js.txt";
            }
        }
        if (com.mbridge.msdk.c.b.a().a(str) && com.mbridge.msdk.c.b.a().a(str, 1, (String) null)) {
            new com.mbridge.msdk.c.c().a(bVar.k, str, bVar.o);
        } else {
            new d(bVar.k).a();
        }
    }

    static void d(b bVar) {
        try {
            long jCurrentTimeMillis = System.currentTimeMillis();
            com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(bVar.n);
            if (aVarB == null) {
                aVarB = com.mbridge.msdk.c.b.a().b();
            }
            long jLongValue = ((Long) ag.b(bVar.k, "mbridge_setting_campaign_time", new Long(0L))).longValue();
            if (jLongValue <= 0 || jLongValue + ((long) (aVarB.N() * 1000)) <= jCurrentTimeMillis) {
                if (aVarB.M() <= 0) {
                    q.a(i.a(a.f().j())).b();
                    return;
                }
                List<n> listC = q.a(i.a(bVar.k)).c();
                if (listC == null || listC.size() <= 0) {
                    return;
                }
                Message messageObtain = Message.obtain();
                messageObtain.obj = listC;
                messageObtain.what = 7;
                bVar.i.sendMessage(messageObtain);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}

package com.mbridge.msdk.foundation.controller;

import android.app.Activity;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.content.pm.PackageManager;
import android.os.Handler;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Looper;
import android.os.Message;
import android.os.Parcel;
import android.os.RemoteException;
import android.text.TextUtils;
import com.google.android.gms.ads.identifier.AdvertisingIdClient;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.entity.i;
import com.mbridge.msdk.foundation.tools.ag;
import com.mbridge.msdk.foundation.tools.ai;
import com.mbridge.msdk.foundation.tools.l;
import com.mbridge.msdk.foundation.tools.t;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.qihoo360.replugin.RePlugin;
import java.io.IOException;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import java.util.concurrent.CopyOnWriteArraySet;
import java.util.concurrent.LinkedBlockingQueue;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class a {
    private static a d;
    private Context e;
    private String f;
    private String g;
    private String h;
    private String i;
    private int j;
    private WeakReference<Context> k;
    private WeakReference<Activity> l;
    private JSONObject n;
    private int o;
    private String s;
    public static final String a = a.class.getSimpleName();
    public static HashMap<String, String> b = new HashMap<>();
    public static List<String> c = new ArrayList();
    private static CopyOnWriteArraySet<i> r = new CopyOnWriteArraySet<>();
    private int m = 0;
    private boolean p = false;
    private List<String> q = null;

    public interface b {
        void a();
    }

    public final WeakReference<Activity> a() {
        return this.l;
    }

    public final void a(WeakReference<Activity> weakReference) {
        this.l = weakReference;
    }

    public final int b() {
        return this.j;
    }

    public final void a(int i) {
        this.j = i;
    }

    public final Context c() {
        WeakReference<Context> weakReference = this.k;
        if (weakReference == null) {
            return null;
        }
        return weakReference.get();
    }

    public final void a(Context context) {
        this.k = new WeakReference<>(context);
    }

    public final void b(int i) {
        this.o = i;
    }

    public final String d() {
        try {
            if (this.e != null) {
                return this.e.getPackageName();
            }
            return null;
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public final void a(String str) {
        try {
            this.s = str;
            if (TextUtils.isEmpty(str) || this.e == null) {
                return;
            }
            ag.a(this.e, com.tkay.expressad.foundation.g.a.bH, str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static Set<i> e() {
        return r;
    }

    private a() {
    }

    public static a f() {
        if (d == null) {
            synchronized (a.class) {
                if (d == null) {
                    d = new a();
                }
            }
        }
        return d;
    }

    public final void a(final b bVar, final Handler handler) {
        if (this.p) {
            return;
        }
        try {
            JSONObject jSONObject = new JSONObject();
            this.n = jSONObject;
            jSONObject.put("webgl", 0);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        try {
            Object objB = ag.b(this.e, "ga_id", RePlugin.PROCESS_UI);
            if (objB != null && (objB instanceof String)) {
                String str = (String) objB;
                if (ai.b(str) && !RePlugin.PROCESS_UI.equals(str)) {
                    z.b(a, "sp init gaid:" + str);
                    if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.h() && com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_DEVICE_ID)) {
                        v.h(str);
                    }
                }
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
        new Thread(new Runnable() {
            @Override
            public final void run() {
                if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_DEVICE_ID)) {
                    if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.h()) {
                        try {
                            Class.forName("com.google.android.gms.ads.identifier.AdvertisingIdClient");
                            AdvertisingIdClient.Info advertisingIdInfo = AdvertisingIdClient.getAdvertisingIdInfo(a.this.e);
                            v.h(advertisingIdInfo.getId());
                            a.a(a.this, advertisingIdInfo.getId());
                        } catch (Exception unused) {
                            z.c(a.a, "GET ADID ERROR TRY TO GET FROM GOOGLE PLAY APP");
                            try {
                                a.a aVarA = a.this.new a().a(a.this.e);
                                v.h(aVarA.a());
                                a.a(a.this, aVarA.a());
                            } catch (Exception unused2) {
                                z.c(a.a, "GET ADID FROM GOOGLE PLAY APP ERROR");
                            }
                        } catch (Throwable th) {
                            th.printStackTrace();
                        }
                    }
                    try {
                        v.b(a.this.e.getPackageManager().getApplicationInfo("com.android.vending", 0).enabled ? 1 : 2);
                    } catch (PackageManager.NameNotFoundException unused3) {
                        v.b(0);
                    } catch (Throwable th2) {
                        z.d(a.a, th2.getMessage());
                    }
                }
                try {
                    com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(a.f().k());
                    if (aVarB == null) {
                        aVarB = com.mbridge.msdk.c.b.a().b();
                    }
                    Message messageObtain = Message.obtain();
                    messageObtain.obj = aVarB;
                    messageObtain.what = 9;
                    handler.sendMessage(messageObtain);
                } catch (Exception e3) {
                    e3.printStackTrace();
                }
                try {
                    v.q(a.this.e);
                    a.g();
                    com.mbridge.msdk.c.b.a(a.this.e, a.this.g);
                    a.this.a(false);
                    a.this.a(bVar);
                } catch (Exception unused4) {
                }
            }
        }).start();
    }

    public static synchronized void g() {
        com.mbridge.msdk.c.a aVarB;
        try {
            if (!TextUtils.isEmpty(f().k()) && (aVarB = com.mbridge.msdk.c.b.a().b(f().k())) != null) {
                String strAk = aVarB.ak();
                if (!TextUtils.isEmpty(strAk)) {
                    String strB = t.b(strAk);
                    if (!TextUtils.isEmpty(strB)) {
                        JSONArray jSONArray = new JSONArray(strB);
                        if (jSONArray.length() > 0) {
                            ArrayList arrayList = new ArrayList();
                            for (int i = 0; i < jSONArray.length(); i++) {
                                arrayList.add(jSONArray.optString(i));
                            }
                            f().q = arrayList;
                        }
                    }
                }
            }
        } catch (Exception unused) {
        }
    }

    public final synchronized void a(b bVar) {
        CopyOnWriteArraySet<i> copyOnWriteArraySetA;
        try {
            copyOnWriteArraySetA = l.a(this.e).a(this.g);
            r = copyOnWriteArraySetA;
        } catch (Throwable unused) {
        }
        if (copyOnWriteArraySetA != null && copyOnWriteArraySetA.size() != 0) {
            CopyOnWriteArraySet copyOnWriteArraySet = new CopyOnWriteArraySet();
            Iterator<i> it = r.iterator();
            if (it != null) {
                while (it.hasNext()) {
                    try {
                        i next = it.next();
                        if (c != null && c.size() > 0 && next != null) {
                            for (int i = 0; i < c.size(); i++) {
                                String str = c.get(i);
                                String strB = next.b();
                                if (!TextUtils.isEmpty(str) && !TextUtils.isEmpty(strB) && str.equals(strB)) {
                                    copyOnWriteArraySet.add(next);
                                }
                            }
                        }
                    } catch (Exception e) {
                        e.printStackTrace();
                        z.d(a, "remove list error");
                    }
                }
            }
            if (r != null) {
                r.clear();
            }
            if (copyOnWriteArraySet.size() > 0) {
                r.addAll(copyOnWriteArraySet);
            }
            l.a(this.e).a(r);
            if (bVar != null) {
                bVar.a();
            }
            return;
        }
        if (bVar != null) {
            bVar.a();
        }
    }

    public final void h() {
        try {
            if (r == null || r.size() <= 0) {
                return;
            }
            l.a(this.e).a(r);
        } catch (Throwable unused) {
        }
    }

    public final List<Long> i() {
        try {
            if (r == null || r.size() <= 0) {
                return null;
            }
            ArrayList arrayList = new ArrayList();
            for (i iVar : r) {
                if (!arrayList.contains(iVar.a())) {
                    try {
                        arrayList.add(Long.valueOf(Long.parseLong(iVar.a())));
                    } catch (NumberFormatException e) {
                        e.printStackTrace();
                    }
                }
            }
            return arrayList;
        } catch (Throwable unused) {
            return null;
        }
    }

    public final Context j() {
        return this.e;
    }

    public final void b(Context context) {
        this.e = context;
    }

    public final void b(String str) {
        this.f = str;
    }

    public final String k() {
        try {
        } catch (Exception e) {
            e.printStackTrace();
        }
        if (!TextUtils.isEmpty(this.g)) {
            return this.g;
        }
        if (this.e != null) {
            return (String) ag.b(this.e, com.tkay.expressad.foundation.g.a.bF, "");
        }
        return "";
    }

    public final void c(String str) {
        try {
            this.g = str;
            if (TextUtils.isEmpty(str) || this.e == null) {
                return;
            }
            ag.a(this.e, com.tkay.expressad.foundation.g.a.bF, str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public final String l() {
        if (!TextUtils.isEmpty(this.h)) {
            return this.h;
        }
        Context context = this.e;
        if (context != null) {
            return (String) ag.b(context, com.tkay.expressad.foundation.g.a.bG, "");
        }
        return null;
    }

    public final void d(String str) {
        try {
            this.h = str;
            if (TextUtils.isEmpty(str) || this.e == null) {
                return;
            }
            ag.a(this.e, com.tkay.expressad.foundation.g.a.bG, str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public final String m() {
        if (!TextUtils.isEmpty(this.i)) {
            return this.i;
        }
        Context context = this.e;
        if (context != null) {
            return (String) ag.b(context, "sp_wx_appKey", "");
        }
        return null;
    }

    public final void e(String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            this.i = str;
            if (this.e != null) {
                ag.a(this.e, "sp_wx_appKey", str);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public final List<String> a(boolean z) {
        try {
            List<String> list = f().q;
            if (z) {
                return c;
            }
            if (c != null && c.size() > 0) {
                return c;
            }
            return c;
        } catch (Exception unused) {
            z.d(a, "get package info list error");
            return null;
        }
    }

    public class a {
        public a() {
        }

        public final class a {
            private final String b;
            private final boolean c;

            a(String str, boolean z) {
                this.b = str;
                this.c = z;
            }

            public final String a() {
                return this.b;
            }
        }

        public final a a(Context context) throws Exception {
            if (Looper.myLooper() == Looper.getMainLooper()) {
                throw new IllegalStateException("Cannot be called from the main thread");
            }
            try {
                context.getPackageManager().getPackageInfo("com.android.vending", 0);
                b bVar = new b();
                Intent intent = new Intent("com.google.android.gms.ads.identifier.service.START");
                intent.setPackage("com.google.android.gms");
                if (context.bindService(intent, bVar, 1)) {
                    try {
                        try {
                            c cVar = new c(bVar.a());
                            return new a(cVar.a(), cVar.a(true));
                        } catch (Exception e) {
                            throw e;
                        }
                    } finally {
                        context.unbindService(bVar);
                    }
                }
                throw new IOException("Google Play connection failed");
            } catch (Exception e2) {
                throw e2;
            }
        }

        private final class b implements ServiceConnection {
            boolean a;
            private final LinkedBlockingQueue<IBinder> c;

            @Override
            public final void onServiceDisconnected(ComponentName componentName) {
            }

            private b() {
                this.a = false;
                this.c = new LinkedBlockingQueue<>(1);
            }

            @Override
            public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
                try {
                    this.c.put(iBinder);
                } catch (InterruptedException unused) {
                }
            }

            public final IBinder a() throws InterruptedException {
                if (this.a) {
                    throw new IllegalStateException();
                }
                this.a = true;
                return this.c.take();
            }
        }

        private final class c implements IInterface {
            private IBinder b;

            public c(IBinder iBinder) {
                this.b = iBinder;
            }

            @Override
            public final IBinder asBinder() {
                return this.b;
            }

            public final String a() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken("com.google.android.gms.ads.identifier.internal.IAdvertisingIdService");
                    this.b.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } catch (Throwable th) {
                    try {
                        th.printStackTrace();
                        parcelObtain2.recycle();
                        parcelObtain.recycle();
                        return null;
                    } finally {
                        parcelObtain2.recycle();
                        parcelObtain.recycle();
                    }
                }
            }

            public final boolean a(boolean z) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                boolean z2 = false;
                try {
                    parcelObtain.writeInterfaceToken("com.google.android.gms.ads.identifier.internal.IAdvertisingIdService");
                    parcelObtain.writeInt(z ? 1 : 0);
                    this.b.transact(2, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    if (parcelObtain2.readInt() != 0) {
                        z2 = true;
                    }
                } finally {
                    try {
                    } finally {
                    }
                }
                return z2;
            }
        }
    }

    public final int n() {
        return this.m;
    }

    public final void c(int i) {
        this.m = i;
    }

    public final JSONObject o() {
        return this.n;
    }

    public final void a(JSONObject jSONObject) {
        this.n = jSONObject;
    }

    static void a(a aVar, String str) {
        try {
            if (ai.b(str)) {
                z.b(a, "saveGAID gaid:" + str);
                ag.a(aVar.e, "ga_id", str);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}

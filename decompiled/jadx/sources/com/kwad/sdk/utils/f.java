package com.kwad.sdk.utils;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.Bundle;
import android.os.Handler;
import android.os.IBinder;
import android.os.Looper;
import android.os.Message;
import android.os.Messenger;
import android.os.RemoteException;
import android.text.TextUtils;
import com.kwad.sdk.collector.AppStatusRules;
import com.kwad.sdk.collector.c;
import com.kwad.sdk.core.threads.GlobalThreadPools;
import com.kwad.sdk.service.ServiceProvider;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import java.io.File;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.ThreadPoolExecutor;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class f {
    private static Handler VH;
    private static Messenger aHL;
    private static volatile ExecutorService aHM;
    private static volatile AppStatusRules aHN;
    private static WeakReference<Context> aHO;
    private static com.kwad.sdk.collector.h aHP;
    private static ServiceConnection aql = new ServiceConnection() { // from class: com.kwad.sdk.utils.f.1
        @Override // android.content.ServiceConnection
        public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                Messenger messenger = new Messenger(iBinder);
                Message messageObtain = Message.obtain();
                messageObtain.what = 100;
                if (!f.HH()) {
                    com.kwad.sdk.core.e.c.w("AppStatusHelper", "clientMessenger init error");
                    return;
                }
                messageObtain.replyTo = f.aHL;
                try {
                    messenger.send(messageObtain);
                } catch (RemoteException unused) {
                }
            } catch (SecurityException e) {
                com.kwad.sdk.core.e.c.printStackTraceOnly(e);
                com.kwad.sdk.service.c.gatherException(e);
            }
        }

        @Override // android.content.ServiceConnection
        public final void onServiceDisconnected(ComponentName componentName) {
        }
    };

    /* JADX INFO: renamed from: com.kwad.sdk.utils.f$2, reason: invalid class name */
    static class AnonymousClass2 implements Runnable {
        final /* synthetic */ Context jz;

        AnonymousClass2(Context context) {
            this.jz = context;
        }

        @Override // java.lang.Runnable
        public final void run() {
            com.kwad.sdk.collector.c.a(this.jz, new c.a() { // from class: com.kwad.sdk.utils.f.2.1
                @Override // com.kwad.sdk.collector.c.a
                public final void b(AppStatusRules appStatusRules) {
                    appStatusRules.initStatus(AnonymousClass2.this.jz);
                    AppStatusRules unused = f.aHN = appStatusRules;
                    f.b(AnonymousClass2.this.jz, f.aHN);
                    f.bH(AnonymousClass2.this.jz);
                    boolean zDl = be.dl(AnonymousClass2.this.jz);
                    boolean zIsAppStatusTargetNotEmpty = AppStatusRules.isAppStatusTargetNotEmpty(f.aHN);
                    com.kwad.sdk.core.e.c.d("AppStatusHelper", "appStatusTargetNotEmpty: " + zIsAppStatusTargetNotEmpty + ", permissionGranted: " + zDl);
                    if (zDl && zIsAppStatusTargetNotEmpty) {
                        long jObtainDefaultScanInterval = f.aHN.obtainDefaultScanInterval();
                        if (jObtainDefaultScanInterval > 0) {
                            f.c(AnonymousClass2.this.jz, jObtainDefaultScanInterval);
                        } else {
                            f.bJ(AnonymousClass2.this.jz);
                        }
                    }
                    boolean zIsUploadTargetNotEmpty = AppStatusRules.isUploadTargetNotEmpty(f.aHN);
                    boolean z = f.aHN.obtainUploadConfigFileMaxSize() > 0;
                    com.kwad.sdk.core.e.c.d("AppStatusHelper", "uploadTargetNotEmpty: " + zIsUploadTargetNotEmpty + ", enableUpload: " + z);
                    if (zIsUploadTargetNotEmpty && z && zDl) {
                        f.HI();
                        f.aHM.submit(new Runnable() { // from class: com.kwad.sdk.utils.f.2.1.1
                            @Override // java.lang.Runnable
                            public final void run() {
                                try {
                                    com.kwad.sdk.collector.j.a(AnonymousClass2.this.jz, f.aHN);
                                } catch (Throwable th) {
                                    com.kwad.sdk.service.c.gatherException(th);
                                    com.kwad.sdk.core.e.c.printStackTraceOnly(th);
                                }
                            }
                        });
                    }
                }

                @Override // com.kwad.sdk.collector.c.a
                public final void k(int i, String str) {
                    com.kwad.sdk.core.e.c.e("AppStatusHelper", "fetchAppStatusConfig onFetchError: " + str + ", code: " + i);
                }
            });
        }
    }

    public static class a implements com.kwad.sdk.core.b {
        private List<Long> aHV = new ArrayList();
        private String appName;
        private String packageName;

        public a() {
        }

        private a(String str, String str2) {
            this.appName = str;
            this.packageName = str2;
        }

        public static JSONArray F(List<com.kwad.sdk.collector.model.b> list) {
            List<a> listG;
            try {
                listG = G(list);
            } catch (Exception e) {
                com.kwad.sdk.service.c.gatherException(e);
                listG = null;
            }
            if (listG == null) {
                return null;
            }
            JSONArray jSONArray = new JSONArray();
            Iterator<a> it = listG.iterator();
            while (it.hasNext()) {
                jSONArray.put(it.next().toJson());
            }
            return jSONArray;
        }

        private static List<a> G(List<com.kwad.sdk.collector.model.b> list) {
            a aVar;
            if (list != null && list.size() != 0) {
                HashMap map = new HashMap();
                try {
                    for (com.kwad.sdk.collector.model.b bVar : list) {
                        String strB = com.kwad.sdk.collector.model.c.b(bVar);
                        if (map.containsKey(strB)) {
                            aVar = (a) map.get(strB);
                        } else {
                            a aVar2 = new a(com.kwad.sdk.collector.model.c.a(bVar), com.kwad.sdk.collector.model.c.b(bVar));
                            map.put(strB, aVar2);
                            aVar = aVar2;
                        }
                        long jC = com.kwad.sdk.collector.model.c.c(bVar) / 1000;
                        if (aVar != null) {
                            aVar.as(jC);
                        }
                    }
                    return new ArrayList(map.values());
                } catch (ClassCastException e) {
                    com.kwad.sdk.core.e.c.printStackTraceOnly(e);
                }
            }
            return null;
        }

        private void as(long j) {
            this.aHV.add(Long.valueOf(j));
        }

        @Override // com.kwad.sdk.core.b
        public final void parseJson(JSONObject jSONObject) {
            if (jSONObject == null) {
                return;
            }
            this.appName = jSONObject.optString("appName");
            this.packageName = jSONObject.optString(DBDefinition.PACKAGE_NAME);
            JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("runningTimes");
            if (jSONArrayOptJSONArray != null) {
                this.aHV.clear();
                int length = jSONArrayOptJSONArray.length();
                for (int i = 0; i < length; i++) {
                    try {
                        this.aHV.add(Long.valueOf(jSONArrayOptJSONArray.getLong(i)));
                    } catch (JSONException e) {
                        com.kwad.sdk.core.e.c.printStackTraceOnly(e);
                    }
                }
            }
        }

        @Override // com.kwad.sdk.core.b
        public final JSONObject toJson() {
            JSONObject jSONObject = new JSONObject();
            t.putValue(jSONObject, "appName", this.appName);
            t.putValue(jSONObject, DBDefinition.PACKAGE_NAME, this.packageName);
            JSONArray jSONArray = new JSONArray();
            Iterator<Long> it = this.aHV.iterator();
            while (it.hasNext()) {
                jSONArray.put(it.next().longValue());
            }
            t.putValue(jSONObject, "runningTimes", jSONArray);
            return jSONObject;
        }
    }

    public interface b {
        void q(List<com.kwad.sdk.collector.model.b> list);
    }

    static class c extends Handler {
        public c(Looper looper) {
            super(looper);
        }

        private static void H(List<a> list) {
            if (list == null) {
                return;
            }
            f.aHP.c(t.I(list));
        }

        private static void b(ArrayList<com.kwad.sdk.collector.model.b> arrayList) {
            JSONArray jSONArrayF;
            if (arrayList == null || (jSONArrayF = a.F(arrayList)) == null) {
                return;
            }
            f.aHP.c(jSONArrayF);
        }

        private void c(Message message) {
            ArrayList arrayList;
            List listA;
            Bundle data = message.getData();
            List<AppStatusRules.Strategy> listA2 = null;
            if (data != null) {
                try {
                    if (data.containsKey("resultJson")) {
                        listA = t.a(data.getString("resultJson"), new com.kwad.sdk.core.c<a>() { // from class: com.kwad.sdk.utils.f.c.1
                            private static a HR() {
                                return new a();
                            }

                            @Override // com.kwad.sdk.core.c
                            public final /* synthetic */ com.kwad.sdk.core.b yV() {
                                return HR();
                            }
                        });
                        arrayList = null;
                    } else {
                        arrayList = (ArrayList) data.getSerializable("data");
                        listA = null;
                    }
                } catch (Throwable unused) {
                    arrayList = null;
                    listA = null;
                }
                if (arrayList != null) {
                    com.kwad.sdk.core.e.c.d("AppStatusHelper", "ClientHandler: handleMessage data size: " + arrayList.size());
                    b(arrayList);
                }
                if (listA != null) {
                    H(listA);
                }
            }
            if (f.aHO != null && f.aHO.get() != null && data != null) {
                if (data.containsKey("allStrategyJson")) {
                    String string = data.getString("allStrategyJson");
                    if (string != null) {
                        listA2 = t.a(string, new com.kwad.sdk.core.c<AppStatusRules.Strategy>() { // from class: com.kwad.sdk.utils.f.c.2
                            private static AppStatusRules.Strategy HS() {
                                return new AppStatusRules.Strategy();
                            }

                            @Override // com.kwad.sdk.core.c
                            public final /* synthetic */ com.kwad.sdk.core.b yV() {
                                return HS();
                            }
                        });
                    }
                } else {
                    listA2 = (ArrayList) data.getSerializable("allStrategy");
                }
                if (listA2 != null) {
                    for (AppStatusRules.Strategy strategy : listA2) {
                        long needSaveLaunchTime = strategy.getNeedSaveLaunchTime();
                        if (needSaveLaunchTime >= 0) {
                            com.kwad.sdk.collector.i.a((Context) f.aHO.get(), strategy, needSaveLaunchTime);
                        }
                    }
                }
            }
            if (f.aHO == null || f.aql == null) {
                return;
            }
            com.kwad.sdk.core.e.c.d("AppStatusHelper", "unbindASService");
            com.kwad.sdk.collector.b.a.b((Context) f.aHO.get(), f.aql);
        }

        @Override // android.os.Handler
        public final void handleMessage(Message message) {
            super.handleMessage(message);
            if (message.what != 101) {
                return;
            }
            try {
                c(message);
            } catch (Throwable th) {
                com.kwad.sdk.core.e.c.printStackTraceOnly(th);
            }
        }
    }

    static class d implements b {
        private b aHX = null;

        public d(b bVar) {
        }

        @Override // com.kwad.sdk.utils.f.b
        public final void q(List<com.kwad.sdk.collector.model.b> list) {
            JSONArray jSONArrayF = a.F(list);
            if (jSONArrayF != null) {
                f.aHP.c(jSONArrayF);
            }
            b bVar = this.aHX;
            if (bVar != null) {
                bVar.q(list);
            }
        }
    }

    private static List<com.kwad.sdk.collector.model.b> E(List<com.kwad.sdk.collector.model.b> list) {
        return list.isEmpty() ? list : new ArrayList(new LinkedHashSet(list));
    }

    public static AppStatusRules HG() {
        return aHN;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static boolean HH() {
        if (aHL == null) {
            try {
                aHL = new Messenger(new c(Looper.getMainLooper()));
            } catch (Throwable unused) {
            }
        }
        return aHL != null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void HI() {
        if (aHM == null) {
            synchronized (f.class) {
                if (aHM == null) {
                    ExecutorService executorServiceCY = GlobalThreadPools.CY();
                    aHM = executorServiceCY;
                    com.kwad.sdk.core.threads.c.a((ThreadPoolExecutor) executorServiceCY, "appStatusHelper");
                }
            }
        }
    }

    private static boolean HJ() {
        try {
            Class<?> cls = Class.forName("com.kwad.sdk.api.proxy.app.ServiceProxyRemote");
            if (cls != null) {
                Context context = ServiceProvider.getContext();
                return context.getPackageManager().queryIntentServices(new Intent(context, cls), 65536).size() > 0;
            }
        } catch (ClassNotFoundException e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
        }
        return false;
    }

    private static List<com.kwad.sdk.collector.model.b> a(AppStatusRules.Strategy strategy) {
        boolean zIsNeedLaunch = strategy.isNeedLaunch();
        com.kwad.sdk.core.e.c.d("AppStatusHelper", "analysisByFile, strategy: " + strategy.getName() + ", needLaunch: " + zIsNeedLaunch);
        return !zIsNeedLaunch ? new ArrayList() : com.kwad.sdk.collector.b.yE().a(strategy);
    }

    public static void a(Context context, long j, com.kwad.sdk.collector.h hVar) {
        if (at.Jh() || com.kwad.sdk.core.config.d.R(8192L) || context == null || com.kwad.sdk.utils.c.bF(context)) {
            return;
        }
        aHP = hVar;
        boolean zIsInMainProcess = SystemUtil.isInMainProcess(context);
        com.kwad.sdk.core.e.c.d("AppStatusHelper", "isMainProcess: " + zIsInMainProcess);
        if (zIsInMainProcess) {
            aHO = new WeakReference<>(context);
            if (VH == null) {
                VH = new Handler(Looper.getMainLooper());
            }
            VH.postDelayed(new AnonymousClass2(context), 30000L);
        }
    }

    public static void a(final Context context, final b bVar) {
        if (context == null || at.Jh() || com.kwad.sdk.core.config.d.R(8192L) || com.kwad.sdk.utils.c.bF(context)) {
            return;
        }
        HI();
        aHM.submit(new Runnable() { // from class: com.kwad.sdk.utils.f.4
            @Override // java.lang.Runnable
            public final void run() {
                List listBK;
                try {
                    HashSet hashSet = new HashSet();
                    if (!be.dl(context) || (listBK = f.bK(context)) == null) {
                        return;
                    }
                    Iterator it = listBK.iterator();
                    while (it.hasNext()) {
                        com.kwad.sdk.core.e.c.d("AppStatusHelper", "AppRunningInfo: " + ((com.kwad.sdk.collector.model.b) it.next()));
                    }
                    hashSet.addAll(listBK);
                    if (bVar != null) {
                        bVar.q(new ArrayList(hashSet));
                    }
                } catch (Throwable th) {
                    com.kwad.sdk.core.e.c.printStackTraceOnly(th);
                    com.kwad.sdk.service.c.gatherException(th);
                }
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void b(Context context, AppStatusRules appStatusRules) {
        File file = new File(context.getFilesDir(), "LOCAL_APP_STATUS_RULES_JSON");
        String string = appStatusRules.toJson().toString();
        if (TextUtils.isEmpty(string)) {
            return;
        }
        com.kwad.sdk.crash.utils.h.k(file.getAbsolutePath(), com.kwad.sdk.core.a.c.cR(string), false);
    }

    public static void bH(Context context) {
        if (aHN == null) {
            aHN = bI(context);
        }
    }

    private static AppStatusRules bI(Context context) {
        File file = new File(context.getFilesDir(), "LOCAL_APP_STATUS_RULES_JSON");
        if (!file.exists()) {
            return null;
        }
        try {
            String strI = com.kwad.sdk.crash.utils.h.I(file);
            if (TextUtils.isEmpty(strI)) {
                return null;
            }
            if (com.kwad.sdk.core.a.c.cT(strI)) {
                strI = com.kwad.sdk.core.a.c.cS(strI);
            }
            JSONObject jSONObject = new JSONObject(strI);
            AppStatusRules appStatusRules = new AppStatusRules();
            appStatusRules.parseJson(jSONObject);
            return appStatusRules;
        } catch (Throwable unused) {
            return null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void bJ(Context context) {
        if (context == null) {
            return;
        }
        boolean zHJ = HJ();
        com.kwad.sdk.core.e.c.d("AppStatusHelper", "isServiceAvailable: " + zHJ);
        if (zHJ) {
            com.kwad.sdk.collector.b.a.a(context, aql);
        } else {
            a(context, new d(null));
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static List<com.kwad.sdk.collector.model.b> bK(Context context) {
        if (!be.dl(context)) {
            return new ArrayList();
        }
        if (aHN == null) {
            aHN = bI(context);
        }
        return bL(context);
    }

    private static List<com.kwad.sdk.collector.model.b> bL(Context context) {
        ArrayList arrayList = new ArrayList();
        if (at.Jh() || com.kwad.sdk.core.config.d.R(8192L) || com.kwad.sdk.utils.c.bF(context)) {
            return arrayList;
        }
        AppStatusRules appStatusRulesHG = HG();
        for (AppStatusRules.Strategy strategy : com.kwad.sdk.collector.i.c(appStatusRulesHG)) {
            arrayList.addAll(a(strategy));
            strategy.setNeedSaveLaunchTime(System.currentTimeMillis());
        }
        AppStatusRules.Strategy strategyD = com.kwad.sdk.collector.i.d(appStatusRulesHG);
        arrayList.addAll(a(strategyD));
        strategyD.setNeedSaveLaunchTime(System.currentTimeMillis());
        return E(arrayList);
    }

    public static void c(final Context context, final long j) {
        if (VH == null) {
            VH = new Handler(Looper.getMainLooper());
        }
        VH.post(new Runnable() { // from class: com.kwad.sdk.utils.f.3
            @Override // java.lang.Runnable
            public final void run() {
                f.bJ(context);
                f.VH.postDelayed(this, j);
            }
        });
    }
}

package com.kwad.components.core.d;

import android.content.Context;
import android.os.Build;
import android.os.Environment;
import com.kuaishou.aegon.Aegon;
import com.kwad.sdk.DownloadTask;
import com.kwad.sdk.KsAdSDKImpl;
import com.kwad.sdk.core.config.d;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.core.report.x;
import com.kwad.sdk.crash.b;
import com.kwad.sdk.crash.c;
import com.kwad.sdk.crash.f;
import com.kwad.sdk.crash.h;
import com.kwad.sdk.crash.model.message.ExceptionMessage;
import com.kwad.sdk.m;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.au;
import com.kwad.sdk.utils.aw;
import com.kwad.sdk.utils.g;
import com.kwad.sdk.utils.k;
import com.kwai.CpuMemoryProfiler;
import com.sigmob.sdk.base.mta.PointCategory;
import java.io.File;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    private static boolean IO;
    private static final AtomicBoolean IP = new AtomicBoolean(false);
    private static List<Throwable> IQ;

    /* JADX INFO: renamed from: com.kwad.components.core.d.a$a, reason: collision with other inner class name */
    static class C0145a {
        public static String aa(Context context) {
            File file = new File(getDataDir(context), "kwad_ex");
            if (!file.exists()) {
                file.mkdir();
            }
            return file.getAbsolutePath();
        }

        private static File getDataDir(Context context) {
            if (Build.VERSION.SDK_INT >= 29) {
                return new File(context.getExternalFilesDir(null).getAbsolutePath());
            }
            File dataDir = Build.VERSION.SDK_INT >= 24 ? context.getDataDir() : null;
            if (dataDir == null) {
                dataDir = new File(Environment.getDataDirectory().getPath() + "/data/" + context.getPackageName());
                if (!dataDir.exists()) {
                    return new File("/data/data/" + context.getPackageName());
                }
            }
            return dataDir;
        }
    }

    private static String ah(String str) {
        try {
            int iIndexOf = str.indexOf(46, str.indexOf(46) + 1);
            if (iIndexOf > 0) {
                return str.substring(0, iIndexOf);
            }
            return null;
        } catch (Throwable th) {
            c.printStackTraceOnly(th);
            return null;
        }
    }

    public static void b(Throwable th) {
        c.printStackTrace(th);
        if (IP.get()) {
            b.l(th);
        } else {
            c(th);
        }
    }

    private static void c(Throwable th) {
        if (IQ == null) {
            IQ = new CopyOnWriteArrayList();
        }
        IQ.add(th);
    }

    public static synchronized void initAsync(Context context) {
        if (context != null) {
            if (!IP.get() && !IO) {
                IO = true;
                g.execute(new aw() { // from class: com.kwad.components.core.d.a.1
                    @Override // com.kwad.sdk.utils.aw
                    public final void doTask() {
                        if (d.b(com.kwad.sdk.core.config.c.akn)) {
                            c.d("KsAdExceptionCollectorHelper", PointCategory.INIT);
                            b.a(a.mD());
                            a.IP.set(true);
                            a.mC();
                        }
                    }
                });
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void mC() {
        List<Throwable> list = IQ;
        if (list == null) {
            return;
        }
        Iterator<Throwable> it = list.iterator();
        while (it.hasNext()) {
            b.l(it.next());
        }
        IQ.clear();
        IQ = null;
        ServiceProvider.d(new com.kwad.sdk.g.a<Throwable>() { // from class: com.kwad.components.core.d.a.2
            private static void d(Throwable th) {
                b.l(th);
            }

            @Override // com.kwad.sdk.g.a
            public final /* synthetic */ void accept(Throwable th) {
                d(th);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static com.kwad.sdk.crash.c mD() {
        final Context context = ServiceProvider.getContext();
        return new c.a().bv(context).bn(d.b(com.kwad.sdk.core.config.c.aly)).bo(d.b(com.kwad.sdk.core.config.c.alz)).bp(KsAdSDKImpl.get().getIsExternal()).em(d.a(com.kwad.sdk.core.config.c.alA)).el(d.a(com.kwad.sdk.core.config.c.alB)).es(ExceptionMessage.getSdkCrashVersionName(KsAdSDKImpl.get().getSDKVersion(), 1)).cC(KsAdSDKImpl.get().getSDKVersionCode()).et(ExceptionMessage.getSdkCrashVersionName(KsAdSDKImpl.get().getApiVersion(), 1)).cD(KsAdSDKImpl.get().getApiVersionCode()).cE(1).er("com.kwad.sdk").eu(context.getPackageName()).ev(ServiceProvider.HE().appId).ew(ServiceProvider.HE().appName).ex(k.bQ(context)).eo(au.getDeviceId()).ep(ServiceProvider.HE().appId).en("Android").eq(C0145a.aa(context)).a(new h() { // from class: com.kwad.components.core.d.a.4
            @Override // com.kwad.sdk.crash.h
            public final com.kwad.sdk.crash.model.message.a mJ() {
                com.kwad.sdk.crash.model.message.a aVar = new com.kwad.sdk.crash.model.message.a();
                aVar.ey(x.Cl());
                aVar.putString("mKsadAppId", ServiceProvider.HE().appId);
                aVar.putString("mKsadAppName", ServiceProvider.HE().appName);
                aVar.putString("mKsadAppPackageName", context.getPackageName());
                aVar.putString("mKsadAppVersion", k.bQ(context));
                aVar.putString("mKsadSdkName", "com.kwad.sdk");
                aVar.putString("mKsadSdkVersion", ExceptionMessage.getSdkCrashVersionName(KsAdSDKImpl.get().getSDKVersion(), 1));
                aVar.putInt("mKsadSdKVersionCode", KsAdSDKImpl.get().getSDKVersionCode());
                aVar.putString("mKsadSdkApiVersion", ExceptionMessage.getSdkCrashVersionName(KsAdSDKImpl.get().getApiVersion(), 1));
                aVar.putInt("mKsadSdKApiVersionCode", KsAdSDKImpl.get().getApiVersionCode());
                aVar.putInt("mKsadSdkType", 1);
                aVar.putInt("mBuildNumber", 471);
                return aVar;
            }
        }).a(new f() { // from class: com.kwad.components.core.d.a.3
            @Override // com.kwad.sdk.crash.f
            public final void a(int i, ExceptionMessage exceptionMessage) {
                m.xU();
                if (i == 1 || i == 3 || i == 4) {
                    com.kwad.sdk.core.e.c.d("KsAdExceptionCollectorHelper", "onOccurred crashType=" + i);
                }
            }
        }).d(mE()).e(mF()).A(d.za()).j(d.a(com.kwad.sdk.core.config.c.amu)).EB();
    }

    private static String[] mE() {
        ArrayList arrayList = new ArrayList();
        try {
            arrayList.add(ah(KsAdSDKImpl.class.getName()));
            arrayList.add(ah(DownloadTask.class.getName()));
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
        }
        try {
            arrayList.add(ah(CpuMemoryProfiler.class.getName()));
            arrayList.add(ah(Aegon.class.getName()));
        } catch (Throwable th2) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(th2);
        }
        return (String[]) arrayList.toArray(new String[arrayList.size()]);
    }

    private static String[] mF() {
        String[] strArr = new String[1];
        try {
            String name = com.kwad.sdk.crash.d.class.getName();
            strArr[0] = name.substring(0, name.lastIndexOf("."));
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
        }
        return strArr;
    }
}

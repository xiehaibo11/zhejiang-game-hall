package com.loc;

import android.app.Application;
import android.app.Notification;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.IBinder;
import android.os.Looper;
import android.os.Message;
import android.os.Messenger;
import android.os.RemoteException;
import android.text.TextUtils;
import android.util.Log;
import android.webkit.WebView;
import com.amap.api.location.AMapLocation;
import com.amap.api.location.AMapLocationClientOption;
import com.amap.api.location.AMapLocationListener;
import com.amap.api.location.AMapLocationQualityReport;
import com.amap.api.location.APSService;
import com.amap.api.location.UmidtokenInfo;
import com.ss.android.socialbase.downloader.constants.DownloadErrorCode;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.concurrent.atomic.AtomicBoolean;

public final class d {
    private static boolean H = true;
    private static boolean J;
    private static AtomicBoolean K = new AtomicBoolean(false);
    public static volatile boolean g;
    private Context D;
    private g E;
    ew a;
    public c c;
    j k;
    Intent n;
    AMapLocationClientOption b = new AMapLocationClientOption();
    h d = null;
    private boolean F = false;
    private volatile boolean G = false;
    ArrayList<AMapLocationListener> e = new ArrayList<>();
    boolean f = false;
    public boolean h = true;
    public boolean i = true;
    public boolean j = true;
    Messenger l = null;
    Messenger m = null;
    int o = 0;
    private boolean I = true;
    b p = null;
    boolean q = false;
    AMapLocationClientOption.AMapLocationMode r = AMapLocationClientOption.AMapLocationMode.Hight_Accuracy;
    Object s = new Object();
    fx t = null;
    boolean u = false;
    e v = null;
    private AMapLocationClientOption L = new AMapLocationClientOption();
    private i M = null;
    String w = null;
    private ServiceConnection N = new ServiceConnection() {
        @Override
        public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            try {
                d.this.l = new Messenger(iBinder);
                d.this.F = true;
                d.this.u = true;
            } catch (Throwable th) {
                fr.a(th, "ALManager", "onServiceConnected");
            }
        }

        @Override
        public final void onServiceDisconnected(ComponentName componentName) {
            d.this.l = null;
            d.this.F = false;
        }
    };
    AMapLocationQualityReport x = null;
    boolean y = false;
    boolean z = false;
    private volatile boolean O = false;
    a A = null;
    String B = null;
    boolean C = false;

    static class 3 {
        static final int[] a;

        static {
            int[] iArr = new int[AMapLocationClientOption.AMapLocationMode.values().length];
            a = iArr;
            try {
                iArr[AMapLocationClientOption.AMapLocationMode.Battery_Saving.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                a[AMapLocationClientOption.AMapLocationMode.Device_Sensors.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                a[AMapLocationClientOption.AMapLocationMode.Hight_Accuracy.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
        }
    }

    public class a extends Handler {
        public a(Looper looper) {
            super(looper);
        }

        /* JADX WARN: Multi-variable type inference failed */
        /* JADX WARN: Type inference failed for: r0v0 */
        /* JADX WARN: Type inference failed for: r0v1 */
        /* JADX WARN: Type inference failed for: r0v2, types: [java.lang.String] */
        /* JADX WARN: Type inference failed for: r0v3, types: [java.lang.String] */
        /* JADX WARN: Type inference failed for: r0v7 */
        @Override
        public final void handleMessage(Message message) {
            ?? r0 = 0;
            try {
                super.handleMessage(message);
                if (fq.h) {
                    Log.e("AMapLocationClient", "SERVICE_NOT_AVAILABLE");
                }
                int i = message.what;
                if (i == 11) {
                    d.this.a(message.getData());
                    return;
                }
                if (i == 12) {
                    d.this.b(message);
                    return;
                }
                if (i == 1011) {
                    d.this.a(14, (Bundle) null);
                    d.this.g();
                    return;
                }
                try {
                    switch (i) {
                        case 1002:
                            d.this.c((AMapLocationListener) message.obj);
                            break;
                        case 1003:
                            d.this.j();
                            d.this.a(13, (Bundle) null);
                            break;
                        case 1004:
                            d.this.l();
                            d.this.a(14, (Bundle) null);
                            break;
                        case 1005:
                            d.this.d((AMapLocationListener) message.obj);
                            break;
                        default:
                            switch (i) {
                                case 1014:
                                    d.this.a(message);
                                    break;
                                case 1015:
                                    d.this.d.a(d.this.b);
                                    d.this.a(1025, (Object) null, 300000L);
                                    break;
                                case 1016:
                                    if (fz.m(d.this.D)) {
                                        Object[] objArr = new Object[1];
                                        ft.a();
                                        d.this.r();
                                    } else if (!d.this.d.b()) {
                                        d.this.n();
                                    } else {
                                        d.this.a(1016, (Object) null, 1000L);
                                    }
                                    break;
                                case 1017:
                                    d.this.d.a();
                                    d.this.a(1025);
                                    break;
                                case 1018:
                                    d.this.b = (AMapLocationClientOption) message.obj;
                                    if (d.this.b != null) {
                                        d.this.s();
                                    }
                                    break;
                                default:
                                    switch (i) {
                                        case DownloadErrorCode.ERROR_IO:
                                            d.this.c(message);
                                            break;
                                        case 1024:
                                            d.this.d(message);
                                            break;
                                        case 1025:
                                            if (d.this.d.f()) {
                                                d.this.d.a();
                                                d.this.d.a(d.this.b);
                                            }
                                            d.this.a(1025, (Object) null, 300000L);
                                            break;
                                        case DownloadErrorCode.ERROR_CUR_BYTES_ZERO:
                                            ft.b();
                                            d.this.E.a(d.this.b);
                                            break;
                                        case DownloadErrorCode.ERROR_CUR_NOT_EQUALS_TOTAL:
                                            d.this.E.a();
                                            break;
                                        case DownloadErrorCode.ERROR_SAVE_PATH_EMPTY:
                                            d.this.g((AMapLocation) message.obj);
                                            break;
                                    }
                                    break;
                            }
                            break;
                    }
                } catch (Throwable th) {
                    r0 = message;
                    th = th;
                    if (r0 == 0) {
                        r0 = "handleMessage";
                    }
                    fr.a(th, "AMapLocationManage$MHandlerr", r0);
                }
            } catch (Throwable th2) {
                th = th2;
            }
        }
    }

    static class b extends HandlerThread {
        d a;

        public b(String str, d dVar) {
            super(str);
            this.a = null;
            this.a = dVar;
        }

        @Override
        protected final void onLooperPrepared() {
            try {
                this.a.k.a();
                fw.a(this.a.D);
                this.a.p();
                if (this.a != null && this.a.D != null) {
                    fq.b(this.a.D);
                    fq.a(this.a.D);
                }
                super.onLooperPrepared();
            } catch (Throwable unused) {
            }
        }

        @Override
        public final void run() {
            try {
                super.run();
            } catch (Throwable unused) {
            }
        }
    }

    public class c extends Handler {
        public c() {
        }

        public c(Looper looper) {
            super(looper);
        }

        @Override
        public final void handleMessage(Message message) {
            try {
                super.handleMessage(message);
                if (d.this.q) {
                    return;
                }
                int i = message.what;
                if (i == 1) {
                    Message messageObtainMessage = d.this.A.obtainMessage();
                    messageObtainMessage.what = 11;
                    messageObtainMessage.setData(message.getData());
                    d.this.A.sendMessage(messageObtainMessage);
                    return;
                }
                if (i != 2) {
                    if (i == 13) {
                        if (d.this.a != null) {
                            d.this.a(d.this.a);
                            return;
                        }
                        AMapLocation aMapLocation = new AMapLocation("LBS");
                        aMapLocation.setErrorCode(33);
                        d.this.a(aMapLocation);
                        return;
                    }
                    switch (i) {
                        case 5:
                            Bundle data = message.getData();
                            data.putBundle("optBundle", fr.a(d.this.b));
                            d.this.a(10, data);
                            return;
                        case 6:
                            Bundle data2 = message.getData();
                            if (d.this.d != null) {
                                d.this.d.a(data2);
                                return;
                            }
                            return;
                        case 7:
                            d.this.I = message.getData().getBoolean("ngpsAble");
                            return;
                        case 8:
                            fx.a((String) null, 2141);
                            break;
                        case 9:
                            boolean unused = d.J = message.getData().getBoolean("installMockApp");
                            return;
                        case 10:
                            d.this.a((AMapLocation) message.obj);
                            return;
                        default:
                            switch (i) {
                                case 100:
                                    fx.a((String) null, 2155);
                                    break;
                                case 101:
                                    break;
                                case 102:
                                    Bundle data3 = message.getData();
                                    data3.putBundle("optBundle", fr.a(d.this.b));
                                    d.this.a(15, data3);
                                    return;
                                case 103:
                                    Bundle data4 = message.getData();
                                    if (d.this.E != null) {
                                        d.this.E.a(data4);
                                        return;
                                    }
                                    return;
                                default:
                                    return;
                            }
                            Message messageObtain = Message.obtain();
                            messageObtain.what = DownloadErrorCode.ERROR_SAVE_PATH_EMPTY;
                            messageObtain.obj = message.obj;
                            d.this.A.sendMessage(messageObtain);
                            if (d.this.L == null || !d.this.L.getCacheCallBack() || d.this.c == null) {
                                return;
                            }
                            d.this.c.removeMessages(13);
                            return;
                    }
                }
                Message messageObtain2 = Message.obtain();
                messageObtain2.what = 12;
                messageObtain2.obj = message.obj;
                d.this.A.sendMessage(messageObtain2);
                if (d.this.L == null || !d.this.L.getCacheCallBack() || d.this.c == null) {
                    return;
                }
                d.this.c.removeMessages(13);
            } catch (Throwable th) {
                fr.a(th, "AmapLocationManager$MainHandler", 0 == 0 ? "handleMessage" : null);
            }
        }
    }

    public d(Context context, Intent intent, Looper looper) {
        this.n = null;
        this.D = context;
        this.n = intent;
        b(looper);
    }

    private a a(Looper looper) {
        a aVar;
        synchronized (this.s) {
            aVar = new a(looper);
            this.A = aVar;
        }
        return aVar;
    }

    private ew a(er erVar, boolean z) {
        if (!this.b.isLocationCacheEnable()) {
            return null;
        }
        try {
            return erVar.a(z);
        } catch (Throwable th) {
            fr.a(th, "ALManager", "doFirstCacheLoc");
            return null;
        }
    }

    private void a(int i) {
        synchronized (this.s) {
            if (this.A != null) {
                this.A.removeMessages(i);
            }
        }
    }

    private void a(int i, Bundle bundle) {
        if (bundle == null) {
            try {
                bundle = new Bundle();
            } catch (Throwable th) {
                boolean z = (th instanceof IllegalStateException) && th.getMessage().contains("sending message to a Handler on a dead thread");
                if ((th instanceof RemoteException) || z) {
                    this.l = null;
                    this.F = false;
                }
                fr.a(th, "ALManager", "sendLocMessage");
                return;
            }
        }
        if (TextUtils.isEmpty(this.w)) {
            this.w = fr.b(this.D);
        }
        bundle.putString("c", this.w);
        Message messageObtain = Message.obtain();
        messageObtain.what = i;
        messageObtain.setData(bundle);
        messageObtain.replyTo = this.m;
        if (this.l != null) {
            this.l.send(messageObtain);
        }
    }

    private void a(int i, Object obj, long j) {
        synchronized (this.s) {
            if (this.A != null) {
                Message messageObtain = Message.obtain();
                messageObtain.what = i;
                if (obj instanceof Bundle) {
                    messageObtain.setData((Bundle) obj);
                } else {
                    messageObtain.obj = obj;
                }
                this.A.sendMessageDelayed(messageObtain, j);
            }
        }
    }

    private static void a(final Context context) {
        if (K.compareAndSet(false, true)) {
            cr.a().b(new cs() {
                @Override
                public final void a() {
                    o.l();
                    o.a(context);
                    o.f(context);
                }
            });
        }
    }

    private void a(Intent intent) {
        try {
            this.D.bindService(intent, this.N, 1);
        } catch (Throwable th) {
            fr.a(th, "ALManager", "startServiceImpl");
        }
    }

    private void a(Intent intent, boolean z) {
        if (this.D != null) {
            if (Build.VERSION.SDK_INT < 26 || !z) {
                this.D.startService(intent);
            } else if (!t()) {
                Log.e("amapapi", "-------------调用后台定位服务，缺少权限：android.permission.FOREGROUND_SERVICE--------------");
                return;
            } else {
                try {
                    this.D.getClass().getMethod("startForegroundService", Intent.class).invoke(this.D, intent);
                } catch (Throwable unused) {
                    this.D.startService(intent);
                }
            }
            this.C = true;
        }
    }

    private void a(Bundle bundle) {
        eq eqVar;
        AMapLocation aMapLocation;
        AMapLocation aMapLocationA = null;
        if (bundle != null) {
            try {
                bundle.setClassLoader(AMapLocation.class.getClassLoader());
                aMapLocation = (AMapLocation) bundle.getParcelable("loc");
                this.B = bundle.getString("nb");
                eqVar = (eq) bundle.getParcelable("statics");
                if (aMapLocation != null) {
                    try {
                        if (aMapLocation.getErrorCode() == 0 && this.d != null) {
                            this.d.c();
                            if (!TextUtils.isEmpty(aMapLocation.getAdCode())) {
                                h.y = aMapLocation;
                            }
                        }
                    } catch (Throwable th) {
                        th = th;
                        fr.a(th, "AmapLocationManager", "resultLbsLocationSuccess");
                    }
                }
            } catch (Throwable th2) {
                th = th2;
                eqVar = null;
                fr.a(th, "AmapLocationManager", "resultLbsLocationSuccess");
            }
        } else {
            eqVar = null;
            aMapLocation = null;
        }
        aMapLocationA = this.d != null ? this.d.a(aMapLocation, this.B) : aMapLocation;
        a(aMapLocationA, eqVar);
    }

    private void a(Message message) {
        try {
            Bundle data = message.getData();
            AMapLocation aMapLocation = (AMapLocation) data.getParcelable("loc");
            String string = data.getString("lastLocNb");
            f(aMapLocation);
            if (this.k.a(aMapLocation, string)) {
                this.k.d();
            }
        } catch (Throwable th) {
            fr.a(th, "ALManager", "doSaveLastLocation");
        }
    }

    private void a(AMapLocation aMapLocation) {
        try {
            if (aMapLocation.getErrorCode() != 0) {
                aMapLocation.setLocationType(0);
            }
            if (aMapLocation.getErrorCode() == 0) {
                double latitude = aMapLocation.getLatitude();
                double longitude = aMapLocation.getLongitude();
                if ((latitude == 0.0d && longitude == 0.0d) || latitude < -90.0d || latitude > 90.0d || longitude < -180.0d || longitude > 180.0d) {
                    fx.a("errorLatLng", aMapLocation.toStr());
                    aMapLocation.setLocationType(0);
                    aMapLocation.setErrorCode(8);
                    aMapLocation.setLocationDetail("LatLng is error#0802");
                }
            }
            if ("gps".equalsIgnoreCase(aMapLocation.getProvider()) || !this.d.b()) {
                aMapLocation.setAltitude(fz.c(aMapLocation.getAltitude()));
                aMapLocation.setBearing(fz.a(aMapLocation.getBearing()));
                aMapLocation.setSpeed(fz.a(aMapLocation.getSpeed()));
                c(aMapLocation);
                b(aMapLocation);
                Iterator<AMapLocationListener> it = this.e.iterator();
                while (it.hasNext()) {
                    try {
                        it.next().onLocationChanged(aMapLocation);
                    } catch (Throwable unused) {
                    }
                }
            }
        } catch (Throwable unused2) {
        }
    }

    private synchronized void a(AMapLocation aMapLocation, eq eqVar) {
        if (aMapLocation == null) {
            try {
                aMapLocation = new AMapLocation("");
                aMapLocation.setErrorCode(8);
                aMapLocation.setLocationDetail("amapLocation is null#0801");
            } catch (Throwable th) {
                fr.a(th, "ALManager", "handlerLocation part3");
                return;
            }
        }
        if (!"gps".equalsIgnoreCase(aMapLocation.getProvider())) {
            aMapLocation.setProvider("lbs");
        }
        if (this.x == null) {
            this.x = new AMapLocationQualityReport();
        }
        this.x.setLocationMode(this.b.getLocationMode());
        if (this.d != null) {
            this.x.setGPSSatellites(this.d.e());
            this.x.setGpsStatus(this.d.d());
        }
        this.x.setWifiAble(fz.g(this.D));
        this.x.setNetworkType(fz.h(this.D));
        if (aMapLocation.getLocationType() == 1 || "gps".equalsIgnoreCase(aMapLocation.getProvider())) {
            this.x.setNetUseTime(0L);
        }
        if (eqVar != null) {
            this.x.setNetUseTime(eqVar.a());
        }
        this.x.setInstallHighDangerMockApp(J);
        aMapLocation.setLocationQualityReport(this.x);
        try {
            if (this.G) {
                a(aMapLocation, this.B);
                if (eqVar != null) {
                    eqVar.d(fz.b());
                }
                fx.a(this.D, aMapLocation, eqVar);
                fx.a(this.D, aMapLocation);
                d(aMapLocation.clone());
                fw.a(this.D).a(aMapLocation);
                fw.a(this.D).b();
            }
        } catch (Throwable th2) {
            fr.a(th2, "ALManager", "handlerLocation part2");
        }
        if (this.q) {
            return;
        }
        if (this.b.isOnceLocation()) {
            l();
            a(14, (Bundle) null);
        }
    }

    private void a(AMapLocation aMapLocation, String str) {
        Bundle bundle = new Bundle();
        bundle.putParcelable("loc", aMapLocation);
        bundle.putString("lastLocNb", str);
        a(1014, bundle, 0L);
    }

    private static void a(er erVar) {
        try {
            erVar.d();
            erVar.a(new AMapLocationClientOption().setNeedAddress(false));
            erVar.a(true, new eq());
        } catch (Throwable th) {
            fr.a(th, "ALManager", "apsLocation:doFirstNetLocate 2");
        }
    }

    private void a(er erVar, eq eqVar) {
        try {
            erVar.a(this.D);
            erVar.a(this.b);
            erVar.b(eqVar);
        } catch (Throwable th) {
            fr.a(th, "ALManager", "initApsBase");
        }
    }

    private static void a(er erVar, ew ewVar) {
        if (ewVar != null) {
            try {
                if (ewVar.getErrorCode() == 0) {
                    erVar.b(ewVar);
                }
            } catch (Throwable th) {
                fr.a(th, "ALManager", "apsLocation:doFirstAddCache");
            }
        }
    }

    /* JADX WARN: Can't wrap try/catch for region: R(24:0|2|(12:124|3|101|4|(1:6)|120|10|(1:12)|16|17|119|18)|(5:20|(1:36)(2:22|(3:25|(2:27|(1:31))|36)(1:24))|105|88|94)(1:32)|37|(21:(1:40)(1:41)|117|42|(2:44|(1:46))|47|(3:115|56|57)(1:60)|111|61|(1:65)|103|69|(1:73)|107|74|(1:76)|77|(1:79)|(1:87)|105|88|94)(1:53)|54|(0)(0)|111|61|(2:63|65)|103|69|(2:71|73)|107|74|(0)|77|(0)|(2:85|87)|105|88|94|(2:(0)|(1:110))) */
    /* JADX WARN: Code restructure failed: missing block: B:67:0x00eb, code lost:
    
        r8 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:68:0x00ec, code lost:
    
        com.loc.fr.a(r8, "ALManager", "fixLastLocation");
     */
    /* JADX WARN: Code restructure failed: missing block: B:81:0x0127, code lost:
    
        r1 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:82:0x0128, code lost:
    
        com.loc.fr.a(r1, "ALManager", "apsLocation:callback");
     */
    /* JADX WARN: Removed duplicated region for block: B:115:0x00c2 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:60:0x00d1  */
    /* JADX WARN: Removed duplicated region for block: B:76:0x010b A[Catch: all -> 0x0127, TryCatch #3 {all -> 0x0127, blocks: (B:74:0x0104, B:76:0x010b, B:77:0x011e, B:79:0x0123), top: B:107:0x0104, outer: #7 }] */
    /* JADX WARN: Removed duplicated region for block: B:79:0x0123 A[Catch: all -> 0x0127, TRY_LEAVE, TryCatch #3 {all -> 0x0127, blocks: (B:74:0x0104, B:76:0x010b, B:77:0x011e, B:79:0x0123), top: B:107:0x0104, outer: #7 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private ew b(er erVar) {
        ew ewVar;
        Throwable th;
        boolean zM;
        boolean z;
        ew ewVarA;
        boolean z2;
        String strK;
        AMapLocation aMapLocationClone = null;
        this.a = null;
        eq eqVar = new eq();
        try {
            eqVar.c(fz.b());
            try {
                String apikey = AMapLocationClientOption.getAPIKEY();
                if (!TextUtils.isEmpty(apikey)) {
                    m.a(this.D, apikey);
                }
            } catch (Throwable th2) {
                fr.a(th2, "ALManager", "apsLocation setAuthKey");
            }
            try {
                String umidtoken = UmidtokenInfo.getUmidtoken();
                if (!TextUtils.isEmpty(umidtoken)) {
                    o.a(umidtoken);
                }
            } catch (Throwable th3) {
                fr.a(th3, "ALManager", "apsLocation setUmidToken");
            }
            a(erVar, eqVar);
            zM = fq.m();
            z = false;
            try {
            } catch (Throwable th4) {
                fr.a(th4, "ALManager", "apscach");
            }
        } catch (Throwable th5) {
            ewVar = null;
            th = th5;
            try {
                fr.a(th, "ALManager", "apsLocation");
                return ewVar;
            } finally {
                try {
                    erVar.e();
                } catch (Throwable unused) {
                }
            }
        }
        if (this.L.getCacheCallBack()) {
            ewVarA = a(erVar, this.L.getCacheCallBack());
            if (ewVarA == null) {
                ewVarA = null;
            } else if (!fq.a(ewVarA.getTime())) {
                if (this.L.getCacheCallBack()) {
                    int cacheTimeOut = this.L.getCacheTimeOut();
                    long jA = fz.a() - ewVarA.getTime();
                    if (jA > 0 && jA < cacheTimeOut) {
                        this.a = ewVarA;
                        ewVarA.setLocationType(10);
                    }
                }
                ewVarA = null;
            }
            return ewVar;
        }
        ewVarA = a(erVar, false);
        if (ewVarA == null) {
            try {
                ewVarA = erVar.a(!zM, eqVar);
                if (ewVarA != null) {
                    if (ewVarA.getErrorCode() == 0) {
                        z = true;
                    }
                }
                ewVar = ewVarA;
                z2 = z;
                z = true;
            } catch (Throwable th6) {
                try {
                    fr.a(th6, "ALManager", "apsLocation:doFirstNetLocate");
                    ewVar = ewVarA;
                    z = true;
                    z2 = false;
                } catch (Throwable th7) {
                    th = th7;
                    ewVar = ewVarA;
                    fr.a(th, "ALManager", "apsLocation");
                    return ewVar;
                }
            }
            if (ewVar == null) {
                try {
                    strK = ewVar.k();
                    aMapLocationClone = ewVar.clone();
                } catch (Throwable th8) {
                    th = th8;
                    fr.a(th, "ALManager", "apsLocation");
                }
            } else {
                strK = null;
            }
            if (this.b.isLocationCacheEnable() && this.k != null) {
                aMapLocationClone = this.k.a(aMapLocationClone, strK, this.b.getLastLocationLifeCycle());
            }
            if (this.L.getCacheCallBack() && this.c != null) {
                this.c.removeMessages(13);
            }
            Bundle bundle = new Bundle();
            if (aMapLocationClone != null) {
                bundle.putParcelable("loc", aMapLocationClone);
                bundle.putString("nb", ewVar.k());
                bundle.putParcelable("statics", eqVar);
            }
            a(bundle);
            if (z2) {
                a(erVar, ewVar);
            }
            if (z && zM && !g) {
                g = true;
                a(erVar);
            }
            return ewVar;
        }
        ewVar = ewVarA;
        z2 = false;
        if (ewVar == null) {
        }
        if (this.b.isLocationCacheEnable()) {
            aMapLocationClone = this.k.a(aMapLocationClone, strK, this.b.getLastLocationLifeCycle());
        }
        if (this.L.getCacheCallBack()) {
            this.c.removeMessages(13);
        }
        Bundle bundle2 = new Bundle();
        if (aMapLocationClone != null) {
        }
        a(bundle2);
        if (z2) {
        }
        if (z) {
            g = true;
            a(erVar);
        }
        return ewVar;
    }

    private void b(Looper looper) {
        try {
            if (looper == null) {
                this.c = Looper.myLooper() == null ? new c(this.D.getMainLooper()) : new c();
            } else {
                this.c = new c(looper);
            }
        } catch (Throwable th) {
            fr.a(th, "ALManager", "init 1");
        }
        try {
            try {
                this.k = new j(this.D);
            } catch (Throwable th2) {
                fr.a(th2, "ALManager", "init 2");
            }
            b bVar = new b("amapLocManagerThread", this);
            this.p = bVar;
            bVar.setPriority(5);
            this.p.start();
            this.A = a(this.p.getLooper());
        } catch (Throwable th3) {
            fr.a(th3, "ALManager", "init 5");
        }
        try {
            this.d = new h(this.D, this.c);
            this.E = new g(this.D, this.c);
        } catch (Throwable th4) {
            fr.a(th4, "ALManager", "init 3");
        }
        if (this.t == null) {
            this.t = new fx();
        }
        a(this.D);
    }

    private void b(Message message) {
        try {
            AMapLocation aMapLocation = (AMapLocation) message.obj;
            if (this.h && this.l != null) {
                Bundle bundle = new Bundle();
                bundle.putBundle("optBundle", fr.a(this.b));
                a(0, bundle);
                if (this.G) {
                    a(13, (Bundle) null);
                }
                this.h = false;
            }
            a(aMapLocation, (eq) null);
            a(1025);
            a(1025, (Object) null, 300000L);
        } catch (Throwable th) {
            fr.a(th, "ALManager", "resultGpsLocationSuccess");
        }
    }

    private static void b(AMapLocation aMapLocation) {
        if (aMapLocation == null) {
            return;
        }
        try {
            if (2 == aMapLocation.getLocationType() || 4 == aMapLocation.getLocationType()) {
                long time = aMapLocation.getTime();
                long jCurrentTimeMillis = System.currentTimeMillis();
                if (jCurrentTimeMillis > time) {
                    aMapLocation.setTime(jCurrentTimeMillis);
                }
            }
        } catch (Throwable unused) {
        }
    }

    private void c(Message message) {
        if (message == null) {
            return;
        }
        try {
            Bundle data = message.getData();
            if (data == null) {
                return;
            }
            int i = data.getInt(com.kuaishou.weapon.p0.t.e, 0);
            Notification notification = (Notification) data.getParcelable(at.g);
            Intent intentQ = q();
            intentQ.putExtra(com.kuaishou.weapon.p0.t.e, i);
            intentQ.putExtra(at.g, notification);
            intentQ.putExtra(at.f, 1);
            a(intentQ, true);
        } catch (Throwable th) {
            fr.a(th, "ALManager", "doEnableBackgroundLocation");
        }
    }

    private void c(AMapLocation aMapLocation) {
        if (aMapLocation != null) {
            try {
                String locationDetail = aMapLocation.getLocationDetail();
                StringBuilder sb = TextUtils.isEmpty(locationDetail) ? new StringBuilder() : new StringBuilder(locationDetail);
                boolean zC = fz.c(this.D, "EYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19XSUZJX1NUQVRF");
                boolean zC2 = fz.c(this.D, "WYW5kcm9pZC5wZXJtaXNzaW9uLkNIQU5HRV9XSUZJX1NUQVRF");
                boolean zC3 = fz.c(this.D, "WYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19MT0NBVElPTl9FWFRSQV9DT01NQU5EUw==");
                boolean zC4 = fz.c(this.D, "EYW5kcm9pZC5wZXJtaXNzaW9uLlJFQURfUEhPTkVfU1RBVEU=");
                boolean zC5 = fz.c(this.D, "EYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19GSU5FX0xPQ0FUSU9O");
                boolean zC6 = fz.c(this.D, "EYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19DT0FSU0VfTE9DQVRJT04=");
                sb.append(zC ? "#pm1" : "#pm0");
                String str = "1";
                sb.append(zC2 ? "1" : "0");
                sb.append(zC3 ? "1" : "0");
                sb.append(zC4 ? "1" : "0");
                sb.append(zC5 ? "1" : "0");
                if (!zC6) {
                    str = "0";
                }
                sb.append(str);
                aMapLocation.setLocationDetail(sb.toString());
            } catch (Throwable unused) {
                ft.b();
            }
        }
    }

    private void c(AMapLocationListener aMapLocationListener) {
        if (aMapLocationListener == null) {
            throw new IllegalArgumentException("listener参数不能为null");
        }
        if (this.e == null) {
            this.e = new ArrayList<>();
        }
        if (this.e.contains(aMapLocationListener)) {
            return;
        }
        this.e.add(aMapLocationListener);
    }

    private void d(Message message) {
        if (message == null) {
            return;
        }
        try {
            Bundle data = message.getData();
            if (data == null) {
                return;
            }
            boolean z = data.getBoolean(at.j, true);
            Intent intentQ = q();
            intentQ.putExtra(at.j, z);
            intentQ.putExtra(at.f, 2);
            a(intentQ, false);
        } catch (Throwable th) {
            fr.a(th, "ALManager", "doDisableBackgroundLocation");
        }
    }

    private void d(AMapLocation aMapLocation) {
        Message messageObtainMessage = this.c.obtainMessage();
        messageObtainMessage.what = 10;
        messageObtainMessage.obj = aMapLocation;
        this.c.sendMessage(messageObtainMessage);
    }

    private void d(AMapLocationListener aMapLocationListener) {
        if (!this.e.isEmpty() && this.e.contains(aMapLocationListener)) {
            this.e.remove(aMapLocationListener);
        }
        if (this.e.isEmpty()) {
            l();
        }
    }

    private synchronized void e(AMapLocation aMapLocation) {
        if (aMapLocation == null) {
            try {
                aMapLocation = new AMapLocation("");
                aMapLocation.setErrorCode(8);
                aMapLocation.setLocationDetail("coarse amapLocation is null#2005");
            } catch (Throwable th) {
                fr.a(th, "ALManager", "handlerCoarseLocation part2");
                return;
            }
        }
        if (this.x == null) {
            this.x = new AMapLocationQualityReport();
        }
        this.x.setLocationMode(this.b.getLocationMode());
        if (this.E != null) {
            this.x.setGPSSatellites(aMapLocation.getSatellites());
            this.x.setGpsStatus(this.E.b());
        }
        this.x.setWifiAble(fz.g(this.D));
        this.x.setNetworkType(fz.h(this.D));
        this.x.setNetUseTime(0L);
        this.x.setInstallHighDangerMockApp(J);
        aMapLocation.setLocationQualityReport(this.x);
        try {
            if (this.G) {
                fx.a(this.D, aMapLocation);
                d(aMapLocation.clone());
                fw.a(this.D).a(aMapLocation);
                fw.a(this.D).b();
            }
        } catch (Throwable th2) {
            fr.a(th2, "ALManager", "handlerCoarseLocation part");
        }
        if (this.q) {
            return;
        }
        if (this.E != null) {
            l();
        }
        a(14, (Bundle) null);
    }

    private void f(AMapLocation aMapLocation) {
        if (aMapLocation == null) {
            return;
        }
        AMapLocation aMapLocationA = null;
        try {
            if (j.b != null) {
                aMapLocationA = j.b.a();
            } else if (this.k != null) {
                aMapLocationA = this.k.b();
            }
            fx.a(aMapLocationA, aMapLocation);
        } catch (Throwable unused) {
        }
    }

    private void g(AMapLocation aMapLocation) {
        try {
            if (this.i && this.l != null) {
                Bundle bundle = new Bundle();
                bundle.putBundle("optBundle", fr.a(this.b));
                a(0, bundle);
                if (this.G) {
                    a(13, (Bundle) null);
                }
                this.i = false;
            }
            e(aMapLocation);
        } catch (Throwable th) {
            fr.a(th, "ALManager", "resultGpsLocationSuccess");
        }
    }

    private void h() {
        synchronized (this.s) {
            if (this.A != null) {
                this.A.removeCallbacksAndMessages(null);
            }
            this.A = null;
        }
    }

    private boolean i() {
        boolean z = false;
        int i = 0;
        while (this.l == null) {
            try {
                Thread.sleep(100L);
                i++;
                if (i >= 50) {
                    break;
                }
            } catch (Throwable th) {
                fr.a(th, "ALManager", "checkAPSManager");
            }
        }
        if (this.l == null) {
            Message messageObtain = Message.obtain();
            Bundle bundle = new Bundle();
            AMapLocation aMapLocation = new AMapLocation("");
            aMapLocation.setErrorCode(10);
            aMapLocation.setLocationDetail(!fz.k(this.D.getApplicationContext()) ? "请检查配置文件是否配置服务，并且manifest中service标签是否配置在application标签内#1003" : "启动ApsServcie失败#1001");
            bundle.putParcelable("loc", aMapLocation);
            messageObtain.setData(bundle);
            messageObtain.what = 1;
            this.c.sendMessage(messageObtain);
        } else {
            z = true;
        }
        if (!z) {
            fx.a((String) null, !fz.k(this.D.getApplicationContext()) ? 2103 : 2101);
        }
        return z;
    }

    private synchronized void j() {
        if ((Build.VERSION.SDK_INT < 29 && Build.VERSION.SDK_INT >= 23 && !fz.c(this.D, "EYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19DT0FSU0VfTE9DQVRJT04=") && !fz.c(this.D, "EYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19GSU5FX0xPQ0FUSU9O")) || ((Build.VERSION.SDK_INT < 31 && Build.VERSION.SDK_INT >= 29 && this.D.getApplicationInfo().targetSdkVersion >= 29 && !fz.c(this.D, "EYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19GSU5FX0xPQ0FUSU9O")) || ((Build.VERSION.SDK_INT < 31 && Build.VERSION.SDK_INT >= 29 && this.D.getApplicationInfo().targetSdkVersion < 29 && !fz.c(this.D, "EYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19DT0FSU0VfTE9DQVRJT04=") && !fz.c(this.D, "EYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19GSU5FX0xPQ0FUSU9O")) || (Build.VERSION.SDK_INT >= 31 && !fz.c(this.D, "EYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19DT0FSU0VfTE9DQVRJT04=") && !fz.c(this.D, "EYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19GSU5FX0xPQ0FUSU9O"))))) {
            k();
            return;
        }
        if (this.b == null) {
            this.b = new AMapLocationClientOption();
        }
        if (this.G) {
            return;
        }
        this.G = true;
        int i = 3.a[this.b.getLocationMode().ordinal()];
        long gpsFirstTimeout = 0;
        if (i == 1) {
            a(DownloadErrorCode.ERROR_CUR_NOT_EQUALS_TOTAL, (Object) null, 0L);
            a(1017, (Object) null, 0L);
            a(1016, (Object) null, 0L);
            return;
        }
        if (i == 2) {
            if (fz.m(this.D)) {
                a(1016);
                a(1017, (Object) null, 0L);
                a(DownloadErrorCode.ERROR_CUR_BYTES_ZERO, (Object) null, 0L);
                return;
            } else {
                a(1016);
                a(DownloadErrorCode.ERROR_CUR_NOT_EQUALS_TOTAL, (Object) null, 0L);
                a(1015, (Object) null, 0L);
                return;
            }
        }
        if (i == 3) {
            if (fz.m(this.D)) {
                a(1016);
                a(1017, (Object) null, 0L);
                a(DownloadErrorCode.ERROR_CUR_BYTES_ZERO, (Object) null, 0L);
            } else {
                a(DownloadErrorCode.ERROR_CUR_NOT_EQUALS_TOTAL, (Object) null, 0L);
                a(1015, (Object) null, 0L);
                if (this.b.isGpsFirst() && this.b.isOnceLocation()) {
                    gpsFirstTimeout = this.b.getGpsFirstTimeout();
                }
                a(1016, (Object) null, gpsFirstTimeout);
            }
        }
    }

    private void k() {
        AMapLocation aMapLocation = new AMapLocation("");
        aMapLocation.setErrorCode(12);
        aMapLocation.setLocationDetail("定位权限被禁用,请授予应用定位权限 #1201");
        if (this.x == null) {
            this.x = new AMapLocationQualityReport();
        }
        AMapLocationQualityReport aMapLocationQualityReport = new AMapLocationQualityReport();
        this.x = aMapLocationQualityReport;
        aMapLocationQualityReport.setGpsStatus(4);
        this.x.setGPSSatellites(0);
        this.x.setLocationMode(this.b.getLocationMode());
        this.x.setWifiAble(fz.g(this.D));
        this.x.setNetworkType(fz.h(this.D));
        this.x.setNetUseTime(0L);
        aMapLocation.setLocationQualityReport(this.x);
        fx.a((String) null, 2121);
        d(aMapLocation);
    }

    private void l() {
        try {
            a(1025);
            if (this.d != null) {
                this.d.a();
            }
            if (this.E != null) {
                this.E.a();
            }
            a(1016);
            this.G = false;
            this.o = 0;
        } catch (Throwable th) {
            fr.a(th, "ALManager", "stopLocation");
        }
    }

    private void m() {
        ew ewVarB = b(new er(true));
        if (i()) {
            Bundle bundle = new Bundle();
            String str = (ewVarB == null || !(ewVarB.getLocationType() == 2 || ewVarB.getLocationType() == 4)) ? "0" : "1";
            bundle.putBundle("optBundle", fr.a(this.b));
            bundle.putString("isCacheLoc", str);
            a(0, bundle);
            if (this.G) {
                a(13, (Bundle) null);
            }
        }
    }

    private void n() {
        try {
            if (H || !(this.u || this.O)) {
                H = false;
                this.O = true;
                m();
            } else {
                try {
                    if (this.u && !a() && !this.z) {
                        this.z = true;
                        p();
                    }
                } catch (Throwable th) {
                    this.z = true;
                    fr.a(th, "ALManager", "doLBSLocation reStartService");
                }
                if (i()) {
                    this.z = false;
                    Bundle bundle = new Bundle();
                    bundle.putBundle("optBundle", fr.a(this.b));
                    bundle.putString("d", UmidtokenInfo.getUmidtoken());
                    if (!this.d.b()) {
                        a(1, bundle);
                    }
                }
            }
        } catch (Throwable th2) {
            try {
                fr.a(th2, "ALManager", "doLBSLocation");
                try {
                    if (this.b.isOnceLocation()) {
                        return;
                    }
                    o();
                } catch (Throwable unused) {
                }
            } finally {
                try {
                    if (!this.b.isOnceLocation()) {
                        o();
                    }
                } catch (Throwable unused2) {
                }
            }
        }
    }

    private void o() {
        if (this.b.getLocationMode() != AMapLocationClientOption.AMapLocationMode.Device_Sensors) {
            a(1016, (Object) null, this.b.getInterval() >= 1000 ? this.b.getInterval() : 1000L);
        }
    }

    private void p() {
        try {
            if (this.m == null) {
                this.m = new Messenger(this.c);
            }
            a(q());
        } catch (Throwable unused) {
        }
    }

    private Intent q() {
        String apikey;
        if (this.n == null) {
            this.n = new Intent(this.D, (Class<?>) APSService.class);
        }
        try {
            apikey = !TextUtils.isEmpty(AMapLocationClientOption.getAPIKEY()) ? AMapLocationClientOption.getAPIKEY() : l.f(this.D);
        } catch (Throwable th) {
            fr.a(th, "ALManager", "startServiceImpl p2");
            apikey = "";
        }
        this.n.putExtra("a", apikey);
        this.n.putExtra("b", l.c(this.D));
        this.n.putExtra("d", UmidtokenInfo.getUmidtoken());
        return this.n;
    }

    private void r() {
        try {
            StringBuilder sb = new StringBuilder();
            new eq().f("#2001");
            sb.append("模糊权限下不支持低功耗定位#2001");
            fx.a((String) null, 2153);
            ew ewVar = new ew("");
            ewVar.setErrorCode(20);
            ewVar.setLocationDetail(sb.toString());
            g(ewVar);
        } catch (Throwable th) {
            fr.a(th, "ALManager", "apsLocation:callback");
        }
    }

    private void s() {
        fx fxVar;
        Context context;
        int i;
        this.d.b(this.b);
        this.E.b(this.b);
        if (this.G && !this.b.getLocationMode().equals(this.r)) {
            l();
            j();
        }
        this.r = this.b.getLocationMode();
        if (this.t != null) {
            if (this.b.isOnceLocation()) {
                fxVar = this.t;
                context = this.D;
                i = 0;
            } else {
                fxVar = this.t;
                context = this.D;
                i = 1;
            }
            fxVar.a(context, i);
            this.t.a(this.D, this.b);
        }
    }

    private boolean t() {
        if (fz.j(this.D)) {
            int iB = -1;
            try {
                iB = fv.b(((Application) this.D.getApplicationContext()).getBaseContext(), "checkSelfPermission", "android.permission.FOREGROUND_SERVICE");
            } catch (Throwable unused) {
            }
            if (iB != 0) {
                return false;
            }
        }
        return true;
    }

    public final void a(int i, Notification notification) {
        if (i == 0 || notification == null) {
            return;
        }
        try {
            if (this.j && this.l != null) {
                Bundle bundle = new Bundle();
                bundle.putBundle("optBundle", fr.a(this.b));
                a(0, bundle);
                this.j = false;
            }
            Bundle bundle2 = new Bundle();
            bundle2.putInt(com.kuaishou.weapon.p0.t.e, i);
            bundle2.putParcelable(at.g, notification);
            a(DownloadErrorCode.ERROR_IO, bundle2, 0L);
        } catch (Throwable th) {
            fr.a(th, "ALManager", "disableBackgroundLocation");
        }
    }

    public final void a(WebView webView) {
        if (this.M == null) {
            this.M = new i(this.D, webView);
        }
        this.M.a();
    }

    public final void a(AMapLocationClientOption aMapLocationClientOption) {
        try {
            this.L = aMapLocationClientOption.clone();
            a(1018, aMapLocationClientOption.clone(), 0L);
        } catch (Throwable th) {
            fr.a(th, "ALManager", "setLocationOption");
        }
    }

    public final void a(AMapLocationListener aMapLocationListener) {
        try {
            a(1002, aMapLocationListener, 0L);
        } catch (Throwable th) {
            fr.a(th, "ALManager", "setLocationListener");
        }
    }

    public final void a(boolean z) {
        try {
            Bundle bundle = new Bundle();
            bundle.putBoolean(at.j, z);
            a(1024, bundle, 0L);
        } catch (Throwable th) {
            fr.a(th, "ALManager", "disableBackgroundLocation");
        }
    }

    public final boolean a() {
        return this.F;
    }

    public final void b() {
        try {
            if (this.L.getCacheCallBack() && this.c != null) {
                this.c.sendEmptyMessageDelayed(13, this.L.getCacheCallBackTime());
            }
        } catch (Throwable unused) {
        }
        try {
            a(1003, (Object) null, 0L);
        } catch (Throwable th) {
            fr.a(th, "ALManager", "startLocation");
        }
    }

    public final void b(AMapLocationListener aMapLocationListener) {
        try {
            a(1005, aMapLocationListener, 0L);
        } catch (Throwable th) {
            fr.a(th, "ALManager", "unRegisterLocationListener");
        }
    }

    public final void c() {
        try {
            a(1004, (Object) null, 0L);
        } catch (Throwable th) {
            fr.a(th, "ALManager", "stopLocation");
        }
    }

    public final void d() {
        try {
            if (this.M != null) {
                this.M.b();
                this.M = null;
            }
            a(1011, (Object) null, 0L);
            this.q = true;
        } catch (Throwable th) {
            fr.a(th, "ALManager", "onDestroy");
        }
    }

    public final AMapLocation e() {
        AMapLocation aMapLocationB = null;
        try {
            if (this.k != null && (aMapLocationB = this.k.b()) != null) {
                aMapLocationB.setTrustedLevel(3);
            }
        } catch (Throwable th) {
            fr.a(th, "ALManager", "getLastKnownLocation");
        }
        return aMapLocationB;
    }

    public final void f() {
        try {
            if (this.M != null) {
                this.M.b();
                this.M = null;
            }
        } catch (Throwable th) {
            fr.a(th, "ALManager", "stopAssistantLocation");
        }
    }

    final void g() {
        a(12, (Bundle) null);
        this.h = true;
        this.i = true;
        this.j = true;
        this.F = false;
        this.u = false;
        l();
        fx fxVar = this.t;
        if (fxVar != null) {
            fxVar.b(this.D);
        }
        fw.a(this.D).a();
        fx.a(this.D);
        e eVar = this.v;
        if (eVar != null) {
            eVar.b().sendEmptyMessage(11);
        } else {
            ServiceConnection serviceConnection = this.N;
            if (serviceConnection != null) {
                this.D.unbindService(serviceConnection);
            }
        }
        try {
            if (this.C) {
                this.D.stopService(q());
            }
        } catch (Throwable unused) {
        }
        this.C = false;
        ArrayList<AMapLocationListener> arrayList = this.e;
        if (arrayList != null) {
            arrayList.clear();
            this.e = null;
        }
        this.N = null;
        h();
        if (this.p != null) {
            if (Build.VERSION.SDK_INT >= 18) {
                try {
                    fv.a(this.p, (Class<?>) HandlerThread.class, "quitSafely", new Object[0]);
                } catch (Throwable unused2) {
                    this.p.quit();
                }
            } else {
                this.p.quit();
            }
        }
        this.p = null;
        c cVar = this.c;
        if (cVar != null) {
            cVar.removeCallbacksAndMessages(null);
        }
        j jVar = this.k;
        if (jVar != null) {
            jVar.c();
            this.k = null;
        }
    }
}

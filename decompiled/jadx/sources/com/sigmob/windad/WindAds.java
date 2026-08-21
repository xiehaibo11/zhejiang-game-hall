package com.sigmob.windad;

import android.app.Activity;
import android.content.Context;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.logger.SigmobLog;
import com.kuaishou.weapon.p0.g;
import com.sigmob.sdk.Sigmob;
import com.sigmob.sdk.b;
import com.sigmob.sdk.base.c;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.sdk.base.mta.PointEntitySigmobError;
import com.sigmob.windad.consent.ConsentStatus;

/* JADX INFO: loaded from: classes3.dex */
public class WindAds {
    public static final String ADN_ID = "ADN_ID";
    public static final String AD_SCENE_DESC = "scene_desc";
    public static final String AD_SCENE_ID = "scene_id";
    public static final String AUCTION_PRICE = "AUCTION_PRICE";
    public static final String CNY = "CNY";
    public static final String CURRENCY = "CURRENCY";
    public static final String HIGHEST_LOSS_PRICE = "HIGHEST_LOSS_PRICE";
    public static final String LOSS_REASON = "LOSS_REASON";
    public static final String USD = "USD";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile WindAds f5281a;
    private boolean d;
    private OnInitializationListener f;
    private int h;
    private int j;
    private int k;
    private boolean b = false;
    private boolean g = true;
    private boolean i = true;
    private WindAdOptions c = null;
    private Handler e = new Handler(Looper.getMainLooper());

    /* JADX INFO: renamed from: com.sigmob.windad.WindAds$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static final /* synthetic */ int[] f5282a;

        static {
            int[] iArr = new int[ConsentStatus.values().length];
            f5282a = iArr;
            try {
                iArr[ConsentStatus.ACCEPT.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                f5282a[ConsentStatus.DENIED.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                f5282a[ConsentStatus.UNKNOWN.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
        }
    }

    private WindAds() {
    }

    private void a() {
        OnInitializationListener onInitializationListener = this.f;
        if (onInitializationListener != null) {
            onInitializationListener.OnInitializationSuccess();
        }
    }

    private void a(String str) {
        SigmobLog.e("startWithOptions " + str);
        OnInitializationListener onInitializationListener = this.f;
        if (onInitializationListener != null) {
            onInitializationListener.OnInitializationFail(str);
        }
        throw new RuntimeException(str);
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x002d A[Catch: all -> 0x002f, PHI: r1
      0x002d: PHI (r1v2 int) = (r1v1 int), (r1v3 int) binds: [B:8:0x0027, B:10:0x002a] A[DONT_GENERATE, DONT_INLINE], TRY_LEAVE, TryCatch #1 {all -> 0x002f, blocks: (B:7:0x0012, B:12:0x002d), top: B:19:0x0012 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void b() {
        /*
            r3 = this;
            int r0 = r3.h
            if (r0 != 0) goto L2f
            com.sigmob.sdk.base.c r0 = com.sigmob.sdk.base.c.a()     // Catch: java.lang.Throwable -> Le
            int r0 = r0.g()     // Catch: java.lang.Throwable -> Le
            r3.h = r0     // Catch: java.lang.Throwable -> Le
        Le:
            int r0 = r3.h
            if (r0 != 0) goto L2f
            android.content.Context r0 = com.sigmob.sdk.b.b()     // Catch: java.lang.Throwable -> L2f
            com.sigmob.windad.consent.WindAdConsentInformation r0 = com.sigmob.windad.consent.WindAdConsentInformation.getInstance(r0)     // Catch: java.lang.Throwable -> L2f
            com.sigmob.windad.consent.ConsentStatus r0 = r0.getConsentStatus()     // Catch: java.lang.Throwable -> L2f
            int[] r1 = com.sigmob.windad.WindAds.AnonymousClass1.f5282a     // Catch: java.lang.Throwable -> L2f
            int r0 = r0.ordinal()     // Catch: java.lang.Throwable -> L2f
            r0 = r1[r0]     // Catch: java.lang.Throwable -> L2f
            r1 = 1
            if (r0 == r1) goto L2d
            r1 = 2
            if (r0 == r1) goto L2d
            goto L2f
        L2d:
            r3.h = r1     // Catch: java.lang.Throwable -> L2f
        L2f:
            com.sigmob.sdk.base.c r0 = com.sigmob.sdk.base.c.a()
            int r1 = r3.h
            r2 = 0
            r0.c(r1, r2)
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.sigmob.windad.WindAds.b():void");
    }

    private void c() {
        try {
            if (this.j == 0) {
                this.j = c.a().c();
            } else {
                c.a().b(this.j, false);
            }
            if (this.k == 0) {
                this.k = c.a().b();
            } else {
                c.a().a(this.k, false);
            }
        } catch (Throwable unused) {
        }
    }

    private void d() {
        try {
            c();
            b();
            c.a().b(this.i, false);
            c.a().a(this.g, false);
        } catch (Throwable th) {
            SigmobLog.e("loadPrivacyInfo", th);
        }
    }

    public static String getUserId() {
        return ClientMetadata.getUserId();
    }

    public static String getVersion() {
        return "4.9.0";
    }

    public static void requestPermission(Activity activity) {
        if (activity == null || Build.VERSION.SDK_INT < 23) {
            return;
        }
        boolean zIsPermissionGranted = ClientMetadata.isPermissionGranted(activity, "android.permission.READ_PHONE_STATE");
        boolean zIsPermissionGranted2 = ClientMetadata.isPermissionGranted(activity, "android.permission.WRITE_EXTERNAL_STORAGE");
        boolean zIsPermissionGranted3 = ClientMetadata.isPermissionGranted(activity, g.g);
        if (zIsPermissionGranted && zIsPermissionGranted2 && zIsPermissionGranted3) {
            return;
        }
        activity.requestPermissions(new String[]{"android.permission.READ_PHONE_STATE", "android.permission.WRITE_EXTERNAL_STORAGE", g.g}, 0);
    }

    public static void setOAIDCertPem(String str) {
        try {
            ClientMetadata.setOAIDCertPem(str);
        } catch (Throwable unused) {
            SigmobLog.e("not support OAID Module");
        }
    }

    public static void setUserId(String str) {
        ClientMetadata.setUserId(str);
    }

    public static WindAds sharedAds() {
        if (f5281a == null) {
            synchronized (WindAds.class) {
                if (f5281a == null) {
                    f5281a = new WindAds();
                    f5281a.setDebugEnable(true);
                }
            }
        }
        return f5281a;
    }

    public void debugDeviceID() {
        boolean z;
        boolean z2;
        String advertisingId;
        try {
            String deviceId = ClientMetadata.getInstance().getDeviceId();
            z2 = true;
            if (TextUtils.isEmpty(deviceId)) {
                z = false;
            } else {
                SigmobLog.i(String.format("debug device Type: IMEI,  ID => %s", deviceId));
                z = true;
            }
            try {
                advertisingId = ClientMetadata.getInstance().getAdvertisingId();
                if (!TextUtils.isEmpty(advertisingId)) {
                    SigmobLog.i(String.format("debug device Type: gaid, ID => %s", advertisingId));
                    z = true;
                }
            } catch (Throwable unused) {
            }
        } catch (Throwable unused2) {
            z = false;
        }
        if (TextUtils.isEmpty(ClientMetadata.getInstance().getOAID())) {
            z2 = z;
        } else {
            SigmobLog.i(String.format("debug device Type oaid, ID => %s", advertisingId));
        }
        if (z2) {
            return;
        }
        SigmobLog.e(String.format("can't find any can be used debug valid Device Type", new Object[0]));
    }

    public int getAgeRestrictedStatus() {
        return this.j;
    }

    public String getAppId() {
        WindAdOptions windAdOptions = this.c;
        if (windAdOptions != null) {
            return windAdOptions.getAppId();
        }
        return null;
    }

    public String getAppKey() {
        WindAdOptions windAdOptions = this.c;
        if (windAdOptions != null) {
            return windAdOptions.getAppKey();
        }
        return null;
    }

    public Handler getHandler() {
        if (this.e == null) {
            this.e = new Handler(Looper.getMainLooper());
        }
        return this.e;
    }

    public WindAdOptions getOptions() {
        return this.c;
    }

    public String getSDKToken() {
        if (this.b) {
            return Sigmob.getInstance().getSDKToken();
        }
        return null;
    }

    public int getUserAge() {
        return this.k;
    }

    public int getUserGDPRConsentStatus() {
        return this.h;
    }

    public String getWindUid() {
        try {
            return ClientMetadata.getUid();
        } catch (Exception e) {
            e.printStackTrace();
            return "Please initialize the SDK properly first";
        }
    }

    public boolean isAdult() {
        return this.g;
    }

    public boolean isDebugEnable() {
        return this.d;
    }

    public boolean isInit() {
        return this.b;
    }

    public boolean isPersonalizedAdvertisingOn() {
        return this.i;
    }

    public void setAdult(boolean z) {
        this.g = z;
        SigmobLog.i("Windads -> setAdult " + z);
        if (this.b) {
            c.a().a(z, true);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:8:0x0014  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void setDebugEnable(boolean r2) {
        /*
            r1 = this;
            r1.d = r2
            java.lang.Boolean r0 = com.sigmob.sdk.base.h.e
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto Lf
            if (r2 == 0) goto L14
            java.util.logging.Level r2 = java.util.logging.Level.FINE
            goto L16
        Lf:
            if (r2 == 0) goto L14
            java.util.logging.Level r2 = java.util.logging.Level.INFO
            goto L16
        L14:
            java.util.logging.Level r2 = java.util.logging.Level.SEVERE
        L16:
            com.czhj.sdk.logger.SigmobLog.setSdkHandlerLevel(r2)
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.sigmob.windad.WindAds.setDebugEnable(boolean):void");
    }

    public void setIsAgeRestrictedUser(int i) {
        this.j = i;
        if (this.b) {
            c.a().b(i, true);
        }
    }

    public void setOAIDCertFileName(String str) {
        ClientMetadata.setOaidCertFileName(str);
    }

    public void setPersonalizedAdvertisingOn(boolean z) {
        this.i = z;
        SigmobLog.i("Windads -> setPersonalized " + z);
        if (this.b) {
            c.a().b(z, true);
        }
    }

    public void setUserAge(int i) {
        this.k = i;
        if (this.b) {
            c.a().a(i, true);
        }
    }

    public void setUserGDPRConsentStatus(int i) {
        this.h = i;
        if (this.b) {
            c.a().c(i, true);
        }
    }

    public boolean startWithOptions(Context context, WindAdOptions windAdOptions) {
        return startWithOptions(context, windAdOptions, null);
    }

    public boolean startWithOptions(Context context, WindAdOptions windAdOptions, OnInitializationListener onInitializationListener) {
        this.f = onInitializationListener;
        if (this.b) {
            SigmobLog.i("already init appId: " + windAdOptions.getAppId());
        } else {
            try {
                if (Build.VERSION.SDK_INT < 18) {
                    a("Wind SDK Only Support Android API 18+");
                    return false;
                }
                if (context == null) {
                    a("context is null ");
                    return false;
                }
                if (windAdOptions == null) {
                    a("WindAdOptions is null ");
                    return false;
                }
                if (TextUtils.isEmpty(windAdOptions.getAppId())) {
                    a("appId is empty ");
                    return false;
                }
                this.c = windAdOptions;
                b.a(context.getApplicationContext());
                d();
                Sigmob.getInstance().init();
                b.a();
                this.b = true;
                SigmobLog.i("init appId: " + windAdOptions.getAppId());
            } catch (Throwable th) {
                SigmobLog.e("startWithOptions fail", th);
                try {
                    PointEntitySigmobError.SigmobError(PointCategory.INIT, WindAdError.ERROR_SIGMOB_INIT_FAIL.getErrorCode(), th.getMessage());
                } catch (Throwable th2) {
                    SigmobLog.e("startWithOptions", th2);
                }
            }
        }
        a();
        return true;
    }
}

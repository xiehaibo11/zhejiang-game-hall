package com.sigmob.sdk;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.content.Intent;
import android.location.Location;
import android.media.AudioManager;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.CustomController;
import com.czhj.sdk.common.network.Networking;
import com.czhj.sdk.common.utils.AdLifecycleManager;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.h;
import com.sigmob.sdk.base.i;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.sdk.base.mta.PointEntityActive;
import com.sigmob.windad.WindAdOptions;
import com.sigmob.windad.WindAds;
import com.sigmob.windad.WindCustomController;
import com.xiaomi.mipush.sdk.Constants;
import java.lang.ref.WeakReference;
import java.util.HashMap;
import java.util.Map;
import java.util.UUID;

/* JADX INFO: loaded from: classes3.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static WeakReference<Activity> f4782a;
    private static Context b;
    private static a c;

    private static class a implements AdLifecycleManager.LifecycleListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private String f4784a;
        private long b;
        private String d;
        private int e;
        private Map<String, String> c = new HashMap();
        private boolean f = true;
        private boolean g = false;
        private boolean h = false;

        a() {
            AdLifecycleManager.getInstance().initialize(b.d());
            this.b = System.currentTimeMillis();
            this.f4784a = UUID.randomUUID().toString();
            SigmobLog.i("session_start: " + this.b + Constants.COLON_SEPARATOR + this.f4784a);
            PointEntityActive.ActiveTracking(PointCategory.SESSION_START, this.f4784a, "0", String.valueOf(this.b));
            AdLifecycleManager.getInstance().addLifecycleListener(this);
        }

        public int a() {
            return this.e;
        }

        public void a(Activity activity) {
        }

        public void a(Activity activity, int i, int i2, Intent intent) {
        }

        public void b(Activity activity) {
        }

        @Override // com.czhj.sdk.common.utils.AdLifecycleManager.LifecycleListener
        public void onCreate(Activity activity) {
            String simpleName = activity.getClass().getSimpleName();
            this.d = simpleName;
            this.c.put(simpleName, simpleName);
            this.f = true;
            this.g = false;
        }

        @Override // com.czhj.sdk.common.utils.AdLifecycleManager.LifecycleListener
        public void onDestroy(Activity activity) {
            this.c.remove(activity.getClass().getSimpleName());
            if (this.c.size() == 0 && this.f) {
                long jCurrentTimeMillis = System.currentTimeMillis();
                long j = (jCurrentTimeMillis - this.b) / 1000;
                SigmobLog.i("onActivityDestroyed session_end: " + jCurrentTimeMillis + Constants.COLON_SEPARATOR + this.f4784a + Constants.COLON_SEPARATOR + j);
                PointEntityActive.ActiveTracking(PointCategory.SESSION_END, this.f4784a, String.valueOf(j), String.valueOf(jCurrentTimeMillis));
                this.b = System.currentTimeMillis();
                this.f = false;
            }
            if (this.c.size() == 0) {
                this.h = true;
            }
        }

        @Override // com.czhj.sdk.common.utils.AdLifecycleManager.LifecycleListener
        public void onPause(Activity activity) {
        }

        @Override // com.czhj.sdk.common.utils.AdLifecycleManager.LifecycleListener
        public void onResume(Activity activity) {
            this.g = !activity.getClass().getSimpleName().equals(this.d);
            this.d = activity.getClass().getSimpleName();
            if (this.g) {
                WeakReference unused = b.f4782a = new WeakReference(activity);
            }
            if (!this.f || this.h) {
                this.h = false;
                this.f4784a = UUID.randomUUID().toString();
                this.b = System.currentTimeMillis();
                this.f = true;
                SigmobLog.i("onActivityResumed session_start: " + this.b + Constants.COLON_SEPARATOR + this.f4784a);
                PointEntityActive.ActiveTracking(PointCategory.SESSION_START, this.f4784a, "0", String.valueOf(this.b));
            }
        }

        @Override // com.czhj.sdk.common.utils.AdLifecycleManager.LifecycleListener
        public void onStart(Activity activity) {
            this.e++;
        }

        @Override // com.czhj.sdk.common.utils.AdLifecycleManager.LifecycleListener
        public void onStop(Activity activity) {
            this.e--;
            if (activity.getClass().getSimpleName().equals(this.d)) {
                if (!this.g || this.c.size() == 1) {
                    long jCurrentTimeMillis = System.currentTimeMillis();
                    long j = (jCurrentTimeMillis - this.b) / 1000;
                    SigmobLog.i("onActivityStopped session_end: " + jCurrentTimeMillis + Constants.COLON_SEPARATOR + this.f4784a + Constants.COLON_SEPARATOR + j);
                    PointEntityActive.ActiveTracking(PointCategory.SESSION_END, this.f4784a, String.valueOf(j), String.valueOf(jCurrentTimeMillis));
                    this.b = System.currentTimeMillis();
                    this.f = false;
                }
            }
        }
    }

    public static void a() {
        if (c == null) {
            c = new a();
        }
    }

    public static void a(Context context) {
        if (b == null) {
            Context applicationContext = context.getApplicationContext();
            b = applicationContext;
            com.sigmob.sdk.base.utils.b.a(applicationContext, h.m);
            b(b);
            i.a().e();
            com.sigmob.sdk.base.db.a.a(b);
            WindAdOptions options = WindAds.sharedAds().getOptions();
            if (options == null || options.getCustomController() == null) {
                ClientMetadata.getInstance().initialize(context);
            } else {
                final WindCustomController customController = options.getCustomController();
                ClientMetadata.getInstance().initializeWithController(b, new CustomController() { // from class: com.sigmob.sdk.b.1
                    @Override // com.czhj.sdk.common.CustomController
                    public String getAndroidId() {
                        return customController.getAndroidId();
                    }

                    @Override // com.czhj.sdk.common.CustomController
                    public String getDevImei() {
                        return customController.getDevImei();
                    }

                    @Override // com.czhj.sdk.common.CustomController
                    public String getDevOaid() {
                        return customController.getDevOaid();
                    }

                    @Override // com.czhj.sdk.common.CustomController
                    public Location getLocation() {
                        return customController.getLocation();
                    }

                    @Override // com.czhj.sdk.common.CustomController
                    public boolean isCanUseAndroidId() {
                        return customController.isCanUseAndroidId();
                    }

                    @Override // com.czhj.sdk.common.CustomController
                    public boolean isCanUseLocation() {
                        return customController.isCanUseLocation();
                    }

                    @Override // com.czhj.sdk.common.CustomController
                    public boolean isCanUsePhoneState() {
                        return customController.isCanUsePhoneState();
                    }
                });
            }
        }
    }

    public static Context b() {
        return b;
    }

    private static void b(Context context) {
        Networking.AddSigmobServerURL(i.c());
        Networking.AddSigmobServerURL(i.a().l());
        Networking.AddSigmobServerURL(i.a().m());
        Networking.AddSigmobServerURL(i.a().k());
        Networking.initialize(context);
    }

    public static boolean c() {
        AudioManager audioManager;
        return (b == null || (audioManager = (AudioManager) b().getSystemService("audio")) == null || audioManager.getStreamVolume(3) != 0) ? false : true;
    }

    public static Application d() {
        Context context = b;
        if (context instanceof Application) {
            return (Application) context;
        }
        return null;
    }

    public static Activity e() {
        WeakReference<Activity> weakReference = f4782a;
        if (weakReference != null) {
            return weakReference.get();
        }
        return null;
    }
}

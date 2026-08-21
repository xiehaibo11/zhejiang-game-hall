package com.huawei.hms.activity;

import android.R;
import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.res.Configuration;
import android.graphics.Rect;
import android.os.Build;
import android.os.Bundle;
import android.view.KeyEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.view.WindowInsets;
import android.view.WindowManager;
import com.huawei.hms.support.log.HMSLog;
import com.huawei.hms.ui.SafeIntent;
import com.huawei.hms.utils.ResourceLoaderUtil;
import com.huawei.hms.utils.UIUtil;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import java.lang.reflect.InvocationTargetException;

/* JADX INFO: loaded from: classes.dex */
public class BridgeActivity extends Activity {
    public static final String EXTRA_DELEGATE_CLASS_NAME = "intent.extra.DELEGATE_CLASS_OBJECT";
    public static final String EXTRA_DELEGATE_UPDATE_INFO = "intent.extra.update.info";
    public static final String EXTRA_INTENT = "intent.extra.intent";
    public static final String EXTRA_IS_FULLSCREEN = "intent.extra.isfullscreen";
    public static final String EXTRA_RESULT = "intent.extra.RESULT";
    public static final int b = a("ro.build.hw_emui_api_level", 0);

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public IBridgeActivityDelegate f1982a;

    public class a implements View.OnApplyWindowInsetsListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ ViewGroup f1983a;

        public a(BridgeActivity bridgeActivity, ViewGroup viewGroup) {
            this.f1983a = viewGroup;
        }

        @Override // android.view.View.OnApplyWindowInsetsListener
        public WindowInsets onApplyWindowInsets(View view, WindowInsets windowInsets) {
            try {
                Object objInvoke = Class.forName("com.huawei.android.view.WindowManagerEx$LayoutParamsEx").getMethod("getDisplaySideRegion", WindowInsets.class).invoke(null, windowInsets);
                if (objInvoke == null) {
                    HMSLog.i("BridgeActivity", "sideRegion is null");
                } else {
                    Rect rect = (Rect) Class.forName("com.huawei.android.view.DisplaySideRegionEx").getMethod("getSafeInsets", new Class[0]).invoke(objInvoke, new Object[0]);
                    if (this.f1983a != null) {
                        this.f1983a.setPadding(rect.left, 0, rect.right, 0);
                    }
                }
            } catch (ClassNotFoundException | IllegalAccessException | NoSuchMethodException | InvocationTargetException e) {
                HMSLog.e("BridgeActivity", "An exception occurred while reading: onApplyWindowInsets" + e.getMessage());
            }
            return view.onApplyWindowInsets(windowInsets);
        }
    }

    public static void a(Window window, boolean z) {
        try {
            window.getClass().getMethod("setHwFloating", Boolean.TYPE).invoke(window, Boolean.valueOf(z));
        } catch (IllegalAccessException | IllegalArgumentException | NoSuchMethodException | InvocationTargetException e) {
            HMSLog.e("BridgeActivity", "In setHwFloating, Failed to call Window.setHwFloating()." + e.getMessage());
        }
    }

    public static Intent getIntentStartBridgeActivity(Activity activity, String str) {
        Intent intent = new Intent(activity, (Class<?>) BridgeActivity.class);
        intent.putExtra(EXTRA_DELEGATE_CLASS_NAME, str);
        intent.putExtra(EXTRA_IS_FULLSCREEN, UIUtil.isActivityFullscreen(activity));
        return intent;
    }

    public final boolean b() {
        Intent intent = getIntent();
        if (intent == null) {
            HMSLog.e("BridgeActivity", "In initialize, Must not pass in a null intent.");
            return false;
        }
        if (intent.getBooleanExtra(EXTRA_IS_FULLSCREEN, false)) {
            getWindow().setFlags(1024, 1024);
        }
        String stringExtra = intent.getStringExtra(EXTRA_DELEGATE_CLASS_NAME);
        if (stringExtra == null) {
            HMSLog.e("BridgeActivity", "In initialize, Must not pass in a null or non class object.");
            return false;
        }
        try {
            IBridgeActivityDelegate iBridgeActivityDelegate = (IBridgeActivityDelegate) Class.forName(stringExtra).asSubclass(IBridgeActivityDelegate.class).newInstance();
            this.f1982a = iBridgeActivityDelegate;
            try {
                iBridgeActivityDelegate.onBridgeActivityCreate(this);
                return true;
            } catch (RuntimeException e) {
                HMSLog.e("BridgeActivity", "Run time Exception." + e.getMessage());
                return false;
            }
        } catch (ClassCastException | ClassNotFoundException | IllegalAccessException | InstantiationException e2) {
            HMSLog.e("BridgeActivity", "In initialize, Failed to create 'IUpdateWizard' instance." + e2.getMessage());
            return false;
        }
    }

    public final void c() {
        requestWindowFeature(1);
        Window window = getWindow();
        if (b >= 9) {
            window.addFlags(DownloadExpSwitchCode.BACK_BUGFIX_SIGBUS);
            a(window, true);
        }
        window.getDecorView().setSystemUiVisibility(0);
    }

    @Override // android.app.Activity
    public void finish() {
        HMSLog.i("BridgeActivity", "Enter finish.");
        super.finish();
    }

    @Override // android.app.Activity
    public Intent getIntent() {
        Intent intent = super.getIntent();
        return intent != null ? new SafeIntent(intent) : intent;
    }

    @Override // android.app.Activity
    public void onActivityResult(int i, int i2, Intent intent) {
        SafeIntent safeIntent = new SafeIntent(intent);
        super.onActivityResult(i, i2, safeIntent);
        IBridgeActivityDelegate iBridgeActivityDelegate = this.f1982a;
        if (iBridgeActivityDelegate == null || iBridgeActivityDelegate.onBridgeActivityResult(i, i2, safeIntent) || isFinishing()) {
            return;
        }
        setResult(i2, safeIntent);
        finish();
    }

    @Override // android.app.Activity, android.content.ComponentCallbacks
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        IBridgeActivityDelegate iBridgeActivityDelegate = this.f1982a;
        if (iBridgeActivityDelegate != null) {
            iBridgeActivityDelegate.onBridgeConfigurationChanged();
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        if (getIntent() == null) {
            return;
        }
        getWindow().addFlags(Integer.MIN_VALUE);
        if (Build.VERSION.SDK_INT >= 21) {
            getWindow().setStatusBarColor(0);
        }
        c();
        a();
        if (ResourceLoaderUtil.getmContext() == null) {
            ResourceLoaderUtil.setmContext(getApplicationContext());
        }
        if (b()) {
            return;
        }
        setResult(1, null);
        finish();
    }

    @Override // android.app.Activity
    public void onDestroy() {
        super.onDestroy();
        IBridgeActivityDelegate iBridgeActivityDelegate = this.f1982a;
        if (iBridgeActivityDelegate != null) {
            iBridgeActivityDelegate.onBridgeActivityDestroy();
        }
    }

    @Override // android.app.Activity, android.view.KeyEvent.Callback
    public boolean onKeyUp(int i, KeyEvent keyEvent) {
        IBridgeActivityDelegate iBridgeActivityDelegate = this.f1982a;
        if (iBridgeActivityDelegate != null) {
            iBridgeActivityDelegate.onKeyUp(i, keyEvent);
        }
        return super.onKeyUp(i, keyEvent);
    }

    public static Intent getIntentStartBridgeActivity(Context context, String str) {
        Intent intent = new Intent(context, (Class<?>) BridgeActivity.class);
        intent.putExtra(EXTRA_DELEGATE_CLASS_NAME, str);
        intent.putExtra(EXTRA_IS_FULLSCREEN, false);
        return intent;
    }

    public final void a() {
        ViewGroup viewGroup = (ViewGroup) getWindow().findViewById(R.id.content);
        if (viewGroup == null) {
            HMSLog.e("BridgeActivity", "rootView is null");
            return;
        }
        WindowManager.LayoutParams attributes = getWindow().getAttributes();
        try {
            Class<?> cls = Class.forName("com.huawei.android.view.WindowManagerEx$LayoutParamsEx");
            cls.getMethod("setDisplaySideMode", Integer.TYPE).invoke(cls.getDeclaredConstructor(WindowManager.LayoutParams.class).newInstance(attributes), 1);
        } catch (ClassCastException | ClassNotFoundException | IllegalAccessException | InstantiationException | NoSuchMethodException | InvocationTargetException e) {
            HMSLog.e("BridgeActivity", "An exception occurred while reading: setDisplaySideMode" + e.getMessage());
        }
        if (Build.VERSION.SDK_INT >= 20) {
            getWindow().getDecorView().setOnApplyWindowInsetsListener(new a(this, viewGroup));
        }
    }

    public static int a(String str, int i) {
        try {
            Class<?> cls = Class.forName("android.os.SystemProperties");
            return ((Integer) cls.getDeclaredMethod("getInt", String.class, Integer.TYPE).invoke(cls, str, Integer.valueOf(i))).intValue();
        } catch (ClassCastException | ClassNotFoundException | IllegalAccessException | IllegalArgumentException | NoSuchMethodException | InvocationTargetException unused) {
            HMSLog.e("BridgeActivity", "An exception occurred while reading: EMUI_SDK_INT");
            return i;
        }
    }
}

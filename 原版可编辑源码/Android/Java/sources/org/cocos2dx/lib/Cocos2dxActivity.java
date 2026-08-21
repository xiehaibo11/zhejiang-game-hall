package org.cocos2dx.lib;

import android.annotation.TargetApi;
import android.app.Activity;
import android.app.KeyguardManager;
import android.content.ClipData;
import android.content.Context;
import android.content.Intent;
import android.content.res.Resources;
import android.net.Uri;
import android.opengl.GLSurfaceView;
import android.os.Build;
import android.os.Bundle;
import android.os.Environment;
import android.os.Message;
import android.os.PowerManager;
import android.preference.PreferenceManager;
import android.provider.Settings;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.view.WindowManager;
import android.webkit.ValueCallback;
import com.bykv.vk.openvk.TTVfConstant;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import com.xiaomi.mipush.sdk.Constants;
import com.ymnsdk.replugin.util.RomUtil;
import java.io.File;
import java.lang.reflect.InvocationTargetException;
import java.util.Iterator;
import javax.microedition.khronos.egl.EGL10;
import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.egl.EGLDisplay;
import org.cocos2dx.lib.Cocos2dxHandler;
import org.cocos2dx.lib.Cocos2dxHelper;

public abstract class Cocos2dxActivity extends Activity implements Cocos2dxHelper.Cocos2dxHelperListener {
    public static final String DISPLAY_NOTCH_STATUS = "display_notch_status";
    private static final int FILE_CHOOSER_RESULT_CODE = 10000;
    public static final int FLAG_NOTCH_SUPPORT = 65536;
    public static final int NOTCH_IN_SCREEN_VOIO = 32;
    private static final String TAG = "Cocos2dxActivity";
    private static Cocos2dxActivity sContext;
    public ValueCallback<Uri> uploadMessage;
    public ValueCallback<Uri[]> uploadMessageAboveL;
    private Cocos2dxGLSurfaceView mGLSurfaceView = null;
    private int[] mGLContextAttrs = null;
    private Cocos2dxHandler mHandler = null;
    private Cocos2dxVideoHelper mVideoHelper = null;
    private Cocos2dxWebViewHelper mWebViewHelper = null;
    private Cocos2dxEditBoxHelper mEditBoxHelper = null;
    private boolean hasFocus = false;
    private boolean showVirtualButton = false;
    private boolean gainAudioFocus = false;
    private boolean paused = true;
    public String getImgUrl = null;
    protected ResizeLayout mFrameLayout = null;
    private int mIsNotchSwitchOpen = -1;

    private static native int[] getGLContextAttrs();

    public Cocos2dxGLSurfaceView getGLSurfaceView() {
        return this.mGLSurfaceView;
    }

    public static Context getContext() {
        return sContext;
    }

    public static Cocos2dxActivity getInstance() {
        return sContext;
    }

    public void setKeepScreenOn(final boolean z) {
        runOnUiThread(new Runnable() {
            @Override
            public void run() {
                Cocos2dxActivity.this.mGLSurfaceView.setKeepScreenOn(z);
            }
        });
    }

    public void setEnableVirtualButton(boolean z) {
        this.showVirtualButton = z;
    }

    public void setEnableAudioFocusGain(boolean z) {
        if (this.gainAudioFocus != z) {
            if (!this.paused) {
                if (z) {
                    Cocos2dxAudioFocusManager.registerAudioFocusListener(this);
                } else {
                    Cocos2dxAudioFocusManager.unregisterAudioFocusListener(this);
                }
            }
            this.gainAudioFocus = z;
        }
    }

    protected void onLoadNativeLibraries() {
        try {
            System.loadLibrary(getPackageManager().getApplicationInfo(getPackageName(), 128).metaData.getString("android.app.lib_name"));
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        if (!isTaskRoot()) {
            finish();
            Log.w(TAG, "[Workaround] Ignore the activity started from icon!");
            return;
        }
        hideVirtualButton();
        onLoadNativeLibraries();
        sContext = this;
        this.mHandler = new Cocos2dxHandler(this);
        Cocos2dxHelper.init(this);
        this.mGLContextAttrs = getGLContextAttrs();
        init();
        if (this.mVideoHelper == null) {
            this.mVideoHelper = new Cocos2dxVideoHelper(this, this.mFrameLayout);
        }
        if (this.mWebViewHelper == null) {
            this.mWebViewHelper = new Cocos2dxWebViewHelper(this.mFrameLayout);
        }
        if (this.mEditBoxHelper == null) {
            this.mEditBoxHelper = new Cocos2dxEditBoxHelper(this.mFrameLayout);
        }
        Window window = getWindow();
        window.setSoftInputMode(32);
        window.addFlags(128);
        setVolumeControlStream(3);
    }

    @Override
    protected void onResume() {
        Log.d(TAG, "onResume()");
        this.paused = false;
        super.onResume();
        if (this.gainAudioFocus) {
            Cocos2dxAudioFocusManager.registerAudioFocusListener(this);
        }
        hideVirtualButton();
        resumeIfHasFocus();
    }

    @Override
    public void onWindowFocusChanged(boolean z) {
        Log.d(TAG, "onWindowFocusChanged() hasFocus=" + z);
        super.onWindowFocusChanged(z);
        this.hasFocus = z;
        resumeIfHasFocus();
    }

    private void resumeIfHasFocus() {
        boolean z = (isDeviceLocked() || isDeviceAsleep()) ? false : true;
        if (this.hasFocus && z) {
            hideVirtualButton();
            Cocos2dxHelper.onResume();
            this.mGLSurfaceView.onResume();
        }
    }

    @Override
    protected void onPause() {
        Log.d(TAG, "onPause()");
        this.paused = true;
        super.onPause();
        if (this.gainAudioFocus) {
            Cocos2dxAudioFocusManager.unregisterAudioFocusListener(this);
        }
        Cocos2dxHelper.onPause();
        this.mGLSurfaceView.onPause();
    }

    @Override
    protected void onDestroy() {
        if (this.gainAudioFocus) {
            Cocos2dxAudioFocusManager.unregisterAudioFocusListener(this);
        }
        super.onDestroy();
    }

    @Override
    public void showDialog(String str, String str2) {
        Message message = new Message();
        message.what = 1;
        message.obj = new Cocos2dxHandler.DialogMessage(str, str2);
        this.mHandler.sendMessage(message);
    }

    @Override
    public void runOnGLThread(Runnable runnable) {
        this.mGLSurfaceView.queueEvent(runnable);
    }

    @Override
    protected void onActivityResult(int i, int i2, Intent intent) {
        Iterator<PreferenceManager.OnActivityResultListener> it = Cocos2dxHelper.getOnActivityResultListeners().iterator();
        while (it.hasNext()) {
            it.next().onActivityResult(i, i2, intent);
        }
        super.onActivityResult(i, i2, intent);
        if (i == 10000) {
            Uri data = (intent == null || i2 != -1) ? null : intent.getData();
            if (this.uploadMessageAboveL != null) {
                onActivityResultAboveL(i, i2, intent);
                return;
            }
            ValueCallback<Uri> valueCallback = this.uploadMessage;
            if (valueCallback != null) {
                valueCallback.onReceiveValue(data);
                this.uploadMessage = null;
            }
        }
    }

    @TargetApi(21)
    protected void onActivityResultAboveL(int i, int i2, Intent intent) {
        Uri[] uriArr;
        Uri[] uriArr2;
        String str;
        if (i != 10000 || this.uploadMessageAboveL == null) {
            return;
        }
        if (intent == null && (str = this.getImgUrl) != null) {
            Uri[] uriArr3 = new File(str).exists() ? new Uri[]{Uri.fromFile(new File(this.getImgUrl))} : null;
            this.getImgUrl = null;
            this.uploadMessageAboveL.onReceiveValue(uriArr3);
            this.uploadMessageAboveL = null;
            return;
        }
        if (i2 != -1 || intent == null) {
            uriArr = null;
        } else {
            String dataString = intent.getDataString();
            ClipData clipData = intent.getClipData();
            if (clipData != null) {
                uriArr2 = new Uri[clipData.getItemCount()];
                for (int i3 = 0; i3 < clipData.getItemCount(); i3++) {
                    uriArr2[i3] = clipData.getItemAt(i3).getUri();
                }
            } else {
                uriArr2 = null;
            }
            uriArr = dataString != null ? new Uri[]{Uri.parse(dataString)} : uriArr2;
        }
        this.uploadMessageAboveL.onReceiveValue(uriArr);
        this.uploadMessageAboveL = null;
    }

    public void openImageChooserActivity() {
        startActivityForResult(createDefaultOpenableIntent(), 10000);
    }

    public void init() {
        ViewGroup.LayoutParams layoutParams = new ViewGroup.LayoutParams(-1, -1);
        this.mFrameLayout = new ResizeLayout(this);
        this.mFrameLayout.setLayoutParams(layoutParams);
        ViewGroup.LayoutParams layoutParams2 = new ViewGroup.LayoutParams(-1, -2);
        Cocos2dxEditBox cocos2dxEditBox = new Cocos2dxEditBox(this);
        cocos2dxEditBox.setLayoutParams(layoutParams2);
        this.mFrameLayout.addView(cocos2dxEditBox);
        this.mGLSurfaceView = onCreateView();
        this.mGLSurfaceView.setPreserveEGLContextOnPause(true);
        this.mFrameLayout.addView(this.mGLSurfaceView);
        this.mGLSurfaceView.setCocos2dxRenderer(new Cocos2dxRenderer());
        this.mGLSurfaceView.setCocos2dxEditText(cocos2dxEditBox);
        setContentView(this.mFrameLayout);
    }

    public Cocos2dxGLSurfaceView onCreateView() {
        Cocos2dxGLSurfaceView cocos2dxGLSurfaceView = new Cocos2dxGLSurfaceView(this);
        cocos2dxGLSurfaceView.setEGLConfigChooser(new Cocos2dxEGLConfigChooser(this.mGLContextAttrs));
        return cocos2dxGLSurfaceView;
    }

    protected void hideVirtualButton() {
        if (!this.showVirtualButton && Build.VERSION.SDK_INT >= 19) {
            try {
                int iIntValue = ((Integer) Cocos2dxReflectionHelper.getConstantValue(View.class, "SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION")).intValue();
                int iIntValue2 = ((Integer) Cocos2dxReflectionHelper.getConstantValue(View.class, "SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN")).intValue();
                int iIntValue3 = ((Integer) Cocos2dxReflectionHelper.getConstantValue(View.class, "SYSTEM_UI_FLAG_HIDE_NAVIGATION")).intValue();
                Cocos2dxReflectionHelper.invokeInstanceMethod(getWindow().getDecorView(), "setSystemUiVisibility", new Class[]{Integer.TYPE}, new Object[]{Integer.valueOf(((Integer) Cocos2dxReflectionHelper.getConstantValue(View.class, "SYSTEM_UI_FLAG_LAYOUT_STABLE")).intValue() | iIntValue | iIntValue2 | iIntValue3 | ((Integer) Cocos2dxReflectionHelper.getConstantValue(View.class, "SYSTEM_UI_FLAG_FULLSCREEN")).intValue() | ((Integer) Cocos2dxReflectionHelper.getConstantValue(View.class, "SYSTEM_UI_FLAG_IMMERSIVE_STICKY")).intValue())});
            } catch (NullPointerException e) {
                Log.e(TAG, "hideVirtualButton", e);
            }
        }
    }

    private static boolean isAndroidEmulator() {
        String str = Build.MODEL;
        Log.d(TAG, "model=" + str);
        String str2 = Build.PRODUCT;
        Log.d(TAG, "product=" + str2);
        boolean z = false;
        if (str2 != null && (str2.equals("sdk") || str2.contains("_sdk") || str2.contains("sdk_"))) {
            z = true;
        }
        Log.d(TAG, "isEmulator=" + z);
        return z;
    }

    private static boolean isDeviceLocked() {
        return ((KeyguardManager) getContext().getSystemService("keyguard")).inKeyguardRestrictedInputMode();
    }

    private static boolean isDeviceAsleep() {
        if (((PowerManager) getContext().getSystemService("power")) == null) {
            return false;
        }
        if (Build.VERSION.SDK_INT >= 20) {
            return !r0.isInteractive();
        }
        return !r0.isScreenOn();
    }

    private class Cocos2dxEGLConfigChooser implements GLSurfaceView.EGLConfigChooser {
        private final int EGL_OPENGL_ES2_BIT = 4;
        private final int EGL_OPENGL_ES3_BIT = 64;
        private int[] mConfigAttributes;

        public Cocos2dxEGLConfigChooser(int i, int i2, int i3, int i4, int i5, int i6, int i7) {
            this.mConfigAttributes = new int[]{i, i2, i3, i4, i5, i6, i7};
        }

        public Cocos2dxEGLConfigChooser(int[] iArr) {
            this.mConfigAttributes = iArr;
        }

        @Override
        public EGLConfig chooseConfig(EGL10 egl10, EGLDisplay eGLDisplay) {
            int[][] iArr = new int[4][];
            int[] iArr2 = new int[19];
            iArr2[0] = 12324;
            int[] iArr3 = this.mConfigAttributes;
            iArr2[1] = iArr3[0];
            iArr2[2] = 12323;
            iArr2[3] = iArr3[1];
            iArr2[4] = 12322;
            iArr2[5] = iArr3[2];
            iArr2[6] = 12321;
            iArr2[7] = iArr3[3];
            iArr2[8] = 12325;
            iArr2[9] = iArr3[4];
            iArr2[10] = 12326;
            iArr2[11] = iArr3[5];
            iArr2[12] = 12338;
            iArr2[13] = iArr3[6] > 0 ? 1 : 0;
            iArr2[14] = 12337;
            int[] iArr4 = this.mConfigAttributes;
            iArr2[15] = iArr4[6];
            iArr2[16] = 12352;
            iArr2[17] = 4;
            iArr2[18] = 12344;
            iArr[0] = iArr2;
            int[] iArr5 = new int[19];
            iArr5[0] = 12324;
            iArr5[1] = iArr4[0];
            iArr5[2] = 12323;
            iArr5[3] = iArr4[1];
            iArr5[4] = 12322;
            iArr5[5] = iArr4[2];
            iArr5[6] = 12321;
            iArr5[7] = iArr4[3];
            iArr5[8] = 12325;
            iArr5[9] = iArr4[4] >= 24 ? 16 : iArr4[4];
            iArr5[10] = 12326;
            int[] iArr6 = this.mConfigAttributes;
            iArr5[11] = iArr6[5];
            iArr5[12] = 12338;
            iArr5[13] = iArr6[6] > 0 ? 1 : 0;
            iArr5[14] = 12337;
            int[] iArr7 = this.mConfigAttributes;
            iArr5[15] = iArr7[6];
            iArr5[16] = 12352;
            iArr5[17] = 4;
            iArr5[18] = 12344;
            iArr[1] = iArr5;
            int[] iArr8 = new int[19];
            iArr8[0] = 12324;
            iArr8[1] = iArr7[0];
            iArr8[2] = 12323;
            iArr8[3] = iArr7[1];
            iArr8[4] = 12322;
            iArr8[5] = iArr7[2];
            iArr8[6] = 12321;
            iArr8[7] = iArr7[3];
            iArr8[8] = 12325;
            iArr8[9] = iArr7[4] >= 24 ? 16 : iArr7[4];
            iArr8[10] = 12326;
            iArr8[11] = this.mConfigAttributes[5];
            iArr8[12] = 12338;
            iArr8[13] = 0;
            iArr8[14] = 12337;
            iArr8[15] = 0;
            iArr8[16] = 12352;
            iArr8[17] = 4;
            iArr8[18] = 12344;
            iArr[2] = iArr8;
            iArr[3] = new int[]{12352, 4, 12344};
            for (int[] iArr9 : iArr) {
                EGLConfig eGLConfigDoChooseConfig = doChooseConfig(egl10, eGLDisplay, iArr9);
                if (eGLConfigDoChooseConfig != null) {
                    return eGLConfigDoChooseConfig;
                }
            }
            Log.e("device_policy", "Can not select an EGLConfig for rendering.");
            return null;
        }

        private EGLConfig doChooseConfig(EGL10 egl10, EGLDisplay eGLDisplay, int[] iArr) {
            EGLConfig[] eGLConfigArr = new EGLConfig[1];
            int[] iArr2 = new int[1];
            if (!egl10.eglChooseConfig(eGLDisplay, iArr, eGLConfigArr, 1, iArr2) || iArr2[0] <= 0) {
                return null;
            }
            return eGLConfigArr[0];
        }
    }

    @TargetApi(21)
    private void changeNotchState() {
        int i;
        int i2;
        if (Build.BRAND.equals("HUAWEI")) {
            int i3 = Settings.Secure.getInt(getContext().getContentResolver(), DISPLAY_NOTCH_STATUS, 0);
            if (i3 == 1) {
                if (this.mGLSurfaceView != null && (i2 = this.mIsNotchSwitchOpen) != -1 && i2 != i3) {
                    setFullScreenWindowLayoutInDisplayCutout(getWindow());
                    getWindowManager().updateViewLayout(this.mGLSurfaceView, getWindow().getAttributes());
                }
            } else if (this.mGLSurfaceView != null && (i = this.mIsNotchSwitchOpen) != -1 && i != i3) {
                setNotFullScreenWindowLayoutInDisplayCutout(getWindow());
                getWindowManager().updateViewLayout(this.mGLSurfaceView, getWindow().getAttributes());
            }
        }
        if (Build.BRAND.equals(RomUtil.ROM_OPPO) || Build.BRAND.equals("oppo")) {
            if (hasNotchInScreen()) {
                Window window = getWindow();
                window.getDecorView().setSystemUiVisibility(TTVfConstant.EXT_PLUGIN_UNINSTALL);
                window.addFlags(Integer.MIN_VALUE);
                window.setStatusBarColor(0);
                return;
            }
            return;
        }
        if (Build.BRAND.equals("Xiaomi")) {
            if (Settings.Global.getInt(getContext().getContentResolver(), "force_black", 0) == 1) {
                Log.e("Xiaomi", "Notch off");
            }
            Log.e("Xiaomi", "Notch in");
        }
    }

    public static boolean hasNotchInScreen() {
        Log.e("hasNotchInScreen手机厂商信息", Build.BRAND);
        boolean zBooleanValue = false;
        if (Build.BRAND.equals("vivo") || Build.BRAND.equals(RomUtil.ROM_VIVO)) {
            try {
                Class<?> clsLoadClass = getContext().getClassLoader().loadClass("android.util.FtFeature");
                return ((Boolean) clsLoadClass.getMethod("isFeatureSupport", Integer.TYPE).invoke(clsLoadClass, 32)).booleanValue();
            } catch (ClassNotFoundException unused) {
                Log.e("test", "hasNotchInScreen ClassNotFoundException");
                return false;
            } catch (NoSuchMethodException unused2) {
                Log.e("test", "hasNotchInScreen NoSuchMethodException");
                return false;
            } catch (Exception unused3) {
                Log.e("test", "hasNotchInScreen Exception");
                return false;
            }
        }
        if (Build.BRAND.equals("HUAWEI")) {
            try {
                int i = Settings.Secure.getInt(getContext().getContentResolver(), DISPLAY_NOTCH_STATUS, 0);
                if (i != 1) {
                    Class<?> clsLoadClass2 = getContext().getClassLoader().loadClass("com.huawei.android.util.HwNotchSizeUtil");
                    zBooleanValue = ((Boolean) clsLoadClass2.getMethod("hasNotchInScreen", new Class[0]).invoke(clsLoadClass2, new Object[0])).booleanValue();
                }
                getInstance().mIsNotchSwitchOpen = i;
                return zBooleanValue;
            } catch (ClassNotFoundException unused4) {
                Log.e("HUA WEI", "hasNotchInScreen ClassNotFoundException");
                return zBooleanValue;
            } catch (NoSuchMethodException unused5) {
                Log.e("HUA WEI", "hasNotchInScreen NoSuchMethodException");
                return zBooleanValue;
            } catch (Exception unused6) {
                Log.e("HUA WEI", "hasNotchInScreen Exception");
                return zBooleanValue;
            }
        }
        if (Build.BRAND.equals(RomUtil.ROM_OPPO) || Build.BRAND.equals("oppo")) {
            try {
                return getContext().getPackageManager().hasSystemFeature("com.oppo.feature.screen.heteromorphism");
            } catch (Exception unused7) {
                Log.e(RomUtil.ROM_OPPO, "hasNotchInScreen Exception");
                return false;
            }
        }
        if (!Build.BRAND.equals("Xiaomi")) {
            return false;
        }
        try {
            return SystemProperties.getInt("ro.miui.notch", 0).intValue() == 1;
        } catch (Exception unused8) {
            Log.e("Xiaomi", "hasNotchInScreen Exception");
            return false;
        }
    }

    public static void setFullScreenWindowLayoutInDisplayCutout(Window window) {
        if (window == null) {
            return;
        }
        WindowManager.LayoutParams attributes = window.getAttributes();
        try {
            Class<?> cls = Class.forName("com.huawei.android.view.LayoutParamsEx");
            cls.getMethod("addHwFlags", Integer.TYPE).invoke(cls.getConstructor(WindowManager.LayoutParams.class).newInstance(attributes), 65536);
        } catch (Exception unused) {
            Log.e("test", "other Exception");
        }
    }

    public static void setNotFullScreenWindowLayoutInDisplayCutout(Window window) {
        if (window == null) {
            return;
        }
        WindowManager.LayoutParams attributes = window.getAttributes();
        try {
            Class<?> cls = Class.forName("com.huawei.android.view.LayoutParamsEx");
            cls.getMethod("clearHwFlags", Integer.TYPE).invoke(cls.getConstructor(WindowManager.LayoutParams.class).newInstance(attributes), 65536);
        } catch (Exception unused) {
            Log.e("test", "other Exception");
        }
    }

    public static int[] getNotchSize() {
        int[] iArr = {0, 0};
        Log.e("getNotchSize手机厂商信息", Build.BRAND);
        if (Build.BRAND.equals("HUAWEI")) {
            try {
                if (Settings.Secure.getInt(getContext().getContentResolver(), DISPLAY_NOTCH_STATUS, 0) == 1) {
                    return iArr;
                }
                Class<?> clsLoadClass = getContext().getClassLoader().loadClass("com.huawei.android.util.HwNotchSizeUtil");
                int[] iArr2 = (int[]) clsLoadClass.getMethod("getNotchSize", new Class[0]).invoke(clsLoadClass, new Object[0]);
                int statusBarHeight = getStatusBarHeight(getContext());
                Log.e("stateBarheight : ", String.format("%d", Integer.valueOf(statusBarHeight)));
                iArr[0] = iArr2[0];
                iArr[1] = statusBarHeight;
                return iArr;
            } catch (ClassNotFoundException unused) {
                Log.e("test", "getNotchSize ClassNotFoundException");
            } catch (NoSuchMethodException unused2) {
                Log.e("test", "getNotchSize NoSuchMethodException");
            } catch (Exception unused3) {
                Log.e("test", "getNotchSize Exception");
            }
        }
        if (Build.BRAND.equals(RomUtil.ROM_OPPO) || Build.BRAND.equals("oppo")) {
            int[] iArr3 = SystemProperties.get("ro.oppo.screen.heteromorphism");
            if (iArr3[0] == 0) {
                iArr3[0] = 60;
                iArr3[1] = 60;
            }
            return iArr3;
        }
        if (Build.BRAND.equals(RomUtil.ROM_VIVO) || Build.BRAND.equals("vivo")) {
            iArr[0] = 60;
            iArr[1] = 60;
            return iArr;
        }
        if (Build.BRAND.equals("Xiaomi")) {
            int statusBarHeight2 = getStatusBarHeight(getContext());
            iArr[0] = statusBarHeight2;
            iArr[1] = statusBarHeight2;
        }
        return iArr;
    }

    public static class SystemProperties {
        public static int[] get(String str) {
            int[] iArr = {0, 0};
            try {
                Class<?> cls = Class.forName("android.os.SystemProperties");
                String[] strArrSplit = ((String) cls.getMethod(MonitorConstants.CONNECT_TYPE_GET, String.class).invoke(cls.newInstance(), str)).split(Constants.COLON_SEPARATOR);
                String[] strArrSplit2 = strArrSplit[0].split(Constants.ACCEPT_TIME_SEPARATOR_SP);
                String[] strArrSplit3 = strArrSplit[1].split(Constants.ACCEPT_TIME_SEPARATOR_SP);
                iArr[0] = Integer.valueOf(strArrSplit3[0]).intValue() - Integer.valueOf(strArrSplit2[0]).intValue();
                iArr[1] = Integer.valueOf(strArrSplit3[1]).intValue();
            } catch (ClassNotFoundException e) {
                Log.e("error", "get error() ", e);
            } catch (IllegalAccessException e2) {
                Log.e("error", "get error() ", e2);
            } catch (IllegalArgumentException e3) {
                Log.e("error", "get error() ", e3);
            } catch (InstantiationException e4) {
                Log.e("error", "get error() ", e4);
            } catch (NoSuchMethodException e5) {
                Log.e("error", "get error() ", e5);
            } catch (InvocationTargetException e6) {
                Log.e("error", "get error() ", e6);
            }
            return iArr;
        }

        public static boolean getBoolean(String str, boolean z) {
            try {
                Class<?> cls = Class.forName("android.os.SystemProperties");
                return ((Boolean) cls.getMethod("getBoolean", String.class, Boolean.TYPE).invoke(cls.newInstance(), str, Boolean.valueOf(z))).booleanValue();
            } catch (ClassNotFoundException e) {
                Log.e("error", "get error() ", e);
                return false;
            } catch (IllegalAccessException e2) {
                Log.e("error", "get error() ", e2);
                return false;
            } catch (IllegalArgumentException e3) {
                Log.e("error", "get error() ", e3);
                return false;
            } catch (InstantiationException e4) {
                Log.e("error", "get error() ", e4);
                return false;
            } catch (NoSuchMethodException e5) {
                Log.e("error", "get error() ", e5);
                return false;
            } catch (InvocationTargetException e6) {
                Log.e("error", "get error() ", e6);
                return false;
            }
        }

        public static Integer getInt(String str, int i) {
            Integer numValueOf = Integer.valueOf(i);
            try {
                Class<?> cls = Class.forName("android.os.SystemProperties");
                return (Integer) cls.getMethod("getInt", String.class, Integer.TYPE).invoke(cls, new String(str), new Integer(i));
            } catch (IllegalArgumentException unused) {
                Log.w(Cocos2dxActivity.TAG, "key超过32个字符");
                return numValueOf;
            } catch (Exception unused2) {
                return Integer.valueOf(i);
            }
        }
    }

    public static int getStatusBarHeight(Context context) {
        int identifier = context.getResources().getIdentifier("status_bar_height", "dimen", "android");
        if (identifier > 0) {
            return context.getResources().getDimensionPixelSize(identifier);
        }
        return 0;
    }

    public static int getNavigationBarHeight(Context context) {
        Resources resources = context.getResources();
        int identifier = resources.getIdentifier("navigation_bar_height", "dimen", "android");
        if (identifier > 0) {
            return resources.getDimensionPixelSize(identifier);
        }
        return -1;
    }

    private Intent createDefaultOpenableIntent() {
        Intent intent = new Intent("android.intent.action.GET_CONTENT");
        intent.addCategory("android.intent.category.OPENABLE");
        intent.setType("image/*");
        Intent intentCreateChooserIntent = createChooserIntent(createCameraIntent());
        intentCreateChooserIntent.putExtra("android.intent.extra.INTENT", intent);
        return intentCreateChooserIntent;
    }

    private Intent createChooserIntent(Intent... intentArr) {
        Intent intent = new Intent("android.intent.action.CHOOSER");
        intent.putExtra("android.intent.extra.INITIAL_INTENTS", intentArr);
        intent.putExtra("android.intent.extra.TITLE", "File Chooser");
        return intent;
    }

    private Intent createCameraIntent() {
        Intent intent = new Intent("android.media.action.IMAGE_CAPTURE");
        File file = new File(Environment.getExternalStoragePublicDirectory(Environment.DIRECTORY_DCIM).getAbsolutePath() + File.separator + "browser-photos");
        file.mkdirs();
        String str = file.getAbsolutePath() + File.separator + System.currentTimeMillis() + ".jpg";
        intent.putExtra("output", Uri.fromFile(new File(str)));
        this.getImgUrl = str;
        return intent;
    }

    private Intent createCamcorderIntent() {
        return new Intent("android.media.action.VIDEO_CAPTURE");
    }

    private Intent createSoundRecorderIntent() {
        return new Intent("android.provider.MediaStore.RECORD_SOUND");
    }
}

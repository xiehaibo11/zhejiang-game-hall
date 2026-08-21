package org.cocos2dx.lib;

import android.annotation.TargetApi;
import android.content.ClipData;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.opengl.GLSurfaceView;
import android.os.Build;
import android.os.Bundle;
import android.os.Environment;
import android.os.Message;
import android.preference.PreferenceManager;
import android.support.v4.internal.view.SupportMenu;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.view.WindowManager;
import android.webkit.ValueCallback;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.qihoo360.replugin.loader.a.PluginActivity;
import java.io.File;
import java.util.Iterator;
import javax.microedition.khronos.egl.EGL10;
import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.egl.EGLDisplay;
import org.cocos2dx.lib.Cocos2dxHandler;
import org.cocos2dx.lib.Cocos2dxHelper;

public abstract class Cocos2dxActivity extends PluginActivity implements Cocos2dxHelper.Cocos2dxHelperListener {
    private static final int FILE_CHOOSER_RESULT_CODE = 10000;
    private static final String TAG = "Cocos2dxActivity";
    private static Cocos2dxActivity sContext;
    private TextView mFPSTextView;
    private TextView mGLOptModeTextView;
    private TextView mGameInfoTextView_0;
    private TextView mGameInfoTextView_1;
    private TextView mGameInfoTextView_2;
    private TextView mJSBInvocationTextView;
    private LinearLayout mLinearLayoutForDebugView;
    public ValueCallback<Uri> uploadMessage;
    public ValueCallback<Uri[]> uploadMessageAboveL;
    protected FrameLayout mFrameLayout = null;
    private Cocos2dxGLSurfaceView mGLSurfaceView = null;
    private int[] mGLContextAttrs = null;
    private Cocos2dxHandler mHandler = null;
    private Cocos2dxVideoHelper mVideoHelper = null;
    private Cocos2dxWebViewHelper mWebViewHelper = null;
    private boolean hasFocus = false;
    private boolean gainAudioFocus = false;
    private boolean paused = true;
    public String getImgUrl = null;
    private boolean mIsTaskRootOnCreate = true;

    private static native int[] getGLContextAttrs();

    protected void CallJSFuncByEvent(int i, String str) {
    }

    public class Cocos2dxEGLConfigChooser implements GLSurfaceView.EGLConfigChooser {
        protected int[] configAttribs;

        public Cocos2dxEGLConfigChooser(int i, int i2, int i3, int i4, int i5, int i6) {
            this.configAttribs = new int[]{i, i2, i3, i4, i5, i6};
        }

        public Cocos2dxEGLConfigChooser(int[] iArr) {
            this.configAttribs = iArr;
        }

        private int findConfigAttrib(EGL10 egl10, EGLDisplay eGLDisplay, EGLConfig eGLConfig, int i, int i2) {
            int[] iArr = new int[1];
            return egl10.eglGetConfigAttrib(eGLDisplay, eGLConfig, i, iArr) ? iArr[0] : i2;
        }

        class ConfigValue implements Comparable<ConfigValue> {
            public EGLConfig config;
            public int[] configAttribs;
            public int value;

            private void calcValue() {
                int[] iArr = this.configAttribs;
                if (iArr[4] > 0) {
                    this.value = this.value + 536870912 + ((iArr[4] % 64) << 6);
                }
                int[] iArr2 = this.configAttribs;
                if (iArr2[5] > 0) {
                    this.value = this.value + 268435456 + (iArr2[5] % 64);
                }
                int[] iArr3 = this.configAttribs;
                if (iArr3[3] > 0) {
                    this.value = this.value + 1073741824 + ((iArr3[3] % 16) << 24);
                }
                int[] iArr4 = this.configAttribs;
                if (iArr4[1] > 0) {
                    this.value += (iArr4[1] % 16) << 20;
                }
                int[] iArr5 = this.configAttribs;
                if (iArr5[2] > 0) {
                    this.value += (iArr5[2] % 16) << 16;
                }
                int[] iArr6 = this.configAttribs;
                if (iArr6[0] > 0) {
                    this.value += (iArr6[0] % 16) << 12;
                }
            }

            public ConfigValue(int[] iArr) {
                this.config = null;
                this.configAttribs = null;
                this.value = 0;
                this.configAttribs = iArr;
                calcValue();
            }

            public ConfigValue(EGL10 egl10, EGLDisplay eGLDisplay, EGLConfig eGLConfig) {
                this.config = null;
                this.configAttribs = null;
                this.value = 0;
                this.config = eGLConfig;
                this.configAttribs = new int[6];
                this.configAttribs[0] = Cocos2dxEGLConfigChooser.this.findConfigAttrib(egl10, eGLDisplay, eGLConfig, 12324, 0);
                this.configAttribs[1] = Cocos2dxEGLConfigChooser.this.findConfigAttrib(egl10, eGLDisplay, eGLConfig, 12323, 0);
                this.configAttribs[2] = Cocos2dxEGLConfigChooser.this.findConfigAttrib(egl10, eGLDisplay, eGLConfig, 12322, 0);
                this.configAttribs[3] = Cocos2dxEGLConfigChooser.this.findConfigAttrib(egl10, eGLDisplay, eGLConfig, 12321, 0);
                this.configAttribs[4] = Cocos2dxEGLConfigChooser.this.findConfigAttrib(egl10, eGLDisplay, eGLConfig, 12325, 0);
                this.configAttribs[5] = Cocos2dxEGLConfigChooser.this.findConfigAttrib(egl10, eGLDisplay, eGLConfig, 12326, 0);
                calcValue();
            }

            @Override
            public int compareTo(ConfigValue configValue) {
                int i = this.value;
                int i2 = configValue.value;
                if (i < i2) {
                    return -1;
                }
                return i > i2 ? 1 : 0;
            }

            public String toString() {
                return "{ color: " + this.configAttribs[3] + this.configAttribs[2] + this.configAttribs[1] + this.configAttribs[0] + "; depth: " + this.configAttribs[4] + "; stencil: " + this.configAttribs[5] + ";}";
            }
        }

        @Override
        public EGLConfig chooseConfig(EGL10 egl10, EGLDisplay eGLDisplay) {
            int i = 0;
            int[] iArr = this.configAttribs;
            EGLConfig[] eGLConfigArr = new EGLConfig[1];
            int[] iArr2 = new int[1];
            if (egl10.eglChooseConfig(eGLDisplay, new int[]{12324, iArr[0], 12323, iArr[1], 12322, iArr[2], 12321, iArr[3], 12325, iArr[4], 12326, iArr[5], 12352, 4, 12344}, eGLConfigArr, 1, iArr2) && iArr2[0] > 0) {
                return eGLConfigArr[0];
            }
            int[] iArr3 = {12352, 4, 12344};
            if (egl10.eglChooseConfig(eGLDisplay, iArr3, null, 0, iArr2) && iArr2[0] > 0) {
                int i2 = iArr2[0];
                ConfigValue[] configValueArr = new ConfigValue[i2];
                EGLConfig[] eGLConfigArr2 = new EGLConfig[i2];
                egl10.eglChooseConfig(eGLDisplay, iArr3, eGLConfigArr2, i2, iArr2);
                for (int i3 = 0; i3 < i2; i3++) {
                    configValueArr[i3] = new ConfigValue(egl10, eGLDisplay, eGLConfigArr2[i3]);
                }
                ConfigValue configValue = new ConfigValue(this.configAttribs);
                int i4 = i2;
                while (i < i4 - 1) {
                    int i5 = (i + i4) / 2;
                    if (configValue.compareTo(configValueArr[i5]) < 0) {
                        i4 = i5;
                    } else {
                        i = i5;
                    }
                }
                if (i != i2 - 1) {
                    i++;
                }
                Log.w("cocos2d", "Can't find EGLConfig match: " + configValue + ", instead of closest one:" + configValueArr[i]);
                return configValueArr[i].config;
            }
            Log.e("device_policy", "Can not select an EGLConfig for rendering.");
            return null;
        }
    }

    public Cocos2dxGLSurfaceView getGLSurfaceView() {
        return this.mGLSurfaceView;
    }

    public static Context getContext() {
        return sContext;
    }

    public void init() {
        ViewGroup.LayoutParams layoutParams = new ViewGroup.LayoutParams(-1, -1);
        this.mFrameLayout = new FrameLayout(this);
        this.mFrameLayout.setLayoutParams(layoutParams);
        addDebugInfo(addSurfaceView());
        setContentView(this.mFrameLayout);
        WindowManager.LayoutParams attributes = getWindow().getAttributes();
        try {
            attributes.getClass().getField("layoutInDisplayCutoutMode").setInt(attributes, attributes.getClass().getDeclaredField("LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES").getInt(null));
            getWindow().getDecorView().setSystemUiVisibility(View.class.getDeclaredField("SYSTEM_UI_FLAG_IMMERSIVE_STICKY").getInt(null) | 1798);
        } catch (IllegalAccessException e) {
            e.printStackTrace();
        } catch (NoSuchFieldException e2) {
            e2.printStackTrace();
        }
    }

    public void setKeepScreenOn(final boolean z) {
        runOnUiThread(new Runnable() {
            @Override
            public void run() {
                Cocos2dxActivity.this.mGLSurfaceView.setKeepScreenOn(z);
            }
        });
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

    public Cocos2dxGLSurfaceView onCreateView() {
        Cocos2dxGLSurfaceView cocos2dxGLSurfaceView = new Cocos2dxGLSurfaceView(this);
        if (this.mGLContextAttrs[3] > 0) {
            cocos2dxGLSurfaceView.getHolder().setFormat(-3);
        }
        cocos2dxGLSurfaceView.setEGLConfigChooser(new Cocos2dxEGLConfigChooser(this.mGLContextAttrs));
        return cocos2dxGLSurfaceView;
    }

    public boolean getTaskRootCreate() {
        return this.mIsTaskRootOnCreate;
    }

    @Override
    protected void onCreate(Bundle bundle) {
        Log.d(TAG, "Cocos2dxActivity onCreate: " + this + ", savedInstanceState: " + bundle);
        super.onCreate(bundle);
        this.mIsTaskRootOnCreate = isTaskRoot();
        Utils.setActivity(this);
        Utils.hideVirtualButton();
        Cocos2dxHelper.registerBatteryLevelReceiver(this);
        onLoadNativeLibraries();
        sContext = this;
        this.mHandler = new Cocos2dxHandler(this);
        Cocos2dxHelper.init(this);
        CanvasRenderingContext2DImpl.init(this);
        this.mGLContextAttrs = getGLContextAttrs();
        init();
        if (this.mVideoHelper == null) {
            this.mVideoHelper = new Cocos2dxVideoHelper(this, this.mFrameLayout);
        }
        if (this.mWebViewHelper == null) {
            this.mWebViewHelper = new Cocos2dxWebViewHelper(this.mFrameLayout);
        }
        Window window = getWindow();
        window.setSoftInputMode(16);
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
        Utils.hideVirtualButton();
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
        if (!this.hasFocus || this.paused) {
            return;
        }
        Utils.hideVirtualButton();
        Cocos2dxHelper.onResume();
        this.mGLSurfaceView.onResume();
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
        super.onDestroy();
        if (this.mIsTaskRootOnCreate) {
            if (this.gainAudioFocus) {
                Cocos2dxAudioFocusManager.unregisterAudioFocusListener(this);
            }
            Cocos2dxHelper.unregisterBatteryLevelReceiver(this);
            CanvasRenderingContext2DImpl.destroy();
            Log.d(TAG, "Cocos2dxActivity onDestroy: " + this + ", mGLSurfaceView" + this.mGLSurfaceView);
            if (this.mGLSurfaceView != null) {
                Cocos2dxHelper.terminateProcess();
            }
        }
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
        if (i == FILE_CHOOSER_RESULT_CODE) {
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
        if (i != FILE_CHOOSER_RESULT_CODE || this.uploadMessageAboveL == null) {
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
        startActivityForResult(createDefaultOpenableIntent(), FILE_CHOOSER_RESULT_CODE);
    }

    protected void onLoadNativeLibraries() {
        try {
            Bundle bundle = getPackageManager().getApplicationInfo(getPackageName(), 128).metaData;
            System.loadLibrary("cocos2djs");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private Cocos2dxRenderer addSurfaceView() {
        this.mGLSurfaceView = onCreateView();
        this.mGLSurfaceView.setPreserveEGLContextOnPause(true);
        this.mGLSurfaceView.setBackgroundColor(0);
        if (isAndroidEmulator()) {
            this.mGLSurfaceView.setEGLConfigChooser(8, 8, 8, 8, 16, 0);
        }
        Cocos2dxRenderer cocos2dxRenderer = new Cocos2dxRenderer();
        this.mGLSurfaceView.setCocos2dxRenderer(cocos2dxRenderer);
        this.mFrameLayout.addView(this.mGLSurfaceView);
        return cocos2dxRenderer;
    }

    private void addDebugInfo(final Cocos2dxRenderer cocos2dxRenderer) {
        final LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(-2, -2);
        layoutParams.setMargins(30, 0, 0, 0);
        Cocos2dxHelper.setOnGameInfoUpdatedListener(new Cocos2dxHelper.OnGameInfoUpdatedListener() {
            @Override
            public void onFPSUpdated(final float f) {
                Cocos2dxActivity.this.runOnUiThread(new Runnable() {
                    @Override
                    public void run() {
                        if (Cocos2dxActivity.this.mFPSTextView != null) {
                            Cocos2dxActivity.this.mFPSTextView.setText("FPS: " + ((int) Math.ceil(f)));
                        }
                    }
                });
            }

            @Override
            public void onJSBInvocationCountUpdated(final int i) {
                Cocos2dxActivity.this.runOnUiThread(new Runnable() {
                    @Override
                    public void run() {
                        if (Cocos2dxActivity.this.mJSBInvocationTextView != null) {
                            Cocos2dxActivity.this.mJSBInvocationTextView.setText("JSB: " + i);
                        }
                    }
                });
            }

            @Override
            public void onOpenDebugView() {
                Cocos2dxActivity.this.runOnUiThread(new Runnable() {
                    @Override
                    public void run() {
                        if (Cocos2dxActivity.this.mLinearLayoutForDebugView != null || Cocos2dxActivity.this.mFrameLayout == null) {
                            Log.e(Cocos2dxActivity.TAG, "onOpenDebugView: failed!");
                            return;
                        }
                        Cocos2dxActivity.this.mLinearLayoutForDebugView = new LinearLayout(Cocos2dxActivity.this);
                        Cocos2dxActivity.this.mLinearLayoutForDebugView.setOrientation(1);
                        Cocos2dxActivity.this.mFrameLayout.addView(Cocos2dxActivity.this.mLinearLayoutForDebugView);
                        Cocos2dxActivity.this.mFPSTextView = new TextView(Cocos2dxActivity.this);
                        Cocos2dxActivity.this.mFPSTextView.setBackgroundColor(SupportMenu.CATEGORY_MASK);
                        Cocos2dxActivity.this.mFPSTextView.setTextColor(-1);
                        Cocos2dxActivity.this.mLinearLayoutForDebugView.addView(Cocos2dxActivity.this.mFPSTextView, layoutParams);
                        Cocos2dxActivity.this.mJSBInvocationTextView = new TextView(Cocos2dxActivity.this);
                        Cocos2dxActivity.this.mJSBInvocationTextView.setBackgroundColor(-16711936);
                        Cocos2dxActivity.this.mJSBInvocationTextView.setTextColor(-1);
                        Cocos2dxActivity.this.mLinearLayoutForDebugView.addView(Cocos2dxActivity.this.mJSBInvocationTextView, layoutParams);
                        Cocos2dxActivity.this.mGLOptModeTextView = new TextView(Cocos2dxActivity.this);
                        Cocos2dxActivity.this.mGLOptModeTextView.setBackgroundColor(-16776961);
                        Cocos2dxActivity.this.mGLOptModeTextView.setTextColor(-1);
                        Cocos2dxActivity.this.mGLOptModeTextView.setText("GL Opt: Enabled");
                        Cocos2dxActivity.this.mLinearLayoutForDebugView.addView(Cocos2dxActivity.this.mGLOptModeTextView, layoutParams);
                        Cocos2dxActivity.this.mGameInfoTextView_0 = new TextView(Cocos2dxActivity.this);
                        Cocos2dxActivity.this.mGameInfoTextView_0.setBackgroundColor(SupportMenu.CATEGORY_MASK);
                        Cocos2dxActivity.this.mGameInfoTextView_0.setTextColor(-1);
                        Cocos2dxActivity.this.mLinearLayoutForDebugView.addView(Cocos2dxActivity.this.mGameInfoTextView_0, layoutParams);
                        Cocos2dxActivity.this.mGameInfoTextView_1 = new TextView(Cocos2dxActivity.this);
                        Cocos2dxActivity.this.mGameInfoTextView_1.setBackgroundColor(-16711936);
                        Cocos2dxActivity.this.mGameInfoTextView_1.setTextColor(-1);
                        Cocos2dxActivity.this.mLinearLayoutForDebugView.addView(Cocos2dxActivity.this.mGameInfoTextView_1, layoutParams);
                        Cocos2dxActivity.this.mGameInfoTextView_2 = new TextView(Cocos2dxActivity.this);
                        Cocos2dxActivity.this.mGameInfoTextView_2.setBackgroundColor(-16776961);
                        Cocos2dxActivity.this.mGameInfoTextView_2.setTextColor(-1);
                        Cocos2dxActivity.this.mLinearLayoutForDebugView.addView(Cocos2dxActivity.this.mGameInfoTextView_2, layoutParams);
                    }
                });
                cocos2dxRenderer.showFPS();
            }

            @Override
            public void onDisableBatchGLCommandsToNative() {
                Cocos2dxActivity.this.runOnUiThread(new Runnable() {
                    @Override
                    public void run() {
                        if (Cocos2dxActivity.this.mGLOptModeTextView != null) {
                            Cocos2dxActivity.this.mGLOptModeTextView.setText("GL Opt: Disabled");
                        }
                    }
                });
            }

            @Override
            public void onGameInfoUpdated_0(final String str) {
                Cocos2dxActivity.this.runOnUiThread(new Runnable() {
                    @Override
                    public void run() {
                        if (Cocos2dxActivity.this.mGameInfoTextView_0 != null) {
                            Cocos2dxActivity.this.mGameInfoTextView_0.setText(str);
                        }
                    }
                });
            }

            @Override
            public void onGameInfoUpdated_1(final String str) {
                Cocos2dxActivity.this.runOnUiThread(new Runnable() {
                    @Override
                    public void run() {
                        if (Cocos2dxActivity.this.mGameInfoTextView_1 != null) {
                            Cocos2dxActivity.this.mGameInfoTextView_1.setText(str);
                        }
                    }
                });
            }

            @Override
            public void onGameInfoUpdated_2(final String str) {
                Cocos2dxActivity.this.runOnUiThread(new Runnable() {
                    @Override
                    public void run() {
                        if (Cocos2dxActivity.this.mGameInfoTextView_2 != null) {
                            Cocos2dxActivity.this.mGameInfoTextView_2.setText(str);
                        }
                    }
                });
            }
        });
    }

    private static final boolean isAndroidEmulator() {
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

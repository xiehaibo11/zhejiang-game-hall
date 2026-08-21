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
    private boolean gainAudioFocus;
    public String getImgUrl;
    private boolean hasFocus;
    private TextView mFPSTextView;
    protected FrameLayout mFrameLayout;
    private int[] mGLContextAttrs;
    private TextView mGLOptModeTextView;
    private Cocos2dxGLSurfaceView mGLSurfaceView;
    private TextView mGameInfoTextView_0;
    private TextView mGameInfoTextView_1;
    private TextView mGameInfoTextView_2;
    private Cocos2dxHandler mHandler;
    private boolean mIsTaskRootOnCreate;
    private TextView mJSBInvocationTextView;
    private LinearLayout mLinearLayoutForDebugView;
    private Cocos2dxVideoHelper mVideoHelper;
    private Cocos2dxWebViewHelper mWebViewHelper;
    private boolean paused;
    public ValueCallback<Uri> uploadMessage;
    public ValueCallback<Uri[]> uploadMessageAboveL;

    public class Cocos2dxEGLConfigChooser implements GLSurfaceView.EGLConfigChooser {
        protected int[] configAttribs;
        final Cocos2dxActivity this$0;

        class ConfigValue implements Comparable<ConfigValue> {
            public EGLConfig config;
            public int[] configAttribs;
            final Cocos2dxEGLConfigChooser this$1;
            public int value;

            @Override
            public int compareTo(ConfigValue r1) {
                return compareTo(r1);
            }

            private void calcValue() {
                int[] r0 = this.configAttribs;
                if (r0[4] <= 0) goto L5;
                this.value = (this.value + 536870912) + ((r0[4] % 64) << 6);
            L5:
                int[] r02 = this.configAttribs;
                if (r02[5] <= 0) goto L8;
                this.value = (this.value + 268435456) + (r02[5] % 64);
            L8:
                int[] r03 = this.configAttribs;
                if (r03[3] <= 0) goto L11;
                this.value = (this.value + 1073741824) + ((r03[3] % 16) << 24);
            L11:
                int[] r04 = this.configAttribs;
                if (r04[1] <= 0) goto L14;
                this.value += (r04[1] % 16) << 20;
            L14:
                int[] r05 = this.configAttribs;
                if (r05[2] <= 0) goto L17;
                this.value += (r05[2] % 16) << 16;
            L17:
                int[] r06 = this.configAttribs;
                if (r06[0] <= 0) goto L21;
                this.value += (r06[0] % 16) << 12;
                return;
            }

            public ConfigValue(Cocos2dxEGLConfigChooser r1, int[] r2) {
                this.this$1 = r1;
                this.config = null;
                this.configAttribs = null;
                this.value = 0;
                this.configAttribs = r2;
                calcValue();
            }

            public ConfigValue(Cocos2dxEGLConfigChooser r9, EGL10 r10, EGLDisplay r11, EGLConfig r12) {
                this.this$1 = r9;
                this.config = null;
                this.configAttribs = null;
                this.value = 0;
                this.config = r12;
                this.configAttribs = new int[6];
                this.configAttribs[0] = Cocos2dxEGLConfigChooser.access$000(r9, r10, r11, r12, 12324, 0);
                this.configAttribs[1] = Cocos2dxEGLConfigChooser.access$000(r9, r10, r11, r12, 12323, 0);
                this.configAttribs[2] = Cocos2dxEGLConfigChooser.access$000(r9, r10, r11, r12, 12322, 0);
                this.configAttribs[3] = Cocos2dxEGLConfigChooser.access$000(r9, r10, r11, r12, 12321, 0);
                this.configAttribs[4] = Cocos2dxEGLConfigChooser.access$000(r9, r10, r11, r12, 12325, 0);
                this.configAttribs[5] = Cocos2dxEGLConfigChooser.access$000(r9, r10, r11, r12, 12326, 0);
                calcValue();
            }

            public int compareTo(ConfigValue r2) {
                int r0 = this.value;
                int r22 = r2.value;
                if (r0 >= r22) goto L6;
                return -1;
            L6:
                if (r0 <= r22) goto L9;
                return 1;
            L9:
                return 0;
            }

            public String toString() {
                return "{ color: " + this.configAttribs[3] + this.configAttribs[2] + this.configAttribs[1] + this.configAttribs[0] + "; depth: " + this.configAttribs[4] + "; stencil: " + this.configAttribs[5] + ";}";
            }
        }

        static int access$000(Cocos2dxEGLConfigChooser r0, EGL10 r1, EGLDisplay r2, EGLConfig r3, int r4, int r5) {
            return r0.findConfigAttrib(r1, r2, r3, r4, r5);
        }

        public Cocos2dxEGLConfigChooser(Cocos2dxActivity r2, int r3, int r4, int r5, int r6, int r7, int r8) {
            this.this$0 = r2;
            this.configAttribs = new int[]{r3, r4, r5, r6, r7, r8};
        }

        public Cocos2dxEGLConfigChooser(Cocos2dxActivity r1, int[] r2) {
            this.this$0 = r1;
            this.configAttribs = r2;
        }

        private int findConfigAttrib(EGL10 r2, EGLDisplay r3, EGLConfig r4, int r5, int r6) {
            int[] r0 = new int[1];
            if (r2.eglGetConfigAttrib(r3, r4, r5, r0) == true) goto L5;
            return r6;
        L5:
            return r0[0];
        }

        @Override
        public EGLConfig chooseConfig(EGL10 r19, EGLDisplay r20) {
            int r1 = 0;
            int[] r2 = this.configAttribs;
            EGLConfig[] r11 = new EGLConfig[1];
            int[] r15 = new int[1];
            if (r19.eglChooseConfig(r20, new int[]{12324, r2[0], 12323, r2[1], 12322, r2[2], 12321, r2[3], 12325, r2[4], 12326, r2[5], 12352, 4, 12344}, r11, 1, r15) == true) goto L5;
        L8:
            int[] r22 = {12352, 4, 12344};
            if (r19.eglChooseConfig(r20, r22, null, 0, r15) == true) goto L11;
        L27:
            Log.e("device_policy", "Can not select an EGLConfig for rendering.");
            return null;
        L11:
            if (r15[0] <= 0) goto L27;
            int r3 = r15[0];
            ConfigValue[] r5 = new ConfigValue[r3];
            EGLConfig[] r6 = new EGLConfig[r3];
            r19.eglChooseConfig(r20, r22, r6, r3, r15);
            int r23 = 0;
        L13:
            if (r23 >= r3) goto L15;
            r5[r23] = new ConfigValue(this, r19, r20, r6[r23]);
            r23 = r23 + 1;
            goto L13
        L15:
            ConfigValue r24 = new ConfigValue(this, this.configAttribs);
            int r4 = r3;
        L17:
            if (r1 >= (r4 - 1)) goto L23;
            int r62 = (r1 + r4) / 2;
            if (r24.compareTo(r5[r62]) < 0) goto L20;
            r1 = r62;
            goto L17
        L20:
            r4 = r62;
            goto L17
        L23:
            if (r1 == (r3 - 1)) goto L25;
            r1 = r1 + 1;
        L25:
            Log.w("cocos2d", "Can't find EGLConfig match: " + r24 + ", instead of closest one:" + r5[r1]);
            return r5[r1].config;
        L5:
            if (r15[0] <= 0) goto L8;
            return r11[0];
        }
    }

    static {
    }

    private static native int[] getGLContextAttrs();

    protected void CallJSFuncByEvent(int r1, String r2) {
    }

    public Cocos2dxActivity() {
        this.mFrameLayout = null;
        this.mGLSurfaceView = null;
        this.mGLContextAttrs = null;
        this.mHandler = null;
        this.mVideoHelper = null;
        this.mWebViewHelper = null;
        this.hasFocus = false;
        this.gainAudioFocus = false;
        this.paused = true;
        this.getImgUrl = null;
        this.mIsTaskRootOnCreate = true;
    }

    static Cocos2dxGLSurfaceView access$100(Cocos2dxActivity r0) {
        return r0.mGLSurfaceView;
    }

    static TextView access$200(Cocos2dxActivity r0) {
        return r0.mFPSTextView;
    }

    static TextView access$202(Cocos2dxActivity r0, TextView r1) {
        r0.mFPSTextView = r1;
        return r1;
    }

    static TextView access$300(Cocos2dxActivity r0) {
        return r0.mJSBInvocationTextView;
    }

    static TextView access$302(Cocos2dxActivity r0, TextView r1) {
        r0.mJSBInvocationTextView = r1;
        return r1;
    }

    static LinearLayout access$400(Cocos2dxActivity r0) {
        return r0.mLinearLayoutForDebugView;
    }

    static LinearLayout access$402(Cocos2dxActivity r0, LinearLayout r1) {
        r0.mLinearLayoutForDebugView = r1;
        return r1;
    }

    static String access$500() {
        return TAG;
    }

    static TextView access$600(Cocos2dxActivity r0) {
        return r0.mGLOptModeTextView;
    }

    static TextView access$602(Cocos2dxActivity r0, TextView r1) {
        r0.mGLOptModeTextView = r1;
        return r1;
    }

    static TextView access$700(Cocos2dxActivity r0) {
        return r0.mGameInfoTextView_0;
    }

    static TextView access$702(Cocos2dxActivity r0, TextView r1) {
        r0.mGameInfoTextView_0 = r1;
        return r1;
    }

    static TextView access$800(Cocos2dxActivity r0) {
        return r0.mGameInfoTextView_1;
    }

    static TextView access$802(Cocos2dxActivity r0, TextView r1) {
        r0.mGameInfoTextView_1 = r1;
        return r1;
    }

    static TextView access$900(Cocos2dxActivity r0) {
        return r0.mGameInfoTextView_2;
    }

    static TextView access$902(Cocos2dxActivity r0, TextView r1) {
        r0.mGameInfoTextView_2 = r1;
        return r1;
    }

    public Cocos2dxGLSurfaceView getGLSurfaceView() {
        return this.mGLSurfaceView;
    }

    public static Context getContext() {
        return sContext;
    }

    public void init() {
        ViewGroup.LayoutParams r0 = new ViewGroup.LayoutParams(-1, -1);
        this.mFrameLayout = new FrameLayout(this);
        this.mFrameLayout.setLayoutParams(r0);
        addDebugInfo(addSurfaceView());
        setContentView(this.mFrameLayout);
        WindowManager.LayoutParams r02 = getWindow().getAttributes();
        r02.getClass().getField("layoutInDisplayCutoutMode").setInt(r02, r02.getClass().getDeclaredField("LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES").getInt(null));     // Catch: IllegalAccessException -> L5 NoSuchFieldException -> L7
        int r03 = View.class.getDeclaredField("SYSTEM_UI_FLAG_IMMERSIVE_STICKY").getInt(null) | 1798;     // Catch: IllegalAccessException -> L5 NoSuchFieldException -> L7
        getWindow().getDecorView().setSystemUiVisibility(r03);     // Catch: IllegalAccessException -> L5 NoSuchFieldException -> L7
    L13:
        return;
    L5:
        e = move-exception;
        e.printStackTrace();
        return;
    L7:
        e = move-exception;
        e.printStackTrace();
    }

    public void setKeepScreenOn(final boolean r2) {
        runOnUiThread(new 1(this, r2));
    }

    public void setEnableAudioFocusGain(boolean r2) {
        if (this.gainAudioFocus != r2) goto L5;
        return;
    L5:
        if (this.paused == true) goto L9;
        if (r2 == false) goto L8;
        Cocos2dxAudioFocusManager.registerAudioFocusListener(this);
        goto L9
    L8:
        Cocos2dxAudioFocusManager.unregisterAudioFocusListener(this);
    L9:
        this.gainAudioFocus = r2;
    }

    public Cocos2dxGLSurfaceView onCreateView() {
        Cocos2dxGLSurfaceView r0 = new Cocos2dxGLSurfaceView(this);
        if (this.mGLContextAttrs[3] <= 0) goto L5;
        r0.getHolder().setFormat(-3);
    L5:
        r0.setEGLConfigChooser(new Cocos2dxEGLConfigChooser(this, this.mGLContextAttrs));
        return r0;
    }

    public boolean getTaskRootCreate() {
        return this.mIsTaskRootOnCreate;
    }

    @Override
    protected void onCreate(Bundle r4) {
        Log.d(TAG, "Cocos2dxActivity onCreate: " + this + ", savedInstanceState: " + r4);
        super.onCreate(r4);
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
        if (this.mVideoHelper != null) goto L6;
        this.mVideoHelper = new Cocos2dxVideoHelper(this, this.mFrameLayout);
    L6:
        if (this.mWebViewHelper != null) goto L8;
        this.mWebViewHelper = new Cocos2dxWebViewHelper(this.mFrameLayout);
    L8:
        Window r42 = getWindow();
        r42.setSoftInputMode(16);
        r42.addFlags(128);
        setVolumeControlStream(3);
    }

    @Override
    protected void onResume() {
        Log.d(TAG, "onResume()");
        this.paused = false;
        super.onResume();
        if (this.gainAudioFocus == false) goto L5;
        Cocos2dxAudioFocusManager.registerAudioFocusListener(this);
    L5:
        Utils.hideVirtualButton();
        resumeIfHasFocus();
    }

    @Override
    public void onWindowFocusChanged(boolean r4) {
        Log.d(TAG, "onWindowFocusChanged() hasFocus=" + r4);
        super.onWindowFocusChanged(r4);
        this.hasFocus = r4;
        resumeIfHasFocus();
    }

    private void resumeIfHasFocus() {
        if (this.hasFocus == true) goto L5;
        return;
    L5:
        if (this.paused == true) goto L9;
        Utils.hideVirtualButton();
        Cocos2dxHelper.onResume();
        this.mGLSurfaceView.onResume();
        return;
    }

    @Override
    protected void onPause() {
        Log.d(TAG, "onPause()");
        this.paused = true;
        super.onPause();
        if (this.gainAudioFocus == false) goto L5;
        Cocos2dxAudioFocusManager.unregisterAudioFocusListener(this);
    L5:
        Cocos2dxHelper.onPause();
        this.mGLSurfaceView.onPause();
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        if (this.mIsTaskRootOnCreate == true) goto L6;
        return;
    L6:
        if (this.gainAudioFocus == false) goto L8;
        Cocos2dxAudioFocusManager.unregisterAudioFocusListener(this);
    L8:
        Cocos2dxHelper.unregisterBatteryLevelReceiver(this);
        CanvasRenderingContext2DImpl.destroy();
        Log.d(TAG, "Cocos2dxActivity onDestroy: " + this + ", mGLSurfaceView" + this.mGLSurfaceView);
        if (this.mGLSurfaceView == null) goto L12;
        Cocos2dxHelper.terminateProcess();
        return;
    }

    @Override
    public void showDialog(String r3, String r4) {
        Message r0 = new Message();
        r0.what = 1;
        r0.obj = new Cocos2dxHandler.DialogMessage(r3, r4);
        this.mHandler.sendMessage(r0);
    }

    @Override
    public void runOnGLThread(Runnable r2) {
        this.mGLSurfaceView.queueEvent(r2);
    }

    @Override
    protected void onActivityResult(int r4, int r5, Intent r6) {
        Iterator<PreferenceManager.OnActivityResultListener> r0 = Cocos2dxHelper.getOnActivityResultListeners().iterator();
    L4:
        if (r0.hasNext() == false) goto L6;
        r0.next().onActivityResult(r4, r5, r6);
        goto L4
    L6:
        super.onActivityResult(r4, r5, r6);
        if (r4 == FILE_CHOOSER_RESULT_CODE) goto L9;
        return;
    L9:
        if (r6 != null) goto L11;
    L14:
        Uri r1 = null;
    L16:
        if (this.uploadMessageAboveL == null) goto L18;
        onActivityResultAboveL(r4, r5, r6);
        return;
    L18:
        ValueCallback<Uri> r42 = this.uploadMessage;
        if (r42 == null) goto L25;
        r42.onReceiveValue(r1);
        this.uploadMessage = null;
        return;
    L25:
        return;
    L11:
        if (r5 != (-1)) goto L14;
        r1 = r6.getData();
        goto L16
    }

    @TargetApi(21)
    protected void onActivityResultAboveL(int r6, int r7, Intent r8) {
        if (r6 == FILE_CHOOSER_RESULT_CODE) goto L5;
        return;
    L5:
        if (this.uploadMessageAboveL != null) goto L8;
        return;
    L8:
        if (r8 != null) goto L18;
        String r2 = this.getImgUrl;
        if (r2 == null) goto L18;
        if (new File(r2).exists() == false) goto L14;
        Uri[] r72 = {Uri.fromFile(new File(this.getImgUrl))};
    L15:
        this.getImgUrl = null;
        this.uploadMessageAboveL.onReceiveValue(r72);
        this.uploadMessageAboveL = null;
        return;
    L14:
        r72 = null;
    L18:
        if (r7 != (-1)) goto L30;
        if (r8 == null) goto L30;
        String r73 = r8.getDataString();
        ClipData r82 = r8.getClipData();
        if (r82 == null) goto L26;
        Uri[] r22 = new Uri[r82.getItemCount()];
        int r3 = 0;
    L24:
        if (r3 >= r82.getItemCount()) goto L27;
        r22[r3] = r82.getItemAt(r3).getUri();
        r3 = r3 + 1;
    L27:
        if (r73 == null) goto L29;
        Uri[] r83 = {Uri.parse(r73)};
    L31:
        this.uploadMessageAboveL.onReceiveValue(r83);
        this.uploadMessageAboveL = null;
        return;
    L29:
        r83 = r22;
        goto L31
    L26:
        r22 = null;
    L30:
        r83 = null;
        goto L31
    }

    public void openImageChooserActivity() {
        startActivityForResult(createDefaultOpenableIntent(), FILE_CHOOSER_RESULT_CODE);
    }

    protected void onLoadNativeLibraries() {
        Bundle r0 = getPackageManager().getApplicationInfo(getPackageName(), 128).metaData;     // Catch: Exception -> L4
        System.loadLibrary("cocos2djs");     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    private Cocos2dxRenderer addSurfaceView() {
        this.mGLSurfaceView = onCreateView();
        this.mGLSurfaceView.setPreserveEGLContextOnPause(true);
        this.mGLSurfaceView.setBackgroundColor(0);
        if (isAndroidEmulator() == false) goto L5;
        this.mGLSurfaceView.setEGLConfigChooser(8, 8, 8, 8, 16, 0);
    L5:
        Cocos2dxRenderer r0 = new Cocos2dxRenderer();
        this.mGLSurfaceView.setCocos2dxRenderer(r0);
        this.mFrameLayout.addView(this.mGLSurfaceView);
        return r0;
    }

    private void addDebugInfo(final Cocos2dxRenderer r4) {
        final LinearLayout.LayoutParams r0 = new LinearLayout.LayoutParams(-2, -2);
        r0.setMargins(30, 0, 0, 0);
        Cocos2dxHelper.setOnGameInfoUpdatedListener(new 2(this, r0, r4));
    }

    private static final boolean isAndroidEmulator() {
        String r0 = Build.MODEL;
        Log.d(TAG, "model=" + r0);
        String r02 = Build.PRODUCT;
        Log.d(TAG, "product=" + r02);
        boolean r1 = false;
        if (r02 != null) goto L5;
    L11:
        Log.d(TAG, "isEmulator=" + r1);
        return r1;
    L5:
        if (r02.equals("sdk") == false) goto L7;
    L10:
        r1 = true;
        goto L11
    L7:
        if (r02.contains("_sdk") == true) goto L10;
        if (r02.contains("sdk_") == false) goto L11;
        goto L10
    }

    private Intent createDefaultOpenableIntent() {
        Intent r0 = new Intent("android.intent.action.GET_CONTENT");
        r0.addCategory("android.intent.category.OPENABLE");
        r0.setType("image/*");
        Intent r1 = createChooserIntent(new Intent[]{createCameraIntent()});
        r1.putExtra("android.intent.extra.INTENT", r0);
        return r1;
    }

    private Intent createChooserIntent(Intent... r3) {
        Intent r0 = new Intent("android.intent.action.CHOOSER");
        r0.putExtra("android.intent.extra.INITIAL_INTENTS", r3);
        r0.putExtra("android.intent.extra.TITLE", "File Chooser");
        return r0;
    }

    private Intent createCameraIntent() {
        Intent r0 = new Intent("android.media.action.IMAGE_CAPTURE");
        File r2 = new File(Environment.getExternalStoragePublicDirectory(Environment.DIRECTORY_DCIM).getAbsolutePath() + File.separator + "browser-photos");
        r2.mkdirs();
        String r1 = r2.getAbsolutePath() + File.separator + System.currentTimeMillis() + ".jpg";
        r0.putExtra("output", Uri.fromFile(new File(r1)));
        this.getImgUrl = r1;
        return r0;
    }

    private Intent createCamcorderIntent() {
        return new Intent("android.media.action.VIDEO_CAPTURE");
    }

    private Intent createSoundRecorderIntent() {
        return new Intent("android.provider.MediaStore.RECORD_SOUND");
    }
}

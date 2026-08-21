package org.cocos2dx.lib;

public abstract class Cocos2dxActivity extends com.qihoo360.replugin.loader.a.PluginActivity implements org.cocos2dx.lib.Cocos2dxHelper.Cocos2dxHelperListener {
    private static final int FILE_CHOOSER_RESULT_CODE = 10000;
    private static final java.lang.String TAG = "Cocos2dxActivity";
    private static org.cocos2dx.lib.Cocos2dxActivity sContext;
    private boolean gainAudioFocus;
    public java.lang.String getImgUrl;
    private boolean hasFocus;
    private android.widget.TextView mFPSTextView;
    protected android.widget.FrameLayout mFrameLayout;
    private int[] mGLContextAttrs;
    private android.widget.TextView mGLOptModeTextView;
    private org.cocos2dx.lib.Cocos2dxGLSurfaceView mGLSurfaceView;
    private android.widget.TextView mGameInfoTextView_0;
    private android.widget.TextView mGameInfoTextView_1;
    private android.widget.TextView mGameInfoTextView_2;
    private org.cocos2dx.lib.Cocos2dxHandler mHandler;
    private boolean mIsTaskRootOnCreate;
    private android.widget.TextView mJSBInvocationTextView;
    private android.widget.LinearLayout mLinearLayoutForDebugView;
    private org.cocos2dx.lib.Cocos2dxVideoHelper mVideoHelper;
    private org.cocos2dx.lib.Cocos2dxWebViewHelper mWebViewHelper;
    private boolean paused;
    public android.webkit.ValueCallback<android.net.Uri> uploadMessage;
    public android.webkit.ValueCallback<android.net.Uri[]> uploadMessageAboveL;



    public class Cocos2dxEGLConfigChooser implements android.opengl.GLSurfaceView.EGLConfigChooser {
        protected int[] configAttribs;
        final org.cocos2dx.lib.Cocos2dxActivity this$0;

        class ConfigValue implements java.lang.Comparable<org.cocos2dx.lib.Cocos2dxActivity.Cocos2dxEGLConfigChooser.ConfigValue> {
            public javax.microedition.khronos.egl.EGLConfig config;
            public int[] configAttribs;
            final org.cocos2dx.lib.Cocos2dxActivity.Cocos2dxEGLConfigChooser this$1;
            public int value;

            public ConfigValue(org.cocos2dx.lib.Cocos2dxActivity.Cocos2dxEGLConfigChooser r9, javax.microedition.khronos.egl.EGL10 r10, javax.microedition.khronos.egl.EGLDisplay r11, javax.microedition.khronos.egl.EGLConfig r12) {
                    r8 = this;
                    r8.this$1 = r9
                    r8.<init>()
                    r0 = 0
                    r8.config = r0
                    r8.configAttribs = r0
                    r0 = 0
                    r8.value = r0
                    r8.config = r12
                    r1 = 6
                    int[] r1 = new int[r1]
                    r8.configAttribs = r1
                    int[] r1 = r8.configAttribs
                    r6 = 12324(0x3024, float:1.727E-41)
                    r7 = 0
                    r2 = r9
                    r3 = r10
                    r4 = r11
                    r5 = r12
                    int r2 = org.cocos2dx.lib.Cocos2dxActivity.Cocos2dxEGLConfigChooser.access$000(r2, r3, r4, r5, r6, r7)
                    r1[r0] = r2
                    int[] r0 = r8.configAttribs
                    r5 = 12323(0x3023, float:1.7268E-41)
                    r6 = 0
                    r1 = r9
                    r2 = r10
                    r3 = r11
                    r4 = r12
                    int r1 = org.cocos2dx.lib.Cocos2dxActivity.Cocos2dxEGLConfigChooser.access$000(r1, r2, r3, r4, r5, r6)
                    r2 = 1
                    r0[r2] = r1
                    int[] r0 = r8.configAttribs
                    r5 = 12322(0x3022, float:1.7267E-41)
                    r1 = r9
                    r2 = r10
                    int r1 = org.cocos2dx.lib.Cocos2dxActivity.Cocos2dxEGLConfigChooser.access$000(r1, r2, r3, r4, r5, r6)
                    r2 = 2
                    r0[r2] = r1
                    int[] r0 = r8.configAttribs
                    r5 = 12321(0x3021, float:1.7265E-41)
                    r1 = r9
                    r2 = r10
                    int r1 = org.cocos2dx.lib.Cocos2dxActivity.Cocos2dxEGLConfigChooser.access$000(r1, r2, r3, r4, r5, r6)
                    r2 = 3
                    r0[r2] = r1
                    int[] r0 = r8.configAttribs
                    r5 = 12325(0x3025, float:1.7271E-41)
                    r1 = r9
                    r2 = r10
                    int r1 = org.cocos2dx.lib.Cocos2dxActivity.Cocos2dxEGLConfigChooser.access$000(r1, r2, r3, r4, r5, r6)
                    r2 = 4
                    r0[r2] = r1
                    int[] r0 = r8.configAttribs
                    r5 = 12326(0x3026, float:1.7272E-41)
                    r1 = r9
                    r2 = r10
                    int r9 = org.cocos2dx.lib.Cocos2dxActivity.Cocos2dxEGLConfigChooser.access$000(r1, r2, r3, r4, r5, r6)
                    r10 = 5
                    r0[r10] = r9
                    r8.calcValue()
                    return
            }

            public ConfigValue(org.cocos2dx.lib.Cocos2dxActivity.Cocos2dxEGLConfigChooser r1, int[] r2) {
                    r0 = this;
                    r0.this$1 = r1
                    r0.<init>()
                    r1 = 0
                    r0.config = r1
                    r0.configAttribs = r1
                    r1 = 0
                    r0.value = r1
                    r0.configAttribs = r2
                    r0.calcValue()
                    return
            }

            private void calcValue() {
                    r4 = this;
                    int[] r0 = r4.configAttribs
                    r1 = 4
                    r2 = r0[r1]
                    if (r2 <= 0) goto L15
                    int r2 = r4.value
                    r3 = 536870912(0x20000000, float:1.0842022E-19)
                    int r2 = r2 + r3
                    r0 = r0[r1]
                    int r0 = r0 % 64
                    int r0 = r0 << 6
                    int r2 = r2 + r0
                    r4.value = r2
                L15:
                    int[] r0 = r4.configAttribs
                    r1 = 5
                    r2 = r0[r1]
                    if (r2 <= 0) goto L28
                    int r2 = r4.value
                    r3 = 268435456(0x10000000, float:2.524355E-29)
                    int r2 = r2 + r3
                    r0 = r0[r1]
                    int r0 = r0 % 64
                    int r2 = r2 + r0
                    r4.value = r2
                L28:
                    int[] r0 = r4.configAttribs
                    r1 = 3
                    r2 = r0[r1]
                    if (r2 <= 0) goto L3d
                    int r2 = r4.value
                    r3 = 1073741824(0x40000000, float:2.0)
                    int r2 = r2 + r3
                    r0 = r0[r1]
                    int r0 = r0 % 16
                    int r0 = r0 << 24
                    int r2 = r2 + r0
                    r4.value = r2
                L3d:
                    int[] r0 = r4.configAttribs
                    r1 = 1
                    r2 = r0[r1]
                    if (r2 <= 0) goto L4f
                    int r2 = r4.value
                    r0 = r0[r1]
                    int r0 = r0 % 16
                    int r0 = r0 << 20
                    int r2 = r2 + r0
                    r4.value = r2
                L4f:
                    int[] r0 = r4.configAttribs
                    r1 = 2
                    r2 = r0[r1]
                    if (r2 <= 0) goto L61
                    int r2 = r4.value
                    r0 = r0[r1]
                    int r0 = r0 % 16
                    int r0 = r0 << 16
                    int r2 = r2 + r0
                    r4.value = r2
                L61:
                    int[] r0 = r4.configAttribs
                    r1 = 0
                    r2 = r0[r1]
                    if (r2 <= 0) goto L73
                    int r2 = r4.value
                    r0 = r0[r1]
                    int r0 = r0 % 16
                    int r0 = r0 << 12
                    int r2 = r2 + r0
                    r4.value = r2
                L73:
                    return
            }

            @Override
            public int compareTo(org.cocos2dx.lib.Cocos2dxActivity.Cocos2dxEGLConfigChooser.ConfigValue r1) {
                    r0 = this;
                    org.cocos2dx.lib.Cocos2dxActivity$Cocos2dxEGLConfigChooser$ConfigValue r1 = (org.cocos2dx.lib.Cocos2dxActivity.Cocos2dxEGLConfigChooser.ConfigValue) r1
                    int r1 = r0.compareTo(r1)
                    return r1
            }

            public int compareTo(org.cocos2dx.lib.Cocos2dxActivity.Cocos2dxEGLConfigChooser.ConfigValue r2) {
                    r1 = this;
                    int r0 = r1.value
                    int r2 = r2.value
                    if (r0 >= r2) goto L8
                    r2 = -1
                    return r2
                L8:
                    if (r0 <= r2) goto Lc
                    r2 = 1
                    return r2
                Lc:
                    r2 = 0
                    return r2
            }

            public java.lang.String toString() {
                    r3 = this;
                    java.lang.StringBuilder r0 = new java.lang.StringBuilder
                    r0.<init>()
                    java.lang.String r1 = "{ color: "
                    r0.append(r1)
                    int[] r1 = r3.configAttribs
                    r2 = 3
                    r1 = r1[r2]
                    r0.append(r1)
                    int[] r1 = r3.configAttribs
                    r2 = 2
                    r1 = r1[r2]
                    r0.append(r1)
                    int[] r1 = r3.configAttribs
                    r2 = 1
                    r1 = r1[r2]
                    r0.append(r1)
                    int[] r1 = r3.configAttribs
                    r2 = 0
                    r1 = r1[r2]
                    r0.append(r1)
                    java.lang.String r1 = "; depth: "
                    r0.append(r1)
                    int[] r1 = r3.configAttribs
                    r2 = 4
                    r1 = r1[r2]
                    r0.append(r1)
                    java.lang.String r1 = "; stencil: "
                    r0.append(r1)
                    int[] r1 = r3.configAttribs
                    r2 = 5
                    r1 = r1[r2]
                    r0.append(r1)
                    java.lang.String r1 = ";}"
                    r0.append(r1)
                    java.lang.String r0 = r0.toString()
                    return r0
            }
        }

        public Cocos2dxEGLConfigChooser(org.cocos2dx.lib.Cocos2dxActivity r2, int r3, int r4, int r5, int r6, int r7, int r8) {
                r1 = this;
                r1.this$0 = r2
                r1.<init>()
                r2 = 6
                int[] r2 = new int[r2]
                r0 = 0
                r2[r0] = r3
                r3 = 1
                r2[r3] = r4
                r3 = 2
                r2[r3] = r5
                r3 = 3
                r2[r3] = r6
                r3 = 4
                r2[r3] = r7
                r3 = 5
                r2[r3] = r8
                r1.configAttribs = r2
                return
        }

        public Cocos2dxEGLConfigChooser(org.cocos2dx.lib.Cocos2dxActivity r1, int[] r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.configAttribs = r2
                return
        }

        static int access$000(org.cocos2dx.lib.Cocos2dxActivity.Cocos2dxEGLConfigChooser r0, javax.microedition.khronos.egl.EGL10 r1, javax.microedition.khronos.egl.EGLDisplay r2, javax.microedition.khronos.egl.EGLConfig r3, int r4, int r5) {
                int r0 = r0.findConfigAttrib(r1, r2, r3, r4, r5)
                return r0
        }

        private int findConfigAttrib(javax.microedition.khronos.egl.EGL10 r2, javax.microedition.khronos.egl.EGLDisplay r3, javax.microedition.khronos.egl.EGLConfig r4, int r5, int r6) {
                r1 = this;
                r0 = 1
                int[] r0 = new int[r0]
                boolean r2 = r2.eglGetConfigAttrib(r3, r4, r5, r0)
                if (r2 == 0) goto Ld
                r2 = 0
                r2 = r0[r2]
                return r2
            Ld:
                return r6
        }

        @Override
        public javax.microedition.khronos.egl.EGLConfig chooseConfig(javax.microedition.khronos.egl.EGL10 r19, javax.microedition.khronos.egl.EGLDisplay r20) {
                r18 = this;
                r0 = r18
                r1 = 15
                int[] r4 = new int[r1]
                r1 = 0
                r2 = 12324(0x3024, float:1.727E-41)
                r4[r1] = r2
                int[] r2 = r0.configAttribs
                r3 = r2[r1]
                r8 = 1
                r4[r8] = r3
                r9 = 2
                r3 = 12323(0x3023, float:1.7268E-41)
                r4[r9] = r3
                r3 = r2[r8]
                r10 = 3
                r4[r10] = r3
                r3 = 4
                r5 = 12322(0x3022, float:1.7267E-41)
                r4[r3] = r5
                r5 = r2[r9]
                r6 = 5
                r4[r6] = r5
                r5 = 6
                r7 = 12321(0x3021, float:1.7265E-41)
                r4[r5] = r7
                r5 = r2[r10]
                r7 = 7
                r4[r7] = r5
                r5 = 8
                r7 = 12325(0x3025, float:1.7271E-41)
                r4[r5] = r7
                r5 = r2[r3]
                r7 = 9
                r4[r7] = r5
                r5 = 10
                r7 = 12326(0x3026, float:1.7272E-41)
                r4[r5] = r7
                r2 = r2[r6]
                r5 = 11
                r4[r5] = r2
                r2 = 12
                r5 = 12352(0x3040, float:1.7309E-41)
                r4[r2] = r5
                r2 = 13
                r4[r2] = r3
                r2 = 14
                r3 = 12344(0x3038, float:1.7298E-41)
                r4[r2] = r3
                javax.microedition.khronos.egl.EGLConfig[] r11 = new javax.microedition.khronos.egl.EGLConfig[r8]
                int[] r15 = new int[r8]
                r6 = 1
                r2 = r19
                r3 = r20
                r5 = r11
                r7 = r15
                boolean r2 = r2.eglChooseConfig(r3, r4, r5, r6, r7)
                if (r2 == 0) goto L70
                r2 = r15[r1]
                if (r2 <= 0) goto L70
                r1 = r11[r1]
                return r1
            L70:
                int[] r2 = new int[r10]
                r2 = {x0100: FILL_ARRAY_DATA , data: [12352, 4, 12344} // fill-array
                r3 = 0
                r16 = 0
                r12 = r19
                r13 = r20
                r14 = r2
                r4 = r15
                r15 = r3
                r17 = r4
                boolean r3 = r12.eglChooseConfig(r13, r14, r15, r16, r17)
                if (r3 == 0) goto Lf6
                r3 = r4[r1]
                if (r3 <= 0) goto Lf6
                r3 = r4[r1]
                org.cocos2dx.lib.Cocos2dxActivity$Cocos2dxEGLConfigChooser$ConfigValue[] r5 = new org.cocos2dx.lib.Cocos2dxActivity.Cocos2dxEGLConfigChooser.ConfigValue[r3]
                javax.microedition.khronos.egl.EGLConfig[] r6 = new javax.microedition.khronos.egl.EGLConfig[r3]
                r12 = r19
                r13 = r20
                r14 = r2
                r15 = r6
                r16 = r3
                r17 = r4
                r12.eglChooseConfig(r13, r14, r15, r16, r17)
                r2 = 0
            L9f:
                if (r2 >= r3) goto Lb1
                org.cocos2dx.lib.Cocos2dxActivity$Cocos2dxEGLConfigChooser$ConfigValue r4 = new org.cocos2dx.lib.Cocos2dxActivity$Cocos2dxEGLConfigChooser$ConfigValue
                r7 = r6[r2]
                r10 = r19
                r11 = r20
                r4.<init>(r0, r10, r11, r7)
                r5[r2] = r4
                int r2 = r2 + 1
                goto L9f
            Lb1:
                org.cocos2dx.lib.Cocos2dxActivity$Cocos2dxEGLConfigChooser$ConfigValue r2 = new org.cocos2dx.lib.Cocos2dxActivity$Cocos2dxEGLConfigChooser$ConfigValue
                int[] r4 = r0.configAttribs
                r2.<init>(r0, r4)
                r4 = r3
            Lb9:
                int r6 = r4 + (-1)
                if (r1 >= r6) goto Lcc
                int r6 = r1 + r4
                int r6 = r6 / r9
                r7 = r5[r6]
                int r7 = r2.compareTo(r7)
                if (r7 >= 0) goto Lca
                r4 = r6
                goto Lb9
            Lca:
                r1 = r6
                goto Lb9
            Lcc:
                int r3 = r3 - r8
                if (r1 == r3) goto Ld1
                int r1 = r1 + 1
            Ld1:
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r4 = "Can't find EGLConfig match: "
                r3.append(r4)
                r3.append(r2)
                java.lang.String r2 = ", instead of closest one:"
                r3.append(r2)
                r2 = r5[r1]
                r3.append(r2)
                java.lang.String r2 = r3.toString()
                java.lang.String r3 = "cocos2d"
                android.util.Log.w(r3, r2)
                r1 = r5[r1]
                javax.microedition.khronos.egl.EGLConfig r1 = r1.config
                return r1
            Lf6:
                java.lang.String r1 = "device_policy"
                java.lang.String r2 = "Can not select an EGLConfig for rendering."
                android.util.Log.e(r1, r2)
                r1 = 0
                return r1
        }
    }

    static {
            return
    }

    public Cocos2dxActivity() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.mFrameLayout = r0
            r2.mGLSurfaceView = r0
            r2.mGLContextAttrs = r0
            r2.mHandler = r0
            r2.mVideoHelper = r0
            r2.mWebViewHelper = r0
            r1 = 0
            r2.hasFocus = r1
            r2.gainAudioFocus = r1
            r1 = 1
            r2.paused = r1
            r2.getImgUrl = r0
            r2.mIsTaskRootOnCreate = r1
            return
    }

    static org.cocos2dx.lib.Cocos2dxGLSurfaceView access$100(org.cocos2dx.lib.Cocos2dxActivity r0) {
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r0 = r0.mGLSurfaceView
            return r0
    }

    static android.widget.TextView access$200(org.cocos2dx.lib.Cocos2dxActivity r0) {
            android.widget.TextView r0 = r0.mFPSTextView
            return r0
    }

    static android.widget.TextView access$202(org.cocos2dx.lib.Cocos2dxActivity r0, android.widget.TextView r1) {
            r0.mFPSTextView = r1
            return r1
    }

    static android.widget.TextView access$300(org.cocos2dx.lib.Cocos2dxActivity r0) {
            android.widget.TextView r0 = r0.mJSBInvocationTextView
            return r0
    }

    static android.widget.TextView access$302(org.cocos2dx.lib.Cocos2dxActivity r0, android.widget.TextView r1) {
            r0.mJSBInvocationTextView = r1
            return r1
    }

    static android.widget.LinearLayout access$400(org.cocos2dx.lib.Cocos2dxActivity r0) {
            android.widget.LinearLayout r0 = r0.mLinearLayoutForDebugView
            return r0
    }

    static android.widget.LinearLayout access$402(org.cocos2dx.lib.Cocos2dxActivity r0, android.widget.LinearLayout r1) {
            r0.mLinearLayoutForDebugView = r1
            return r1
    }

    static java.lang.String access$500() {
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxActivity.TAG
            return r0
    }

    static android.widget.TextView access$600(org.cocos2dx.lib.Cocos2dxActivity r0) {
            android.widget.TextView r0 = r0.mGLOptModeTextView
            return r0
    }

    static android.widget.TextView access$602(org.cocos2dx.lib.Cocos2dxActivity r0, android.widget.TextView r1) {
            r0.mGLOptModeTextView = r1
            return r1
    }

    static android.widget.TextView access$700(org.cocos2dx.lib.Cocos2dxActivity r0) {
            android.widget.TextView r0 = r0.mGameInfoTextView_0
            return r0
    }

    static android.widget.TextView access$702(org.cocos2dx.lib.Cocos2dxActivity r0, android.widget.TextView r1) {
            r0.mGameInfoTextView_0 = r1
            return r1
    }

    static android.widget.TextView access$800(org.cocos2dx.lib.Cocos2dxActivity r0) {
            android.widget.TextView r0 = r0.mGameInfoTextView_1
            return r0
    }

    static android.widget.TextView access$802(org.cocos2dx.lib.Cocos2dxActivity r0, android.widget.TextView r1) {
            r0.mGameInfoTextView_1 = r1
            return r1
    }

    static android.widget.TextView access$900(org.cocos2dx.lib.Cocos2dxActivity r0) {
            android.widget.TextView r0 = r0.mGameInfoTextView_2
            return r0
    }

    static android.widget.TextView access$902(org.cocos2dx.lib.Cocos2dxActivity r0, android.widget.TextView r1) {
            r0.mGameInfoTextView_2 = r1
            return r1
    }

    private void addDebugInfo(org.cocos2dx.lib.Cocos2dxRenderer r4) {
            r3 = this;
            android.widget.LinearLayout$LayoutParams r0 = new android.widget.LinearLayout$LayoutParams
            r1 = -2
            r0.<init>(r1, r1)
            r1 = 0
            r2 = 30
            r0.setMargins(r2, r1, r1, r1)
            org.cocos2dx.lib.Cocos2dxActivity$2 r1 = new org.cocos2dx.lib.Cocos2dxActivity$2
            r1.<init>(r3, r0, r4)
            org.cocos2dx.lib.Cocos2dxHelper.setOnGameInfoUpdatedListener(r1)
            return
    }

    private org.cocos2dx.lib.Cocos2dxRenderer addSurfaceView() {
            r8 = this;
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r0 = r8.onCreateView()
            r8.mGLSurfaceView = r0
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r0 = r8.mGLSurfaceView
            r1 = 1
            r0.setPreserveEGLContextOnPause(r1)
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r0 = r8.mGLSurfaceView
            r1 = 0
            r0.setBackgroundColor(r1)
            boolean r0 = isAndroidEmulator()
            if (r0 == 0) goto L28
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r1 = r8.mGLSurfaceView
            r2 = 8
            r3 = 8
            r4 = 8
            r5 = 8
            r6 = 16
            r7 = 0
            r1.setEGLConfigChooser(r2, r3, r4, r5, r6, r7)
        L28:
            org.cocos2dx.lib.Cocos2dxRenderer r0 = new org.cocos2dx.lib.Cocos2dxRenderer
            r0.<init>()
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r1 = r8.mGLSurfaceView
            r1.setCocos2dxRenderer(r0)
            android.widget.FrameLayout r1 = r8.mFrameLayout
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r2 = r8.mGLSurfaceView
            r1.addView(r2)
            return r0
    }

    private android.content.Intent createCamcorderIntent() {
            r2 = this;
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "android.media.action.VIDEO_CAPTURE"
            r0.<init>(r1)
            return r0
    }

    private android.content.Intent createCameraIntent() {
            r4 = this;
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "android.media.action.IMAGE_CAPTURE"
            r0.<init>(r1)
            java.lang.String r1 = android.os.Environment.DIRECTORY_DCIM
            java.io.File r1 = android.os.Environment.getExternalStoragePublicDirectory(r1)
            java.io.File r2 = new java.io.File
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = r1.getAbsolutePath()
            r3.append(r1)
            java.lang.String r1 = java.io.File.separator
            r3.append(r1)
            java.lang.String r1 = "browser-photos"
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            r2.<init>(r1)
            r2.mkdirs()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r2.getAbsolutePath()
            r1.append(r2)
            java.lang.String r2 = java.io.File.separator
            r1.append(r2)
            long r2 = java.lang.System.currentTimeMillis()
            r1.append(r2)
            java.lang.String r2 = ".jpg"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.io.File r2 = new java.io.File
            r2.<init>(r1)
            android.net.Uri r2 = android.net.Uri.fromFile(r2)
            java.lang.String r3 = "output"
            r0.putExtra(r3, r2)
            r4.getImgUrl = r1
            return r0
    }

    private android.content.Intent createChooserIntent(android.content.Intent... r3) {
            r2 = this;
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "android.intent.action.CHOOSER"
            r0.<init>(r1)
            java.lang.String r1 = "android.intent.extra.INITIAL_INTENTS"
            r0.putExtra(r1, r3)
            java.lang.String r3 = "android.intent.extra.TITLE"
            java.lang.String r1 = "File Chooser"
            r0.putExtra(r3, r1)
            return r0
    }

    private android.content.Intent createDefaultOpenableIntent() {
            r4 = this;
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "android.intent.action.GET_CONTENT"
            r0.<init>(r1)
            java.lang.String r1 = "android.intent.category.OPENABLE"
            r0.addCategory(r1)
            java.lang.String r1 = "image/*"
            r0.setType(r1)
            r1 = 1
            android.content.Intent[] r1 = new android.content.Intent[r1]
            android.content.Intent r2 = r4.createCameraIntent()
            r3 = 0
            r1[r3] = r2
            android.content.Intent r1 = r4.createChooserIntent(r1)
            java.lang.String r2 = "android.intent.extra.INTENT"
            r1.putExtra(r2, r0)
            return r1
    }

    private android.content.Intent createSoundRecorderIntent() {
            r2 = this;
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "android.provider.MediaStore.RECORD_SOUND"
            r0.<init>(r1)
            return r0
    }

    public static android.content.Context getContext() {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxActivity.sContext
            return r0
    }

    private static native int[] getGLContextAttrs();

    private static final boolean isAndroidEmulator() {
            java.lang.String r0 = android.os.Build.MODEL
            java.lang.String r1 = org.cocos2dx.lib.Cocos2dxActivity.TAG
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "model="
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            android.util.Log.d(r1, r0)
            java.lang.String r0 = android.os.Build.PRODUCT
            java.lang.String r1 = org.cocos2dx.lib.Cocos2dxActivity.TAG
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "product="
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            android.util.Log.d(r1, r2)
            r1 = 0
            if (r0 == 0) goto L4d
            java.lang.String r2 = "sdk"
            boolean r2 = r0.equals(r2)
            if (r2 != 0) goto L4b
            java.lang.String r2 = "_sdk"
            boolean r2 = r0.contains(r2)
            if (r2 != 0) goto L4b
            java.lang.String r2 = "sdk_"
            boolean r0 = r0.contains(r2)
            if (r0 == 0) goto L4d
        L4b:
            r0 = 1
            r1 = 1
        L4d:
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxActivity.TAG
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "isEmulator="
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            android.util.Log.d(r0, r2)
            return r1
    }

    private void resumeIfHasFocus() {
            r1 = this;
            boolean r0 = r1.hasFocus
            if (r0 == 0) goto L13
            boolean r0 = r1.paused
            if (r0 != 0) goto L13
            org.cocos2dx.lib.Utils.hideVirtualButton()
            org.cocos2dx.lib.Cocos2dxHelper.onResume()
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r0 = r1.mGLSurfaceView
            r0.onResume()
        L13:
            return
    }

    protected void CallJSFuncByEvent(int r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public org.cocos2dx.lib.Cocos2dxGLSurfaceView getGLSurfaceView() {
            r1 = this;
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r0 = r1.mGLSurfaceView
            return r0
    }

    public boolean getTaskRootCreate() {
            r1 = this;
            boolean r0 = r1.mIsTaskRootOnCreate
            return r0
    }

    public void init() {
            r4 = this;
            android.view.ViewGroup$LayoutParams r0 = new android.view.ViewGroup$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            android.widget.FrameLayout r1 = new android.widget.FrameLayout
            r1.<init>(r4)
            r4.mFrameLayout = r1
            android.widget.FrameLayout r1 = r4.mFrameLayout
            r1.setLayoutParams(r0)
            org.cocos2dx.lib.Cocos2dxRenderer r0 = r4.addSurfaceView()
            r4.addDebugInfo(r0)
            android.widget.FrameLayout r0 = r4.mFrameLayout
            r4.setContentView(r0)
            android.view.Window r0 = r4.getWindow()
            android.view.WindowManager$LayoutParams r0 = r0.getAttributes()
            java.lang.Class r1 = r0.getClass()     // Catch: java.lang.IllegalAccessException -> L5c java.lang.NoSuchFieldException -> L61
            java.lang.String r2 = "layoutInDisplayCutoutMode"
            java.lang.reflect.Field r1 = r1.getField(r2)     // Catch: java.lang.IllegalAccessException -> L5c java.lang.NoSuchFieldException -> L61
            java.lang.Class r2 = r0.getClass()     // Catch: java.lang.IllegalAccessException -> L5c java.lang.NoSuchFieldException -> L61
            java.lang.String r3 = "LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES"
            java.lang.reflect.Field r2 = r2.getDeclaredField(r3)     // Catch: java.lang.IllegalAccessException -> L5c java.lang.NoSuchFieldException -> L61
            r3 = 0
            int r2 = r2.getInt(r3)     // Catch: java.lang.IllegalAccessException -> L5c java.lang.NoSuchFieldException -> L61
            r1.setInt(r0, r2)     // Catch: java.lang.IllegalAccessException -> L5c java.lang.NoSuchFieldException -> L61
            java.lang.Class<android.view.View> r0 = android.view.View.class
            java.lang.String r1 = "SYSTEM_UI_FLAG_IMMERSIVE_STICKY"
            java.lang.reflect.Field r0 = r0.getDeclaredField(r1)     // Catch: java.lang.IllegalAccessException -> L5c java.lang.NoSuchFieldException -> L61
            int r0 = r0.getInt(r3)     // Catch: java.lang.IllegalAccessException -> L5c java.lang.NoSuchFieldException -> L61
            r0 = r0 | 1798(0x706, float:2.52E-42)
            android.view.Window r1 = r4.getWindow()     // Catch: java.lang.IllegalAccessException -> L5c java.lang.NoSuchFieldException -> L61
            android.view.View r1 = r1.getDecorView()     // Catch: java.lang.IllegalAccessException -> L5c java.lang.NoSuchFieldException -> L61
            r1.setSystemUiVisibility(r0)     // Catch: java.lang.IllegalAccessException -> L5c java.lang.NoSuchFieldException -> L61
            goto L65
        L5c:
            r0 = move-exception
            r0.printStackTrace()
            goto L65
        L61:
            r0 = move-exception
            r0.printStackTrace()
        L65:
            return
    }

    @Override
    protected void onActivityResult(int r4, int r5, android.content.Intent r6) {
            r3 = this;
            java.util.Set r0 = org.cocos2dx.lib.Cocos2dxHelper.getOnActivityResultListeners()
            java.util.Iterator r0 = r0.iterator()
        L8:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L18
            java.lang.Object r1 = r0.next()
            android.preference.PreferenceManager$OnActivityResultListener r1 = (android.preference.PreferenceManager.OnActivityResultListener) r1
            r1.onActivityResult(r4, r5, r6)
            goto L8
        L18:
            super.onActivityResult(r4, r5, r6)
            r0 = 10000(0x2710, float:1.4013E-41)
            if (r4 != r0) goto L3d
            r0 = 0
            if (r6 == 0) goto L2b
            r1 = -1
            if (r5 == r1) goto L26
            goto L2b
        L26:
            android.net.Uri r1 = r6.getData()
            goto L2c
        L2b:
            r1 = r0
        L2c:
            android.webkit.ValueCallback<android.net.Uri[]> r2 = r3.uploadMessageAboveL
            if (r2 == 0) goto L34
            r3.onActivityResultAboveL(r4, r5, r6)
            goto L3d
        L34:
            android.webkit.ValueCallback<android.net.Uri> r4 = r3.uploadMessage
            if (r4 == 0) goto L3d
            r4.onReceiveValue(r1)
            r3.uploadMessage = r0
        L3d:
            return
    }

    @android.annotation.TargetApi(21)
    protected void onActivityResultAboveL(int r6, int r7, android.content.Intent r8) {
            r5 = this;
            r0 = 10000(0x2710, float:1.4013E-41)
            if (r6 != r0) goto L78
            android.webkit.ValueCallback<android.net.Uri[]> r6 = r5.uploadMessageAboveL
            if (r6 != 0) goto La
            goto L78
        La:
            r6 = 0
            r0 = 1
            r1 = 0
            if (r8 != 0) goto L39
            java.lang.String r2 = r5.getImgUrl
            if (r2 == 0) goto L39
            java.io.File r7 = new java.io.File
            r7.<init>(r2)
            boolean r7 = r7.exists()
            if (r7 == 0) goto L2e
            android.net.Uri[] r7 = new android.net.Uri[r0]
            java.io.File r8 = new java.io.File
            java.lang.String r0 = r5.getImgUrl
            r8.<init>(r0)
            android.net.Uri r8 = android.net.Uri.fromFile(r8)
            r7[r6] = r8
            goto L2f
        L2e:
            r7 = r1
        L2f:
            r5.getImgUrl = r1
            android.webkit.ValueCallback<android.net.Uri[]> r6 = r5.uploadMessageAboveL
            r6.onReceiveValue(r7)
            r5.uploadMessageAboveL = r1
            return
        L39:
            r2 = -1
            if (r7 != r2) goto L70
            if (r8 == 0) goto L70
            java.lang.String r7 = r8.getDataString()
            android.content.ClipData r8 = r8.getClipData()
            if (r8 == 0) goto L62
            int r2 = r8.getItemCount()
            android.net.Uri[] r2 = new android.net.Uri[r2]
            r3 = 0
        L4f:
            int r4 = r8.getItemCount()
            if (r3 >= r4) goto L63
            android.content.ClipData$Item r4 = r8.getItemAt(r3)
            android.net.Uri r4 = r4.getUri()
            r2[r3] = r4
            int r3 = r3 + 1
            goto L4f
        L62:
            r2 = r1
        L63:
            if (r7 == 0) goto L6e
            android.net.Uri[] r8 = new android.net.Uri[r0]
            android.net.Uri r7 = android.net.Uri.parse(r7)
            r8[r6] = r7
            goto L71
        L6e:
            r8 = r2
            goto L71
        L70:
            r8 = r1
        L71:
            android.webkit.ValueCallback<android.net.Uri[]> r6 = r5.uploadMessageAboveL
            r6.onReceiveValue(r8)
            r5.uploadMessageAboveL = r1
        L78:
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r4) {
            r3 = this;
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxActivity.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Cocos2dxActivity onCreate: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r2 = ", savedInstanceState: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            android.util.Log.d(r0, r1)
            super.onCreate(r4)
            boolean r4 = r3.isTaskRoot()
            r3.mIsTaskRootOnCreate = r4
            org.cocos2dx.lib.Utils.setActivity(r3)
            org.cocos2dx.lib.Utils.hideVirtualButton()
            org.cocos2dx.lib.Cocos2dxHelper.registerBatteryLevelReceiver(r3)
            r3.onLoadNativeLibraries()
            org.cocos2dx.lib.Cocos2dxActivity.sContext = r3
            org.cocos2dx.lib.Cocos2dxHandler r4 = new org.cocos2dx.lib.Cocos2dxHandler
            r4.<init>(r3)
            r3.mHandler = r4
            org.cocos2dx.lib.Cocos2dxHelper.init(r3)
            org.cocos2dx.lib.CanvasRenderingContext2DImpl.init(r3)
            int[] r4 = getGLContextAttrs()
            r3.mGLContextAttrs = r4
            r3.init()
            org.cocos2dx.lib.Cocos2dxVideoHelper r4 = r3.mVideoHelper
            if (r4 != 0) goto L58
            org.cocos2dx.lib.Cocos2dxVideoHelper r4 = new org.cocos2dx.lib.Cocos2dxVideoHelper
            android.widget.FrameLayout r0 = r3.mFrameLayout
            r4.<init>(r3, r0)
            r3.mVideoHelper = r4
        L58:
            org.cocos2dx.lib.Cocos2dxWebViewHelper r4 = r3.mWebViewHelper
            if (r4 != 0) goto L65
            org.cocos2dx.lib.Cocos2dxWebViewHelper r4 = new org.cocos2dx.lib.Cocos2dxWebViewHelper
            android.widget.FrameLayout r0 = r3.mFrameLayout
            r4.<init>(r0)
            r3.mWebViewHelper = r4
        L65:
            android.view.Window r4 = r3.getWindow()
            r0 = 16
            r4.setSoftInputMode(r0)
            r0 = 128(0x80, float:1.8E-43)
            r4.addFlags(r0)
            r4 = 3
            r3.setVolumeControlStream(r4)
            return
    }

    public org.cocos2dx.lib.Cocos2dxGLSurfaceView onCreateView() {
            r3 = this;
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r0 = new org.cocos2dx.lib.Cocos2dxGLSurfaceView
            r0.<init>(r3)
            int[] r1 = r3.mGLContextAttrs
            r2 = 3
            r1 = r1[r2]
            if (r1 <= 0) goto L14
            android.view.SurfaceHolder r1 = r0.getHolder()
            r2 = -3
            r1.setFormat(r2)
        L14:
            org.cocos2dx.lib.Cocos2dxActivity$Cocos2dxEGLConfigChooser r1 = new org.cocos2dx.lib.Cocos2dxActivity$Cocos2dxEGLConfigChooser
            int[] r2 = r3.mGLContextAttrs
            r1.<init>(r3, r2)
            r0.setEGLConfigChooser(r1)
            return r0
    }

    @Override
    protected void onDestroy() {
            r3 = this;
            super.onDestroy()
            boolean r0 = r3.mIsTaskRootOnCreate
            if (r0 != 0) goto L8
            return
        L8:
            boolean r0 = r3.gainAudioFocus
            if (r0 == 0) goto Lf
            org.cocos2dx.lib.Cocos2dxAudioFocusManager.unregisterAudioFocusListener(r3)
        Lf:
            org.cocos2dx.lib.Cocos2dxHelper.unregisterBatteryLevelReceiver(r3)
            org.cocos2dx.lib.CanvasRenderingContext2DImpl.destroy()
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxActivity.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Cocos2dxActivity onDestroy: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r2 = ", mGLSurfaceView"
            r1.append(r2)
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r2 = r3.mGLSurfaceView
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            android.util.Log.d(r0, r1)
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r0 = r3.mGLSurfaceView
            if (r0 == 0) goto L3c
            org.cocos2dx.lib.Cocos2dxHelper.terminateProcess()
        L3c:
            return
    }

    protected void onLoadNativeLibraries() {
            r3 = this;
            android.content.pm.PackageManager r0 = r3.getPackageManager()     // Catch: java.lang.Exception -> L16
            java.lang.String r1 = r3.getPackageName()     // Catch: java.lang.Exception -> L16
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo(r1, r2)     // Catch: java.lang.Exception -> L16
            android.os.Bundle r0 = r0.metaData     // Catch: java.lang.Exception -> L16
            java.lang.String r0 = "cocos2djs"
            java.lang.System.loadLibrary(r0)     // Catch: java.lang.Exception -> L16
            goto L1a
        L16:
            r0 = move-exception
            r0.printStackTrace()
        L1a:
            return
    }

    @Override
    protected void onPause() {
            r2 = this;
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxActivity.TAG
            java.lang.String r1 = "onPause()"
            android.util.Log.d(r0, r1)
            r0 = 1
            r2.paused = r0
            super.onPause()
            boolean r0 = r2.gainAudioFocus
            if (r0 == 0) goto L14
            org.cocos2dx.lib.Cocos2dxAudioFocusManager.unregisterAudioFocusListener(r2)
        L14:
            org.cocos2dx.lib.Cocos2dxHelper.onPause()
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r0 = r2.mGLSurfaceView
            r0.onPause()
            return
    }

    @Override
    protected void onResume() {
            r2 = this;
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxActivity.TAG
            java.lang.String r1 = "onResume()"
            android.util.Log.d(r0, r1)
            r0 = 0
            r2.paused = r0
            super.onResume()
            boolean r0 = r2.gainAudioFocus
            if (r0 == 0) goto L14
            org.cocos2dx.lib.Cocos2dxAudioFocusManager.registerAudioFocusListener(r2)
        L14:
            org.cocos2dx.lib.Utils.hideVirtualButton()
            r2.resumeIfHasFocus()
            return
    }

    @Override
    public void onWindowFocusChanged(boolean r4) {
            r3 = this;
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxActivity.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "onWindowFocusChanged() hasFocus="
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            android.util.Log.d(r0, r1)
            super.onWindowFocusChanged(r4)
            r3.hasFocus = r4
            r3.resumeIfHasFocus()
            return
    }

    public void openImageChooserActivity() {
            r2 = this;
            android.content.Intent r0 = r2.createDefaultOpenableIntent()
            r1 = 10000(0x2710, float:1.4013E-41)
            r2.startActivityForResult(r0, r1)
            return
    }

    @Override
    public void runOnGLThread(java.lang.Runnable r2) {
            r1 = this;
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r0 = r1.mGLSurfaceView
            r0.queueEvent(r2)
            return
    }

    public void setEnableAudioFocusGain(boolean r2) {
            r1 = this;
            boolean r0 = r1.gainAudioFocus
            if (r0 == r2) goto L13
            boolean r0 = r1.paused
            if (r0 != 0) goto L11
            if (r2 == 0) goto Le
            org.cocos2dx.lib.Cocos2dxAudioFocusManager.registerAudioFocusListener(r1)
            goto L11
        Le:
            org.cocos2dx.lib.Cocos2dxAudioFocusManager.unregisterAudioFocusListener(r1)
        L11:
            r1.gainAudioFocus = r2
        L13:
            return
    }

    public void setKeepScreenOn(boolean r2) {
            r1 = this;
            org.cocos2dx.lib.Cocos2dxActivity$1 r0 = new org.cocos2dx.lib.Cocos2dxActivity$1
            r0.<init>(r1, r2)
            r1.runOnUiThread(r0)
            return
    }

    @Override
    public void showDialog(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            android.os.Message r0 = new android.os.Message
            r0.<init>()
            r1 = 1
            r0.what = r1
            org.cocos2dx.lib.Cocos2dxHandler$DialogMessage r1 = new org.cocos2dx.lib.Cocos2dxHandler$DialogMessage
            r1.<init>(r3, r4)
            r0.obj = r1
            org.cocos2dx.lib.Cocos2dxHandler r3 = r2.mHandler
            r3.sendMessage(r0)
            return
    }
}

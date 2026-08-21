package org.cocos2dx.lib;

public abstract class Cocos2dxActivity extends android.app.Activity implements org.cocos2dx.lib.Cocos2dxHelper.Cocos2dxHelperListener {
    public static final java.lang.String DISPLAY_NOTCH_STATUS = "display_notch_status";
    private static final int FILE_CHOOSER_RESULT_CODE = 10000;
    public static final int FLAG_NOTCH_SUPPORT = 65536;
    public static final int NOTCH_IN_SCREEN_VOIO = 32;
    private static final java.lang.String TAG = "Cocos2dxActivity";
    private static org.cocos2dx.lib.Cocos2dxActivity sContext;
    private boolean gainAudioFocus;
    public java.lang.String getImgUrl;
    private boolean hasFocus;
    private org.cocos2dx.lib.Cocos2dxEditBoxHelper mEditBoxHelper;
    protected org.cocos2dx.lib.ResizeLayout mFrameLayout;
    private int[] mGLContextAttrs;
    private org.cocos2dx.lib.Cocos2dxGLSurfaceView mGLSurfaceView;
    private org.cocos2dx.lib.Cocos2dxHandler mHandler;
    private int mIsNotchSwitchOpen;
    private org.cocos2dx.lib.Cocos2dxVideoHelper mVideoHelper;
    private org.cocos2dx.lib.Cocos2dxWebViewHelper mWebViewHelper;
    private boolean paused;
    private boolean showVirtualButton;
    public android.webkit.ValueCallback<android.net.Uri> uploadMessage;
    public android.webkit.ValueCallback<android.net.Uri[]> uploadMessageAboveL;


    private class Cocos2dxEGLConfigChooser implements android.opengl.GLSurfaceView.EGLConfigChooser {
        private final int EGL_OPENGL_ES2_BIT;
        private final int EGL_OPENGL_ES3_BIT;
        private int[] mConfigAttributes;
        final org.cocos2dx.lib.Cocos2dxActivity this$0;

        public Cocos2dxEGLConfigChooser(org.cocos2dx.lib.Cocos2dxActivity r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10) {
                r2 = this;
                r2.this$0 = r3
                r2.<init>()
                r3 = 4
                r2.EGL_OPENGL_ES2_BIT = r3
                r0 = 64
                r2.EGL_OPENGL_ES3_BIT = r0
                r0 = 7
                int[] r0 = new int[r0]
                r1 = 0
                r0[r1] = r4
                r4 = 1
                r0[r4] = r5
                r4 = 2
                r0[r4] = r6
                r4 = 3
                r0[r4] = r7
                r0[r3] = r8
                r3 = 5
                r0[r3] = r9
                r3 = 6
                r0[r3] = r10
                r2.mConfigAttributes = r0
                return
        }

        public Cocos2dxEGLConfigChooser(org.cocos2dx.lib.Cocos2dxActivity r1, int[] r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r1 = 4
                r0.EGL_OPENGL_ES2_BIT = r1
                r1 = 64
                r0.EGL_OPENGL_ES3_BIT = r1
                r0.mConfigAttributes = r2
                return
        }

        private javax.microedition.khronos.egl.EGLConfig doChooseConfig(javax.microedition.khronos.egl.EGL10 r9, javax.microedition.khronos.egl.EGLDisplay r10, int[] r11) {
                r8 = this;
                r0 = 1
                javax.microedition.khronos.egl.EGLConfig[] r7 = new javax.microedition.khronos.egl.EGLConfig[r0]
                int[] r0 = new int[r0]
                r5 = 1
                r1 = r9
                r2 = r10
                r3 = r11
                r4 = r7
                r6 = r0
                boolean r9 = r1.eglChooseConfig(r2, r3, r4, r5, r6)
                if (r9 == 0) goto L19
                r9 = 0
                r10 = r0[r9]
                if (r10 <= 0) goto L19
                r9 = r7[r9]
                return r9
            L19:
                r9 = 0
                return r9
        }

        @Override
        public javax.microedition.khronos.egl.EGLConfig chooseConfig(javax.microedition.khronos.egl.EGL10 r22, javax.microedition.khronos.egl.EGLDisplay r23) {
                r21 = this;
                r0 = r21
                r1 = 4
                int[][] r2 = new int[r1][]
                r3 = 19
                int[] r4 = new int[r3]
                r5 = 12324(0x3024, float:1.727E-41)
                r6 = 0
                r4[r6] = r5
                int[] r7 = r0.mConfigAttributes
                r8 = r7[r6]
                r9 = 1
                r4[r9] = r8
                r8 = 12323(0x3023, float:1.7268E-41)
                r10 = 2
                r4[r10] = r8
                r11 = r7[r9]
                r12 = 3
                r4[r12] = r11
                r11 = 12322(0x3022, float:1.7267E-41)
                r4[r1] = r11
                r13 = r7[r10]
                r14 = 5
                r4[r14] = r13
                r13 = 12321(0x3021, float:1.7265E-41)
                r15 = 6
                r4[r15] = r13
                r16 = r7[r12]
                r17 = 7
                r4[r17] = r16
                r16 = 8
                r18 = 12325(0x3025, float:1.7271E-41)
                r4[r16] = r18
                r18 = r7[r1]
                r19 = 9
                r4[r19] = r18
                r18 = 10
                r19 = 12326(0x3026, float:1.7272E-41)
                r4[r18] = r19
                r18 = r7[r14]
                r19 = 11
                r4[r19] = r18
                r18 = 12
                r19 = 12338(0x3032, float:1.7289E-41)
                r4[r18] = r19
                r7 = r7[r15]
                if (r7 <= 0) goto L57
                r7 = 1
                goto L58
            L57:
                r7 = 0
            L58:
                r18 = 13
                r4[r18] = r7
                r7 = 14
                r18 = 12337(0x3031, float:1.7288E-41)
                r4[r7] = r18
                r7 = 15
                int[] r13 = r0.mConfigAttributes
                r19 = r13[r15]
                r4[r7] = r19
                r7 = 12352(0x3040, float:1.7309E-41)
                r19 = 16
                r4[r19] = r7
                r7 = 17
                r4[r7] = r1
                r7 = 18
                r20 = 12344(0x3038, float:1.7298E-41)
                r4[r7] = r20
                r2[r6] = r4
                int[] r4 = new int[r3]
                r4[r6] = r5
                r7 = r13[r6]
                r4[r9] = r7
                r4[r10] = r8
                r7 = r13[r9]
                r4[r12] = r7
                r4[r1] = r11
                r7 = r13[r10]
                r4[r14] = r7
                r7 = 12321(0x3021, float:1.7265E-41)
                r4[r15] = r7
                r7 = r13[r12]
                r4[r17] = r7
                r7 = 12325(0x3025, float:1.7271E-41)
                r4[r16] = r7
                r7 = 9
                r11 = r13[r1]
                r12 = 24
                if (r11 < r12) goto La7
                r11 = 16
                goto La9
            La7:
                r11 = r13[r1]
            La9:
                r4[r7] = r11
                r7 = 10
                r11 = 12326(0x3026, float:1.7272E-41)
                r4[r7] = r11
                r7 = 11
                int[] r11 = r0.mConfigAttributes
                r12 = r11[r14]
                r4[r7] = r12
                r7 = 12
                r12 = 12338(0x3032, float:1.7289E-41)
                r4[r7] = r12
                r7 = 13
                r11 = r11[r15]
                if (r11 <= 0) goto Lc7
                r11 = 1
                goto Lc8
            Lc7:
                r11 = 0
            Lc8:
                r4[r7] = r11
                r7 = 14
                r11 = 12337(0x3031, float:1.7288E-41)
                r4[r7] = r11
                r7 = 15
                int[] r11 = r0.mConfigAttributes
                r12 = r11[r15]
                r4[r7] = r12
                r7 = 12352(0x3040, float:1.7309E-41)
                r4[r19] = r7
                r7 = 17
                r4[r7] = r1
                r7 = 18
                r12 = 12344(0x3038, float:1.7298E-41)
                r4[r7] = r12
                r2[r9] = r4
                int[] r3 = new int[r3]
                r3[r6] = r5
                r4 = r11[r6]
                r3[r9] = r4
                r3[r10] = r8
                r4 = r11[r9]
                r5 = 3
                r3[r5] = r4
                r4 = 12322(0x3022, float:1.7267E-41)
                r3[r1] = r4
                r4 = r11[r10]
                r3[r14] = r4
                r4 = 12321(0x3021, float:1.7265E-41)
                r3[r15] = r4
                r4 = r11[r5]
                r3[r17] = r4
                r4 = 12325(0x3025, float:1.7271E-41)
                r3[r16] = r4
                r4 = 9
                r5 = r11[r1]
                r7 = 24
                if (r5 < r7) goto L116
                r5 = 16
                goto L118
            L116:
                r5 = r11[r1]
            L118:
                r3[r4] = r5
                r4 = 10
                r5 = 12326(0x3026, float:1.7272E-41)
                r3[r4] = r5
                r4 = 11
                int[] r5 = r0.mConfigAttributes
                r5 = r5[r14]
                r3[r4] = r5
                r4 = 12
                r5 = 12338(0x3032, float:1.7289E-41)
                r3[r4] = r5
                r4 = 13
                r3[r4] = r6
                r4 = 14
                r5 = 12337(0x3031, float:1.7288E-41)
                r3[r4] = r5
                r4 = 15
                r3[r4] = r6
                r4 = 12352(0x3040, float:1.7309E-41)
                r3[r19] = r4
                r4 = 17
                r3[r4] = r1
                r1 = 18
                r4 = 12344(0x3038, float:1.7298E-41)
                r3[r1] = r4
                r2[r10] = r3
                r1 = 3
                int[] r3 = new int[r1]
                r3 = {x0170: FILL_ARRAY_DATA , data: [12352, 4, 12344} // fill-array
                r2[r1] = r3
                int r1 = r2.length
            L155:
                if (r6 >= r1) goto L167
                r3 = r2[r6]
                r4 = r22
                r5 = r23
                javax.microedition.khronos.egl.EGLConfig r3 = r0.doChooseConfig(r4, r5, r3)
                if (r3 == 0) goto L164
                return r3
            L164:
                int r6 = r6 + 1
                goto L155
            L167:
                java.lang.String r1 = "device_policy"
                java.lang.String r2 = "Can not select an EGLConfig for rendering."
                android.util.Log.e(r1, r2)
                r1 = 0
                return r1
        }
    }

    public static class SystemProperties {
        public SystemProperties() {
                r0 = this;
                r0.<init>()
                return
        }

        public static int[] get(java.lang.String r10) {
                java.lang.String r0 = ","
                java.lang.String r1 = "get error() "
                java.lang.String r2 = "error"
                r3 = 2
                int[] r3 = new int[r3]
                r3 = {x0082: FILL_ARRAY_DATA , data: [0, 0} // fill-array
                java.lang.String r4 = "android.os.SystemProperties"
                java.lang.Class r4 = java.lang.Class.forName(r4)     // Catch: java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalArgumentException -> L69 java.lang.IllegalAccessException -> L6e java.lang.InstantiationException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
                java.lang.String r5 = "get"
                r6 = 1
                java.lang.Class[] r7 = new java.lang.Class[r6]     // Catch: java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalArgumentException -> L69 java.lang.IllegalAccessException -> L6e java.lang.InstantiationException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
                java.lang.Class<java.lang.String> r8 = java.lang.String.class
                r9 = 0
                r7[r9] = r8     // Catch: java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalArgumentException -> L69 java.lang.IllegalAccessException -> L6e java.lang.InstantiationException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
                java.lang.reflect.Method r5 = r4.getMethod(r5, r7)     // Catch: java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalArgumentException -> L69 java.lang.IllegalAccessException -> L6e java.lang.InstantiationException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
                java.lang.Object r4 = r4.newInstance()     // Catch: java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalArgumentException -> L69 java.lang.IllegalAccessException -> L6e java.lang.InstantiationException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
                java.lang.Object[] r7 = new java.lang.Object[r6]     // Catch: java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalArgumentException -> L69 java.lang.IllegalAccessException -> L6e java.lang.InstantiationException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
                r7[r9] = r10     // Catch: java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalArgumentException -> L69 java.lang.IllegalAccessException -> L6e java.lang.InstantiationException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
                java.lang.Object r10 = r5.invoke(r4, r7)     // Catch: java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalArgumentException -> L69 java.lang.IllegalAccessException -> L6e java.lang.InstantiationException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
                java.lang.String r10 = (java.lang.String) r10     // Catch: java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalArgumentException -> L69 java.lang.IllegalAccessException -> L6e java.lang.InstantiationException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
                java.lang.String r4 = ":"
                java.lang.String[] r10 = r10.split(r4)     // Catch: java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalArgumentException -> L69 java.lang.IllegalAccessException -> L6e java.lang.InstantiationException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
                r4 = r10[r9]     // Catch: java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalArgumentException -> L69 java.lang.IllegalAccessException -> L6e java.lang.InstantiationException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
                java.lang.String[] r4 = r4.split(r0)     // Catch: java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalArgumentException -> L69 java.lang.IllegalAccessException -> L6e java.lang.InstantiationException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
                r10 = r10[r6]     // Catch: java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalArgumentException -> L69 java.lang.IllegalAccessException -> L6e java.lang.InstantiationException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
                java.lang.String[] r10 = r10.split(r0)     // Catch: java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalArgumentException -> L69 java.lang.IllegalAccessException -> L6e java.lang.InstantiationException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
                r0 = r10[r9]     // Catch: java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalArgumentException -> L69 java.lang.IllegalAccessException -> L6e java.lang.InstantiationException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
                java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalArgumentException -> L69 java.lang.IllegalAccessException -> L6e java.lang.InstantiationException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
                int r0 = r0.intValue()     // Catch: java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalArgumentException -> L69 java.lang.IllegalAccessException -> L6e java.lang.InstantiationException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
                r4 = r4[r9]     // Catch: java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalArgumentException -> L69 java.lang.IllegalAccessException -> L6e java.lang.InstantiationException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
                java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalArgumentException -> L69 java.lang.IllegalAccessException -> L6e java.lang.InstantiationException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
                int r4 = r4.intValue()     // Catch: java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalArgumentException -> L69 java.lang.IllegalAccessException -> L6e java.lang.InstantiationException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
                int r0 = r0 - r4
                r3[r9] = r0     // Catch: java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalArgumentException -> L69 java.lang.IllegalAccessException -> L6e java.lang.InstantiationException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
                r10 = r10[r6]     // Catch: java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalArgumentException -> L69 java.lang.IllegalAccessException -> L6e java.lang.InstantiationException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
                java.lang.Integer r10 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalArgumentException -> L69 java.lang.IllegalAccessException -> L6e java.lang.InstantiationException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
                int r10 = r10.intValue()     // Catch: java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalArgumentException -> L69 java.lang.IllegalAccessException -> L6e java.lang.InstantiationException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
                r3[r6] = r10     // Catch: java.lang.reflect.InvocationTargetException -> L64 java.lang.IllegalArgumentException -> L69 java.lang.IllegalAccessException -> L6e java.lang.InstantiationException -> L73 java.lang.NoSuchMethodException -> L78 java.lang.ClassNotFoundException -> L7d
                goto L81
            L64:
                r10 = move-exception
                android.util.Log.e(r2, r1, r10)
                goto L81
            L69:
                r10 = move-exception
                android.util.Log.e(r2, r1, r10)
                goto L81
            L6e:
                r10 = move-exception
                android.util.Log.e(r2, r1, r10)
                goto L81
            L73:
                r10 = move-exception
                android.util.Log.e(r2, r1, r10)
                goto L81
            L78:
                r10 = move-exception
                android.util.Log.e(r2, r1, r10)
                goto L81
            L7d:
                r10 = move-exception
                android.util.Log.e(r2, r1, r10)
            L81:
                return r3
        }

        public static boolean getBoolean(java.lang.String r9, boolean r10) {
                java.lang.String r0 = "get error() "
                java.lang.String r1 = "error"
                r2 = 0
                java.lang.String r3 = "android.os.SystemProperties"
                java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalArgumentException -> L3b java.lang.IllegalAccessException -> L40 java.lang.InstantiationException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
                java.lang.String r4 = "getBoolean"
                r5 = 2
                java.lang.Class[] r6 = new java.lang.Class[r5]     // Catch: java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalArgumentException -> L3b java.lang.IllegalAccessException -> L40 java.lang.InstantiationException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
                java.lang.Class<java.lang.String> r7 = java.lang.String.class
                r6[r2] = r7     // Catch: java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalArgumentException -> L3b java.lang.IllegalAccessException -> L40 java.lang.InstantiationException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
                java.lang.Class r7 = java.lang.Boolean.TYPE     // Catch: java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalArgumentException -> L3b java.lang.IllegalAccessException -> L40 java.lang.InstantiationException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
                r8 = 1
                r6[r8] = r7     // Catch: java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalArgumentException -> L3b java.lang.IllegalAccessException -> L40 java.lang.InstantiationException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
                java.lang.reflect.Method r4 = r3.getMethod(r4, r6)     // Catch: java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalArgumentException -> L3b java.lang.IllegalAccessException -> L40 java.lang.InstantiationException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
                java.lang.Object r3 = r3.newInstance()     // Catch: java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalArgumentException -> L3b java.lang.IllegalAccessException -> L40 java.lang.InstantiationException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
                java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalArgumentException -> L3b java.lang.IllegalAccessException -> L40 java.lang.InstantiationException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
                r5[r2] = r9     // Catch: java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalArgumentException -> L3b java.lang.IllegalAccessException -> L40 java.lang.InstantiationException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
                java.lang.Boolean r9 = java.lang.Boolean.valueOf(r10)     // Catch: java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalArgumentException -> L3b java.lang.IllegalAccessException -> L40 java.lang.InstantiationException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
                r5[r8] = r9     // Catch: java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalArgumentException -> L3b java.lang.IllegalAccessException -> L40 java.lang.InstantiationException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
                java.lang.Object r9 = r4.invoke(r3, r5)     // Catch: java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalArgumentException -> L3b java.lang.IllegalAccessException -> L40 java.lang.InstantiationException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
                java.lang.Boolean r9 = (java.lang.Boolean) r9     // Catch: java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalArgumentException -> L3b java.lang.IllegalAccessException -> L40 java.lang.InstantiationException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
                boolean r2 = r9.booleanValue()     // Catch: java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalArgumentException -> L3b java.lang.IllegalAccessException -> L40 java.lang.InstantiationException -> L45 java.lang.NoSuchMethodException -> L4a java.lang.ClassNotFoundException -> L4f
                goto L53
            L36:
                r9 = move-exception
                android.util.Log.e(r1, r0, r9)
                goto L53
            L3b:
                r9 = move-exception
                android.util.Log.e(r1, r0, r9)
                goto L53
            L40:
                r9 = move-exception
                android.util.Log.e(r1, r0, r9)
                goto L53
            L45:
                r9 = move-exception
                android.util.Log.e(r1, r0, r9)
                goto L53
            L4a:
                r9 = move-exception
                android.util.Log.e(r1, r0, r9)
                goto L53
            L4f:
                r9 = move-exception
                android.util.Log.e(r1, r0, r9)
            L53:
                return r2
        }

        public static java.lang.Integer getInt(java.lang.String r7, int r8) {
                java.lang.Integer r0 = java.lang.Integer.valueOf(r8)
                java.lang.String r1 = "android.os.SystemProperties"
                java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L35 java.lang.IllegalArgumentException -> L3a
                r2 = 2
                java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L35 java.lang.IllegalArgumentException -> L3a
                java.lang.Class<java.lang.String> r4 = java.lang.String.class
                r5 = 0
                r3[r5] = r4     // Catch: java.lang.Exception -> L35 java.lang.IllegalArgumentException -> L3a
                java.lang.Class r4 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L35 java.lang.IllegalArgumentException -> L3a
                r6 = 1
                r3[r6] = r4     // Catch: java.lang.Exception -> L35 java.lang.IllegalArgumentException -> L3a
                java.lang.String r4 = "getInt"
                java.lang.reflect.Method r3 = r1.getMethod(r4, r3)     // Catch: java.lang.Exception -> L35 java.lang.IllegalArgumentException -> L3a
                java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L35 java.lang.IllegalArgumentException -> L3a
                java.lang.String r4 = new java.lang.String     // Catch: java.lang.Exception -> L35 java.lang.IllegalArgumentException -> L3a
                r4.<init>(r7)     // Catch: java.lang.Exception -> L35 java.lang.IllegalArgumentException -> L3a
                r2[r5] = r4     // Catch: java.lang.Exception -> L35 java.lang.IllegalArgumentException -> L3a
                java.lang.Integer r7 = new java.lang.Integer     // Catch: java.lang.Exception -> L35 java.lang.IllegalArgumentException -> L3a
                r7.<init>(r8)     // Catch: java.lang.Exception -> L35 java.lang.IllegalArgumentException -> L3a
                r2[r6] = r7     // Catch: java.lang.Exception -> L35 java.lang.IllegalArgumentException -> L3a
                java.lang.Object r7 = r3.invoke(r1, r2)     // Catch: java.lang.Exception -> L35 java.lang.IllegalArgumentException -> L3a
                java.lang.Integer r7 = (java.lang.Integer) r7     // Catch: java.lang.Exception -> L35 java.lang.IllegalArgumentException -> L3a
                r0 = r7
                goto L43
            L35:
                java.lang.Integer r0 = java.lang.Integer.valueOf(r8)
                goto L43
            L3a:
                java.lang.String r7 = org.cocos2dx.lib.Cocos2dxActivity.access$100()
                java.lang.String r8 = "key超过32个字符"
                android.util.Log.w(r7, r8)
            L43:
                return r0
        }
    }

    static {
            return
    }

    public Cocos2dxActivity() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.mGLSurfaceView = r0
            r2.mGLContextAttrs = r0
            r2.mHandler = r0
            r2.mVideoHelper = r0
            r2.mWebViewHelper = r0
            r2.mEditBoxHelper = r0
            r1 = 0
            r2.hasFocus = r1
            r2.showVirtualButton = r1
            r2.gainAudioFocus = r1
            r1 = 1
            r2.paused = r1
            r2.getImgUrl = r0
            r2.mFrameLayout = r0
            r0 = -1
            r2.mIsNotchSwitchOpen = r0
            return
    }

    static org.cocos2dx.lib.Cocos2dxGLSurfaceView access$000(org.cocos2dx.lib.Cocos2dxActivity r0) {
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r0 = r0.mGLSurfaceView
            return r0
    }

    static java.lang.String access$100() {
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxActivity.TAG
            return r0
    }

    @android.annotation.TargetApi(21)
    private void changeNotchState() {
            r5 = this;
            java.lang.String r0 = android.os.Build.BRAND
            java.lang.String r1 = "HUAWEI"
            boolean r0 = r0.equals(r1)
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L62
            android.content.Context r0 = getContext()
            android.content.ContentResolver r0 = r0.getContentResolver()
            java.lang.String r3 = "display_notch_status"
            int r0 = android.provider.Settings.Secure.getInt(r0, r3, r2)
            r3 = -1
            if (r0 != r1) goto L40
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r4 = r5.mGLSurfaceView
            if (r4 == 0) goto L62
            int r4 = r5.mIsNotchSwitchOpen
            if (r4 == r3) goto L62
            if (r4 == r0) goto L62
            android.view.Window r0 = r5.getWindow()
            setFullScreenWindowLayoutInDisplayCutout(r0)
            android.view.Window r0 = r5.getWindow()
            android.view.WindowManager$LayoutParams r0 = r0.getAttributes()
            android.view.WindowManager r3 = r5.getWindowManager()
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r4 = r5.mGLSurfaceView
            r3.updateViewLayout(r4, r0)
            goto L62
        L40:
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r4 = r5.mGLSurfaceView
            if (r4 == 0) goto L62
            int r4 = r5.mIsNotchSwitchOpen
            if (r4 == r3) goto L62
            if (r4 == r0) goto L62
            android.view.Window r0 = r5.getWindow()
            setNotFullScreenWindowLayoutInDisplayCutout(r0)
            android.view.Window r0 = r5.getWindow()
            android.view.WindowManager$LayoutParams r0 = r0.getAttributes()
            android.view.WindowManager r3 = r5.getWindowManager()
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r4 = r5.mGLSurfaceView
            r3.updateViewLayout(r4, r0)
        L62:
            java.lang.String r0 = android.os.Build.BRAND
            java.lang.String r3 = "OPPO"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto L9c
            java.lang.String r0 = android.os.Build.BRAND
            java.lang.String r3 = "oppo"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L77
            goto L9c
        L77:
            java.lang.String r0 = android.os.Build.BRAND
            java.lang.String r3 = "Xiaomi"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto Lb7
            android.content.Context r0 = getContext()
            android.content.ContentResolver r0 = r0.getContentResolver()
            java.lang.String r4 = "force_black"
            int r0 = android.provider.Settings.Global.getInt(r0, r4, r2)
            if (r0 != r1) goto L96
            java.lang.String r0 = "Notch off"
            android.util.Log.e(r3, r0)
        L96:
            java.lang.String r0 = "Notch in"
            android.util.Log.e(r3, r0)
            goto Lb7
        L9c:
            boolean r0 = hasNotchInScreen()
            if (r0 == 0) goto Lb7
            android.view.Window r0 = r5.getWindow()
            android.view.View r1 = r0.getDecorView()
            r3 = 1280(0x500, float:1.794E-42)
            r1.setSystemUiVisibility(r3)
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            r0.addFlags(r1)
            r0.setStatusBarColor(r2)
        Lb7:
            return
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

    public static org.cocos2dx.lib.Cocos2dxActivity getInstance() {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxActivity.sContext
            return r0
    }

    public static int getNavigationBarHeight(android.content.Context r3) {
            android.content.res.Resources r3 = r3.getResources()
            java.lang.String r0 = "navigation_bar_height"
            java.lang.String r1 = "dimen"
            java.lang.String r2 = "android"
            int r0 = r3.getIdentifier(r0, r1, r2)
            if (r0 <= 0) goto L15
            int r3 = r3.getDimensionPixelSize(r0)
            goto L16
        L15:
            r3 = -1
        L16:
            return r3
    }

    public static int[] getNotchSize() {
            java.lang.String r0 = "test"
            r1 = 2
            int[] r1 = new int[r1]
            r1 = {x00d4: FILL_ARRAY_DATA , data: [0, 0} // fill-array
            java.lang.String r2 = android.os.Build.BRAND
            java.lang.String r3 = "getNotchSize手机厂商信息"
            android.util.Log.e(r3, r2)
            java.lang.String r2 = android.os.Build.BRAND
            java.lang.String r3 = "HUAWEI"
            boolean r2 = r2.equals(r3)
            r3 = 1
            r4 = 0
            if (r2 == 0) goto L7d
            android.content.Context r2 = getContext()     // Catch: java.lang.Exception -> L6c java.lang.NoSuchMethodException -> L72 java.lang.ClassNotFoundException -> L78
            android.content.ContentResolver r2 = r2.getContentResolver()     // Catch: java.lang.Exception -> L6c java.lang.NoSuchMethodException -> L72 java.lang.ClassNotFoundException -> L78
            java.lang.String r5 = "display_notch_status"
            int r2 = android.provider.Settings.Secure.getInt(r2, r5, r4)     // Catch: java.lang.Exception -> L6c java.lang.NoSuchMethodException -> L72 java.lang.ClassNotFoundException -> L78
            if (r2 != r3) goto L2c
            return r1
        L2c:
            android.content.Context r2 = getContext()     // Catch: java.lang.Exception -> L6c java.lang.NoSuchMethodException -> L72 java.lang.ClassNotFoundException -> L78
            java.lang.ClassLoader r2 = r2.getClassLoader()     // Catch: java.lang.Exception -> L6c java.lang.NoSuchMethodException -> L72 java.lang.ClassNotFoundException -> L78
            java.lang.String r5 = "com.huawei.android.util.HwNotchSizeUtil"
            java.lang.Class r2 = r2.loadClass(r5)     // Catch: java.lang.Exception -> L6c java.lang.NoSuchMethodException -> L72 java.lang.ClassNotFoundException -> L78
            java.lang.String r5 = "getNotchSize"
            java.lang.Class[] r6 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> L6c java.lang.NoSuchMethodException -> L72 java.lang.ClassNotFoundException -> L78
            java.lang.reflect.Method r5 = r2.getMethod(r5, r6)     // Catch: java.lang.Exception -> L6c java.lang.NoSuchMethodException -> L72 java.lang.ClassNotFoundException -> L78
            java.lang.Object[] r6 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L6c java.lang.NoSuchMethodException -> L72 java.lang.ClassNotFoundException -> L78
            java.lang.Object r2 = r5.invoke(r2, r6)     // Catch: java.lang.Exception -> L6c java.lang.NoSuchMethodException -> L72 java.lang.ClassNotFoundException -> L78
            int[] r2 = (int[]) r2     // Catch: java.lang.Exception -> L6c java.lang.NoSuchMethodException -> L72 java.lang.ClassNotFoundException -> L78
            android.content.Context r5 = getContext()     // Catch: java.lang.Exception -> L6c java.lang.NoSuchMethodException -> L72 java.lang.ClassNotFoundException -> L78
            int r5 = getStatusBarHeight(r5)     // Catch: java.lang.Exception -> L6c java.lang.NoSuchMethodException -> L72 java.lang.ClassNotFoundException -> L78
            java.lang.String r6 = "stateBarheight : "
            java.lang.String r7 = "%d"
            java.lang.Object[] r8 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L6c java.lang.NoSuchMethodException -> L72 java.lang.ClassNotFoundException -> L78
            java.lang.Integer r9 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> L6c java.lang.NoSuchMethodException -> L72 java.lang.ClassNotFoundException -> L78
            r8[r4] = r9     // Catch: java.lang.Exception -> L6c java.lang.NoSuchMethodException -> L72 java.lang.ClassNotFoundException -> L78
            java.lang.String r7 = java.lang.String.format(r7, r8)     // Catch: java.lang.Exception -> L6c java.lang.NoSuchMethodException -> L72 java.lang.ClassNotFoundException -> L78
            android.util.Log.e(r6, r7)     // Catch: java.lang.Exception -> L6c java.lang.NoSuchMethodException -> L72 java.lang.ClassNotFoundException -> L78
            r2 = r2[r4]     // Catch: java.lang.Exception -> L6c java.lang.NoSuchMethodException -> L72 java.lang.ClassNotFoundException -> L78
            r1[r4] = r2     // Catch: java.lang.Exception -> L6c java.lang.NoSuchMethodException -> L72 java.lang.ClassNotFoundException -> L78
            r1[r3] = r5     // Catch: java.lang.Exception -> L6c java.lang.NoSuchMethodException -> L72 java.lang.ClassNotFoundException -> L78
            return r1
        L6c:
            java.lang.String r2 = "getNotchSize Exception"
            android.util.Log.e(r0, r2)
            goto L7d
        L72:
            java.lang.String r2 = "getNotchSize NoSuchMethodException"
            android.util.Log.e(r0, r2)
            goto L7d
        L78:
            java.lang.String r2 = "getNotchSize ClassNotFoundException"
            android.util.Log.e(r0, r2)
        L7d:
            java.lang.String r0 = android.os.Build.BRAND
            java.lang.String r2 = "OPPO"
            boolean r0 = r0.equals(r2)
            r2 = 60
            if (r0 != 0) goto Lc5
            java.lang.String r0 = android.os.Build.BRAND
            java.lang.String r5 = "oppo"
            boolean r0 = r0.equals(r5)
            if (r0 == 0) goto L94
            goto Lc5
        L94:
            java.lang.String r0 = android.os.Build.BRAND
            java.lang.String r5 = "VIVO"
            boolean r0 = r0.equals(r5)
            if (r0 != 0) goto Lc0
            java.lang.String r0 = android.os.Build.BRAND
            java.lang.String r5 = "vivo"
            boolean r0 = r0.equals(r5)
            if (r0 == 0) goto La9
            goto Lc0
        La9:
            java.lang.String r0 = android.os.Build.BRAND
            java.lang.String r2 = "Xiaomi"
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto Lbf
            android.content.Context r0 = getContext()
            int r0 = getStatusBarHeight(r0)
            r1[r4] = r0
            r1[r3] = r0
        Lbf:
            return r1
        Lc0:
            r1[r4] = r2
            r1[r3] = r2
            return r1
        Lc5:
            java.lang.String r0 = "ro.oppo.screen.heteromorphism"
            int[] r0 = org.cocos2dx.lib.Cocos2dxActivity.SystemProperties.get(r0)
            r1 = r0[r4]
            if (r1 != 0) goto Ld3
            r0[r4] = r2
            r0[r3] = r2
        Ld3:
            return r0
    }

    public static int getStatusBarHeight(android.content.Context r4) {
            android.content.res.Resources r0 = r4.getResources()
            java.lang.String r1 = "status_bar_height"
            java.lang.String r2 = "dimen"
            java.lang.String r3 = "android"
            int r0 = r0.getIdentifier(r1, r2, r3)
            if (r0 <= 0) goto L19
            android.content.res.Resources r4 = r4.getResources()
            int r4 = r4.getDimensionPixelSize(r0)
            goto L1a
        L19:
            r4 = 0
        L1a:
            return r4
    }

    public static boolean hasNotchInScreen() {
            java.lang.String r0 = "HUA WEI"
            java.lang.String r1 = "test"
            java.lang.String r2 = android.os.Build.BRAND
            java.lang.String r3 = "hasNotchInScreen手机厂商信息"
            android.util.Log.e(r3, r2)
            java.lang.String r2 = android.os.Build.BRAND
            java.lang.String r3 = "vivo"
            boolean r2 = r2.equals(r3)
            java.lang.String r3 = "hasNotchInScreen NoSuchMethodException"
            java.lang.String r4 = "hasNotchInScreen ClassNotFoundException"
            java.lang.String r5 = "hasNotchInScreen Exception"
            r6 = 1
            r7 = 0
            if (r2 != 0) goto Lc2
            java.lang.String r2 = android.os.Build.BRAND
            java.lang.String r8 = "VIVO"
            boolean r2 = r2.equals(r8)
            if (r2 == 0) goto L29
            goto Lc2
        L29:
            java.lang.String r1 = android.os.Build.BRAND
            java.lang.String r2 = "HUAWEI"
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L7e
            android.content.Context r1 = getContext()     // Catch: java.lang.Exception -> L6f java.lang.NoSuchMethodException -> L74 java.lang.ClassNotFoundException -> L79
            android.content.ContentResolver r1 = r1.getContentResolver()     // Catch: java.lang.Exception -> L6f java.lang.NoSuchMethodException -> L74 java.lang.ClassNotFoundException -> L79
            java.lang.String r2 = "display_notch_status"
            int r1 = android.provider.Settings.Secure.getInt(r1, r2, r7)     // Catch: java.lang.Exception -> L6f java.lang.NoSuchMethodException -> L74 java.lang.ClassNotFoundException -> L79
            if (r1 != r6) goto L44
            goto L67
        L44:
            android.content.Context r2 = getContext()     // Catch: java.lang.Exception -> L6f java.lang.NoSuchMethodException -> L74 java.lang.ClassNotFoundException -> L79
            java.lang.ClassLoader r2 = r2.getClassLoader()     // Catch: java.lang.Exception -> L6f java.lang.NoSuchMethodException -> L74 java.lang.ClassNotFoundException -> L79
            java.lang.String r6 = "com.huawei.android.util.HwNotchSizeUtil"
            java.lang.Class r2 = r2.loadClass(r6)     // Catch: java.lang.Exception -> L6f java.lang.NoSuchMethodException -> L74 java.lang.ClassNotFoundException -> L79
            java.lang.String r6 = "hasNotchInScreen"
            java.lang.Class[] r8 = new java.lang.Class[r7]     // Catch: java.lang.Exception -> L6f java.lang.NoSuchMethodException -> L74 java.lang.ClassNotFoundException -> L79
            java.lang.reflect.Method r6 = r2.getMethod(r6, r8)     // Catch: java.lang.Exception -> L6f java.lang.NoSuchMethodException -> L74 java.lang.ClassNotFoundException -> L79
            java.lang.Object[] r8 = new java.lang.Object[r7]     // Catch: java.lang.Exception -> L6f java.lang.NoSuchMethodException -> L74 java.lang.ClassNotFoundException -> L79
            java.lang.Object r2 = r6.invoke(r2, r8)     // Catch: java.lang.Exception -> L6f java.lang.NoSuchMethodException -> L74 java.lang.ClassNotFoundException -> L79
            java.lang.Boolean r2 = (java.lang.Boolean) r2     // Catch: java.lang.Exception -> L6f java.lang.NoSuchMethodException -> L74 java.lang.ClassNotFoundException -> L79
            boolean r2 = r2.booleanValue()     // Catch: java.lang.Exception -> L6f java.lang.NoSuchMethodException -> L74 java.lang.ClassNotFoundException -> L79
            r7 = r2
        L67:
            org.cocos2dx.lib.Cocos2dxActivity r2 = getInstance()     // Catch: java.lang.Exception -> L6f java.lang.NoSuchMethodException -> L74 java.lang.ClassNotFoundException -> L79
            r2.mIsNotchSwitchOpen = r1     // Catch: java.lang.Exception -> L6f java.lang.NoSuchMethodException -> L74 java.lang.ClassNotFoundException -> L79
            goto Lfc
        L6f:
            android.util.Log.e(r0, r5)
            goto Lfc
        L74:
            android.util.Log.e(r0, r3)
            goto Lfc
        L79:
            android.util.Log.e(r0, r4)
            goto Lfc
        L7e:
            java.lang.String r0 = android.os.Build.BRAND
            java.lang.String r1 = "OPPO"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Laf
            java.lang.String r0 = android.os.Build.BRAND
            java.lang.String r2 = "oppo"
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L93
            goto Laf
        L93:
            java.lang.String r0 = android.os.Build.BRAND
            java.lang.String r1 = "Xiaomi"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto Lfc
            java.lang.String r0 = "ro.miui.notch"
            java.lang.Integer r0 = org.cocos2dx.lib.Cocos2dxActivity.SystemProperties.getInt(r0, r7)     // Catch: java.lang.Exception -> Lab
            int r0 = r0.intValue()     // Catch: java.lang.Exception -> Lab
            if (r0 != r6) goto Lfc
            r7 = 1
            goto Lfc
        Lab:
            android.util.Log.e(r1, r5)
            goto Lfc
        Laf:
            android.content.Context r0 = getContext()     // Catch: java.lang.Exception -> Lbe
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: java.lang.Exception -> Lbe
            java.lang.String r2 = "com.oppo.feature.screen.heteromorphism"
            boolean r7 = r0.hasSystemFeature(r2)     // Catch: java.lang.Exception -> Lbe
            goto Lfc
        Lbe:
            android.util.Log.e(r1, r5)
            goto Lfc
        Lc2:
            android.content.Context r0 = getContext()     // Catch: java.lang.Exception -> Lf1 java.lang.NoSuchMethodException -> Lf5 java.lang.ClassNotFoundException -> Lf9
            java.lang.ClassLoader r0 = r0.getClassLoader()     // Catch: java.lang.Exception -> Lf1 java.lang.NoSuchMethodException -> Lf5 java.lang.ClassNotFoundException -> Lf9
            java.lang.String r2 = "android.util.FtFeature"
            java.lang.Class r0 = r0.loadClass(r2)     // Catch: java.lang.Exception -> Lf1 java.lang.NoSuchMethodException -> Lf5 java.lang.ClassNotFoundException -> Lf9
            java.lang.String r2 = "isFeatureSupport"
            java.lang.Class[] r8 = new java.lang.Class[r6]     // Catch: java.lang.Exception -> Lf1 java.lang.NoSuchMethodException -> Lf5 java.lang.ClassNotFoundException -> Lf9
            java.lang.Class r9 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> Lf1 java.lang.NoSuchMethodException -> Lf5 java.lang.ClassNotFoundException -> Lf9
            r8[r7] = r9     // Catch: java.lang.Exception -> Lf1 java.lang.NoSuchMethodException -> Lf5 java.lang.ClassNotFoundException -> Lf9
            java.lang.reflect.Method r2 = r0.getMethod(r2, r8)     // Catch: java.lang.Exception -> Lf1 java.lang.NoSuchMethodException -> Lf5 java.lang.ClassNotFoundException -> Lf9
            java.lang.Object[] r6 = new java.lang.Object[r6]     // Catch: java.lang.Exception -> Lf1 java.lang.NoSuchMethodException -> Lf5 java.lang.ClassNotFoundException -> Lf9
            r8 = 32
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Exception -> Lf1 java.lang.NoSuchMethodException -> Lf5 java.lang.ClassNotFoundException -> Lf9
            r6[r7] = r8     // Catch: java.lang.Exception -> Lf1 java.lang.NoSuchMethodException -> Lf5 java.lang.ClassNotFoundException -> Lf9
            java.lang.Object r0 = r2.invoke(r0, r6)     // Catch: java.lang.Exception -> Lf1 java.lang.NoSuchMethodException -> Lf5 java.lang.ClassNotFoundException -> Lf9
            java.lang.Boolean r0 = (java.lang.Boolean) r0     // Catch: java.lang.Exception -> Lf1 java.lang.NoSuchMethodException -> Lf5 java.lang.ClassNotFoundException -> Lf9
            boolean r7 = r0.booleanValue()     // Catch: java.lang.Exception -> Lf1 java.lang.NoSuchMethodException -> Lf5 java.lang.ClassNotFoundException -> Lf9
            goto Lfc
        Lf1:
            android.util.Log.e(r1, r5)
            goto Lfc
        Lf5:
            android.util.Log.e(r1, r3)
            goto Lfc
        Lf9:
            android.util.Log.e(r1, r4)
        Lfc:
            return r7
    }

    private static boolean isAndroidEmulator() {
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

    private static boolean isDeviceAsleep() {
            android.content.Context r0 = getContext()
            java.lang.String r1 = "power"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.os.PowerManager r0 = (android.os.PowerManager) r0
            if (r0 != 0) goto L10
            r0 = 0
            return r0
        L10:
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 20
            if (r1 < r2) goto L1d
            boolean r0 = r0.isInteractive()
            r0 = r0 ^ 1
            return r0
        L1d:
            boolean r0 = r0.isScreenOn()
            r0 = r0 ^ 1
            return r0
    }

    private static boolean isDeviceLocked() {
            android.content.Context r0 = getContext()
            java.lang.String r1 = "keyguard"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.app.KeyguardManager r0 = (android.app.KeyguardManager) r0
            boolean r0 = r0.inKeyguardRestrictedInputMode()
            return r0
    }

    private void resumeIfHasFocus() {
            r2 = this;
            boolean r0 = isDeviceLocked()
            if (r0 != 0) goto Le
            boolean r0 = isDeviceAsleep()
            if (r0 != 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            boolean r1 = r2.hasFocus
            if (r1 == 0) goto L20
            if (r0 == 0) goto L20
            r2.hideVirtualButton()
            org.cocos2dx.lib.Cocos2dxHelper.onResume()
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r0 = r2.mGLSurfaceView
            r0.onResume()
        L20:
            return
    }

    public static void setFullScreenWindowLayoutInDisplayCutout(android.view.Window r6) {
            if (r6 != 0) goto L3
            return
        L3:
            android.view.WindowManager$LayoutParams r6 = r6.getAttributes()
            java.lang.String r0 = "com.huawei.android.view.LayoutParamsEx"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L3b
            r1 = 1
            java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L3b
            java.lang.Class<android.view.WindowManager$LayoutParams> r3 = android.view.WindowManager.LayoutParams.class
            r4 = 0
            r2[r4] = r3     // Catch: java.lang.Exception -> L3b
            java.lang.reflect.Constructor r2 = r0.getConstructor(r2)     // Catch: java.lang.Exception -> L3b
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L3b
            r3[r4] = r6     // Catch: java.lang.Exception -> L3b
            java.lang.Object r6 = r2.newInstance(r3)     // Catch: java.lang.Exception -> L3b
            java.lang.String r2 = "addHwFlags"
            java.lang.Class[] r3 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L3b
            java.lang.Class r5 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L3b
            r3[r4] = r5     // Catch: java.lang.Exception -> L3b
            java.lang.reflect.Method r0 = r0.getMethod(r2, r3)     // Catch: java.lang.Exception -> L3b
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L3b
            r2 = 65536(0x10000, float:9.1835E-41)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L3b
            r1[r4] = r2     // Catch: java.lang.Exception -> L3b
            r0.invoke(r6, r1)     // Catch: java.lang.Exception -> L3b
            goto L42
        L3b:
            java.lang.String r6 = "test"
            java.lang.String r0 = "other Exception"
            android.util.Log.e(r6, r0)
        L42:
            return
    }

    public static void setNotFullScreenWindowLayoutInDisplayCutout(android.view.Window r6) {
            if (r6 != 0) goto L3
            return
        L3:
            android.view.WindowManager$LayoutParams r6 = r6.getAttributes()
            java.lang.String r0 = "com.huawei.android.view.LayoutParamsEx"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L3b
            r1 = 1
            java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L3b
            java.lang.Class<android.view.WindowManager$LayoutParams> r3 = android.view.WindowManager.LayoutParams.class
            r4 = 0
            r2[r4] = r3     // Catch: java.lang.Exception -> L3b
            java.lang.reflect.Constructor r2 = r0.getConstructor(r2)     // Catch: java.lang.Exception -> L3b
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L3b
            r3[r4] = r6     // Catch: java.lang.Exception -> L3b
            java.lang.Object r6 = r2.newInstance(r3)     // Catch: java.lang.Exception -> L3b
            java.lang.String r2 = "clearHwFlags"
            java.lang.Class[] r3 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L3b
            java.lang.Class r5 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L3b
            r3[r4] = r5     // Catch: java.lang.Exception -> L3b
            java.lang.reflect.Method r0 = r0.getMethod(r2, r3)     // Catch: java.lang.Exception -> L3b
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L3b
            r2 = 65536(0x10000, float:9.1835E-41)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L3b
            r1[r4] = r2     // Catch: java.lang.Exception -> L3b
            r0.invoke(r6, r1)     // Catch: java.lang.Exception -> L3b
            goto L42
        L3b:
            java.lang.String r6 = "test"
            java.lang.String r0 = "other Exception"
            android.util.Log.e(r6, r0)
        L42:
            return
    }

    public org.cocos2dx.lib.Cocos2dxGLSurfaceView getGLSurfaceView() {
            r1 = this;
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r0 = r1.mGLSurfaceView
            return r0
    }

    protected void hideVirtualButton() {
            r8 = this;
            boolean r0 = r8.showVirtualButton
            if (r0 == 0) goto L5
            return
        L5:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L80
            java.lang.Class<android.view.View> r0 = android.view.View.class
            java.lang.String r1 = "SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION"
            java.lang.Object r1 = org.cocos2dx.lib.Cocos2dxReflectionHelper.getConstantValue(r0, r1)     // Catch: java.lang.NullPointerException -> L78
            java.lang.Integer r1 = (java.lang.Integer) r1     // Catch: java.lang.NullPointerException -> L78
            int r1 = r1.intValue()     // Catch: java.lang.NullPointerException -> L78
            java.lang.String r2 = "SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN"
            java.lang.Object r2 = org.cocos2dx.lib.Cocos2dxReflectionHelper.getConstantValue(r0, r2)     // Catch: java.lang.NullPointerException -> L78
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.lang.NullPointerException -> L78
            int r2 = r2.intValue()     // Catch: java.lang.NullPointerException -> L78
            java.lang.String r3 = "SYSTEM_UI_FLAG_HIDE_NAVIGATION"
            java.lang.Object r3 = org.cocos2dx.lib.Cocos2dxReflectionHelper.getConstantValue(r0, r3)     // Catch: java.lang.NullPointerException -> L78
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.NullPointerException -> L78
            int r3 = r3.intValue()     // Catch: java.lang.NullPointerException -> L78
            java.lang.String r4 = "SYSTEM_UI_FLAG_FULLSCREEN"
            java.lang.Object r4 = org.cocos2dx.lib.Cocos2dxReflectionHelper.getConstantValue(r0, r4)     // Catch: java.lang.NullPointerException -> L78
            java.lang.Integer r4 = (java.lang.Integer) r4     // Catch: java.lang.NullPointerException -> L78
            int r4 = r4.intValue()     // Catch: java.lang.NullPointerException -> L78
            java.lang.String r5 = "SYSTEM_UI_FLAG_IMMERSIVE_STICKY"
            java.lang.Object r5 = org.cocos2dx.lib.Cocos2dxReflectionHelper.getConstantValue(r0, r5)     // Catch: java.lang.NullPointerException -> L78
            java.lang.Integer r5 = (java.lang.Integer) r5     // Catch: java.lang.NullPointerException -> L78
            int r5 = r5.intValue()     // Catch: java.lang.NullPointerException -> L78
            java.lang.String r6 = "SYSTEM_UI_FLAG_LAYOUT_STABLE"
            java.lang.Object r0 = org.cocos2dx.lib.Cocos2dxReflectionHelper.getConstantValue(r0, r6)     // Catch: java.lang.NullPointerException -> L78
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.NullPointerException -> L78
            int r0 = r0.intValue()     // Catch: java.lang.NullPointerException -> L78
            r6 = 1
            java.lang.Object[] r7 = new java.lang.Object[r6]     // Catch: java.lang.NullPointerException -> L78
            r0 = r0 | r1
            r0 = r0 | r2
            r0 = r0 | r3
            r0 = r0 | r4
            r0 = r0 | r5
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.NullPointerException -> L78
            r1 = 0
            r7[r1] = r0     // Catch: java.lang.NullPointerException -> L78
            android.view.Window r0 = r8.getWindow()     // Catch: java.lang.NullPointerException -> L78
            android.view.View r0 = r0.getDecorView()     // Catch: java.lang.NullPointerException -> L78
            java.lang.String r2 = "setSystemUiVisibility"
            java.lang.Class[] r3 = new java.lang.Class[r6]     // Catch: java.lang.NullPointerException -> L78
            java.lang.Class r4 = java.lang.Integer.TYPE     // Catch: java.lang.NullPointerException -> L78
            r3[r1] = r4     // Catch: java.lang.NullPointerException -> L78
            org.cocos2dx.lib.Cocos2dxReflectionHelper.invokeInstanceMethod(r0, r2, r3, r7)     // Catch: java.lang.NullPointerException -> L78
            goto L80
        L78:
            r0 = move-exception
            java.lang.String r1 = org.cocos2dx.lib.Cocos2dxActivity.TAG
            java.lang.String r2 = "hideVirtualButton"
            android.util.Log.e(r1, r2, r0)
        L80:
            return
    }

    public void init() {
            r3 = this;
            android.view.ViewGroup$LayoutParams r0 = new android.view.ViewGroup$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            org.cocos2dx.lib.ResizeLayout r2 = new org.cocos2dx.lib.ResizeLayout
            r2.<init>(r3)
            r3.mFrameLayout = r2
            org.cocos2dx.lib.ResizeLayout r2 = r3.mFrameLayout
            r2.setLayoutParams(r0)
            android.view.ViewGroup$LayoutParams r0 = new android.view.ViewGroup$LayoutParams
            r2 = -2
            r0.<init>(r1, r2)
            org.cocos2dx.lib.Cocos2dxEditBox r1 = new org.cocos2dx.lib.Cocos2dxEditBox
            r1.<init>(r3)
            r1.setLayoutParams(r0)
            org.cocos2dx.lib.ResizeLayout r0 = r3.mFrameLayout
            r0.addView(r1)
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r0 = r3.onCreateView()
            r3.mGLSurfaceView = r0
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r0 = r3.mGLSurfaceView
            r2 = 1
            r0.setPreserveEGLContextOnPause(r2)
            org.cocos2dx.lib.ResizeLayout r0 = r3.mFrameLayout
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r2 = r3.mGLSurfaceView
            r0.addView(r2)
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r0 = r3.mGLSurfaceView
            org.cocos2dx.lib.Cocos2dxRenderer r2 = new org.cocos2dx.lib.Cocos2dxRenderer
            r2.<init>()
            r0.setCocos2dxRenderer(r2)
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r0 = r3.mGLSurfaceView
            r0.setCocos2dxEditText(r1)
            org.cocos2dx.lib.ResizeLayout r0 = r3.mFrameLayout
            r3.setContentView(r0)
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
    protected void onCreate(android.os.Bundle r2) {
            r1 = this;
            super.onCreate(r2)
            boolean r2 = r1.isTaskRoot()
            if (r2 != 0) goto L14
            r1.finish()
            java.lang.String r2 = org.cocos2dx.lib.Cocos2dxActivity.TAG
            java.lang.String r0 = "[Workaround] Ignore the activity started from icon!"
            android.util.Log.w(r2, r0)
            return
        L14:
            r1.hideVirtualButton()
            r1.onLoadNativeLibraries()
            org.cocos2dx.lib.Cocos2dxActivity.sContext = r1
            org.cocos2dx.lib.Cocos2dxHandler r2 = new org.cocos2dx.lib.Cocos2dxHandler
            r2.<init>(r1)
            r1.mHandler = r2
            org.cocos2dx.lib.Cocos2dxHelper.init(r1)
            int[] r2 = getGLContextAttrs()
            r1.mGLContextAttrs = r2
            r1.init()
            org.cocos2dx.lib.Cocos2dxVideoHelper r2 = r1.mVideoHelper
            if (r2 != 0) goto L3c
            org.cocos2dx.lib.Cocos2dxVideoHelper r2 = new org.cocos2dx.lib.Cocos2dxVideoHelper
            org.cocos2dx.lib.ResizeLayout r0 = r1.mFrameLayout
            r2.<init>(r1, r0)
            r1.mVideoHelper = r2
        L3c:
            org.cocos2dx.lib.Cocos2dxWebViewHelper r2 = r1.mWebViewHelper
            if (r2 != 0) goto L49
            org.cocos2dx.lib.Cocos2dxWebViewHelper r2 = new org.cocos2dx.lib.Cocos2dxWebViewHelper
            org.cocos2dx.lib.ResizeLayout r0 = r1.mFrameLayout
            r2.<init>(r0)
            r1.mWebViewHelper = r2
        L49:
            org.cocos2dx.lib.Cocos2dxEditBoxHelper r2 = r1.mEditBoxHelper
            if (r2 != 0) goto L56
            org.cocos2dx.lib.Cocos2dxEditBoxHelper r2 = new org.cocos2dx.lib.Cocos2dxEditBoxHelper
            org.cocos2dx.lib.ResizeLayout r0 = r1.mFrameLayout
            r2.<init>(r0)
            r1.mEditBoxHelper = r2
        L56:
            android.view.Window r2 = r1.getWindow()
            r0 = 32
            r2.setSoftInputMode(r0)
            r0 = 128(0x80, float:1.8E-43)
            r2.addFlags(r0)
            r2 = 3
            r1.setVolumeControlStream(r2)
            return
    }

    public org.cocos2dx.lib.Cocos2dxGLSurfaceView onCreateView() {
            r3 = this;
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r0 = new org.cocos2dx.lib.Cocos2dxGLSurfaceView
            r0.<init>(r3)
            org.cocos2dx.lib.Cocos2dxActivity$Cocos2dxEGLConfigChooser r1 = new org.cocos2dx.lib.Cocos2dxActivity$Cocos2dxEGLConfigChooser
            int[] r2 = r3.mGLContextAttrs
            r1.<init>(r3, r2)
            r0.setEGLConfigChooser(r1)
            return r0
    }

    @Override
    protected void onDestroy() {
            r1 = this;
            boolean r0 = r1.gainAudioFocus
            if (r0 == 0) goto L7
            org.cocos2dx.lib.Cocos2dxAudioFocusManager.unregisterAudioFocusListener(r1)
        L7:
            super.onDestroy()
            return
    }

    protected void onLoadNativeLibraries() {
            r3 = this;
            android.content.pm.PackageManager r0 = r3.getPackageManager()     // Catch: java.lang.Exception -> L1a
            java.lang.String r1 = r3.getPackageName()     // Catch: java.lang.Exception -> L1a
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo(r1, r2)     // Catch: java.lang.Exception -> L1a
            android.os.Bundle r0 = r0.metaData     // Catch: java.lang.Exception -> L1a
            java.lang.String r1 = "android.app.lib_name"
            java.lang.String r0 = r0.getString(r1)     // Catch: java.lang.Exception -> L1a
            java.lang.System.loadLibrary(r0)     // Catch: java.lang.Exception -> L1a
            goto L1e
        L1a:
            r0 = move-exception
            r0.printStackTrace()
        L1e:
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
            r2.hideVirtualButton()
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

    public void setEnableVirtualButton(boolean r1) {
            r0 = this;
            r0.showVirtualButton = r1
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

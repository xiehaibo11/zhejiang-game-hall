package org.cocos2dx.lib;

public class CanvasRenderingContext2DImpl {
    private static final java.lang.String TAG = "CanvasContext2D";
    private static final int TEXT_ALIGN_CENTER = 1;
    private static final int TEXT_ALIGN_LEFT = 0;
    private static final int TEXT_ALIGN_RIGHT = 2;
    private static final int TEXT_BASELINE_BOTTOM = 2;
    private static final int TEXT_BASELINE_MIDDLE = 1;
    private static final int TEXT_BASELINE_TOP = 0;
    private static float _sApproximatingOblique = -0.25f;
    private static java.lang.ref.WeakReference<android.content.Context> sContext;
    private static java.util.HashMap<java.lang.String, android.graphics.Typeface> sTypefaceCache;
    private android.graphics.Bitmap mBitmap;
    private android.graphics.Canvas mCanvas;
    private int mFillStyleA;
    private int mFillStyleB;
    private int mFillStyleG;
    private int mFillStyleR;
    private java.lang.String mFontName;
    private float mFontSize;
    private boolean mIsBoldFont;
    private boolean mIsItalicFont;
    private boolean mIsObliqueFont;
    private boolean mIsSmallCapsFontVariant;
    private java.lang.String mLineCap;
    private java.lang.String mLineJoin;
    private android.graphics.Paint mLinePaint;
    private android.graphics.Path mLinePath;
    private float mLineWidth;
    private int mStrokeStyleA;
    private int mStrokeStyleB;
    private int mStrokeStyleG;
    private int mStrokeStyleR;
    private int mTextAlign;
    private int mTextBaseline;
    private android.text.TextPaint mTextPaint;

    private class Point {
        final org.cocos2dx.lib.CanvasRenderingContext2DImpl this$0;
        public float x;
        public float y;

        Point(org.cocos2dx.lib.CanvasRenderingContext2DImpl r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r1 = 0
                r0.y = r1
                r0.x = r1
                return
        }

        Point(org.cocos2dx.lib.CanvasRenderingContext2DImpl r1, float r2, float r3) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.x = r2
                r0.y = r3
                return
        }

        Point(org.cocos2dx.lib.CanvasRenderingContext2DImpl r1, org.cocos2dx.lib.CanvasRenderingContext2DImpl.Point r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                float r1 = r2.x
                r0.x = r1
                float r1 = r2.y
                r0.y = r1
                return
        }

        void set(float r1, float r2) {
                r0 = this;
                r0.x = r1
                r0.y = r2
                return
        }
    }

    private class Size {
        public float height;
        final org.cocos2dx.lib.CanvasRenderingContext2DImpl this$0;
        public float width;

        Size(org.cocos2dx.lib.CanvasRenderingContext2DImpl r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r1 = 0
                r0.width = r1
                r0.height = r1
                return
        }

        Size(org.cocos2dx.lib.CanvasRenderingContext2DImpl r1, float r2, float r3) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.width = r2
                r0.height = r3
                return
        }
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            org.cocos2dx.lib.CanvasRenderingContext2DImpl.sTypefaceCache = r0
            return
    }

    private CanvasRenderingContext2DImpl() {
            r2 = this;
            r2.<init>()
            android.graphics.Canvas r0 = new android.graphics.Canvas
            r0.<init>()
            r2.mCanvas = r0
            r0 = 0
            r2.mTextAlign = r0
            r1 = 2
            r2.mTextBaseline = r1
            r2.mFillStyleR = r0
            r2.mFillStyleG = r0
            r2.mFillStyleB = r0
            r1 = 255(0xff, float:3.57E-43)
            r2.mFillStyleA = r1
            r2.mStrokeStyleR = r0
            r2.mStrokeStyleG = r0
            r2.mStrokeStyleB = r0
            r2.mStrokeStyleA = r1
            java.lang.String r1 = "Arial"
            r2.mFontName = r1
            r1 = 1109393408(0x42200000, float:40.0)
            r2.mFontSize = r1
            r1 = 0
            r2.mLineWidth = r1
            r2.mIsBoldFont = r0
            r2.mIsItalicFont = r0
            r2.mIsObliqueFont = r0
            r2.mIsSmallCapsFontVariant = r0
            java.lang.String r0 = "butt"
            r2.mLineCap = r0
            java.lang.String r0 = "miter"
            r2.mLineJoin = r0
            return
    }

    private void _fillImageData(byte[] r10, float r11, float r12, float r13, float r14) {
            r9 = this;
            java.lang.String r0 = "CanvasContext2D"
            java.lang.String r1 = "_fillImageData: "
            android.util.Log.d(r0, r1)
            float r0 = r11 * r12
            int r0 = (int) r0
            int[] r2 = new int[r0]
            r1 = 0
        Ld:
            if (r1 >= r0) goto L3f
            int r3 = r1 * 4
            int r4 = r3 + 0
            r4 = r10[r4]
            r4 = r4 & 255(0xff, float:3.57E-43)
            int r5 = r3 + 1
            r5 = r10[r5]
            r5 = r5 & 255(0xff, float:3.57E-43)
            int r6 = r3 + 2
            r6 = r10[r6]
            r6 = r6 & 255(0xff, float:3.57E-43)
            int r3 = r3 + 3
            r3 = r10[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << 24
            r4 = r4 & 255(0xff, float:3.57E-43)
            int r4 = r4 << 16
            r3 = r3 | r4
            r4 = r5 & 255(0xff, float:3.57E-43)
            int r4 = r4 << 8
            r3 = r3 | r4
            r4 = r6 & 255(0xff, float:3.57E-43)
            r3 = r3 | r4
            r2[r1] = r3
            int r1 = r1 + 1
            goto Ld
        L3f:
            android.graphics.Bitmap r1 = r9.mBitmap
            r3 = 0
            int r7 = (int) r11
            int r5 = (int) r13
            int r6 = (int) r14
            int r8 = (int) r12
            r4 = r7
            r1.setPixels(r2, r3, r4, r5, r6, r7, r8)
            return
    }

    private void beginPath() {
            r1 = this;
            android.graphics.Path r0 = r1.mLinePath
            if (r0 != 0) goto Lb
            android.graphics.Path r0 = new android.graphics.Path
            r0.<init>()
            r1.mLinePath = r0
        Lb:
            android.graphics.Path r0 = r1.mLinePath
            r0.reset()
            return
    }

    private void clearRect(float r10, float r11, float r12, float r13) {
            r9 = this;
            float r0 = r12 * r13
            int r0 = (int) r0
            int[] r2 = new int[r0]
            r1 = 0
            r3 = 0
        L7:
            if (r3 >= r0) goto Le
            r2[r3] = r1
            int r3 = r3 + 1
            goto L7
        Le:
            android.graphics.Bitmap r1 = r9.mBitmap
            r3 = 0
            int r7 = (int) r12
            int r5 = (int) r10
            int r6 = (int) r11
            int r8 = (int) r13
            r4 = r7
            r1.setPixels(r2, r3, r4, r5, r6, r7, r8)
            return
    }

    private static void clearTypefaceCache() {
            java.util.HashMap<java.lang.String, android.graphics.Typeface> r0 = org.cocos2dx.lib.CanvasRenderingContext2DImpl.sTypefaceCache
            r0.clear()
            return
    }

    private void closePath() {
            r1 = this;
            android.graphics.Path r0 = r1.mLinePath
            r0.close()
            return
    }

    private org.cocos2dx.lib.CanvasRenderingContext2DImpl.Point convertDrawPoint(org.cocos2dx.lib.CanvasRenderingContext2DImpl.Point r5, java.lang.String r6) {
            r4 = this;
            org.cocos2dx.lib.CanvasRenderingContext2DImpl$Point r0 = new org.cocos2dx.lib.CanvasRenderingContext2DImpl$Point
            r0.<init>(r4, r5)
            org.cocos2dx.lib.CanvasRenderingContext2DImpl$Size r5 = r4.measureTextReturnSize(r6)
            int r6 = r4.mTextAlign
            r1 = 1073741824(0x40000000, float:2.0)
            r2 = 1
            if (r6 != r2) goto L19
            float r6 = r0.x
            float r3 = r5.width
            float r3 = r3 / r1
            float r6 = r6 - r3
            r0.x = r6
            goto L23
        L19:
            r3 = 2
            if (r6 != r3) goto L23
            float r6 = r0.x
            float r3 = r5.width
            float r6 = r6 - r3
            r0.x = r6
        L23:
            int r6 = r4.mTextBaseline
            if (r6 != 0) goto L2f
            float r6 = r0.y
            float r5 = r5.height
            float r6 = r6 + r5
            r0.y = r6
            goto L39
        L2f:
            if (r6 != r2) goto L39
            float r6 = r0.y
            float r5 = r5.height
            float r5 = r5 / r1
            float r6 = r6 + r5
            r0.y = r6
        L39:
            return r0
    }

    private void createTextPaintIfNeeded() {
            r7 = this;
            android.text.TextPaint r0 = r7.mTextPaint
            if (r0 != 0) goto L17
            java.lang.String r1 = r7.mFontName
            float r0 = r7.mFontSize
            int r2 = (int) r0
            boolean r3 = r7.mIsBoldFont
            boolean r4 = r7.mIsItalicFont
            boolean r5 = r7.mIsObliqueFont
            boolean r6 = r7.mIsSmallCapsFontVariant
            android.text.TextPaint r0 = newPaint(r1, r2, r3, r4, r5, r6)
            r7.mTextPaint = r0
        L17:
            return
    }

    static void destroy() {
            r0 = 0
            org.cocos2dx.lib.CanvasRenderingContext2DImpl.sContext = r0
            return
    }

    private void fill() {
            r5 = this;
            android.graphics.Paint r0 = r5.mLinePaint
            if (r0 != 0) goto Lb
            android.graphics.Paint r0 = new android.graphics.Paint
            r0.<init>()
            r5.mLinePaint = r0
        Lb:
            android.graphics.Path r0 = r5.mLinePath
            if (r0 != 0) goto L16
            android.graphics.Path r0 = new android.graphics.Path
            r0.<init>()
            r5.mLinePath = r0
        L16:
            android.graphics.Paint r0 = r5.mLinePaint
            int r1 = r5.mFillStyleA
            int r2 = r5.mFillStyleR
            int r3 = r5.mFillStyleG
            int r4 = r5.mFillStyleB
            r0.setARGB(r1, r2, r3, r4)
            android.graphics.Paint r0 = r5.mLinePaint
            android.graphics.Paint$Style r1 = android.graphics.Paint.Style.FILL
            r0.setStyle(r1)
            android.graphics.Canvas r0 = r5.mCanvas
            android.graphics.Path r1 = r5.mLinePath
            android.graphics.Paint r2 = r5.mLinePaint
            r0.drawPath(r1, r2)
            android.graphics.Paint r0 = r5.mLinePaint
            r1 = 0
            r0.setStrokeWidth(r1)
            android.graphics.Paint r0 = r5.mLinePaint
            r5.setStrokeCap(r0)
            android.graphics.Paint r0 = r5.mLinePaint
            r5.setStrokeJoin(r0)
            android.graphics.Paint r0 = r5.mLinePaint
            android.graphics.Paint$Style r1 = android.graphics.Paint.Style.STROKE
            r0.setStyle(r1)
            android.graphics.Canvas r0 = r5.mCanvas
            android.graphics.Path r1 = r5.mLinePath
            android.graphics.Paint r2 = r5.mLinePaint
            r0.drawPath(r1, r2)
            android.graphics.Paint r0 = r5.mLinePaint
            float r1 = r5.mLineWidth
            r0.setStrokeWidth(r1)
            return
    }

    private void fillRect(float r11, float r12, float r13, float r14) {
            r10 = this;
            int r0 = r10.mFillStyleA
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 24
            int r1 = r10.mFillStyleR
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 16
            r0 = r0 | r1
            int r1 = r10.mFillStyleG
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            r0 = r0 | r1
            int r1 = r10.mFillStyleB
            r1 = r1 & 255(0xff, float:3.57E-43)
            r0 = r0 | r1
            float r1 = r13 * r14
            int r1 = (int) r1
            int[] r3 = new int[r1]
            r2 = 0
        L1f:
            if (r2 >= r1) goto L26
            r3[r2] = r0
            int r2 = r2 + 1
            goto L1f
        L26:
            android.graphics.Bitmap r2 = r10.mBitmap
            r4 = 0
            int r8 = (int) r13
            int r6 = (int) r11
            int r7 = (int) r12
            int r9 = (int) r14
            r5 = r8
            r2.setPixels(r3, r4, r5, r6, r7, r8, r9)
            return
    }

    private void fillText(java.lang.String r6, float r7, float r8, float r9) {
            r5 = this;
            r5.createTextPaintIfNeeded()
            android.text.TextPaint r0 = r5.mTextPaint
            int r1 = r5.mFillStyleA
            int r2 = r5.mFillStyleR
            int r3 = r5.mFillStyleG
            int r4 = r5.mFillStyleB
            r0.setARGB(r1, r2, r3, r4)
            android.text.TextPaint r0 = r5.mTextPaint
            android.graphics.Paint$Style r1 = android.graphics.Paint.Style.FILL
            r0.setStyle(r1)
            android.text.TextPaint r0 = r5.mTextPaint
            r5.scaleX(r0, r6, r9)
            org.cocos2dx.lib.CanvasRenderingContext2DImpl$Point r9 = new org.cocos2dx.lib.CanvasRenderingContext2DImpl$Point
            r9.<init>(r5, r7, r8)
            org.cocos2dx.lib.CanvasRenderingContext2DImpl$Point r7 = r5.convertDrawPoint(r9, r6)
            android.graphics.Canvas r8 = r5.mCanvas
            float r9 = r7.x
            float r7 = r7.y
            android.text.TextPaint r0 = r5.mTextPaint
            r8.drawText(r6, r9, r7, r0)
            return
    }

    private byte[] getDataRef() {
            r3 = this;
            android.graphics.Bitmap r0 = r3.mBitmap
            if (r0 == 0) goto L25
            int r0 = r0.getWidth()
            android.graphics.Bitmap r1 = r3.mBitmap
            int r1 = r1.getHeight()
            int r0 = r0 * r1
            int r0 = r0 * 4
            byte[] r0 = new byte[r0]
            java.nio.ByteBuffer r1 = java.nio.ByteBuffer.wrap(r0)
            java.nio.ByteOrder r2 = java.nio.ByteOrder.nativeOrder()
            r1.order(r2)
            android.graphics.Bitmap r2 = r3.mBitmap
            r2.copyPixelsToBuffer(r1)
            return r0
        L25:
            java.lang.String r0 = "CanvasContext2D"
            java.lang.String r1 = "getDataRef return null"
            android.util.Log.e(r0, r1)
            r0 = 0
            return r0
    }

    static void init(android.content.Context r1) {
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r1)
            org.cocos2dx.lib.CanvasRenderingContext2DImpl.sContext = r0
            return
    }

    private void lineTo(float r2, float r3) {
            r1 = this;
            android.graphics.Path r0 = r1.mLinePath
            r0.lineTo(r2, r3)
            return
    }

    private static void loadTypeface(java.lang.String r2, java.lang.String r3) {
            java.util.HashMap<java.lang.String, android.graphics.Typeface> r0 = org.cocos2dx.lib.CanvasRenderingContext2DImpl.sTypefaceCache
            boolean r0 = r0.containsKey(r2)
            if (r0 != 0) goto L48
            r0 = 0
            java.lang.String r1 = "/"
            boolean r1 = r3.startsWith(r1)     // Catch: java.lang.Exception -> L44
            if (r1 == 0) goto L16
            android.graphics.Typeface r0 = android.graphics.Typeface.createFromFile(r3)     // Catch: java.lang.Exception -> L44
            goto L3c
        L16:
            java.lang.ref.WeakReference<android.content.Context> r1 = org.cocos2dx.lib.CanvasRenderingContext2DImpl.sContext     // Catch: java.lang.Exception -> L44
            java.lang.Object r1 = r1.get()     // Catch: java.lang.Exception -> L44
            if (r1 == 0) goto L3c
            java.lang.String r0 = "@assets/"
            boolean r0 = r3.startsWith(r0)     // Catch: java.lang.Exception -> L44
            if (r0 == 0) goto L2c
            r0 = 8
            java.lang.String r3 = r3.substring(r0)     // Catch: java.lang.Exception -> L44
        L2c:
            java.lang.ref.WeakReference<android.content.Context> r0 = org.cocos2dx.lib.CanvasRenderingContext2DImpl.sContext     // Catch: java.lang.Exception -> L44
            java.lang.Object r0 = r0.get()     // Catch: java.lang.Exception -> L44
            android.content.Context r0 = (android.content.Context) r0     // Catch: java.lang.Exception -> L44
            android.content.res.AssetManager r0 = r0.getAssets()     // Catch: java.lang.Exception -> L44
            android.graphics.Typeface r0 = android.graphics.Typeface.createFromAsset(r0, r3)     // Catch: java.lang.Exception -> L44
        L3c:
            if (r0 == 0) goto L48
            java.util.HashMap<java.lang.String, android.graphics.Typeface> r3 = org.cocos2dx.lib.CanvasRenderingContext2DImpl.sTypefaceCache     // Catch: java.lang.Exception -> L44
            r3.put(r2, r0)     // Catch: java.lang.Exception -> L44
            goto L48
        L44:
            r2 = move-exception
            r2.printStackTrace()
        L48:
            return
    }

    private float measureText(java.lang.String r2) {
            r1 = this;
            r1.createTextPaintIfNeeded()
            android.text.TextPaint r0 = r1.mTextPaint
            float r2 = r0.measureText(r2)
            return r2
    }

    private org.cocos2dx.lib.CanvasRenderingContext2DImpl.Size measureTextReturnSize(java.lang.String r4) {
            r3 = this;
            r3.createTextPaintIfNeeded()
            android.text.TextPaint r0 = r3.mTextPaint
            android.graphics.Paint$FontMetrics r0 = r0.getFontMetrics()
            org.cocos2dx.lib.CanvasRenderingContext2DImpl$Size r1 = new org.cocos2dx.lib.CanvasRenderingContext2DImpl$Size
            float r4 = r3.measureText(r4)
            float r2 = r0.descent
            float r0 = r0.ascent
            float r2 = r2 - r0
            r1.<init>(r3, r4, r2)
            return r1
    }

    private void moveTo(float r2, float r3) {
            r1 = this;
            android.graphics.Path r0 = r1.mLinePath
            r0.moveTo(r2, r3)
            return
    }

    private static android.text.TextPaint newPaint(java.lang.String r4, int r5, boolean r6, boolean r7, boolean r8, boolean r9) {
            android.text.TextPaint r0 = new android.text.TextPaint
            r0.<init>()
            float r5 = (float) r5
            r0.setTextSize(r5)
            r5 = 1
            r0.setAntiAlias(r5)
            r0.setSubpixelText(r5)
            if (r6 == 0) goto L27
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            java.lang.String r2 = "-Bold"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.setFakeBoldText(r5)
            goto L28
        L27:
            r1 = r4
        L28:
            if (r7 == 0) goto L3b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r1 = "-Italic"
            r2.append(r1)
            java.lang.String r1 = r2.toString()
        L3b:
            java.util.HashMap<java.lang.String, android.graphics.Typeface> r2 = org.cocos2dx.lib.CanvasRenderingContext2DImpl.sTypefaceCache
            boolean r2 = r2.containsKey(r1)
            r3 = 0
            if (r2 == 0) goto L4d
            java.util.HashMap<java.lang.String, android.graphics.Typeface> r4 = org.cocos2dx.lib.CanvasRenderingContext2DImpl.sTypefaceCache
            java.lang.Object r4 = r4.get(r1)
            android.graphics.Typeface r4 = (android.graphics.Typeface) r4
            goto L60
        L4d:
            if (r6 == 0) goto L53
            if (r7 == 0) goto L53
            r6 = 3
            goto L5c
        L53:
            if (r6 == 0) goto L57
            r6 = 1
            goto L5c
        L57:
            if (r7 == 0) goto L5b
            r6 = 2
            goto L5c
        L5b:
            r6 = 0
        L5c:
            android.graphics.Typeface r4 = android.graphics.Typeface.create(r4, r6)
        L60:
            r0.setTypeface(r4)
            if (r8 == 0) goto L6a
            float r4 = org.cocos2dx.lib.CanvasRenderingContext2DImpl._sApproximatingOblique
            r0.setTextSkewX(r4)
        L6a:
            if (r9 == 0) goto L83
            int r4 = android.os.Build.VERSION.SDK_INT
            r6 = 21
            if (r4 < r6) goto L83
            java.lang.Class[] r4 = new java.lang.Class[r5]
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r4[r3] = r6
            java.lang.Object[] r5 = new java.lang.Object[r5]
            java.lang.String r6 = "smcp"
            r5[r3] = r6
            java.lang.String r6 = "setFontFeatureSettings"
            org.cocos2dx.lib.Cocos2dxReflectionHelper.invokeInstanceMethod(r0, r6, r4, r5)
        L83:
            return r0
    }

    private void recreateBuffer(float r3, float r4) {
            r2 = this;
            android.graphics.Bitmap r0 = r2.mBitmap
            if (r0 == 0) goto L7
            r0.recycle()
        L7:
            double r0 = (double) r3
            double r0 = java.lang.Math.ceil(r0)
            int r3 = (int) r0
            double r0 = (double) r4
            double r0 = java.lang.Math.ceil(r0)
            int r4 = (int) r0
            android.graphics.Bitmap$Config r0 = android.graphics.Bitmap.Config.ARGB_8888
            android.graphics.Bitmap r3 = android.graphics.Bitmap.createBitmap(r3, r4, r0)
            r2.mBitmap = r3
            android.graphics.Canvas r3 = r2.mCanvas
            android.graphics.Bitmap r4 = r2.mBitmap
            r3.setBitmap(r4)
            return
    }

    private void rect(float r1, float r2, float r3, float r4) {
            r0 = this;
            r0.beginPath()
            r0.moveTo(r1, r2)
            float r4 = r4 + r2
            r0.lineTo(r1, r4)
            float r1 = r1 + r3
            r0.lineTo(r1, r4)
            r0.lineTo(r1, r2)
            r0.closePath()
            return
    }

    private void restoreContext() {
            r2 = this;
            android.graphics.Canvas r0 = r2.mCanvas
            int r0 = r0.getSaveCount()
            r1 = 1
            if (r0 <= r1) goto Le
            android.graphics.Canvas r0 = r2.mCanvas
            r0.restore()
        Le:
            return
    }

    private void saveContext() {
            r1 = this;
            android.graphics.Canvas r0 = r1.mCanvas
            r0.save()
            return
    }

    private void scaleX(android.text.TextPaint r3, java.lang.String r4, float r5) {
            r2 = this;
            r0 = 1
            int r1 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r1 >= 0) goto L6
            return
        L6:
            float r4 = r2.measureText(r4)
            float r1 = r4 - r5
            int r0 = (r1 > r0 ? 1 : (r1 == r0 ? 0 : -1))
            if (r0 >= 0) goto L11
            return
        L11:
            float r5 = r5 / r4
            r3.setTextScaleX(r5)
            return
    }

    private void setFillStyle(float r2, float r3, float r4, float r5) {
            r1 = this;
            r0 = 1132396544(0x437f0000, float:255.0)
            float r2 = r2 * r0
            int r2 = (int) r2
            r1.mFillStyleR = r2
            float r3 = r3 * r0
            int r2 = (int) r3
            r1.mFillStyleG = r2
            float r4 = r4 * r0
            int r2 = (int) r4
            r1.mFillStyleB = r2
            float r5 = r5 * r0
            int r2 = (int) r5
            r1.mFillStyleA = r2
            return
    }

    private void setLineCap(java.lang.String r1) {
            r0 = this;
            r0.mLineCap = r1
            return
    }

    private void setLineJoin(java.lang.String r1) {
            r0 = this;
            r0.mLineJoin = r1
            return
    }

    private void setLineWidth(float r1) {
            r0 = this;
            r0.mLineWidth = r1
            return
    }

    private void setStrokeCap(android.graphics.Paint r6) {
            r5 = this;
            java.lang.String r0 = r5.mLineCap
            int r1 = r0.hashCode()
            r2 = -894674659(0xffffffffcaac591d, float:-5647502.5)
            r3 = 2
            r4 = 1
            if (r1 == r2) goto L2c
            r2 = 3035667(0x2e5213, float:4.253876E-39)
            if (r1 == r2) goto L22
            r2 = 108704142(0x67ab18e, float:4.715022E-35)
            if (r1 == r2) goto L18
            goto L36
        L18:
            java.lang.String r1 = "round"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L36
            r0 = 1
            goto L37
        L22:
            java.lang.String r1 = "butt"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L36
            r0 = 0
            goto L37
        L2c:
            java.lang.String r1 = "square"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L36
            r0 = 2
            goto L37
        L36:
            r0 = -1
        L37:
            if (r0 == 0) goto L4a
            if (r0 == r4) goto L44
            if (r0 == r3) goto L3e
            goto L4f
        L3e:
            android.graphics.Paint$Cap r0 = android.graphics.Paint.Cap.SQUARE
            r6.setStrokeCap(r0)
            goto L4f
        L44:
            android.graphics.Paint$Cap r0 = android.graphics.Paint.Cap.ROUND
            r6.setStrokeCap(r0)
            goto L4f
        L4a:
            android.graphics.Paint$Cap r0 = android.graphics.Paint.Cap.BUTT
            r6.setStrokeCap(r0)
        L4f:
            return
    }

    private void setStrokeJoin(android.graphics.Paint r6) {
            r5 = this;
            java.lang.String r0 = r5.mLineJoin
            int r1 = r0.hashCode()
            r2 = 93630586(0x594b07a, float:1.398268E-35)
            r3 = 2
            r4 = 1
            if (r1 == r2) goto L2c
            r2 = 103906565(0x6317d05, float:3.338185E-35)
            if (r1 == r2) goto L22
            r2 = 108704142(0x67ab18e, float:4.715022E-35)
            if (r1 == r2) goto L18
            goto L36
        L18:
            java.lang.String r1 = "round"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L36
            r0 = 1
            goto L37
        L22:
            java.lang.String r1 = "miter"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L36
            r0 = 2
            goto L37
        L2c:
            java.lang.String r1 = "bevel"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L36
            r0 = 0
            goto L37
        L36:
            r0 = -1
        L37:
            if (r0 == 0) goto L4a
            if (r0 == r4) goto L44
            if (r0 == r3) goto L3e
            goto L4f
        L3e:
            android.graphics.Paint$Join r0 = android.graphics.Paint.Join.MITER
            r6.setStrokeJoin(r0)
            goto L4f
        L44:
            android.graphics.Paint$Join r0 = android.graphics.Paint.Join.ROUND
            r6.setStrokeJoin(r0)
            goto L4f
        L4a:
            android.graphics.Paint$Join r0 = android.graphics.Paint.Join.BEVEL
            r6.setStrokeJoin(r0)
        L4f:
            return
    }

    private void setStrokeStyle(float r2, float r3, float r4, float r5) {
            r1 = this;
            r0 = 1132396544(0x437f0000, float:255.0)
            float r2 = r2 * r0
            int r2 = (int) r2
            r1.mStrokeStyleR = r2
            float r3 = r3 * r0
            int r2 = (int) r3
            r1.mStrokeStyleG = r2
            float r4 = r4 * r0
            int r2 = (int) r4
            r1.mStrokeStyleB = r2
            float r5 = r5 * r0
            int r2 = (int) r5
            r1.mStrokeStyleA = r2
            return
    }

    private void setTextAlign(int r1) {
            r0 = this;
            r0.mTextAlign = r1
            return
    }

    private void setTextBaseline(int r1) {
            r0 = this;
            r0.mTextBaseline = r1
            return
    }

    private void stroke() {
            r5 = this;
            android.graphics.Paint r0 = r5.mLinePaint
            if (r0 != 0) goto L11
            android.graphics.Paint r0 = new android.graphics.Paint
            r0.<init>()
            r5.mLinePaint = r0
            android.graphics.Paint r0 = r5.mLinePaint
            r1 = 1
            r0.setAntiAlias(r1)
        L11:
            android.graphics.Path r0 = r5.mLinePath
            if (r0 != 0) goto L1c
            android.graphics.Path r0 = new android.graphics.Path
            r0.<init>()
            r5.mLinePath = r0
        L1c:
            android.graphics.Paint r0 = r5.mLinePaint
            int r1 = r5.mStrokeStyleA
            int r2 = r5.mStrokeStyleR
            int r3 = r5.mStrokeStyleG
            int r4 = r5.mStrokeStyleB
            r0.setARGB(r1, r2, r3, r4)
            android.graphics.Paint r0 = r5.mLinePaint
            android.graphics.Paint$Style r1 = android.graphics.Paint.Style.STROKE
            r0.setStyle(r1)
            android.graphics.Paint r0 = r5.mLinePaint
            float r1 = r5.mLineWidth
            r0.setStrokeWidth(r1)
            android.graphics.Paint r0 = r5.mLinePaint
            r5.setStrokeCap(r0)
            android.graphics.Paint r0 = r5.mLinePaint
            r5.setStrokeJoin(r0)
            android.graphics.Canvas r0 = r5.mCanvas
            android.graphics.Path r1 = r5.mLinePath
            android.graphics.Paint r2 = r5.mLinePaint
            r0.drawPath(r1, r2)
            return
    }

    private void strokeText(java.lang.String r6, float r7, float r8, float r9) {
            r5 = this;
            r5.createTextPaintIfNeeded()
            android.text.TextPaint r0 = r5.mTextPaint
            int r1 = r5.mStrokeStyleA
            int r2 = r5.mStrokeStyleR
            int r3 = r5.mStrokeStyleG
            int r4 = r5.mStrokeStyleB
            r0.setARGB(r1, r2, r3, r4)
            android.text.TextPaint r0 = r5.mTextPaint
            android.graphics.Paint$Style r1 = android.graphics.Paint.Style.STROKE
            r0.setStyle(r1)
            android.text.TextPaint r0 = r5.mTextPaint
            float r1 = r5.mLineWidth
            r0.setStrokeWidth(r1)
            android.text.TextPaint r0 = r5.mTextPaint
            r5.scaleX(r0, r6, r9)
            org.cocos2dx.lib.CanvasRenderingContext2DImpl$Point r9 = new org.cocos2dx.lib.CanvasRenderingContext2DImpl$Point
            r9.<init>(r5, r7, r8)
            org.cocos2dx.lib.CanvasRenderingContext2DImpl$Point r7 = r5.convertDrawPoint(r9, r6)
            android.graphics.Canvas r8 = r5.mCanvas
            float r9 = r7.x
            float r7 = r7.y
            android.text.TextPaint r0 = r5.mTextPaint
            r8.drawText(r6, r9, r7, r0)
            return
    }

    private void updateFont(java.lang.String r1, float r2, boolean r3, boolean r4, boolean r5, boolean r6) {
            r0 = this;
            r0.mFontName = r1
            r0.mFontSize = r2
            r0.mIsBoldFont = r3
            r0.mIsItalicFont = r4
            r0.mIsObliqueFont = r5
            r0.mIsSmallCapsFontVariant = r6
            r1 = 0
            r0.mTextPaint = r1
            return
    }
}

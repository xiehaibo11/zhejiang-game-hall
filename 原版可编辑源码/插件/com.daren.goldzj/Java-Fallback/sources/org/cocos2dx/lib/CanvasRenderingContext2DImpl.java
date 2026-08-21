package org.cocos2dx.lib;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.Typeface;
import android.os.Build;
import android.text.TextPaint;
import android.util.Log;
import java.lang.ref.WeakReference;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.util.HashMap;

public class CanvasRenderingContext2DImpl {
    private static final String TAG = "CanvasContext2D";
    private static final int TEXT_ALIGN_CENTER = 1;
    private static final int TEXT_ALIGN_LEFT = 0;
    private static final int TEXT_ALIGN_RIGHT = 2;
    private static final int TEXT_BASELINE_BOTTOM = 2;
    private static final int TEXT_BASELINE_MIDDLE = 1;
    private static final int TEXT_BASELINE_TOP = 0;
    private static float _sApproximatingOblique = -0.25f;
    private static WeakReference<Context> sContext;
    private static HashMap<String, Typeface> sTypefaceCache;
    private Bitmap mBitmap;
    private Canvas mCanvas;
    private int mFillStyleA;
    private int mFillStyleB;
    private int mFillStyleG;
    private int mFillStyleR;
    private String mFontName;
    private float mFontSize;
    private boolean mIsBoldFont;
    private boolean mIsItalicFont;
    private boolean mIsObliqueFont;
    private boolean mIsSmallCapsFontVariant;
    private String mLineCap;
    private String mLineJoin;
    private Paint mLinePaint;
    private Path mLinePath;
    private float mLineWidth;
    private int mStrokeStyleA;
    private int mStrokeStyleB;
    private int mStrokeStyleG;
    private int mStrokeStyleR;
    private int mTextAlign;
    private int mTextBaseline;
    private TextPaint mTextPaint;

    private class Point {
        final CanvasRenderingContext2DImpl this$0;
        public float x;
        public float y;

        Point(CanvasRenderingContext2DImpl r1, float r2, float r3) {
            this.this$0 = r1;
            this.x = r2;
            this.y = r3;
        }

        Point(CanvasRenderingContext2DImpl r1) {
            this.this$0 = r1;
            this.y = 0.0f;
            this.x = 0.0f;
        }

        Point(CanvasRenderingContext2DImpl r1, Point r2) {
            this.this$0 = r1;
            this.x = r2.x;
            this.y = r2.y;
        }

        void set(float r1, float r2) {
            this.x = r1;
            this.y = r2;
        }
    }

    private class Size {
        public float height;
        final CanvasRenderingContext2DImpl this$0;
        public float width;

        Size(CanvasRenderingContext2DImpl r1, float r2, float r3) {
            this.this$0 = r1;
            this.width = r2;
            this.height = r3;
        }

        Size(CanvasRenderingContext2DImpl r1) {
            this.this$0 = r1;
            this.width = 0.0f;
            this.height = 0.0f;
        }
    }

    static void init(Context r1) {
        sContext = new WeakReference(r1);
    }

    static void destroy() {
        sContext = null;
    }

    static {
        sTypefaceCache = new HashMap();
    }

    private static void loadTypeface(String r2, String r3) {
        if (sTypefaceCache.containsKey(r2) == true) goto L22;
        Typeface r0 = null;
    L17:
        e = move-exception;
        e.printStackTrace();
        return;
    L6:
        if (r3.startsWith("/") == false) goto L9;
        r0 = Typeface.createFromFile(r3);     // Catch: Exception -> L17
    L14:
        if (r0 == null) goto L23;
        sTypefaceCache.put(r2, r0);     // Catch: Exception -> L17
        return;
    L23:
        return;
    L9:
        if (sContext.get() == null) goto L14;
        if (r3.startsWith("@assets/") == false) goto L13;
        r3 = r3.substring(8);     // Catch: Exception -> L17
    L13:
        r0 = Typeface.createFromAsset(sContext.get().getAssets(), r3);     // Catch: Exception -> L17
        goto L14
    }

    private static void clearTypefaceCache() {
        sTypefaceCache.clear();
    }

    private static TextPaint newPaint(String r4, int r5, boolean r6, boolean r7, boolean r8, boolean r9) {
        TextPaint r0 = new TextPaint();
        r0.setTextSize(r5);
        r0.setAntiAlias(true);
        r0.setSubpixelText(true);
        if (r6 == false) goto L5;
        String r1 = r4 + "-Bold";
        r0.setFakeBoldText(true);
    L6:
        if (r7 == false) goto L9;
        r1 = r1 + "-Italic";
    L9:
        if (sTypefaceCache.containsKey(r1) == false) goto L11;
        Typeface r42 = sTypefaceCache.get(r1);
    L20:
        r0.setTypeface(r42);
        if (r8 == false) goto L23;
        r0.setTextSkewX(_sApproximatingOblique);
    L23:
        if (r9 == true) goto L25;
    L27:
        return r0;
    L25:
        if (Build.VERSION.SDK_INT < 21) goto L27;
        Cocos2dxReflectionHelper.invokeInstanceMethod(r0, "setFontFeatureSettings", new Class[]{String.class}, new Object[]{"smcp"});
        goto L27
    L11:
        if (r6 == false) goto L14;
        if (r7 == false) goto L14;
        int r62 = 3;
    L19:
        r42 = Typeface.create(r4, r62);
    L14:
        if (r6 == false) goto L16;
        r62 = 1;
        goto L19
    L16:
        if (r7 == false) goto L18;
        r62 = 2;
        goto L19
    L18:
        r62 = 0;
        goto L19
    L5:
        r1 = r4;
        goto L6
    }

    private CanvasRenderingContext2DImpl() {
        this.mCanvas = new Canvas();
        this.mTextAlign = 0;
        this.mTextBaseline = 2;
        this.mFillStyleR = 0;
        this.mFillStyleG = 0;
        this.mFillStyleB = 0;
        this.mFillStyleA = 255;
        this.mStrokeStyleR = 0;
        this.mStrokeStyleG = 0;
        this.mStrokeStyleB = 0;
        this.mStrokeStyleA = 255;
        this.mFontName = "Arial";
        this.mFontSize = 40.0f;
        this.mLineWidth = 0.0f;
        this.mIsBoldFont = false;
        this.mIsItalicFont = false;
        this.mIsObliqueFont = false;
        this.mIsSmallCapsFontVariant = false;
        this.mLineCap = "butt";
        this.mLineJoin = "miter";
    }

    private void recreateBuffer(float r3, float r4) {
        Bitmap r0 = this.mBitmap;
        if (r0 == null) goto L5;
        r0.recycle();
    L5:
        this.mBitmap = Bitmap.createBitmap((int) Math.ceil(r3), (int) Math.ceil(r4), Bitmap.Config.ARGB_8888);
        this.mCanvas.setBitmap(this.mBitmap);
    }

    private void beginPath() {
        if (this.mLinePath != null) goto L5;
        this.mLinePath = new Path();
    L5:
        this.mLinePath.reset();
    }

    private void closePath() {
        this.mLinePath.close();
    }

    private void moveTo(float r2, float r3) {
        this.mLinePath.moveTo(r2, r3);
    }

    private void lineTo(float r2, float r3) {
        this.mLinePath.lineTo(r2, r3);
    }

    private void stroke() {
        if (this.mLinePaint != null) goto L6;
        this.mLinePaint = new Paint();
        this.mLinePaint.setAntiAlias(true);
    L6:
        if (this.mLinePath != null) goto L8;
        this.mLinePath = new Path();
    L8:
        this.mLinePaint.setARGB(this.mStrokeStyleA, this.mStrokeStyleR, this.mStrokeStyleG, this.mStrokeStyleB);
        this.mLinePaint.setStyle(Paint.Style.STROKE);
        this.mLinePaint.setStrokeWidth(this.mLineWidth);
        setStrokeCap(this.mLinePaint);
        setStrokeJoin(this.mLinePaint);
        this.mCanvas.drawPath(this.mLinePath, this.mLinePaint);
    }

    private void setStrokeCap(Paint r6) {
        String r0 = this.mLineCap;
        int r1 = r0.hashCode();
        if (r1 == (-894674659)) goto L16;
        if (r1 == 3035667) goto L13;
        if (r1 == 108704142) goto L10;
    L18:
        byte r02 = -1;
    L19:
        if (r02 == 0) goto L25;
        if (r02 == 1) goto L24;
        if (r02 != 2) goto L29;
        r6.setStrokeCap(Paint.Cap.SQUARE);
        return;
    L29:
        return;
    L24:
        r6.setStrokeCap(Paint.Cap.ROUND);
        return;
    L25:
        r6.setStrokeCap(Paint.Cap.BUTT);
        return;
    L10:
        if (r0.equals("round") == false) goto L18;
        r02 = 1;
        goto L19
    L13:
        if (r0.equals("butt") == false) goto L18;
        r02 = 0;
        goto L19
    L16:
        if (r0.equals("square") == false) goto L18;
        r02 = 2;
        goto L19
    }

    private void setStrokeJoin(Paint r6) {
        String r0 = this.mLineJoin;
        int r1 = r0.hashCode();
        if (r1 == 93630586) goto L16;
        if (r1 == 103906565) goto L13;
        if (r1 == 108704142) goto L10;
    L18:
        byte r02 = -1;
    L19:
        if (r02 == 0) goto L25;
        if (r02 == 1) goto L24;
        if (r02 != 2) goto L29;
        r6.setStrokeJoin(Paint.Join.MITER);
        return;
    L29:
        return;
    L24:
        r6.setStrokeJoin(Paint.Join.ROUND);
        return;
    L25:
        r6.setStrokeJoin(Paint.Join.BEVEL);
        return;
    L10:
        if (r0.equals("round") == false) goto L18;
        r02 = 1;
        goto L19
    L13:
        if (r0.equals("miter") == false) goto L18;
        r02 = 2;
        goto L19
    L16:
        if (r0.equals("bevel") == false) goto L18;
        r02 = 0;
        goto L19
    }

    private void fill() {
        if (this.mLinePaint != null) goto L6;
        this.mLinePaint = new Paint();
    L6:
        if (this.mLinePath != null) goto L8;
        this.mLinePath = new Path();
    L8:
        this.mLinePaint.setARGB(this.mFillStyleA, this.mFillStyleR, this.mFillStyleG, this.mFillStyleB);
        this.mLinePaint.setStyle(Paint.Style.FILL);
        this.mCanvas.drawPath(this.mLinePath, this.mLinePaint);
        this.mLinePaint.setStrokeWidth(0.0f);
        setStrokeCap(this.mLinePaint);
        setStrokeJoin(this.mLinePaint);
        this.mLinePaint.setStyle(Paint.Style.STROKE);
        this.mCanvas.drawPath(this.mLinePath, this.mLinePaint);
        this.mLinePaint.setStrokeWidth(this.mLineWidth);
    }

    private void setLineCap(String r1) {
        this.mLineCap = r1;
    }

    private void setLineJoin(String r1) {
        this.mLineJoin = r1;
    }

    private void saveContext() {
        this.mCanvas.save();
    }

    private void restoreContext() {
        if (this.mCanvas.getSaveCount() <= 1) goto L6;
        this.mCanvas.restore();
        return;
    }

    private void rect(float r1, float r2, float r3, float r4) {
        beginPath();
        moveTo(r1, r2);
        float r42 = r4 + r2;
        lineTo(r1, r42);
        float r12 = r1 + r3;
        lineTo(r12, r42);
        lineTo(r12, r2);
        closePath();
    }

    private void clearRect(float r10, float r11, float r12, float r13) {
        int r0 = (int) (r12 * r13);
        int[] r2 = new int[r0];
        int r3 = 0;
    L3:
        if (r3 >= r0) goto L5;
        r2[r3] = 0;
        r3 = r3 + 1;
        goto L3
    L5:
        int r7 = (int) r12;
        this.mBitmap.setPixels(r2, 0, r7, (int) r10, (int) r11, r7, (int) r13);
    }

    private void createTextPaintIfNeeded() {
        if (this.mTextPaint != null) goto L6;
        this.mTextPaint = newPaint(this.mFontName, (int) this.mFontSize, this.mIsBoldFont, this.mIsItalicFont, this.mIsObliqueFont, this.mIsSmallCapsFontVariant);
        return;
    }

    private void fillRect(float r11, float r12, float r13, float r14) {
        int r0 = ((((this.mFillStyleA & 255) << 24) | ((this.mFillStyleR & 255) << 16)) | ((this.mFillStyleG & 255) << 8)) | (this.mFillStyleB & 255);
        int r1 = (int) (r13 * r14);
        int[] r3 = new int[r1];
        int r2 = 0;
    L3:
        if (r2 >= r1) goto L5;
        r3[r2] = r0;
        r2 = r2 + 1;
        goto L3
    L5:
        int r8 = (int) r13;
        this.mBitmap.setPixels(r3, 0, r8, (int) r11, (int) r12, r8, (int) r14);
    }

    private void scaleX(TextPaint r3, String r4, float r5) {
        if (r5 >= Float.MIN_VALUE) goto L5;
        return;
    L5:
        float r42 = measureText(r4);
        if ((r42 - r5) >= Float.MIN_VALUE) goto L8;
        return;
    L8:
        r3.setTextScaleX(r5 / r42);
    }

    private void fillText(String r6, float r7, float r8, float r9) {
        createTextPaintIfNeeded();
        this.mTextPaint.setARGB(this.mFillStyleA, this.mFillStyleR, this.mFillStyleG, this.mFillStyleB);
        this.mTextPaint.setStyle(Paint.Style.FILL);
        scaleX(this.mTextPaint, r6, r9);
        Point r72 = convertDrawPoint(new Point(this, r7, r8), r6);
        this.mCanvas.drawText(r6, r72.x, r72.y, this.mTextPaint);
    }

    private void strokeText(String r6, float r7, float r8, float r9) {
        createTextPaintIfNeeded();
        this.mTextPaint.setARGB(this.mStrokeStyleA, this.mStrokeStyleR, this.mStrokeStyleG, this.mStrokeStyleB);
        this.mTextPaint.setStyle(Paint.Style.STROKE);
        this.mTextPaint.setStrokeWidth(this.mLineWidth);
        scaleX(this.mTextPaint, r6, r9);
        Point r72 = convertDrawPoint(new Point(this, r7, r8), r6);
        this.mCanvas.drawText(r6, r72.x, r72.y, this.mTextPaint);
    }

    private float measureText(String r2) {
        createTextPaintIfNeeded();
        return this.mTextPaint.measureText(r2);
    }

    private Size measureTextReturnSize(String r4) {
        createTextPaintIfNeeded();
        Paint.FontMetrics r0 = this.mTextPaint.getFontMetrics();
        return new Size(this, measureText(r4), r0.descent - r0.ascent);
    }

    private void updateFont(String r1, float r2, boolean r3, boolean r4, boolean r5, boolean r6) {
        this.mFontName = r1;
        this.mFontSize = r2;
        this.mIsBoldFont = r3;
        this.mIsItalicFont = r4;
        this.mIsObliqueFont = r5;
        this.mIsSmallCapsFontVariant = r6;
        this.mTextPaint = null;
    }

    private void setTextAlign(int r1) {
        this.mTextAlign = r1;
    }

    private void setTextBaseline(int r1) {
        this.mTextBaseline = r1;
    }

    private void setFillStyle(float r2, float r3, float r4, float r5) {
        this.mFillStyleR = (int) (r2 * 255.0f);
        this.mFillStyleG = (int) (r3 * 255.0f);
        this.mFillStyleB = (int) (r4 * 255.0f);
        this.mFillStyleA = (int) (r5 * 255.0f);
    }

    private void setStrokeStyle(float r2, float r3, float r4, float r5) {
        this.mStrokeStyleR = (int) (r2 * 255.0f);
        this.mStrokeStyleG = (int) (r3 * 255.0f);
        this.mStrokeStyleB = (int) (r4 * 255.0f);
        this.mStrokeStyleA = (int) (r5 * 255.0f);
    }

    private void setLineWidth(float r1) {
        this.mLineWidth = r1;
    }

    private void _fillImageData(byte[] r10, float r11, float r12, float r13, float r14) {
        Log.d(TAG, "_fillImageData: ");
        int r0 = (int) (r11 * r12);
        int[] r2 = new int[r0];
        int r1 = 0;
    L3:
        if (r1 >= r0) goto L5;
        int r3 = r1 * 4;
        int r4 = r10[r3 + 0] & 255;
        int r5 = r10[r3 + 1] & 255;
        int r6 = r10[r3 + 2] & 255;
        r2[r1] = (((((r10[r3 + 3] & 255) & 255) << 24) | ((r4 & 255) << 16)) | ((r5 & 255) << 8)) | (r6 & 255);
        r1 = r1 + 1;
        goto L3
    L5:
        int r7 = (int) r11;
        this.mBitmap.setPixels(r2, 0, r7, (int) r13, (int) r14, r7, (int) r12);
    }

    private Point convertDrawPoint(Point r5, String r6) {
        Point r0 = new Point(this, r5);
        Size r52 = measureTextReturnSize(r6);
        int r62 = this.mTextAlign;
        if (r62 != 1) goto L6;
        r0.x -= r52.width / 2.0f;
    L8:
        int r63 = this.mTextBaseline;
        if (r63 != 0) goto L11;
        r0.y += r52.height;
    L13:
        return r0;
    L11:
        if (r63 != 1) goto L13;
        r0.y += r52.height / 2.0f;
        goto L13
    L6:
        if (r62 != 2) goto L8;
        r0.x -= r52.width;
        goto L8
    }

    private byte[] getDataRef() {
        Bitmap r0 = this.mBitmap;
        if (r0 == null) goto L6;
        byte[] r02 = new byte[(r0.getWidth() * this.mBitmap.getHeight()) * 4];
        ByteBuffer r1 = ByteBuffer.wrap(r02);
        r1.order(ByteOrder.nativeOrder());
        this.mBitmap.copyPixelsToBuffer(r1);
        return r02;
    L6:
        Log.e(TAG, "getDataRef return null");
        return null;
    }
}

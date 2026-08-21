package android.support.v4.print;

public final class PrintHelper {

    @android.annotation.SuppressLint({"InlinedApi"})
    public static final int COLOR_MODE_COLOR = 2;

    @android.annotation.SuppressLint({"InlinedApi"})
    public static final int COLOR_MODE_MONOCHROME = 1;
    static final boolean IS_MIN_MARGINS_HANDLING_CORRECT = false;
    private static final java.lang.String LOG_TAG = "PrintHelper";
    private static final int MAX_PRINT_SIZE = 3500;
    public static final int ORIENTATION_LANDSCAPE = 1;
    public static final int ORIENTATION_PORTRAIT = 2;
    static final boolean PRINT_ACTIVITY_RESPECTS_ORIENTATION = false;
    public static final int SCALE_MODE_FILL = 2;
    public static final int SCALE_MODE_FIT = 1;
    int mColorMode;
    final android.content.Context mContext;
    android.graphics.BitmapFactory.Options mDecodeOptions;
    final java.lang.Object mLock;
    int mOrientation;
    int mScaleMode;


    public interface OnPrintFinishCallback {
        void onFinish();
    }

    @android.support.annotation.RequiresApi(19)
    private class PrintBitmapAdapter extends android.print.PrintDocumentAdapter {
        private android.print.PrintAttributes mAttributes;
        private final android.graphics.Bitmap mBitmap;
        private final android.support.v4.print.PrintHelper.OnPrintFinishCallback mCallback;
        private final int mFittingMode;
        private final java.lang.String mJobName;
        final android.support.v4.print.PrintHelper this$0;

        PrintBitmapAdapter(android.support.v4.print.PrintHelper r1, java.lang.String r2, int r3, android.graphics.Bitmap r4, android.support.v4.print.PrintHelper.OnPrintFinishCallback r5) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.mJobName = r2
                r0.mFittingMode = r3
                r0.mBitmap = r4
                r0.mCallback = r5
                return
        }

        @Override
        public void onFinish() {
                r1 = this;
                android.support.v4.print.PrintHelper$OnPrintFinishCallback r0 = r1.mCallback
                if (r0 == 0) goto L7
                r0.onFinish()
            L7:
                return
        }

        @Override
        public void onLayout(android.print.PrintAttributes r1, android.print.PrintAttributes r2, android.os.CancellationSignal r3, android.print.PrintDocumentAdapter.LayoutResultCallback r4, android.os.Bundle r5) {
                r0 = this;
                r0.mAttributes = r2
                android.print.PrintDocumentInfo$Builder r3 = new android.print.PrintDocumentInfo$Builder
                java.lang.String r5 = r0.mJobName
                r3.<init>(r5)
                r5 = 1
                android.print.PrintDocumentInfo$Builder r3 = r3.setContentType(r5)
                android.print.PrintDocumentInfo$Builder r3 = r3.setPageCount(r5)
                android.print.PrintDocumentInfo r3 = r3.build()
                boolean r1 = r2.equals(r1)
                r1 = r1 ^ r5
                r4.onLayoutFinished(r3, r1)
                return
        }

        @Override
        public void onWrite(android.print.PageRange[] r8, android.os.ParcelFileDescriptor r9, android.os.CancellationSignal r10, android.print.PrintDocumentAdapter.WriteResultCallback r11) {
                r7 = this;
                android.support.v4.print.PrintHelper r0 = r7.this$0
                android.print.PrintAttributes r1 = r7.mAttributes
                int r2 = r7.mFittingMode
                android.graphics.Bitmap r3 = r7.mBitmap
                r4 = r9
                r5 = r10
                r6 = r11
                r0.writeBitmap(r1, r2, r3, r4, r5, r6)
                return
        }
    }

    @android.support.annotation.RequiresApi(19)
    private class PrintUriAdapter extends android.print.PrintDocumentAdapter {
        android.print.PrintAttributes mAttributes;
        android.graphics.Bitmap mBitmap;
        final android.support.v4.print.PrintHelper.OnPrintFinishCallback mCallback;
        final int mFittingMode;
        final android.net.Uri mImageFile;
        final java.lang.String mJobName;
        android.os.AsyncTask<android.net.Uri, java.lang.Boolean, android.graphics.Bitmap> mLoadBitmap;
        final android.support.v4.print.PrintHelper this$0;


        PrintUriAdapter(android.support.v4.print.PrintHelper r1, java.lang.String r2, android.net.Uri r3, android.support.v4.print.PrintHelper.OnPrintFinishCallback r4, int r5) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.mJobName = r2
                r0.mImageFile = r3
                r0.mCallback = r4
                r0.mFittingMode = r5
                r1 = 0
                r0.mBitmap = r1
                return
        }

        void cancelLoad() {
                r3 = this;
                android.support.v4.print.PrintHelper r0 = r3.this$0
                java.lang.Object r0 = r0.mLock
                monitor-enter(r0)
                android.support.v4.print.PrintHelper r1 = r3.this$0     // Catch: java.lang.Throwable -> L1f
                android.graphics.BitmapFactory$Options r1 = r1.mDecodeOptions     // Catch: java.lang.Throwable -> L1f
                if (r1 == 0) goto L1d
                int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L1f
                r2 = 24
                if (r1 >= r2) goto L18
                android.support.v4.print.PrintHelper r1 = r3.this$0     // Catch: java.lang.Throwable -> L1f
                android.graphics.BitmapFactory$Options r1 = r1.mDecodeOptions     // Catch: java.lang.Throwable -> L1f
                r1.requestCancelDecode()     // Catch: java.lang.Throwable -> L1f
            L18:
                android.support.v4.print.PrintHelper r1 = r3.this$0     // Catch: java.lang.Throwable -> L1f
                r2 = 0
                r1.mDecodeOptions = r2     // Catch: java.lang.Throwable -> L1f
            L1d:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L1f
                return
            L1f:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L1f
                throw r1
        }

        @Override
        public void onFinish() {
                r2 = this;
                super.onFinish()
                r2.cancelLoad()
                android.os.AsyncTask<android.net.Uri, java.lang.Boolean, android.graphics.Bitmap> r0 = r2.mLoadBitmap
                if (r0 == 0) goto Le
                r1 = 1
                r0.cancel(r1)
            Le:
                android.support.v4.print.PrintHelper$OnPrintFinishCallback r0 = r2.mCallback
                if (r0 == 0) goto L15
                r0.onFinish()
            L15:
                android.graphics.Bitmap r0 = r2.mBitmap
                if (r0 == 0) goto L1f
                r0.recycle()
                r0 = 0
                r2.mBitmap = r0
            L1f:
                return
        }

        @Override
        public void onLayout(android.print.PrintAttributes r7, android.print.PrintAttributes r8, android.os.CancellationSignal r9, android.print.PrintDocumentAdapter.LayoutResultCallback r10, android.os.Bundle r11) {
                r6 = this;
                monitor-enter(r6)
                r6.mAttributes = r8     // Catch: java.lang.Throwable -> L44
                monitor-exit(r6)     // Catch: java.lang.Throwable -> L44
                boolean r11 = r9.isCanceled()
                if (r11 == 0) goto Le
                r10.onLayoutCancelled()
                return
            Le:
                android.graphics.Bitmap r11 = r6.mBitmap
                if (r11 == 0) goto L2f
                android.print.PrintDocumentInfo$Builder r9 = new android.print.PrintDocumentInfo$Builder
                java.lang.String r11 = r6.mJobName
                r9.<init>(r11)
                r11 = 1
                android.print.PrintDocumentInfo$Builder r9 = r9.setContentType(r11)
                android.print.PrintDocumentInfo$Builder r9 = r9.setPageCount(r11)
                android.print.PrintDocumentInfo r9 = r9.build()
                boolean r7 = r8.equals(r7)
                r7 = r7 ^ r11
                r10.onLayoutFinished(r9, r7)
                return
            L2f:
                android.support.v4.print.PrintHelper$PrintUriAdapter$1 r11 = new android.support.v4.print.PrintHelper$PrintUriAdapter$1
                r0 = r11
                r1 = r6
                r2 = r9
                r3 = r8
                r4 = r7
                r5 = r10
                r0.<init>(r1, r2, r3, r4, r5)
                r7 = 0
                android.net.Uri[] r7 = new android.net.Uri[r7]
                android.os.AsyncTask r7 = r11.execute(r7)
                r6.mLoadBitmap = r7
                return
            L44:
                r7 = move-exception
                monitor-exit(r6)     // Catch: java.lang.Throwable -> L44
                throw r7
        }

        @Override
        public void onWrite(android.print.PageRange[] r8, android.os.ParcelFileDescriptor r9, android.os.CancellationSignal r10, android.print.PrintDocumentAdapter.WriteResultCallback r11) {
                r7 = this;
                android.support.v4.print.PrintHelper r0 = r7.this$0
                android.print.PrintAttributes r1 = r7.mAttributes
                int r2 = r7.mFittingMode
                android.graphics.Bitmap r3 = r7.mBitmap
                r4 = r9
                r5 = r10
                r6 = r11
                r0.writeBitmap(r1, r2, r3, r4, r5, r6)
                return
        }
    }

    static {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 23
            r3 = 1
            r4 = 20
            if (r0 < r4) goto L11
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 <= r2) goto Lf
            goto L11
        Lf:
            r0 = 0
            goto L12
        L11:
            r0 = 1
        L12:
            android.support.v4.print.PrintHelper.PRINT_ACTIVITY_RESPECTS_ORIENTATION = r0
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 == r2) goto L19
            r1 = 1
        L19:
            android.support.v4.print.PrintHelper.IS_MIN_MARGINS_HANDLING_CORRECT = r1
            return
    }

    public PrintHelper(@android.support.annotation.NonNull android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mDecodeOptions = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.mLock = r0
            r0 = 2
            r1.mScaleMode = r0
            r1.mColorMode = r0
            r0 = 1
            r1.mOrientation = r0
            r1.mContext = r2
            return
    }

    static android.graphics.Bitmap convertBitmapForColorMode(android.graphics.Bitmap r5, int r6) {
            r0 = 1
            if (r6 == r0) goto L4
            return r5
        L4:
            int r6 = r5.getWidth()
            int r0 = r5.getHeight()
            android.graphics.Bitmap$Config r1 = android.graphics.Bitmap.Config.ARGB_8888
            android.graphics.Bitmap r6 = android.graphics.Bitmap.createBitmap(r6, r0, r1)
            android.graphics.Canvas r0 = new android.graphics.Canvas
            r0.<init>(r6)
            android.graphics.Paint r1 = new android.graphics.Paint
            r1.<init>()
            android.graphics.ColorMatrix r2 = new android.graphics.ColorMatrix
            r2.<init>()
            r3 = 0
            r2.setSaturation(r3)
            android.graphics.ColorMatrixColorFilter r4 = new android.graphics.ColorMatrixColorFilter
            r4.<init>(r2)
            r1.setColorFilter(r4)
            r0.drawBitmap(r5, r3, r3, r1)
            r5 = 0
            r0.setBitmap(r5)
            return r6
    }

    @android.support.annotation.RequiresApi(19)
    private static android.print.PrintAttributes.Builder copyAttributes(android.print.PrintAttributes r3) {
            android.print.PrintAttributes$Builder r0 = new android.print.PrintAttributes$Builder
            r0.<init>()
            android.print.PrintAttributes$MediaSize r1 = r3.getMediaSize()
            android.print.PrintAttributes$Builder r0 = r0.setMediaSize(r1)
            android.print.PrintAttributes$Resolution r1 = r3.getResolution()
            android.print.PrintAttributes$Builder r0 = r0.setResolution(r1)
            android.print.PrintAttributes$Margins r1 = r3.getMinMargins()
            android.print.PrintAttributes$Builder r0 = r0.setMinMargins(r1)
            int r1 = r3.getColorMode()
            if (r1 == 0) goto L2a
            int r1 = r3.getColorMode()
            r0.setColorMode(r1)
        L2a:
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 23
            if (r1 < r2) goto L3d
            int r1 = r3.getDuplexMode()
            if (r1 == 0) goto L3d
            int r3 = r3.getDuplexMode()
            r0.setDuplexMode(r3)
        L3d:
            return r0
    }

    static android.graphics.Matrix getMatrix(int r3, int r4, android.graphics.RectF r5, int r6) {
            android.graphics.Matrix r0 = new android.graphics.Matrix
            r0.<init>()
            float r1 = r5.width()
            float r3 = (float) r3
            float r1 = r1 / r3
            r2 = 2
            if (r6 != r2) goto L19
            float r6 = r5.height()
            float r2 = (float) r4
            float r6 = r6 / r2
            float r6 = java.lang.Math.max(r1, r6)
            goto L23
        L19:
            float r6 = r5.height()
            float r2 = (float) r4
            float r6 = r6 / r2
            float r6 = java.lang.Math.min(r1, r6)
        L23:
            r0.postScale(r6, r6)
            float r1 = r5.width()
            float r3 = r3 * r6
            float r1 = r1 - r3
            r3 = 1073741824(0x40000000, float:2.0)
            float r1 = r1 / r3
            float r5 = r5.height()
            float r4 = (float) r4
            float r4 = r4 * r6
            float r5 = r5 - r4
            float r5 = r5 / r3
            r0.postTranslate(r1, r5)
            return r0
    }

    static boolean isPortrait(android.graphics.Bitmap r1) {
            int r0 = r1.getWidth()
            int r1 = r1.getHeight()
            if (r0 > r1) goto Lc
            r1 = 1
            goto Ld
        Lc:
            r1 = 0
        Ld:
            return r1
    }

    private android.graphics.Bitmap loadBitmap(android.net.Uri r5, android.graphics.BitmapFactory.Options r6) throws java.io.FileNotFoundException {
            r4 = this;
            java.lang.String r0 = "close fail "
            java.lang.String r1 = "PrintHelper"
            if (r5 == 0) goto L34
            android.content.Context r2 = r4.mContext
            if (r2 == 0) goto L34
            r3 = 0
            r2.getContentResolver()     // Catch: java.lang.Throwable -> L28
            android.content.Context r2 = com.qihoo360.replugin.RePlugin.getPluginContext()     // Catch: java.lang.Throwable -> L28
            java.io.InputStream r5 = com.qihoo360.replugin.loader.p.PluginProviderClient.openInputStream(r2, r5)     // Catch: java.lang.Throwable -> L28
            android.graphics.Bitmap r6 = android.graphics.BitmapFactory.decodeStream(r5, r3, r6)     // Catch: java.lang.Throwable -> L25
            if (r5 == 0) goto L24
            r5.close()     // Catch: java.io.IOException -> L20
            goto L24
        L20:
            r5 = move-exception
            android.util.Log.w(r1, r0, r5)
        L24:
            return r6
        L25:
            r6 = move-exception
            r3 = r5
            goto L29
        L28:
            r6 = move-exception
        L29:
            if (r3 == 0) goto L33
            r3.close()     // Catch: java.io.IOException -> L2f
            goto L33
        L2f:
            r5 = move-exception
            android.util.Log.w(r1, r0, r5)
        L33:
            throw r6
        L34:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "bad argument to loadBitmap"
            r5.<init>(r6)
            throw r5
    }

    public static boolean systemSupportsPrint() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public int getColorMode() {
            r1 = this;
            int r0 = r1.mColorMode
            return r0
    }

    public int getOrientation() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lc
            int r0 = r2.mOrientation
            if (r0 != 0) goto Lc
            r0 = 1
            return r0
        Lc:
            int r0 = r2.mOrientation
            return r0
    }

    public int getScaleMode() {
            r1 = this;
            int r0 = r1.mScaleMode
            return r0
    }

    android.graphics.Bitmap loadConstrainedBitmap(android.net.Uri r8) throws java.io.FileNotFoundException {
            r7 = this;
            if (r8 == 0) goto L65
            android.content.Context r0 = r7.mContext
            if (r0 == 0) goto L65
            android.graphics.BitmapFactory$Options r0 = new android.graphics.BitmapFactory$Options
            r0.<init>()
            r1 = 1
            r0.inJustDecodeBounds = r1
            r7.loadBitmap(r8, r0)
            int r2 = r0.outWidth
            int r0 = r0.outHeight
            r3 = 0
            if (r2 <= 0) goto L64
            if (r0 > 0) goto L1b
            goto L64
        L1b:
            int r4 = java.lang.Math.max(r2, r0)
            r5 = 1
        L20:
            r6 = 3500(0xdac, float:4.905E-42)
            if (r4 <= r6) goto L29
            int r4 = r4 >>> 1
            int r5 = r5 << 1
            goto L20
        L29:
            if (r5 <= 0) goto L64
            int r0 = java.lang.Math.min(r2, r0)
            int r0 = r0 / r5
            if (r0 > 0) goto L33
            goto L64
        L33:
            java.lang.Object r0 = r7.mLock
            monitor-enter(r0)
            android.graphics.BitmapFactory$Options r2 = new android.graphics.BitmapFactory$Options     // Catch: java.lang.Throwable -> L61
            r2.<init>()     // Catch: java.lang.Throwable -> L61
            r7.mDecodeOptions = r2     // Catch: java.lang.Throwable -> L61
            android.graphics.BitmapFactory$Options r2 = r7.mDecodeOptions     // Catch: java.lang.Throwable -> L61
            r2.inMutable = r1     // Catch: java.lang.Throwable -> L61
            android.graphics.BitmapFactory$Options r1 = r7.mDecodeOptions     // Catch: java.lang.Throwable -> L61
            r1.inSampleSize = r5     // Catch: java.lang.Throwable -> L61
            android.graphics.BitmapFactory$Options r1 = r7.mDecodeOptions     // Catch: java.lang.Throwable -> L61
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L61
            android.graphics.Bitmap r8 = r7.loadBitmap(r8, r1)     // Catch: java.lang.Throwable -> L56
            java.lang.Object r0 = r7.mLock
            monitor-enter(r0)
            r7.mDecodeOptions = r3     // Catch: java.lang.Throwable -> L53
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L53
            return r8
        L53:
            r8 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L53
            throw r8
        L56:
            r8 = move-exception
            java.lang.Object r1 = r7.mLock
            monitor-enter(r1)
            r7.mDecodeOptions = r3     // Catch: java.lang.Throwable -> L5e
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L5e
            throw r8
        L5e:
            r8 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L5e
            throw r8
        L61:
            r8 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L61
            throw r8
        L64:
            return r3
        L65:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "bad argument to getScaledBitmap"
            r8.<init>(r0)
            throw r8
    }

    public void printBitmap(@android.support.annotation.NonNull java.lang.String r2, @android.support.annotation.NonNull android.graphics.Bitmap r3) {
            r1 = this;
            r0 = 0
            r1.printBitmap(r2, r3, r0)
            return
    }

    public void printBitmap(@android.support.annotation.NonNull java.lang.String r10, @android.support.annotation.NonNull android.graphics.Bitmap r11, @android.support.annotation.Nullable android.support.v4.print.PrintHelper.OnPrintFinishCallback r12) {
            r9 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L40
            if (r11 != 0) goto L9
            goto L40
        L9:
            android.content.Context r0 = r9.mContext
            java.lang.String r1 = "print"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.print.PrintManager r0 = (android.print.PrintManager) r0
            boolean r1 = isPortrait(r11)
            if (r1 == 0) goto L1c
            android.print.PrintAttributes$MediaSize r1 = android.print.PrintAttributes.MediaSize.UNKNOWN_PORTRAIT
            goto L1e
        L1c:
            android.print.PrintAttributes$MediaSize r1 = android.print.PrintAttributes.MediaSize.UNKNOWN_LANDSCAPE
        L1e:
            android.print.PrintAttributes$Builder r2 = new android.print.PrintAttributes$Builder
            r2.<init>()
            android.print.PrintAttributes$Builder r1 = r2.setMediaSize(r1)
            int r2 = r9.mColorMode
            android.print.PrintAttributes$Builder r1 = r1.setColorMode(r2)
            android.print.PrintAttributes r1 = r1.build()
            android.support.v4.print.PrintHelper$PrintBitmapAdapter r8 = new android.support.v4.print.PrintHelper$PrintBitmapAdapter
            int r5 = r9.mScaleMode
            r2 = r8
            r3 = r9
            r4 = r10
            r6 = r11
            r7 = r12
            r2.<init>(r3, r4, r5, r6, r7)
            r0.print(r10, r8, r1)
        L40:
            return
    }

    public void printBitmap(@android.support.annotation.NonNull java.lang.String r2, @android.support.annotation.NonNull android.net.Uri r3) throws java.io.FileNotFoundException {
            r1 = this;
            r0 = 0
            r1.printBitmap(r2, r3, r0)
            return
    }

    public void printBitmap(@android.support.annotation.NonNull java.lang.String r9, @android.support.annotation.NonNull android.net.Uri r10, @android.support.annotation.Nullable android.support.v4.print.PrintHelper.OnPrintFinishCallback r11) throws java.io.FileNotFoundException {
            r8 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 >= r1) goto L7
            return
        L7:
            android.support.v4.print.PrintHelper$PrintUriAdapter r0 = new android.support.v4.print.PrintHelper$PrintUriAdapter
            int r7 = r8.mScaleMode
            r2 = r0
            r3 = r8
            r4 = r9
            r5 = r10
            r6 = r11
            r2.<init>(r3, r4, r5, r6, r7)
            android.content.Context r10 = r8.mContext
            java.lang.String r11 = "print"
            java.lang.Object r10 = r10.getSystemService(r11)
            android.print.PrintManager r10 = (android.print.PrintManager) r10
            android.print.PrintAttributes$Builder r11 = new android.print.PrintAttributes$Builder
            r11.<init>()
            int r1 = r8.mColorMode
            r11.setColorMode(r1)
            int r1 = r8.mOrientation
            r2 = 1
            if (r1 == r2) goto L38
            if (r1 != 0) goto L2f
            goto L38
        L2f:
            r2 = 2
            if (r1 != r2) goto L3d
            android.print.PrintAttributes$MediaSize r1 = android.print.PrintAttributes.MediaSize.UNKNOWN_PORTRAIT
            r11.setMediaSize(r1)
            goto L3d
        L38:
            android.print.PrintAttributes$MediaSize r1 = android.print.PrintAttributes.MediaSize.UNKNOWN_LANDSCAPE
            r11.setMediaSize(r1)
        L3d:
            android.print.PrintAttributes r11 = r11.build()
            r10.print(r9, r0, r11)
            return
    }

    public void setColorMode(int r1) {
            r0 = this;
            r0.mColorMode = r1
            return
    }

    public void setOrientation(int r1) {
            r0 = this;
            r0.mOrientation = r1
            return
    }

    public void setScaleMode(int r1) {
            r0 = this;
            r0.mScaleMode = r1
            return
    }

    @android.support.annotation.RequiresApi(19)
    void writeBitmap(android.print.PrintAttributes r12, int r13, android.graphics.Bitmap r14, android.os.ParcelFileDescriptor r15, android.os.CancellationSignal r16, android.print.PrintDocumentAdapter.WriteResultCallback r17) {
            r11 = this;
            boolean r0 = android.support.v4.print.PrintHelper.IS_MIN_MARGINS_HANDLING_CORRECT
            r1 = 0
            if (r0 == 0) goto L7
            r5 = r12
            goto L19
        L7:
            android.print.PrintAttributes$Builder r0 = copyAttributes(r12)
            android.print.PrintAttributes$Margins r2 = new android.print.PrintAttributes$Margins
            r2.<init>(r1, r1, r1, r1)
            android.print.PrintAttributes$Builder r0 = r0.setMinMargins(r2)
            android.print.PrintAttributes r0 = r0.build()
            r5 = r0
        L19:
            android.support.v4.print.PrintHelper$1 r0 = new android.support.v4.print.PrintHelper$1
            r2 = r0
            r3 = r11
            r4 = r16
            r6 = r14
            r7 = r12
            r8 = r13
            r9 = r15
            r10 = r17
            r2.<init>(r3, r4, r5, r6, r7, r8, r9, r10)
            java.lang.Void[] r1 = new java.lang.Void[r1]
            r0.execute(r1)
            return
    }
}

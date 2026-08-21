package com.bumptech.glide.load.resource.bitmap;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.os.Build;
import android.util.Log;
import com.bumptech.glide.load.DecodeFormat;
import com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool;
import com.bumptech.glide.load.resource.bitmap.ImageHeaderParser;
import com.bumptech.glide.util.ByteArrayPool;
import com.bumptech.glide.util.ExceptionCatchingInputStream;
import com.bumptech.glide.util.MarkEnforcingInputStream;
import com.bumptech.glide.util.Util;
import java.io.IOException;
import java.io.InputStream;
import java.util.EnumSet;
import java.util.Queue;
import java.util.Set;

public abstract class Downsampler implements BitmapDecoder<InputStream> {
    private static final int MARK_POSITION = 5242880;
    private static final String TAG = "Downsampler";
    private static final Set<ImageHeaderParser.ImageType> TYPES_THAT_USE_POOL = EnumSet.of(ImageHeaderParser.ImageType.JPEG, ImageHeaderParser.ImageType.PNG_A, ImageHeaderParser.ImageType.PNG);
    private static final Queue<BitmapFactory.Options> OPTIONS_QUEUE = Util.createQueue(0);
    public static final Downsampler AT_LEAST = new Downsampler() {
        @Override
        public String getId() {
            return "AT_LEAST.com.bumptech.glide.load.data.bitmap";
        }

        @Override
        public Bitmap decode(InputStream inputStream, BitmapPool bitmapPool, int i, int i2, DecodeFormat decodeFormat) throws Exception {
            return super.decode(inputStream, bitmapPool, i, i2, decodeFormat);
        }

        @Override
        protected int getSampleSize(int i, int i2, int i3, int i4) {
            return Math.min(i2 / i4, i / i3);
        }
    };
    public static final Downsampler AT_MOST = new Downsampler() {
        @Override
        public String getId() {
            return "AT_MOST.com.bumptech.glide.load.data.bitmap";
        }

        @Override
        public Bitmap decode(InputStream inputStream, BitmapPool bitmapPool, int i, int i2, DecodeFormat decodeFormat) throws Exception {
            return super.decode(inputStream, bitmapPool, i, i2, decodeFormat);
        }

        @Override
        protected int getSampleSize(int i, int i2, int i3, int i4) {
            int iCeil = (int) Math.ceil(Math.max(i2 / i4, i / i3));
            int iMax = Math.max(1, Integer.highestOneBit(iCeil));
            return iMax << (iMax >= iCeil ? 0 : 1);
        }
    };
    public static final Downsampler NONE = new Downsampler() {
        @Override
        public String getId() {
            return "NONE.com.bumptech.glide.load.data.bitmap";
        }

        @Override
        protected int getSampleSize(int i, int i2, int i3, int i4) {
            return 0;
        }

        @Override
        public Bitmap decode(InputStream inputStream, BitmapPool bitmapPool, int i, int i2, DecodeFormat decodeFormat) throws Exception {
            return super.decode(inputStream, bitmapPool, i, i2, decodeFormat);
        }
    };

    protected abstract int getSampleSize(int i, int i2, int i3, int i4);

    @Override
    public Bitmap decode(InputStream inputStream, BitmapPool bitmapPool, int i, int i2, DecodeFormat decodeFormat) {
        int i3;
        ByteArrayPool byteArrayPool = ByteArrayPool.get();
        byte[] bytes = byteArrayPool.getBytes();
        byte[] bytes2 = byteArrayPool.getBytes();
        BitmapFactory.Options defaultOptions = getDefaultOptions();
        RecyclableBufferedInputStream recyclableBufferedInputStream = new RecyclableBufferedInputStream(inputStream, bytes2);
        ExceptionCatchingInputStream exceptionCatchingInputStreamObtain = ExceptionCatchingInputStream.obtain(recyclableBufferedInputStream);
        MarkEnforcingInputStream markEnforcingInputStream = new MarkEnforcingInputStream(exceptionCatchingInputStreamObtain);
        try {
            exceptionCatchingInputStreamObtain.mark(MARK_POSITION);
            try {
                try {
                    int orientation = new ImageHeaderParser(exceptionCatchingInputStreamObtain).getOrientation();
                    try {
                        exceptionCatchingInputStreamObtain.reset();
                    } catch (IOException e) {
                        if (Log.isLoggable(TAG, 5)) {
                            Log.w(TAG, "Cannot reset the input stream", e);
                        }
                    }
                    i3 = orientation;
                } finally {
                }
            } catch (IOException e2) {
                if (Log.isLoggable(TAG, 5)) {
                    Log.w(TAG, "Cannot determine the image orientation from header", e2);
                }
                try {
                    exceptionCatchingInputStreamObtain.reset();
                } catch (IOException e3) {
                    if (Log.isLoggable(TAG, 5)) {
                        Log.w(TAG, "Cannot reset the input stream", e3);
                    }
                }
                i3 = 0;
            }
            defaultOptions.inTempStorage = bytes;
            int[] dimensions = getDimensions(markEnforcingInputStream, recyclableBufferedInputStream, defaultOptions);
            int i4 = dimensions[0];
            int i5 = dimensions[1];
            Bitmap bitmapDownsampleWithSize = downsampleWithSize(markEnforcingInputStream, recyclableBufferedInputStream, defaultOptions, bitmapPool, i4, i5, getRoundedSampleSize(TransformationUtils.getExifOrientationDegrees(i3), i4, i5, i, i2), decodeFormat);
            IOException exception = exceptionCatchingInputStreamObtain.getException();
            if (exception != null) {
                throw new RuntimeException(exception);
            }
            Bitmap bitmapRotateImageExif = null;
            if (bitmapDownsampleWithSize != null) {
                bitmapRotateImageExif = TransformationUtils.rotateImageExif(bitmapDownsampleWithSize, bitmapPool, i3);
                if (!bitmapDownsampleWithSize.equals(bitmapRotateImageExif) && !bitmapPool.put(bitmapDownsampleWithSize)) {
                    bitmapDownsampleWithSize.recycle();
                }
            }
            return bitmapRotateImageExif;
        } finally {
            byteArrayPool.releaseBytes(bytes);
            byteArrayPool.releaseBytes(bytes2);
            exceptionCatchingInputStreamObtain.release();
            releaseOptions(defaultOptions);
        }
    }

    private int getRoundedSampleSize(int i, int i2, int i3, int i4, int i5) {
        int sampleSize;
        if (i5 == Integer.MIN_VALUE) {
            i5 = i3;
        }
        if (i4 == Integer.MIN_VALUE) {
            i4 = i2;
        }
        if (i == 90 || i == 270) {
            sampleSize = getSampleSize(i3, i2, i4, i5);
        } else {
            sampleSize = getSampleSize(i2, i3, i4, i5);
        }
        return Math.max(1, sampleSize == 0 ? 0 : Integer.highestOneBit(sampleSize));
    }

    private Bitmap downsampleWithSize(MarkEnforcingInputStream markEnforcingInputStream, RecyclableBufferedInputStream recyclableBufferedInputStream, BitmapFactory.Options options, BitmapPool bitmapPool, int i, int i2, int i3, DecodeFormat decodeFormat) {
        Bitmap.Config config = getConfig(markEnforcingInputStream, decodeFormat);
        options.inSampleSize = i3;
        options.inPreferredConfig = config;
        if ((options.inSampleSize == 1 || 19 <= Build.VERSION.SDK_INT) && shouldUsePool(markEnforcingInputStream)) {
            double d = i;
            double d2 = i3;
            Double.isNaN(d);
            Double.isNaN(d2);
            int iCeil = (int) Math.ceil(d / d2);
            double d3 = i2;
            Double.isNaN(d3);
            Double.isNaN(d2);
            setInBitmap(options, bitmapPool.getDirty(iCeil, (int) Math.ceil(d3 / d2), config));
        }
        return decodeStream(markEnforcingInputStream, recyclableBufferedInputStream, options);
    }

    private static boolean shouldUsePool(InputStream inputStream) {
        if (19 <= Build.VERSION.SDK_INT) {
            return true;
        }
        inputStream.mark(1024);
        try {
            try {
                return TYPES_THAT_USE_POOL.contains(new ImageHeaderParser(inputStream).getType());
            } finally {
                try {
                    inputStream.reset();
                } catch (IOException e) {
                    if (Log.isLoggable(TAG, 5)) {
                        Log.w(TAG, "Cannot reset the input stream", e);
                    }
                }
            }
        } catch (IOException e2) {
            if (Log.isLoggable(TAG, 5)) {
                Log.w(TAG, "Cannot determine the image type from header", e2);
            }
            try {
                inputStream.reset();
                return false;
            } catch (IOException e3) {
                if (!Log.isLoggable(TAG, 5)) {
                    return false;
                }
                Log.w(TAG, "Cannot reset the input stream", e3);
                return false;
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x002e A[PHI: r2 r7
      0x002e: PHI (r2v6 boolean) = (r2v3 boolean), (r2v8 boolean) binds: [B:27:0x0058, B:15:0x002c] A[DONT_GENERATE, DONT_INLINE]
      0x002e: PHI (r7v4 'e' java.io.IOException) = (r7v2 'e' java.io.IOException), (r7v7 'e' java.io.IOException) binds: [B:27:0x0058, B:15:0x002c] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static Bitmap.Config getConfig(InputStream inputStream, DecodeFormat decodeFormat) {
        if (decodeFormat == DecodeFormat.ALWAYS_ARGB_8888 || decodeFormat == DecodeFormat.PREFER_ARGB_8888 || Build.VERSION.SDK_INT == 16) {
            return Bitmap.Config.ARGB_8888;
        }
        boolean zHasAlpha = false;
        inputStream.mark(1024);
        try {
            try {
                zHasAlpha = new ImageHeaderParser(inputStream).hasAlpha();
                try {
                    inputStream.reset();
                } catch (IOException e) {
                    e = e;
                    if (Log.isLoggable(TAG, 5)) {
                        Log.w(TAG, "Cannot reset the input stream", e);
                    }
                }
            } catch (Throwable th) {
                try {
                    inputStream.reset();
                } catch (IOException e2) {
                    if (Log.isLoggable(TAG, 5)) {
                        Log.w(TAG, "Cannot reset the input stream", e2);
                    }
                }
                throw th;
            }
        } catch (IOException e3) {
            if (Log.isLoggable(TAG, 5)) {
                Log.w(TAG, "Cannot determine whether the image has alpha or not from header for format " + decodeFormat, e3);
            }
            try {
                inputStream.reset();
            } catch (IOException e4) {
                e = e4;
                if (Log.isLoggable(TAG, 5)) {
                }
            }
        }
        return zHasAlpha ? Bitmap.Config.ARGB_8888 : Bitmap.Config.RGB_565;
    }

    public int[] getDimensions(MarkEnforcingInputStream markEnforcingInputStream, RecyclableBufferedInputStream recyclableBufferedInputStream, BitmapFactory.Options options) {
        options.inJustDecodeBounds = true;
        decodeStream(markEnforcingInputStream, recyclableBufferedInputStream, options);
        options.inJustDecodeBounds = false;
        return new int[]{options.outWidth, options.outHeight};
    }

    private static Bitmap decodeStream(MarkEnforcingInputStream markEnforcingInputStream, RecyclableBufferedInputStream recyclableBufferedInputStream, BitmapFactory.Options options) {
        if (options.inJustDecodeBounds) {
            markEnforcingInputStream.mark(MARK_POSITION);
        } else {
            recyclableBufferedInputStream.fixMarkLimit();
        }
        Bitmap bitmapDecodeStream = BitmapFactory.decodeStream(markEnforcingInputStream, null, options);
        try {
            if (options.inJustDecodeBounds) {
                markEnforcingInputStream.reset();
            }
        } catch (IOException e) {
            if (Log.isLoggable(TAG, 6)) {
                Log.e(TAG, "Exception loading inDecodeBounds=" + options.inJustDecodeBounds + " sample=" + options.inSampleSize, e);
            }
        }
        return bitmapDecodeStream;
    }

    private static void setInBitmap(BitmapFactory.Options options, Bitmap bitmap) {
        if (11 <= Build.VERSION.SDK_INT) {
            options.inBitmap = bitmap;
        }
    }

    private static synchronized BitmapFactory.Options getDefaultOptions() {
        BitmapFactory.Options optionsPoll;
        synchronized (OPTIONS_QUEUE) {
            optionsPoll = OPTIONS_QUEUE.poll();
        }
        if (optionsPoll == null) {
            optionsPoll = new BitmapFactory.Options();
            resetOptions(optionsPoll);
        }
        return optionsPoll;
    }

    private static void releaseOptions(BitmapFactory.Options options) {
        resetOptions(options);
        synchronized (OPTIONS_QUEUE) {
            OPTIONS_QUEUE.offer(options);
        }
    }

    private static void resetOptions(BitmapFactory.Options options) {
        options.inTempStorage = null;
        options.inDither = false;
        options.inScaled = false;
        options.inSampleSize = 1;
        options.inPreferredConfig = null;
        options.inJustDecodeBounds = false;
        options.outWidth = 0;
        options.outHeight = 0;
        options.outMimeType = null;
        if (11 <= Build.VERSION.SDK_INT) {
            options.inBitmap = null;
            options.inMutable = true;
        }
    }
}

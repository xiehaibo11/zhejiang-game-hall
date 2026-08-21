package com.bumptech.glide.gifdecoder;

import android.graphics.Bitmap;
import android.os.Build;
import android.util.Log;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.util.Arrays;
import java.util.Iterator;
import kotlin.UByte;

/* JADX INFO: loaded from: classes.dex */
public class GifDecoder {
    private static final int DISPOSAL_BACKGROUND = 2;
    private static final int DISPOSAL_NONE = 1;
    private static final int DISPOSAL_PREVIOUS = 3;
    private static final int DISPOSAL_UNSPECIFIED = 0;
    private static final int INITIAL_FRAME_POINTER = -1;
    private static final int MAX_STACK_SIZE = 4096;
    private static final int NULL_CODE = -1;
    public static final int STATUS_FORMAT_ERROR = 1;
    public static final int STATUS_OK = 0;
    public static final int STATUS_OPEN_ERROR = 2;
    public static final int STATUS_PARTIAL_DECODE = 3;
    private int[] act;
    private BitmapProvider bitmapProvider;
    private byte[] data;
    private int framePointer;
    private byte[] mainPixels;
    private int[] mainScratch;
    private GifHeaderParser parser;
    private byte[] pixelStack;
    private short[] prefix;
    private Bitmap previousImage;
    private ByteBuffer rawData;
    private boolean savePrevious;
    private int status;
    private byte[] suffix;
    private static final String TAG = GifDecoder.class.getSimpleName();
    private static final Bitmap.Config BITMAP_CONFIG = Bitmap.Config.ARGB_8888;
    private final byte[] block = new byte[256];
    private GifHeader header = new GifHeader();

    public interface BitmapProvider {
        Bitmap obtain(int i, int i2, Bitmap.Config config);

        void release(Bitmap bitmap);
    }

    public GifDecoder(BitmapProvider bitmapProvider) {
        this.bitmapProvider = bitmapProvider;
    }

    public int getWidth() {
        return this.header.width;
    }

    public int getHeight() {
        return this.header.height;
    }

    public byte[] getData() {
        return this.data;
    }

    public int getStatus() {
        return this.status;
    }

    public void advance() {
        this.framePointer = (this.framePointer + 1) % this.header.frameCount;
    }

    public int getDelay(int i) {
        if (i < 0 || i >= this.header.frameCount) {
            return -1;
        }
        return this.header.frames.get(i).delay;
    }

    public int getNextDelay() {
        int i;
        if (this.header.frameCount <= 0 || (i = this.framePointer) < 0) {
            return -1;
        }
        return getDelay(i);
    }

    public int getFrameCount() {
        return this.header.frameCount;
    }

    public int getCurrentFrameIndex() {
        return this.framePointer;
    }

    public void resetFrameIndex() {
        this.framePointer = -1;
    }

    public int getLoopCount() {
        return this.header.loopCount;
    }

    public synchronized Bitmap getNextFrame() {
        if (this.header.frameCount <= 0 || this.framePointer < 0) {
            if (Log.isLoggable(TAG, 3)) {
                Log.d(TAG, "unable to decode frame, frameCount=" + this.header.frameCount + " framePointer=" + this.framePointer);
            }
            this.status = 1;
        }
        if (this.status != 1 && this.status != 2) {
            int i = 0;
            this.status = 0;
            GifFrame gifFrame = this.header.frames.get(this.framePointer);
            int i2 = this.framePointer - 1;
            GifFrame gifFrame2 = i2 >= 0 ? this.header.frames.get(i2) : null;
            if (gifFrame.lct == null) {
                this.act = this.header.gct;
            } else {
                this.act = gifFrame.lct;
                if (this.header.bgIndex == gifFrame.transIndex) {
                    this.header.bgColor = 0;
                }
            }
            if (gifFrame.transparency) {
                int i3 = this.act[gifFrame.transIndex];
                this.act[gifFrame.transIndex] = 0;
                i = i3;
            }
            if (this.act == null) {
                if (Log.isLoggable(TAG, 3)) {
                    Log.d(TAG, "No Valid Color Table");
                }
                this.status = 1;
                return null;
            }
            Bitmap pixels = setPixels(gifFrame, gifFrame2);
            if (gifFrame.transparency) {
                this.act[gifFrame.transIndex] = i;
            }
            return pixels;
        }
        if (Log.isLoggable(TAG, 3)) {
            Log.d(TAG, "Unable to decode frame, status=" + this.status);
        }
        return null;
    }

    public int read(InputStream inputStream, int i) {
        if (inputStream != null) {
            try {
                ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream(i > 0 ? i + 4096 : 16384);
                byte[] bArr = new byte[16384];
                while (true) {
                    int i2 = inputStream.read(bArr, 0, 16384);
                    if (i2 == -1) {
                        break;
                    }
                    byteArrayOutputStream.write(bArr, 0, i2);
                }
                byteArrayOutputStream.flush();
                read(byteArrayOutputStream.toByteArray());
            } catch (IOException e) {
                Log.w(TAG, "Error reading data from stream", e);
            }
        } else {
            this.status = 2;
        }
        if (inputStream != null) {
            try {
                inputStream.close();
            } catch (IOException e2) {
                Log.w(TAG, "Error closing stream", e2);
            }
        }
        return this.status;
    }

    public void clear() {
        this.header = null;
        this.data = null;
        this.mainPixels = null;
        this.mainScratch = null;
        Bitmap bitmap = this.previousImage;
        if (bitmap != null) {
            this.bitmapProvider.release(bitmap);
        }
        this.previousImage = null;
        this.rawData = null;
    }

    public void setData(GifHeader gifHeader, byte[] bArr) {
        this.header = gifHeader;
        this.data = bArr;
        this.status = 0;
        this.framePointer = -1;
        ByteBuffer byteBufferWrap = ByteBuffer.wrap(bArr);
        this.rawData = byteBufferWrap;
        byteBufferWrap.rewind();
        this.rawData.order(ByteOrder.LITTLE_ENDIAN);
        this.savePrevious = false;
        Iterator<GifFrame> it = gifHeader.frames.iterator();
        while (true) {
            if (!it.hasNext()) {
                break;
            } else if (it.next().dispose == 3) {
                this.savePrevious = true;
                break;
            }
        }
        this.mainPixels = new byte[gifHeader.width * gifHeader.height];
        this.mainScratch = new int[gifHeader.width * gifHeader.height];
    }

    private GifHeaderParser getHeaderParser() {
        if (this.parser == null) {
            this.parser = new GifHeaderParser();
        }
        return this.parser;
    }

    public int read(byte[] bArr) {
        this.data = bArr;
        this.header = getHeaderParser().setData(bArr).parseHeader();
        if (bArr != null) {
            ByteBuffer byteBufferWrap = ByteBuffer.wrap(bArr);
            this.rawData = byteBufferWrap;
            byteBufferWrap.rewind();
            this.rawData.order(ByteOrder.LITTLE_ENDIAN);
            this.mainPixels = new byte[this.header.width * this.header.height];
            this.mainScratch = new int[this.header.width * this.header.height];
            this.savePrevious = false;
            Iterator<GifFrame> it = this.header.frames.iterator();
            while (true) {
                if (!it.hasNext()) {
                    break;
                }
                if (it.next().dispose == 3) {
                    this.savePrevious = true;
                    break;
                }
            }
        }
        return this.status;
    }

    private Bitmap setPixels(GifFrame gifFrame, GifFrame gifFrame2) {
        int i;
        int i2;
        Bitmap bitmap;
        int i3 = this.header.width;
        int i4 = this.header.height;
        int[] iArr = this.mainScratch;
        int i5 = 0;
        if (gifFrame2 == null || gifFrame2.dispose <= 0) {
            i = 2;
        } else {
            if (gifFrame2.dispose == 2) {
                Arrays.fill(iArr, !gifFrame.transparency ? this.header.bgColor : 0);
            } else if (gifFrame2.dispose == 3 && (bitmap = this.previousImage) != null) {
                i = 2;
                bitmap.getPixels(iArr, 0, i3, 0, 0, i3, i4);
            }
            i = 2;
        }
        decodeBitmapData(gifFrame);
        int i6 = 8;
        int i7 = 0;
        int i8 = 1;
        while (i5 < gifFrame.ih) {
            if (gifFrame.interlace) {
                if (i7 >= gifFrame.ih) {
                    i8++;
                    if (i8 == i) {
                        i7 = 4;
                    } else if (i8 == 3) {
                        i6 = 4;
                        i7 = 2;
                    } else if (i8 == 4) {
                        i6 = 2;
                        i7 = 1;
                    }
                }
                i2 = i7 + i6;
            } else {
                i2 = i7;
                i7 = i5;
            }
            int i9 = i7 + gifFrame.iy;
            if (i9 < this.header.height) {
                int i10 = i9 * this.header.width;
                int i11 = gifFrame.ix + i10;
                int i12 = gifFrame.iw + i11;
                if (this.header.width + i10 < i12) {
                    i12 = this.header.width + i10;
                }
                int i13 = gifFrame.iw * i5;
                while (i11 < i12) {
                    int i14 = i13 + 1;
                    int i15 = this.act[this.mainPixels[i13] & UByte.MAX_VALUE];
                    if (i15 != 0) {
                        iArr[i11] = i15;
                    }
                    i11++;
                    i13 = i14;
                }
            }
            i5++;
            i7 = i2;
        }
        if (this.savePrevious && (gifFrame.dispose == 0 || gifFrame.dispose == 1)) {
            if (this.previousImage == null) {
                this.previousImage = getNextBitmap();
            }
            this.previousImage.setPixels(iArr, 0, i3, 0, 0, i3, i4);
        }
        Bitmap nextBitmap = getNextBitmap();
        nextBitmap.setPixels(iArr, 0, i3, 0, 0, i3, i4);
        return nextBitmap;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:58:0x0132 A[PHI: r3
      0x0132: PHI (r3v11 int) = (r3v7 int), (r3v13 int) binds: [B:52:0x011a, B:54:0x0127] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Type inference failed for: r2v22 */
    /* JADX WARN: Type inference failed for: r2v23 */
    /* JADX WARN: Type inference failed for: r2v24 */
    /* JADX WARN: Type inference failed for: r2v28, types: [short] */
    /* JADX WARN: Type inference failed for: r2v30 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void decodeBitmapData(com.bumptech.glide.gifdecoder.GifFrame r27) {
        /*
            Method dump skipped, instruction units count: 377
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.bumptech.glide.gifdecoder.GifDecoder.decodeBitmapData(com.bumptech.glide.gifdecoder.GifFrame):void");
    }

    private int read() {
        try {
            return this.rawData.get() & UByte.MAX_VALUE;
        } catch (Exception unused) {
            this.status = 1;
            return 0;
        }
    }

    private int readBlock() {
        int i = read();
        int i2 = 0;
        if (i > 0) {
            while (i2 < i) {
                int i3 = i - i2;
                try {
                    this.rawData.get(this.block, i2, i3);
                    i2 += i3;
                } catch (Exception e) {
                    Log.w(TAG, "Error Reading Block", e);
                    this.status = 1;
                }
            }
        }
        return i2;
    }

    private Bitmap getNextBitmap() {
        Bitmap bitmapObtain = this.bitmapProvider.obtain(this.header.width, this.header.height, BITMAP_CONFIG);
        if (bitmapObtain == null) {
            bitmapObtain = Bitmap.createBitmap(this.header.width, this.header.height, BITMAP_CONFIG);
        }
        setAlpha(bitmapObtain);
        return bitmapObtain;
    }

    private static void setAlpha(Bitmap bitmap) {
        if (Build.VERSION.SDK_INT >= 12) {
            bitmap.setHasAlpha(true);
        }
    }
}

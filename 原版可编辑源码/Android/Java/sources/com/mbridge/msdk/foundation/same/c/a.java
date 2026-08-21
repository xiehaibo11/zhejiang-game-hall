package com.mbridge.msdk.foundation.same.c;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.tools.x;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.InputStream;

public final class a {
    public static Bitmap a(String str) {
        Bitmap bitmapDecodeFile = null;
        if (!x.a(str)) {
            return null;
        }
        BitmapFactory.Options options = new BitmapFactory.Options();
        try {
            options.inJustDecodeBounds = true;
            BitmapFactory.decodeFile(str, options);
            options.inJustDecodeBounds = false;
            options.inPurgeable = true;
            options.inInputShareable = true;
            options.inDither = true;
            return BitmapFactory.decodeFile(str, options);
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        } catch (OutOfMemoryError e2) {
            e2.printStackTrace();
            System.gc();
            b.b();
            try {
                options.inPreferredConfig = Bitmap.Config.RGB_565;
                bitmapDecodeFile = BitmapFactory.decodeFile(str, options);
                options.inPreferredConfig = Bitmap.Config.ARGB_8888;
                return bitmapDecodeFile;
            } catch (OutOfMemoryError e3) {
                e3.printStackTrace();
                return bitmapDecodeFile;
            }
        }
    }

    /* JADX WARN: Not initialized variable reg: 1, insn: 0x0041: MOVE (r0 I:??[OBJECT, ARRAY]) = (r1 I:??[OBJECT, ARRAY]), block:B:30:0x0041 */
    /* JADX WARN: Removed duplicated region for block: B:42:0x0044 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static InputStream a(Bitmap bitmap) throws Throwable {
        ByteArrayOutputStream byteArrayOutputStream;
        ByteArrayOutputStream byteArrayOutputStream2;
        ByteArrayOutputStream byteArrayOutputStream3 = null;
        try {
            try {
                byteArrayOutputStream = new ByteArrayOutputStream();
                try {
                    bitmap.compress(Bitmap.CompressFormat.JPEG, 100, byteArrayOutputStream);
                    ByteArrayInputStream byteArrayInputStream = new ByteArrayInputStream(byteArrayOutputStream.toByteArray());
                    try {
                        byteArrayOutputStream.close();
                    } catch (Exception e) {
                        if (MBridgeConstans.DEBUG) {
                            e.printStackTrace();
                        }
                    }
                    return byteArrayInputStream;
                } catch (Exception e2) {
                    e = e2;
                    if (MBridgeConstans.DEBUG) {
                        e.printStackTrace();
                    }
                    if (byteArrayOutputStream == null) {
                        return null;
                    }
                    try {
                        byteArrayOutputStream.close();
                        return null;
                    } catch (Exception e3) {
                        if (!MBridgeConstans.DEBUG) {
                            return null;
                        }
                        e3.printStackTrace();
                        return null;
                    }
                }
            } catch (Throwable th) {
                th = th;
                byteArrayOutputStream3 = byteArrayOutputStream2;
                if (byteArrayOutputStream3 != null) {
                    try {
                        byteArrayOutputStream3.close();
                    } catch (Exception e4) {
                        if (MBridgeConstans.DEBUG) {
                            e4.printStackTrace();
                        }
                    }
                }
                throw th;
            }
        } catch (Exception e5) {
            e = e5;
            byteArrayOutputStream = null;
        } catch (Throwable th2) {
            th = th2;
            if (byteArrayOutputStream3 != null) {
            }
            throw th;
        }
    }
}

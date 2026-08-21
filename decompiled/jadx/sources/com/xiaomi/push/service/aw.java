package com.xiaomi.push.service;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.net.Uri;
import java.io.BufferedOutputStream;
import java.io.ByteArrayInputStream;
import java.io.Closeable;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;

/* JADX INFO: loaded from: classes4.dex */
public class aw {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static long f8318a;

    public class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        int f8319a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        byte[] f924a;

        public a(byte[] bArr, int i) {
            this.f924a = bArr;
            this.f8319a = i;
        }
    }

    public class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public long f8320a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        public Bitmap f925a;

        public b(Bitmap bitmap, long j) {
            this.f925a = bitmap;
            this.f8320a = j;
        }
    }

    private static int a(Context context, InputStream inputStream) {
        BitmapFactory.Options options = new BitmapFactory.Options();
        options.inJustDecodeBounds = true;
        BitmapFactory.decodeStream(inputStream, null, options);
        if (options.outWidth == -1 || options.outHeight == -1) {
            com.xiaomi.channel.commonutils.logger.b.m43a("decode dimension failed for bitmap.");
            return 1;
        }
        int iRound = Math.round((context.getResources().getDisplayMetrics().densityDpi / 160.0f) * 48.0f);
        if (options.outWidth <= iRound || options.outHeight <= iRound) {
            return 1;
        }
        return Math.min(options.outWidth / iRound, options.outHeight / iRound);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v0 */
    /* JADX WARN: Type inference failed for: r0v1 */
    /* JADX WARN: Type inference failed for: r0v2, types: [java.io.Closeable] */
    /* JADX WARN: Type inference failed for: r0v3 */
    public static Bitmap a(Context context, String str) throws Throwable {
        InputStream inputStreamOpenInputStream;
        InputStream inputStreamOpenInputStream2;
        Uri uri = Uri.parse(str);
        ?? r0 = 0;
        r0 = 0;
        try {
            try {
                inputStreamOpenInputStream = context.getContentResolver().openInputStream(uri);
            } catch (Throwable th) {
                th = th;
                r0 = context;
            }
        } catch (IOException e) {
            e = e;
            inputStreamOpenInputStream2 = null;
            inputStreamOpenInputStream = null;
        } catch (Throwable th2) {
            th = th2;
            inputStreamOpenInputStream = null;
        }
        try {
            int iA = a(context, inputStreamOpenInputStream);
            inputStreamOpenInputStream2 = context.getContentResolver().openInputStream(uri);
            try {
                BitmapFactory.Options options = new BitmapFactory.Options();
                options.inSampleSize = iA;
                Bitmap bitmapDecodeStream = BitmapFactory.decodeStream(inputStreamOpenInputStream2, null, options);
                com.xiaomi.push.ab.a(inputStreamOpenInputStream2);
                com.xiaomi.push.ab.a(inputStreamOpenInputStream);
                return bitmapDecodeStream;
            } catch (IOException e2) {
                e = e2;
                com.xiaomi.channel.commonutils.logger.b.a(e);
                com.xiaomi.push.ab.a(inputStreamOpenInputStream2);
                com.xiaomi.push.ab.a(inputStreamOpenInputStream);
                return null;
            }
        } catch (IOException e3) {
            e = e3;
            inputStreamOpenInputStream2 = null;
        } catch (Throwable th3) {
            th = th3;
            com.xiaomi.push.ab.a((Closeable) r0);
            com.xiaomi.push.ab.a(inputStreamOpenInputStream);
            throw th;
        }
    }

    /* JADX WARN: Not initialized variable reg: 2, insn: 0x00ff: MOVE (r0 I:??[OBJECT, ARRAY]) = (r2 I:??[OBJECT, ARRAY]), block:B:64:0x00ff */
    /* JADX WARN: Removed duplicated region for block: B:56:0x00dd A[PHI: r1
      0x00dd: PHI (r1v5 java.net.HttpURLConnection) = (r1v4 java.net.HttpURLConnection), (r1v6 java.net.HttpURLConnection) binds: [B:55:0x00db, B:60:0x00fa] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static com.xiaomi.push.service.aw.a a(java.lang.String r10, boolean r11) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 265
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.service.aw.a(java.lang.String, boolean):com.xiaomi.push.service.aw$a");
    }

    public static b a(Context context, String str, boolean z) throws Throwable {
        a aVarA;
        ByteArrayInputStream byteArrayInputStream = null;
        b bVar = new b(null, 0L);
        Bitmap bitmapB = b(context, str);
        try {
            if (bitmapB != null) {
                bVar.f925a = bitmapB;
                return bVar;
            }
            try {
                aVarA = a(str, z);
            } catch (Exception e) {
                e = e;
            }
            if (aVarA == null) {
                com.xiaomi.push.ab.a((Closeable) null);
                return bVar;
            }
            bVar.f8320a = aVarA.f8319a;
            byte[] bArr = aVarA.f924a;
            if (bArr != null) {
                if (z) {
                    ByteArrayInputStream byteArrayInputStream2 = new ByteArrayInputStream(bArr);
                    try {
                        int iA = a(context, byteArrayInputStream2);
                        BitmapFactory.Options options = new BitmapFactory.Options();
                        options.inSampleSize = iA;
                        bVar.f925a = BitmapFactory.decodeByteArray(bArr, 0, bArr.length, options);
                        byteArrayInputStream = byteArrayInputStream2;
                    } catch (Exception e2) {
                        e = e2;
                        byteArrayInputStream = byteArrayInputStream2;
                        com.xiaomi.channel.commonutils.logger.b.a(e);
                    } catch (Throwable th) {
                        th = th;
                        byteArrayInputStream = byteArrayInputStream2;
                        com.xiaomi.push.ab.a(byteArrayInputStream);
                        throw th;
                    }
                } else {
                    bVar.f925a = BitmapFactory.decodeByteArray(bArr, 0, bArr.length);
                }
            }
            a(context, aVarA.f924a, str);
            com.xiaomi.push.ab.a(byteArrayInputStream);
            return bVar;
            com.xiaomi.channel.commonutils.logger.b.a(e);
            com.xiaomi.push.ab.a(byteArrayInputStream);
            return bVar;
        } catch (Throwable th2) {
            th = th2;
        }
    }

    private static void a(Context context) {
        File file = new File(context.getCacheDir().getPath() + File.separator + "mipush_icon");
        if (file.exists()) {
            if (f8318a == 0) {
                f8318a = com.xiaomi.push.aa.a(file);
            }
            if (f8318a > 15728640) {
                try {
                    File[] fileArrListFiles = file.listFiles();
                    for (int i = 0; i < fileArrListFiles.length; i++) {
                        if (!fileArrListFiles[i].isDirectory() && Math.abs(System.currentTimeMillis() - fileArrListFiles[i].lastModified()) > 1209600) {
                            fileArrListFiles[i].delete();
                        }
                    }
                } catch (Exception e) {
                    com.xiaomi.channel.commonutils.logger.b.a(e);
                }
                f8318a = 0L;
            }
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v0, types: [java.io.File] */
    /* JADX WARN: Type inference failed for: r0v1 */
    /* JADX WARN: Type inference failed for: r0v10 */
    /* JADX WARN: Type inference failed for: r0v11 */
    /* JADX WARN: Type inference failed for: r0v2 */
    /* JADX WARN: Type inference failed for: r0v3 */
    /* JADX WARN: Type inference failed for: r0v4, types: [java.io.Closeable] */
    /* JADX WARN: Type inference failed for: r0v5 */
    /* JADX WARN: Type inference failed for: r0v6, types: [java.io.Closeable] */
    /* JADX WARN: Type inference failed for: r0v9, types: [java.io.FileOutputStream, java.io.OutputStream] */
    private static void a(Context context, byte[] bArr, String str) throws Throwable {
        BufferedOutputStream bufferedOutputStream;
        if (bArr == null) {
            com.xiaomi.channel.commonutils.logger.b.m43a("cannot save small icon cause bitmap is null");
            return;
        }
        a(context);
        ?? file = new File(context.getCacheDir().getPath() + File.separator + "mipush_icon");
        if (!file.exists()) {
            file.mkdirs();
        }
        File file2 = new File((File) file, com.xiaomi.push.bp.a(str));
        BufferedOutputStream bufferedOutputStream2 = null;
        try {
            try {
                if (!file2.exists()) {
                    file2.createNewFile();
                }
                file = new FileOutputStream(file2);
                try {
                    bufferedOutputStream = new BufferedOutputStream(file);
                } catch (Exception e) {
                    e = e;
                }
            } catch (Throwable th) {
                th = th;
            }
        } catch (Exception e2) {
            e = e2;
            file = 0;
        } catch (Throwable th2) {
            th = th2;
            file = 0;
        }
        try {
            bufferedOutputStream.write(bArr);
            bufferedOutputStream.flush();
            com.xiaomi.push.ab.a(bufferedOutputStream);
            file = file;
        } catch (Exception e3) {
            e = e3;
            bufferedOutputStream2 = bufferedOutputStream;
            com.xiaomi.channel.commonutils.logger.b.a(e);
            com.xiaomi.push.ab.a(bufferedOutputStream2);
            file = file;
        } catch (Throwable th3) {
            th = th3;
            bufferedOutputStream2 = bufferedOutputStream;
            com.xiaomi.push.ab.a(bufferedOutputStream2);
            com.xiaomi.push.ab.a((Closeable) file);
            throw th;
        }
        com.xiaomi.push.ab.a((Closeable) file);
        if (f8318a == 0) {
            f8318a = com.xiaomi.push.aa.a(new File(context.getCacheDir().getPath() + File.separator + "mipush_icon")) + file2.length();
        }
    }

    private static Bitmap b(Context context, String str) throws Throwable {
        Throwable th;
        FileInputStream fileInputStream;
        Bitmap bitmap;
        File file = new File(context.getCacheDir().getPath() + File.separator + "mipush_icon", com.xiaomi.push.bp.a(str));
        FileInputStream fileInputStream2 = null;
        Bitmap bitmapDecodeStream = null;
        fileInputStream2 = null;
        if (!file.exists()) {
            return null;
        }
        try {
            try {
                fileInputStream = new FileInputStream(file);
            } catch (Exception e) {
                e = e;
                bitmap = null;
            }
        } catch (Throwable th2) {
            FileInputStream fileInputStream3 = fileInputStream2;
            th = th2;
            fileInputStream = fileInputStream3;
        }
        try {
            bitmapDecodeStream = BitmapFactory.decodeStream(fileInputStream);
            file.setLastModified(System.currentTimeMillis());
            com.xiaomi.push.ab.a(fileInputStream);
            return bitmapDecodeStream;
        } catch (Exception e2) {
            e = e2;
            Bitmap bitmap2 = bitmapDecodeStream;
            fileInputStream2 = fileInputStream;
            bitmap = bitmap2;
            com.xiaomi.channel.commonutils.logger.b.a(e);
            com.xiaomi.push.ab.a(fileInputStream2);
            return bitmap;
        } catch (Throwable th3) {
            th = th3;
            com.xiaomi.push.ab.a(fileInputStream);
            throw th;
        }
    }
}

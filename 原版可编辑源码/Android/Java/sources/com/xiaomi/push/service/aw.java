package com.xiaomi.push.service;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.net.Uri;
import com.kwad.sdk.collector.AppStatusRules;
import java.io.BufferedOutputStream;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.Closeable;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.SocketTimeoutException;
import java.net.URL;

public class aw {
    private static long a;

    public class a {
        int a;
        byte[] a;

        public a(byte[] bArr, int i) {
            this.a = bArr;
            this.a = i;
        }
    }

    public class b {
        public long a;
        public Bitmap a;

        public b(Bitmap bitmap, long j) {
            this.a = bitmap;
            this.a = j;
        }
    }

    private static int a(Context context, InputStream inputStream) {
        BitmapFactory.Options options = new BitmapFactory.Options();
        options.inJustDecodeBounds = true;
        BitmapFactory.decodeStream(inputStream, null, options);
        if (options.outWidth == -1 || options.outHeight == -1) {
            com.xiaomi.channel.commonutils.logger.b.a("decode dimension failed for bitmap.");
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
    */
    private static a a(String str, boolean z) throws Throwable {
        HttpURLConnection httpURLConnection;
        InputStream inputStream;
        Closeable closeable;
        Closeable closeable2 = null;
        try {
            try {
                httpURLConnection = (HttpURLConnection) new URL(str).openConnection();
            } catch (Throwable th) {
                th = th;
                closeable2 = closeable;
            }
            try {
                httpURLConnection.setConnectTimeout(8000);
                httpURLConnection.setReadTimeout(20000);
                httpURLConnection.setRequestProperty("User-agent", "Mozilla/5.0 (Linux; U;) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/71.0.3578.141 Mobile Safari/537.36 XiaoMi/MiuiBrowser");
                httpURLConnection.connect();
                int contentLength = httpURLConnection.getContentLength();
                if (z && contentLength > 102400) {
                    com.xiaomi.channel.commonutils.logger.b.a("Bitmap size is too big, max size is 102400  contentLen size is " + contentLength + " from url " + str);
                    com.xiaomi.push.ab.a((Closeable) null);
                    if (httpURLConnection != null) {
                        httpURLConnection.disconnect();
                    }
                    return null;
                }
                int responseCode = httpURLConnection.getResponseCode();
                if (responseCode != 200) {
                    com.xiaomi.channel.commonutils.logger.b.a("Invalid Http Response Code " + responseCode + " received");
                    com.xiaomi.push.ab.a((Closeable) null);
                    if (httpURLConnection != null) {
                        httpURLConnection.disconnect();
                    }
                    return null;
                }
                inputStream = httpURLConnection.getInputStream();
                try {
                    ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
                    int i = z ? 102400 : 2048000;
                    byte[] bArr = new byte[1024];
                    while (i > 0) {
                        int i2 = inputStream.read(bArr, 0, 1024);
                        if (i2 == -1) {
                            break;
                        }
                        i -= i2;
                        byteArrayOutputStream.write(bArr, 0, i2);
                    }
                    if (i <= 0) {
                        com.xiaomi.channel.commonutils.logger.b.a("length 102400 exhausted.");
                        a aVar = new a(null, AppStatusRules.UploadConfig.DEFAULT_FILE_MAX_SIZE);
                        com.xiaomi.push.ab.a(inputStream);
                        if (httpURLConnection != null) {
                            httpURLConnection.disconnect();
                        }
                        return aVar;
                    }
                    byte[] byteArray = byteArrayOutputStream.toByteArray();
                    a aVar2 = new a(byteArray, byteArray.length);
                    com.xiaomi.push.ab.a(inputStream);
                    if (httpURLConnection != null) {
                        httpURLConnection.disconnect();
                    }
                    return aVar2;
                } catch (SocketTimeoutException unused) {
                    com.xiaomi.channel.commonutils.logger.b.d("Connect timeout to " + str);
                    com.xiaomi.push.ab.a(inputStream);
                    if (httpURLConnection != null) {
                        httpURLConnection.disconnect();
                    }
                    return null;
                } catch (IOException e) {
                    e = e;
                    com.xiaomi.channel.commonutils.logger.b.a(e);
                    com.xiaomi.push.ab.a(inputStream);
                    if (httpURLConnection != null) {
                    }
                    return null;
                }
            } catch (SocketTimeoutException unused2) {
                inputStream = null;
            } catch (IOException e2) {
                e = e2;
                inputStream = null;
            } catch (Throwable th2) {
                th = th2;
                com.xiaomi.push.ab.a(closeable2);
                if (httpURLConnection != null) {
                    httpURLConnection.disconnect();
                }
                throw th;
            }
        } catch (SocketTimeoutException unused3) {
            httpURLConnection = null;
            inputStream = null;
        } catch (IOException e3) {
            e = e3;
            httpURLConnection = null;
            inputStream = null;
        } catch (Throwable th3) {
            th = th3;
            httpURLConnection = null;
        }
    }

    public static b a(Context context, String str, boolean z) throws Throwable {
        a aVarA;
        ByteArrayInputStream byteArrayInputStream = null;
        b bVar = new b(null, 0L);
        Bitmap bitmapB = b(context, str);
        try {
            if (bitmapB != null) {
                bVar.a = bitmapB;
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
            bVar.a = aVarA.a;
            byte[] bArr = aVarA.a;
            if (bArr != null) {
                if (z) {
                    ByteArrayInputStream byteArrayInputStream2 = new ByteArrayInputStream(bArr);
                    try {
                        int iA = a(context, byteArrayInputStream2);
                        BitmapFactory.Options options = new BitmapFactory.Options();
                        options.inSampleSize = iA;
                        bVar.a = BitmapFactory.decodeByteArray(bArr, 0, bArr.length, options);
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
                    bVar.a = BitmapFactory.decodeByteArray(bArr, 0, bArr.length);
                }
            }
            a(context, aVarA.a, str);
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
            if (a == 0) {
                a = com.xiaomi.push.aa.a(file);
            }
            if (a > 15728640) {
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
                a = 0L;
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
            com.xiaomi.channel.commonutils.logger.b.a("cannot save small icon cause bitmap is null");
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
        if (a == 0) {
            a = com.xiaomi.push.aa.a(new File(context.getCacheDir().getPath() + File.separator + "mipush_icon")) + file2.length();
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

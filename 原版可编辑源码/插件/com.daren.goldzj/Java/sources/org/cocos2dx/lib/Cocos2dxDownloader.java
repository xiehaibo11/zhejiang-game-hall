package org.cocos2dx.lib;

import android.util.Log;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.net.URI;
import java.net.URISyntaxException;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Map;
import java.util.Queue;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.TimeUnit;
import org.cocos2dx.okhttp3.Call;
import org.cocos2dx.okhttp3.Callback;
import org.cocos2dx.okhttp3.OkHttpClient;
import org.cocos2dx.okhttp3.Request;
import org.cocos2dx.okhttp3.Response;

public class Cocos2dxDownloader {
    private static ConcurrentHashMap<String, Boolean> _resumingSupport = new ConcurrentHashMap<>();
    private int _countOfMaxProcessingTasks;
    private int _id;
    private String _tempFileNameSuffix;
    private OkHttpClient _httpClient = null;
    private ConcurrentHashMap<Integer, Call> _taskMap = new ConcurrentHashMap<>();
    private Queue<Runnable> _taskQueue = new LinkedList();
    private int _runningTaskCount = 0;

    native void nativeOnFinish(int i, int i2, int i3, String str, byte[] bArr);

    native void nativeOnProgress(int i, int i2, long j, long j2, long j3);

    private void onProgress(final int i, final long j, final long j2, final long j3) {
        Cocos2dxHelper.runOnGLThread(new Runnable() {
            @Override
            public void run() {
                Cocos2dxDownloader cocos2dxDownloader = Cocos2dxDownloader.this;
                cocos2dxDownloader.nativeOnProgress(cocos2dxDownloader._id, i, j, j2, j3);
            }
        });
    }

    private void onFinish(final int i, final int i2, final String str, final byte[] bArr) {
        if (this._taskMap.get(Integer.valueOf(i)) == null) {
            return;
        }
        this._taskMap.remove(Integer.valueOf(i));
        this._runningTaskCount--;
        Cocos2dxHelper.runOnGLThread(new Runnable() {
            @Override
            public void run() {
                Cocos2dxDownloader cocos2dxDownloader = Cocos2dxDownloader.this;
                cocos2dxDownloader.nativeOnFinish(cocos2dxDownloader._id, i, i2, str, bArr);
            }
        });
        runNextTaskIfExists();
    }

    public static Cocos2dxDownloader createDownloader(int i, int i2, String str, int i3) {
        Cocos2dxDownloader cocos2dxDownloader = new Cocos2dxDownloader();
        cocos2dxDownloader._id = i;
        if (i2 > 0) {
            cocos2dxDownloader._httpClient = new OkHttpClient().newBuilder().followRedirects(true).followSslRedirects(true).callTimeout(i2, TimeUnit.SECONDS).build();
        } else {
            cocos2dxDownloader._httpClient = new OkHttpClient().newBuilder().followRedirects(true).followSslRedirects(true).build();
        }
        cocos2dxDownloader._tempFileNameSuffix = str;
        cocos2dxDownloader._countOfMaxProcessingTasks = i3;
        return cocos2dxDownloader;
    }

    class 3 implements Runnable {
        final Cocos2dxDownloader val$downloader;
        final String[] val$header;
        final int val$id;
        final String val$path;
        final String val$url;
        String domain = null;
        String host = null;
        File tempFile = null;
        File finalFile = null;
        long downloadStart = 0;

        3(String str, String str2, Cocos2dxDownloader cocos2dxDownloader, String[] strArr, int i) {
            this.val$path = str;
            this.val$url = str2;
            this.val$downloader = cocos2dxDownloader;
            this.val$header = strArr;
            this.val$id = i;
        }

        /* JADX WARN: Removed duplicated region for block: B:37:0x00d3 A[LOOP:0: B:35:0x00cc->B:37:0x00d3, LOOP_END] */
        /* JADX WARN: Removed duplicated region for block: B:40:0x00e7  */
        /* JADX WARN: Removed duplicated region for block: B:51:0x00e1 A[EDGE_INSN: B:51:0x00e1->B:38:0x00e1 BREAK  A[LOOP:0: B:35:0x00cc->B:37:0x00d3], SYNTHETIC] */
        @Override
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public void run() {
            Call callNewCall;
            Request.Builder builderUrl;
            int i;
            String[] strArr;
            if (this.val$path.length() > 0) {
                try {
                    this.domain = new URI(this.val$url).getHost();
                    this.tempFile = new File(this.val$path + this.val$downloader._tempFileNameSuffix);
                    if (!this.tempFile.isDirectory()) {
                        File parentFile = this.tempFile.getParentFile();
                        if (parentFile.isDirectory() || parentFile.mkdirs()) {
                            this.finalFile = new File(this.val$path);
                            if (!this.finalFile.isDirectory()) {
                                long length = this.tempFile.length();
                                this.host = this.domain.startsWith("www.") ? this.domain.substring(4) : this.domain;
                                if (length > 0) {
                                    if (Cocos2dxDownloader._resumingSupport.containsKey(this.host) && ((Boolean) Cocos2dxDownloader._resumingSupport.get(this.host)).booleanValue()) {
                                        this.downloadStart = length;
                                    } else {
                                        try {
                                            PrintWriter printWriter = new PrintWriter(this.tempFile);
                                            printWriter.print("");
                                            printWriter.close();
                                        } catch (FileNotFoundException unused) {
                                        }
                                    }
                                }
                                builderUrl = new Request.Builder().url(this.val$url);
                                i = 0;
                                while (true) {
                                    strArr = this.val$header;
                                    if (i < strArr.length / 2) {
                                        break;
                                    }
                                    int i2 = i * 2;
                                    builderUrl.addHeader(strArr[i2], strArr[i2 + 1]);
                                    i++;
                                }
                                if (this.downloadStart > 0) {
                                    builderUrl.addHeader("RANGE", "bytes=" + this.downloadStart + "-");
                                }
                                callNewCall = this.val$downloader._httpClient.newCall(builderUrl.build());
                                callNewCall.enqueue(new Callback() {
                                    @Override
                                    public void onFailure(Call call, IOException iOException) {
                                        3.this.val$downloader.onFinish(3.this.val$id, 0, iOException.toString(), null);
                                    }

                                    /* JADX WARN: Removed duplicated region for block: B:104:0x021c A[Catch: IOException -> 0x0218, TRY_LEAVE, TryCatch #1 {IOException -> 0x0218, blocks: (B:100:0x0214, B:104:0x021c), top: B:109:0x0214 }] */
                                    /* JADX WARN: Removed duplicated region for block: B:109:0x0214 A[EXC_TOP_SPLITTER, SYNTHETIC] */
                                    /* JADX WARN: Removed duplicated region for block: B:121:? A[RETURN, SYNTHETIC] */
                                    /* JADX WARN: Removed duplicated region for block: B:122:? A[RETURN, SYNTHETIC] */
                                    /* JADX WARN: Removed duplicated region for block: B:125:? A[SYNTHETIC] */
                                    /* JADX WARN: Removed duplicated region for block: B:40:0x0104 A[Catch: IOException -> 0x0126, all -> 0x0210, TryCatch #0 {all -> 0x0210, blocks: (B:26:0x0098, B:28:0x009e, B:29:0x00ba, B:31:0x00c7, B:40:0x0104, B:41:0x0119, B:34:0x00d2, B:36:0x00dc, B:37:0x00f6, B:87:0x01e7), top: B:108:0x0009 }] */
                                    /* JADX WARN: Removed duplicated region for block: B:41:0x0119 A[Catch: IOException -> 0x0126, all -> 0x0210, TRY_LEAVE, TryCatch #0 {all -> 0x0210, blocks: (B:26:0x0098, B:28:0x009e, B:29:0x00ba, B:31:0x00c7, B:40:0x0104, B:41:0x0119, B:34:0x00d2, B:36:0x00dc, B:37:0x00f6, B:87:0x01e7), top: B:108:0x0009 }] */
                                    /* JADX WARN: Removed duplicated region for block: B:59:0x0181 A[Catch: IOException -> 0x0200, TRY_ENTER, TryCatch #7 {IOException -> 0x0200, blocks: (B:59:0x0181, B:61:0x0186, B:89:0x01fc, B:93:0x0204), top: B:112:0x0009 }] */
                                    /* JADX WARN: Removed duplicated region for block: B:61:0x0186 A[Catch: IOException -> 0x0200, TRY_LEAVE, TryCatch #7 {IOException -> 0x0200, blocks: (B:59:0x0181, B:61:0x0186, B:89:0x01fc, B:93:0x0204), top: B:112:0x0009 }] */
                                    /* JADX WARN: Removed duplicated region for block: B:89:0x01fc A[Catch: IOException -> 0x0200, TRY_ENTER, TryCatch #7 {IOException -> 0x0200, blocks: (B:59:0x0181, B:61:0x0186, B:89:0x01fc, B:93:0x0204), top: B:112:0x0009 }] */
                                    /* JADX WARN: Removed duplicated region for block: B:93:0x0204 A[Catch: IOException -> 0x0200, TRY_LEAVE, TryCatch #7 {IOException -> 0x0200, blocks: (B:59:0x0181, B:61:0x0186, B:89:0x01fc, B:93:0x0204), top: B:112:0x0009 }] */
                                    @Override
                                    /*
                                        Code decompiled incorrectly, please refer to instructions dump.
                                    */
                                    public void onResponse(Call call, Response response) throws Throwable {
                                        Throwable th;
                                        InputStream inputStream;
                                        FileOutputStream fileOutputStream;
                                        FileOutputStream fileOutputStream2;
                                        ByteArrayOutputStream byteArrayOutputStream;
                                        FileOutputStream fileOutputStream3;
                                        String str;
                                        byte[] bArr = new byte[4096];
                                        try {
                                            try {
                                                try {
                                                } catch (Throwable th2) {
                                                    th = th2;
                                                }
                                            } catch (IOException e) {
                                                e = e;
                                                inputStream = null;
                                            } catch (Throwable th3) {
                                                th = th3;
                                                inputStream = null;
                                            }
                                            if (response.code() >= 200 && response.code() <= 206) {
                                                long jContentLength = response.body().contentLength();
                                                if (3.this.val$path.length() > 0 && !Cocos2dxDownloader._resumingSupport.containsKey(3.this.host)) {
                                                    if (jContentLength > 0) {
                                                        Cocos2dxDownloader._resumingSupport.put(3.this.host, true);
                                                    } else {
                                                        Cocos2dxDownloader._resumingSupport.put(3.this.host, false);
                                                    }
                                                }
                                                long j = 3.this.downloadStart;
                                                InputStream inputStreamByteStream = response.body().byteStream();
                                                try {
                                                    if (3.this.val$path.length() <= 0) {
                                                        inputStream = inputStreamByteStream;
                                                        try {
                                                            if (jContentLength > 0) {
                                                                byteArrayOutputStream = new ByteArrayOutputStream((int) jContentLength);
                                                            } else {
                                                                byteArrayOutputStream = new ByteArrayOutputStream(4096);
                                                            }
                                                            while (true) {
                                                                int i3 = inputStream.read(bArr);
                                                                if (i3 == -1) {
                                                                    break;
                                                                }
                                                                long j2 = i3;
                                                                long j3 = j + j2;
                                                                byteArrayOutputStream.write(bArr, 0, i3);
                                                                3.this.val$downloader.onProgress(3.this.val$id, j2, j3, jContentLength);
                                                                j = j3;
                                                                jContentLength = jContentLength;
                                                            }
                                                            3.this.val$downloader.onFinish(3.this.val$id, 0, null, byteArrayOutputStream.toByteArray());
                                                            3.this.val$downloader.runNextTaskIfExists();
                                                            fileOutputStream2 = null;
                                                            if (inputStream != null) {
                                                            }
                                                            if (fileOutputStream2 == null) {
                                                            }
                                                        } catch (IOException e2) {
                                                            e = e2;
                                                            fileOutputStream2 = null;
                                                            e.printStackTrace();
                                                            3.this.val$downloader.onFinish(3.this.val$id, 0, e.toString(), null);
                                                            if (inputStream != null) {
                                                            }
                                                            if (fileOutputStream2 != null) {
                                                            }
                                                        } catch (Throwable th4) {
                                                            th = th4;
                                                            th = th;
                                                            fileOutputStream = null;
                                                            if (inputStream != null) {
                                                            }
                                                            if (0 != 0) {
                                                            }
                                                        }
                                                    } else {
                                                        try {
                                                            if (3.this.downloadStart > 0) {
                                                                fileOutputStream3 = new FileOutputStream(3.this.tempFile, true);
                                                            } else {
                                                                fileOutputStream3 = new FileOutputStream(3.this.tempFile, false);
                                                            }
                                                            inputStream = inputStreamByteStream;
                                                            fileOutputStream2 = fileOutputStream3;
                                                            while (true) {
                                                                try {
                                                                    int i4 = inputStream.read(bArr);
                                                                    if (i4 == -1) {
                                                                        break;
                                                                    }
                                                                    long j4 = i4;
                                                                    long j5 = j + j4;
                                                                    fileOutputStream2.write(bArr, 0, i4);
                                                                    3.this.val$downloader.onProgress(3.this.val$id, j4, j5, jContentLength);
                                                                    j = j5;
                                                                    jContentLength = jContentLength;
                                                                } catch (IOException e3) {
                                                                    e = e3;
                                                                    e.printStackTrace();
                                                                    3.this.val$downloader.onFinish(3.this.val$id, 0, e.toString(), null);
                                                                    if (inputStream != null) {
                                                                        inputStream.close();
                                                                    }
                                                                    if (fileOutputStream2 != null) {
                                                                        fileOutputStream2.close();
                                                                        return;
                                                                    }
                                                                    return;
                                                                }
                                                            }
                                                            fileOutputStream2.flush();
                                                            if (3.this.finalFile.exists()) {
                                                                if (3.this.finalFile.isDirectory()) {
                                                                    str = null;
                                                                    if (str != null) {
                                                                    }
                                                                } else {
                                                                    if (!3.this.finalFile.delete()) {
                                                                        str = "Can't remove old file:" + 3.this.finalFile.getAbsolutePath();
                                                                        if (str != null) {
                                                                        }
                                                                    }
                                                                    3.this.tempFile.renameTo(3.this.finalFile);
                                                                    str = null;
                                                                    if (str != null) {
                                                                    }
                                                                }
                                                            } else {
                                                                3.this.tempFile.renameTo(3.this.finalFile);
                                                                str = null;
                                                                if (str != null) {
                                                                    3.this.val$downloader.onFinish(3.this.val$id, 0, null, null);
                                                                    3.this.val$downloader.runNextTaskIfExists();
                                                                } else {
                                                                    3.this.val$downloader.onFinish(3.this.val$id, 0, str, null);
                                                                }
                                                            }
                                                            if (inputStream != null) {
                                                                inputStream.close();
                                                            }
                                                            if (fileOutputStream2 == null) {
                                                                fileOutputStream2.close();
                                                                return;
                                                            }
                                                            return;
                                                        } catch (IOException e4) {
                                                            e = e4;
                                                            inputStream = inputStreamByteStream;
                                                            fileOutputStream2 = null;
                                                            e.printStackTrace();
                                                            3.this.val$downloader.onFinish(3.this.val$id, 0, e.toString(), null);
                                                            if (inputStream != null) {
                                                            }
                                                            if (fileOutputStream2 != null) {
                                                            }
                                                        } catch (Throwable th5) {
                                                            th = th5;
                                                            inputStream = inputStreamByteStream;
                                                            th = th;
                                                            fileOutputStream = null;
                                                            if (inputStream != null) {
                                                            }
                                                            if (0 != 0) {
                                                            }
                                                        }
                                                    }
                                                } catch (IOException e5) {
                                                    e = e5;
                                                    inputStream = inputStreamByteStream;
                                                } catch (Throwable th6) {
                                                    th = th6;
                                                    inputStream = inputStreamByteStream;
                                                }
                                                if (inputStream != null) {
                                                    try {
                                                        inputStream.close();
                                                    } catch (IOException e6) {
                                                        Log.e("Cocos2dxDownloader", e6.toString());
                                                        throw th;
                                                    }
                                                }
                                                if (0 != 0) {
                                                    fileOutputStream.close();
                                                    throw th;
                                                }
                                                throw th;
                                            }
                                            if (response.code() == 416) {
                                                File file = new File(3.this.val$path + 3.this.val$downloader._tempFileNameSuffix);
                                                if (file.exists() && file.isFile()) {
                                                    file.delete();
                                                }
                                            }
                                            3.this.val$downloader.onFinish(3.this.val$id, -2, response.message(), null);
                                        } catch (IOException e7) {
                                            Log.e("Cocos2dxDownloader", e7.toString());
                                        }
                                    }
                                });
                            }
                        }
                    }
                } catch (NullPointerException e) {
                    e.printStackTrace();
                } catch (URISyntaxException e2) {
                    e2.printStackTrace();
                }
                callNewCall = null;
            } else {
                builderUrl = new Request.Builder().url(this.val$url);
                i = 0;
                while (true) {
                    strArr = this.val$header;
                    if (i < strArr.length / 2) {
                    }
                    int i22 = i * 2;
                    builderUrl.addHeader(strArr[i22], strArr[i22 + 1]);
                    i++;
                }
                if (this.downloadStart > 0) {
                }
                callNewCall = this.val$downloader._httpClient.newCall(builderUrl.build());
                callNewCall.enqueue(new Callback() {
                    @Override
                    public void onFailure(Call call, IOException iOException) {
                        3.this.val$downloader.onFinish(3.this.val$id, 0, iOException.toString(), null);
                    }

                    /* JADX WARN: Removed duplicated region for block: B:104:0x021c A[Catch: IOException -> 0x0218, TRY_LEAVE, TryCatch #1 {IOException -> 0x0218, blocks: (B:100:0x0214, B:104:0x021c), top: B:109:0x0214 }] */
                    /* JADX WARN: Removed duplicated region for block: B:109:0x0214 A[EXC_TOP_SPLITTER, SYNTHETIC] */
                    /* JADX WARN: Removed duplicated region for block: B:121:? A[RETURN, SYNTHETIC] */
                    /* JADX WARN: Removed duplicated region for block: B:122:? A[RETURN, SYNTHETIC] */
                    /* JADX WARN: Removed duplicated region for block: B:125:? A[SYNTHETIC] */
                    /* JADX WARN: Removed duplicated region for block: B:40:0x0104 A[Catch: IOException -> 0x0126, all -> 0x0210, TryCatch #0 {all -> 0x0210, blocks: (B:26:0x0098, B:28:0x009e, B:29:0x00ba, B:31:0x00c7, B:40:0x0104, B:41:0x0119, B:34:0x00d2, B:36:0x00dc, B:37:0x00f6, B:87:0x01e7), top: B:108:0x0009 }] */
                    /* JADX WARN: Removed duplicated region for block: B:41:0x0119 A[Catch: IOException -> 0x0126, all -> 0x0210, TRY_LEAVE, TryCatch #0 {all -> 0x0210, blocks: (B:26:0x0098, B:28:0x009e, B:29:0x00ba, B:31:0x00c7, B:40:0x0104, B:41:0x0119, B:34:0x00d2, B:36:0x00dc, B:37:0x00f6, B:87:0x01e7), top: B:108:0x0009 }] */
                    /* JADX WARN: Removed duplicated region for block: B:59:0x0181 A[Catch: IOException -> 0x0200, TRY_ENTER, TryCatch #7 {IOException -> 0x0200, blocks: (B:59:0x0181, B:61:0x0186, B:89:0x01fc, B:93:0x0204), top: B:112:0x0009 }] */
                    /* JADX WARN: Removed duplicated region for block: B:61:0x0186 A[Catch: IOException -> 0x0200, TRY_LEAVE, TryCatch #7 {IOException -> 0x0200, blocks: (B:59:0x0181, B:61:0x0186, B:89:0x01fc, B:93:0x0204), top: B:112:0x0009 }] */
                    /* JADX WARN: Removed duplicated region for block: B:89:0x01fc A[Catch: IOException -> 0x0200, TRY_ENTER, TryCatch #7 {IOException -> 0x0200, blocks: (B:59:0x0181, B:61:0x0186, B:89:0x01fc, B:93:0x0204), top: B:112:0x0009 }] */
                    /* JADX WARN: Removed duplicated region for block: B:93:0x0204 A[Catch: IOException -> 0x0200, TRY_LEAVE, TryCatch #7 {IOException -> 0x0200, blocks: (B:59:0x0181, B:61:0x0186, B:89:0x01fc, B:93:0x0204), top: B:112:0x0009 }] */
                    @Override
                    /*
                        Code decompiled incorrectly, please refer to instructions dump.
                    */
                    public void onResponse(Call call, Response response) throws Throwable {
                        Throwable th;
                        InputStream inputStream;
                        FileOutputStream fileOutputStream;
                        FileOutputStream fileOutputStream2;
                        ByteArrayOutputStream byteArrayOutputStream;
                        FileOutputStream fileOutputStream3;
                        String str;
                        byte[] bArr = new byte[4096];
                        try {
                            try {
                                try {
                                } catch (Throwable th2) {
                                    th = th2;
                                }
                            } catch (IOException e3) {
                                e = e3;
                                inputStream = null;
                            } catch (Throwable th3) {
                                th = th3;
                                inputStream = null;
                            }
                            if (response.code() >= 200 && response.code() <= 206) {
                                long jContentLength = response.body().contentLength();
                                if (3.this.val$path.length() > 0 && !Cocos2dxDownloader._resumingSupport.containsKey(3.this.host)) {
                                    if (jContentLength > 0) {
                                        Cocos2dxDownloader._resumingSupport.put(3.this.host, true);
                                    } else {
                                        Cocos2dxDownloader._resumingSupport.put(3.this.host, false);
                                    }
                                }
                                long j = 3.this.downloadStart;
                                InputStream inputStreamByteStream = response.body().byteStream();
                                try {
                                    if (3.this.val$path.length() <= 0) {
                                        inputStream = inputStreamByteStream;
                                        try {
                                            if (jContentLength > 0) {
                                                byteArrayOutputStream = new ByteArrayOutputStream((int) jContentLength);
                                            } else {
                                                byteArrayOutputStream = new ByteArrayOutputStream(4096);
                                            }
                                            while (true) {
                                                int i3 = inputStream.read(bArr);
                                                if (i3 == -1) {
                                                    break;
                                                }
                                                long j2 = i3;
                                                long j3 = j + j2;
                                                byteArrayOutputStream.write(bArr, 0, i3);
                                                3.this.val$downloader.onProgress(3.this.val$id, j2, j3, jContentLength);
                                                j = j3;
                                                jContentLength = jContentLength;
                                            }
                                            3.this.val$downloader.onFinish(3.this.val$id, 0, null, byteArrayOutputStream.toByteArray());
                                            3.this.val$downloader.runNextTaskIfExists();
                                            fileOutputStream2 = null;
                                            if (inputStream != null) {
                                            }
                                            if (fileOutputStream2 == null) {
                                            }
                                        } catch (IOException e22) {
                                            e = e22;
                                            fileOutputStream2 = null;
                                            e.printStackTrace();
                                            3.this.val$downloader.onFinish(3.this.val$id, 0, e.toString(), null);
                                            if (inputStream != null) {
                                            }
                                            if (fileOutputStream2 != null) {
                                            }
                                        } catch (Throwable th4) {
                                            th = th4;
                                            th = th;
                                            fileOutputStream = null;
                                            if (inputStream != null) {
                                            }
                                            if (0 != 0) {
                                            }
                                        }
                                    } else {
                                        try {
                                            if (3.this.downloadStart > 0) {
                                                fileOutputStream3 = new FileOutputStream(3.this.tempFile, true);
                                            } else {
                                                fileOutputStream3 = new FileOutputStream(3.this.tempFile, false);
                                            }
                                            inputStream = inputStreamByteStream;
                                            fileOutputStream2 = fileOutputStream3;
                                            while (true) {
                                                try {
                                                    int i4 = inputStream.read(bArr);
                                                    if (i4 == -1) {
                                                        break;
                                                    }
                                                    long j4 = i4;
                                                    long j5 = j + j4;
                                                    fileOutputStream2.write(bArr, 0, i4);
                                                    3.this.val$downloader.onProgress(3.this.val$id, j4, j5, jContentLength);
                                                    j = j5;
                                                    jContentLength = jContentLength;
                                                } catch (IOException e32) {
                                                    e = e32;
                                                    e.printStackTrace();
                                                    3.this.val$downloader.onFinish(3.this.val$id, 0, e.toString(), null);
                                                    if (inputStream != null) {
                                                        inputStream.close();
                                                    }
                                                    if (fileOutputStream2 != null) {
                                                        fileOutputStream2.close();
                                                        return;
                                                    }
                                                    return;
                                                }
                                            }
                                            fileOutputStream2.flush();
                                            if (3.this.finalFile.exists()) {
                                                if (3.this.finalFile.isDirectory()) {
                                                    str = null;
                                                    if (str != null) {
                                                    }
                                                } else {
                                                    if (!3.this.finalFile.delete()) {
                                                        str = "Can't remove old file:" + 3.this.finalFile.getAbsolutePath();
                                                        if (str != null) {
                                                        }
                                                    }
                                                    3.this.tempFile.renameTo(3.this.finalFile);
                                                    str = null;
                                                    if (str != null) {
                                                    }
                                                }
                                            } else {
                                                3.this.tempFile.renameTo(3.this.finalFile);
                                                str = null;
                                                if (str != null) {
                                                    3.this.val$downloader.onFinish(3.this.val$id, 0, null, null);
                                                    3.this.val$downloader.runNextTaskIfExists();
                                                } else {
                                                    3.this.val$downloader.onFinish(3.this.val$id, 0, str, null);
                                                }
                                            }
                                            if (inputStream != null) {
                                                inputStream.close();
                                            }
                                            if (fileOutputStream2 == null) {
                                                fileOutputStream2.close();
                                                return;
                                            }
                                            return;
                                        } catch (IOException e4) {
                                            e = e4;
                                            inputStream = inputStreamByteStream;
                                            fileOutputStream2 = null;
                                            e.printStackTrace();
                                            3.this.val$downloader.onFinish(3.this.val$id, 0, e.toString(), null);
                                            if (inputStream != null) {
                                            }
                                            if (fileOutputStream2 != null) {
                                            }
                                        } catch (Throwable th5) {
                                            th = th5;
                                            inputStream = inputStreamByteStream;
                                            th = th;
                                            fileOutputStream = null;
                                            if (inputStream != null) {
                                            }
                                            if (0 != 0) {
                                            }
                                        }
                                    }
                                } catch (IOException e5) {
                                    e = e5;
                                    inputStream = inputStreamByteStream;
                                } catch (Throwable th6) {
                                    th = th6;
                                    inputStream = inputStreamByteStream;
                                }
                                if (inputStream != null) {
                                    try {
                                        inputStream.close();
                                    } catch (IOException e6) {
                                        Log.e("Cocos2dxDownloader", e6.toString());
                                        throw th;
                                    }
                                }
                                if (0 != 0) {
                                    fileOutputStream.close();
                                    throw th;
                                }
                                throw th;
                            }
                            if (response.code() == 416) {
                                File file = new File(3.this.val$path + 3.this.val$downloader._tempFileNameSuffix);
                                if (file.exists() && file.isFile()) {
                                    file.delete();
                                }
                            }
                            3.this.val$downloader.onFinish(3.this.val$id, -2, response.message(), null);
                        } catch (IOException e7) {
                            Log.e("Cocos2dxDownloader", e7.toString());
                        }
                    }
                });
            }
            if (callNewCall != null) {
                this.val$downloader._taskMap.put(Integer.valueOf(this.val$id), callNewCall);
                return;
            }
            final String str = "Can't create DownloadTask for " + this.val$url;
            Cocos2dxHelper.runOnGLThread(new Runnable() {
                @Override
                public void run() {
                    3.this.val$downloader.nativeOnFinish(3.this.val$downloader._id, 3.this.val$id, 0, str, null);
                }
            });
        }
    }

    public static void createTask(Cocos2dxDownloader cocos2dxDownloader, int i, String str, String str2, String[] strArr) {
        cocos2dxDownloader.enqueueTask(new 3(str2, str, cocos2dxDownloader, strArr, i));
    }

    public static void abort(Cocos2dxDownloader cocos2dxDownloader, final int i) {
        Cocos2dxHelper.getActivity().runOnUiThread(new Runnable() {
            @Override
            public void run() {
                for (Map.Entry entry : Cocos2dxDownloader.this._taskMap.entrySet()) {
                    Object key = entry.getKey();
                    Call call = (Call) entry.getValue();
                    if (call != null && Integer.parseInt(key.toString()) == i) {
                        call.cancel();
                        Cocos2dxDownloader.this._taskMap.remove(Integer.valueOf(i));
                        Cocos2dxDownloader.this.runNextTaskIfExists();
                        return;
                    }
                }
            }
        });
    }

    public static void cancelAllRequests(Cocos2dxDownloader cocos2dxDownloader) {
        Cocos2dxHelper.getActivity().runOnUiThread(new Runnable() {
            @Override
            public void run() {
                Iterator it = Cocos2dxDownloader.this._taskMap.entrySet().iterator();
                while (it.hasNext()) {
                    Call call = (Call) ((Map.Entry) it.next()).getValue();
                    if (call != null) {
                        call.cancel();
                    }
                }
            }
        });
    }

    private void enqueueTask(Runnable runnable) {
        synchronized (this._taskQueue) {
            if (this._runningTaskCount < this._countOfMaxProcessingTasks) {
                Cocos2dxHelper.getActivity().runOnUiThread(runnable);
                this._runningTaskCount++;
            } else {
                this._taskQueue.add(runnable);
            }
        }
    }

    private void runNextTaskIfExists() {
        synchronized (this._taskQueue) {
            while (this._runningTaskCount < this._countOfMaxProcessingTasks && this._taskQueue.size() > 0) {
                Cocos2dxHelper.getActivity().runOnUiThread(this._taskQueue.poll());
                this._runningTaskCount++;
            }
        }
    }
}

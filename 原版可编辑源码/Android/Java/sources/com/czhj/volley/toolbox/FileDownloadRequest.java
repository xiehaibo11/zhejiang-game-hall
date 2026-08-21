package com.czhj.volley.toolbox;

import android.text.TextUtils;
import com.czhj.volley.DefaultRetryPolicy;
import com.czhj.volley.NetworkResponse;
import com.czhj.volley.Request;
import com.czhj.volley.Response;
import com.czhj.volley.VolleyError;
import com.czhj.volley.VolleyLog;
import com.kuaishou.weapon.p0.bh;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.RandomAccessFile;
import java.util.HashMap;
import java.util.Map;
import java.util.zip.GZIPInputStream;

public class FileDownloadRequest extends Request<DownloadItem> {
    private File a;
    private File b;
    private DownloadItem c;
    private long d;
    private final Object e;
    private FileDownloadListener f;

    public interface FileDownloadListener {
        void downloadProgress(DownloadItem downloadItem, long j, long j2);

        void onCancel(DownloadItem downloadItem);

        void onErrorResponse(DownloadItem downloadItem);

        void onSuccess(DownloadItem downloadItem);
    }

    public FileDownloadRequest(DownloadItem downloadItem, FileDownloadListener fileDownloadListener) {
        super(0, downloadItem.url, null);
        this.d = 0L;
        this.e = new Object();
        this.f = null;
        File file = new File(downloadItem.filePath);
        this.a = file;
        if (file.getParentFile() != null && !this.a.getParentFile().exists()) {
            this.a.getParentFile().mkdirs();
        }
        if (this.a.exists()) {
            this.a.delete();
        }
        this.c = downloadItem;
        this.b = new File(downloadItem.filePath + bh.k);
        if (!downloadItem.userRange) {
            this.b.delete();
        }
        this.f = fileDownloadListener;
        setRetryPolicy(new DefaultRetryPolicy(10000, 2, 0.0f));
        setShouldCache(false);
        VolleyLog.d("FileDownloadRequest()  [ %s ], url = [%s]", downloadItem.filePath, downloadItem.url);
    }

    @Override
    public void cancel() {
        super.cancel();
        synchronized (this.e) {
            this.f = null;
        }
    }

    @Override
    public void deliverError(VolleyError volleyError) {
        this.c.status = 0;
        if (this.a.exists()) {
            this.a.delete();
        }
        if (this.b.exists()) {
            this.b.delete();
        }
        this.c.error = volleyError;
        this.f.onErrorResponse(this.c);
    }

    @Override
    protected void deliverResponse(DownloadItem downloadItem) {
        this.c.status = 1;
        this.f.onSuccess(downloadItem);
    }

    @Override
    public Map<String, String> getHeaders() {
        HashMap map = new HashMap();
        this.d = this.b.length();
        map.put("Connection", "Keep-Alive");
        map.put("Accept-Encoding", "gzip");
        map.put("Range", "bytes=" + this.d + Constants.ACCEPT_TIME_SEPARATOR_SERVER);
        addMarker("Range,bytes=" + this.d + Constants.ACCEPT_TIME_SEPARATOR_SERVER);
        return map;
    }

    @Override
    public Request.Priority getPriority() {
        return Request.Priority.LOW;
    }

    /* JADX WARN: Code restructure failed: missing block: B:41:0x011c, code lost:
    
        com.czhj.volley.VolleyLog.v(r1.c.url + " download  is cancel", new java.lang.Object[r11]);
     */
    /* JADX WARN: Removed duplicated region for block: B:104:0x01ad A[EDGE_INSN: B:104:0x01ad->B:58:0x01ad BREAK  A[LOOP:0: B:36:0x010a->B:57:0x0184], SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:31:0x00fa A[Catch: all -> 0x01eb, TRY_ENTER, TryCatch #8 {all -> 0x01eb, blocks: (B:31:0x00fa, B:33:0x0102, B:32:0x00ff), top: B:100:0x00f8 }] */
    /* JADX WARN: Removed duplicated region for block: B:32:0x00ff A[Catch: all -> 0x01eb, TryCatch #8 {all -> 0x01eb, blocks: (B:31:0x00fa, B:33:0x0102, B:32:0x00ff), top: B:100:0x00f8 }] */
    /* JADX WARN: Removed duplicated region for block: B:39:0x0116 A[Catch: all -> 0x01e6, TRY_ENTER, TRY_LEAVE, TryCatch #2 {all -> 0x01e6, blocks: (B:35:0x0108, B:36:0x010a, B:39:0x0116, B:45:0x013c), top: B:88:0x0108 }] */
    /* JADX WARN: Removed duplicated region for block: B:92:0x01d5 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public byte[] handleRawResponse(HttpResponse httpResponse) throws IOException {
        long length;
        RandomAccessFile randomAccessFile;
        RandomAccessFile randomAccessFile2;
        InputStream content;
        byte[] bArr;
        int i;
        String str;
        String str2;
        String str3;
        FileDownloadRequest fileDownloadRequest = this;
        Map<String, String> mapConvertHeaders = FileDownloadNetwork.convertHeaders(httpResponse.getHeaders());
        boolean zIsSupportRange = HttpHeaderParser.isSupportRange(mapConvertHeaders);
        long contentLength = httpResponse.getContentLength();
        int i2 = -1;
        long j = 0;
        int i3 = 0;
        try {
            try {
                try {
                    if (!mapConvertHeaders.containsKey("Transfer-Encoding") || !mapConvertHeaders.get("Transfer-Encoding").equalsIgnoreCase("chunked")) {
                        if (contentLength < 0 || !mapConvertHeaders.containsKey("Content-Length")) {
                            length = fileDownloadRequest.b.length();
                        } else {
                            if (contentLength == 0 && fileDownloadRequest.a.exists() && fileDownloadRequest.a.length() == contentLength) {
                                fileDownloadRequest.a.renameTo(fileDownloadRequest.b);
                                httpResponse.getContent().close();
                                return new byte[0];
                            }
                            if (zIsSupportRange) {
                                length = fileDownloadRequest.b.length();
                                contentLength += length;
                                String header = HttpHeaderParser.getHeader(mapConvertHeaders, "Content-Range");
                                VolleyLog.d("Content-Range %s", header);
                                if (!TextUtils.isEmpty(header)) {
                                    String str4 = "bytes " + length + Constants.ACCEPT_TIME_SEPARATOR_SERVER + (contentLength - 1);
                                    if (TextUtils.indexOf(header, str4) == -1) {
                                        httpResponse.getContent().close();
                                        fileDownloadRequest.b.delete();
                                        throw new IllegalStateException("The Content-Range Header is invalid Assume[" + str4 + "] vs Real[" + header + "], has remove the temporary file [" + fileDownloadRequest.b + "].");
                                    }
                                }
                            }
                        }
                        InputStream inputStream = null;
                        randomAccessFile2 = new RandomAccessFile(fileDownloadRequest.b, "rw");
                        if (zIsSupportRange) {
                            randomAccessFile2.setLength(0L);
                        } else {
                            randomAccessFile2.seek(length);
                            j = length;
                        }
                        content = httpResponse.getContent();
                        bArr = new byte[8192];
                        while (true) {
                            i = content.read(bArr);
                            if (i == i2) {
                                break;
                            }
                            if (isCanceled()) {
                                try {
                                    break;
                                } catch (Throwable th) {
                                    th = th;
                                    inputStream = content;
                                    randomAccessFile = randomAccessFile2;
                                    try {
                                        throw th;
                                    } finally {
                                    }
                                }
                            } else {
                                randomAccessFile2.write(bArr, i3, i);
                                j += (long) i;
                                if (fileDownloadRequest.f != null) {
                                    try {
                                        FileDownloadListener fileDownloadListener = fileDownloadRequest.f;
                                        DownloadItem downloadItem = fileDownloadRequest.c;
                                        str = "recv: ";
                                        str2 = " total: ";
                                        randomAccessFile = randomAccessFile2;
                                        str3 = " offset ";
                                        try {
                                            fileDownloadListener.downloadProgress(downloadItem, contentLength, j);
                                        } catch (Throwable th2) {
                                            th = th2;
                                            try {
                                                VolleyLog.e("callback downloadProgress  error " + th.getMessage(), new Object[0]);
                                            } catch (Throwable th3) {
                                                th = th3;
                                                inputStream = content;
                                                throw th;
                                            }
                                        }
                                    } catch (Throwable th4) {
                                        th = th4;
                                        str = "recv: ";
                                        str2 = " total: ";
                                        randomAccessFile = randomAccessFile2;
                                        str3 = " offset ";
                                    }
                                } else {
                                    str = "recv: ";
                                    str2 = " total: ";
                                    randomAccessFile = randomAccessFile2;
                                    str3 = " offset ";
                                }
                                VolleyLog.d(str + j + str2 + contentLength + str3 + i, new Object[0]);
                                randomAccessFile2 = randomAccessFile;
                                i2 = -1;
                                i3 = 0;
                                fileDownloadRequest = this;
                            }
                        }
                        randomAccessFile = randomAccessFile2;
                        VolleyLog.d("recv: " + j + " total: " + contentLength + " offset " + i, new Object[0]);
                        if (content != null) {
                            try {
                                content.close();
                            } catch (Throwable unused) {
                                VolleyLog.v("Error occured when calling consumingContent", new Object[0]);
                            }
                        }
                        randomAccessFile.close();
                        return new byte[0];
                    }
                    VolleyLog.d("Response doesn't present Content-Length!", new Object[0]);
                    bArr = new byte[8192];
                    while (true) {
                        i = content.read(bArr);
                        if (i == i2) {
                        }
                        VolleyLog.d(str + j + str2 + contentLength + str3 + i, new Object[0]);
                        randomAccessFile2 = randomAccessFile;
                        i2 = -1;
                        i3 = 0;
                        fileDownloadRequest = this;
                    }
                    randomAccessFile = randomAccessFile2;
                    VolleyLog.d("recv: " + j + " total: " + contentLength + " offset " + i, new Object[0]);
                    if (content != null) {
                    }
                    randomAccessFile.close();
                    return new byte[0];
                } catch (Throwable th5) {
                    th = th5;
                    randomAccessFile = randomAccessFile2;
                }
                if (zIsSupportRange) {
                }
                content = httpResponse.getContent();
            } catch (Throwable th6) {
                th = th6;
            }
            randomAccessFile2 = new RandomAccessFile(fileDownloadRequest.b, "rw");
        } catch (Throwable th7) {
            th = th7;
            randomAccessFile = null;
        }
        length = 0;
        InputStream inputStream2 = null;
    }

    /* JADX WARN: Removed duplicated region for block: B:107:0x011a A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:109:0x010a A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:118:? A[SYNTHETIC] */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    protected Response<DownloadItem> parseNetworkResponse(NetworkResponse networkResponse) throws Throwable {
        FileOutputStream fileOutputStream;
        GZIPInputStream gZIPInputStream;
        this.c.networkMs = networkResponse.networkTimeMs;
        if (isCanceled()) {
            return Response.error(new VolleyError("Request was Canceled!"));
        }
        Map<String, String> mapConvertHeaders = FileDownloadNetwork.convertHeaders(networkResponse.allHeaders);
        long length = (mapConvertHeaders.containsKey("Transfer-Encoding") && mapConvertHeaders.get("Transfer-Encoding").equalsIgnoreCase("chunked")) ? this.b.length() : mapConvertHeaders.containsKey("content-length") ? Long.parseLong(mapConvertHeaders.get("content-length")) + this.d : 0L;
        this.c.size = length;
        GZIPInputStream gZIPInputStream2 = null;
        if (!this.b.canRead() || this.b.length() <= 0 || (this.b.length() != length && length != 0)) {
            if (this.a.canRead() && this.a.length() == length) {
                return Response.success(this.c, null);
            }
            return Response.error(new VolleyError("Download temporary file was invalid!" + this.b.getAbsolutePath()));
        }
        if (!HttpHeaderParser.isGzipContent(mapConvertHeaders)) {
            return this.b.renameTo(this.a) ? Response.success(this.c, null) : Response.error(new VolleyError("Can't rename the download temporary file!"));
        }
        boolean z = false;
        try {
            gZIPInputStream = new GZIPInputStream(new FileInputStream(this.b));
            try {
                fileOutputStream = new FileOutputStream(this.a);
                try {
                    try {
                        byte[] bArr = new byte[4096];
                        while (true) {
                            int i = gZIPInputStream.read(bArr, 0, 4096);
                            if (i == -1) {
                                break;
                            }
                            fileOutputStream.write(bArr, 0, i);
                        }
                        try {
                            gZIPInputStream.close();
                        } catch (IOException e) {
                            VolleyLog.e(e.getMessage(), new Object[0]);
                        }
                        try {
                            fileOutputStream.close();
                        } catch (IOException e2) {
                            VolleyLog.e(e2.getMessage(), new Object[0]);
                        }
                        z = true;
                    } catch (IOException e3) {
                        e = e3;
                        VolleyLog.e(e.getMessage(), new Object[0]);
                        if (gZIPInputStream != null) {
                            try {
                                gZIPInputStream.close();
                            } catch (IOException e4) {
                                VolleyLog.e(e4.getMessage(), new Object[0]);
                            }
                        }
                        if (fileOutputStream != null) {
                            try {
                                fileOutputStream.close();
                            } catch (IOException e5) {
                                VolleyLog.e(e5.getMessage(), new Object[0]);
                            }
                        }
                    }
                } catch (Throwable th) {
                    th = th;
                    gZIPInputStream2 = gZIPInputStream;
                    if (gZIPInputStream2 != null) {
                        try {
                            gZIPInputStream2.close();
                        } catch (IOException e6) {
                            VolleyLog.e(e6.getMessage(), new Object[0]);
                        }
                    }
                    if (fileOutputStream == null) {
                        throw th;
                    }
                    try {
                        fileOutputStream.close();
                        throw th;
                    } catch (IOException e7) {
                        VolleyLog.e(e7.getMessage(), new Object[0]);
                        throw th;
                    }
                }
            } catch (IOException e8) {
                e = e8;
                fileOutputStream = null;
            } catch (Throwable th2) {
                th = th2;
                fileOutputStream = null;
                gZIPInputStream2 = gZIPInputStream;
                if (gZIPInputStream2 != null) {
                }
                if (fileOutputStream == null) {
                }
            }
        } catch (IOException e9) {
            e = e9;
            gZIPInputStream = null;
            fileOutputStream = null;
        } catch (Throwable th3) {
            th = th3;
            fileOutputStream = null;
            if (gZIPInputStream2 != null) {
            }
            if (fileOutputStream == null) {
            }
        }
        this.b.delete();
        return z ? Response.success(this.c, null) : Response.error(new VolleyError("error gzip unzip the download temporary file!"));
    }

    public void setListener(FileDownloadListener fileDownloadListener) {
        this.f = fileDownloadListener;
    }
}

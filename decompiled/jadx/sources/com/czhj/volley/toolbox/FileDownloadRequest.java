package com.czhj.volley.toolbox;

import com.czhj.volley.DefaultRetryPolicy;
import com.czhj.volley.Request;
import com.czhj.volley.VolleyError;
import com.czhj.volley.VolleyLog;
import com.kuaishou.weapon.p0.bh;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class FileDownloadRequest extends Request<DownloadItem> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private File f1842a;
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
        this.f1842a = file;
        if (file.getParentFile() != null && !this.f1842a.getParentFile().exists()) {
            this.f1842a.getParentFile().mkdirs();
        }
        if (this.f1842a.exists()) {
            this.f1842a.delete();
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

    @Override // com.czhj.volley.Request
    public void cancel() {
        super.cancel();
        synchronized (this.e) {
            this.f = null;
        }
    }

    @Override // com.czhj.volley.Request
    public void deliverError(VolleyError volleyError) {
        this.c.status = 0;
        if (this.f1842a.exists()) {
            this.f1842a.delete();
        }
        if (this.b.exists()) {
            this.b.delete();
        }
        this.c.error = volleyError;
        this.f.onErrorResponse(this.c);
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.czhj.volley.Request
    public void deliverResponse(DownloadItem downloadItem) {
        this.c.status = 1;
        this.f.onSuccess(downloadItem);
    }

    @Override // com.czhj.volley.Request
    public Map<String, String> getHeaders() {
        HashMap map = new HashMap();
        this.d = this.b.length();
        map.put("Connection", "Keep-Alive");
        map.put("Accept-Encoding", "gzip");
        map.put("Range", "bytes=" + this.d + Constants.ACCEPT_TIME_SEPARATOR_SERVER);
        addMarker("Range,bytes=" + this.d + Constants.ACCEPT_TIME_SEPARATOR_SERVER);
        return map;
    }

    @Override // com.czhj.volley.Request
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
        To view partially-correct add '--show-bad-code' argument
    */
    public byte[] handleRawResponse(com.czhj.volley.toolbox.HttpResponse r20) throws java.io.IOException {
        /*
            Method dump skipped, instruction units count: 519
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.czhj.volley.toolbox.FileDownloadRequest.handleRawResponse(com.czhj.volley.toolbox.HttpResponse):byte[]");
    }

    /* JADX WARN: Removed duplicated region for block: B:107:0x011a A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:109:0x010a A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:118:? A[SYNTHETIC] */
    @Override // com.czhj.volley.Request
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    protected com.czhj.volley.Response<com.czhj.volley.toolbox.DownloadItem> parseNetworkResponse(com.czhj.volley.NetworkResponse r9) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 396
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.czhj.volley.toolbox.FileDownloadRequest.parseNetworkResponse(com.czhj.volley.NetworkResponse):com.czhj.volley.Response");
    }

    public void setListener(FileDownloadListener fileDownloadListener) {
        this.f = fileDownloadListener;
    }
}

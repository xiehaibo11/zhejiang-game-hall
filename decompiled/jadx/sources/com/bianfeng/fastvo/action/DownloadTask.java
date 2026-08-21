package com.bianfeng.fastvo.action;

import android.content.Context;
import android.os.AsyncTask;
import com.bianfeng.ymnsdk.action.HttpHelper;
import com.xiaomi.mipush.sdk.Constants;
import java.io.IOException;
import java.net.HttpURLConnection;
import java.net.URL;

/* JADX INFO: loaded from: classes.dex */
public class DownloadTask extends AsyncTask<DownloadFile, Integer, Integer> {
    public static final int ERROR_CONTENT_LENGTH_INVALID = 402;
    public static final int ERROR_OPEN_CONNECTION_FAIL = 401;
    public static final int ERROR_PAUSE = 403;
    public static final int ERROR_UNKNOW = 400;
    public static int RW_BUF_SIZE = 1024;
    public static final int SUCCESS_NORMAL = 200;
    public static final int SUCCESS_ON_CHECK = 201;
    private Context context;
    public DownloadFile fileInfo;
    private int lastProgress;
    private DownloadListener listener;
    private boolean pause;

    public DownloadTask(Context context, DownloadListener downloadListener) {
        this.context = context;
        this.listener = downloadListener;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    /* JADX WARN: Removed duplicated region for block: B:162:0x01ca A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:168:0x01d1 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:180:0x01c3 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:28:0x0093 A[Catch: all -> 0x0192, Exception -> 0x0197, TryCatch #26 {Exception -> 0x0197, all -> 0x0192, blocks: (B:26:0x008c, B:28:0x0093, B:29:0x009a), top: B:190:0x008c }] */
    /* JADX WARN: Removed duplicated region for block: B:32:0x00bc A[Catch: all -> 0x018b, Exception -> 0x018e, TRY_ENTER, TRY_LEAVE, TryCatch #27 {Exception -> 0x018e, all -> 0x018b, blocks: (B:32:0x00bc, B:37:0x00c9, B:41:0x00d8, B:46:0x00e5, B:48:0x00ee, B:53:0x00fd, B:54:0x0109, B:56:0x010f, B:58:0x012e, B:70:0x014e, B:81:0x0175), top: B:189:0x00ba }] */
    /* JADX WARN: Removed duplicated region for block: B:37:0x00c9 A[Catch: all -> 0x018b, Exception -> 0x018e, TRY_ENTER, TryCatch #27 {Exception -> 0x018e, all -> 0x018b, blocks: (B:32:0x00bc, B:37:0x00c9, B:41:0x00d8, B:46:0x00e5, B:48:0x00ee, B:53:0x00fd, B:54:0x0109, B:56:0x010f, B:58:0x012e, B:70:0x014e, B:81:0x0175), top: B:189:0x00ba }] */
    @Override // android.os.AsyncTask
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public java.lang.Integer doInBackground(com.bianfeng.fastvo.action.DownloadFile... r14) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 471
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.bianfeng.fastvo.action.DownloadTask.doInBackground(com.bianfeng.fastvo.action.DownloadFile[]):java.lang.Integer");
    }

    public void sleep() {
        try {
            Thread.sleep(10L);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private HttpURLConnection getHttpConnection(String str, int i) {
        try {
            URL url = new URL(str);
            HttpURLConnection proxy = HttpHelper.getProxy(this.context, url);
            if (proxy == null) {
                proxy = (HttpURLConnection) url.openConnection();
            }
            proxy.setAllowUserInteraction(true);
            proxy.setRequestMethod("GET");
            proxy.setReadTimeout(5000);
            proxy.setRequestProperty("Range", "bytes=" + i + Constants.ACCEPT_TIME_SEPARATOR_SERVER);
            return proxy;
        } catch (IOException e) {
            e.printStackTrace();
            return null;
        }
    }

    @Override // android.os.AsyncTask
    protected void onPreExecute() {
        this.pause = false;
        super.onPreExecute();
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    public void onPostExecute(Integer num) {
        int iIntValue = num.intValue();
        if (iIntValue == 200 || iIntValue == 201) {
            DownloadListener downloadListener = this.listener;
            if (downloadListener != null) {
                downloadListener.onComplete(this.fileInfo);
            }
        } else {
            switch (iIntValue) {
                case 400:
                case 401:
                case 402:
                case 403:
                    DownloadListener downloadListener2 = this.listener;
                    if (downloadListener2 != null) {
                        downloadListener2.onError(num.intValue(), this.fileInfo);
                    }
                    break;
            }
        }
        super.onPostExecute(num);
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    public void onProgressUpdate(Integer... numArr) {
        double d = this.fileInfo.downedSize;
        Double.isNaN(d);
        double d2 = this.fileInfo.totalSize;
        Double.isNaN(d2);
        int i = (int) ((d * 100.0d) / d2);
        if (i <= this.lastProgress) {
            return;
        }
        this.lastProgress = i;
        DownloadListener downloadListener = this.listener;
        if (downloadListener != null) {
            downloadListener.onUpdate(this.fileInfo);
        }
        super.onProgressUpdate((Object[]) numArr);
    }

    public void start(DownloadFile downloadFile) {
        execute(downloadFile);
    }

    public void start() {
        execute(new DownloadFile[0]);
    }

    public void cancel() {
        this.pause = true;
        DownloadFile downloadFile = this.fileInfo;
        if (downloadFile != null) {
            downloadFile.status = 3;
        }
    }

    public boolean downLoadIsPause() {
        return this.pause;
    }
}

package com.bianfeng.fastvo.action;

import android.content.Context;
import android.os.AsyncTask;
import android.util.Log;
import com.bianfeng.fastvo.util.FileUtil;
import com.bianfeng.ymnsdk.action.HttpHelper;
import com.kuaishou.weapon.p0.bh;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.io.RandomAccessFile;
import java.net.HttpURLConnection;
import java.net.URL;

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

    /* JADX WARN: Removed duplicated region for block: B:162:0x01ca A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:168:0x01d1 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:180:0x01c3 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:28:0x0093 A[Catch: all -> 0x0192, Exception -> 0x0197, TryCatch #26 {Exception -> 0x0197, all -> 0x0192, blocks: (B:26:0x008c, B:28:0x0093, B:29:0x009a), top: B:190:0x008c }] */
    /* JADX WARN: Removed duplicated region for block: B:32:0x00bc A[Catch: all -> 0x018b, Exception -> 0x018e, TRY_ENTER, TRY_LEAVE, TryCatch #27 {Exception -> 0x018e, all -> 0x018b, blocks: (B:32:0x00bc, B:37:0x00c9, B:41:0x00d8, B:46:0x00e5, B:48:0x00ee, B:53:0x00fd, B:54:0x0109, B:56:0x010f, B:58:0x012e, B:70:0x014e, B:81:0x0175), top: B:189:0x00ba }] */
    /* JADX WARN: Removed duplicated region for block: B:37:0x00c9 A[Catch: all -> 0x018b, Exception -> 0x018e, TRY_ENTER, TryCatch #27 {Exception -> 0x018e, all -> 0x018b, blocks: (B:32:0x00bc, B:37:0x00c9, B:41:0x00d8, B:46:0x00e5, B:48:0x00ee, B:53:0x00fd, B:54:0x0109, B:56:0x010f, B:58:0x012e, B:70:0x014e, B:81:0x0175), top: B:189:0x00ba }] */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    protected Integer doInBackground(DownloadFile... downloadFileArr) throws Throwable {
        InputStream inputStream;
        HttpURLConnection httpConnection;
        Exception exc;
        int length;
        RandomAccessFile randomAccessFile;
        if (this.fileInfo == null) {
            this.fileInfo = downloadFileArr[0];
        }
        File file = new File(FileUtil.getFolder(this.fileInfo.filePath));
        if (!file.exists()) {
            file.mkdirs();
        }
        RandomAccessFile randomAccessFile2 = null;
        try {
            File file2 = new File(this.fileInfo.filePath);
            if (file2.exists()) {
                DownloadFile downloadFile = this.fileInfo;
                DownloadFile downloadFile2 = this.fileInfo;
                int length2 = (int) file2.length();
                downloadFile2.totalSize = length2;
                downloadFile.downedSize = length2;
                if (this.listener != null) {
                    this.listener.onBegin(this.fileInfo);
                }
                return 201;
            }
            File file3 = new File(this.fileInfo.filePath + bh.k);
            try {
                try {
                    if (!file3.exists()) {
                        file3.createNewFile();
                    } else {
                        if (file3.isFile()) {
                            length = (int) file3.length();
                            randomAccessFile = new RandomAccessFile(file3, "rw");
                            randomAccessFile.seek(length);
                            if (this.listener != null) {
                                this.listener.onBegin(this.fileInfo);
                            }
                            String str = this.fileInfo.url;
                            Log.i("NOTE", "target url is " + str);
                            httpConnection = getHttpConnection(str, length);
                            if (httpConnection != null) {
                                try {
                                    randomAccessFile.close();
                                } catch (Exception unused) {
                                }
                                if (httpConnection != null) {
                                    try {
                                        httpConnection.disconnect();
                                    } catch (Exception unused2) {
                                    }
                                }
                                return 401;
                            }
                            httpConnection.connect();
                            int responseCode = httpConnection.getResponseCode();
                            if (responseCode != 200 && responseCode != 206) {
                                try {
                                    randomAccessFile.close();
                                } catch (Exception unused3) {
                                }
                                if (httpConnection != null) {
                                    try {
                                        httpConnection.disconnect();
                                    } catch (Exception unused4) {
                                    }
                                }
                                return 401;
                            }
                            int contentLength = httpConnection.getContentLength();
                            int i = length + contentLength;
                            if (contentLength == -1) {
                                try {
                                    randomAccessFile.close();
                                } catch (Exception unused5) {
                                }
                                if (httpConnection != null) {
                                    try {
                                        httpConnection.disconnect();
                                    } catch (Exception unused6) {
                                    }
                                }
                                return 402;
                            }
                            this.fileInfo.totalSize = i;
                            byte[] bArr = new byte[RW_BUF_SIZE];
                            InputStream inputStream2 = httpConnection.getInputStream();
                            do {
                                int i2 = inputStream2.read(bArr);
                                if (i2 == -1) {
                                    if (i2 > 0) {
                                        try {
                                            randomAccessFile.close();
                                        } catch (Exception unused7) {
                                        }
                                        if (inputStream2 != null) {
                                            try {
                                                inputStream2.close();
                                            } catch (Exception unused8) {
                                            }
                                        }
                                        if (httpConnection != null) {
                                            try {
                                                httpConnection.disconnect();
                                            } catch (Exception unused9) {
                                            }
                                        }
                                        return 400;
                                    }
                                    this.fileInfo.status = 4;
                                    file3.renameTo(new File(this.fileInfo.filePath));
                                    try {
                                        randomAccessFile.close();
                                    } catch (Exception unused10) {
                                    }
                                    if (inputStream2 != null) {
                                        try {
                                            inputStream2.close();
                                        } catch (Exception unused11) {
                                        }
                                    }
                                    if (httpConnection != null) {
                                        try {
                                            httpConnection.disconnect();
                                        } catch (Exception unused12) {
                                        }
                                    }
                                    return 200;
                                }
                                randomAccessFile.write(bArr, 0, i2);
                                length += i2;
                                this.fileInfo.downedSize = length;
                                publishProgress(Integer.valueOf(length), Integer.valueOf(i));
                            } while (!this.pause);
                            randomAccessFile.close();
                            inputStream2.close();
                            try {
                                randomAccessFile.close();
                            } catch (Exception unused13) {
                            }
                            if (inputStream2 != null) {
                                try {
                                    inputStream2.close();
                                } catch (Exception unused14) {
                                }
                            }
                            if (httpConnection != null) {
                                try {
                                    httpConnection.disconnect();
                                } catch (Exception unused15) {
                                }
                            }
                            return 403;
                        }
                        file3.delete();
                    }
                    if (httpConnection != null) {
                    }
                } catch (Exception e) {
                    exc = e;
                    inputStream = null;
                    randomAccessFile2 = randomAccessFile;
                    try {
                        exc.printStackTrace();
                        if (randomAccessFile2 != null) {
                            try {
                                randomAccessFile2.close();
                            } catch (Exception unused16) {
                            }
                        }
                        if (inputStream != null) {
                            try {
                                inputStream.close();
                            } catch (Exception unused17) {
                            }
                        }
                        if (httpConnection != null) {
                            try {
                                httpConnection.disconnect();
                            } catch (Exception unused18) {
                            }
                        }
                        return 400;
                    } catch (Throwable th) {
                        th = th;
                        if (randomAccessFile2 != null) {
                            try {
                                randomAccessFile2.close();
                            } catch (Exception unused19) {
                            }
                        }
                        if (inputStream != null) {
                            try {
                                inputStream.close();
                            } catch (Exception unused20) {
                            }
                        }
                        if (httpConnection != null) {
                            try {
                                httpConnection.disconnect();
                            } catch (Exception unused21) {
                            }
                        }
                        throw th;
                    }
                } catch (Throwable th2) {
                    th = th2;
                    inputStream = null;
                    randomAccessFile2 = randomAccessFile;
                    if (randomAccessFile2 != null) {
                    }
                    if (inputStream != null) {
                    }
                    if (httpConnection != null) {
                    }
                    throw th;
                }
                randomAccessFile.seek(length);
                if (this.listener != null) {
                }
                String str2 = this.fileInfo.url;
                Log.i("NOTE", "target url is " + str2);
                httpConnection = getHttpConnection(str2, length);
            } catch (Exception e2) {
                httpConnection = null;
                exc = e2;
                inputStream = null;
            } catch (Throwable th3) {
                th = th3;
                inputStream = null;
                httpConnection = null;
            }
            length = 0;
            randomAccessFile = new RandomAccessFile(file3, "rw");
        } catch (Exception e3) {
            httpConnection = null;
            exc = e3;
            inputStream = null;
        } catch (Throwable th4) {
            th = th4;
            inputStream = null;
            httpConnection = null;
        }
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

    @Override
    protected void onPreExecute() {
        this.pause = false;
        super.onPreExecute();
    }

    @Override
    protected void onPostExecute(Integer num) {
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

    @Override
    protected void onProgressUpdate(Integer... numArr) {
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

package com.ymnsdk.replugin.patch.download;

import android.util.Log;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.ymnsdk.replugin.patch.download.DownloadCode;
import com.ymnsdk.replugin.util.DownloadUtils;
import java.io.IOException;
import java.io.InputStream;
import java.io.RandomAccessFile;
import java.util.concurrent.TimeUnit;
import okhttp3.Call;
import okhttp3.ConnectionPool;
import okhttp3.Interceptor;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.Response;
import okhttp3.ResponseBody;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class FileDownloader {
    private static OkHttpClient mDownloadClient;
    private DownloadCallback mCallback;
    private Call mCurrentCall;
    private volatile String mCurrentTask;
    private final Interceptor mDownloadResume;

    FileDownloader(1 r1) {
        this();
    }

    public static FileDownloader getInstance() {
        return Factory.instance;
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    private static final class Factory {
        private static final FileDownloader instance = new FileDownloader(null);

        private Factory() {
        }
    }

    private FileDownloader() {
        this.mCurrentTask = null;
        this.mCurrentCall = null;
        this.mCallback = null;
        this.mDownloadResume = new Interceptor() {
            @Override
            public final Response intercept(Interceptor.Chain chain) {
                return FileDownloader.lambda$new$0(chain);
            }
        };
        initDownloadClient();
    }

    public void initDownloadClient() {
        if (mDownloadClient == null) {
            ConnectionPool connectionPool = new ConnectionPool(1024, 30L, TimeUnit.MINUTES);
            OkHttpClient okHttpClient = new OkHttpClient();
            mDownloadClient = okHttpClient;
            OkHttpClient.Builder builderConnectionPool = okHttpClient.newBuilder().connectTimeout(5L, TimeUnit.SECONDS).readTimeout(30L, TimeUnit.SECONDS).writeTimeout(30L, TimeUnit.SECONDS).connectionPool(connectionPool);
            builderConnectionPool.addInterceptor(this.mDownloadResume);
            mDownloadClient = builderConnectionPool.build();
        }
    }

    public void closeCall() {
        Call call = this.mCurrentCall;
        if (call == null) {
            return;
        }
        call.cancel();
        this.mCurrentCall = null;
        try {
            Thread.sleep(1000L);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

    public void resetTask() {
        this.mCurrentTask = null;
    }

    public Response execute(OkHttpClient okHttpClient, Request request) {
        Call callNewCall = okHttpClient.newCall(request);
        this.mCurrentCall = callNewCall;
        try {
            return callNewCall.execute();
        } catch (IOException e) {
            e.printStackTrace();
            return null;
        }
    }

    static Response lambda$new$0(Interceptor.Chain chain) throws IOException {
        Request request = chain.request();
        return chain.proceed(request.newBuilder().header("range", String.format("bytes=%d-", Long.valueOf(DownloadFileState.getInstance().getDownloadSize((String) request.tag())))).build());
    }

    private void writeDownloadStream(ResponseBody responseBody, int i) throws Exception {
        DownloadFileInfo downloadFileInfo = DownloadFileState.getInstance().getDownloadFileInfo(this.mCurrentTask);
        if (downloadFileInfo == null) {
            downloadFailed(DownloadCode.Code.FileIsBroken, i);
            return;
        }
        downloadFileInfo.setNetworkRetryCount(0);
        DownloadFileState.getInstance().updateTaskState(downloadFileInfo);
        if (downloadFileInfo.getSaveCachePath() == null) {
            downloadFailed(DownloadCode.Code.FileStatusSyncError, i);
            return;
        }
        String saveCachePath = downloadFileInfo.getSaveCachePath();
        Log.e(HostConstant.ymn, "path is " + saveCachePath);
        try {
            RandomAccessFile randomAccessFile = new RandomAccessFile(saveCachePath, "rw");
            try {
                randomAccessFile.seek(downloadFileInfo.getSavedSize());
                if (!DownloadFileState.getInstance().verifySaveFileSize(this.mCurrentTask, responseBody.getContentLength())) {
                    downloadFailed(DownloadCode.Code.FileVerifySizeFailed, i);
                    randomAccessFile.close();
                    return;
                }
                byte[] bArr = new byte[131072];
                InputStream inputStreamByteStream = responseBody.byteStream();
                long j = -1;
                while (true) {
                    int i2 = inputStreamByteStream.read(bArr);
                    if (i2 == -1) {
                        randomAccessFile.close();
                        downloadSuccess(i);
                        randomAccessFile.close();
                        return;
                    }
                    randomAccessFile.write(bArr, 0, i2);
                    if (!DownloadFileState.getInstance().syncDownloadFileSize(this.mCurrentTask, i2)) {
                        randomAccessFile.close();
                        downloadFailed(DownloadCode.Code.FileSyncReadStatusException, i);
                        randomAccessFile.close();
                        return;
                    }
                    if (i == 1 && DownloadUtils.isUserDownload) {
                        randomAccessFile.close();
                        downloadFailed(DownloadCode.Code.ManualStop, i);
                        randomAccessFile.close();
                        return;
                    } else if (this.mCallback != null) {
                        long savedSize = (downloadFileInfo.getSavedSize() * 100) / downloadFileInfo.getTotalSize();
                        if (j != savedSize) {
                            Log.e(HostConstant.ymn, "当前的进度是:" + savedSize + "hash值是:" + downloadFileInfo.getHash() + "下载的存发的地址是:" + downloadFileInfo.getSavePath());
                            j = savedSize;
                        }
                        this.mCallback.downloading(savedSize);
                    }
                }
            } finally {
            }
        } catch (Exception e) {
            throw e;
        }
    }

    public Request newRequest(String str, String str2) {
        return new Request.Builder().url(str).tag(str2).build();
    }

    public boolean pause(String str) {
        DownloadFileState.getInstance().pause(str);
        if (!this.mCurrentTask.equals(str)) {
            return false;
        }
        closeCall();
        return true;
    }

    public boolean resume(String str) {
        DownloadFileState.getInstance().resume(str);
        return true;
    }

    public void pause() {
        resetTask();
        DownloadFileState.getInstance().pause();
        closeCall();
    }

    public void resume() {
        DownloadFileState.getInstance().resume();
    }

    public boolean download(String str, String str2, String str3, DownloadCallback downloadCallback, int i) {
        Log.e(HostConstant.ymn, "download: " + str2);
        if (this.mCurrentTask != null && this.mCurrentTask.equals(str2)) {
            return downloadFailed(DownloadCode.Code.TaskIsDownloading, i);
        }
        closeCall();
        resetTask();
        this.mCurrentTask = str2;
        this.mCallback = downloadCallback;
        DownloadUtils.getInstance().checkDirectories(str3);
        DownloadFileState.getInstance().syncDownloadStatus(str2, str, str3);
        if (!DownloadFileState.getInstance().getDownloadFileInfo(str2).getValid()) {
            return downloadFailed(DownloadCode.Code.ManualStop, i);
        }
        Log.e(HostConstant.ymn, "到了execute");
        Response responseExecute = execute(mDownloadClient, newRequest(str, str2));
        Log.e(HostConstant.ymn, "到了execute,有响应");
        if (responseExecute != null && responseExecute.code() == 416) {
            return downloadSuccess(i);
        }
        if (responseExecute == null || !responseExecute.isSuccessful() || responseExecute.body() == null) {
            return downloadFailed(DownloadCode.Code.RequestFail, i);
        }
        try {
            ResponseBody responseBodyBody = responseExecute.body();
            try {
                writeDownloadStream(responseBodyBody, i);
                responseExecute.close();
                if (responseBodyBody == null) {
                    return true;
                }
                responseBodyBody.close();
                return true;
            } finally {
            }
        } catch (Exception e) {
            e.printStackTrace();
            responseExecute.close();
            return downloadFailed(DownloadCode.Code.FileReadStreamException, i);
        }
    }

    private boolean downloadSuccess(int i) {
        System.out.println("downloadSuccess: " + this.mCurrentTask);
        closeCall();
        DownloadFileInfo downloadFileInfo = DownloadFileState.getInstance().getDownloadFileInfo(this.mCurrentTask);
        downloadFileInfo.addRoadMap(DownloadCode.Code.Success);
        DownloadFileState.getInstance().updateTaskState(downloadFileInfo);
        if (downloadFileInfo == null) {
            return downloadFailed(DownloadCode.Code.FileStatusSyncError, i);
        }
        if (!DownloadUtils.getInstance().checkMd5(downloadFileInfo.getSaveCachePath(), downloadFileInfo.getHash())) {
            return downloadFailed(DownloadCode.Code.FileVerifyHashFailed, i);
        }
        if (!DownloadUtils.getInstance().renameFile(downloadFileInfo.getSaveCachePath(), downloadFileInfo.getSavePath())) {
            return downloadFailed(DownloadCode.Code.FileRenameFailed, i);
        }
        DownloadFileState.getInstance().removeTaskHistory(this.mCurrentTask);
        DownloadCallback downloadCallback = this.mCallback;
        if (downloadCallback == null) {
            return true;
        }
        downloadCallback.downloadSuccess(downloadFileInfo.getSavePath());
        return true;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    private boolean downloadFailed(DownloadCode.Code code, int i) {
        System.out.println("downloadFailed: " + this.mCurrentTask + DownloadCode.translate(code));
        Log.e(HostConstant.ymn, "code is " + code.toString() + "|" + DownloadCode.translate(code));
        if (code == DownloadCode.Code.TaskIsDownloading) {
            return false;
        }
        closeCall();
        DownloadCallback downloadCallback = this.mCallback;
        if (downloadCallback != null) {
            downloadCallback.downloadFail(code);
        }
        if (this.mCurrentTask == null) {
            return false;
        }
        DownloadFileInfo downloadFileInfo = DownloadFileState.getInstance().getDownloadFileInfo(this.mCurrentTask);
        downloadFileInfo.addRoadMap(code);
        DownloadFileState.getInstance().updateTaskState(downloadFileInfo);
        switch (1.$SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code[code.ordinal()]) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                if (code == DownloadCode.Code.FileReadStreamException || code == DownloadCode.Code.RequestFail) {
                    downloadFileInfo.addNetworkRetryCount();
                    DownloadFileState.getInstance().updateTaskState(downloadFileInfo);
                }
                resetTask();
                download(downloadFileInfo.getURL(), downloadFileInfo.getHash(), downloadFileInfo.getSavePath(), this.mCallback, i);
                return false;
            case 6:
            case 7:
            case 8:
                DownloadFileState.getInstance().resetStatus(this.mCurrentTask);
                resetTask();
                download(downloadFileInfo.getURL(), downloadFileInfo.getHash(), downloadFileInfo.getSavePath(), this.mCallback, i);
                return false;
            case 9:
                DownloadState.getInstance().setLoadState(false);
                return false;
            default:
                return false;
        }
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    static class 1 {
        static final int[] $SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code;

        static {
            int[] iArr = new int[DownloadCode.Code.values().length];
            $SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code = iArr;
            try {
                iArr[DownloadCode.Code.RequestFail.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                $SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code[DownloadCode.Code.FileRenameFailed.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                $SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code[DownloadCode.Code.FileStatusSyncError.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                $SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code[DownloadCode.Code.FileSyncReadStatusException.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                $SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code[DownloadCode.Code.FileReadStreamException.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                $SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code[DownloadCode.Code.FileIsBroken.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                $SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code[DownloadCode.Code.FileVerifyHashFailed.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
            try {
                $SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code[DownloadCode.Code.FileVerifySizeFailed.ordinal()] = 8;
            } catch (NoSuchFieldError unused8) {
            }
            try {
                $SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code[DownloadCode.Code.ManualStop.ordinal()] = 9;
            } catch (NoSuchFieldError unused9) {
            }
        }
    }
}

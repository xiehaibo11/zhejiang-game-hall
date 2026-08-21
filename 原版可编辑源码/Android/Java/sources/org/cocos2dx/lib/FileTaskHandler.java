package org.cocos2dx.lib;

import android.util.Log;
import com.loopj.android.http.FileAsyncHttpResponseHandler;
import cz.msebera.android.httpclient.Header;
import java.io.File;

class FileTaskHandler extends FileAsyncHttpResponseHandler {
    private Cocos2dxDownloader _downloader;
    File _finalFile;
    int _id;
    private long _initFileLen;
    private long _lastBytesWritten;

    void LogD(String str) {
        Log.d("Cocos2dxDownloader", str);
    }

    public FileTaskHandler(Cocos2dxDownloader cocos2dxDownloader, int i, File file, File file2) {
        super(file, true);
        this._finalFile = file2;
        this._downloader = cocos2dxDownloader;
        this._id = i;
        this._initFileLen = getTargetFile().length();
        this._lastBytesWritten = 0L;
    }

    @Override
    public void onProgress(long j, long j2) {
        long j3 = j - this._lastBytesWritten;
        long j4 = this._initFileLen;
        this._downloader.onProgress(this._id, j3, j + j4, j2 + j4);
        this._lastBytesWritten = j;
    }

    @Override
    public void onStart() {
        this._downloader.onStart(this._id);
    }

    @Override
    public void onFinish() {
        this._downloader.runNextTaskIfExists();
    }

    @Override
    public void onFailure(int i, Header[] headerArr, Throwable th, File file) {
        LogD("onFailure(i:" + i + " headers:" + headerArr + " throwable:" + th + " file:" + file);
        this._downloader.onFinish(this._id, i, th != null ? th.toString() : "", null);
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x006d  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void onSuccess(int i, Header[] headerArr, File file) {
        String str;
        LogD("onSuccess(i:" + i + " headers:" + headerArr + " file:" + file);
        if (this._finalFile.exists()) {
            if (this._finalFile.isDirectory()) {
                str = "Dest file is directory:" + this._finalFile.getAbsolutePath();
            } else if (!this._finalFile.delete()) {
                str = "Can't remove old file:" + this._finalFile.getAbsolutePath();
            }
        } else {
            getTargetFile().renameTo(this._finalFile);
            str = null;
        }
        this._downloader.onFinish(this._id, 0, str, null);
    }
}

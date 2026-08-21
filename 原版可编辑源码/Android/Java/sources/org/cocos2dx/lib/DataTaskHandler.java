package org.cocos2dx.lib;

import android.util.Log;
import com.loopj.android.http.BinaryHttpResponseHandler;
import cz.msebera.android.httpclient.Header;

class DataTaskHandler extends BinaryHttpResponseHandler {
    private Cocos2dxDownloader _downloader;
    int _id;
    private long _lastBytesWritten;

    void LogD(String str) {
        Log.d("Cocos2dxDownloader", str);
    }

    public DataTaskHandler(Cocos2dxDownloader cocos2dxDownloader, int i) {
        super(new String[]{".*"});
        this._downloader = cocos2dxDownloader;
        this._id = i;
        this._lastBytesWritten = 0L;
    }

    @Override
    public void onProgress(long j, long j2) {
        this._downloader.onProgress(this._id, j - this._lastBytesWritten, j, j2);
        this._lastBytesWritten = j;
    }

    @Override
    public void onStart() {
        this._downloader.onStart(this._id);
    }

    @Override
    public void onFailure(int i, Header[] headerArr, byte[] bArr, Throwable th) {
        LogD("onFailure(i:" + i + " headers:" + headerArr + " throwable:" + th);
        this._downloader.onFinish(this._id, i, th != null ? th.toString() : "", null);
    }

    @Override
    public void onSuccess(int i, Header[] headerArr, byte[] bArr) {
        LogD("onSuccess(i:" + i + " headers:" + headerArr);
        this._downloader.onFinish(this._id, 0, null, bArr);
    }

    @Override
    public void onFinish() {
        this._downloader.runNextTaskIfExists();
    }
}

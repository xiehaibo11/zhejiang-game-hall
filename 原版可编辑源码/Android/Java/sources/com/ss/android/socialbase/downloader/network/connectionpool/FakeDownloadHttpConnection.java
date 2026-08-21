package com.ss.android.socialbase.downloader.network.connectionpool;

import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.exception.BaseException;
import com.ss.android.socialbase.downloader.model.HttpHeader;
import com.ss.android.socialbase.downloader.network.IDownloadHttpConnection;
import com.ss.android.socialbase.downloader.network.IDownloadHttpService;
import java.io.IOException;
import java.io.InputStream;
import java.util.List;

public class FakeDownloadHttpConnection implements IDownloadHttpConnection, IFakeDownloadHttpConnection {
    private boolean isRequesting;
    private IDownloadHttpConnection mConnection;
    private long mCreateTime;
    private InputStream mInputStream;
    protected final Object mJoinLock = new Object();
    private final int mMaxLength;
    private final List<HttpHeader> mRequestHeaders;
    private final String mUrl;

    public boolean isSuccessful(int i) {
        return i >= 200 && i < 300;
    }

    public FakeDownloadHttpConnection(int i, String str, List<HttpHeader> list, long j) {
        this.mMaxLength = i;
        this.mUrl = str;
        this.mRequestHeaders = list;
    }

    @Override
    public void execute() throws IOException, BaseException {
        if (this.mConnection != null) {
            return;
        }
        synchronized (this.mJoinLock) {
            try {
                this.isRequesting = true;
                IDownloadHttpConnection iDownloadHttpConnectionDoExecute = doExecute();
                this.mConnection = iDownloadHttpConnectionDoExecute;
                if (iDownloadHttpConnectionDoExecute != null) {
                    this.mCreateTime = System.currentTimeMillis();
                    this.mInputStream = this.mConnection.getInputStream();
                }
            } finally {
                this.isRequesting = false;
                this.mJoinLock.notifyAll();
            }
        }
    }

    private IDownloadHttpConnection doExecute() throws IOException, BaseException {
        IDownloadHttpService defaultHttpService = DownloadComponentManager.getDefaultHttpService();
        if (defaultHttpService != null) {
            return defaultHttpService.downloadWithConnection(this.mMaxLength, this.mUrl, this.mRequestHeaders);
        }
        return null;
    }

    @Override
    public void joinExecute() throws InterruptedException {
        synchronized (this.mJoinLock) {
            if (this.isRequesting && this.mConnection == null) {
                this.mJoinLock.wait();
            }
        }
    }

    @Override
    public InputStream getInputStream() throws IOException {
        InputStream inputStream = this.mInputStream;
        if (inputStream != null) {
            return inputStream;
        }
        return null;
    }

    @Override
    public void end() {
        IDownloadHttpConnection iDownloadHttpConnection = this.mConnection;
        if (iDownloadHttpConnection != null) {
            iDownloadHttpConnection.end();
        }
    }

    @Override
    public String getResponseHeaderField(String str) {
        IDownloadHttpConnection iDownloadHttpConnection = this.mConnection;
        if (iDownloadHttpConnection != null) {
            return iDownloadHttpConnection.getResponseHeaderField(str);
        }
        return null;
    }

    @Override
    public int getResponseCode() throws IOException {
        IDownloadHttpConnection iDownloadHttpConnection = this.mConnection;
        if (iDownloadHttpConnection != null) {
            return iDownloadHttpConnection.getResponseCode();
        }
        return 0;
    }

    public List<HttpHeader> getRequestHeaders() {
        return this.mRequestHeaders;
    }

    @Override
    public void cancel() {
        IDownloadHttpConnection iDownloadHttpConnection = this.mConnection;
        if (iDownloadHttpConnection != null) {
            iDownloadHttpConnection.cancel();
        }
    }

    @Override
    public boolean isSuccessful() {
        try {
            if (this.mConnection != null) {
                return isSuccessful(this.mConnection.getResponseCode());
            }
            return false;
        } catch (IOException e) {
            e.printStackTrace();
            return false;
        }
    }

    @Override
    public boolean isValid() {
        return System.currentTimeMillis() - this.mCreateTime < DownloadPreconnecter.sConnectionOutdatedTime;
    }

    @Override
    public boolean isRequesting() {
        return this.isRequesting;
    }
}

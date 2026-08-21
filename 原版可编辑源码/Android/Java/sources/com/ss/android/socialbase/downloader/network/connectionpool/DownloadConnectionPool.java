package com.ss.android.socialbase.downloader.network.connectionpool;

import com.ss.android.socialbase.downloader.logger.Logger;
import com.ss.android.socialbase.downloader.model.HttpHeader;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

public class DownloadConnectionPool {
    public static final int MAX_HOLD_CONNECTION = 3;
    private static final String TAG = "DownloadConnectionPool";
    private final Map<String, FakeDownloadHttpConnection> mCachedDownloadConnections;
    private final Map<String, FakeDownloadHeadHttpConnection> mCachedHeadConnections;
    protected int maxCacheSize;

    void putCachedHeadConnections(String str, FakeDownloadHeadHttpConnection fakeDownloadHeadHttpConnection) {
        synchronized (this.mCachedHeadConnections) {
            this.mCachedHeadConnections.put(str, fakeDownloadHeadHttpConnection);
        }
    }

    void setMaxCachedDownloadConnectionSize(int i) {
        this.maxCacheSize = i;
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x0032  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    void putCachedDownloadConnections(String str, FakeDownloadHttpConnection fakeDownloadHttpConnection) {
        FakeDownloadHttpConnection fakeDownloadHttpConnectionRemove;
        Map.Entry<String, FakeDownloadHttpConnection> next;
        synchronized (this.mCachedDownloadConnections) {
            if (this.mCachedDownloadConnections.size() == this.maxCacheSize) {
                Iterator<Map.Entry<String, FakeDownloadHttpConnection>> it = this.mCachedDownloadConnections.entrySet().iterator();
                fakeDownloadHttpConnectionRemove = (!it.hasNext() || (next = it.next()) == null) ? null : this.mCachedDownloadConnections.remove(next.getKey());
                this.mCachedDownloadConnections.put(str, fakeDownloadHttpConnection);
            }
        }
        if (fakeDownloadHttpConnectionRemove != null) {
            try {
                fakeDownloadHttpConnectionRemove.end();
            } catch (Throwable unused) {
            }
        }
        Logger.i(TAG, "mCachedConnections size = " + this.mCachedDownloadConnections.size() + ", max size = " + this.maxCacheSize);
    }

    public void releaseDownloadConnection(String str) {
        FakeDownloadHttpConnection fakeDownloadHttpConnectionRemove;
        synchronized (this.mCachedDownloadConnections) {
            fakeDownloadHttpConnectionRemove = this.mCachedDownloadConnections.remove(str);
        }
        if (fakeDownloadHttpConnectionRemove != null) {
            try {
                fakeDownloadHttpConnectionRemove.end();
            } catch (Throwable unused) {
            }
        }
    }

    public void releaseHeadConnection(String str) {
        FakeDownloadHeadHttpConnection fakeDownloadHeadHttpConnectionRemove;
        synchronized (this.mCachedHeadConnections) {
            fakeDownloadHeadHttpConnectionRemove = this.mCachedHeadConnections.remove(str);
        }
        if (fakeDownloadHeadHttpConnectionRemove != null) {
            fakeDownloadHeadHttpConnectionRemove.cancel();
        }
    }

    public FakeDownloadHeadHttpConnection getCachedHeadConnection(String str, List<HttpHeader> list) {
        FakeDownloadHeadHttpConnection fakeDownloadHeadHttpConnectionRemove;
        synchronized (this.mCachedHeadConnections) {
            fakeDownloadHeadHttpConnectionRemove = this.mCachedHeadConnections.remove(str);
        }
        if (fakeDownloadHeadHttpConnectionRemove == null) {
            return null;
        }
        if (DownloadUtils.isHeaderEqual(fakeDownloadHeadHttpConnectionRemove.getRequestHeaders(), list)) {
            try {
                fakeDownloadHeadHttpConnectionRemove.joinExecute();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            if (fakeDownloadHeadHttpConnectionRemove.isValid() && fakeDownloadHeadHttpConnectionRemove.isSuccessful()) {
                return fakeDownloadHeadHttpConnectionRemove;
            }
        }
        try {
            fakeDownloadHeadHttpConnectionRemove.cancel();
            return null;
        } catch (Throwable unused) {
            return null;
        }
    }

    public boolean isHeadConnectionExist(String str) {
        FakeDownloadHeadHttpConnection fakeDownloadHeadHttpConnection = this.mCachedHeadConnections.get(str);
        if (fakeDownloadHeadHttpConnection == null) {
            return false;
        }
        if (fakeDownloadHeadHttpConnection.isRequesting()) {
            return true;
        }
        return fakeDownloadHeadHttpConnection.isValid() && fakeDownloadHeadHttpConnection.isSuccessful();
    }

    public FakeDownloadHttpConnection getCachedDownloadConnection(String str, List<HttpHeader> list) {
        FakeDownloadHttpConnection fakeDownloadHttpConnectionRemove;
        synchronized (this.mCachedDownloadConnections) {
            fakeDownloadHttpConnectionRemove = this.mCachedDownloadConnections.remove(str);
        }
        if (fakeDownloadHttpConnectionRemove == null) {
            return null;
        }
        if (DownloadUtils.isHeaderEqual(fakeDownloadHttpConnectionRemove.getRequestHeaders(), list)) {
            try {
                fakeDownloadHttpConnectionRemove.joinExecute();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            if (fakeDownloadHttpConnectionRemove.isValid() && fakeDownloadHttpConnectionRemove.isSuccessful()) {
                return fakeDownloadHttpConnectionRemove;
            }
        }
        try {
            fakeDownloadHttpConnectionRemove.end();
            return null;
        } catch (Throwable unused) {
            return null;
        }
    }

    public boolean isDownloadConnectionExist(String str) {
        FakeDownloadHttpConnection fakeDownloadHttpConnection = this.mCachedDownloadConnections.get(str);
        if (fakeDownloadHttpConnection == null) {
            return false;
        }
        if (fakeDownloadHttpConnection.isRequesting()) {
            return true;
        }
        return fakeDownloadHttpConnection.isValid() && fakeDownloadHttpConnection.isSuccessful();
    }

    private static final class InstanceHolder {
        private static final DownloadConnectionPool INSTANCE = new DownloadConnectionPool();

        private InstanceHolder() {
        }
    }

    public static DownloadConnectionPool getInstance() {
        return InstanceHolder.INSTANCE;
    }

    private DownloadConnectionPool() {
        this.mCachedHeadConnections = new HashMap();
        this.mCachedDownloadConnections = new LinkedHashMap(3);
        this.maxCacheSize = 3;
    }
}

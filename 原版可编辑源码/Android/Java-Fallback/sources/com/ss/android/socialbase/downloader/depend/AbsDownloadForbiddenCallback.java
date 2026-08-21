package com.ss.android.socialbase.downloader.depend;

public abstract class AbsDownloadForbiddenCallback implements com.ss.android.socialbase.downloader.depend.IDownloadForbiddenCallback {
    private boolean hasCallback;

    public AbsDownloadForbiddenCallback() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.hasCallback = r0
            return
    }

    @Override
    public boolean hasCallback() {
            r1 = this;
            boolean r0 = r1.hasCallback
            return r0
    }

    @Override
    public void onCallback(java.util.List<java.lang.String> r1) {
            r0 = this;
            if (r1 == 0) goto Lc
            boolean r1 = r1.isEmpty()
            if (r1 == 0) goto L9
            goto Lc
        L9:
            r1 = 1
            r0.hasCallback = r1
        Lc:
            return
    }
}

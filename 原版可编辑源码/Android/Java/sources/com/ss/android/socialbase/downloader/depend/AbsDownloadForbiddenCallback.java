package com.ss.android.socialbase.downloader.depend;

import java.util.List;

public abstract class AbsDownloadForbiddenCallback implements IDownloadForbiddenCallback {
    private boolean hasCallback = false;

    @Override
    public void onCallback(List<String> list) {
        if (list == null || list.isEmpty()) {
            return;
        }
        this.hasCallback = true;
    }

    @Override
    public boolean hasCallback() {
        return this.hasCallback;
    }
}

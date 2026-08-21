package com.ss.android.socialbase.downloader.depend;

import java.util.List;

public interface IDownloadForbiddenCallback {
    boolean hasCallback();

    void onCallback(List<String> list);
}

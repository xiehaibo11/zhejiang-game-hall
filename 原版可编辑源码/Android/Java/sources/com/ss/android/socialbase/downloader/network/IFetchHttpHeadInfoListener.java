package com.ss.android.socialbase.downloader.network;

import java.util.Map;

public interface IFetchHttpHeadInfoListener {
    void onFetchFinished(Map<String, String> map);
}

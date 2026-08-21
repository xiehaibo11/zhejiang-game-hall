package com.kwad.sdk.core.imageloader.core.download;

import java.net.HttpURLConnection;

public interface ConnectionConfig {
    void config(HttpURLConnection httpURLConnection);
}

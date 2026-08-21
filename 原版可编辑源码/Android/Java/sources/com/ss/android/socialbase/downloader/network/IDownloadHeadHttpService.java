package com.ss.android.socialbase.downloader.network;

import com.ss.android.socialbase.downloader.model.HttpHeader;
import java.io.IOException;
import java.util.List;

public interface IDownloadHeadHttpService {
    IDownloadHeadHttpConnection downloadWithConnection(String str, List<HttpHeader> list) throws IOException;
}

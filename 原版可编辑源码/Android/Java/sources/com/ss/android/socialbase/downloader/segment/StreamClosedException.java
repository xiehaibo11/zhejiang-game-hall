package com.ss.android.socialbase.downloader.segment;

import com.ss.android.socialbase.downloader.constants.DownloadErrorCode;
import com.ss.android.socialbase.downloader.exception.BaseException;

public class StreamClosedException extends BaseException {
    public StreamClosedException(String str) {
        super(DownloadErrorCode.ERROR_STREAM_CLOSED, str);
    }
}

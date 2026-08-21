package com.ss.android.socialbase.downloader.segment;

import java.io.IOException;

public interface IOutput {
    void write(Buffer buffer) throws IOException;
}

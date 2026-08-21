package com.ss.android.socialbase.downloader.reader;

import com.ss.android.socialbase.downloader.segment.Buffer;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import java.io.IOException;
import java.io.InputStream;

public class SyncStreamReader implements IStreamReader {
    private final Buffer buffer;
    private final InputStream inputStream;

    @Override
    public void recycle(Buffer buffer) {
    }

    public SyncStreamReader(InputStream inputStream, int i) {
        this.inputStream = inputStream;
        this.buffer = new Buffer(i);
    }

    @Override
    public Buffer read() throws IOException {
        Buffer buffer = this.buffer;
        buffer.size = this.inputStream.read(buffer.data);
        return this.buffer;
    }

    @Override
    public void close() {
        DownloadUtils.safeClose(this.inputStream);
    }
}

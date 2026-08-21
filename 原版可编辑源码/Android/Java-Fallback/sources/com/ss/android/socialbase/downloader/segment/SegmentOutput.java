package com.ss.android.socialbase.downloader.segment;

class SegmentOutput implements com.ss.android.socialbase.downloader.segment.IOutput {
    private final com.ss.android.socialbase.downloader.model.RandomAccessOutputStream output;
    private final com.ss.android.socialbase.downloader.segment.Segment segment;
    private final com.ss.android.socialbase.downloader.segment.IOutput stub;

    public SegmentOutput(com.ss.android.socialbase.downloader.model.DownloadInfo r1, com.ss.android.socialbase.downloader.segment.BufferQueue r2, com.ss.android.socialbase.downloader.segment.Segment r3) throws com.ss.android.socialbase.downloader.exception.BaseException {
            r0 = this;
            r0.<init>()
            r0.segment = r3
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r1 = r0.createOutStream(r1, r3)
            r0.output = r1
            com.ss.android.socialbase.downloader.segment.OutputStub r1 = new com.ss.android.socialbase.downloader.segment.OutputStub
            r1.<init>(r2, r0)
            r0.stub = r1
            return
    }

    private com.ss.android.socialbase.downloader.model.RandomAccessOutputStream createOutStream(com.ss.android.socialbase.downloader.model.DownloadInfo r6, com.ss.android.socialbase.downloader.segment.Segment r7) throws com.ss.android.socialbase.downloader.exception.BaseException {
            r5 = this;
            java.lang.String r0 = r6.getTempPath()
            java.lang.String r1 = r6.getTempName()
            int r2 = r6.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r2 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r2)
            java.lang.String r3 = "flush_buffer_size_byte"
            r4 = -1
            int r2 = r2.optInt(r3, r4)
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r6 = com.ss.android.socialbase.downloader.utils.DownloadUtils.createOutputStream(r6, r0, r1, r2)
            long r0 = r7.getCurrentOffsetRead()     // Catch: java.io.IOException -> L23
            r6.seek(r0)     // Catch: java.io.IOException -> L23
            return r6
        L23:
            r6 = move-exception
            com.ss.android.socialbase.downloader.exception.BaseException r7 = new com.ss.android.socialbase.downloader.exception.BaseException
            r0 = 1054(0x41e, float:1.477E-42)
            r7.<init>(r0, r6)
            throw r7
    }

    public void close() {
            r3 = this;
            r0 = 1
            java.io.Closeable[] r0 = new java.io.Closeable[r0]
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r1 = r3.output
            r2 = 0
            r0[r2] = r1
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r0)
            return
    }

    public void flush() throws java.io.IOException {
            r1 = this;
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r0 = r1.output
            r0.flush()
            return
    }

    public com.ss.android.socialbase.downloader.segment.Segment getSegment() {
            r1 = this;
            com.ss.android.socialbase.downloader.segment.Segment r0 = r1.segment
            return r0
    }

    public com.ss.android.socialbase.downloader.segment.IOutput getStub() {
            r1 = this;
            com.ss.android.socialbase.downloader.segment.IOutput r0 = r1.stub
            return r0
    }

    public void sync() throws java.io.IOException {
            r1 = this;
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r0 = r1.output
            r0.sync()
            return
    }

    @Override
    public void write(com.ss.android.socialbase.downloader.segment.Buffer r5) throws java.io.IOException {
            r4 = this;
            com.ss.android.socialbase.downloader.model.RandomAccessOutputStream r0 = r4.output
            byte[] r1 = r5.data
            int r2 = r5.size
            r3 = 0
            r0.write(r1, r3, r2)
            com.ss.android.socialbase.downloader.segment.Segment r0 = r4.segment
            int r5 = r5.size
            long r1 = (long) r5
            r0.increaseCurrentOffset(r1)
            return
    }
}

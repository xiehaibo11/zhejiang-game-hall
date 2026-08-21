package com.ss.android.socialbase.downloader.segment;

class OutputStub implements com.ss.android.socialbase.downloader.segment.IOutput {
    private final com.ss.android.socialbase.downloader.segment.IOutput output;
    private final com.ss.android.socialbase.downloader.segment.IOutput target;

    OutputStub(com.ss.android.socialbase.downloader.segment.IOutput r1, com.ss.android.socialbase.downloader.segment.IOutput r2) {
            r0 = this;
            r0.<init>()
            r0.output = r1
            r0.target = r2
            return
    }

    @Override
    public void write(com.ss.android.socialbase.downloader.segment.Buffer r2) throws java.io.IOException {
            r1 = this;
            com.ss.android.socialbase.downloader.segment.IOutput r0 = r1.target
            r2.output = r0
            com.ss.android.socialbase.downloader.segment.IOutput r0 = r1.output
            r0.write(r2)
            return
    }
}

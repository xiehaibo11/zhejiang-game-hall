package com.kwad.framework.filedownloader.exception;

public class FileDownloadOutOfSpaceException extends java.io.IOException {
    private long breakpointBytes;
    private long freeSpaceBytes;
    private long requiredSpaceBytes;

    public FileDownloadOutOfSpaceException(long r4, long r6, long r8) {
            r3 = this;
            r0 = 3
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Long r1 = java.lang.Long.valueOf(r8)
            r2 = 0
            r0[r2] = r1
            java.lang.Long r1 = java.lang.Long.valueOf(r6)
            r2 = 1
            r0[r2] = r1
            java.lang.Long r1 = java.lang.Long.valueOf(r4)
            r2 = 2
            r0[r2] = r1
            java.lang.String r1 = "The file is too large to store, breakpoint in bytes:  %d, required space in bytes: %d, but free space in bytes: %d"
            java.lang.String r0 = com.kwad.framework.filedownloader.f.f.b(r1, r0)
            r3.<init>(r0)
            r3.init(r4, r6, r8)
            return
    }

    public FileDownloadOutOfSpaceException(long r4, long r6, long r8, java.lang.Throwable r10) {
            r3 = this;
            r0 = 3
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Long r1 = java.lang.Long.valueOf(r8)
            r2 = 0
            r0[r2] = r1
            java.lang.Long r1 = java.lang.Long.valueOf(r6)
            r2 = 1
            r0[r2] = r1
            java.lang.Long r1 = java.lang.Long.valueOf(r4)
            r2 = 2
            r0[r2] = r1
            java.lang.String r1 = "The file is too large to store, breakpoint in bytes:  %d, required space in bytes: %d, but free space in bytes: %d"
            java.lang.String r0 = com.kwad.framework.filedownloader.f.f.b(r1, r0)
            r3.<init>(r0, r10)
            r3.init(r4, r6, r8)
            return
    }

    private void init(long r1, long r3, long r5) {
            r0 = this;
            r0.freeSpaceBytes = r1
            r0.requiredSpaceBytes = r3
            r0.breakpointBytes = r5
            return
    }

    public long getBreakpointBytes() {
            r2 = this;
            long r0 = r2.breakpointBytes
            return r0
    }

    public long getFreeSpaceBytes() {
            r2 = this;
            long r0 = r2.freeSpaceBytes
            return r0
    }

    public long getRequiredSpaceBytes() {
            r2 = this;
            long r0 = r2.requiredSpaceBytes
            return r0
    }
}

package com.ss.android.socialbase.downloader.utils;

public class DownloadStenographer {
    private static final int MAX_NODE_COUNT = 20;
    private static final int SECONDS_TO_MILLS = 1000;
    private int count;
    private com.ss.android.socialbase.downloader.utils.DownloadStenographer.Node head;
    private int maxCount;
    private com.ss.android.socialbase.downloader.utils.DownloadStenographer.Node tail;

    static class 1 {
    }

    private static class Node {
        long curBytes;
        com.ss.android.socialbase.downloader.utils.DownloadStenographer.Node next;
        com.ss.android.socialbase.downloader.utils.DownloadStenographer.Node prev;
        long when;

        private Node() {
                r0 = this;
                r0.<init>()
                return
        }

        Node(com.ss.android.socialbase.downloader.utils.DownloadStenographer.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public DownloadStenographer() {
            r1 = this;
            r1.<init>()
            r0 = 10
            r1.maxCount = r0
            return
    }

    public DownloadStenographer(int r2) {
            r1 = this;
            r1.<init>()
            r0 = 20
            if (r2 <= r0) goto L8
            r2 = r0
        L8:
            r1.maxCount = r2
            return
    }

    private com.ss.android.socialbase.downloader.utils.DownloadStenographer.Node findFirstNodeNearWhen(long r8) {
            r7 = this;
            com.ss.android.socialbase.downloader.utils.DownloadStenographer$Node r0 = r7.head
            r1 = 0
        L3:
            if (r0 == 0) goto L11
            long r2 = r0.when
            int r2 = (r2 > r8 ? 1 : (r2 == r8 ? 0 : -1))
            if (r2 <= 0) goto L11
            com.ss.android.socialbase.downloader.utils.DownloadStenographer$Node r1 = r0.next
            r6 = r1
            r1 = r0
            r0 = r6
            goto L3
        L11:
            if (r0 == 0) goto L23
            if (r1 == 0) goto L23
            if (r0 == r1) goto L23
            long r2 = r0.when
            long r2 = r8 - r2
            long r4 = r1.when
            long r4 = r4 - r8
            int r8 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r8 >= 0) goto L23
            return r0
        L23:
            return r1
    }

    private com.ss.android.socialbase.downloader.utils.DownloadStenographer.Node obtainNode() {
            r3 = this;
            int r0 = r3.count
            int r1 = r3.maxCount
            r2 = 0
            if (r0 < r1) goto L16
            com.ss.android.socialbase.downloader.utils.DownloadStenographer$Node r0 = r3.tail
            if (r0 == 0) goto L16
            com.ss.android.socialbase.downloader.utils.DownloadStenographer$Node r1 = r0.prev
            r0.prev = r2
            r3.tail = r1
            if (r1 == 0) goto L15
            r1.next = r2
        L15:
            return r0
        L16:
            int r0 = r3.count
            int r0 = r0 + 1
            r3.count = r0
            com.ss.android.socialbase.downloader.utils.DownloadStenographer$Node r0 = new com.ss.android.socialbase.downloader.utils.DownloadStenographer$Node
            r0.<init>(r2)
            return r0
    }

    public long getRecentDownloadSpeed(long r8, long r10) {
            r7 = this;
            monitor-enter(r7)
            com.ss.android.socialbase.downloader.utils.DownloadStenographer$Node r0 = r7.head     // Catch: java.lang.Throwable -> L28
            r1 = -1
            if (r0 != 0) goto L9
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L28
            return r1
        L9:
            com.ss.android.socialbase.downloader.utils.DownloadStenographer$Node r8 = r7.findFirstNodeNearWhen(r8)     // Catch: java.lang.Throwable -> L28
            if (r8 != 0) goto L11
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L28
            return r1
        L11:
            long r3 = r0.curBytes     // Catch: java.lang.Throwable -> L28
            long r5 = r8.curBytes     // Catch: java.lang.Throwable -> L28
            long r3 = r3 - r5
            long r8 = r8.when     // Catch: java.lang.Throwable -> L28
            long r10 = r10 - r8
            r8 = 0
            int r0 = (r3 > r8 ? 1 : (r3 == r8 ? 0 : -1))
            if (r0 < 0) goto L26
            int r8 = (r10 > r8 ? 1 : (r10 == r8 ? 0 : -1))
            if (r8 <= 0) goto L26
            long r3 = r3 / r10
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L28
            return r3
        L26:
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L28
            return r1
        L28:
            r8 = move-exception
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L28
            throw r8
    }

    public boolean markProgress(long r7, long r9) {
            r6 = this;
            monitor-enter(r6)
            com.ss.android.socialbase.downloader.utils.DownloadStenographer$Node r0 = r6.head     // Catch: java.lang.Throwable -> L3c
            r1 = 1
            if (r0 == 0) goto L2a
            long r2 = r0.curBytes     // Catch: java.lang.Throwable -> L3c
            int r2 = (r7 > r2 ? 1 : (r7 == r2 ? 0 : -1))
            if (r2 < 0) goto L27
            long r2 = r0.when     // Catch: java.lang.Throwable -> L3c
            int r2 = (r9 > r2 ? 1 : (r9 == r2 ? 0 : -1))
            if (r2 >= 0) goto L13
            goto L27
        L13:
            com.ss.android.socialbase.downloader.utils.DownloadStenographer$Node r2 = r0.next     // Catch: java.lang.Throwable -> L3c
            if (r2 == 0) goto L2a
            long r2 = r2.when     // Catch: java.lang.Throwable -> L3c
            long r2 = r9 - r2
            r4 = 1000(0x3e8, double:4.94E-321)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 >= 0) goto L2a
            r0.curBytes = r7     // Catch: java.lang.Throwable -> L3c
            r0.when = r9     // Catch: java.lang.Throwable -> L3c
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L3c
            return r1
        L27:
            r7 = 0
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L3c
            return r7
        L2a:
            com.ss.android.socialbase.downloader.utils.DownloadStenographer$Node r2 = r6.obtainNode()     // Catch: java.lang.Throwable -> L3c
            r2.curBytes = r7     // Catch: java.lang.Throwable -> L3c
            r2.when = r9     // Catch: java.lang.Throwable -> L3c
            if (r0 == 0) goto L38
            r2.next = r0     // Catch: java.lang.Throwable -> L3c
            r0.prev = r2     // Catch: java.lang.Throwable -> L3c
        L38:
            r6.head = r2     // Catch: java.lang.Throwable -> L3c
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L3c
            return r1
        L3c:
            r7 = move-exception
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L3c
            throw r7
    }
}

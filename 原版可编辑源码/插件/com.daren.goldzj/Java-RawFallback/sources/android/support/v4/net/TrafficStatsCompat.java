package android.support.v4.net;

public final class TrafficStatsCompat {
    private TrafficStatsCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    @java.lang.Deprecated
    public static void clearThreadStatsTag() {
            android.net.TrafficStats.clearThreadStatsTag()
            return
    }

    @java.lang.Deprecated
    public static int getThreadStatsTag() {
            int r0 = android.net.TrafficStats.getThreadStatsTag()
            return r0
    }

    @java.lang.Deprecated
    public static void incrementOperationCount(int r0) {
            android.net.TrafficStats.incrementOperationCount(r0)
            return
    }

    @java.lang.Deprecated
    public static void incrementOperationCount(int r0, int r1) {
            android.net.TrafficStats.incrementOperationCount(r0, r1)
            return
    }

    @java.lang.Deprecated
    public static void setThreadStatsTag(int r0) {
            android.net.TrafficStats.setThreadStatsTag(r0)
            return
    }

    public static void tagDatagramSocket(@android.support.annotation.NonNull java.net.DatagramSocket r3) throws java.net.SocketException {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto La
            android.net.TrafficStats.tagDatagramSocket(r3)
            goto L1d
        La:
            android.os.ParcelFileDescriptor r0 = android.os.ParcelFileDescriptor.fromDatagramSocket(r3)
            android.support.v4.net.DatagramSocketWrapper r1 = new android.support.v4.net.DatagramSocketWrapper
            java.io.FileDescriptor r2 = r0.getFileDescriptor()
            r1.<init>(r3, r2)
            android.net.TrafficStats.tagSocket(r1)
            r0.detachFd()
        L1d:
            return
    }

    @java.lang.Deprecated
    public static void tagSocket(java.net.Socket r0) throws java.net.SocketException {
            android.net.TrafficStats.tagSocket(r0)
            return
    }

    public static void untagDatagramSocket(@android.support.annotation.NonNull java.net.DatagramSocket r3) throws java.net.SocketException {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto La
            android.net.TrafficStats.untagDatagramSocket(r3)
            goto L1d
        La:
            android.os.ParcelFileDescriptor r0 = android.os.ParcelFileDescriptor.fromDatagramSocket(r3)
            android.support.v4.net.DatagramSocketWrapper r1 = new android.support.v4.net.DatagramSocketWrapper
            java.io.FileDescriptor r2 = r0.getFileDescriptor()
            r1.<init>(r3, r2)
            android.net.TrafficStats.untagSocket(r1)
            r0.detachFd()
        L1d:
            return
    }

    @java.lang.Deprecated
    public static void untagSocket(java.net.Socket r0) throws java.net.SocketException {
            android.net.TrafficStats.untagSocket(r0)
            return
    }
}

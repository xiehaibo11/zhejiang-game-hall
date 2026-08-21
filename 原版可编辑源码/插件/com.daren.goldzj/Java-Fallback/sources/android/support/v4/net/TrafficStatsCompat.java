package android.support.v4.net;

import android.net.TrafficStats;
import android.os.Build;
import android.os.ParcelFileDescriptor;
import android.support.annotation.NonNull;
import java.net.DatagramSocket;
import java.net.Socket;
import java.net.SocketException;

public final class TrafficStatsCompat {
    @Deprecated
    public static void clearThreadStatsTag() {
        TrafficStats.clearThreadStatsTag();
    }

    @Deprecated
    public static int getThreadStatsTag() {
        return TrafficStats.getThreadStatsTag();
    }

    @Deprecated
    public static void incrementOperationCount(int r0) {
        TrafficStats.incrementOperationCount(r0);
    }

    @Deprecated
    public static void incrementOperationCount(int r0, int r1) {
        TrafficStats.incrementOperationCount(r0, r1);
    }

    @Deprecated
    public static void setThreadStatsTag(int r0) {
        TrafficStats.setThreadStatsTag(r0);
    }

    @Deprecated
    public static void tagSocket(Socket r0) throws SocketException {
        TrafficStats.tagSocket(r0);
    }

    @Deprecated
    public static void untagSocket(Socket r0) throws SocketException {
        TrafficStats.untagSocket(r0);
    }

    public static void tagDatagramSocket(@NonNull DatagramSocket r3) throws SocketException {
        if (Build.VERSION.SDK_INT < 24) goto L5;
        TrafficStats.tagDatagramSocket(r3);
        return;
    L5:
        ParcelFileDescriptor r0 = ParcelFileDescriptor.fromDatagramSocket(r3);
        TrafficStats.tagSocket(new DatagramSocketWrapper(r3, r0.getFileDescriptor()));
        r0.detachFd();
    }

    public static void untagDatagramSocket(@NonNull DatagramSocket r3) throws SocketException {
        if (Build.VERSION.SDK_INT < 24) goto L5;
        TrafficStats.untagDatagramSocket(r3);
        return;
    L5:
        ParcelFileDescriptor r0 = ParcelFileDescriptor.fromDatagramSocket(r3);
        TrafficStats.untagSocket(new DatagramSocketWrapper(r3, r0.getFileDescriptor()));
        r0.detachFd();
    }

    private TrafficStatsCompat() {
    }
}

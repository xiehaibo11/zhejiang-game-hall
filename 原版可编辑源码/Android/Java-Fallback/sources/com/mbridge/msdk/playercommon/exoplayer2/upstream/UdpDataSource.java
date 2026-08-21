package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public final class UdpDataSource implements com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource {
    public static final int DEAFULT_SOCKET_TIMEOUT_MILLIS = 8000;
    public static final int DEFAULT_MAX_PACKET_SIZE = 2000;
    private java.net.InetAddress address;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.UdpDataSource> listener;
    private java.net.MulticastSocket multicastSocket;
    private boolean opened;
    private final java.net.DatagramPacket packet;
    private final byte[] packetBuffer;
    private int packetRemaining;
    private java.net.DatagramSocket socket;
    private java.net.InetSocketAddress socketAddress;
    private final int socketTimeoutMillis;
    private android.net.Uri uri;

    public static final class UdpDataSourceException extends java.io.IOException {
        public UdpDataSourceException(java.io.IOException r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    public UdpDataSource(com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.UdpDataSource> r2) {
            r1 = this;
            r0 = 2000(0x7d0, float:2.803E-42)
            r1.<init>(r2, r0)
            return
    }

    public UdpDataSource(com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.UdpDataSource> r2, int r3) {
            r1 = this;
            r0 = 8000(0x1f40, float:1.121E-41)
            r1.<init>(r2, r3, r0)
            return
    }

    public UdpDataSource(com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.UdpDataSource> r2, int r3, int r4) {
            r1 = this;
            r1.<init>()
            r1.listener = r2
            r1.socketTimeoutMillis = r4
            byte[] r2 = new byte[r3]
            r1.packetBuffer = r2
            java.net.DatagramPacket r2 = new java.net.DatagramPacket
            byte[] r4 = r1.packetBuffer
            r0 = 0
            r2.<init>(r4, r0, r3)
            r1.packet = r2
            return
    }

    @Override
    public final void close() {
            r3 = this;
            r0 = 0
            r3.uri = r0
            java.net.MulticastSocket r1 = r3.multicastSocket
            if (r1 == 0) goto Le
            java.net.InetAddress r2 = r3.address     // Catch: java.io.IOException -> Lc
            r1.leaveGroup(r2)     // Catch: java.io.IOException -> Lc
        Lc:
            r3.multicastSocket = r0
        Le:
            java.net.DatagramSocket r1 = r3.socket
            if (r1 == 0) goto L17
            r1.close()
            r3.socket = r0
        L17:
            r3.address = r0
            r3.socketAddress = r0
            r0 = 0
            r3.packetRemaining = r0
            boolean r1 = r3.opened
            if (r1 == 0) goto L2b
            r3.opened = r0
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.UdpDataSource> r0 = r3.listener
            if (r0 == 0) goto L2b
            r0.onTransferEnd(r3)
        L2b:
            return
    }

    @Override
    public final android.net.Uri getUri() {
            r1 = this;
            android.net.Uri r0 = r1.uri
            return r0
    }

    @Override
    public final long open(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r4) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.UdpDataSource.UdpDataSourceException {
            r3 = this;
            android.net.Uri r0 = r4.uri
            r3.uri = r0
            java.lang.String r0 = r0.getHost()
            android.net.Uri r1 = r3.uri
            int r1 = r1.getPort()
            java.net.InetAddress r0 = java.net.InetAddress.getByName(r0)     // Catch: java.io.IOException -> L5c
            r3.address = r0     // Catch: java.io.IOException -> L5c
            java.net.InetSocketAddress r0 = new java.net.InetSocketAddress     // Catch: java.io.IOException -> L5c
            java.net.InetAddress r2 = r3.address     // Catch: java.io.IOException -> L5c
            r0.<init>(r2, r1)     // Catch: java.io.IOException -> L5c
            r3.socketAddress = r0     // Catch: java.io.IOException -> L5c
            java.net.InetAddress r0 = r3.address     // Catch: java.io.IOException -> L5c
            boolean r0 = r0.isMulticastAddress()     // Catch: java.io.IOException -> L5c
            if (r0 == 0) goto L38
            java.net.MulticastSocket r0 = new java.net.MulticastSocket     // Catch: java.io.IOException -> L5c
            java.net.InetSocketAddress r1 = r3.socketAddress     // Catch: java.io.IOException -> L5c
            r0.<init>(r1)     // Catch: java.io.IOException -> L5c
            r3.multicastSocket = r0     // Catch: java.io.IOException -> L5c
            java.net.InetAddress r1 = r3.address     // Catch: java.io.IOException -> L5c
            r0.joinGroup(r1)     // Catch: java.io.IOException -> L5c
            java.net.MulticastSocket r0 = r3.multicastSocket     // Catch: java.io.IOException -> L5c
            r3.socket = r0     // Catch: java.io.IOException -> L5c
            goto L41
        L38:
            java.net.DatagramSocket r0 = new java.net.DatagramSocket     // Catch: java.io.IOException -> L5c
            java.net.InetSocketAddress r1 = r3.socketAddress     // Catch: java.io.IOException -> L5c
            r0.<init>(r1)     // Catch: java.io.IOException -> L5c
            r3.socket = r0     // Catch: java.io.IOException -> L5c
        L41:
            java.net.DatagramSocket r0 = r3.socket     // Catch: java.net.SocketException -> L55
            int r1 = r3.socketTimeoutMillis     // Catch: java.net.SocketException -> L55
            r0.setSoTimeout(r1)     // Catch: java.net.SocketException -> L55
            r0 = 1
            r3.opened = r0
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.UdpDataSource> r0 = r3.listener
            if (r0 == 0) goto L52
            r0.onTransferStart(r3, r4)
        L52:
            r0 = -1
            return r0
        L55:
            r4 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.UdpDataSource$UdpDataSourceException r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.UdpDataSource$UdpDataSourceException
            r0.<init>(r4)
            throw r0
        L5c:
            r4 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.UdpDataSource$UdpDataSourceException r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.UdpDataSource$UdpDataSourceException
            r0.<init>(r4)
            throw r0
    }

    @Override
    public final int read(byte[] r3, int r4, int r5) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.UdpDataSource.UdpDataSourceException {
            r2 = this;
            if (r5 != 0) goto L4
            r3 = 0
            return r3
        L4:
            int r0 = r2.packetRemaining
            if (r0 != 0) goto L26
            java.net.DatagramSocket r0 = r2.socket     // Catch: java.io.IOException -> L1f
            java.net.DatagramPacket r1 = r2.packet     // Catch: java.io.IOException -> L1f
            r0.receive(r1)     // Catch: java.io.IOException -> L1f
            java.net.DatagramPacket r0 = r2.packet
            int r0 = r0.getLength()
            r2.packetRemaining = r0
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.UdpDataSource> r1 = r2.listener
            if (r1 == 0) goto L26
            r1.onBytesTransferred(r2, r0)
            goto L26
        L1f:
            r3 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.UdpDataSource$UdpDataSourceException r4 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.UdpDataSource$UdpDataSourceException
            r4.<init>(r3)
            throw r4
        L26:
            java.net.DatagramPacket r0 = r2.packet
            int r0 = r0.getLength()
            int r1 = r2.packetRemaining
            int r0 = r0 - r1
            int r5 = java.lang.Math.min(r1, r5)
            byte[] r1 = r2.packetBuffer
            java.lang.System.arraycopy(r1, r0, r3, r4, r5)
            int r3 = r2.packetRemaining
            int r3 = r3 - r5
            r2.packetRemaining = r3
            return r5
    }
}

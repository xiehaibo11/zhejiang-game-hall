package cz.msebera.android.httpclient.config;

@cz.msebera.android.httpclient.annotation.Immutable
public class SocketConfig implements java.lang.Cloneable {
    public static final cz.msebera.android.httpclient.config.SocketConfig DEFAULT = null;
    private int backlogSize;
    private final int rcvBufSize;
    private final int sndBufSize;
    private final boolean soKeepAlive;
    private final int soLinger;
    private final boolean soReuseAddress;
    private final int soTimeout;
    private final boolean tcpNoDelay;

    public static class Builder {
        private int backlogSize;
        private int rcvBufSize;
        private int sndBufSize;
        private boolean soKeepAlive;
        private int soLinger;
        private boolean soReuseAddress;
        private int soTimeout;
        private boolean tcpNoDelay;

        Builder() {
                r1 = this;
                r1.<init>()
                r0 = -1
                r1.soLinger = r0
                r0 = 1
                r1.tcpNoDelay = r0
                return
        }

        public cz.msebera.android.httpclient.config.SocketConfig build() {
                r10 = this;
                cz.msebera.android.httpclient.config.SocketConfig r9 = new cz.msebera.android.httpclient.config.SocketConfig
                int r1 = r10.soTimeout
                boolean r2 = r10.soReuseAddress
                int r3 = r10.soLinger
                boolean r4 = r10.soKeepAlive
                boolean r5 = r10.tcpNoDelay
                int r6 = r10.sndBufSize
                int r7 = r10.rcvBufSize
                int r8 = r10.backlogSize
                r0 = r9
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
                return r9
        }

        public cz.msebera.android.httpclient.config.SocketConfig.Builder setBacklogSize(int r1) {
                r0 = this;
                r0.backlogSize = r1
                return r0
        }

        public cz.msebera.android.httpclient.config.SocketConfig.Builder setRcvBufSize(int r1) {
                r0 = this;
                r0.rcvBufSize = r1
                return r0
        }

        public cz.msebera.android.httpclient.config.SocketConfig.Builder setSndBufSize(int r1) {
                r0 = this;
                r0.sndBufSize = r1
                return r0
        }

        public cz.msebera.android.httpclient.config.SocketConfig.Builder setSoKeepAlive(boolean r1) {
                r0 = this;
                r0.soKeepAlive = r1
                return r0
        }

        public cz.msebera.android.httpclient.config.SocketConfig.Builder setSoLinger(int r1) {
                r0 = this;
                r0.soLinger = r1
                return r0
        }

        public cz.msebera.android.httpclient.config.SocketConfig.Builder setSoReuseAddress(boolean r1) {
                r0 = this;
                r0.soReuseAddress = r1
                return r0
        }

        public cz.msebera.android.httpclient.config.SocketConfig.Builder setSoTimeout(int r1) {
                r0 = this;
                r0.soTimeout = r1
                return r0
        }

        public cz.msebera.android.httpclient.config.SocketConfig.Builder setTcpNoDelay(boolean r1) {
                r0 = this;
                r0.tcpNoDelay = r1
                return r0
        }
    }

    static {
            cz.msebera.android.httpclient.config.SocketConfig$Builder r0 = new cz.msebera.android.httpclient.config.SocketConfig$Builder
            r0.<init>()
            cz.msebera.android.httpclient.config.SocketConfig r0 = r0.build()
            cz.msebera.android.httpclient.config.SocketConfig.DEFAULT = r0
            return
    }

    SocketConfig(int r1, boolean r2, int r3, boolean r4, boolean r5, int r6, int r7, int r8) {
            r0 = this;
            r0.<init>()
            r0.soTimeout = r1
            r0.soReuseAddress = r2
            r0.soLinger = r3
            r0.soKeepAlive = r4
            r0.tcpNoDelay = r5
            r0.sndBufSize = r6
            r0.rcvBufSize = r7
            r0.backlogSize = r8
            return
    }

    public static cz.msebera.android.httpclient.config.SocketConfig.Builder copy(cz.msebera.android.httpclient.config.SocketConfig r2) {
            java.lang.String r0 = "Socket config"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.config.SocketConfig$Builder r0 = new cz.msebera.android.httpclient.config.SocketConfig$Builder
            r0.<init>()
            int r1 = r2.getSoTimeout()
            cz.msebera.android.httpclient.config.SocketConfig$Builder r0 = r0.setSoTimeout(r1)
            boolean r1 = r2.isSoReuseAddress()
            cz.msebera.android.httpclient.config.SocketConfig$Builder r0 = r0.setSoReuseAddress(r1)
            int r1 = r2.getSoLinger()
            cz.msebera.android.httpclient.config.SocketConfig$Builder r0 = r0.setSoLinger(r1)
            boolean r1 = r2.isSoKeepAlive()
            cz.msebera.android.httpclient.config.SocketConfig$Builder r0 = r0.setSoKeepAlive(r1)
            boolean r1 = r2.isTcpNoDelay()
            cz.msebera.android.httpclient.config.SocketConfig$Builder r0 = r0.setTcpNoDelay(r1)
            int r1 = r2.getSndBufSize()
            cz.msebera.android.httpclient.config.SocketConfig$Builder r0 = r0.setSndBufSize(r1)
            int r1 = r2.getRcvBufSize()
            cz.msebera.android.httpclient.config.SocketConfig$Builder r0 = r0.setRcvBufSize(r1)
            int r2 = r2.getBacklogSize()
            cz.msebera.android.httpclient.config.SocketConfig$Builder r2 = r0.setBacklogSize(r2)
            return r2
    }

    public static cz.msebera.android.httpclient.config.SocketConfig.Builder custom() {
            cz.msebera.android.httpclient.config.SocketConfig$Builder r0 = new cz.msebera.android.httpclient.config.SocketConfig$Builder
            r0.<init>()
            return r0
    }

    protected cz.msebera.android.httpclient.config.SocketConfig clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            java.lang.Object r0 = super.clone()
            cz.msebera.android.httpclient.config.SocketConfig r0 = (cz.msebera.android.httpclient.config.SocketConfig) r0
            return r0
    }

    protected java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            cz.msebera.android.httpclient.config.SocketConfig r0 = r1.clone()
            return r0
    }

    public int getBacklogSize() {
            r1 = this;
            int r0 = r1.backlogSize
            return r0
    }

    public int getRcvBufSize() {
            r1 = this;
            int r0 = r1.rcvBufSize
            return r0
    }

    public int getSndBufSize() {
            r1 = this;
            int r0 = r1.sndBufSize
            return r0
    }

    public int getSoLinger() {
            r1 = this;
            int r0 = r1.soLinger
            return r0
    }

    public int getSoTimeout() {
            r1 = this;
            int r0 = r1.soTimeout
            return r0
    }

    public boolean isSoKeepAlive() {
            r1 = this;
            boolean r0 = r1.soKeepAlive
            return r0
    }

    public boolean isSoReuseAddress() {
            r1 = this;
            boolean r0 = r1.soReuseAddress
            return r0
    }

    public boolean isTcpNoDelay() {
            r1 = this;
            boolean r0 = r1.tcpNoDelay
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[soTimeout="
            r0.append(r1)
            int r1 = r2.soTimeout
            r0.append(r1)
            java.lang.String r1 = ", soReuseAddress="
            r0.append(r1)
            boolean r1 = r2.soReuseAddress
            r0.append(r1)
            java.lang.String r1 = ", soLinger="
            r0.append(r1)
            int r1 = r2.soLinger
            r0.append(r1)
            java.lang.String r1 = ", soKeepAlive="
            r0.append(r1)
            boolean r1 = r2.soKeepAlive
            r0.append(r1)
            java.lang.String r1 = ", tcpNoDelay="
            r0.append(r1)
            boolean r1 = r2.tcpNoDelay
            r0.append(r1)
            java.lang.String r1 = ", sndBufSize="
            r0.append(r1)
            int r1 = r2.sndBufSize
            r0.append(r1)
            java.lang.String r1 = ", rcvBufSize="
            r0.append(r1)
            int r1 = r2.rcvBufSize
            r0.append(r1)
            java.lang.String r1 = ", backlogSize="
            r0.append(r1)
            int r1 = r2.backlogSize
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}

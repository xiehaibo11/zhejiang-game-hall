package cz.msebera.android.httpclient.conn.routing;

public interface RouteInfo {

    public enum LayerType extends java.lang.Enum<cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType> {
        private static final cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType[] $VALUES = null;
        public static final cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType LAYERED = null;
        public static final cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType PLAIN = null;

        static {
                cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType r0 = new cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType
                r1 = 0
                java.lang.String r2 = "PLAIN"
                r0.<init>(r2, r1)
                cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType.PLAIN = r0
                cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType r0 = new cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType
                r2 = 1
                java.lang.String r3 = "LAYERED"
                r0.<init>(r3, r2)
                cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType.LAYERED = r0
                r0 = 2
                cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType[] r0 = new cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType[r0]
                cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType r3 = cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType.PLAIN
                r0[r1] = r3
                cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType r1 = cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType.LAYERED
                r0[r2] = r1
                cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType.$VALUES = r0
                return
        }

        LayerType(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType valueOf(java.lang.String r1) {
                java.lang.Class<cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType> r0 = cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType r1 = (cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType) r1
                return r1
        }

        public static cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType[] values() {
                cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType[] r0 = cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType.$VALUES
                java.lang.Object r0 = r0.clone()
                cz.msebera.android.httpclient.conn.routing.RouteInfo$LayerType[] r0 = (cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType[]) r0
                return r0
        }
    }

    public enum TunnelType extends java.lang.Enum<cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType> {
        private static final cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType[] $VALUES = null;
        public static final cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType PLAIN = null;
        public static final cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType TUNNELLED = null;

        static {
                cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r0 = new cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType
                r1 = 0
                java.lang.String r2 = "PLAIN"
                r0.<init>(r2, r1)
                cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType.PLAIN = r0
                cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r0 = new cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType
                r2 = 1
                java.lang.String r3 = "TUNNELLED"
                r0.<init>(r3, r2)
                cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType.TUNNELLED = r0
                r0 = 2
                cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType[] r0 = new cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType[r0]
                cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r3 = cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType.PLAIN
                r0[r1] = r3
                cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r1 = cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType.TUNNELLED
                r0[r2] = r1
                cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType.$VALUES = r0
                return
        }

        TunnelType(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType valueOf(java.lang.String r1) {
                java.lang.Class<cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType> r0 = cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType r1 = (cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType) r1
                return r1
        }

        public static cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType[] values() {
                cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType[] r0 = cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType.$VALUES
                java.lang.Object r0 = r0.clone()
                cz.msebera.android.httpclient.conn.routing.RouteInfo$TunnelType[] r0 = (cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType[]) r0
                return r0
        }
    }

    int getHopCount();

    cz.msebera.android.httpclient.HttpHost getHopTarget(int r1);

    cz.msebera.android.httpclient.conn.routing.RouteInfo.LayerType getLayerType();

    java.net.InetAddress getLocalAddress();

    cz.msebera.android.httpclient.HttpHost getProxyHost();

    cz.msebera.android.httpclient.HttpHost getTargetHost();

    cz.msebera.android.httpclient.conn.routing.RouteInfo.TunnelType getTunnelType();

    boolean isLayered();

    boolean isSecure();

    boolean isTunnelled();
}

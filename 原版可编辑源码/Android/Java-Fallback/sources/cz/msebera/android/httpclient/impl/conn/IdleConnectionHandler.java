package cz.msebera.android.httpclient.impl.conn;

@java.lang.Deprecated
public class IdleConnectionHandler {
    private final java.util.Map<cz.msebera.android.httpclient.HttpConnection, cz.msebera.android.httpclient.impl.conn.IdleConnectionHandler.TimeValues> connectionToTimes;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;

    private static class TimeValues {
        private final long timeAdded;
        private final long timeExpires;

        TimeValues(long r4, long r6, java.util.concurrent.TimeUnit r8) {
                r3 = this;
                r3.<init>()
                r3.timeAdded = r4
                r0 = 0
                int r2 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
                if (r2 <= 0) goto L13
                long r6 = r8.toMillis(r6)
                long r4 = r4 + r6
                r3.timeExpires = r4
                goto L1a
            L13:
                r4 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
                r3.timeExpires = r4
            L1a:
                return
        }

        static long access$000(cz.msebera.android.httpclient.impl.conn.IdleConnectionHandler.TimeValues r2) {
                long r0 = r2.timeExpires
                return r0
        }

        static long access$100(cz.msebera.android.httpclient.impl.conn.IdleConnectionHandler.TimeValues r2) {
                long r0 = r2.timeAdded
                return r0
        }
    }

    public IdleConnectionHandler() {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.connectionToTimes = r0
            return
    }

    public void add(cz.msebera.android.httpclient.HttpConnection r9, long r10, java.util.concurrent.TimeUnit r12) {
            r8 = this;
            long r1 = java.lang.System.currentTimeMillis()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r8.log
            boolean r0 = r0.isDebugEnabled()
            if (r0 == 0) goto L22
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r8.log
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Adding connection at: "
            r3.append(r4)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.debug(r3)
        L22:
            java.util.Map<cz.msebera.android.httpclient.HttpConnection, cz.msebera.android.httpclient.impl.conn.IdleConnectionHandler$TimeValues> r6 = r8.connectionToTimes
            cz.msebera.android.httpclient.impl.conn.IdleConnectionHandler$TimeValues r7 = new cz.msebera.android.httpclient.impl.conn.IdleConnectionHandler$TimeValues
            r0 = r7
            r3 = r10
            r5 = r12
            r0.<init>(r1, r3, r5)
            r6.put(r9, r7)
            return
    }

    public void closeExpiredConnections() {
            r9 = this;
            long r0 = java.lang.System.currentTimeMillis()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r9.log
            boolean r2 = r2.isDebugEnabled()
            if (r2 == 0) goto L22
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r9.log
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Checking for expired connections, now: "
            r3.append(r4)
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            r2.debug(r3)
        L22:
            java.util.Map<cz.msebera.android.httpclient.HttpConnection, cz.msebera.android.httpclient.impl.conn.IdleConnectionHandler$TimeValues> r2 = r9.connectionToTimes
            java.util.Set r2 = r2.entrySet()
            java.util.Iterator r2 = r2.iterator()
        L2c:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L7b
            java.lang.Object r3 = r2.next()
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3
            java.lang.Object r4 = r3.getKey()
            cz.msebera.android.httpclient.HttpConnection r4 = (cz.msebera.android.httpclient.HttpConnection) r4
            java.lang.Object r3 = r3.getValue()
            cz.msebera.android.httpclient.impl.conn.IdleConnectionHandler$TimeValues r3 = (cz.msebera.android.httpclient.impl.conn.IdleConnectionHandler.TimeValues) r3
            long r5 = cz.msebera.android.httpclient.impl.conn.IdleConnectionHandler.TimeValues.access$000(r3)
            int r7 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r7 > 0) goto L2c
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r9.log
            boolean r5 = r5.isDebugEnabled()
            if (r5 == 0) goto L6e
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r5 = r9.log
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "Closing connection, expired @: "
            r6.append(r7)
            long r7 = cz.msebera.android.httpclient.impl.conn.IdleConnectionHandler.TimeValues.access$000(r3)
            r6.append(r7)
            java.lang.String r3 = r6.toString()
            r5.debug(r3)
        L6e:
            r4.close()     // Catch: java.io.IOException -> L72
            goto L2c
        L72:
            r3 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r9.log
            java.lang.String r5 = "I/O error closing connection"
            r4.debug(r5, r3)
            goto L2c
        L7b:
            return
    }

    public void closeIdleConnections(long r8) {
            r7 = this;
            long r0 = java.lang.System.currentTimeMillis()
            long r0 = r0 - r8
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r8 = r7.log
            boolean r8 = r8.isDebugEnabled()
            if (r8 == 0) goto L23
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r8 = r7.log
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r2 = "Checking for connections, idle timeout: "
            r9.append(r2)
            r9.append(r0)
            java.lang.String r9 = r9.toString()
            r8.debug(r9)
        L23:
            java.util.Map<cz.msebera.android.httpclient.HttpConnection, cz.msebera.android.httpclient.impl.conn.IdleConnectionHandler$TimeValues> r8 = r7.connectionToTimes
            java.util.Set r8 = r8.entrySet()
            java.util.Iterator r8 = r8.iterator()
        L2d:
            boolean r9 = r8.hasNext()
            if (r9 == 0) goto L78
            java.lang.Object r9 = r8.next()
            java.util.Map$Entry r9 = (java.util.Map.Entry) r9
            java.lang.Object r2 = r9.getKey()
            cz.msebera.android.httpclient.HttpConnection r2 = (cz.msebera.android.httpclient.HttpConnection) r2
            java.lang.Object r9 = r9.getValue()
            cz.msebera.android.httpclient.impl.conn.IdleConnectionHandler$TimeValues r9 = (cz.msebera.android.httpclient.impl.conn.IdleConnectionHandler.TimeValues) r9
            long r3 = cz.msebera.android.httpclient.impl.conn.IdleConnectionHandler.TimeValues.access$100(r9)
            int r9 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r9 > 0) goto L2d
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r9 = r7.log
            boolean r9 = r9.isDebugEnabled()
            if (r9 == 0) goto L6b
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r9 = r7.log
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "Closing idle connection, connection time: "
            r5.append(r6)
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r9.debug(r3)
        L6b:
            r2.close()     // Catch: java.io.IOException -> L6f
            goto L2d
        L6f:
            r9 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2 = r7.log
            java.lang.String r3 = "I/O error closing connection"
            r2.debug(r3, r9)
            goto L2d
        L78:
            return
    }

    public boolean remove(cz.msebera.android.httpclient.HttpConnection r6) {
            r5 = this;
            java.util.Map<cz.msebera.android.httpclient.HttpConnection, cz.msebera.android.httpclient.impl.conn.IdleConnectionHandler$TimeValues> r0 = r5.connectionToTimes
            java.lang.Object r6 = r0.remove(r6)
            cz.msebera.android.httpclient.impl.conn.IdleConnectionHandler$TimeValues r6 = (cz.msebera.android.httpclient.impl.conn.IdleConnectionHandler.TimeValues) r6
            r0 = 1
            if (r6 != 0) goto L13
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r6 = r5.log
            java.lang.String r1 = "Removing a connection that never existed!"
            r6.warn(r1)
            return r0
        L13:
            long r1 = java.lang.System.currentTimeMillis()
            long r3 = cz.msebera.android.httpclient.impl.conn.IdleConnectionHandler.TimeValues.access$000(r6)
            int r6 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r6 > 0) goto L20
            goto L21
        L20:
            r0 = 0
        L21:
            return r0
    }

    public void removeAll() {
            r1 = this;
            java.util.Map<cz.msebera.android.httpclient.HttpConnection, cz.msebera.android.httpclient.impl.conn.IdleConnectionHandler$TimeValues> r0 = r1.connectionToTimes
            r0.clear()
            return
    }
}

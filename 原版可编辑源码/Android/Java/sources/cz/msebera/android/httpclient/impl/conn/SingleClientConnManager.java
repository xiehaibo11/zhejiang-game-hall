package cz.msebera.android.httpclient.impl.conn;

import cz.msebera.android.httpclient.annotation.GuardedBy;
import cz.msebera.android.httpclient.annotation.ThreadSafe;
import cz.msebera.android.httpclient.conn.ClientConnectionManager;
import cz.msebera.android.httpclient.conn.ClientConnectionOperator;
import cz.msebera.android.httpclient.conn.ClientConnectionRequest;
import cz.msebera.android.httpclient.conn.ManagedClientConnection;
import cz.msebera.android.httpclient.conn.routing.HttpRoute;
import cz.msebera.android.httpclient.conn.routing.RouteTracker;
import cz.msebera.android.httpclient.conn.scheme.SchemeRegistry;
import cz.msebera.android.httpclient.extras.HttpClientAndroidLog;
import cz.msebera.android.httpclient.params.HttpParams;
import cz.msebera.android.httpclient.util.Args;
import cz.msebera.android.httpclient.util.Asserts;
import java.io.IOException;
import java.util.concurrent.TimeUnit;

@ThreadSafe
@Deprecated
public class SingleClientConnManager implements ClientConnectionManager {
    public static final String MISUSE_MESSAGE = "Invalid use of SingleClientConnManager: connection still allocated.\nMake sure to release the connection before allocating another one.";
    protected final boolean alwaysShutDown;
    protected final ClientConnectionOperator connOperator;

    @GuardedBy("this")
    protected volatile long connectionExpiresTime;
    protected volatile boolean isShutDown;

    @GuardedBy("this")
    protected volatile long lastReleaseTime;
    public HttpClientAndroidLog log;

    @GuardedBy("this")
    protected volatile ConnAdapter managedConn;
    protected final SchemeRegistry schemeRegistry;

    @GuardedBy("this")
    protected volatile PoolEntry uniquePoolEntry;

    @Deprecated
    public SingleClientConnManager(HttpParams httpParams, SchemeRegistry schemeRegistry) {
        this(schemeRegistry);
    }

    public SingleClientConnManager(SchemeRegistry schemeRegistry) {
        this.log = new HttpClientAndroidLog(getClass());
        Args.notNull(schemeRegistry, "Scheme registry");
        this.schemeRegistry = schemeRegistry;
        this.connOperator = createConnectionOperator(schemeRegistry);
        this.uniquePoolEntry = new PoolEntry();
        this.managedConn = null;
        this.lastReleaseTime = -1L;
        this.alwaysShutDown = false;
        this.isShutDown = false;
    }

    public SingleClientConnManager() {
        this(SchemeRegistryFactory.createDefault());
    }

    protected void finalize() throws Throwable {
        try {
            shutdown();
        } finally {
            super.finalize();
        }
    }

    @Override
    public SchemeRegistry getSchemeRegistry() {
        return this.schemeRegistry;
    }

    protected ClientConnectionOperator createConnectionOperator(SchemeRegistry schemeRegistry) {
        return new DefaultClientConnectionOperator(schemeRegistry);
    }

    protected final void assertStillUp() throws IllegalStateException {
        Asserts.check(!this.isShutDown, "Manager is shut down");
    }

    @Override
    public final ClientConnectionRequest requestConnection(final HttpRoute httpRoute, final Object obj) {
        return new ClientConnectionRequest() {
            @Override
            public void abortRequest() {
            }

            @Override
            public ManagedClientConnection getConnection(long j, TimeUnit timeUnit) {
                return SingleClientConnManager.this.getConnection(httpRoute, obj);
            }
        };
    }

    public ManagedClientConnection getConnection(HttpRoute httpRoute, Object obj) {
        boolean z;
        ConnAdapter connAdapter;
        Args.notNull(httpRoute, "Route");
        assertStillUp();
        if (this.log.isDebugEnabled()) {
            this.log.debug("Get connection for route " + httpRoute);
        }
        synchronized (this) {
            boolean z2 = true;
            boolean z3 = false;
            Asserts.check(this.managedConn == null, MISUSE_MESSAGE);
            closeExpiredConnections();
            if (this.uniquePoolEntry.connection.isOpen()) {
                RouteTracker routeTracker = this.uniquePoolEntry.tracker;
                z = routeTracker == null || !routeTracker.toRoute().equals(httpRoute);
            } else {
                z = false;
                z3 = true;
            }
            if (z) {
                try {
                    this.uniquePoolEntry.shutdown();
                } catch (IOException e) {
                    this.log.debug("Problem shutting down connection.", e);
                }
            } else {
                z2 = z3;
            }
            if (z2) {
                this.uniquePoolEntry = new PoolEntry();
            }
            this.managedConn = new ConnAdapter(this.uniquePoolEntry, httpRoute);
            connAdapter = this.managedConn;
        }
        return connAdapter;
    }

    @Override
    public void releaseConnection(ManagedClientConnection managedClientConnection, long j, TimeUnit timeUnit) {
        Args.check(managedClientConnection instanceof ConnAdapter, "Connection class mismatch, connection not obtained from this manager");
        assertStillUp();
        if (this.log.isDebugEnabled()) {
            this.log.debug("Releasing connection " + managedClientConnection);
        }
        ConnAdapter connAdapter = (ConnAdapter) managedClientConnection;
        synchronized (connAdapter) {
            if (connAdapter.poolEntry == null) {
                return;
            }
            Asserts.check(connAdapter.getManager() == this, "Connection not obtained from this manager");
            try {
                try {
                    if (connAdapter.isOpen() && (this.alwaysShutDown || !connAdapter.isMarkedReusable())) {
                        if (this.log.isDebugEnabled()) {
                            this.log.debug("Released connection open but not reusable.");
                        }
                        connAdapter.shutdown();
                    }
                    connAdapter.detach();
                    synchronized (this) {
                        this.managedConn = null;
                        this.lastReleaseTime = System.currentTimeMillis();
                        if (j > 0) {
                            this.connectionExpiresTime = timeUnit.toMillis(j) + this.lastReleaseTime;
                        } else {
                            this.connectionExpiresTime = Long.MAX_VALUE;
                        }
                    }
                } catch (IOException e) {
                    if (this.log.isDebugEnabled()) {
                        this.log.debug("Exception shutting down released connection.", e);
                    }
                    connAdapter.detach();
                    synchronized (this) {
                        this.managedConn = null;
                        this.lastReleaseTime = System.currentTimeMillis();
                        if (j > 0) {
                            this.connectionExpiresTime = timeUnit.toMillis(j) + this.lastReleaseTime;
                        } else {
                            this.connectionExpiresTime = Long.MAX_VALUE;
                        }
                    }
                }
            } catch (Throwable th) {
                connAdapter.detach();
                synchronized (this) {
                    this.managedConn = null;
                    this.lastReleaseTime = System.currentTimeMillis();
                    if (j > 0) {
                        this.connectionExpiresTime = timeUnit.toMillis(j) + this.lastReleaseTime;
                    } else {
                        this.connectionExpiresTime = Long.MAX_VALUE;
                    }
                    throw th;
                }
            }
        }
    }

    @Override
    public void closeExpiredConnections() {
        if (System.currentTimeMillis() >= this.connectionExpiresTime) {
            closeIdleConnections(0L, TimeUnit.MILLISECONDS);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x0034 A[Catch: all -> 0x0036, DONT_GENERATE, TryCatch #0 {, blocks: (B:4:0x0009, B:6:0x000d, B:8:0x0017, B:11:0x0026, B:14:0x002d, B:15:0x0034), top: B:20:0x0009, inners: #1 }] */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void closeIdleConnections(long j, TimeUnit timeUnit) {
        assertStillUp();
        Args.notNull(timeUnit, "Time unit");
        synchronized (this) {
            if (this.managedConn == null && this.uniquePoolEntry.connection.isOpen()) {
                if (this.lastReleaseTime <= System.currentTimeMillis() - timeUnit.toMillis(j)) {
                    try {
                        this.uniquePoolEntry.close();
                    } catch (IOException e) {
                        this.log.debug("Problem closing idle connection.", e);
                    }
                }
            }
        }
    }

    @Override
    public void shutdown() {
        this.isShutDown = true;
        synchronized (this) {
            try {
                try {
                    if (this.uniquePoolEntry != null) {
                        this.uniquePoolEntry.shutdown();
                    }
                    this.uniquePoolEntry = null;
                } catch (IOException e) {
                    this.log.debug("Problem while shutting down manager.", e);
                    this.uniquePoolEntry = null;
                }
                this.managedConn = null;
            } catch (Throwable th) {
                this.uniquePoolEntry = null;
                this.managedConn = null;
                throw th;
            }
        }
    }

    protected void revokeConnection() {
        ConnAdapter connAdapter = this.managedConn;
        if (connAdapter == null) {
            return;
        }
        connAdapter.detach();
        synchronized (this) {
            try {
                this.uniquePoolEntry.shutdown();
            } catch (IOException e) {
                this.log.debug("Problem while shutting down connection.", e);
            }
        }
    }

    protected class PoolEntry extends AbstractPoolEntry {
        protected PoolEntry() {
            super(SingleClientConnManager.this.connOperator, null);
        }

        protected void close() throws IOException {
            shutdownEntry();
            if (this.connection.isOpen()) {
                this.connection.close();
            }
        }

        protected void shutdown() throws IOException {
            shutdownEntry();
            if (this.connection.isOpen()) {
                this.connection.shutdown();
            }
        }
    }

    protected class ConnAdapter extends AbstractPooledConnAdapter {
        protected ConnAdapter(PoolEntry poolEntry, HttpRoute httpRoute) {
            super(SingleClientConnManager.this, poolEntry);
            markReusable();
            poolEntry.route = httpRoute;
        }
    }
}

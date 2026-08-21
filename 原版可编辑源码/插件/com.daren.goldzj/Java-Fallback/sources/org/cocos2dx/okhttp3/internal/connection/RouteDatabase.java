package org.cocos2dx.okhttp3.internal.connection;

import java.util.LinkedHashSet;
import java.util.Set;
import org.cocos2dx.okhttp3.Route;

public final class RouteDatabase {
    private final Set<Route> failedRoutes;

    public RouteDatabase() {
        this.failedRoutes = new LinkedHashSet();
    }

    public synchronized void failed(Route r2) {
        monitor-enter(this);
        this.failedRoutes.add(r2);     // Catch: Throwable -> L6
        monitor-exit(this);
        return;
    L6:
        th = move-exception;
        throw th;
    }

    public synchronized void connected(Route r2) {
        monitor-enter(this);
        this.failedRoutes.remove(r2);     // Catch: Throwable -> L6
        monitor-exit(this);
        return;
    L6:
        th = move-exception;
        throw th;
    }

    public synchronized boolean shouldPostpone(Route r2) {
        monitor-enter(this);
        boolean r22 = this.failedRoutes.contains(r2);     // Catch: Throwable -> L6
        monitor-exit(this);
        return r22;
    L6:
        th = move-exception;
        throw th;
    }
}

package android.support.v4.app;

import android.app.Notification;
import android.app.Service;
import android.content.Intent;
import android.os.Build;
import android.os.IBinder;
import android.os.RemoteException;
import android.support.v4.app.INotificationSideChannel;

public abstract class NotificationCompatSideChannelService extends Service {

    private class NotificationSideChannelStub extends INotificationSideChannel.Stub {
        final NotificationCompatSideChannelService this$0;

        NotificationSideChannelStub(NotificationCompatSideChannelService r1) {
            this.this$0 = r1;
        }

        @Override
        public void notify(String r4, int r5, String r6, Notification r7) throws RemoteException {
            this.this$0.checkPermission(getCallingUid(), r4);
            long r0 = clearCallingIdentity();
            this.this$0.notify(r4, r5, r6, r7);     // Catch: Throwable -> L6
            restoreCallingIdentity(r0);
            return;
        L6:
            th = move-exception;
            restoreCallingIdentity(r0);
            throw th;
        }

        @Override
        public void cancel(String r4, int r5, String r6) throws RemoteException {
            this.this$0.checkPermission(getCallingUid(), r4);
            long r0 = clearCallingIdentity();
            this.this$0.cancel(r4, r5, r6);     // Catch: Throwable -> L6
            restoreCallingIdentity(r0);
            return;
        L6:
            th = move-exception;
            restoreCallingIdentity(r0);
            throw th;
        }

        @Override
        public void cancelAll(String r4) {
            this.this$0.checkPermission(getCallingUid(), r4);
            long r0 = clearCallingIdentity();
            this.this$0.cancelAll(r4);     // Catch: Throwable -> L6
            restoreCallingIdentity(r0);
            return;
        L6:
            th = move-exception;
            restoreCallingIdentity(r0);
            throw th;
        }
    }

    public abstract void cancel(String r1, int r2, String r3);

    public abstract void cancelAll(String r1);

    public abstract void notify(String r1, int r2, String r3, Notification r4);

    public NotificationCompatSideChannelService() {
    }

    @Override
    public IBinder onBind(Intent r3) {
        if (r3.getAction().equals(NotificationManagerCompat.ACTION_BIND_SIDE_CHANNEL) == true) goto L5;
        return null;
    L5:
        if (Build.VERSION.SDK_INT <= 19) goto L8;
        return null;
    L8:
        return new NotificationSideChannelStub(this);
    }

    void checkPermission(int r5, String r6) {
        String[] r0 = getPackageManager().getPackagesForUid(r5);
        int r1 = r0.length;
        int r2 = 0;
    L3:
        if (r2 >= r1) goto L9;
        if (r0[r2].equals(r6) == true) goto L6;
        r2 = r2 + 1;
        goto L3
    L6:
        return;
    L9:
        throw new SecurityException("NotificationSideChannelService: Uid " + r5 + " is not authorized for package " + r6);
    }
}

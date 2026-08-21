package com.kwad.framework.filedownloader.f;

public class a {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(java.lang.String r2, java.lang.Object... r3) {
            java.lang.Class<com.kwad.framework.filedownloader.f.a> r0 = com.kwad.framework.filedownloader.f.a.class
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            java.lang.String r2 = ", but the download service isn't connected yet.\nYou can use FileDownloader#isServiceConnected() to check whether the service has been connected, \nbesides you can use following functions easier to control your requestHttpCode invoke after the service has been connected: \n1. FileDownloader#bindService(Runnable)\n2. FileDownloader#insureServiceBind()\n3. FileDownloader#insureServiceBindAsync()"
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            com.kwad.framework.filedownloader.f.d.d(r0, r2, r3)
            return
    }

    public static boolean aY(int r2) {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r1 = 0
            r0[r1] = r2
            java.lang.String r2 = "request pause the task[%d] in the download service"
            a(r2, r0)
            return r1
    }

    public static byte aZ(int r2) {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r1 = 0
            r0[r1] = r2
            java.lang.String r2 = "request get the status for the task[%d] in the download service"
            a(r2, r0)
            return r1
    }

    public static boolean ba(int r2) {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r1 = 0
            r0[r1] = r2
            java.lang.String r2 = "request clear the task[%d] data in the database"
            a(r2, r0)
            return r1
    }

    public static boolean h(java.lang.String r2, java.lang.String r3, boolean r4) {
            r0 = 3
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r2
            r2 = 1
            r0[r2] = r3
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r4)
            r3 = 2
            r0[r3] = r2
            java.lang.String r2 = "request start the task([%s], [%s], [%B]) in the download service"
            a(r2, r0)
            return r1
    }
}

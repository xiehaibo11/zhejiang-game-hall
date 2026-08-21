package com.alipay.android.phone.mrpc.core;

public final class j extends com.alipay.android.phone.mrpc.core.a {
    public com.alipay.android.phone.mrpc.core.g g;

    public j(com.alipay.android.phone.mrpc.core.g r8, java.lang.reflect.Method r9, int r10, java.lang.String r11, byte[] r12, boolean r13) {
            r7 = this;
            java.lang.String r5 = "application/x-www-form-urlencoded"
            r0 = r7
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r6 = r13
            r0.<init>(r1, r2, r3, r4, r5, r6)
            r7.g = r8
            return
    }

    @Override
    public final java.lang.Object a() {
            r6 = this;
            java.lang.String r0 = ""
            com.alipay.android.phone.mrpc.core.o r1 = new com.alipay.android.phone.mrpc.core.o
            com.alipay.android.phone.mrpc.core.g r2 = r6.g
            java.lang.String r2 = r2.a()
            r1.<init>(r2)
            byte[] r2 = r6.b
            r1.a(r2)
            java.lang.String r2 = r6.e
            r1.a(r2)
            boolean r2 = r6.f
            r1.a(r2)
            int r2 = r6.d
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r3 = "id"
            r1.a(r3, r2)
            java.lang.String r2 = r6.c
            java.lang.String r3 = "operationType"
            r1.a(r3, r2)
            com.alipay.android.phone.mrpc.core.g r2 = r6.g
            boolean r2 = r2.d()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r3 = "gzip"
            r1.a(r3, r2)
            org.apache.http.message.BasicHeader r2 = new org.apache.http.message.BasicHeader
            java.util.UUID r3 = java.util.UUID.randomUUID()
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "uuid"
            r2.<init>(r4, r3)
            r1.a(r2)
            com.alipay.android.phone.mrpc.core.g r2 = r6.g
            com.alipay.android.phone.mrpc.core.aa r2 = r2.c()
            java.util.List r2 = r2.b()
            if (r2 == 0) goto L75
            boolean r3 = r2.isEmpty()
            if (r3 != 0) goto L75
            java.util.Iterator r2 = r2.iterator()
        L65:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L75
            java.lang.Object r3 = r2.next()
            org.apache.http.Header r3 = (org.apache.http.Header) r3
            r1.a(r3)
            goto L65
        L75:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "threadid = "
            r2.<init>(r3)
            java.lang.Thread r3 = java.lang.Thread.currentThread()
            long r3 = r3.getId()
            r2.append(r3)
            java.lang.String r3 = "; "
            r2.append(r3)
            java.lang.String r3 = r1.toString()
            r2.append(r3)
            r2 = 9
            r3 = 13
            com.alipay.android.phone.mrpc.core.g r4 = r6.g     // Catch: java.util.concurrent.CancellationException -> Lba java.util.concurrent.ExecutionException -> Lc5 java.lang.InterruptedException -> L106
            com.alipay.android.phone.mrpc.core.ab r4 = r4.b()     // Catch: java.util.concurrent.CancellationException -> Lba java.util.concurrent.ExecutionException -> Lc5 java.lang.InterruptedException -> L106
            java.util.concurrent.Future r1 = r4.a(r1)     // Catch: java.util.concurrent.CancellationException -> Lba java.util.concurrent.ExecutionException -> Lc5 java.lang.InterruptedException -> L106
            java.lang.Object r1 = r1.get()     // Catch: java.util.concurrent.CancellationException -> Lba java.util.concurrent.ExecutionException -> Lc5 java.lang.InterruptedException -> L106
            com.alipay.android.phone.mrpc.core.u r1 = (com.alipay.android.phone.mrpc.core.u) r1     // Catch: java.util.concurrent.CancellationException -> Lba java.util.concurrent.ExecutionException -> Lc5 java.lang.InterruptedException -> L106
            if (r1 == 0) goto Lae
            byte[] r0 = r1.b()     // Catch: java.util.concurrent.CancellationException -> Lba java.util.concurrent.ExecutionException -> Lc5 java.lang.InterruptedException -> L106
            return r0
        Lae:
            com.alipay.android.phone.mrpc.core.RpcException r1 = new com.alipay.android.phone.mrpc.core.RpcException     // Catch: java.util.concurrent.CancellationException -> Lba java.util.concurrent.ExecutionException -> Lc5 java.lang.InterruptedException -> L106
            java.lang.Integer r4 = java.lang.Integer.valueOf(r2)     // Catch: java.util.concurrent.CancellationException -> Lba java.util.concurrent.ExecutionException -> Lc5 java.lang.InterruptedException -> L106
            java.lang.String r5 = "response is null"
            r1.<init>(r4, r5)     // Catch: java.util.concurrent.CancellationException -> Lba java.util.concurrent.ExecutionException -> Lc5 java.lang.InterruptedException -> L106
            throw r1     // Catch: java.util.concurrent.CancellationException -> Lba java.util.concurrent.ExecutionException -> Lc5 java.lang.InterruptedException -> L106
        Lba:
            r1 = move-exception
            com.alipay.android.phone.mrpc.core.RpcException r2 = new com.alipay.android.phone.mrpc.core.RpcException
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r2.<init>(r3, r0, r1)
            throw r2
        Lc5:
            r1 = move-exception
            java.lang.Throwable r3 = r1.getCause()
            if (r3 == 0) goto Lfc
            boolean r4 = r3 instanceof com.alipay.android.phone.mrpc.core.HttpException
            if (r4 == 0) goto Lfc
            com.alipay.android.phone.mrpc.core.HttpException r3 = (com.alipay.android.phone.mrpc.core.HttpException) r3
            com.alipay.android.phone.mrpc.core.RpcException r0 = new com.alipay.android.phone.mrpc.core.RpcException
            int r1 = r3.getCode()
            switch(r1) {
                case 1: goto Lef;
                case 2: goto Led;
                case 3: goto Leb;
                case 4: goto Le9;
                case 5: goto Le7;
                case 6: goto Le5;
                case 7: goto Le2;
                case 8: goto Ldf;
                case 9: goto Ldc;
                default: goto Ldb;
            }
        Ldb:
            goto Lf0
        Ldc:
            r1 = 16
            goto Lf0
        Ldf:
            r1 = 15
            goto Lf0
        Le2:
            r1 = 8
            goto Lf0
        Le5:
            r1 = 7
            goto Lf0
        Le7:
            r1 = 6
            goto Lf0
        Le9:
            r1 = 5
            goto Lf0
        Leb:
            r1 = 4
            goto Lf0
        Led:
            r1 = 3
            goto Lf0
        Lef:
            r1 = 2
        Lf0:
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = r3.getMsg()
            r0.<init>(r1, r2)
            throw r0
        Lfc:
            com.alipay.android.phone.mrpc.core.RpcException r3 = new com.alipay.android.phone.mrpc.core.RpcException
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3.<init>(r2, r0, r1)
            throw r3
        L106:
            r1 = move-exception
            com.alipay.android.phone.mrpc.core.RpcException r2 = new com.alipay.android.phone.mrpc.core.RpcException
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r2.<init>(r3, r0, r1)
            goto L112
        L111:
            throw r2
        L112:
            goto L111
    }
}

package com.bianfeng.datafunsdk;

public class PostDatalib {
    public static volatile com.bianfeng.datafunsdk.PostDatalib dataFun;
    public com.bianfeng.datafunsdk.a dataFunCallback;
    public com.bianfeng.datafunsdk.k dbQueueManager;
    public com.bianfeng.datafunsdk.timer.SelectEventTimer eventTimer;
    public boolean isFirst;
    public com.bianfeng.datafunsdk.t requestManager;

    public class a implements com.bianfeng.datafunsdk.a {
        public final com.bianfeng.datafunsdk.PostDatalib a;

        public class a implements java.lang.Runnable {
            public final com.bianfeng.datafunsdk.bean.DataFunBean a;
            public final com.bianfeng.datafunsdk.PostDatalib.a b;

            public a(com.bianfeng.datafunsdk.PostDatalib.a r1, com.bianfeng.datafunsdk.bean.DataFunBean r2) {
                    r0 = this;
                    r0.b = r1
                    r0.a = r2
                    r0.<init>()
                    return
            }

            @Override
            public void run() {
                    r2 = this;
                    java.lang.String r0 = "PostDatalib 插入数据成功--"
                    com.bianfeng.datafunsdk.x.a(r0)
                    com.bianfeng.datafunsdk.PostDatalib$a r0 = r2.b
                    com.bianfeng.datafunsdk.PostDatalib r0 = r0.a
                    com.bianfeng.datafunsdk.bean.DataFunBean r1 = r2.a
                    com.bianfeng.datafunsdk.PostDatalib.access$000(r0, r1)
                    return
            }
        }

        public class b implements java.lang.Runnable {
            public final com.bianfeng.datafunsdk.bean.DataFunBean a;
            public final com.bianfeng.datafunsdk.PostDatalib.a b;

            public b(com.bianfeng.datafunsdk.PostDatalib.a r1, com.bianfeng.datafunsdk.bean.DataFunBean r2) {
                    r0 = this;
                    r0.b = r1
                    r0.a = r2
                    r0.<init>()
                    return
            }

            @Override
            public void run() {
                    r2 = this;
                    java.lang.String r0 = "PostDatalib 插入数据失败--"
                    com.bianfeng.datafunsdk.x.a(r0)
                    com.bianfeng.datafunsdk.PostDatalib$a r0 = r2.b
                    com.bianfeng.datafunsdk.PostDatalib r0 = r0.a
                    com.bianfeng.datafunsdk.bean.DataFunBean r1 = r2.a
                    com.bianfeng.datafunsdk.PostDatalib.access$000(r0, r1)
                    return
            }
        }

        public class c implements java.lang.Runnable {
            public final java.util.List a;
            public final com.bianfeng.datafunsdk.PostDatalib.a b;

            public c(com.bianfeng.datafunsdk.PostDatalib.a r1, java.util.List r2) {
                    r0 = this;
                    r0.b = r1
                    r0.a = r2
                    r0.<init>()
                    return
            }

            @Override
            public void run() {
                    r2 = this;
                    java.lang.StringBuilder r0 = new java.lang.StringBuilder
                    r0.<init>()
                    java.lang.String r1 = "PostDatalib 插入数据失败--"
                    r0.append(r1)
                    java.util.List r1 = r2.a
                    int r1 = r1.size()
                    r0.append(r1)
                    java.lang.String r0 = r0.toString()
                    com.bianfeng.datafunsdk.x.a(r0)
                    com.bianfeng.datafunsdk.PostDatalib$a r0 = r2.b
                    com.bianfeng.datafunsdk.PostDatalib r0 = r0.a
                    java.util.List r1 = r2.a
                    com.bianfeng.datafunsdk.PostDatalib.access$100(r0, r1)
                    return
            }
        }

        public class d implements java.lang.Runnable {
            public final com.bianfeng.datafunsdk.PostDatalib.a a;

            public d(com.bianfeng.datafunsdk.PostDatalib.a r1) {
                    r0 = this;
                    r0.a = r1
                    r0.<init>()
                    return
            }

            @Override
            public void run() {
                    r2 = this;
                    java.lang.String r0 = "PostDatalib 查询无结果--"
                    com.bianfeng.datafunsdk.x.a(r0)
                    com.bianfeng.datafunsdk.PostDatalib$a r0 = r2.a
                    com.bianfeng.datafunsdk.PostDatalib r0 = r0.a
                    r0.cancelTimer()
                    int r0 = com.bianfeng.datafunsdk.y.a()
                    com.bianfeng.datafunsdk.g r1 = com.bianfeng.datafunsdk.g.b
                    int r1 = r1.ordinal()
                    if (r0 != r1) goto L1f
                    com.bianfeng.datafunsdk.PostDatalib$a r0 = r2.a
                    com.bianfeng.datafunsdk.PostDatalib r0 = r0.a
                    com.bianfeng.datafunsdk.PostDatalib.access$200(r0)
                L1f:
                    return
            }
        }

        public class e implements java.lang.Runnable {
            public final com.bianfeng.datafunsdk.PostDatalib.a a;

            public e(com.bianfeng.datafunsdk.PostDatalib.a r1) {
                    r0 = this;
                    r0.a = r1
                    r0.<init>()
                    return
            }

            @Override
            public void run() {
                    r1 = this;
                    java.lang.String r0 = "PostDatalib 查询开始--"
                    com.bianfeng.datafunsdk.x.a(r0)
                    com.bianfeng.datafunsdk.PostDatalib$a r0 = r1.a
                    com.bianfeng.datafunsdk.PostDatalib r0 = r0.a
                    com.bianfeng.datafunsdk.PostDatalib.access$300(r0)
                    return
            }
        }

        public class f implements java.lang.Runnable {
            public final com.bianfeng.datafunsdk.f a;
            public final com.bianfeng.datafunsdk.PostDatalib.a b;

            public f(com.bianfeng.datafunsdk.PostDatalib.a r1, com.bianfeng.datafunsdk.f r2) {
                    r0 = this;
                    r0.b = r1
                    r0.a = r2
                    r0.<init>()
                    return
            }

            @Override
            public void run() {
                    r2 = this;
                    java.lang.String r0 = "PostDatalib  删除失败，=====要删除--"
                    com.bianfeng.datafunsdk.x.a(r0)
                    com.bianfeng.datafunsdk.PostDatalib$a r0 = r2.b
                    com.bianfeng.datafunsdk.PostDatalib r0 = r0.a
                    com.bianfeng.datafunsdk.f r1 = r2.a
                    com.bianfeng.datafunsdk.PostDatalib.access$400(r0, r1)
                    return
            }
        }

        public class g implements java.lang.Runnable {
            public final com.bianfeng.datafunsdk.bean.DataFunBean a;
            public final com.bianfeng.datafunsdk.PostDatalib.a b;

            public g(com.bianfeng.datafunsdk.PostDatalib.a r1, com.bianfeng.datafunsdk.bean.DataFunBean r2) {
                    r0 = this;
                    r0.b = r1
                    r0.a = r2
                    r0.<init>()
                    return
            }

            @Override
            public void run() {
                    r2 = this;
                    java.lang.StringBuilder r0 = new java.lang.StringBuilder
                    r0.<init>()
                    java.lang.String r1 = "PostDatalib suc--"
                    r0.append(r1)
                    com.bianfeng.datafunsdk.bean.DataFunBean r1 = r2.a
                    java.lang.String r1 = r1.getData()
                    r0.append(r1)
                    java.lang.String r0 = r0.toString()
                    com.bianfeng.datafunsdk.x.a(r0)
                    com.bianfeng.datafunsdk.PostDatalib$a r0 = r2.b
                    com.bianfeng.datafunsdk.PostDatalib r0 = r0.a
                    com.bianfeng.datafunsdk.bean.DataFunBean r1 = r2.a
                    com.bianfeng.datafunsdk.PostDatalib.access$500(r0, r1)
                    return
            }
        }

        public class h implements java.lang.Runnable {
            public final com.bianfeng.datafunsdk.o a;
            public final com.bianfeng.datafunsdk.PostDatalib.a b;

            public h(com.bianfeng.datafunsdk.PostDatalib.a r1, com.bianfeng.datafunsdk.o r2) {
                    r0 = this;
                    r0.b = r1
                    r0.a = r2
                    r0.<init>()
                    return
            }

            @Override
            public void run() {
                    r2 = this;
                    java.lang.String r0 = "PostDatalib  上传失败，重复上抛"
                    com.bianfeng.datafunsdk.x.a(r0)
                    com.bianfeng.datafunsdk.PostDatalib$a r0 = r2.b
                    com.bianfeng.datafunsdk.PostDatalib r0 = r0.a
                    com.bianfeng.datafunsdk.o r1 = r2.a
                    com.bianfeng.datafunsdk.PostDatalib.access$600(r0, r1)
                    return
            }
        }

        public a(com.bianfeng.datafunsdk.PostDatalib r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void a() {
                r1 = this;
                com.bianfeng.datafunsdk.PostDatalib$a$e r0 = new com.bianfeng.datafunsdk.PostDatalib$a$e
                r0.<init>(r1)
                com.bianfeng.datafunsdk.u.a(r0)
                return
        }

        @Override
        public void a(com.bianfeng.datafunsdk.bean.DataFunBean r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "PostDatalib 删除成功--"
                r0.append(r1)
                int r3 = r3.getId()
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                com.bianfeng.datafunsdk.x.a(r3)
                return
        }

        @Override
        public void a(com.bianfeng.datafunsdk.f r2) {
                r1 = this;
                com.bianfeng.datafunsdk.PostDatalib$a$f r0 = new com.bianfeng.datafunsdk.PostDatalib$a$f
                r0.<init>(r1, r2)
                com.bianfeng.datafunsdk.u.a(r0)
                return
        }

        @Override
        public void a(com.bianfeng.datafunsdk.o r2) {
                r1 = this;
                com.bianfeng.datafunsdk.PostDatalib$a$h r0 = new com.bianfeng.datafunsdk.PostDatalib$a$h
                r0.<init>(r1, r2)
                com.bianfeng.datafunsdk.u.a(r0)
                return
        }

        @Override
        public void a(java.util.List<com.bianfeng.datafunsdk.bean.DataFunBean> r5) {
                r4 = this;
                java.util.Iterator r0 = r5.iterator()
            L4:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L25
                java.lang.Object r1 = r0.next()
                com.bianfeng.datafunsdk.bean.DataFunBean r1 = (com.bianfeng.datafunsdk.bean.DataFunBean) r1
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = "PostDatalib 查询到数据成功--"
                r2.append(r3)
                r2.append(r1)
                java.lang.String r1 = r2.toString()
                com.bianfeng.datafunsdk.x.a(r1)
                goto L4
            L25:
                com.bianfeng.datafunsdk.PostDatalib$a$c r0 = new com.bianfeng.datafunsdk.PostDatalib$a$c
                r0.<init>(r4, r5)
                com.bianfeng.datafunsdk.u.a(r0)
                return
        }

        @Override
        public void b() {
                r1 = this;
                com.bianfeng.datafunsdk.PostDatalib$a$d r0 = new com.bianfeng.datafunsdk.PostDatalib$a$d
                r0.<init>(r1)
                com.bianfeng.datafunsdk.u.a(r0)
                return
        }

        @Override
        public void b(com.bianfeng.datafunsdk.bean.DataFunBean r2) {
                r1 = this;
                com.bianfeng.datafunsdk.PostDatalib$a$b r0 = new com.bianfeng.datafunsdk.PostDatalib$a$b
                r0.<init>(r1, r2)
                com.bianfeng.datafunsdk.u.a(r0)
                return
        }

        @Override
        public void c(com.bianfeng.datafunsdk.bean.DataFunBean r2) {
                r1 = this;
                com.bianfeng.datafunsdk.PostDatalib$a$a r0 = new com.bianfeng.datafunsdk.PostDatalib$a$a
                r0.<init>(r1, r2)
                com.bianfeng.datafunsdk.u.a(r0)
                return
        }

        @Override
        public void d(com.bianfeng.datafunsdk.bean.DataFunBean r2) {
                r1 = this;
                com.bianfeng.datafunsdk.PostDatalib$a$g r0 = new com.bianfeng.datafunsdk.PostDatalib$a$g
                r0.<init>(r1, r2)
                com.bianfeng.datafunsdk.u.a(r0)
                return
        }

        @Override
        public void e(com.bianfeng.datafunsdk.bean.DataFunBean r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "PostDatalib 上传失败 id=="
                r0.append(r1)
                int r3 = r3.getId()
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                com.bianfeng.datafunsdk.x.a(r3)
                com.bianfeng.datafunsdk.PostDatalib r3 = r2.a
                r3.startTimer()
                return
        }

        @Override
        public void f(com.bianfeng.datafunsdk.bean.DataFunBean r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "PostDatalib 删除失败 超过三次了 id=="
                r0.append(r1)
                int r3 = r3.getId()
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                com.bianfeng.datafunsdk.x.a(r3)
                return
        }
    }

    public PostDatalib() {
            r1 = this;
            r1.<init>()
            com.bianfeng.datafunsdk.PostDatalib$a r0 = new com.bianfeng.datafunsdk.PostDatalib$a
            r0.<init>(r1)
            r1.dataFunCallback = r0
            return
    }

    public static void access$000(com.bianfeng.datafunsdk.PostDatalib r0, com.bianfeng.datafunsdk.bean.DataFunBean r1) {
            r0.postByteDataWhitHttp(r1)
            return
    }

    public static void access$100(com.bianfeng.datafunsdk.PostDatalib r0, java.util.List r1) {
            r0.postByteDataWhitHttp(r1)
            return
    }

    public static void access$200(com.bianfeng.datafunsdk.PostDatalib r0) {
            r0.delBd()
            return
    }

    public static void access$300(com.bianfeng.datafunsdk.PostDatalib r0) {
            r0.selectByteData()
            return
    }

    public static void access$400(com.bianfeng.datafunsdk.PostDatalib r0, com.bianfeng.datafunsdk.f r1) {
            r0.delByteDataTask(r1)
            return
    }

    public static void access$500(com.bianfeng.datafunsdk.PostDatalib r0, com.bianfeng.datafunsdk.bean.DataFunBean r1) {
            r0.delByteData(r1)
            return
    }

    public static void access$600(com.bianfeng.datafunsdk.PostDatalib r0, com.bianfeng.datafunsdk.o r1) {
            r0.postByteDataWhitHttp(r1)
            return
    }

    private void delBd() {
            r1 = this;
            java.lang.String r0 = "PostDatalib delBd--"
            com.bianfeng.datafunsdk.x.a(r0)
            com.bianfeng.datafunsdk.k r0 = r1.dbQueueManager
            if (r0 == 0) goto Lc
            r0.a()
        Lc:
            return
    }

    private void delByteData(com.bianfeng.datafunsdk.bean.DataFunBean r2) {
            r1 = this;
            com.bianfeng.datafunsdk.k r0 = r1.dbQueueManager
            if (r0 != 0) goto L5
            return
        L5:
            r0.b(r2)
            return
    }

    private void delByteDataTask(com.bianfeng.datafunsdk.f r2) {
            r1 = this;
            com.bianfeng.datafunsdk.k r0 = r1.dbQueueManager
            if (r0 != 0) goto L5
            return
        L5:
            r0.a(r2)
            return
    }

    public static com.bianfeng.datafunsdk.PostDatalib getInstance() {
            com.bianfeng.datafunsdk.PostDatalib r0 = com.bianfeng.datafunsdk.PostDatalib.dataFun
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.datafunsdk.PostDatalib> r0 = com.bianfeng.datafunsdk.PostDatalib.class
            monitor-enter(r0)
            com.bianfeng.datafunsdk.PostDatalib r1 = com.bianfeng.datafunsdk.PostDatalib.dataFun     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.datafunsdk.PostDatalib r1 = new com.bianfeng.datafunsdk.PostDatalib     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.datafunsdk.PostDatalib.dataFun = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.datafunsdk.PostDatalib r0 = com.bianfeng.datafunsdk.PostDatalib.dataFun
            return r0
    }

    private void postByteDataWhitHttp(com.bianfeng.datafunsdk.bean.DataFunBean r2) {
            r1 = this;
            com.bianfeng.datafunsdk.t r0 = r1.requestManager
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    private void postByteDataWhitHttp(com.bianfeng.datafunsdk.o r2) {
            r1 = this;
            com.bianfeng.datafunsdk.t r0 = r1.requestManager
            if (r0 != 0) goto L5
            return
        L5:
            r0.a(r2)
            return
    }

    private void postByteDataWhitHttp(java.util.List<com.bianfeng.datafunsdk.bean.DataFunBean> r3) {
            r2 = this;
            com.bianfeng.datafunsdk.t r0 = r2.requestManager
            if (r0 != 0) goto L5
            return
        L5:
            java.util.Iterator r3 = r3.iterator()
        L9:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L20
            java.lang.Object r0 = r3.next()
            com.bianfeng.datafunsdk.bean.DataFunBean r0 = (com.bianfeng.datafunsdk.bean.DataFunBean) r0
            java.lang.String r1 = "PostDatalib 查询到的数据上抛--"
            com.bianfeng.datafunsdk.x.a(r1)
            com.bianfeng.datafunsdk.t r1 = r2.requestManager
            r1.a(r0)
            goto L9
        L20:
            return
    }

    private void selectByteData() {
            r1 = this;
            com.bianfeng.datafunsdk.k r0 = r1.dbQueueManager
            if (r0 != 0) goto L5
            return
        L5:
            r0.c()
            return
    }

    public void cancelTimer() {
            r1 = this;
            com.bianfeng.datafunsdk.timer.SelectEventTimer r0 = r1.eventTimer
            if (r0 == 0) goto L7
            r0.cancel()
        L7:
            return
    }

    public java.lang.String getVersion() {
            r1 = this;
            java.lang.String r0 = "1.1.0"
            return r0
    }

    public void init(android.content.Context r3) {
            r2 = this;
            boolean r0 = r2.isFirst
            if (r0 != 0) goto L40
            java.lang.Class<com.bianfeng.datafunsdk.PostDatalib> r0 = com.bianfeng.datafunsdk.PostDatalib.class
            monitor-enter(r0)
            boolean r1 = r2.isFirst     // Catch: java.lang.Throwable -> L3d
            if (r1 != 0) goto L3b
            r1 = 1
            r2.isFirst = r1     // Catch: java.lang.Throwable -> L3d
            com.bianfeng.ymnsdk.utilslib.UtilsSdk.initContext(r3)     // Catch: java.lang.Throwable -> L3d
            com.bianfeng.datafunsdk.t r3 = new com.bianfeng.datafunsdk.t     // Catch: java.lang.Throwable -> L3d
            r3.<init>()     // Catch: java.lang.Throwable -> L3d
            r2.requestManager = r3     // Catch: java.lang.Throwable -> L3d
            com.bianfeng.datafunsdk.k r3 = new com.bianfeng.datafunsdk.k     // Catch: java.lang.Throwable -> L3d
            r3.<init>()     // Catch: java.lang.Throwable -> L3d
            r2.dbQueueManager = r3     // Catch: java.lang.Throwable -> L3d
            com.bianfeng.datafunsdk.a r1 = r2.dataFunCallback     // Catch: java.lang.Throwable -> L3d
            r3.a(r1)     // Catch: java.lang.Throwable -> L3d
            com.bianfeng.datafunsdk.t r3 = r2.requestManager     // Catch: java.lang.Throwable -> L3d
            com.bianfeng.datafunsdk.a r1 = r2.dataFunCallback     // Catch: java.lang.Throwable -> L3d
            r3.a(r1)     // Catch: java.lang.Throwable -> L3d
            com.bianfeng.datafunsdk.timer.SelectEventTimer r3 = com.bianfeng.datafunsdk.timer.SelectEventTimer.getInstance()     // Catch: java.lang.Throwable -> L3d
            r2.eventTimer = r3     // Catch: java.lang.Throwable -> L3d
            com.bianfeng.datafunsdk.a r1 = r2.dataFunCallback     // Catch: java.lang.Throwable -> L3d
            r3.setCallback(r1)     // Catch: java.lang.Throwable -> L3d
            com.bianfeng.datafunsdk.timer.SelectEventTimer r3 = r2.eventTimer     // Catch: java.lang.Throwable -> L3d
            r3.start()     // Catch: java.lang.Throwable -> L3d
        L3b:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3d
            goto L40
        L3d:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3d
            throw r3
        L40:
            return
    }

    public void postByteData(com.bianfeng.datafunsdk.bean.DataFunBean r2) {
            r1 = this;
            java.lang.String r0 = "PostDatalib 开始插入数据--"
            com.bianfeng.datafunsdk.x.a(r0)
            com.bianfeng.datafunsdk.k r0 = r1.dbQueueManager
            if (r0 == 0) goto Lc
            r0.a(r2)
        Lc:
            return
    }

    public void startTimer() {
            r2 = this;
            com.bianfeng.datafunsdk.k r0 = r2.dbQueueManager
            if (r0 == 0) goto L20
            com.bianfeng.datafunsdk.t r1 = r2.requestManager
            if (r1 == 0) goto L20
            boolean r0 = r0.b()
            if (r0 == 0) goto L20
            com.bianfeng.datafunsdk.t r0 = r2.requestManager
            boolean r0 = r0.b()
            if (r0 == 0) goto L20
            java.lang.String r0 = "PostDatalib startTimer--"
            com.bianfeng.datafunsdk.x.a(r0)
            com.bianfeng.datafunsdk.timer.SelectEventTimer r0 = r2.eventTimer
            r0.start()
        L20:
            return
    }
}

.class public Lcom/alipay/sdk/util/e;
.super Ljava/lang/Object;
.source "SourceFile"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/alipay/sdk/util/e$a;
    }
.end annotation


# static fields
.field public static final a:Ljava/lang/String; = "failed"

.field public static final b:Ljava/lang/String; = "scheme_failed"


# instance fields
.field private c:Landroid/app/Activity;

.field private d:Lcom/alipay/android/app/IAlixPay;

.field private final e:Ljava/lang/Object;

.field private f:Z

.field private g:Lcom/alipay/sdk/util/e$a;

.field private h:Landroid/content/ServiceConnection;

.field private i:Ljava/lang/String;

.field private j:Lcom/alipay/android/app/IRemoteServiceCallback;


# direct methods
.method public constructor <init>(Landroid/app/Activity;Lcom/alipay/sdk/util/e$a;)V
    .locals 1

    .line 57
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 48
    const-class v0, Lcom/alipay/android/app/IAlixPay;

    iput-object v0, p0, Lcom/alipay/sdk/util/e;->e:Ljava/lang/Object;

    .line 62
    new-instance v0, Lcom/alipay/sdk/util/f;

    invoke-direct {v0, p0}, Lcom/alipay/sdk/util/f;-><init>(Lcom/alipay/sdk/util/e;)V

    iput-object v0, p0, Lcom/alipay/sdk/util/e;->h:Landroid/content/ServiceConnection;

    const/4 v0, 0x0

    .line 163
    iput-object v0, p0, Lcom/alipay/sdk/util/e;->i:Ljava/lang/String;

    .line 346
    new-instance v0, Lcom/alipay/sdk/util/h;

    invoke-direct {v0, p0}, Lcom/alipay/sdk/util/h;-><init>(Lcom/alipay/sdk/util/e;)V

    iput-object v0, p0, Lcom/alipay/sdk/util/e;->j:Lcom/alipay/android/app/IRemoteServiceCallback;

    .line 58
    iput-object p1, p0, Lcom/alipay/sdk/util/e;->c:Landroid/app/Activity;

    .line 59
    iput-object p2, p0, Lcom/alipay/sdk/util/e;->g:Lcom/alipay/sdk/util/e$a;

    return-void
.end method

.method static synthetic a(Lcom/alipay/sdk/util/e;Lcom/alipay/android/app/IAlixPay;)Lcom/alipay/android/app/IAlixPay;
    .locals 0

    .line 37
    iput-object p1, p0, Lcom/alipay/sdk/util/e;->d:Lcom/alipay/android/app/IAlixPay;

    return-object p1
.end method

.method static synthetic a(Lcom/alipay/sdk/util/e;)Ljava/lang/Object;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/alipay/sdk/util/e;->e:Ljava/lang/Object;

    return-object p0
.end method

.method static synthetic a(Lcom/alipay/sdk/util/e;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 37
    iput-object p1, p0, Lcom/alipay/sdk/util/e;->i:Ljava/lang/String;

    return-object p1
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 7

    .line 265
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 266
    invoke-virtual {v0, p2}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    .line 267
    invoke-static {p2}, Lcom/alipay/sdk/util/n;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 270
    iget-object v1, p0, Lcom/alipay/sdk/util/e;->c:Landroid/app/Activity;

    invoke-static {v1, p2}, Lcom/alipay/sdk/util/n;->a(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 273
    :try_start_0
    iget-object v2, p0, Lcom/alipay/sdk/util/e;->c:Landroid/app/Activity;

    invoke-virtual {v2}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/alipay/sdk/util/e;->h:Landroid/content/ServiceConnection;

    const/4 v4, 0x1

    invoke-virtual {v2, v0, v3, v4}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_b

    if-eqz v0, :cond_7

    .line 281
    iget-object v0, p0, Lcom/alipay/sdk/util/e;->e:Ljava/lang/Object;

    monitor-enter v0

    .line 282
    :try_start_1
    iget-object v2, p0, Lcom/alipay/sdk/util/e;->d:Lcom/alipay/android/app/IAlixPay;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_a

    if-nez v2, :cond_0

    .line 284
    :try_start_2
    iget-object v2, p0, Lcom/alipay/sdk/util/e;->e:Ljava/lang/Object;

    invoke-static {}, Lcom/alipay/sdk/data/a;->g()Lcom/alipay/sdk/data/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/alipay/sdk/data/a;->a()I

    move-result v3

    int-to-long v5, v3

    invoke-virtual {v2, v5, v6}, Ljava/lang/Object;->wait(J)V
    :try_end_2
    .catch Ljava/lang/InterruptedException; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_a

    goto :goto_0

    :catch_0
    move-exception v2

    :try_start_3
    const-string v3, "biz"

    const-string v5, "BindWaitTimeoutEx"

    .line 286
    invoke-static {v3, v5, v2}, Lcom/alipay/sdk/app/statistic/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 289
    :cond_0
    :goto_0
    monitor-exit v0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_a

    const/4 v0, 0x0

    const/4 v2, 0x0

    .line 292
    :try_start_4
    iget-object v3, p0, Lcom/alipay/sdk/util/e;->d:Lcom/alipay/android/app/IAlixPay;

    if-nez v3, :cond_2

    .line 295
    iget-object p1, p0, Lcom/alipay/sdk/util/e;->c:Landroid/app/Activity;

    invoke-static {p1, p2}, Lcom/alipay/sdk/util/n;->a(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string p2, "biz"

    const-string v3, "ClientBindFailed"

    .line 296
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|"

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, v3, p1}, Lcom/alipay/sdk/app/statistic/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "failed"
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_4

    .line 318
    :try_start_5
    iget-object p2, p0, Lcom/alipay/sdk/util/e;->d:Lcom/alipay/android/app/IAlixPay;

    iget-object v1, p0, Lcom/alipay/sdk/util/e;->j:Lcom/alipay/android/app/IRemoteServiceCallback;

    invoke-interface {p2, v1}, Lcom/alipay/android/app/IAlixPay;->unregisterCallback(Lcom/alipay/android/app/IRemoteServiceCallback;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p2

    .line 320
    invoke-static {p2}, Lcom/alipay/sdk/util/c;->a(Ljava/lang/Throwable;)V

    .line 324
    :goto_1
    :try_start_6
    iget-object p2, p0, Lcom/alipay/sdk/util/e;->c:Landroid/app/Activity;

    invoke-virtual {p2}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p2

    iget-object v1, p0, Lcom/alipay/sdk/util/e;->h:Landroid/content/ServiceConnection;

    invoke-virtual {p2, v1}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_1

    goto :goto_2

    :catchall_1
    move-exception p2

    .line 326
    invoke-static {p2}, Lcom/alipay/sdk/util/c;->a(Ljava/lang/Throwable;)V

    .line 329
    :goto_2
    iput-object v2, p0, Lcom/alipay/sdk/util/e;->g:Lcom/alipay/sdk/util/e$a;

    .line 330
    iput-object v2, p0, Lcom/alipay/sdk/util/e;->j:Lcom/alipay/android/app/IRemoteServiceCallback;

    .line 331
    iput-object v2, p0, Lcom/alipay/sdk/util/e;->h:Landroid/content/ServiceConnection;

    .line 332
    iput-object v2, p0, Lcom/alipay/sdk/util/e;->d:Lcom/alipay/android/app/IAlixPay;

    .line 333
    iget-boolean p2, p0, Lcom/alipay/sdk/util/e;->f:Z

    if-eqz p2, :cond_1

    iget-object p2, p0, Lcom/alipay/sdk/util/e;->c:Landroid/app/Activity;

    if-eqz p2, :cond_1

    .line 334
    invoke-virtual {p2, v0}, Landroid/app/Activity;->setRequestedOrientation(I)V

    .line 335
    iput-boolean v0, p0, Lcom/alipay/sdk/util/e;->f:Z

    :cond_1
    return-object p1

    .line 301
    :cond_2
    :try_start_7
    iget-object p2, p0, Lcom/alipay/sdk/util/e;->g:Lcom/alipay/sdk/util/e$a;

    if-eqz p2, :cond_3

    .line 302
    iget-object p2, p0, Lcom/alipay/sdk/util/e;->g:Lcom/alipay/sdk/util/e$a;

    invoke-interface {p2}, Lcom/alipay/sdk/util/e$a;->a()V

    .line 305
    :cond_3
    iget-object p2, p0, Lcom/alipay/sdk/util/e;->c:Landroid/app/Activity;

    invoke-virtual {p2}, Landroid/app/Activity;->getRequestedOrientation()I

    move-result p2

    if-nez p2, :cond_4

    .line 306
    iget-object p2, p0, Lcom/alipay/sdk/util/e;->c:Landroid/app/Activity;

    invoke-virtual {p2, v4}, Landroid/app/Activity;->setRequestedOrientation(I)V

    .line 307
    iput-boolean v4, p0, Lcom/alipay/sdk/util/e;->f:Z

    .line 310
    :cond_4
    iget-object p2, p0, Lcom/alipay/sdk/util/e;->d:Lcom/alipay/android/app/IAlixPay;

    iget-object v1, p0, Lcom/alipay/sdk/util/e;->j:Lcom/alipay/android/app/IRemoteServiceCallback;

    invoke-interface {p2, v1}, Lcom/alipay/android/app/IAlixPay;->registerCallback(Lcom/alipay/android/app/IRemoteServiceCallback;)V

    .line 311
    iget-object p2, p0, Lcom/alipay/sdk/util/e;->d:Lcom/alipay/android/app/IAlixPay;

    invoke-interface {p2, p1}, Lcom/alipay/android/app/IAlixPay;->Pay(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_4

    .line 318
    :try_start_8
    iget-object p2, p0, Lcom/alipay/sdk/util/e;->d:Lcom/alipay/android/app/IAlixPay;

    iget-object v1, p0, Lcom/alipay/sdk/util/e;->j:Lcom/alipay/android/app/IRemoteServiceCallback;

    invoke-interface {p2, v1}, Lcom/alipay/android/app/IAlixPay;->unregisterCallback(Lcom/alipay/android/app/IRemoteServiceCallback;)V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_2

    goto :goto_3

    :catchall_2
    move-exception p2

    .line 320
    invoke-static {p2}, Lcom/alipay/sdk/util/c;->a(Ljava/lang/Throwable;)V

    .line 324
    :goto_3
    :try_start_9
    iget-object p2, p0, Lcom/alipay/sdk/util/e;->c:Landroid/app/Activity;

    invoke-virtual {p2}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p2

    iget-object v1, p0, Lcom/alipay/sdk/util/e;->h:Landroid/content/ServiceConnection;

    invoke-virtual {p2, v1}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_3

    goto :goto_4

    :catchall_3
    move-exception p2

    .line 326
    invoke-static {p2}, Lcom/alipay/sdk/util/c;->a(Ljava/lang/Throwable;)V

    .line 329
    :goto_4
    iput-object v2, p0, Lcom/alipay/sdk/util/e;->g:Lcom/alipay/sdk/util/e$a;

    .line 330
    iput-object v2, p0, Lcom/alipay/sdk/util/e;->j:Lcom/alipay/android/app/IRemoteServiceCallback;

    .line 331
    iput-object v2, p0, Lcom/alipay/sdk/util/e;->h:Landroid/content/ServiceConnection;

    .line 332
    iput-object v2, p0, Lcom/alipay/sdk/util/e;->d:Lcom/alipay/android/app/IAlixPay;

    .line 333
    iget-boolean p2, p0, Lcom/alipay/sdk/util/e;->f:Z

    if-eqz p2, :cond_5

    iget-object p2, p0, Lcom/alipay/sdk/util/e;->c:Landroid/app/Activity;

    if-eqz p2, :cond_5

    .line 334
    :goto_5
    invoke-virtual {p2, v0}, Landroid/app/Activity;->setRequestedOrientation(I)V

    .line 335
    iput-boolean v0, p0, Lcom/alipay/sdk/util/e;->f:Z

    goto :goto_8

    :catchall_4
    move-exception p1

    :try_start_a
    const-string p2, "biz"

    const-string v1, "ClientBindException"

    .line 314
    invoke-static {p2, v1, p1}, Lcom/alipay/sdk/app/statistic/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 315
    invoke-static {}, Lcom/alipay/sdk/app/j;->c()Ljava/lang/String;

    move-result-object p1
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_7

    .line 318
    :try_start_b
    iget-object p2, p0, Lcom/alipay/sdk/util/e;->d:Lcom/alipay/android/app/IAlixPay;

    iget-object v1, p0, Lcom/alipay/sdk/util/e;->j:Lcom/alipay/android/app/IRemoteServiceCallback;

    invoke-interface {p2, v1}, Lcom/alipay/android/app/IAlixPay;->unregisterCallback(Lcom/alipay/android/app/IRemoteServiceCallback;)V
    :try_end_b
    .catchall {:try_start_b .. :try_end_b} :catchall_5

    goto :goto_6

    :catchall_5
    move-exception p2

    .line 320
    invoke-static {p2}, Lcom/alipay/sdk/util/c;->a(Ljava/lang/Throwable;)V

    .line 324
    :goto_6
    :try_start_c
    iget-object p2, p0, Lcom/alipay/sdk/util/e;->c:Landroid/app/Activity;

    invoke-virtual {p2}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p2

    iget-object v1, p0, Lcom/alipay/sdk/util/e;->h:Landroid/content/ServiceConnection;

    invoke-virtual {p2, v1}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V
    :try_end_c
    .catchall {:try_start_c .. :try_end_c} :catchall_6

    goto :goto_7

    :catchall_6
    move-exception p2

    .line 326
    invoke-static {p2}, Lcom/alipay/sdk/util/c;->a(Ljava/lang/Throwable;)V

    .line 329
    :goto_7
    iput-object v2, p0, Lcom/alipay/sdk/util/e;->g:Lcom/alipay/sdk/util/e$a;

    .line 330
    iput-object v2, p0, Lcom/alipay/sdk/util/e;->j:Lcom/alipay/android/app/IRemoteServiceCallback;

    .line 331
    iput-object v2, p0, Lcom/alipay/sdk/util/e;->h:Landroid/content/ServiceConnection;

    .line 332
    iput-object v2, p0, Lcom/alipay/sdk/util/e;->d:Lcom/alipay/android/app/IAlixPay;

    .line 333
    iget-boolean p2, p0, Lcom/alipay/sdk/util/e;->f:Z

    if-eqz p2, :cond_5

    iget-object p2, p0, Lcom/alipay/sdk/util/e;->c:Landroid/app/Activity;

    if-eqz p2, :cond_5

    goto :goto_5

    :cond_5
    :goto_8
    return-object p1

    :catchall_7
    move-exception p1

    .line 318
    :try_start_d
    iget-object p2, p0, Lcom/alipay/sdk/util/e;->d:Lcom/alipay/android/app/IAlixPay;

    iget-object v1, p0, Lcom/alipay/sdk/util/e;->j:Lcom/alipay/android/app/IRemoteServiceCallback;

    invoke-interface {p2, v1}, Lcom/alipay/android/app/IAlixPay;->unregisterCallback(Lcom/alipay/android/app/IRemoteServiceCallback;)V
    :try_end_d
    .catchall {:try_start_d .. :try_end_d} :catchall_8

    goto :goto_9

    :catchall_8
    move-exception p2

    .line 320
    invoke-static {p2}, Lcom/alipay/sdk/util/c;->a(Ljava/lang/Throwable;)V

    .line 324
    :goto_9
    :try_start_e
    iget-object p2, p0, Lcom/alipay/sdk/util/e;->c:Landroid/app/Activity;

    invoke-virtual {p2}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p2

    iget-object v1, p0, Lcom/alipay/sdk/util/e;->h:Landroid/content/ServiceConnection;

    invoke-virtual {p2, v1}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V
    :try_end_e
    .catchall {:try_start_e .. :try_end_e} :catchall_9

    goto :goto_a

    :catchall_9
    move-exception p2

    .line 326
    invoke-static {p2}, Lcom/alipay/sdk/util/c;->a(Ljava/lang/Throwable;)V

    .line 329
    :goto_a
    iput-object v2, p0, Lcom/alipay/sdk/util/e;->g:Lcom/alipay/sdk/util/e$a;

    .line 330
    iput-object v2, p0, Lcom/alipay/sdk/util/e;->j:Lcom/alipay/android/app/IRemoteServiceCallback;

    .line 331
    iput-object v2, p0, Lcom/alipay/sdk/util/e;->h:Landroid/content/ServiceConnection;

    .line 332
    iput-object v2, p0, Lcom/alipay/sdk/util/e;->d:Lcom/alipay/android/app/IAlixPay;

    .line 333
    iget-boolean p2, p0, Lcom/alipay/sdk/util/e;->f:Z

    if-eqz p2, :cond_6

    iget-object p2, p0, Lcom/alipay/sdk/util/e;->c:Landroid/app/Activity;

    if-eqz p2, :cond_6

    .line 334
    invoke-virtual {p2, v0}, Landroid/app/Activity;->setRequestedOrientation(I)V

    .line 335
    iput-boolean v0, p0, Lcom/alipay/sdk/util/e;->f:Z

    :cond_6
    throw p1

    :catchall_a
    move-exception p1

    .line 289
    :try_start_f
    monitor-exit v0
    :try_end_f
    .catchall {:try_start_f .. :try_end_f} :catchall_a

    throw p1

    .line 274
    :cond_7
    :try_start_10
    new-instance p1, Ljava/lang/Throwable;

    const-string p2, "bindService fail"

    invoke-direct {p1, p2}, Ljava/lang/Throwable;-><init>(Ljava/lang/String;)V

    throw p1
    :try_end_10
    .catchall {:try_start_10 .. :try_end_10} :catchall_b

    :catchall_b
    move-exception p1

    const-string p2, "biz"

    const-string v0, "ClientBindServiceFailed"

    .line 277
    invoke-static {p2, v0, p1}, Lcom/alipay/sdk/app/statistic/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    const-string p1, "failed"

    return-object p1
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;I)Ljava/lang/String;
    .locals 8

    const-string v0, "scheme_failed"

    const-string v1, ""

    .line 174
    invoke-direct {p0, p1, p2}, Lcom/alipay/sdk/util/e;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "failed"

    .line 180
    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_2

    const-string v3, "com.eg.android.AlipayGphone"

    .line 181
    invoke-virtual {v3, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_2

    const/16 v3, 0x7d

    if-le p3, v3, :cond_2

    .line 182
    invoke-static {}, Lcom/alipay/sdk/data/a;->g()Lcom/alipay/sdk/data/a;

    move-result-object p3

    invoke-virtual {p3}, Lcom/alipay/sdk/data/a;->b()Z

    move-result p3

    if-eqz p3, :cond_2

    .line 184
    new-instance p3, Ljava/util/concurrent/CountDownLatch;

    const/4 v2, 0x1

    invoke-direct {p3, v2}, Ljava/util/concurrent/CountDownLatch;-><init>(I)V

    const/16 v2, 0x20

    .line 185
    invoke-static {v2}, Lcom/alipay/sdk/util/n;->a(I)Ljava/lang/String;

    move-result-object v2

    const-string v3, "biz"

    const-string v4, "BSPStart"

    .line 188
    invoke-static {v3, v4, v2}, Lcom/alipay/sdk/app/statistic/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 190
    new-instance v4, Lcom/alipay/sdk/util/g;

    invoke-direct {v4, p0, p3}, Lcom/alipay/sdk/util/g;-><init>(Lcom/alipay/sdk/util/e;Ljava/util/concurrent/CountDownLatch;)V

    .line 197
    sget-object v5, Lcom/alipay/sdk/app/AlipayResultActivity;->d:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v6, Ljava/lang/ref/WeakReference;

    invoke-direct {v6, v4}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {v5, v2, v6}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 201
    :try_start_0
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    const-string v5, "sourcePid"

    .line 202
    invoke-static {}, Landroid/os/Binder;->getCallingPid()I

    move-result v6

    invoke-virtual {v4, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v5, "external_info"

    .line 203
    invoke-virtual {v4, v5, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "pkgName"

    .line 204
    iget-object v5, p0, Lcom/alipay/sdk/util/e;->c:Landroid/app/Activity;

    invoke-virtual {v5}, Landroid/app/Activity;->getPackageName()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, p1, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "session"

    .line 205
    invoke-virtual {v4, p1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 206
    invoke-virtual {v4}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v2, "UTF-8"

    invoke-virtual {p1, v2}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p1

    const/4 v2, 0x2

    invoke-static {p1, v2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1

    .line 207
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "alipays://platefromapi/startapp?appId=20000125&mqpSchemePay="

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Landroid/net/Uri;->encode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 208
    new-instance v2, Landroid/content/Intent;

    invoke-direct {v2}, Landroid/content/Intent;-><init>()V

    .line 209
    invoke-virtual {v2, p2}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    const/high16 p2, 0x10000000

    .line 210
    invoke-virtual {v2, p2}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 211
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    invoke-virtual {v2, p1}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    .line 213
    iget-object p1, p0, Lcom/alipay/sdk/util/e;->c:Landroid/app/Activity;

    invoke-virtual {p1, v2}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V

    .line 216
    invoke-static {}, Lcom/alipay/sdk/data/a;->g()Lcom/alipay/sdk/data/a;

    move-result-object p1

    iget-object p2, p0, Lcom/alipay/sdk/util/e;->c:Landroid/app/Activity;

    invoke-virtual {p2}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/alipay/sdk/data/a;->a(Landroid/content/Context;)V

    .line 218
    invoke-virtual {p3}, Ljava/util/concurrent/CountDownLatch;->await()V

    .line 220
    iget-object p1, p0, Lcom/alipay/sdk/util/e;->i:Ljava/lang/String;

    const-string p2, "unknown"
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    .line 224
    :try_start_1
    invoke-static {p1}, Lcom/alipay/sdk/util/l;->a(Ljava/lang/String;)Ljava/util/Map;

    move-result-object p3

    const-string v2, "resultStatus"

    .line 225
    invoke-interface {p3, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-nez p3, :cond_0

    :try_start_2
    const-string p3, "null"
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    move-object v7, p3

    move-object p3, p2

    move-object p2, v7

    goto :goto_1

    :cond_0
    :goto_0
    move-object p2, p3

    goto :goto_2

    :catchall_1
    move-exception p3

    :goto_1
    :try_start_3
    const-string v2, "BSPStatEx"

    .line 230
    invoke-static {v3, v2, p3}, Lcom/alipay/sdk/app/statistic/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 234
    :goto_2
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "BSPDone-"

    invoke-virtual {p3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v3, p2, v1}, Lcom/alipay/sdk/app/statistic/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 236
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_1

    const-string p1, "BSPEmpty"

    .line 238
    invoke-static {v3, p1, v1}, Lcom/alipay/sdk/app/statistic/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catch Ljava/lang/InterruptedException; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    goto :goto_3

    :cond_1
    move-object v0, p1

    goto :goto_3

    :catchall_2
    move-exception p1

    const-string p2, "BSPEx"

    .line 247
    invoke-static {v3, p2, p1}, Lcom/alipay/sdk/app/statistic/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    goto :goto_3

    :catch_0
    move-exception p1

    const-string p2, "BSPWaiting"

    .line 243
    invoke-static {v3, p2, p1}, Lcom/alipay/sdk/app/statistic/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 244
    sget-object p1, Lcom/alipay/sdk/app/k;->g:Lcom/alipay/sdk/app/k;

    invoke-virtual {p1}, Lcom/alipay/sdk/app/k;->a()I

    move-result p1

    sget-object p2, Lcom/alipay/sdk/app/k;->g:Lcom/alipay/sdk/app/k;

    invoke-virtual {p2}, Lcom/alipay/sdk/app/k;->b()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2, v1}, Lcom/alipay/sdk/app/j;->a(ILjava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    :goto_3
    return-object v0

    :cond_2
    return-object v2
.end method

.method private a(Lcom/alipay/sdk/util/n$a;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/InterruptedException;
        }
    .end annotation

    if-nez p1, :cond_0

    return-void

    .line 148
    :cond_0
    iget-object p1, p1, Lcom/alipay/sdk/util/n$a;->a:Landroid/content/pm/PackageInfo;

    if-nez p1, :cond_1

    return-void

    .line 152
    :cond_1
    iget-object p1, p1, Landroid/content/pm/PackageInfo;->packageName:Ljava/lang/String;

    .line 153
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    const-string v1, "com.alipay.android.app.TransProcessPayActivity"

    .line 154
    invoke-virtual {v0, p1, v1}, Landroid/content/Intent;->setClassName(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 156
    :try_start_0
    iget-object p1, p0, Lcom/alipay/sdk/util/e;->c:Landroid/app/Activity;

    invoke-virtual {p1, v0}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string v0, "biz"

    const-string v1, "StartLaunchAppTransEx"

    .line 158
    invoke-static {v0, v1, p1}, Lcom/alipay/sdk/app/statistic/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    const-wide/16 v0, 0xc8

    .line 160
    invoke-static {v0, v1}, Ljava/lang/Thread;->sleep(J)V

    return-void
.end method

.method static synthetic b(Lcom/alipay/sdk/util/e;)Landroid/app/Activity;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/alipay/sdk/util/e;->c:Landroid/app/Activity;

    return-object p0
.end method

.method static synthetic c(Lcom/alipay/sdk/util/e;)Lcom/alipay/sdk/util/e$a;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/alipay/sdk/util/e;->g:Lcom/alipay/sdk/util/e$a;

    return-object p0
.end method


# virtual methods
.method public a(Ljava/lang/String;)Ljava/lang/String;
    .locals 5

    const-string v0, ""

    const/4 v1, 0x0

    .line 90
    :try_start_0
    invoke-static {}, Lcom/alipay/sdk/data/a;->g()Lcom/alipay/sdk/data/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/alipay/sdk/data/a;->f()Ljava/util/List;

    move-result-object v2

    .line 93
    invoke-static {}, Lcom/alipay/sdk/data/a;->g()Lcom/alipay/sdk/data/a;

    move-result-object v3

    iget-boolean v3, v3, Lcom/alipay/sdk/data/a;->p:Z

    if-eqz v3, :cond_0

    if-nez v2, :cond_1

    .line 96
    :cond_0
    sget-object v2, Lcom/alipay/sdk/app/i;->a:Ljava/util/List;

    .line 100
    :cond_1
    iget-object v3, p0, Lcom/alipay/sdk/util/e;->c:Landroid/app/Activity;

    invoke-static {v3, v2}, Lcom/alipay/sdk/util/n;->a(Landroid/content/Context;Ljava/util/List;)Lcom/alipay/sdk/util/n$a;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v3, "failed"

    if-eqz v2, :cond_7

    .line 102
    :try_start_1
    invoke-virtual {v2}, Lcom/alipay/sdk/util/n$a;->a()Z

    move-result v4

    if-nez v4, :cond_7

    invoke-virtual {v2}, Lcom/alipay/sdk/util/n$a;->b()Z

    move-result v4

    if-eqz v4, :cond_2

    goto :goto_2

    .line 107
    :cond_2
    iget-object v4, v2, Lcom/alipay/sdk/util/n$a;->a:Landroid/content/pm/PackageInfo;

    invoke-static {v4}, Lcom/alipay/sdk/util/n;->a(Landroid/content/pm/PackageInfo;)Z

    move-result v4

    if-eqz v4, :cond_3

    return-object v3

    .line 112
    :cond_3
    iget-object v3, v2, Lcom/alipay/sdk/util/n$a;->a:Landroid/content/pm/PackageInfo;

    if-eqz v3, :cond_5

    const-string v3, "com.eg.android.AlipayGphone"

    iget-object v4, v2, Lcom/alipay/sdk/util/n$a;->a:Landroid/content/pm/PackageInfo;

    iget-object v4, v4, Landroid/content/pm/PackageInfo;->packageName:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_4

    goto :goto_0

    .line 115
    :cond_4
    iget-object v3, v2, Lcom/alipay/sdk/util/n$a;->a:Landroid/content/pm/PackageInfo;

    iget-object v0, v3, Landroid/content/pm/PackageInfo;->packageName:Ljava/lang/String;

    goto :goto_1

    .line 113
    :cond_5
    :goto_0
    invoke-static {}, Lcom/alipay/sdk/util/n;->a()Ljava/lang/String;

    move-result-object v0

    .line 119
    :goto_1
    iget-object v3, v2, Lcom/alipay/sdk/util/n$a;->a:Landroid/content/pm/PackageInfo;

    if-eqz v3, :cond_6

    .line 120
    iget-object v3, v2, Lcom/alipay/sdk/util/n$a;->a:Landroid/content/pm/PackageInfo;

    iget v1, v3, Landroid/content/pm/PackageInfo;->versionCode:I

    .line 124
    :cond_6
    invoke-direct {p0, v2}, Lcom/alipay/sdk/util/e;->a(Lcom/alipay/sdk/util/n$a;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_3

    :cond_7
    :goto_2
    return-object v3

    :catchall_0
    move-exception v2

    const-string v3, "biz"

    const-string v4, "CheckClientSignEx"

    .line 127
    invoke-static {v3, v4, v2}, Lcom/alipay/sdk/app/statistic/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 135
    :goto_3
    invoke-direct {p0, p1, v0, v1}, Lcom/alipay/sdk/util/e;->a(Ljava/lang/String;Ljava/lang/String;I)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public a()V
    .locals 1

    const/4 v0, 0x0

    .line 343
    iput-object v0, p0, Lcom/alipay/sdk/util/e;->c:Landroid/app/Activity;

    return-void
.end method

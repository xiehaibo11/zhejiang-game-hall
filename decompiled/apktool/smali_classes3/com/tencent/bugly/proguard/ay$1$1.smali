.class final Lcom/tencent/bugly/proguard/ay$1$1;
.super Ljava/lang/Object;
.source "BUGLY"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tencent/bugly/proguard/ay$1;->onEvent(ILjava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/tencent/bugly/proguard/ay$1;


# direct methods
.method constructor <init>(Lcom/tencent/bugly/proguard/ay$1;Ljava/lang/String;)V
    .locals 0

    .line 461
    iput-object p1, p0, Lcom/tencent/bugly/proguard/ay$1$1;->b:Lcom/tencent/bugly/proguard/ay$1;

    iput-object p2, p0, Lcom/tencent/bugly/proguard/ay$1$1;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 9

    .line 465
    iget-object v0, p0, Lcom/tencent/bugly/proguard/ay$1$1;->b:Lcom/tencent/bugly/proguard/ay$1;

    iget-object v0, v0, Lcom/tencent/bugly/proguard/ay$1;->a:Lcom/tencent/bugly/proguard/ay;

    iget-object v1, p0, Lcom/tencent/bugly/proguard/ay$1$1;->a:Ljava/lang/String;

    const/4 v2, 0x1

    .line 1392
    invoke-virtual {v0, v2}, Lcom/tencent/bugly/proguard/ay;->a(Z)Z

    move-result v3

    if-eqz v3, :cond_4

    const/4 v3, 0x0

    :try_start_0
    const-string v4, "read trace first dump for create time!"

    .line 1399
    new-array v5, v3, [Ljava/lang/Object;

    invoke-static {v4, v5}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 1401
    invoke-static {v1, v3}, Lcom/tencent/bugly/crashreport/crash/anr/TraceFileHelper;->readFirstDumpInfo(Ljava/lang/String;Z)Lcom/tencent/bugly/crashreport/crash/anr/TraceFileHelper$a;

    move-result-object v4

    const-wide/16 v5, -0x1

    if-eqz v4, :cond_0

    .line 1403
    iget-wide v7, v4, Lcom/tencent/bugly/crashreport/crash/anr/TraceFileHelper$a;->c:J

    goto :goto_0

    :cond_0
    move-wide v7, v5

    :goto_0
    cmp-long v4, v7, v5

    if-nez v4, :cond_1

    const-string v4, "trace dump fail could not get time!"

    .line 1408
    new-array v5, v3, [Ljava/lang/Object;

    invoke-static {v4, v5}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 1409
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    .line 1412
    :cond_1
    invoke-virtual {v0, v7, v8}, Lcom/tencent/bugly/proguard/ay;->a(J)Z

    move-result v4

    if-eqz v4, :cond_2

    return-void

    .line 1416
    :cond_2
    invoke-virtual {v0, v7, v8, v1}, Lcom/tencent/bugly/proguard/ay;->a(JLjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 1418
    invoke-static {v0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 1419
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 1421
    :cond_3
    new-array v1, v2, [Ljava/lang/Object;

    invoke-virtual {v0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->toString()Ljava/lang/String;

    move-result-object v0

    aput-object v0, v1, v3

    const-string v0, "handle anr error %s"

    invoke-static {v0, v1}, Lcom/tencent/bugly/proguard/al;->e(Ljava/lang/String;[Ljava/lang/Object;)Z

    :cond_4
    return-void
.end method

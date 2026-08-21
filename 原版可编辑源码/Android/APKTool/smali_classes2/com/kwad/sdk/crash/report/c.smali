.class public abstract Lcom/kwad/sdk/crash/report/c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/crash/report/e;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/crash/report/c$a;
    }
.end annotation


# instance fields
.field private aBj:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/kwad/sdk/crash/report/c$a;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/crash/report/c;->aBj:Ljava/util/ArrayList;

    return-void
.end method

.method private Fg()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/sdk/crash/report/c;->aBj:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_1

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/crash/report/c;->aBj:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/crash/report/c$a;

    invoke-static {v1}, Lcom/kwad/sdk/crash/report/c$a;->a(Lcom/kwad/sdk/crash/report/c$a;)Lcom/kwad/sdk/crash/model/message/ExceptionMessage;

    move-result-object v2

    invoke-static {v1}, Lcom/kwad/sdk/crash/report/c$a;->b(Lcom/kwad/sdk/crash/report/c$a;)I

    move-result v1

    const/4 v3, 0x0

    invoke-direct {p0, v2, v1, v3}, Lcom/kwad/sdk/crash/report/c;->b(Lcom/kwad/sdk/crash/model/message/ExceptionMessage;ILjava/util/concurrent/CountDownLatch;)V

    invoke-interface {v0}, Ljava/util/Iterator;->remove()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :cond_0
    return-void

    :catchall_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_1
    return-void
.end method

.method private static a(Ljava/lang/String;Ljava/util/List;)Z
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)Z"
        }
    .end annotation

    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_1
    const/4 p0, 0x0

    return p0
.end method

.method private b(Lcom/kwad/sdk/crash/model/message/ExceptionMessage;ILjava/util/concurrent/CountDownLatch;)V
    .locals 1

    if-eqz p1, :cond_2

    invoke-direct {p0, p1}, Lcom/kwad/sdk/crash/report/c;->c(Lcom/kwad/sdk/crash/model/message/ExceptionMessage;)Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x3

    if-ne p2, v0, :cond_1

    invoke-static {p1}, Lcom/kwad/sdk/crash/report/a;->b(Lcom/kwad/sdk/crash/model/message/ExceptionMessage;)V

    :cond_1
    new-instance p2, Ljava/util/ArrayList;

    const/4 v0, 0x1

    invoke-direct {p2, v0}, Ljava/util/ArrayList;-><init>(I)V

    invoke-static {p1}, Lcom/kwad/sdk/crash/report/request/c;->d(Lcom/kwad/sdk/crash/model/message/ExceptionMessage;)Lcom/kwad/sdk/crash/report/ReportEvent;

    move-result-object p1

    invoke-interface {p2, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    invoke-static {p2, p3}, Lcom/kwad/sdk/crash/report/request/b;->a(Ljava/util/List;Ljava/util/concurrent/CountDownLatch;)V

    :cond_2
    :goto_0
    return-void
.end method

.method private c(Lcom/kwad/sdk/crash/model/message/ExceptionMessage;)Z
    .locals 9

    const/4 v0, 0x1

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/crash/e;->EC()Lcom/kwad/sdk/crash/e;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/sdk/crash/e;->EH()Lcom/kwad/sdk/crash/c;

    move-result-object v2

    if-eqz v2, :cond_7

    invoke-virtual {v1}, Lcom/kwad/sdk/crash/e;->EG()I

    move-result v2

    const/4 v3, 0x2

    if-ne v2, v3, :cond_0

    goto :goto_1

    :cond_0
    invoke-virtual {v1}, Lcom/kwad/sdk/crash/e;->EH()Lcom/kwad/sdk/crash/c;

    move-result-object v2

    iget-object v2, v2, Lcom/kwad/sdk/crash/c;->azJ:Ljava/util/List;

    invoke-virtual {v1}, Lcom/kwad/sdk/crash/e;->EH()Lcom/kwad/sdk/crash/c;

    move-result-object v3

    iget-wide v3, v3, Lcom/kwad/sdk/crash/c;->azq:D

    invoke-virtual {v1}, Lcom/kwad/sdk/crash/e;->getAppId()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1}, Lcom/kwad/sdk/crash/e;->getSdkVersion()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_1
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v6

    if-eqz v6, :cond_5

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/kwad/sdk/crash/a;

    if-eqz v6, :cond_1

    iget-object v7, v6, Lcom/kwad/sdk/crash/a;->azn:Ljava/util/List;

    invoke-static {v7}, Lcom/kwad/sdk/crash/utils/c;->b(Ljava/util/Collection;)Z

    move-result v7

    if-nez v7, :cond_2

    iget-object v7, v6, Lcom/kwad/sdk/crash/a;->azn:Ljava/util/List;

    invoke-interface {v7, v5}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_1

    :cond_2
    iget-object v7, v6, Lcom/kwad/sdk/crash/a;->azo:Ljava/util/List;

    invoke-static {v7}, Lcom/kwad/sdk/crash/utils/c;->b(Ljava/util/Collection;)Z

    move-result v7

    if-nez v7, :cond_3

    iget-object v7, v6, Lcom/kwad/sdk/crash/a;->azo:Ljava/util/List;

    invoke-interface {v7, v1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_1

    :cond_3
    iget-object v7, v6, Lcom/kwad/sdk/crash/a;->azp:Ljava/util/List;

    invoke-static {v7}, Lcom/kwad/sdk/crash/utils/c;->b(Ljava/util/Collection;)Z

    move-result v7

    if-nez v7, :cond_4

    iget-object v7, p1, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mCrashDetail:Ljava/lang/String;

    iget-object v8, v6, Lcom/kwad/sdk/crash/a;->azp:Ljava/util/List;

    invoke-static {v7, v8}, Lcom/kwad/sdk/crash/report/c;->a(Ljava/lang/String;Ljava/util/List;)Z

    move-result v7

    if-eqz v7, :cond_1

    :cond_4
    iget-wide v3, v6, Lcom/kwad/sdk/crash/a;->azq:D

    goto :goto_0

    :cond_5
    invoke-static {}, Ljava/lang/Math;->random()D

    move-result-wide v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    cmpg-double p1, v1, v3

    if-gez p1, :cond_6

    return v0

    :cond_6
    const/4 p1, 0x0

    return p1

    :cond_7
    :goto_1
    return v0

    :catch_0
    move-exception p1

    invoke-static {p1}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p1

    const-string v1, "BaseExceptionUploader"

    invoke-static {v1, p1}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    return v0
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/crash/model/message/ExceptionMessage;ILjava/util/concurrent/CountDownLatch;)V
    .locals 2

    :try_start_0
    invoke-direct {p0}, Lcom/kwad/sdk/crash/report/c;->Fg()V

    invoke-direct {p0, p1, p2, p3}, Lcom/kwad/sdk/crash/report/c;->b(Lcom/kwad/sdk/crash/model/message/ExceptionMessage;ILjava/util/concurrent/CountDownLatch;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    iget-object v0, p0, Lcom/kwad/sdk/crash/report/c;->aBj:Ljava/util/ArrayList;

    new-instance v1, Lcom/kwad/sdk/crash/report/c$a;

    invoke-direct {v1, p1, p2}, Lcom/kwad/sdk/crash/report/c$a;-><init>(Lcom/kwad/sdk/crash/model/message/ExceptionMessage;I)V

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    if-eqz p3, :cond_0

    invoke-virtual {p3}, Ljava/util/concurrent/CountDownLatch;->countDown()V

    :cond_0
    return-void
.end method

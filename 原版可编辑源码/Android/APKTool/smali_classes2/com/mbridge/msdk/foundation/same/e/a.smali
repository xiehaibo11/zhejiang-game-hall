.class public abstract Lcom/mbridge/msdk/foundation/same/e/a;
.super Ljava/lang/Object;
.source "CommonTask.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/foundation/same/e/a$b;,
        Lcom/mbridge/msdk/foundation/same/e/a$a;
    }
.end annotation


# static fields
.field public static id:J


# instance fields
.field public mListener:Lcom/mbridge/msdk/foundation/same/e/a$b;

.field public mState:Lcom/mbridge/msdk/foundation/same/e/a$a;


# direct methods
.method public constructor <init>()V
    .locals 4

    .line 34
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 12
    sget-object v0, Lcom/mbridge/msdk/foundation/same/e/a$a;->a:Lcom/mbridge/msdk/foundation/same/e/a$a;

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/same/e/a;->mState:Lcom/mbridge/msdk/foundation/same/e/a$a;

    .line 35
    sget-wide v0, Lcom/mbridge/msdk/foundation/same/e/a;->id:J

    const-wide/16 v2, 0x1

    add-long/2addr v0, v2

    sput-wide v0, Lcom/mbridge/msdk/foundation/same/e/a;->id:J

    return-void
.end method

.method private setState(Lcom/mbridge/msdk/foundation/same/e/a$a;)V
    .locals 1

    .line 70
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/e/a;->mState:Lcom/mbridge/msdk/foundation/same/e/a$a;

    .line 71
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/e/a;->mListener:Lcom/mbridge/msdk/foundation/same/e/a$b;

    if-eqz v0, :cond_0

    .line 72
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/foundation/same/e/a$b;->a(Lcom/mbridge/msdk/foundation/same/e/a$a;)V

    :cond_0
    return-void
.end method


# virtual methods
.method public final cancel()V
    .locals 2

    .line 47
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/e/a;->mState:Lcom/mbridge/msdk/foundation/same/e/a$a;

    sget-object v1, Lcom/mbridge/msdk/foundation/same/e/a$a;->d:Lcom/mbridge/msdk/foundation/same/e/a$a;

    if-eq v0, v1, :cond_0

    .line 48
    sget-object v0, Lcom/mbridge/msdk/foundation/same/e/a$a;->d:Lcom/mbridge/msdk/foundation/same/e/a$a;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/foundation/same/e/a;->setState(Lcom/mbridge/msdk/foundation/same/e/a$a;)V

    .line 49
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/same/e/a;->cancelTask()V

    :cond_0
    return-void
.end method

.method public abstract cancelTask()V
.end method

.method public final getId()J
    .locals 2

    .line 39
    sget-wide v0, Lcom/mbridge/msdk/foundation/same/e/a;->id:J

    return-wide v0
.end method

.method public getState()Lcom/mbridge/msdk/foundation/same/e/a$a;
    .locals 1

    .line 66
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/e/a;->mState:Lcom/mbridge/msdk/foundation/same/e/a$a;

    return-object v0
.end method

.method public abstract pauseTask(Z)V
.end method

.method public final run()V
    .locals 2

    .line 24
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/e/a;->mState:Lcom/mbridge/msdk/foundation/same/e/a$a;

    sget-object v1, Lcom/mbridge/msdk/foundation/same/e/a$a;->a:Lcom/mbridge/msdk/foundation/same/e/a$a;

    if-ne v0, v1, :cond_0

    .line 25
    sget-object v0, Lcom/mbridge/msdk/foundation/same/e/a$a;->b:Lcom/mbridge/msdk/foundation/same/e/a$a;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/foundation/same/e/a;->setState(Lcom/mbridge/msdk/foundation/same/e/a$a;)V

    .line 26
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/same/e/a;->runTask()V

    .line 27
    sget-object v0, Lcom/mbridge/msdk/foundation/same/e/a$a;->e:Lcom/mbridge/msdk/foundation/same/e/a$a;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/foundation/same/e/a;->setState(Lcom/mbridge/msdk/foundation/same/e/a$a;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 30
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public abstract runTask()V
.end method

.method public final setPause(Z)V
    .locals 2

    .line 54
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/e/a;->mState:Lcom/mbridge/msdk/foundation/same/e/a$a;

    sget-object v1, Lcom/mbridge/msdk/foundation/same/e/a$a;->c:Lcom/mbridge/msdk/foundation/same/e/a$a;

    if-eq v0, v1, :cond_2

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/e/a;->mState:Lcom/mbridge/msdk/foundation/same/e/a$a;

    sget-object v1, Lcom/mbridge/msdk/foundation/same/e/a$a;->d:Lcom/mbridge/msdk/foundation/same/e/a$a;

    if-eq v0, v1, :cond_2

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/e/a;->mState:Lcom/mbridge/msdk/foundation/same/e/a$a;

    sget-object v1, Lcom/mbridge/msdk/foundation/same/e/a$a;->e:Lcom/mbridge/msdk/foundation/same/e/a$a;

    if-ne v0, v1, :cond_0

    goto :goto_1

    :cond_0
    if-eqz p1, :cond_1

    .line 58
    sget-object v0, Lcom/mbridge/msdk/foundation/same/e/a$a;->c:Lcom/mbridge/msdk/foundation/same/e/a$a;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/foundation/same/e/a;->setState(Lcom/mbridge/msdk/foundation/same/e/a$a;)V

    goto :goto_0

    .line 60
    :cond_1
    sget-object v0, Lcom/mbridge/msdk/foundation/same/e/a$a;->b:Lcom/mbridge/msdk/foundation/same/e/a$a;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/foundation/same/e/a;->setState(Lcom/mbridge/msdk/foundation/same/e/a$a;)V

    .line 62
    :goto_0
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/foundation/same/e/a;->pauseTask(Z)V

    :cond_2
    :goto_1
    return-void
.end method

.method public setonStateChangeListener(Lcom/mbridge/msdk/foundation/same/e/a$b;)V
    .locals 0

    .line 77
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/e/a;->mListener:Lcom/mbridge/msdk/foundation/same/e/a$b;

    return-void
.end method

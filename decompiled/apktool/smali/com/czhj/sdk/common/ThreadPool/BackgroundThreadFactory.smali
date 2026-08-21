.class Lcom/czhj/sdk/common/ThreadPool/BackgroundThreadFactory;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/util/concurrent/ThreadFactory;


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public newThread(Ljava/lang/Runnable;)Ljava/lang/Thread;
    .locals 1

    new-instance v0, Lcom/czhj/sdk/common/ThreadPool/BackgroundThreadFactory$1;

    invoke-direct {v0, p0, p1}, Lcom/czhj/sdk/common/ThreadPool/BackgroundThreadFactory$1;-><init>(Lcom/czhj/sdk/common/ThreadPool/BackgroundThreadFactory;Ljava/lang/Runnable;)V

    return-object v0
.end method

.class Lcom/czhj/sdk/common/ThreadPool/BackgroundThreadFactory$1;
.super Ljava/lang/Thread;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/czhj/sdk/common/ThreadPool/BackgroundThreadFactory;->newThread(Ljava/lang/Runnable;)Ljava/lang/Thread;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/czhj/sdk/common/ThreadPool/BackgroundThreadFactory;


# direct methods
.method constructor <init>(Lcom/czhj/sdk/common/ThreadPool/BackgroundThreadFactory;Ljava/lang/Runnable;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/ThreadPool/BackgroundThreadFactory$1;->a:Lcom/czhj/sdk/common/ThreadPool/BackgroundThreadFactory;

    invoke-direct {p0, p2}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 0

    invoke-super {p0}, Ljava/lang/Thread;->run()V

    return-void
.end method

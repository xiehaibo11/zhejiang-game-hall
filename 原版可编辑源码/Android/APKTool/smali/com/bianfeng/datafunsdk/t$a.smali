.class public Lcom/bianfeng/datafunsdk/t$a;
.super Ljava/lang/Object;
.source "RequestQueueManager.java"

# interfaces
.implements Ljava/util/concurrent/RejectedExecutionHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/datafunsdk/t;-><init>()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = null
.end annotation


# instance fields
.field public final synthetic a:Lcom/bianfeng/datafunsdk/t;


# direct methods
.method public constructor <init>(Lcom/bianfeng/datafunsdk/t;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/t$a;->a:Lcom/bianfeng/datafunsdk/t;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rejectedExecution(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V
    .locals 0

    .line 1
    iget-object p2, p0, Lcom/bianfeng/datafunsdk/t$a;->a:Lcom/bianfeng/datafunsdk/t;

    invoke-static {p2}, Lcom/bianfeng/datafunsdk/t;->a(Lcom/bianfeng/datafunsdk/t;)Ljava/util/concurrent/LinkedBlockingQueue;

    move-result-object p2

    invoke-virtual {p2, p1}, Ljava/util/concurrent/LinkedBlockingQueue;->add(Ljava/lang/Object;)Z

    return-void
.end method

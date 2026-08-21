.class public Lcom/bianfeng/datafunsdk/k$a;
.super Ljava/lang/Object;
.source "DBQueueManager.java"

# interfaces
.implements Ljava/util/concurrent/RejectedExecutionHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/datafunsdk/k;-><init>()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = null
.end annotation


# instance fields
.field public final synthetic a:Lcom/bianfeng/datafunsdk/k;


# direct methods
.method public constructor <init>(Lcom/bianfeng/datafunsdk/k;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/k$a;->a:Lcom/bianfeng/datafunsdk/k;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rejectedExecution(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V
    .locals 0

    .line 1
    iget-object p2, p0, Lcom/bianfeng/datafunsdk/k$a;->a:Lcom/bianfeng/datafunsdk/k;

    invoke-static {p2}, Lcom/bianfeng/datafunsdk/k;->a(Lcom/bianfeng/datafunsdk/k;)Ljava/util/concurrent/LinkedBlockingQueue;

    move-result-object p2

    invoke-virtual {p2, p1}, Ljava/util/concurrent/LinkedBlockingQueue;->add(Ljava/lang/Object;)Z

    return-void
.end method

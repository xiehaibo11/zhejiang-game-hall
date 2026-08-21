.class Lcom/bianfeng/seppellita/db/DBManager$2;
.super Ljava/lang/Object;
.source "DBManager.java"

# interfaces
.implements Ljava/util/concurrent/RejectedExecutionHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/seppellita/db/DBManager;-><init>()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/seppellita/db/DBManager;


# direct methods
.method constructor <init>(Lcom/bianfeng/seppellita/db/DBManager;)V
    .locals 0

    .line 94
    iput-object p1, p0, Lcom/bianfeng/seppellita/db/DBManager$2;->this$0:Lcom/bianfeng/seppellita/db/DBManager;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rejectedExecution(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V
    .locals 0

    .line 97
    iget-object p2, p0, Lcom/bianfeng/seppellita/db/DBManager$2;->this$0:Lcom/bianfeng/seppellita/db/DBManager;

    invoke-static {p2}, Lcom/bianfeng/seppellita/db/DBManager;->access$400(Lcom/bianfeng/seppellita/db/DBManager;)Ljava/util/Deque;

    move-result-object p2

    invoke-interface {p2, p1}, Ljava/util/Deque;->add(Ljava/lang/Object;)Z

    return-void
.end method

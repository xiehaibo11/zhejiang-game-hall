.class Lcom/bianfeng/seppellita/db/DBManager$1;
.super Ljava/lang/Object;
.source "DBManager.java"

# interfaces
.implements Lcom/bianfeng/seppellita/db/action/DBByteDataCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/seppellita/db/DBManager;
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

    .line 38
    iput-object p1, p0, Lcom/bianfeng/seppellita/db/DBManager$1;->this$0:Lcom/bianfeng/seppellita/db/DBManager;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onDelSuccess(Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 68
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onDelSuccess \u6210\u529f"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 69
    iget-object p1, p0, Lcom/bianfeng/seppellita/db/DBManager$1;->this$0:Lcom/bianfeng/seppellita/db/DBManager;

    invoke-static {p1}, Lcom/bianfeng/seppellita/db/DBManager;->access$200(Lcom/bianfeng/seppellita/db/DBManager;)Ljava/util/concurrent/atomic/AtomicInteger;

    move-result-object p1

    invoke-virtual {p1}, Ljava/util/concurrent/atomic/AtomicInteger;->decrementAndGet()I

    .line 70
    iget-object p1, p0, Lcom/bianfeng/seppellita/db/DBManager$1;->this$0:Lcom/bianfeng/seppellita/db/DBManager;

    invoke-static {p1}, Lcom/bianfeng/seppellita/db/DBManager;->access$000(Lcom/bianfeng/seppellita/db/DBManager;)Lcom/bianfeng/seppellita/SepperllitaCallback;

    move-result-object p1

    invoke-interface {p1}, Lcom/bianfeng/seppellita/SepperllitaCallback;->onDel()V

    return-void
.end method

.method public onDeltFail(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    const-string p1, "onDeltFail \u5931\u8d25"

    .line 75
    invoke-static {p1}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 76
    iget-object p1, p0, Lcom/bianfeng/seppellita/db/DBManager$1;->this$0:Lcom/bianfeng/seppellita/db/DBManager;

    invoke-static {p1}, Lcom/bianfeng/seppellita/db/DBManager;->access$200(Lcom/bianfeng/seppellita/db/DBManager;)Ljava/util/concurrent/atomic/AtomicInteger;

    move-result-object p1

    invoke-virtual {p1}, Ljava/util/concurrent/atomic/AtomicInteger;->decrementAndGet()I

    .line 77
    iget-object p1, p0, Lcom/bianfeng/seppellita/db/DBManager$1;->this$0:Lcom/bianfeng/seppellita/db/DBManager;

    invoke-static {p1}, Lcom/bianfeng/seppellita/db/DBManager;->access$000(Lcom/bianfeng/seppellita/db/DBManager;)Lcom/bianfeng/seppellita/SepperllitaCallback;

    move-result-object p1

    invoke-interface {p1}, Lcom/bianfeng/seppellita/SepperllitaCallback;->onDel()V

    return-void
.end method

.method public onFinish()V
    .locals 1

    .line 82
    iget-object v0, p0, Lcom/bianfeng/seppellita/db/DBManager$1;->this$0:Lcom/bianfeng/seppellita/db/DBManager;

    invoke-static {v0}, Lcom/bianfeng/seppellita/db/DBManager;->access$300(Lcom/bianfeng/seppellita/db/DBManager;)V

    return-void
.end method

.method public onInsertFail()V
    .locals 1

    const-string v0, "onInsertFail \u5931\u8d25"

    .line 47
    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    return-void
.end method

.method public onInsertSuccess()V
    .locals 1

    const-string v0, "onInsertSuccess \u6210\u529f"

    .line 41
    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 42
    iget-object v0, p0, Lcom/bianfeng/seppellita/db/DBManager$1;->this$0:Lcom/bianfeng/seppellita/db/DBManager;

    invoke-static {v0}, Lcom/bianfeng/seppellita/db/DBManager;->access$000(Lcom/bianfeng/seppellita/db/DBManager;)Lcom/bianfeng/seppellita/SepperllitaCallback;

    move-result-object v0

    invoke-interface {v0}, Lcom/bianfeng/seppellita/SepperllitaCallback;->onInsertSuccess()V

    return-void
.end method

.method public onSelectNoData()V
    .locals 1

    const-string v0, "onSelectNoData \u5931\u8d25"

    .line 62
    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 63
    iget-object v0, p0, Lcom/bianfeng/seppellita/db/DBManager$1;->this$0:Lcom/bianfeng/seppellita/db/DBManager;

    invoke-static {v0}, Lcom/bianfeng/seppellita/db/DBManager;->access$100(Lcom/bianfeng/seppellita/db/DBManager;)Ljava/util/concurrent/atomic/AtomicInteger;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->decrementAndGet()I

    return-void
.end method

.method public onSelectSuccess(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    const-string v0, "onSelectSuccess \u6210\u529f"

    .line 52
    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 53
    iget-object v0, p0, Lcom/bianfeng/seppellita/db/DBManager$1;->this$0:Lcom/bianfeng/seppellita/db/DBManager;

    invoke-static {v0}, Lcom/bianfeng/seppellita/db/DBManager;->access$100(Lcom/bianfeng/seppellita/db/DBManager;)Ljava/util/concurrent/atomic/AtomicInteger;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->decrementAndGet()I

    .line 55
    iget-object v0, p0, Lcom/bianfeng/seppellita/db/DBManager$1;->this$0:Lcom/bianfeng/seppellita/db/DBManager;

    invoke-static {v0}, Lcom/bianfeng/seppellita/db/DBManager;->access$000(Lcom/bianfeng/seppellita/db/DBManager;)Lcom/bianfeng/seppellita/SepperllitaCallback;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 56
    iget-object v0, p0, Lcom/bianfeng/seppellita/db/DBManager$1;->this$0:Lcom/bianfeng/seppellita/db/DBManager;

    invoke-static {v0}, Lcom/bianfeng/seppellita/db/DBManager;->access$000(Lcom/bianfeng/seppellita/db/DBManager;)Lcom/bianfeng/seppellita/SepperllitaCallback;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/bianfeng/seppellita/SepperllitaCallback;->onSelectSuc(Ljava/util/List;)V

    :cond_0
    return-void
.end method

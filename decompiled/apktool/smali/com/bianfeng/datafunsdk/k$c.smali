.class public Lcom/bianfeng/datafunsdk/k$c;
.super Ljava/lang/Object;
.source "DBQueueManager.java"

# interfaces
.implements Lcom/bianfeng/datafunsdk/e;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/datafunsdk/k;
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
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/k$c;->a:Lcom/bianfeng/datafunsdk/k;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 1

    .line 2
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/k$c;->a:Lcom/bianfeng/datafunsdk/k;

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/k;->c(Lcom/bianfeng/datafunsdk/k;)Lcom/bianfeng/datafunsdk/a;

    move-result-object v0

    invoke-interface {v0}, Lcom/bianfeng/datafunsdk/a;->b()V

    return-void
.end method

.method public a(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V
    .locals 1

    .line 3
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/k$c;->a:Lcom/bianfeng/datafunsdk/k;

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/k;->c(Lcom/bianfeng/datafunsdk/k;)Lcom/bianfeng/datafunsdk/a;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/bianfeng/datafunsdk/a;->a(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V

    return-void
.end method

.method public a(Lcom/bianfeng/datafunsdk/f;)V
    .locals 1

    .line 4
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/k$c;->a:Lcom/bianfeng/datafunsdk/k;

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/k;->c(Lcom/bianfeng/datafunsdk/k;)Lcom/bianfeng/datafunsdk/a;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/bianfeng/datafunsdk/a;->a(Lcom/bianfeng/datafunsdk/f;)V

    return-void
.end method

.method public a(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/bianfeng/datafunsdk/bean/DataFunBean;",
            ">;)V"
        }
    .end annotation

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/k$c;->a:Lcom/bianfeng/datafunsdk/k;

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/k;->c(Lcom/bianfeng/datafunsdk/k;)Lcom/bianfeng/datafunsdk/a;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/bianfeng/datafunsdk/a;->a(Ljava/util/List;)V

    return-void
.end method

.method public b(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/k$c;->a:Lcom/bianfeng/datafunsdk/k;

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/k;->c(Lcom/bianfeng/datafunsdk/k;)Lcom/bianfeng/datafunsdk/a;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/bianfeng/datafunsdk/a;->c(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V

    return-void
.end method

.method public c(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V
    .locals 1

    .line 1
    const-string v0, "onInsertFail \u5931\u8d25"

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    .line 2
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/k$c;->a:Lcom/bianfeng/datafunsdk/k;

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/k;->c(Lcom/bianfeng/datafunsdk/k;)Lcom/bianfeng/datafunsdk/a;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/bianfeng/datafunsdk/a;->b(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V

    return-void
.end method

.method public d(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/k$c;->a:Lcom/bianfeng/datafunsdk/k;

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/k;->c(Lcom/bianfeng/datafunsdk/k;)Lcom/bianfeng/datafunsdk/a;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/bianfeng/datafunsdk/a;->f(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V

    return-void
.end method

.class public Lcom/bianfeng/datafunsdk/f;
.super Ljava/lang/Object;
.source "DelByteDataTask.java"

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field public a:Lcom/bianfeng/datafunsdk/bean/DataFunBean;

.field public b:Lcom/bianfeng/datafunsdk/e;

.field public c:I


# direct methods
.method public constructor <init>(Lcom/bianfeng/datafunsdk/bean/DataFunBean;Lcom/bianfeng/datafunsdk/e;)V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/f;->a:Lcom/bianfeng/datafunsdk/bean/DataFunBean;

    .line 3
    iput-object p2, p0, Lcom/bianfeng/datafunsdk/f;->b:Lcom/bianfeng/datafunsdk/e;

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 1
    iget v0, p0, Lcom/bianfeng/datafunsdk/f;->c:I

    const/4 v1, 0x3

    if-le v0, v1, :cond_0

    .line 2
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/f;->b:Lcom/bianfeng/datafunsdk/e;

    iget-object v1, p0, Lcom/bianfeng/datafunsdk/f;->a:Lcom/bianfeng/datafunsdk/bean/DataFunBean;

    invoke-interface {v0, v1}, Lcom/bianfeng/datafunsdk/e;->d(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V

    return-void

    .line 5
    :cond_0
    invoke-static {}, Lcom/bianfeng/datafunsdk/d;->e()Lcom/bianfeng/datafunsdk/d;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/datafunsdk/f;->a:Lcom/bianfeng/datafunsdk/bean/DataFunBean;

    invoke-virtual {v0, v1}, Lcom/bianfeng/datafunsdk/d;->a(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)Z

    move-result v0

    .line 6
    iget v1, p0, Lcom/bianfeng/datafunsdk/f;->c:I

    add-int/lit8 v1, v1, 0x1

    iput v1, p0, Lcom/bianfeng/datafunsdk/f;->c:I

    if-eqz v0, :cond_1

    .line 8
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/f;->b:Lcom/bianfeng/datafunsdk/e;

    iget-object v1, p0, Lcom/bianfeng/datafunsdk/f;->a:Lcom/bianfeng/datafunsdk/bean/DataFunBean;

    invoke-interface {v0, v1}, Lcom/bianfeng/datafunsdk/e;->a(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V

    goto :goto_0

    .line 10
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/f;->b:Lcom/bianfeng/datafunsdk/e;

    invoke-interface {v0, p0}, Lcom/bianfeng/datafunsdk/e;->a(Lcom/bianfeng/datafunsdk/f;)V

    :goto_0
    return-void
.end method

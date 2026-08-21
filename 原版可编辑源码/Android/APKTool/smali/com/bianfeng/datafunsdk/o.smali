.class public Lcom/bianfeng/datafunsdk/o;
.super Ljava/lang/Object;
.source "ByteDataRequest.java"

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field public a:Lcom/bianfeng/datafunsdk/s;

.field public b:Lcom/bianfeng/datafunsdk/bean/DataFunBean;

.field public c:Lcom/bianfeng/datafunsdk/r;

.field public d:I


# direct methods
.method public constructor <init>(Lcom/bianfeng/datafunsdk/bean/DataFunBean;Lcom/bianfeng/datafunsdk/r;)V
    .locals 1

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    const/4 v0, 0x0

    iput v0, p0, Lcom/bianfeng/datafunsdk/o;->d:I

    .line 5
    iput-object p2, p0, Lcom/bianfeng/datafunsdk/o;->c:Lcom/bianfeng/datafunsdk/r;

    .line 6
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/o;->b:Lcom/bianfeng/datafunsdk/bean/DataFunBean;

    .line 7
    new-instance p2, Lcom/bianfeng/datafunsdk/s;

    invoke-direct {p2, p1}, Lcom/bianfeng/datafunsdk/s;-><init>(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V

    iput-object p2, p0, Lcom/bianfeng/datafunsdk/o;->a:Lcom/bianfeng/datafunsdk/s;

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u53d1\u9001\u8bf7\u6c42\u7684\u6b21\u6570"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/bianfeng/datafunsdk/o;->d:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    .line 2
    iget v0, p0, Lcom/bianfeng/datafunsdk/o;->d:I

    const/4 v1, 0x3

    if-le v0, v1, :cond_0

    .line 3
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/o;->c:Lcom/bianfeng/datafunsdk/r;

    iget-object v1, p0, Lcom/bianfeng/datafunsdk/o;->b:Lcom/bianfeng/datafunsdk/bean/DataFunBean;

    invoke-interface {v0, v1}, Lcom/bianfeng/datafunsdk/r;->b(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V

    return-void

    .line 7
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/o;->a:Lcom/bianfeng/datafunsdk/s;

    invoke-virtual {v0}, Lcom/bianfeng/datafunsdk/s;->a()I

    move-result v0

    .line 8
    iget v1, p0, Lcom/bianfeng/datafunsdk/o;->d:I

    add-int/lit8 v1, v1, 0x1

    iput v1, p0, Lcom/bianfeng/datafunsdk/o;->d:I

    const/4 v1, 0x4

    if-eq v0, v1, :cond_1

    .line 10
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/o;->c:Lcom/bianfeng/datafunsdk/r;

    iget-object v1, p0, Lcom/bianfeng/datafunsdk/o;->b:Lcom/bianfeng/datafunsdk/bean/DataFunBean;

    invoke-interface {v0, v1}, Lcom/bianfeng/datafunsdk/r;->a(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V

    goto :goto_0

    .line 12
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/o;->c:Lcom/bianfeng/datafunsdk/r;

    invoke-interface {v0, p0}, Lcom/bianfeng/datafunsdk/r;->a(Lcom/bianfeng/datafunsdk/o;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 15
    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

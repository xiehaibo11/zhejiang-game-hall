.class public Lcom/bianfeng/datafunsdk/i;
.super Ljava/lang/Object;
.source "InsertByteDataTask.java"

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field public a:Lcom/bianfeng/datafunsdk/bean/DataFunBean;

.field public b:Lcom/bianfeng/datafunsdk/e;


# direct methods
.method public constructor <init>(Lcom/bianfeng/datafunsdk/bean/DataFunBean;Lcom/bianfeng/datafunsdk/e;)V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    iput-object p2, p0, Lcom/bianfeng/datafunsdk/i;->b:Lcom/bianfeng/datafunsdk/e;

    .line 3
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/i;->a:Lcom/bianfeng/datafunsdk/bean/DataFunBean;

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 1
    const-string v0, "InsertEventTask--\u5f00\u59cb\u63d2\u5165\u6570\u636e->"

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    .line 3
    :try_start_0
    invoke-static {}, Lcom/bianfeng/datafunsdk/d;->e()Lcom/bianfeng/datafunsdk/d;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/datafunsdk/i;->a:Lcom/bianfeng/datafunsdk/bean/DataFunBean;

    iget-object v2, p0, Lcom/bianfeng/datafunsdk/i;->b:Lcom/bianfeng/datafunsdk/e;

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/datafunsdk/d;->a(Lcom/bianfeng/datafunsdk/bean/DataFunBean;Lcom/bianfeng/datafunsdk/e;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 5
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 6
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "InsertEventTask--->"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

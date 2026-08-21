.class Lcom/sigmob/sdk/base/common/g$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/db/a$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/common/g;->a(Lcom/sigmob/sdk/base/db/a$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/db/a$a;

.field final synthetic b:Lcom/sigmob/sdk/base/common/g;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/common/g;Lcom/sigmob/sdk/base/db/a$a;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/g$3;->b:Lcom/sigmob/sdk/base/common/g;

    iput-object p2, p0, Lcom/sigmob/sdk/base/common/g$3;->a:Lcom/sigmob/sdk/base/db/a$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "event: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/g$3;->b:Lcom/sigmob/sdk/base/common/g;

    invoke-static {v1}, Lcom/sigmob/sdk/base/common/g;->a(Lcom/sigmob/sdk/base/common/g;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " url "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/g$3;->b:Lcom/sigmob/sdk/base/common/g;

    invoke-static {v1}, Lcom/sigmob/sdk/base/common/g;->b(Lcom/sigmob/sdk/base/common/g;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " mRequest_id: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/g$3;->b:Lcom/sigmob/sdk/base/common/g;

    invoke-static {v1}, Lcom/sigmob/sdk/base/common/g;->c(Lcom/sigmob/sdk/base/common/g;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " insert success! "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/g$3;->a:Lcom/sigmob/sdk/base/db/a$a;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/sigmob/sdk/base/db/a$a;->a()V

    :cond_0
    return-void
.end method

.method public a(Ljava/lang/Throwable;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/g$3;->a:Lcom/sigmob/sdk/base/db/a$a;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/sigmob/sdk/base/db/a$a;->a(Ljava/lang/Throwable;)V

    :cond_0
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    return-void
.end method

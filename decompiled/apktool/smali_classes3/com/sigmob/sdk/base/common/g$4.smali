.class Lcom/sigmob/sdk/base/common/g$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/czhj/sdk/common/Database/SQLiteLisenter;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/common/g;->g()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/common/g;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/common/g;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/g$4;->a:Lcom/sigmob/sdk/base/common/g;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onFailed(Ljava/lang/Error;)V
    .locals 0

    invoke-virtual {p1}, Ljava/lang/Error;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    return-void
.end method

.method public onSuccess(Ljava/util/List;)V
    .locals 1

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "delete id "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/g$4;->a:Lcom/sigmob/sdk/base/common/g;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/g;->d(Lcom/sigmob/sdk/base/common/g;)Ljava/lang/Long;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

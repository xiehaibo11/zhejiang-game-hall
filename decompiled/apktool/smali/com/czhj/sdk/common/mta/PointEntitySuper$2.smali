.class Lcom/czhj/sdk/common/mta/PointEntitySuper$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/czhj/sdk/common/Database/SQLiteMTAHelper$ExecCallBack;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/czhj/sdk/common/mta/PointEntitySuper;->insertToDB(Lcom/czhj/sdk/common/Database/SQLiteMTAHelper$ExecCallBack;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/czhj/sdk/common/Database/SQLiteMTAHelper$ExecCallBack;

.field final synthetic b:Lcom/czhj/sdk/common/mta/PointEntitySuper;


# direct methods
.method constructor <init>(Lcom/czhj/sdk/common/mta/PointEntitySuper;Lcom/czhj/sdk/common/Database/SQLiteMTAHelper$ExecCallBack;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/mta/PointEntitySuper$2;->b:Lcom/czhj/sdk/common/mta/PointEntitySuper;

    iput-object p2, p0, Lcom/czhj/sdk/common/mta/PointEntitySuper$2;->a:Lcom/czhj/sdk/common/Database/SQLiteMTAHelper$ExecCallBack;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onFailed(Ljava/lang/Throwable;)V
    .locals 1

    iget-object v0, p0, Lcom/czhj/sdk/common/mta/PointEntitySuper$2;->a:Lcom/czhj/sdk/common/Database/SQLiteMTAHelper$ExecCallBack;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/czhj/sdk/common/Database/SQLiteMTAHelper$ExecCallBack;->onFailed(Ljava/lang/Throwable;)V

    :cond_0
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    return-void
.end method

.method public onSuccess()V
    .locals 1

    const-string v0, "insert success!"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/czhj/sdk/common/mta/PointEntitySuper$2;->a:Lcom/czhj/sdk/common/Database/SQLiteMTAHelper$ExecCallBack;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/czhj/sdk/common/Database/SQLiteMTAHelper$ExecCallBack;->onSuccess()V

    :cond_0
    return-void
.end method

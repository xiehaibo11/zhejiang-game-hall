.class Lcom/czhj/sdk/common/mta/PointEntitySuper$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/czhj/sdk/common/mta/PointEntitySuper;->commit()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/czhj/sdk/common/mta/PointEntitySuper;


# direct methods
.method constructor <init>(Lcom/czhj/sdk/common/mta/PointEntitySuper;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/mta/PointEntitySuper$1;->a:Lcom/czhj/sdk/common/mta/PointEntitySuper;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    iget-object v0, p0, Lcom/czhj/sdk/common/mta/PointEntitySuper$1;->a:Lcom/czhj/sdk/common/mta/PointEntitySuper;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/mta/PointEntitySuper;->insertToDB(Lcom/czhj/sdk/common/Database/SQLiteMTAHelper$ExecCallBack;)V

    return-void
.end method

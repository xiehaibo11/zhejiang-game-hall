.class Lcom/sigmob/sdk/base/common/h$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/z$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/common/h;->i(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/common/h;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/common/h;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/h$3;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/Object;)V
    .locals 1

    instance-of v0, p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    if-eqz v0, :cond_0

    check-cast p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$3;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/h;->d(Lcom/sigmob/sdk/base/common/h;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setFinal_url(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

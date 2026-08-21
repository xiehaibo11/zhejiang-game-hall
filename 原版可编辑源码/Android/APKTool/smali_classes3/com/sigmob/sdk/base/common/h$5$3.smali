.class Lcom/sigmob/sdk/base/common/h$5$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/z$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/common/h$5;->b(Ljava/lang/String;Lcom/sigmob/sdk/base/common/af;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/sigmob/sdk/base/common/h$5;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/common/h$5;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/h$5$3;->b:Lcom/sigmob/sdk/base/common/h$5;

    iput-object p2, p0, Lcom/sigmob/sdk/base/common/h$5$3;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/Object;)V
    .locals 1

    instance-of v0, p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    if-eqz v0, :cond_0

    check-cast p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$5$3;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setFinal_url(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.class Lcom/sigmob/sdk/base/network/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/z$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/network/a;->a(ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:I

.field final synthetic d:Lcom/sigmob/sdk/base/network/a;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/network/a;Ljava/lang/String;Ljava/lang/String;I)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/network/a$1;->d:Lcom/sigmob/sdk/base/network/a;

    iput-object p2, p0, Lcom/sigmob/sdk/base/network/a$1;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/sigmob/sdk/base/network/a$1;->b:Ljava/lang/String;

    iput p4, p0, Lcom/sigmob/sdk/base/network/a$1;->c:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/Object;)V
    .locals 1

    instance-of v0, p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;

    if-eqz v0, :cond_0

    check-cast p1, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a$1;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->setRequest_id(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/a$1;->b:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->setPlacement_id(Ljava/lang/String;)V

    iget v0, p0, Lcom/sigmob/sdk/base/network/a$1;->c:I

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->setAdtype(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

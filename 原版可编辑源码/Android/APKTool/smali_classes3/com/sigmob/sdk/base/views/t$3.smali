.class Lcom/sigmob/sdk/base/views/t$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/mraid/d$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/views/t;->b()Landroid/view/View;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/views/t;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/views/t;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/t$3;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Lcom/sigmob/sdk/mraid/o;Lcom/sigmob/sdk/base/common/r;)V
    .locals 0

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/t$3;->a:Lcom/sigmob/sdk/base/views/t;

    if-eqz p2, :cond_0

    iput-object p2, p1, Lcom/sigmob/sdk/base/views/t;->a:Lcom/sigmob/sdk/base/common/r;

    goto :goto_0

    :cond_0
    new-instance p2, Lcom/sigmob/sdk/base/common/r;

    invoke-direct {p2}, Lcom/sigmob/sdk/base/common/r;-><init>()V

    iput-object p2, p1, Lcom/sigmob/sdk/base/views/t;->a:Lcom/sigmob/sdk/base/common/r;

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/t$3;->a:Lcom/sigmob/sdk/base/views/t;

    iget-object p1, p1, Lcom/sigmob/sdk/base/views/t;->a:Lcom/sigmob/sdk/base/common/r;

    iget-object p2, p0, Lcom/sigmob/sdk/base/views/t$3;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {p2}, Lcom/sigmob/sdk/base/views/t;->h(Lcom/sigmob/sdk/base/views/t;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/base/common/r;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :goto_0
    return-void
.end method

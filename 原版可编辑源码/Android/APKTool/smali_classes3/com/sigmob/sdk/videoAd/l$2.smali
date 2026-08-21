.class Lcom/sigmob/sdk/videoAd/l$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/views/t$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/videoAd/l;->e(Landroid/content/Context;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/videoAd/l;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/videoAd/l;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/l$2;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$2;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->I(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/t;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$2;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->I(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/t;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/t;->dismiss()V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$2;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->I(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/t;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/t;->c()V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$2;->a:Lcom/sigmob/sdk/videoAd/l;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/sigmob/sdk/videoAd/l;->d(Lcom/sigmob/sdk/videoAd/l;Z)Z

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$2;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->o(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/a;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l$2;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v1}, Lcom/sigmob/sdk/videoAd/l;->J(Lcom/sigmob/sdk/videoAd/l;)Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/l$2;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v2}, Lcom/sigmob/sdk/videoAd/l;->s()I

    move-result v2

    iget-object v3, p0, Lcom/sigmob/sdk/videoAd/l$2;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v3}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v3

    invoke-virtual {v0, v1, v2, v3}, Lcom/sigmob/sdk/videoAd/a;->b(Landroid/content/Context;ILcom/sigmob/sdk/base/models/BaseAdUnit;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$2;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->K(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/common/j;

    move-result-object v0

    invoke-interface {v0}, Lcom/sigmob/sdk/base/common/j;->a()V

    return-void
.end method

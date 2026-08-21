.class Lcom/sigmob/sdk/mraid/m$3$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/views/q$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/mraid/m$3;->f()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/mraid/m$3;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid/m$3;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/m$3$2;->a:Lcom/sigmob/sdk/mraid/m$3;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3$2;->a:Lcom/sigmob/sdk/mraid/m$3;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/m;->l(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/base/views/q;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3$2;->a:Lcom/sigmob/sdk/mraid/m$3;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/m;->l(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/base/views/q;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/q;->dismiss()V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3$2;->a:Lcom/sigmob/sdk/mraid/m$3;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/m;->l(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/base/views/q;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/q;->c()V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3$2;->a:Lcom/sigmob/sdk/mraid/m$3;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    const/4 v2, 0x0

    invoke-static {v0, v2}, Lcom/sigmob/sdk/mraid/m;->a(Lcom/sigmob/sdk/mraid/m;Lcom/sigmob/sdk/base/views/q;)Lcom/sigmob/sdk/base/views/q;

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3$2;->a:Lcom/sigmob/sdk/mraid/m$3;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v0, v1}, Lcom/sigmob/sdk/mraid/m;->d(Lcom/sigmob/sdk/mraid/m;Z)Z

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3$2;->a:Lcom/sigmob/sdk/mraid/m$3;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/m;->f:Lcom/sigmob/sdk/base/common/r;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3$2;->a:Lcom/sigmob/sdk/mraid/m$3;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/m;->f:Lcom/sigmob/sdk/base/common/r;

    sget-object v2, Lcom/sigmob/sdk/base/common/a;->g:Lcom/sigmob/sdk/base/common/a;

    invoke-virtual {v0, v2, v1}, Lcom/sigmob/sdk/base/common/r;->a(Lcom/sigmob/sdk/base/common/a;I)V

    :cond_1
    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3$2;->a:Lcom/sigmob/sdk/mraid/m$3;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/m;->c(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/videoAd/a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3$2;->a:Lcom/sigmob/sdk/mraid/m$3;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/m;->c(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/videoAd/a;

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/base/a;->b:Lcom/sigmob/sdk/base/a;

    const/4 v2, 0x1

    invoke-virtual {v0, v1, p1, p2, v2}, Lcom/sigmob/sdk/videoAd/a;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Ljava/lang/String;Z)V

    :cond_0
    return-void
.end method

.method public b()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3$2;->a:Lcom/sigmob/sdk/mraid/m$3;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/m;->f:Lcom/sigmob/sdk/base/common/r;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3$2;->a:Lcom/sigmob/sdk/mraid/m$3;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/m;->f:Lcom/sigmob/sdk/base/common/r;

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->f:Lcom/sigmob/sdk/base/common/a;

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/base/common/r;->a(Lcom/sigmob/sdk/base/common/a;I)V

    :cond_0
    return-void
.end method

.class Lcom/sigmob/sdk/videoAd/l$7;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/views/q$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/videoAd/l;->b(I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:Lcom/sigmob/sdk/videoAd/l;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/videoAd/l;I)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/l$7;->b:Lcom/sigmob/sdk/videoAd/l;

    iput p2, p0, Lcom/sigmob/sdk/videoAd/l$7;->a:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$7;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->T(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/q;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$7;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->T(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/q;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/q;->dismiss()V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$7;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->T(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/q;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/q;->c()V

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$7;->b:Lcom/sigmob/sdk/videoAd/l;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;Lcom/sigmob/sdk/base/views/q;)Lcom/sigmob/sdk/base/views/q;

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$7;->b:Lcom/sigmob/sdk/videoAd/l;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/sigmob/sdk/videoAd/l;->g(Lcom/sigmob/sdk/videoAd/l;Z)Z

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$7;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->n(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/b;

    move-result-object v0

    if-eqz v0, :cond_1

    iget v0, p0, Lcom/sigmob/sdk/videoAd/l$7;->a:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$7;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->n(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/b;->start()V

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$7;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/l;->n()Lcom/sigmob/sdk/base/common/r;

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->g:Lcom/sigmob/sdk/base/common/a;

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/l$7;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v2}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/base/common/r;->a(Lcom/sigmob/sdk/base/common/a;I)V

    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$7;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->e(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/h;

    move-result-object v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$7;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/l;->u()V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$7;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->o(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/a;

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/base/a;->b:Lcom/sigmob/sdk/base/a;

    const/4 v2, 0x1

    invoke-virtual {v0, v1, p1, p2, v2}, Lcom/sigmob/sdk/videoAd/a;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Ljava/lang/String;Z)V

    return-void
.end method

.method public b()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$7;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->n(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/b;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$7;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->n(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/b;->isPlaying()Z

    move-result v0

    if-eqz v0, :cond_0

    iget v0, p0, Lcom/sigmob/sdk/videoAd/l$7;->a:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$7;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->n(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/b;->pause()V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$7;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/l;->n()Lcom/sigmob/sdk/base/common/r;

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->f:Lcom/sigmob/sdk/base/common/a;

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/l$7;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v2}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/base/common/r;->a(Lcom/sigmob/sdk/base/common/a;I)V

    return-void
.end method

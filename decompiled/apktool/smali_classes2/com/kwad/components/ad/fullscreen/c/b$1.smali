.class final Lcom/kwad/components/ad/fullscreen/c/b$1;
.super Lcom/kwad/components/core/webview/b/e/e;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/fullscreen/c/b;->bO()Lcom/kwad/components/core/webview/b/e/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic gn:Ljava/lang/String;

.field final synthetic go:Ljava/lang/String;

.field final synthetic gp:Ljava/lang/String;

.field final synthetic gq:Lcom/kwad/components/ad/fullscreen/c/b;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/fullscreen/c/b;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/b$1;->gq:Lcom/kwad/components/ad/fullscreen/c/b;

    iput-object p2, p0, Lcom/kwad/components/ad/fullscreen/c/b$1;->gn:Ljava/lang/String;

    iput-object p3, p0, Lcom/kwad/components/ad/fullscreen/c/b$1;->go:Ljava/lang/String;

    iput-object p4, p0, Lcom/kwad/components/ad/fullscreen/c/b$1;->gp:Ljava/lang/String;

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/e/e;-><init>()V

    return-void
.end method


# virtual methods
.method public final q(Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/b$1;->gn:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/b$1;->go:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/b$1;->gp:Ljava/lang/String;

    invoke-static {v0, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/b$1;->gq:Lcom/kwad/components/ad/fullscreen/c/b;

    invoke-static {p1}, Lcom/kwad/components/ad/fullscreen/c/b;->e(Lcom/kwad/components/ad/fullscreen/c/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object p1

    sget-object v0, Lcom/kwad/components/ad/reward/RewardRenderResult;->DEFAULT:Lcom/kwad/components/ad/reward/RewardRenderResult;

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/ad/reward/RewardRenderResult;)V

    iget-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/b$1;->gq:Lcom/kwad/components/ad/fullscreen/c/b;

    invoke-static {p1}, Lcom/kwad/components/ad/fullscreen/c/b;->d(Lcom/kwad/components/ad/fullscreen/c/b;)V

    :cond_1
    return-void

    :cond_2
    :goto_0
    iget-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/b$1;->gq:Lcom/kwad/components/ad/fullscreen/c/b;

    invoke-static {p1}, Lcom/kwad/components/ad/fullscreen/c/b;->a(Lcom/kwad/components/ad/fullscreen/c/b;)Landroid/content/Context;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/b$1;->gq:Lcom/kwad/components/ad/fullscreen/c/b;

    invoke-static {v0}, Lcom/kwad/components/ad/fullscreen/c/b;->b(Lcom/kwad/components/ad/fullscreen/c/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/b$1;->gq:Lcom/kwad/components/ad/fullscreen/c/b;

    invoke-static {v1}, Lcom/kwad/components/ad/fullscreen/c/b;->c(Lcom/kwad/components/ad/fullscreen/c/b;)Landroid/widget/FrameLayout;

    move-result-object v1

    invoke-static {p1, v0, v1}, Lcom/kwad/components/ad/reward/j;->a(Landroid/content/Context;Lcom/kwad/components/ad/reward/j;Landroid/view/ViewGroup;)V

    iget-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/b$1;->gq:Lcom/kwad/components/ad/fullscreen/c/b;

    invoke-static {p1}, Lcom/kwad/components/ad/fullscreen/c/b;->d(Lcom/kwad/components/ad/fullscreen/c/b;)V

    return-void
.end method

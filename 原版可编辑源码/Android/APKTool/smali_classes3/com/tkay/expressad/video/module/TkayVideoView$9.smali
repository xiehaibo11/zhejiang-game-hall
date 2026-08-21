.class final Lcom/tkay/expressad/video/module/TkayVideoView$9;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/widget/a/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/module/TkayVideoView;->showAlertView()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/module/TkayVideoView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/module/TkayVideoView;)V
    .locals 0

    .line 740
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$9;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 748
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$9;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->h(Lcom/tkay/expressad/video/module/TkayVideoView;)Z

    .line 749
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$9;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->i(Lcom/tkay/expressad/video/module/TkayVideoView;)Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->setShowingAlertViewCover(Z)V

    .line 750
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$9;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->d(Lcom/tkay/expressad/video/module/TkayVideoView;)Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$9;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->j(Lcom/tkay/expressad/video/module/TkayVideoView;)I

    move-result v0

    sget v1, Lcom/tkay/expressad/foundation/g/a;->cs:I

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$9;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->j(Lcom/tkay/expressad/video/module/TkayVideoView;)I

    move-result v0

    sget v1, Lcom/tkay/expressad/foundation/g/a;->cr:I

    if-ne v0, v1, :cond_2

    .line 752
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$9;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->k(Lcom/tkay/expressad/video/module/TkayVideoView;)Z

    .line 753
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$9;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz v0, :cond_1

    .line 754
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$9;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v1, 0x7c

    const-string v2, ""

    invoke-interface {v0, v1, v2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 756
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$9;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->l(Lcom/tkay/expressad/video/module/TkayVideoView;)Z

    .line 757
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$9;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->gonePlayingCloseView()V

    .line 759
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$9;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->m(Lcom/tkay/expressad/video/module/TkayVideoView;)V

    return-void
.end method

.method public final b()V
    .locals 4

    .line 765
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$9;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->h(Lcom/tkay/expressad/video/module/TkayVideoView;)Z

    .line 766
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$9;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->n(Lcom/tkay/expressad/video/module/TkayVideoView;)Z

    .line 767
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$9;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->i(Lcom/tkay/expressad/video/module/TkayVideoView;)Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->setShowingAlertViewCover(Z)V

    .line 770
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$9;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->d(Lcom/tkay/expressad/video/module/TkayVideoView;)Z

    move-result v0

    const/4 v1, 0x2

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$9;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->j(Lcom/tkay/expressad/video/module/TkayVideoView;)I

    move-result v0

    sget v2, Lcom/tkay/expressad/foundation/g/a;->cr:I

    if-ne v0, v2, :cond_1

    .line 771
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$9;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz v0, :cond_0

    .line 772
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$9;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView$9;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v2}, Lcom/tkay/expressad/video/module/TkayVideoView;->o(Lcom/tkay/expressad/video/module/TkayVideoView;)Z

    move-result v3

    invoke-static {v2, v3}, Lcom/tkay/expressad/video/module/TkayVideoView;->b(Lcom/tkay/expressad/video/module/TkayVideoView;Z)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v1, v2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_0
    return-void

    .line 777
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$9;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->d(Lcom/tkay/expressad/video/module/TkayVideoView;)Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$9;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->j(Lcom/tkay/expressad/video/module/TkayVideoView;)I

    move-result v0

    sget v2, Lcom/tkay/expressad/foundation/g/a;->cs:I

    if-ne v0, v2, :cond_2

    .line 778
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$9;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->m(Lcom/tkay/expressad/video/module/TkayVideoView;)V

    return-void

    .line 781
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$9;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz v0, :cond_3

    .line 782
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$9;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    const-string v2, ""

    invoke-interface {v0, v1, v2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_3
    return-void
.end method

.method public final c()V
    .locals 0

    .line 743
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoView$9;->a()V

    return-void
.end method

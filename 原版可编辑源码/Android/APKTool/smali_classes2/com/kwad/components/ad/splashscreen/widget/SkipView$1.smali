.class final Lcom/kwad/components/ad/splashscreen/widget/SkipView$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/splashscreen/widget/SkipView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Gu:Lcom/kwad/components/ad/splashscreen/widget/SkipView;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/widget/SkipView;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$1;->Gu:Lcom/kwad/components/ad/splashscreen/widget/SkipView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$1;->Gu:Lcom/kwad/components/ad/splashscreen/widget/SkipView;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/widget/SkipView;->a(Lcom/kwad/components/ad/splashscreen/widget/SkipView;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$1;->Gu:Lcom/kwad/components/ad/splashscreen/widget/SkipView;

    const-wide/16 v1, 0x12c

    invoke-virtual {v0, p0, v1, v2}, Lcom/kwad/components/ad/splashscreen/widget/SkipView;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$1;->Gu:Lcom/kwad/components/ad/splashscreen/widget/SkipView;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/widget/SkipView;->b(Lcom/kwad/components/ad/splashscreen/widget/SkipView;)Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/components/ad/splashscreen/widget/SkipView;->a(Lcom/kwad/components/ad/splashscreen/widget/SkipView;Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$1;->Gu:Lcom/kwad/components/ad/splashscreen/widget/SkipView;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/widget/SkipView;->b(Lcom/kwad/components/ad/splashscreen/widget/SkipView;)Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->b(Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;)I

    move-result v1

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$1;->Gu:Lcom/kwad/components/ad/splashscreen/widget/SkipView;

    invoke-static {v2}, Lcom/kwad/components/ad/splashscreen/widget/SkipView;->b(Lcom/kwad/components/ad/splashscreen/widget/SkipView;)Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->c(Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;)I

    move-result v2

    sub-int/2addr v1, v2

    invoke-static {v0, v1}, Lcom/kwad/components/ad/splashscreen/widget/SkipView;->a(Lcom/kwad/components/ad/splashscreen/widget/SkipView;I)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$1;->Gu:Lcom/kwad/components/ad/splashscreen/widget/SkipView;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/widget/SkipView;->b(Lcom/kwad/components/ad/splashscreen/widget/SkipView;)Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->lL()Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$1;->Gu:Lcom/kwad/components/ad/splashscreen/widget/SkipView;

    const-wide/16 v1, 0x3e8

    invoke-virtual {v0, p0, v1, v2}, Lcom/kwad/components/ad/splashscreen/widget/SkipView;->postDelayed(Ljava/lang/Runnable;J)Z

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$1;->Gu:Lcom/kwad/components/ad/splashscreen/widget/SkipView;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/widget/SkipView;->b(Lcom/kwad/components/ad/splashscreen/widget/SkipView;)Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;->d(Lcom/kwad/components/ad/splashscreen/widget/SkipView$b;)I

    return-void

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$1;->Gu:Lcom/kwad/components/ad/splashscreen/widget/SkipView;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/widget/SkipView;->c(Lcom/kwad/components/ad/splashscreen/widget/SkipView;)Lcom/kwad/components/ad/splashscreen/widget/SkipView$a;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/SkipView$1;->Gu:Lcom/kwad/components/ad/splashscreen/widget/SkipView;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/widget/SkipView;->c(Lcom/kwad/components/ad/splashscreen/widget/SkipView;)Lcom/kwad/components/ad/splashscreen/widget/SkipView$a;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/components/ad/splashscreen/widget/SkipView$a;->kV()V

    :cond_2
    return-void
.end method

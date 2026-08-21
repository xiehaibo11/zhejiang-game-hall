.class final Lcom/kwad/components/core/widget/KsAutoCloseView$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/widget/KsAutoCloseView;->V(I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic YU:Lcom/kwad/components/core/widget/KsAutoCloseView;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/widget/KsAutoCloseView;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/widget/KsAutoCloseView$1;->YU:Lcom/kwad/components/core/widget/KsAutoCloseView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/core/widget/KsAutoCloseView$1;->YU:Lcom/kwad/components/core/widget/KsAutoCloseView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/KsAutoCloseView;->a(Lcom/kwad/components/core/widget/KsAutoCloseView;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/widget/KsAutoCloseView$1;->YU:Lcom/kwad/components/core/widget/KsAutoCloseView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/KsAutoCloseView;->b(Lcom/kwad/components/core/widget/KsAutoCloseView;)Z

    move-result v0

    const-wide/16 v1, 0x3e8

    if-eqz v0, :cond_1

    :goto_0
    iget-object v0, p0, Lcom/kwad/components/core/widget/KsAutoCloseView$1;->YU:Lcom/kwad/components/core/widget/KsAutoCloseView;

    invoke-virtual {v0, p0, v1, v2}, Lcom/kwad/components/core/widget/KsAutoCloseView;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/core/widget/KsAutoCloseView$1;->YU:Lcom/kwad/components/core/widget/KsAutoCloseView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/KsAutoCloseView;->c(Lcom/kwad/components/core/widget/KsAutoCloseView;)I

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/core/widget/KsAutoCloseView$1;->YU:Lcom/kwad/components/core/widget/KsAutoCloseView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/KsAutoCloseView;->d(Lcom/kwad/components/core/widget/KsAutoCloseView;)Lcom/kwad/components/core/widget/KsAutoCloseView$a;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/core/widget/KsAutoCloseView$1;->YU:Lcom/kwad/components/core/widget/KsAutoCloseView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/KsAutoCloseView;->d(Lcom/kwad/components/core/widget/KsAutoCloseView;)Lcom/kwad/components/core/widget/KsAutoCloseView$a;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/components/core/widget/KsAutoCloseView$a;->dI()V

    :cond_2
    return-void

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/core/widget/KsAutoCloseView$1;->YU:Lcom/kwad/components/core/widget/KsAutoCloseView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/KsAutoCloseView;->c(Lcom/kwad/components/core/widget/KsAutoCloseView;)I

    move-result v3

    invoke-static {v0, v3}, Lcom/kwad/components/core/widget/KsAutoCloseView;->a(Lcom/kwad/components/core/widget/KsAutoCloseView;I)V

    iget-object v0, p0, Lcom/kwad/components/core/widget/KsAutoCloseView$1;->YU:Lcom/kwad/components/core/widget/KsAutoCloseView;

    invoke-static {v0}, Lcom/kwad/components/core/widget/KsAutoCloseView;->e(Lcom/kwad/components/core/widget/KsAutoCloseView;)I

    goto :goto_0
.end method

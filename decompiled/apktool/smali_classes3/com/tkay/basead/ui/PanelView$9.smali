.class final Lcom/tkay/basead/ui/PanelView$9;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/basead/ui/PanelView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/PanelView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/PanelView;)V
    .locals 0

    .line 463
    iput-object p1, p0, Lcom/tkay/basead/ui/PanelView$9;->a:Lcom/tkay/basead/ui/PanelView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 2

    .line 466
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView$9;->a:Lcom/tkay/basead/ui/PanelView;

    invoke-static {v0}, Lcom/tkay/basead/ui/PanelView;->f(Lcom/tkay/basead/ui/PanelView;)Lcom/tkay/core/common/f/j;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 467
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView$9;->a:Lcom/tkay/basead/ui/PanelView;

    invoke-static {v0}, Lcom/tkay/basead/ui/PanelView;->f(Lcom/tkay/basead/ui/PanelView;)Lcom/tkay/core/common/f/j;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->x()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    .line 468
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView$9;->a:Lcom/tkay/basead/ui/PanelView;

    invoke-static {v0}, Lcom/tkay/basead/ui/PanelView;->c(Lcom/tkay/basead/ui/PanelView;)Landroid/widget/Button;

    move-result-object v0

    if-ne p1, v0, :cond_1

    .line 469
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView$9;->a:Lcom/tkay/basead/ui/PanelView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PanelView;->e(Lcom/tkay/basead/ui/PanelView;)Lcom/tkay/basead/ui/PanelView$a;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 470
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView$9;->a:Lcom/tkay/basead/ui/PanelView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PanelView;->e(Lcom/tkay/basead/ui/PanelView;)Lcom/tkay/basead/ui/PanelView$a;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/basead/ui/PanelView$a;->a()V

    return-void

    .line 474
    :cond_0
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView$9;->a:Lcom/tkay/basead/ui/PanelView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PanelView;->e(Lcom/tkay/basead/ui/PanelView;)Lcom/tkay/basead/ui/PanelView$a;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 475
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView$9;->a:Lcom/tkay/basead/ui/PanelView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PanelView;->e(Lcom/tkay/basead/ui/PanelView;)Lcom/tkay/basead/ui/PanelView$a;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/basead/ui/PanelView$a;->a()V

    :cond_1
    return-void
.end method

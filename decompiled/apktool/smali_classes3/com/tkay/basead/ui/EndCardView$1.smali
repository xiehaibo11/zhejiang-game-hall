.class final Lcom/tkay/basead/ui/EndCardView$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/basead/ui/EndCardView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/EndCardView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/EndCardView;)V
    .locals 0

    .line 42
    iput-object p1, p0, Lcom/tkay/basead/ui/EndCardView$1;->a:Lcom/tkay/basead/ui/EndCardView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 1

    .line 46
    iget-object v0, p0, Lcom/tkay/basead/ui/EndCardView$1;->a:Lcom/tkay/basead/ui/EndCardView;

    iget-object v0, v0, Lcom/tkay/basead/ui/EndCardView;->d:Lcom/tkay/core/common/f/j;

    if-eqz v0, :cond_1

    .line 47
    iget-object v0, p0, Lcom/tkay/basead/ui/EndCardView$1;->a:Lcom/tkay/basead/ui/EndCardView;

    iget-object v0, v0, Lcom/tkay/basead/ui/EndCardView;->d:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->x()I

    move-result v0

    if-nez v0, :cond_0

    .line 48
    iget-object p1, p0, Lcom/tkay/basead/ui/EndCardView$1;->a:Lcom/tkay/basead/ui/EndCardView;

    invoke-static {p1}, Lcom/tkay/basead/ui/EndCardView;->a(Lcom/tkay/basead/ui/EndCardView;)Lcom/tkay/basead/ui/EndCardView$a;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 49
    iget-object p1, p0, Lcom/tkay/basead/ui/EndCardView$1;->a:Lcom/tkay/basead/ui/EndCardView;

    invoke-static {p1}, Lcom/tkay/basead/ui/EndCardView;->a(Lcom/tkay/basead/ui/EndCardView;)Lcom/tkay/basead/ui/EndCardView$a;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/basead/ui/EndCardView$a;->a()V

    return-void

    .line 52
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/EndCardView$1;->a:Lcom/tkay/basead/ui/EndCardView;

    invoke-static {v0}, Lcom/tkay/basead/ui/EndCardView;->b(Lcom/tkay/basead/ui/EndCardView;)Landroid/widget/TextView;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/basead/ui/EndCardView$1;->a:Lcom/tkay/basead/ui/EndCardView;

    invoke-static {v0}, Lcom/tkay/basead/ui/EndCardView;->b(Lcom/tkay/basead/ui/EndCardView;)Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/TextView;->isShown()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 53
    iget-object v0, p0, Lcom/tkay/basead/ui/EndCardView$1;->a:Lcom/tkay/basead/ui/EndCardView;

    invoke-static {v0}, Lcom/tkay/basead/ui/EndCardView;->b(Lcom/tkay/basead/ui/EndCardView;)Landroid/widget/TextView;

    move-result-object v0

    if-ne p1, v0, :cond_1

    .line 54
    iget-object p1, p0, Lcom/tkay/basead/ui/EndCardView$1;->a:Lcom/tkay/basead/ui/EndCardView;

    invoke-static {p1}, Lcom/tkay/basead/ui/EndCardView;->a(Lcom/tkay/basead/ui/EndCardView;)Lcom/tkay/basead/ui/EndCardView$a;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 55
    iget-object p1, p0, Lcom/tkay/basead/ui/EndCardView$1;->a:Lcom/tkay/basead/ui/EndCardView;

    invoke-static {p1}, Lcom/tkay/basead/ui/EndCardView;->a(Lcom/tkay/basead/ui/EndCardView;)Lcom/tkay/basead/ui/EndCardView$a;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/basead/ui/EndCardView$a;->a()V

    :cond_1
    return-void
.end method

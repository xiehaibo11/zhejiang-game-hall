.class final Lcom/tkay/basead/ui/PanelView$7;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/PanelView;->f()V
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

    .line 440
    iput-object p1, p0, Lcom/tkay/basead/ui/PanelView$7;->a:Lcom/tkay/basead/ui/PanelView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 1

    .line 443
    iget-object p1, p0, Lcom/tkay/basead/ui/PanelView$7;->a:Lcom/tkay/basead/ui/PanelView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PanelView;->d(Lcom/tkay/basead/ui/PanelView;)Landroid/view/View$OnClickListener;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView$7;->a:Lcom/tkay/basead/ui/PanelView;

    invoke-static {v0}, Lcom/tkay/basead/ui/PanelView;->c(Lcom/tkay/basead/ui/PanelView;)Landroid/widget/Button;

    move-result-object v0

    invoke-interface {p1, v0}, Landroid/view/View$OnClickListener;->onClick(Landroid/view/View;)V

    return-void
.end method

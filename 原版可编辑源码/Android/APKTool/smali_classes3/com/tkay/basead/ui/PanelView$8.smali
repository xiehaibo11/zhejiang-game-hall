.class final Lcom/tkay/basead/ui/PanelView$8;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/ui/BaseShakeView$a;


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

    .line 446
    iput-object p1, p0, Lcom/tkay/basead/ui/PanelView$8;->a:Lcom/tkay/basead/ui/PanelView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()Z
    .locals 1

    .line 449
    iget-object v0, p0, Lcom/tkay/basead/ui/PanelView$8;->a:Lcom/tkay/basead/ui/PanelView;

    invoke-static {v0}, Lcom/tkay/basead/ui/PanelView;->e(Lcom/tkay/basead/ui/PanelView;)Lcom/tkay/basead/ui/PanelView$a;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/basead/ui/PanelView$a;->b()Z

    move-result v0

    return v0
.end method

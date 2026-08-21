.class final Lcom/tkay/expressad/video/module/TkayClickCTAView$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/video/dynview/f/h;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/module/TkayClickCTAView;->a(Landroid/view/ViewGroup;Lcom/tkay/expressad/foundation/d/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/view/ViewGroup;

.field final synthetic b:Lcom/tkay/expressad/video/module/TkayClickCTAView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/module/TkayClickCTAView;Landroid/view/ViewGroup;)V
    .locals 0

    .line 81
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView$1;->b:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    iput-object p2, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView$1;->a:Landroid/view/ViewGroup;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/video/dynview/a;)V
    .locals 1

    .line 86
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView$1;->a:Landroid/view/ViewGroup;

    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/a;->a()Landroid/view/View;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/view/ViewGroup;->addView(Landroid/view/View;)V

    .line 87
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView$1;->b:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->a(Lcom/tkay/expressad/video/module/TkayClickCTAView;)Z

    move-result v0

    iput-boolean v0, p1, Lcom/tkay/expressad/video/module/TkayClickCTAView;->f:Z

    .line 88
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView$1;->b:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    const-string v0, "tkay_tv_desc"

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->findID(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->a(Lcom/tkay/expressad/video/module/TkayClickCTAView;Landroid/widget/TextView;)Landroid/widget/TextView;

    .line 89
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView$1;->b:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    invoke-virtual {p1}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->c()V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/video/dynview/c/b;)V
    .locals 2

    .line 95
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "errorMsg:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/c/b;->b()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

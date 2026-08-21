.class final Lcom/tkay/expressad/video/module/TkayH5EndCardView$f;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/module/TkayH5EndCardView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "f"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

.field private b:Lcom/tkay/expressad/video/module/TkayH5EndCardView;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/video/module/TkayH5EndCardView;Lcom/tkay/expressad/video/module/TkayH5EndCardView;)V
    .locals 0

    .line 943
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$f;->a:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 944
    iput-object p2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$f;->b:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 949
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$f;->b:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    if-eqz v0, :cond_1

    .line 950
    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->k(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 951
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$f;->a:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->setCloseVisible(I)V

    .line 953
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$f;->b:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->l(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)Z

    :cond_1
    return-void
.end method

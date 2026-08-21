.class final Lcom/tkay/expressad/video/module/TkayH5EndCardView$b;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/module/TkayH5EndCardView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "b"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

.field private b:Lcom/tkay/expressad/video/module/TkayH5EndCardView;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/video/module/TkayH5EndCardView;Lcom/tkay/expressad/video/module/TkayH5EndCardView;)V
    .locals 0

    .line 968
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$b;->a:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 969
    iput-object p2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$b;->b:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 974
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$b;->b:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    if-eqz v0, :cond_0

    .line 975
    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->c(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 976
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$b;->b:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->d(Lcom/tkay/expressad/video/module/TkayH5EndCardView;)Z

    .line 977
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$b;->b:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->v:Z

    .line 978
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$b;->a:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    const/4 v1, 0x5

    const-string v2, "timeout"

    invoke-virtual {v0, v2, v1}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->reportRenderResult(Ljava/lang/String;I)V

    .line 979
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$b;->b:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v1, 0x7f

    const-string v2, ""

    invoke-interface {v0, v1, v2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_0
    return-void
.end method

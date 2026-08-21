.class final Lcom/tkay/expressad/video/bt/module/TYTempContainer$7;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/bt/module/TYTempContainer;->v()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V
    .locals 0

    .line 1244
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$7;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 1247
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$7;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->a(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Landroid/view/View;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setBackgroundColor(I)V

    .line 1248
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$7;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->a(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    .line 1249
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$7;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->a(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/View;->bringToFront()V

    return-void
.end method

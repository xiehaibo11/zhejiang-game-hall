.class final Lcom/tkay/expressad/video/bt/module/TYTempContainer$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/bt/module/TYTempContainer;
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

    .line 497
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 500
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->a(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 501
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$3;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->a(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Landroid/view/View;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    :cond_0
    return-void
.end method

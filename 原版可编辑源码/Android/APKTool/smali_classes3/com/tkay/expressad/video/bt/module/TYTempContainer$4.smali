.class final Lcom/tkay/expressad/video/bt/module/TYTempContainer$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/bt/module/TYTempContainer;->onDestroy()V
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

    .line 690
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$4;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 693
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$4;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->b(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Landroid/app/Activity;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 694
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$4;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->c(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Activity;->finish()V

    :cond_0
    return-void
.end method

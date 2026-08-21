.class final Lcom/tkay/expressad/video/module/TkayVideoView$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/module/TkayVideoView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/module/TkayVideoView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/module/TkayVideoView;)V
    .locals 0

    .line 2268
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$3;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 2271
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$3;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->H(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/FrameLayout;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 2272
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView$3;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->H(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/FrameLayout;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    :cond_0
    return-void
.end method

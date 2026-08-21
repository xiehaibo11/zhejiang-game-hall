.class final Lcom/tkay/expressad/video/module/TkayVideoView$7;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/module/TkayVideoView;->c()V
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

    .line 514
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$7;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 3

    const/4 p1, 0x2

    .line 518
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    .line 519
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$7;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->c(Lcom/tkay/expressad/video/module/TkayVideoView;)Lcom/tkay/expressad/playercommon/PlayerView;

    move-result-object v1

    const/4 v2, 0x1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$7;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-static {v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->c(Lcom/tkay/expressad/video/module/TkayVideoView;)Lcom/tkay/expressad/playercommon/PlayerView;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/playercommon/PlayerView;->isSilent()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 520
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    .line 522
    :cond_0
    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v1

    if-ne v1, v2, :cond_1

    .line 523
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$7;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iput p1, v1, Lcom/tkay/expressad/video/module/TkayVideoView;->mMuteSwitch:I

    goto :goto_0

    .line 525
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$7;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iput v2, p1, Lcom/tkay/expressad/video/module/TkayVideoView;->mMuteSwitch:I

    .line 527
    :goto_0
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$7;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object p1, p1, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz p1, :cond_2

    .line 528
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView$7;->a:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object p1, p1, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/4 v1, 0x5

    invoke-interface {p1, v1, v0}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_2
    return-void
.end method

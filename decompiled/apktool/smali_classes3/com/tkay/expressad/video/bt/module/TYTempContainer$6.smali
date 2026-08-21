.class final Lcom/tkay/expressad/video/bt/module/TYTempContainer$6;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver$VolumeChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/bt/module/TYTempContainer;->r()V
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

    .line 884
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$6;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onVolumeChanged(D)V
    .locals 1

    .line 887
    invoke-static {}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->a()Ljava/lang/String;

    .line 889
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$6;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->d(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->H()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$6;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget-object v0, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$6;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget-object v0, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->getH5EndCardView()Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 890
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$6;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget-object v0, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->getH5EndCardView()Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->volumeChange(D)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception p1

    .line 893
    invoke-static {}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->a()Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

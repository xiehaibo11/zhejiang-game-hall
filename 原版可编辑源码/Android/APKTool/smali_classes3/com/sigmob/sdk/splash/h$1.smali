.class Lcom/sigmob/sdk/splash/h$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/media/MediaPlayer$OnPreparedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/splash/h;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/splash/h;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/splash/h;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/splash/h$1;->a:Lcom/sigmob/sdk/splash/h;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onPrepared(Landroid/media/MediaPlayer;)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/splash/h$1;->a:Lcom/sigmob/sdk/splash/h;

    invoke-virtual {p1}, Landroid/media/MediaPlayer;->getDuration()I

    move-result v1

    div-int/lit16 v1, v1, 0x3e8

    iput v1, v0, Lcom/sigmob/sdk/splash/h;->a:I

    const/4 v0, 0x0

    invoke-virtual {p1, v0, v0}, Landroid/media/MediaPlayer;->setVolume(FF)V

    invoke-virtual {p1}, Landroid/media/MediaPlayer;->start()V

    iget-object p1, p0, Lcom/sigmob/sdk/splash/h$1;->a:Lcom/sigmob/sdk/splash/h;

    invoke-virtual {p1}, Lcom/sigmob/sdk/splash/h;->getContext()Landroid/content/Context;

    move-result-object p1

    iget-object v0, p0, Lcom/sigmob/sdk/splash/h$1;->a:Lcom/sigmob/sdk/splash/h;

    invoke-static {v0}, Lcom/sigmob/sdk/splash/h;->a(Lcom/sigmob/sdk/splash/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v0

    const-string v1, "com.sigmob.action.interstitial.show"

    invoke-static {p1, v0, v1}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "video onPrepared"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    return-void
.end method

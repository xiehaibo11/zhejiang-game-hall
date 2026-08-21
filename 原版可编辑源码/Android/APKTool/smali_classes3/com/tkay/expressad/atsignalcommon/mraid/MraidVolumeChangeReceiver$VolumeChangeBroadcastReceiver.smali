.class Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver$VolumeChangeBroadcastReceiver;
.super Landroid/content/BroadcastReceiver;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "VolumeChangeBroadcastReceiver"
.end annotation


# instance fields
.field private a:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;)V
    .locals 1

    .line 73
    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    .line 74
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver$VolumeChangeBroadcastReceiver;->a:Ljava/lang/ref/WeakReference;

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 4

    .line 79
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    const-string v0, "android.media.VOLUME_CHANGED_ACTION"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, -0x1

    const-string v0, "android.media.EXTRA_VOLUME_STREAM_TYPE"

    .line 80
    invoke-virtual {p2, v0, p1}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result p1

    const/4 p2, 0x3

    if-ne p1, p2, :cond_0

    .line 81
    iget-object p1, p0, Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver$VolumeChangeBroadcastReceiver;->a:Ljava/lang/ref/WeakReference;

    invoke-virtual {p1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;

    if-eqz p1, :cond_0

    .line 83
    invoke-virtual {p1}, Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;->getVolumeChangeListener()Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver$VolumeChangeListener;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 85
    invoke-virtual {p1}, Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver;->getCurrentVolume()D

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmpl-double p1, v0, v2

    if-ltz p1, :cond_0

    .line 87
    invoke-interface {p2, v0, v1}, Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver$VolumeChangeListener;->onVolumeChanged(D)V

    :cond_0
    return-void
.end method

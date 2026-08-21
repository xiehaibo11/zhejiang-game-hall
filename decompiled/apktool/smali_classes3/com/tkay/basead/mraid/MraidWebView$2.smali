.class final Lcom/tkay/basead/mraid/MraidWebView$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/atsignalcommon/mraid/MraidVolumeChangeReceiver$VolumeChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/mraid/MraidWebView;->c()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/mraid/MraidWebView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/mraid/MraidWebView;)V
    .locals 0

    .line 135
    iput-object p1, p0, Lcom/tkay/basead/mraid/MraidWebView$2;->a:Lcom/tkay/basead/mraid/MraidWebView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onVolumeChanged(D)V
    .locals 2

    .line 138
    sget-object v0, Lcom/tkay/basead/mraid/MraidWebView;->TAG:Ljava/lang/String;

    .line 140
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/mraid/MraidWebView$2;->a:Lcom/tkay/basead/mraid/MraidWebView;

    invoke-virtual {v0, v1, p1, p2}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireAudioVolumeChange(Landroid/webkit/WebView;D)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 142
    sget-object p2, Lcom/tkay/basead/mraid/MraidWebView;->TAG:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

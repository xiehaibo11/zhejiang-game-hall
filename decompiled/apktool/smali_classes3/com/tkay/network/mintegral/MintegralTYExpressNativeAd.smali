.class public Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;
.super Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;


# instance fields
.field a:Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;

.field b:Landroid/view/ViewGroup;

.field c:Lcom/mbridge/msdk/out/NativeAdvancedAdListener;

.field d:Z

.field private final e:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;Z)V
    .locals 0

    .line 68
    invoke-direct {p0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;-><init>()V

    .line 22
    const-class p1, Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;

    invoke-virtual {p1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;->e:Ljava/lang/String;

    .line 26
    new-instance p1, Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd$1;

    invoke-direct {p1, p0}, Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd$1;-><init>(Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;)V

    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;->c:Lcom/mbridge/msdk/out/NativeAdvancedAdListener;

    .line 69
    iput-object p2, p0, Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;->a:Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;

    .line 70
    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->setAdListener(Lcom/mbridge/msdk/out/NativeAdvancedAdListener;)V

    return-void
.end method


# virtual methods
.method public clear(Landroid/view/View;)V
    .locals 0

    return-void
.end method

.method public destroy()V
    .locals 2

    .line 101
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;->a:Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 102
    invoke-virtual {v0}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->release()V

    .line 103
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;->a:Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->setAdListener(Lcom/mbridge/msdk/out/NativeAdvancedAdListener;)V

    .line 104
    iput-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;->a:Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;

    .line 107
    :cond_0
    iput-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;->c:Lcom/mbridge/msdk/out/NativeAdvancedAdListener;

    .line 108
    iput-object v1, p0, Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;->b:Landroid/view/ViewGroup;

    return-void
.end method

.method public varargs getAdMediaView([Ljava/lang/Object;)Landroid/view/View;
    .locals 0

    .line 89
    :try_start_0
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;->b:Landroid/view/ViewGroup;

    if-nez p1, :cond_0

    .line 90
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;->a:Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;

    invoke-virtual {p1}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->getAdViewGroup()Landroid/view/ViewGroup;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;->b:Landroid/view/ViewGroup;

    .line 92
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;->b:Landroid/view/ViewGroup;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 94
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p1, 0x0

    return-object p1
.end method

.method public isNativeExpress()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public onPause()V
    .locals 1

    .line 134
    invoke-super {p0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;->onPause()V

    .line 135
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;->a:Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;

    if-eqz v0, :cond_0

    .line 136
    invoke-virtual {v0}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->onPause()V

    :cond_0
    return-void
.end method

.method public onResume()V
    .locals 1

    .line 126
    invoke-super {p0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;->onResume()V

    .line 127
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;->a:Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;

    if-eqz v0, :cond_0

    .line 128
    invoke-virtual {v0}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->onResume()V

    :cond_0
    return-void
.end method

.method public prepare(Landroid/view/View;Lcom/tkay/nativead/api/TYNativePrepareInfo;)V
    .locals 0

    .line 81
    iget-object p1, p0, Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;->a:Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;

    if-eqz p1, :cond_0

    .line 82
    invoke-virtual {p1}, Lcom/mbridge/msdk/out/MBNativeAdvancedHandler;->onResume()V

    :cond_0
    return-void
.end method

.method public setIsAutoPlay(Z)V
    .locals 0

    .line 121
    iput-boolean p1, p0, Lcom/tkay/network/mintegral/MintegralTYExpressNativeAd;->d:Z

    return-void
.end method

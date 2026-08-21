.class public Lcom/carlt/networklibs/NetworkCallbackImpl;
.super Landroid/net/ConnectivityManager$NetworkCallback;
.source "NetworkCallbackImpl.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 19
    invoke-direct {p0}, Landroid/net/ConnectivityManager$NetworkCallback;-><init>()V

    return-void
.end method


# virtual methods
.method public onAvailable(Landroid/net/Network;)V
    .locals 1

    .line 22
    invoke-super {p0, p1}, Landroid/net/ConnectivityManager$NetworkCallback;->onAvailable(Landroid/net/Network;)V

    const-string p1, "network>>>"

    const-string v0, "\u7f51\u7edc\u5df2\u8fde\u63a5"

    .line 23
    invoke-static {p1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public onCapabilitiesChanged(Landroid/net/Network;Landroid/net/NetworkCapabilities;)V
    .locals 0

    .line 34
    invoke-super {p0, p1, p2}, Landroid/net/ConnectivityManager$NetworkCallback;->onCapabilitiesChanged(Landroid/net/Network;Landroid/net/NetworkCapabilities;)V

    const/16 p1, 0x10

    .line 35
    invoke-virtual {p2, p1}, Landroid/net/NetworkCapabilities;->hasCapability(I)Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 p1, 0x1

    .line 36
    invoke-virtual {p2, p1}, Landroid/net/NetworkCapabilities;->hasTransport(I)Z

    move-result p1

    const-string p2, "network>>>"

    if-eqz p1, :cond_0

    const-string p1, "\u7f51\u7edc\u53d1\u751f\u53d8\u66f4\uff0c\u7c7b\u578b\u4e3a\uff1awifi"

    .line 37
    invoke-static {p2, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    :cond_0
    const-string p1, "\u7f51\u7edc\u53d1\u751f\u53d8\u66f4\uff0c\u7c7b\u578b\u4e3a\uff1a4G"

    .line 39
    invoke-static {p2, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    :goto_0
    return-void
.end method

.method public onLost(Landroid/net/Network;)V
    .locals 1

    .line 28
    invoke-super {p0, p1}, Landroid/net/ConnectivityManager$NetworkCallback;->onLost(Landroid/net/Network;)V

    const-string p1, "network>>>"

    const-string v0, "\u7f51\u7edc\u5df2\u65ad\u5f00"

    .line 29
    invoke-static {p1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

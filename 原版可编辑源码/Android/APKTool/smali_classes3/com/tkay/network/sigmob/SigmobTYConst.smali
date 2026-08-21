.class public Lcom/tkay/network/sigmob/SigmobTYConst;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/network/sigmob/SigmobTYConst$DEBUGGER_CONFIG;
    }
.end annotation


# static fields
.field public static final IS_USE_REWARDED_VIDEO_AS_INTERSTITIAL:Ljava/lang/String; = "is_use_rewarded_video_as_interstitial"

.field public static final NETWORK_FIRM_ID:I = 0x1d


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 12
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getNetworkVersion()Ljava/lang/String;
    .locals 1

    .line 24
    :try_start_0
    invoke-static {}, Lcom/sigmob/windad/WindAds;->getVersion()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    move-exception v0

    .line 26
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    const-string v0, ""

    return-object v0
.end method

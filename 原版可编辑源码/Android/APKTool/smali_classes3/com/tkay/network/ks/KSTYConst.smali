.class public Lcom/tkay/network/ks/KSTYConst;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/network/ks/KSTYConst$DEBUGGER_CONFIG;
    }
.end annotation


# static fields
.field public static final NETWORK_FIRM_ID:I = 0x1c

.field public static final REWARDEDVIDEO_SKIP_AFTER_THIRTY_SECOND:Ljava/lang/String; = "KS_RV_SKIP_AFTER_THIRTY_SECOND"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 13
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getNetworkVersion()Ljava/lang/String;
    .locals 1

    .line 27
    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/api/KsAdSDK;->getSDKVersion()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    const-string v0, ""

    return-object v0
.end method

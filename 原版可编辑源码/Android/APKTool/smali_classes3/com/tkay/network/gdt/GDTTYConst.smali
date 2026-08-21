.class public Lcom/tkay/network/gdt/GDTTYConst;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/network/gdt/GDTTYConst$DEBUGGER_CONFIG;
    }
.end annotation


# static fields
.field public static final AD_HEIGHT:Ljava/lang/String; = "gdtad_height"

.field public static final NETWORK_FIRM_ID:I = 0x8

.field protected static final a:Ljava/lang/String; = "299"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 13
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getNetworkVersion()Ljava/lang/String;
    .locals 1

    .line 33
    :try_start_0
    invoke-static {}, Lcom/qq/e/comm/managers/status/SDKStatus;->getIntegrationSDKVersion()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    const-string v0, ""

    return-object v0
.end method

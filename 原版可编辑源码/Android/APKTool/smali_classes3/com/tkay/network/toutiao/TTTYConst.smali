.class public Lcom/tkay/network/toutiao/TTTYConst;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/network/toutiao/TTTYConst$DEBUGGER_CONFIG;
    }
.end annotation


# static fields
.field public static final AD_LOAD_TYPE:Ljava/lang/String; = "tt_ad_load_type"

.field public static final NATIVE_AD_IMAGE_HEIGHT:Ljava/lang/String; = "tt_image_height"

.field public static final NATIVE_AD_INTERRUPT_VIDEOPLAY:Ljava/lang/String; = "tt_can_interrupt_video"

.field public static final NATIVE_AD_VIDEOPLAY_BTN_BITMAP:Ljava/lang/String; = "tt_video_play_btn_bitmap"

.field public static final NATIVE_AD_VIDEOPLAY_BTN_SIZE:Ljava/lang/String; = "tt_video_play_btn_SIZE"

.field public static final NETWORK_FIRM_ID:I = 0xf

.field public static hasRequestPermission:Z


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 13
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getNetworkVersion()Ljava/lang/String;
    .locals 1

    .line 38
    :try_start_0
    invoke-static {}, Lcom/bykv/vk/openvk/TTVfSdk;->getVfManager()Lcom/bykv/vk/openvk/TTVfManager;

    move-result-object v0

    .line 39
    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTVfManager;->getSDKVersion()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    const-string v0, ""

    return-object v0
.end method

.class final Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/qq/e/comm/compliance/DownloadConfirmListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->onADReceive()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;


# direct methods
.method constructor <init>(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;)V
    .locals 0

    .line 264
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3$1;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDownloadConfirm(Landroid/app/Activity;ILjava/lang/String;Lcom/qq/e/comm/compliance/DownloadConfirmCallBack;)V
    .locals 1

    .line 267
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3$1;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->v(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 268
    new-instance v0, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;

    invoke-direct {v0}, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;-><init>()V

    .line 269
    iput-object p3, v0, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;->appInfoUrl:Ljava/lang/String;

    .line 270
    iput p2, v0, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;->scenes:I

    .line 271
    iput-object p4, v0, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;->confirmCallBack:Lcom/qq/e/comm/compliance/DownloadConfirmCallBack;

    .line 272
    iget-object p2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3$1;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;

    iget-object p2, p2, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {p2}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->w(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object p2

    invoke-interface {p2, p1, v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V

    :cond_0
    return-void
.end method

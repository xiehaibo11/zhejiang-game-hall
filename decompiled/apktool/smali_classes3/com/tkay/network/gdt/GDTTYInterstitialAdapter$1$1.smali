.class final Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/qq/e/comm/compliance/DownloadConfirmListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;->onADReceive()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;


# direct methods
.method constructor <init>(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;)V
    .locals 0

    .line 70
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDownloadConfirm(Landroid/app/Activity;ILjava/lang/String;Lcom/qq/e/comm/compliance/DownloadConfirmCallBack;)V
    .locals 1

    .line 73
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 74
    new-instance v0, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;

    invoke-direct {v0}, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;-><init>()V

    .line 75
    iput-object p3, v0, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;->appInfoUrl:Ljava/lang/String;

    .line 76
    iput p2, v0, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;->scenes:I

    .line 77
    iput-object p4, v0, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;->confirmCallBack:Lcom/qq/e/comm/compliance/DownloadConfirmCallBack;

    .line 78
    iget-object p2, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;

    iget-object p2, p2, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    invoke-static {p2}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->b(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p2

    invoke-interface {p2, p1, v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V

    :cond_0
    return-void
.end method

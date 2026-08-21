.class final Lcom/tkay/network/gdt/GDTTYNativeAd$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/qq/e/comm/compliance/DownloadConfirmListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/gdt/GDTTYNativeAd;->registerDownloadConfirmListener()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/gdt/GDTTYNativeAd;


# direct methods
.method constructor <init>(Lcom/tkay/network/gdt/GDTTYNativeAd;)V
    .locals 0

    .line 70
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDownloadConfirm(Landroid/app/Activity;ILjava/lang/String;Lcom/qq/e/comm/compliance/DownloadConfirmCallBack;)V
    .locals 3

    const-string v0, "GDTTYNativeAd"

    const-string v1, "onDownloadConfirm...."

    .line 73
    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 74
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYNativeAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeAd;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYNativeAd;->h:Landroid/view/View;

    .line 75
    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYNativeAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeAd;

    const/4 v2, 0x0

    iput-object v2, v1, Lcom/tkay/network/gdt/GDTTYNativeAd;->h:Landroid/view/View;

    .line 76
    new-instance v1, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;

    invoke-direct {v1}, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;-><init>()V

    .line 77
    iput-object p3, v1, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;->appInfoUrl:Ljava/lang/String;

    .line 78
    iput p2, v1, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;->scenes:I

    .line 79
    iput-object p4, v1, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;->confirmCallBack:Lcom/qq/e/comm/compliance/DownloadConfirmCallBack;

    .line 80
    iget-object p2, p0, Lcom/tkay/network/gdt/GDTTYNativeAd$1;->a:Lcom/tkay/network/gdt/GDTTYNativeAd;

    invoke-virtual {p2, p1, v0, v1}, Lcom/tkay/network/gdt/GDTTYNativeAd;->notifyDownloadConfirm(Landroid/content/Context;Landroid/view/View;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V

    return-void
.end method

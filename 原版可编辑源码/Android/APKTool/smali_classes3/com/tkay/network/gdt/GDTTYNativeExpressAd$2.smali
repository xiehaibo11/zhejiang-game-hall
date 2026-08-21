.class final Lcom/tkay/network/gdt/GDTTYNativeExpressAd$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/qq/e/comm/compliance/DownloadConfirmListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->registerDownloadConfirmListener()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;


# direct methods
.method constructor <init>(Lcom/tkay/network/gdt/GDTTYNativeExpressAd;)V
    .locals 0

    .line 224
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$2;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDownloadConfirm(Landroid/app/Activity;ILjava/lang/String;Lcom/qq/e/comm/compliance/DownloadConfirmCallBack;)V
    .locals 1

    .line 227
    new-instance v0, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;

    invoke-direct {v0}, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;-><init>()V

    .line 228
    iput-object p3, v0, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;->appInfoUrl:Ljava/lang/String;

    .line 229
    iput p2, v0, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;->scenes:I

    .line 230
    iput-object p4, v0, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;->confirmCallBack:Lcom/qq/e/comm/compliance/DownloadConfirmCallBack;

    .line 231
    iget-object p2, p0, Lcom/tkay/network/gdt/GDTTYNativeExpressAd$2;->a:Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    const/4 p3, 0x0

    invoke-virtual {p2, p1, p3, v0}, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->notifyDownloadConfirm(Landroid/content/Context;Landroid/view/View;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V

    return-void
.end method

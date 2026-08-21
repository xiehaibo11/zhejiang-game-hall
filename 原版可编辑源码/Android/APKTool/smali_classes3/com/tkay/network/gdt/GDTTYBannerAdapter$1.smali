.class final Lcom/tkay/network/gdt/GDTTYBannerAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/qq/e/comm/compliance/DownloadConfirmListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/network/gdt/GDTTYBannerAdapter;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/gdt/GDTTYBannerAdapter;)V
    .locals 0

    .line 53
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDownloadConfirm(Landroid/app/Activity;ILjava/lang/String;Lcom/qq/e/comm/compliance/DownloadConfirmCallBack;)V
    .locals 1

    .line 56
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->a(Lcom/tkay/network/gdt/GDTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 57
    new-instance v0, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;

    invoke-direct {v0}, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;-><init>()V

    .line 58
    iput-object p3, v0, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;->appInfoUrl:Ljava/lang/String;

    .line 59
    iput p2, v0, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;->scenes:I

    .line 60
    iput-object p4, v0, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;->confirmCallBack:Lcom/qq/e/comm/compliance/DownloadConfirmCallBack;

    .line 61
    iget-object p2, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    invoke-static {p2}, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->b(Lcom/tkay/network/gdt/GDTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object p2

    invoke-interface {p2, p1, v0}, Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;->onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V

    :cond_0
    return-void
.end method

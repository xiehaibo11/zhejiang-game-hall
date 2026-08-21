.class final Lcom/tkay/network/gdt/GDTTYSplashAdapter$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/qq/e/comm/compliance/DownloadConfirmListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/gdt/GDTTYSplashAdapter;->onADLoaded(J)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/gdt/GDTTYSplashAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/gdt/GDTTYSplashAdapter;)V
    .locals 0

    .line 217
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYSplashAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDownloadConfirm(Landroid/app/Activity;ILjava/lang/String;Lcom/qq/e/comm/compliance/DownloadConfirmCallBack;)V
    .locals 1

    .line 220
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYSplashAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->a(Lcom/tkay/network/gdt/GDTTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 221
    new-instance v0, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;

    invoke-direct {v0}, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;-><init>()V

    .line 222
    iput-object p3, v0, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;->appInfoUrl:Ljava/lang/String;

    .line 223
    iput p2, v0, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;->scenes:I

    .line 224
    iput-object p4, v0, Lcom/tkay/network/gdt/GDTDownloadFirmInfo;->confirmCallBack:Lcom/qq/e/comm/compliance/DownloadConfirmCallBack;

    .line 225
    iget-object p2, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYSplashAdapter;

    invoke-static {p2}, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->b(Lcom/tkay/network/gdt/GDTTYSplashAdapter;)Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;

    move-result-object p2

    invoke-interface {p2, p1, v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;->onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V

    :cond_0
    return-void
.end method

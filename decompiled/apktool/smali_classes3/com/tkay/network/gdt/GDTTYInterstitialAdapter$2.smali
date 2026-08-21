.class final Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/MediationInitCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Ljava/util/Map;

.field final synthetic c:Ljava/util/Map;

.field final synthetic d:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
    .locals 0

    .line 240
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$2;->d:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    iput-object p2, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$2;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$2;->b:Ljava/util/Map;

    iput-object p4, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$2;->c:Ljava/util/Map;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;)V
    .locals 2

    .line 252
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$2;->d:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    const-string v1, ""

    invoke-virtual {v0, v1, p1}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onSuccess()V
    .locals 5

    .line 243
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$2;->d:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    invoke-virtual {v0}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->getMixedFormatAdType()I

    move-result v0

    if-nez v0, :cond_0

    .line 244
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$2;->d:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    new-instance v1, Lcom/tkay/network/gdt/GDTTYAdapter;

    invoke-direct {v1}, Lcom/tkay/network/gdt/GDTTYAdapter;-><init>()V

    iget-object v2, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$2;->a:Landroid/content/Context;

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$2;->b:Ljava/util/Map;

    iget-object v4, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$2;->c:Ljava/util/Map;

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->thirdPartyLoad(Lcom/tkay/core/api/TYBaseAdAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    return-void

    .line 246
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$2;->d:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$2;->a:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$2;->b:Ljava/util/Map;

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$2;->c:Ljava/util/Map;

    invoke-static {v0, v1, v2, v3}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    return-void
.end method

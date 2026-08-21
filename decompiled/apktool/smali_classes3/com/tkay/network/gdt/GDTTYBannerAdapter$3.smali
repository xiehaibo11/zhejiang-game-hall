.class final Lcom/tkay/network/gdt/GDTTYBannerAdapter$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/gdt/GDTTYBannerAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Ljava/util/Map;

.field final synthetic c:Lcom/tkay/network/gdt/GDTTYBannerAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/gdt/GDTTYBannerAdapter;Landroid/content/Context;Ljava/util/Map;)V
    .locals 0

    .line 197
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$3;->c:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    iput-object p2, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$3;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$3;->b:Ljava/util/Map;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 200
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$3;->a:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$3;->b:Ljava/util/Map;

    new-instance v3, Lcom/tkay/network/gdt/GDTTYBannerAdapter$3$1;

    invoke-direct {v3, p0}, Lcom/tkay/network/gdt/GDTTYBannerAdapter$3$1;-><init>(Lcom/tkay/network/gdt/GDTTYBannerAdapter$3;)V

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/network/gdt/GDTTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V

    return-void
.end method

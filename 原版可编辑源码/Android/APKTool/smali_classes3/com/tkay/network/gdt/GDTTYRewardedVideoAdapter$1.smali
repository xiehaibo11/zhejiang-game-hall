.class final Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/MediationInitCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Ljava/util/Map;

.field final synthetic c:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;Landroid/content/Context;Ljava/util/Map;)V
    .locals 0

    .line 70
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$1;->c:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    iput-object p2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$1;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$1;->b:Ljava/util/Map;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;)V
    .locals 2

    .line 78
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$1;->c:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    const-string v1, ""

    invoke-virtual {v0, v1, p1}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onSuccess()V
    .locals 3

    .line 73
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$1;->c:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$1;->a:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$1;->b:Ljava/util/Map;

    invoke-static {v0, v1, v2}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;Landroid/content/Context;Ljava/util/Map;)V

    return-void
.end method

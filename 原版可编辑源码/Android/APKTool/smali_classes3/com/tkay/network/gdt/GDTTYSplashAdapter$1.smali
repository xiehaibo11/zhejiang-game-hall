.class final Lcom/tkay/network/gdt/GDTTYSplashAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/MediationInitCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/gdt/GDTTYSplashAdapter;->loadCustomNetworkAd(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/util/Map;

.field final synthetic b:Landroid/content/Context;

.field final synthetic c:Ljava/util/Map;

.field final synthetic d:Landroid/content/Context;

.field final synthetic e:Lcom/tkay/network/gdt/GDTTYSplashAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/gdt/GDTTYSplashAdapter;Ljava/util/Map;Landroid/content/Context;Ljava/util/Map;Landroid/content/Context;)V
    .locals 0

    .line 91
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter$1;->e:Lcom/tkay/network/gdt/GDTTYSplashAdapter;

    iput-object p2, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter$1;->a:Ljava/util/Map;

    iput-object p3, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter$1;->b:Landroid/content/Context;

    iput-object p4, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter$1;->c:Ljava/util/Map;

    iput-object p5, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter$1;->d:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;)V
    .locals 2

    .line 106
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter$1;->e:Lcom/tkay/network/gdt/GDTTYSplashAdapter;

    const-string v1, ""

    invoke-virtual {v0, v1, p1}, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onSuccess()V
    .locals 5

    .line 94
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter$1;->e:Lcom/tkay/network/gdt/GDTTYSplashAdapter;

    invoke-virtual {v0}, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->getMixedFormatAdType()I

    move-result v0

    if-nez v0, :cond_1

    .line 95
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter$1;->a:Ljava/util/Map;

    const-string v1, "video_muted"

    invoke-interface {v0, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 96
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter$1;->a:Ljava/util/Map;

    const-string v2, "1"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 98
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter$1;->e:Lcom/tkay/network/gdt/GDTTYSplashAdapter;

    new-instance v1, Lcom/tkay/network/gdt/GDTTYAdapter;

    invoke-direct {v1}, Lcom/tkay/network/gdt/GDTTYAdapter;-><init>()V

    iget-object v2, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter$1;->b:Landroid/content/Context;

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter$1;->a:Ljava/util/Map;

    iget-object v4, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter$1;->c:Ljava/util/Map;

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->thirdPartyLoad(Lcom/tkay/core/api/TYBaseAdAdapter;Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V

    return-void

    .line 100
    :cond_1
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter$1;->e:Lcom/tkay/network/gdt/GDTTYSplashAdapter;

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter$1;->d:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/network/gdt/GDTTYSplashAdapter$1;->a:Ljava/util/Map;

    invoke-static {v0, v1, v2}, Lcom/tkay/network/gdt/GDTTYSplashAdapter;->a(Lcom/tkay/network/gdt/GDTTYSplashAdapter;Landroid/content/Context;Ljava/util/Map;)V

    return-void
.end method

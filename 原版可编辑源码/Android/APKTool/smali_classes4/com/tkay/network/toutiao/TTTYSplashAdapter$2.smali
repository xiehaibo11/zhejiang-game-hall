.class final Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/toutiao/TTTYSplashAdapter;->a(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/bykv/vk/openvk/VfSlot$Builder;

.field final synthetic b:Lcom/bykv/vk/openvk/TTVfNative;

.field final synthetic c:Lcom/tkay/network/toutiao/TTTYSplashAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYSplashAdapter;Lcom/bykv/vk/openvk/VfSlot$Builder;Lcom/bykv/vk/openvk/TTVfNative;)V
    .locals 0

    .line 191
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;->c:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    iput-object p2, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;->a:Lcom/bykv/vk/openvk/VfSlot$Builder;

    iput-object p3, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;->b:Lcom/bykv/vk/openvk/TTVfNative;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 195
    :try_start_0
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;->a:Lcom/bykv/vk/openvk/VfSlot$Builder;

    invoke-virtual {v0}, Lcom/bykv/vk/openvk/VfSlot$Builder;->build()Lcom/bykv/vk/openvk/VfSlot;

    move-result-object v0

    .line 196
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;->b:Lcom/bykv/vk/openvk/TTVfNative;

    new-instance v2, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2$1;

    invoke-direct {v2, p0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2$1;-><init>(Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;)V

    iget-object v3, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;->c:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    .line 239
    invoke-static {v3}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->d(Lcom/tkay/network/toutiao/TTTYSplashAdapter;)I

    move-result v3

    .line 196
    invoke-interface {v1, v0, v2, v3}, Lcom/bykv/vk/openvk/TTVfNative;->loadSphVs(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$CSJSplashAdListener;I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 242
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYSplashAdapter$2;->c:Lcom/tkay/network/toutiao/TTTYSplashAdapter;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v2, ""

    invoke-virtual {v1, v2, v0}, Lcom/tkay/network/toutiao/TTTYSplashAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

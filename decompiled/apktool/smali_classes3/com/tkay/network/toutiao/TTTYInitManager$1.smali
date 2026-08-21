.class final Lcom/tkay/network/toutiao/TTTYInitManager$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/toutiao/TTTYInitManager;->initSDK(Landroid/content/Context;Ljava/util/Map;Lcom/tkay/core/api/MediationInitCallback;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:[I

.field final synthetic d:Landroid/content/Context;

.field final synthetic e:Lcom/tkay/network/toutiao/TTTYInitManager;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYInitManager;Ljava/lang/String;Ljava/lang/String;[ILandroid/content/Context;)V
    .locals 0

    .line 160
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYInitManager$1;->e:Lcom/tkay/network/toutiao/TTTYInitManager;

    iput-object p2, p0, Lcom/tkay/network/toutiao/TTTYInitManager$1;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/tkay/network/toutiao/TTTYInitManager$1;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/tkay/network/toutiao/TTTYInitManager$1;->c:[I

    iput-object p5, p0, Lcom/tkay/network/toutiao/TTTYInitManager$1;->d:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    const/4 v0, 0x0

    .line 165
    :try_start_0
    new-instance v1, Lcom/bykv/vk/openvk/TTVfConfig$Builder;

    invoke-direct {v1}, Lcom/bykv/vk/openvk/TTVfConfig$Builder;-><init>()V

    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYInitManager$1;->a:Ljava/lang/String;

    .line 166
    invoke-virtual {v1, v2}, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->appId(Ljava/lang/String;)Lcom/bykv/vk/openvk/TTVfConfig$Builder;

    move-result-object v1

    const/4 v2, 0x1

    .line 167
    invoke-virtual {v1, v2}, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->useTextureView(Z)Lcom/bykv/vk/openvk/TTVfConfig$Builder;

    move-result-object v1

    iget-object v3, p0, Lcom/tkay/network/toutiao/TTTYInitManager$1;->b:Ljava/lang/String;

    .line 168
    invoke-virtual {v1, v3}, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->appName(Ljava/lang/String;)Lcom/bykv/vk/openvk/TTVfConfig$Builder;

    move-result-object v1

    .line 169
    invoke-virtual {v1, v2}, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->titleBarTheme(I)Lcom/bykv/vk/openvk/TTVfConfig$Builder;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYInitManager$1;->c:[I

    .line 170
    invoke-virtual {v1, v2}, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->directDownloadNetworkType([I)Lcom/bykv/vk/openvk/TTVfConfig$Builder;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYInitManager$1;->e:Lcom/tkay/network/toutiao/TTTYInitManager;

    .line 171
    invoke-static {v2}, Lcom/tkay/network/toutiao/TTTYInitManager;->a(Lcom/tkay/network/toutiao/TTTYInitManager;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->data(Ljava/lang/String;)Lcom/bykv/vk/openvk/TTVfConfig$Builder;

    move-result-object v1

    .line 172
    invoke-virtual {v1, v0}, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->supportMultiProcess(Z)Lcom/bykv/vk/openvk/TTVfConfig$Builder;

    move-result-object v1

    .line 174
    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYInitManager$1;->e:Lcom/tkay/network/toutiao/TTTYInitManager;

    iget-object v2, v2, Lcom/tkay/network/toutiao/TTTYInitManager;->a:Lcom/bykv/vk/openvk/TTCustomController;

    if-eqz v2, :cond_0

    .line 175
    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYInitManager$1;->e:Lcom/tkay/network/toutiao/TTTYInitManager;

    iget-object v2, v2, Lcom/tkay/network/toutiao/TTTYInitManager;->a:Lcom/bykv/vk/openvk/TTCustomController;

    invoke-virtual {v1, v2}, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->customController(Lcom/bykv/vk/openvk/TTCustomController;)Lcom/bykv/vk/openvk/TTVfConfig$Builder;

    .line 188
    :cond_0
    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYInitManager$1;->d:Landroid/content/Context;

    invoke-virtual {v1}, Lcom/bykv/vk/openvk/TTVfConfig$Builder;->build()Lcom/bykv/vk/openvk/TTVfConfig;

    move-result-object v1

    new-instance v3, Lcom/tkay/network/toutiao/TTTYInitManager$1$1;

    invoke-direct {v3, p0}, Lcom/tkay/network/toutiao/TTTYInitManager$1$1;-><init>(Lcom/tkay/network/toutiao/TTTYInitManager$1;)V

    invoke-static {v2, v1, v3}, Lcom/bykv/vk/openvk/TTVfSdk;->init(Landroid/content/Context;Lcom/bykv/vk/openvk/TTVfConfig;Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v1

    .line 208
    iget-object v2, p0, Lcom/tkay/network/toutiao/TTTYInitManager$1;->e:Lcom/tkay/network/toutiao/TTTYInitManager;

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    const-string v3, ""

    invoke-static {v2, v0, v3, v1}, Lcom/tkay/network/toutiao/TTTYInitManager;->a(Lcom/tkay/network/toutiao/TTTYInitManager;ZLjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

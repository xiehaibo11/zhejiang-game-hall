.class public Lcom/bykv/vk/openvk/downloadnew/core/DownloadBridgeFactory;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 8
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static final getDownloadBridge(Landroid/content/Context;)Lcom/bykv/vk/openvk/TTAdBridge;
    .locals 0

    .line 11
    invoke-static {p0}, Lcom/bykv/vk/openvk/downloadnew/pp;->rg(Landroid/content/Context;)Lcom/bykv/vk/openvk/downloadnew/pp;

    move-result-object p0

    return-object p0
.end method

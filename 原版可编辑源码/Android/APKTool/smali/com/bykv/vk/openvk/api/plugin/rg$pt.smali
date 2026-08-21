.class final Lcom/bykv/vk/openvk/api/plugin/rg$pt;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTVfNative;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bykv/vk/openvk/api/plugin/rg;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "pt"
.end annotation


# instance fields
.field private rg:Lcom/bykv/vk/openvk/api/plugin/rg$df;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/bykv/vk/openvk/api/plugin/rg$df<",
            "Lcom/bykv/vk/openvk/TTVfNative;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Lcom/bykv/vk/openvk/api/plugin/rg$df;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bykv/vk/openvk/api/plugin/rg$df<",
            "Lcom/bykv/vk/openvk/TTVfNative;",
            ">;)V"
        }
    .end annotation

    .line 223
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 224
    iput-object p1, p0, Lcom/bykv/vk/openvk/api/plugin/rg$pt;->rg:Lcom/bykv/vk/openvk/api/plugin/rg$df;

    return-void
.end method

.method private final rg(Lcom/bykv/vk/openvk/TTVfNative$CSJSplashAdListener;Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bykv/vk/openvk/TTVfNative$CSJSplashAdListener;",
            "Lcom/bykv/vk/openvk/api/plugin/rg$rg<",
            "Lcom/bykv/vk/openvk/TTVfNative;",
            ">;)V"
        }
    .end annotation

    .line 365
    :try_start_0
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/rg$pt;->rg:Lcom/bykv/vk/openvk/api/plugin/rg$df;

    invoke-interface {v0, p2}, Lcom/bykv/vk/openvk/api/plugin/rg$df;->rg(Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    if-eqz p1, :cond_0

    .line 368
    new-instance v0, Lcom/bykv/vk/openvk/CSJAdError;

    const/16 v1, 0x106a

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Load ad failed: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-direct {v0, v1, p2}, Lcom/bykv/vk/openvk/CSJAdError;-><init>(ILjava/lang/String;)V

    invoke-interface {p1, v0}, Lcom/bykv/vk/openvk/TTVfNative$CSJSplashAdListener;->onSplashLoadFail(Lcom/bykv/vk/openvk/CSJAdError;)V

    :cond_0
    :goto_0
    return-void
.end method

.method private final rg(Lcom/bykv/vk/openvk/common/CommonListener;Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bykv/vk/openvk/common/CommonListener;",
            "Lcom/bykv/vk/openvk/api/plugin/rg$rg<",
            "Lcom/bykv/vk/openvk/TTVfNative;",
            ">;)V"
        }
    .end annotation

    .line 355
    :try_start_0
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/rg$pt;->rg:Lcom/bykv/vk/openvk/api/plugin/rg$df;

    invoke-interface {v0, p2}, Lcom/bykv/vk/openvk/api/plugin/rg$df;->rg(Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    if-eqz p1, :cond_0

    const/16 v0, 0x106a

    .line 358
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Load ad failed: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-interface {p1, v0, p2}, Lcom/bykv/vk/openvk/common/CommonListener;->onError(ILjava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method


# virtual methods
.method public loadBnExpressVb(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$NtExpressVfListener;)V
    .locals 1

    .line 339
    new-instance v0, Lcom/bykv/vk/openvk/api/plugin/rg$pt$4;

    invoke-direct {v0, p0, p1, p2}, Lcom/bykv/vk/openvk/api/plugin/rg$pt$4;-><init>(Lcom/bykv/vk/openvk/api/plugin/rg$pt;Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$NtExpressVfListener;)V

    invoke-direct {p0, p2, v0}, Lcom/bykv/vk/openvk/api/plugin/rg$pt;->rg(Lcom/bykv/vk/openvk/common/CommonListener;Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V

    return-void
.end method

.method public loadDrawVfList(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$DrawVfListListener;)V
    .locals 1

    .line 249
    new-instance v0, Lcom/bykv/vk/openvk/api/plugin/rg$pt$6;

    invoke-direct {v0, p0, p1, p2}, Lcom/bykv/vk/openvk/api/plugin/rg$pt$6;-><init>(Lcom/bykv/vk/openvk/api/plugin/rg$pt;Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$DrawVfListListener;)V

    invoke-direct {p0, p2, v0}, Lcom/bykv/vk/openvk/api/plugin/rg$pt;->rg(Lcom/bykv/vk/openvk/common/CommonListener;Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V

    return-void
.end method

.method public loadExpressDrawVf(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$NtExpressVfListener;)V
    .locals 1

    .line 329
    new-instance v0, Lcom/bykv/vk/openvk/api/plugin/rg$pt$3;

    invoke-direct {v0, p0, p1, p2}, Lcom/bykv/vk/openvk/api/plugin/rg$pt$3;-><init>(Lcom/bykv/vk/openvk/api/plugin/rg$pt;Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$NtExpressVfListener;)V

    invoke-direct {p0, p2, v0}, Lcom/bykv/vk/openvk/api/plugin/rg$pt;->rg(Lcom/bykv/vk/openvk/common/CommonListener;Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V

    return-void
.end method

.method public loadFullVideoVs(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$FullScreenVideoAdListener;)V
    .locals 1

    .line 309
    new-instance v0, Lcom/bykv/vk/openvk/api/plugin/rg$pt$12;

    invoke-direct {v0, p0, p1, p2}, Lcom/bykv/vk/openvk/api/plugin/rg$pt$12;-><init>(Lcom/bykv/vk/openvk/api/plugin/rg$pt;Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$FullScreenVideoAdListener;)V

    invoke-direct {p0, p2, v0}, Lcom/bykv/vk/openvk/api/plugin/rg$pt;->rg(Lcom/bykv/vk/openvk/common/CommonListener;Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V

    return-void
.end method

.method public loadItExpressVi(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$NtExpressVfListener;)V
    .locals 0

    return-void
.end method

.method public loadNativeVn(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$NtVfListener;)V
    .locals 1

    .line 259
    new-instance v0, Lcom/bykv/vk/openvk/api/plugin/rg$pt$7;

    invoke-direct {v0, p0, p1, p2}, Lcom/bykv/vk/openvk/api/plugin/rg$pt$7;-><init>(Lcom/bykv/vk/openvk/api/plugin/rg$pt;Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$NtVfListener;)V

    invoke-direct {p0, p2, v0}, Lcom/bykv/vk/openvk/api/plugin/rg$pt;->rg(Lcom/bykv/vk/openvk/common/CommonListener;Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V

    return-void
.end method

.method public loadNtExpressVn(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$NtExpressVfListener;)V
    .locals 1

    .line 319
    new-instance v0, Lcom/bykv/vk/openvk/api/plugin/rg$pt$2;

    invoke-direct {v0, p0, p1, p2}, Lcom/bykv/vk/openvk/api/plugin/rg$pt$2;-><init>(Lcom/bykv/vk/openvk/api/plugin/rg$pt;Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$NtExpressVfListener;)V

    invoke-direct {p0, p2, v0}, Lcom/bykv/vk/openvk/api/plugin/rg$pt;->rg(Lcom/bykv/vk/openvk/common/CommonListener;Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V

    return-void
.end method

.method public loadRdVideoVr(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$RdVideoVfListener;)V
    .locals 1

    .line 299
    new-instance v0, Lcom/bykv/vk/openvk/api/plugin/rg$pt$11;

    invoke-direct {v0, p0, p1, p2}, Lcom/bykv/vk/openvk/api/plugin/rg$pt$11;-><init>(Lcom/bykv/vk/openvk/api/plugin/rg$pt;Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$RdVideoVfListener;)V

    invoke-direct {p0, p2, v0}, Lcom/bykv/vk/openvk/api/plugin/rg$pt;->rg(Lcom/bykv/vk/openvk/common/CommonListener;Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V

    return-void
.end method

.method public loadSphVs(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$CSJSplashAdListener;I)V
    .locals 1

    .line 279
    new-instance v0, Lcom/bykv/vk/openvk/api/plugin/rg$pt$9;

    invoke-direct {v0, p0, p1, p2, p3}, Lcom/bykv/vk/openvk/api/plugin/rg$pt$9;-><init>(Lcom/bykv/vk/openvk/api/plugin/rg$pt;Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$CSJSplashAdListener;I)V

    invoke-direct {p0, p2, v0}, Lcom/bykv/vk/openvk/api/plugin/rg$pt;->rg(Lcom/bykv/vk/openvk/TTVfNative$CSJSplashAdListener;Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V

    return-void
.end method

.method public loadSphVs(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$SphVfListener;)V
    .locals 1

    .line 289
    new-instance v0, Lcom/bykv/vk/openvk/api/plugin/rg$pt$10;

    invoke-direct {v0, p0, p1, p2}, Lcom/bykv/vk/openvk/api/plugin/rg$pt$10;-><init>(Lcom/bykv/vk/openvk/api/plugin/rg$pt;Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$SphVfListener;)V

    invoke-direct {p0, p2, v0}, Lcom/bykv/vk/openvk/api/plugin/rg$pt;->rg(Lcom/bykv/vk/openvk/common/CommonListener;Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V

    return-void
.end method

.method public loadSphVs(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$SphVfListener;I)V
    .locals 1

    .line 269
    new-instance v0, Lcom/bykv/vk/openvk/api/plugin/rg$pt$8;

    invoke-direct {v0, p0, p1, p2, p3}, Lcom/bykv/vk/openvk/api/plugin/rg$pt$8;-><init>(Lcom/bykv/vk/openvk/api/plugin/rg$pt;Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$SphVfListener;I)V

    invoke-direct {p0, p2, v0}, Lcom/bykv/vk/openvk/api/plugin/rg$pt;->rg(Lcom/bykv/vk/openvk/common/CommonListener;Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V

    return-void
.end method

.method public loadStream(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$VfListListener;)V
    .locals 1

    .line 239
    new-instance v0, Lcom/bykv/vk/openvk/api/plugin/rg$pt$5;

    invoke-direct {v0, p0, p1, p2}, Lcom/bykv/vk/openvk/api/plugin/rg$pt$5;-><init>(Lcom/bykv/vk/openvk/api/plugin/rg$pt;Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$VfListListener;)V

    invoke-direct {p0, p2, v0}, Lcom/bykv/vk/openvk/api/plugin/rg$pt;->rg(Lcom/bykv/vk/openvk/common/CommonListener;Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V

    return-void
.end method

.method public loadVfList(Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$VfListListener;)V
    .locals 1

    .line 229
    new-instance v0, Lcom/bykv/vk/openvk/api/plugin/rg$pt$1;

    invoke-direct {v0, p0, p1, p2}, Lcom/bykv/vk/openvk/api/plugin/rg$pt$1;-><init>(Lcom/bykv/vk/openvk/api/plugin/rg$pt;Lcom/bykv/vk/openvk/VfSlot;Lcom/bykv/vk/openvk/TTVfNative$VfListListener;)V

    invoke-direct {p0, p2, v0}, Lcom/bykv/vk/openvk/api/plugin/rg$pt;->rg(Lcom/bykv/vk/openvk/common/CommonListener;Lcom/bykv/vk/openvk/api/plugin/rg$rg;)V

    return-void
.end method

.class final Lcom/kwad/components/ad/f/c$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/f/c;->loadNativeAd(Ljava/lang/String;Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic mt:Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/c$2;->mt:Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    const-string v0, "KsAdNativeLoadManager"

    const-string v1, "method parseJson params jsonResult is empty"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/c$2;->mt:Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;

    sget-object v1, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget v1, v1, Lcom/kwad/sdk/core/network/f;->errorCode:I

    sget-object v2, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget-object v2, v2, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    invoke-interface {v0, v1, v2}, Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;->onError(ILjava/lang/String;)V

    return-void
.end method

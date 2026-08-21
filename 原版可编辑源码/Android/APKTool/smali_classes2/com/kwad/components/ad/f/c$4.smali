.class final Lcom/kwad/components/ad/f/c$4;
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
.field final synthetic ie:Lcom/kwad/components/core/response/model/AdResultData;

.field final synthetic mt:Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;Lcom/kwad/components/core/response/model/AdResultData;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/c$4;->mt:Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;

    iput-object p2, p0, Lcom/kwad/components/ad/f/c$4;->ie:Lcom/kwad/components/core/response/model/AdResultData;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/f/c$4;->mt:Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;

    sget-object v1, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget v1, v1, Lcom/kwad/sdk/core/network/f;->errorCode:I

    iget-object v2, p0, Lcom/kwad/components/ad/f/c$4;->ie:Lcom/kwad/components/core/response/model/AdResultData;

    iget-object v2, v2, Lcom/kwad/components/core/response/model/AdResultData;->testErrorMsg:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    sget-object v2, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget-object v2, v2, Lcom/kwad/sdk/core/network/f;->msg:Ljava/lang/String;

    goto :goto_0

    :cond_0
    iget-object v2, p0, Lcom/kwad/components/ad/f/c$4;->ie:Lcom/kwad/components/core/response/model/AdResultData;

    iget-object v2, v2, Lcom/kwad/components/core/response/model/AdResultData;->testErrorMsg:Ljava/lang/String;

    :goto_0
    invoke-interface {v0, v1, v2}, Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;->onError(ILjava/lang/String;)V

    return-void
.end method

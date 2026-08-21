.class final Lcom/kwad/sdk/KsAdSDKImpl$2;
.super Lcom/kwad/sdk/utils/aw;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/KsAdSDKImpl;->notifyInitFail(Lcom/kwad/sdk/api/SdkConfig;Lcom/kwad/sdk/f;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic ahd:Lcom/kwad/sdk/api/KsInitCallback;

.field final synthetic ahe:Lcom/kwad/sdk/f;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/api/KsInitCallback;Lcom/kwad/sdk/f;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/KsAdSDKImpl$2;->ahd:Lcom/kwad/sdk/api/KsInitCallback;

    iput-object p2, p0, Lcom/kwad/sdk/KsAdSDKImpl$2;->ahe:Lcom/kwad/sdk/f;

    invoke-direct {p0}, Lcom/kwad/sdk/utils/aw;-><init>()V

    return-void
.end method


# virtual methods
.method public final doTask()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/KsAdSDKImpl$2;->ahd:Lcom/kwad/sdk/api/KsInitCallback;

    iget-object v1, p0, Lcom/kwad/sdk/KsAdSDKImpl$2;->ahe:Lcom/kwad/sdk/f;

    iget v1, v1, Lcom/kwad/sdk/f;->code:I

    iget-object v2, p0, Lcom/kwad/sdk/KsAdSDKImpl$2;->ahe:Lcom/kwad/sdk/f;

    iget-object v2, v2, Lcom/kwad/sdk/f;->msg:Ljava/lang/String;

    invoke-interface {v0, v1, v2}, Lcom/kwad/sdk/api/KsInitCallback;->onFail(ILjava/lang/String;)V

    return-void
.end method

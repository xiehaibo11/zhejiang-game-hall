.class final Lcom/kwad/sdk/KsAdSDKImpl$3;
.super Lcom/kwad/sdk/utils/aw;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/KsAdSDKImpl;->notifyInitSuccess(Lcom/kwad/sdk/api/SdkConfig;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic ahd:Lcom/kwad/sdk/api/KsInitCallback;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/api/KsInitCallback;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/KsAdSDKImpl$3;->ahd:Lcom/kwad/sdk/api/KsInitCallback;

    invoke-direct {p0}, Lcom/kwad/sdk/utils/aw;-><init>()V

    return-void
.end method


# virtual methods
.method public final doTask()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/KsAdSDKImpl$3;->ahd:Lcom/kwad/sdk/api/KsInitCallback;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsInitCallback;->onSuccess()V

    return-void
.end method

.class public Lcom/kwad/components/offline/api/core/network/model/NormalOfflineCompoResultData;
.super Lcom/kwad/components/offline/api/core/network/model/BaseOfflineCompoResultData;


# instance fields
.field public code:I

.field public data:Ljava/lang/String;

.field public header:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/offline/api/core/network/model/BaseOfflineCompoResultData;-><init>()V

    return-void
.end method


# virtual methods
.method public parseResponse(Lcom/kwad/sdk/core/network/c;)V
    .locals 1

    iget v0, p1, Lcom/kwad/sdk/core/network/c;->code:I

    iput v0, p0, Lcom/kwad/components/offline/api/core/network/model/NormalOfflineCompoResultData;->code:I

    iget-object p1, p1, Lcom/kwad/sdk/core/network/c;->aoM:Ljava/lang/String;

    iput-object p1, p0, Lcom/kwad/components/offline/api/core/network/model/NormalOfflineCompoResultData;->data:Ljava/lang/String;

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/kwad/components/offline/api/core/network/model/NormalOfflineCompoResultData;->header:Ljava/lang/String;

    return-void
.end method

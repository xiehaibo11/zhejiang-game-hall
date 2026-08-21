.class public final Lcom/sigmob/sdk/base/models/rtb/Tracking$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/rtb/Tracking;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/rtb/Tracking;",
        "Lcom/sigmob/sdk/base/models/rtb/Tracking$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public tracking_event_type:Ljava/lang/String;

.field public tracking_url:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    const-string v0, ""

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/Tracking$Builder;->tracking_event_type:Ljava/lang/String;

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/rtb/Tracking$Builder;->tracking_url:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/Tracking$Builder;->build()Lcom/sigmob/sdk/base/models/rtb/Tracking;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/rtb/Tracking;
    .locals 4

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/Tracking;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/Tracking$Builder;->tracking_event_type:Ljava/lang/String;

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/rtb/Tracking$Builder;->tracking_url:Ljava/util/List;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-direct {v0, v1, v2, v3}, Lcom/sigmob/sdk/base/models/rtb/Tracking;-><init>(Ljava/lang/String;Ljava/util/List;Lcom/czhj/wire/okio/ByteString;)V

    return-object v0
.end method

.method public tracking_event_type(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/rtb/Tracking$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/Tracking$Builder;->tracking_event_type:Ljava/lang/String;

    return-object p0
.end method

.method public tracking_url(Ljava/util/List;)Lcom/sigmob/sdk/base/models/rtb/Tracking$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/sigmob/sdk/base/models/rtb/Tracking$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/Tracking$Builder;->tracking_url:Ljava/util/List;

    return-object p0
.end method
